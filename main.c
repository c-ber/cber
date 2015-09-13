/*
 * main.c：
 *
 * history：
 *      Created on: 2015-4-29 Author: cb
 *
 * Copyright 2014 - Shenzhen MifiData technology Co.,Ltd. All rights reserved
 *
 *  No Part of this file may be reproduced, stored in a retrieval system, or
 *  transmitted, in any form, or by any means,electronic, mechanical, photocopying,
 *  recording, or otherwise,without the prior consent of MifiData Tech.
 */

#include    <string.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <sys/types.h>
#include    <sys/wait.h>
#include    <pthread.h>
#include    <fcntl.h>
#include    <errno.h>
#include    <time.h>


#include    "ezxml.h"
#include    "global.h"


//slen 是用于对于存在'\0'的字符串的处理
char * strstr_cb(const char *s1, int slen)
{
    size_t len;
    int i = 0;

    const char *p = s1;
    len = 18;

    for(; i <= slen- len ; p++,i++)
    {
        if( *p == 0x6d  &&  *(p+1) == 0x65 && *(p+2) == 0x28 &&
            *(p+3) == 0x31  &&  *(p+4) == 0x34)
        {
            return (char *)(p+3);
        }
    }
    return NULL;
}

fm_code_t parse_xml_msg(char * sdata, int len)
{
    fm_code_t result = FM_OK;

    if(sdata == NULL)
        return FM_ERR;

    char * pdata = NULL;
    pdata = strstr_cb(sdata+0x22b0, len-0x22b0);

    unsigned long long ltime =  atoll(pdata);
    printf("%ld\n" , ltime);
    return result;

}
fm_code_t send_xml_request(const char * url)
{
    char   *pbody = http_buf;
    char   *header_lines[1] = {header_line};
    HTTP   http;

    memset(pbody, 0 , sizeof(http_buf));
    memset(&http, 0 , sizeof(http));
    http.http_method = HTTP_POST;
    http.server_url  = url;
    http.body_length = strlen(pbody);

    memset(header_line, 0, sizeof(header_line));
    sprintf(header_line,
            "Host: open.baidu.com\r\n"\
            "Connection: keep-alive\r\n"\
            "Referer: http://open.baidu.com/special/time\r\n"\
            "Accept-Language: zh-CN,zh;q=0.8"\
            );

    HttpCode httpcode = http_request_w_body(&http, header_lines, 1, pbody);
    if(httpcode == HTTP_OK)
    {
        if( (http.content_length > 0) && (http.content != NULL) )
        {
            parse_xml_msg(http.content, http.content_length );
        }
    }

    return FM_OK;
}
//window.baidu_time(
int main(int argc, char **argv)
{
    //set_server_url("http://58.135.78.168:8088/mifi_device_system/report");
    //set_server_url("http://192.168.100.80:8080/serverReq");

    send_xml_request("http://open.baidu.com/special/time/");

    return 0;
}



