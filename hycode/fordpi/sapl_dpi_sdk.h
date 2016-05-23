/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       sapl_dpi_sdk.h
编码格式:     ASCII
作者:         chenbin
创建:         May 20, 2016
历史:
    1.日期    :May 20, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_SAPL_DPI_SDK_H_
#define MODULES_DPI_SAPL_DPI_SDK_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "r2_list.h"


struct flow_element
{
    struct cmb_list_head list;
    int create_type; // 1 flow crated by pkt,  2. by statistic report.

    unsigned int sip;
    unsigned sp;

    unsigned int dip;
    unsigned dp;

    unsigned char proto;
    unsigned char dir;

    unsigned int appid;

    int packet_cnt;     //first 20 pkts.
    int bytes;
    void *app_session;
    void *user_session;

    void *tcp_rsm;

    unsigned char athx;
};


//memory manage function type
typedef void* (*DPI_MALLOC)(unsigned int size);
typedef void (*DPI_FREE)(void *p);
/* dir */
#define DIR_REQUEST 0
#define DIR_ANSWER  1

//packet data
struct sk_buff
{
    struct sk_buff      *next;
    struct sk_buff      *prev;
    unsigned short       protocol;
    unsigned char        pktdir;  // request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
    void *network_header;
    void *mac_header;
    void *tail;
    u_int16_t network_header_len;
    struct flow_element  *ct;

    unsigned int        len;
    char            cb[48] /*__aligned(8) */;
};


/* 1.   AIE引擎初始化函数 */
int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free);

/* 2.   AIE引擎去初始化函数 */
void AIE_sdk_uninit();

/* 3.   AIE识别函数 */
unsigned int AIE_hook(struct sk_buff *skb, void **app_session, unsigned int *uiAppId);

/* 4.   AIE session内存释放函数 */
void AIE_session_delete(void *app_session);



#endif /* MODULES_DPI_SAPL_DPI_SDK_H_ */
