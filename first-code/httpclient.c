/*
 * httpclient.c
 *
 * history��
 *      Created on: 2015-3-12 Author: cb
 *
 * Copyright 2014 - Shenzhen MifiData technology Co.,Ltd. All rights reserved
 *
 *  No Part of this file may be reproduced, stored in a retrieval system, or
 *  transmitted, in any form, or by any means,electronic, mechanical, photocopying,
 *  recording, or otherwise,without the prior consent of MifiData Tech.
 */


#include "httpclient.h"
#include <stdlib.h>
#include <zlib.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <ctype.h>
#include <sys/time.h>
#include <time.h>

#define HTTP_RETRY_NUM       1
#define HTTP_RETRY_TIME      5
#define HTTP_PORT            80
#define HTTPS_PORT           443 /* no https support for now */
#define HTTP_1_1_STR         "HTTP/1.1"

static const char* HTTP_REQUESTS[] =
{
    "GET",
    "HEAD",
    "POST",
    "PUT",
    "DELETE",
    "TRACE",
    "OPTIONS",
    "CONNECT",
    "PATCH"
};

//�����˶ѿռ䣬����ʱ��ע�����
static char* URL_encode(const char * addr)
{
    uint16_t special_chars_count = 0;
    static const char reserved_chars[] = "!*\'();:@&=+$,/=#[]-_.~?";

    const char *c = addr;
    for ( ; *c != '\0'; c++)
    {
        if (!isalpha(*c) && !isdigit(*c) && strchr(reserved_chars, *c) == NULL)
            ++special_chars_count;
    }

    char* enc_addr = (char*) malloc(strlen(addr) + 2 * special_chars_count + 1);
    char* new = &enc_addr[0];
    const char *old = addr;
    for (; *old != '\0';)
    {
        if (!isalpha(*old) && !isdigit(*old) && strchr(reserved_chars, *old) == NULL)
        {
            new += sprintf(new, "%%%X", *old++);
        }
        else
            *new++ = *old++;
    }

    *new = '\0';

    return enc_addr;
}


static bool dissect_address(const char* address, char* host,
        const size_t max_host_length, char* resource, const size_t max_resource_length)
{
    char* encoded_addr = URL_encode(address);

    /* remove any protocol headers (f.e. "http://") before we search for first '/' */
    char* start_pos = strstr(encoded_addr, "://");
    start_pos = ((start_pos == NULL) ? (char*) encoded_addr : start_pos + 3);

    char* slash_pos = strchr(start_pos, '/');

    /* no resource, send request to index.html*/
    if (slash_pos == NULL || slash_pos[1] == '\0')
    {
        strcpy(host, start_pos);

        /* remove slash from host if any */
        if (slash_pos != NULL)
            strchr(host, '/')[0] = '\0';

        strcpy(resource, "/");
        fm_safefree(encoded_addr);
        return true;
    }

    char* addr_end = strchr(slash_pos, '\0');

    if (start_pos >= slash_pos - 1)
    {
        fm_safefree(encoded_addr);
        return false;
    }

    if (slash_pos - start_pos > max_host_length)
    {
        fm_safefree(encoded_addr);
        return false;
    }

    if (addr_end - slash_pos > max_resource_length)
    {
        fm_safefree(encoded_addr);
        return false;
    }

    strcpy(host, start_pos);
    host[slash_pos - start_pos] = '\0';
    strcpy(resource, slash_pos);
    resource[addr_end - slash_pos] = '\0';

    fm_safefree(encoded_addr);
    return true;
}


static bool build_http_request(const char* host, const char* resource, const HTTP_METHOD http_method, char* request,
            char** header_lines, const size_t header_line_count, char* const body)
{
    sprintf(request, "%s %s %s\r\nHost: %s\r\nContent-Type: application/x-www-form-urlencoded\r\n",
                     HTTP_REQUESTS[http_method],
                     resource,
                     HTTP_1_1_STR,
                     host);
    uint16_t i = 0;
    for ( i = 0; i < header_line_count; ++i)
    {
        sprintf(request, "%s%s\r\n", request, header_lines[i]);
    }
    strcat(request, "\r\n");
    if (body != NULL)
        strcat(request, body);
    strcat(request, "\r\n\r\n");
    return true;
}


