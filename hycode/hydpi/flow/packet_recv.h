/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       packet_recv.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 9, 2016
历史:
    1.日期    :Sep 9, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef RECV_PACKET_RECV_H_
#define RECV_PACKET_RECV_H_

#include "pub_header.h"

#include "session_mng.h"
#include "session_mng_hash.h"

#include "shmem.h"

#define DEBUG
#ifdef DEBUG
#define DEBUG_LOG(fmt, _arg...)   printf(fmt , ##_arg )
#else
#define DEBUG_LOG(fmt, _arg...)
#endif


/*线程参数*/
typedef struct
{
    int  sockfd;              /*socket id*/
    char eth_name[10];        /*网卡名*/
    int thread_id;            /*线程序号0-17*/
}recv_thread_args_t;




#endif /* RECV_PACKET_RECV_H_ */
