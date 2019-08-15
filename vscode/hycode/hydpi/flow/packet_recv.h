/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       packet_recv.h
�����ʽ:     ASCII
����:         chenbin
����:         Sep 9, 2016
��ʷ:
    1.����    :Sep 9, 2016
      ����    :cb
      �޸�    :Created file
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


/*�̲߳���*/
typedef struct
{
    int  sockfd;              /*socket id*/
    char eth_name[10];        /*������*/
    int thread_id;            /*�߳����0-17*/
}recv_thread_args_t;




#endif /* RECV_PACKET_RECV_H_ */