static void socket_set_timeout(socket_t socket, uint32_t seconds, uint32_t usec)
{
    struct timeval tv;

    tv.tv_sec = seconds;
    tv.tv_usec = usec;

    setsockopt(socket, SOL_SOCKET, SO_SNDTIMEO, (char *)&tv,sizeof(struct timeval));
    setsockopt(socket, SOL_SOCKET, SO_RCVTIMEO, (char *)&tv,sizeof(struct timeval));
}


static socket_t connectSocket(struct hostent* host, int port, const char *proto)
{
    socket_t sock;

    if(strncmp(proto, "TCP", 3) == 0)
    {
        sock = socket(AF_INET, SOCK_STREAM, 0);
    }
    else
    {
        sock = socket(AF_INET, SOCK_DGRAM, 0);
    }

    if (sock < 0)
    {
        return -1;
    }

    struct sockaddr_in server_addr;
    memset((char*) &server_addr, 0, sizeof(server_addr));

    server_addr.sin_family = AF_INET;

    memcpy((char*) &server_addr.sin_addr.s_addr, (char*) host->h_addr_list[0], host->h_length);

    server_addr.sin_port = htons(port);
    socket_set_timeout( sock, SOCKET_TIME_OUT, 0 );
    /* create TCP connection to host */
    int res =  connect(sock, (struct sockaddr*) &server_addr, sizeof(server_addr));
    if (res < 0)
    {
        close(sock);
        return -1;
    }
    return sock;
}
static socket_t connectTCP(struct hostent* host, const int port)
{
    return connectSocket(host, port, "TCP");
}

static void socket_close(socket_t socket)
{
    if (socket >= 0)
    {
        close(socket);
    }
}

