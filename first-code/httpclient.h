/*
 * httpclient.h
 *
 * history：
 *      Created on: 2015-3-12 Author: cb
 *
 * Copyright 2014 - Shenzhen MifiData technology Co.,Ltd. All rights reserved
 *
 *  No Part of this file may be reproduced, stored in a retrieval system, or
 *  transmitted, in any form, or by any means,electronic, mechanical, photocopying,
 *  recording, or otherwise,without the prior consent of MifiData Tech.
 */


#ifndef _HTTP_CLIENT_H__
#define _HTTP_CLIENT_H__
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <stddef.h>

#include "global.h"

#define HTTP_REQ_GET      0
#define HTTP_REQ_HEAD     1
#define HTTP_REQ_POST     2
#define HTTP_REQ_PUT      3
#define HTTP_REQ_DELETE   4
#define HTTP_REQ_TRACE    5
#define HTTP_REQ_OPTIONS  6
#define HTTP_REQ_CONNECT  7
#define HTTP_REQ_PATCH    8


#define    URL_MAX_LEN         128
#define    HEADER_LEN          1280
#define    MAX_RECV_SIZE       1500  //下载接收数据缓冲长度
#define    RCV_OR_XML_MAX_LEN  20000

char header_line[HEADER_LEN];
char http_buf[RCV_OR_XML_MAX_LEN];
int  recv_len;


#define SOCKET_TIME_OUT     10
#define CONTENT_MAX_LEN     20000

typedef unsigned int   uint32_t;
typedef unsigned short uint16_t;
typedef int            socket_t;


//错误码
typedef enum
{
    HTTP_OK = 0,
    HTTP_OPEN_FILE_ERR,
    HTTP_FAILED_INIT,
    HTTP_URL_MALFORMAT,
    HTTP_FIND_HOST_ERR,
    HTTP_SOCK_OPEN_ERR,
    HTTP_SEND_ERR,
    HTTP_RECV_ERR,
    HTTP_CONNECT_ERR,
    HTTP_PARSE_ERR,
    HTTP_BODY_LEN_ERR,
    HTTP_OUT_OF_TRY
}HttpCode;


typedef enum
{
    HTTP_GET = 0,
    HTTP_HEAD,
    HTTP_POST,
    HTTP_PUT,
    HTTP_DELETE,
    HTTP_TRACE,
    HTTP_OPTIONS,
    HTTP_CONNECT,
    HTTP_PATCH
}HTTP_METHOD;


//http header lines
typedef struct  _header_field{
    char *filed;        //消息报文头
    char *value;        //值域
    struct slist *next; //单链表指针
}sListNode,*sList;

/****************************************************************************
 * HTTP unique setup
 ***************************************************************************/
typedef struct _http_global
{
    HTTP_METHOD http_method;             //http方法
    int http_status;                     //http响应码
    int content_length;                  //http响应内容长度
    int body_length;                     //http请求中body长度
    const char *server_url;              //远程服务器URL
    char *content;                       //存放xml数据
}HTTP;

//HttpCode http_setopt(HTTP *c, CURLoption tag, ...);

/**
* @brief: Make a HTTP request to the given server address
* @param address: address you want to request
* @param http_req: HTTP request type, any of the HTTP_REQ_* defines in the module
* @param header_lines: Array of additional HTTP header lines to be added to the header.
* A NULL pointer indicates no additional header lines.
* @param header_line_count: number of elements in header_lines array.
*/
HttpCode http_request(HTTP *http, char** header_lines, size_t header_line_count);

/**
* @brief: Make a HTTP request with a body. Works exactly like http_request()
* @param body: Body to be added to HTTP request
*/
HttpCode http_request_w_body(HTTP *http,
                             char** header_lines,
                             size_t header_line_count,
                             char* body);


HttpCode http_download_file(HTTP *http,
                            char** header_lines,
                            size_t header_line_count, char *save_file);
#endif