//**************************************************
//������:parse_http_field
//˵��������httpͷ����¼content�ֽ��������ҵ�content������ʼλ��
//������data�����յı��ģ�http��httpЭ��ṹ��
//���أ�HttpCode
//**************************************************
static HttpCode parse_http_field(char *data, HTTP *http)
{
    HttpCode result = HTTP_OK;
    int      i = 0;
    char     stfilesize[10] = {0};
    char*    content = data;

    if ( NULL == data ){
        return HTTP_PARSE_ERR;
    }

    /* parse first line. FORMAT:[HTTP/1.1 <STATUS_CODE> <STATUS_TEXT>] */
    content = strchr(data, ' ');//http��Ӧ��
    if ( NULL == content ){
        return HTTP_PARSE_ERR;
    }
    http->http_status = atoi(content);
    content = strchr(content + 1, ' ') + 1;

    content = strstr(content, "\r\n\r\n");
    if( NULL == content ){
        return HTTP_PARSE_ERR;
    }
    content += 4;
    http->content_length = strlen(content);
    http->content = content;

    return result;
}
//************************************************************
//������:GetServerIP
//˵��������URL����������˵�IP�Ͷ˿�
//������host_addr��URL�з�������ַ����, resource_addr:URL����Դ�ļ�����
//    addr:URL                , protno��tcp�˿�
//���أ�hostentָ��
//************************************************************
struct hostent*  GetServerIP(char host_addr[],
                             char resource_addr[],
                             const char *addr,
                             int *portno)
{
    //������ip�Ͷ˿ڵ��ַ���
    if (!dissect_address(addr, host_addr, URL_MAX_LEN, resource_addr, URL_MAX_LEN))
    {
        return NULL;
    }
    char *pport = strstr(host_addr, ":");
    if ( NULL != pport )
    {
        *pport = '\0';
        *portno = atoi(++pport);
    }
    /* do DNS lookup */
    return gethostbyname(host_addr);
}
//************************************************************
//������:_http_request
//˵����ʵ��HTTP������ͣ��Լ����ݽ���
//������http:httpЭ��ṹ��,
//    hlines:�Զ����httpͷ,hline_count:�Զ����httpͷ������
//    body:http���������������
//���أ�HttpCode
//************************************************************
static HttpCode _http_request(HTTP *http, char** hlines, size_t hline_count, char* const body)
{
    HttpCode result = HTTP_OK;
    int portno = HTTP_PORT;
    char host_addr[URL_MAX_LEN];
    char resource_addr[URL_MAX_LEN];

    struct hostent* server;//������ص���һ����̬���飬����Ҫ�ͷ�
    server = GetServerIP(host_addr,resource_addr,http->server_url, &portno);
    if (server == NULL)
    {
        LogFile(FMPROCLOG,"����URL�����ߵ�ǰ�豸û����������.");
        return HTTP_FIND_HOST_ERR;
    }

    /* open socket to host */
    socket_t sock = connectTCP(server, portno);
    if (sock < 0)
    {
        LogFile(FMPROCLOG,"connect server port failed!\n");
        return HTTP_CONNECT_ERR;
    }

    socket_set_timeout(sock, SOCKET_TIME_OUT, 0);

    size_t http_req_size = 256 + strlen(http->server_url);
    size_t i = 0;
    for ( i = 0; i < hline_count; ++i)
    {
        http_req_size += strlen(hlines[i]);
    }
    if (body != NULL)
        http_req_size += strlen(body);

    char http_req_str[RCV_OR_XML_MAX_LEN] = {0};
    build_http_request(host_addr, resource_addr, http->http_method,
            http_req_str, hlines, hline_count, body);

    /* send http request */
    int len = write(sock, http_req_str, strlen(http_req_str));
    LogFile(FMDATALOG,"Send:%s\n",http_req_str);

    if (len < 0)
    {
        socket_close(sock);
        return HTTP_SEND_ERR;
    }
    LogFile(FMPROCLOG,"���ݷ��ͳɹ�.\n");

    uint32_t cycles = 0;
    recv_len = 0;
    char *resp_str = http_buf;
    memset(http_buf, 0, sizeof(http_buf));
    do
    {
        len = recv(sock, resp_str + recv_len, MAX_RECV_SIZE, 0);

        if (len <= 0 && cycles >= 0)
        {
            break;
        }
        recv_len += len;
        ++cycles;
    } while (true);

    if (recv_len <= 0)
    {
        LogFile(FMPROCLOG,"û���յ��������Ӧ.\n");
        socket_close(sock);
        return HTTP_RECV_ERR;
    }
    LogFile(FMPROCLOG,"�յ����������.\n");
    socket_close(sock);

    return result;
}

HttpCode http_request_w_body(HTTP *http,
                             char** header_lines,
                             size_t header_line_count,
                             char* const body)
{
    HttpCode result = HTTP_OK;

    /* loop until a non-redirect page is found (up to 5 times, as per spec recommendation) */
    char redirects = 0;
    for ( redirects = 0; redirects < HTTP_RETRY_NUM; ++redirects)
    {
        result = _http_request(http, header_lines, header_line_count, body);

        if (result != HTTP_OK)
        {
            sleep(HTTP_RETRY_TIME);
            continue;
        }
        LogFile(FMDATALOG,"Recv:%s\n",http_buf);

        result = parse_http_field(http_buf, http);
        if (result != HTTP_OK)
        {
            sleep(HTTP_RETRY_TIME);
            continue;
        }

        //������յ�http��Ӧ���ԣ�Ӧ��Ҫ����
        if (http->http_status != 200)
        {
            return HTTP_PARSE_ERR;
        }
        else
        {
            break;
        }
    }

    if (redirects  >= HTTP_RETRY_NUM)
    {
        return HTTP_OUT_OF_TRY;
    }
    return result;
}

//**************************************************
//������:http_download_file
//˵�����������غ���
//������address��url, http_method��http���󷽷�,
//    header_lines:��ӵ�httpͷ����,
//    header_line_count�����ͷ������
//���أ�STEP_OK-�ɹ�����  ����-������
//**************************************************
static HttpCode _http_downlaod_socket(HTTP *http,
                                      char** header_lines,
                                      size_t header_line_count,  char *save_file)
{
	if ( NULL == save_file )
		return HTTP_OPEN_FILE_ERR;
    HttpCode result = HTTP_OK;
    int len    = 0;
    int portno = HTTP_PORT;
    int hava_rcv_data_size = 0;               //�Ѿ����յ��ļ����ݳ���
    int curRcvFileSize     = 0;               //��ǰ���ν��յ��ļ����ݳ���

    char host_addr[URL_MAX_LEN]     = {0};
    char resource_addr[URL_MAX_LEN] = {0};
    char sndBuf[400]     = {0};               //�������ݻ�����
    char rcvBuf[MAX_RECV_SIZE] = {0};         //�������ݻ�����


    socket_t        sockfd;
    struct hostent* server;
    server = GetServerIP(host_addr,resource_addr,http->server_url, &portno);
    if (server == NULL)
    {
        LogFile(FMPROCLOG,"�������ص�ַ�����߿��ܵ�ǰ�豸û����������.");
        return HTTP_FIND_HOST_ERR;
    }

    /* connect the socket */
    sockfd = connectTCP(server, portno);
    if (sockfd < 0)
    {
        LogFile(FMPROCLOG,"connect server port failed!");
        return HTTP_CONNECT_ERR;
    }
    socket_set_timeout(sockfd, SOCKET_TIME_OUT, 0);//���ý��պͷ��͵ĳ�ʱʱ��

    build_http_request(host_addr, resource_addr, http->http_method, sndBuf,
                       header_lines, header_line_count, NULL);

    len = write(sockfd, sndBuf, strlen(sndBuf));
    if (len < 0)
    {
        LogFile(FMPROCLOG,"send data fail.");
        socket_close(sockfd);
        return HTTP_SEND_ERR;
    }
    LogFile(FMPROCLOG,"�ļ����������ͳɹ�.\n");

    memset(rcvBuf, 0, sizeof(rcvBuf));
    int firstPacket = 1;
    while(true)
    {
        FILE *fp = NULL;

        len = recv(sockfd, rcvBuf, MAX_RECV_SIZE, 0 );
        if(len < 0)
        {
            LogFile(FMPROCLOG,"û���յ�����˵���������,��Ҫ�������״��.");
            return HTTP_RECV_ERR;
        }

        if(firstPacket)
        {
            LogFile(FMPROCLOG,"�������������ļ�ѹ����...");
            result = parse_http_field(rcvBuf, http);
            if(result != HTTP_OK)
            {
                LogFile(FMPROCLOG, "�����ķ�������ذ�����ȷ.");
                return result;
            }
            curRcvFileSize = len - (http->content - rcvBuf);
            if((fp = fopen(save_file, "wb")) != NULL)
            {
                fwrite( http->content,curRcvFileSize,1,fp );
                fclose(fp);
            }
            firstPacket = 0;
        }
        else
        {
            //����д���ļ�
            curRcvFileSize = len;
            if((fp = fopen(save_file, "ab")) != NULL)
            {
                fwrite( rcvBuf,curRcvFileSize,1,fp );
                fclose(fp);
            }
        }
        hava_rcv_data_size += curRcvFileSize;
        if (hava_rcv_data_size >= http->content_length)
        {
            break;
        }
    }
    socket_close(sockfd);
    return result;
}
//**************************************************
//������:http_download_file
//˵�����������غ���
//������address��url, http_method�����󷽷�,
//    header_lines:��ӵ�httpͷ����,
//    header_line_count�����ͷ������
//���أ�STEP_OK-�ɹ�����  ����-������
//**************************************************
HttpCode http_download_file(HTTP *http,
                            char** header_lines,
                            size_t header_line_count, char *save_file)
{
    int   tot_len;
    int   header_len;
    int   body_len;
    char* body_pos = NULL;
    HttpCode result = HTTP_OK;

    //���Ը�����������
    char redirects = 0;

    for ( redirects = 0; redirects < 2; ++redirects)
    {
        result = _http_downlaod_socket(http,
                                       header_lines,
                                       header_line_count, save_file);
        if ( result == HTTP_OK)
        {
            break;
        }
    }
    return result;
}
HttpCode http_request(HTTP *http, char** header_lines, size_t header_line_count)
{
    return http_request_w_body(http, header_lines, header_line_count, NULL);
}


