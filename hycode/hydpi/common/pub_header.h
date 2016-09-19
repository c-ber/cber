/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       pub_header.h
�����ʽ:     ASCII
����:         chenbin
����:         Sep 2, 2016
��ʷ:
    1.����    :Sep 2, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef COMMON_PUB_HEADER_H_
#define COMMON_PUB_HEADER_H_

//c ��
#include    <assert.h>
#include    <ctype.h>
#include    <dirent.h>
#include    <errno.h>
#include    <fcntl.h>
#include    <pthread.h>
#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <stdarg.h>
#include    <signal.h>
#include    <time.h>
#include    <unistd.h>
#include    <stddef.h>

//linux�� �� sys��
#include    <syslog.h>
#include    <signal.h>

#include    <sys/types.h>
#include    <sys/stat.h>
#include    <sys/wait.h>
#include    <sys/socket.h>
#include    <sys/ioctl.h>


//�����
#include    <net/if.h>

#include    <netinet/in.h>
#include    <netinet/ip.h>
#include    <netinet/ip6.h>
#include    <netinet/tcp.h>
#include    <netinet/udp.h>
#include    <netinet/ether.h>
#include    <netinet/if_ether.h>

#include    <netpacket/packet.h>
#include    <linux/sockios.h>
#include    <arpa/inet.h>


//dpiͷ�ļ�
#include    "dpi_errno.h"
#include    "dpi_sdk.h"
#include    "sapl_dpi_sdk.h"





/*���dpiʶ����̵ĸ���*/
#define PROC_MAX_NUM        16
/*����߳���ץ�������ݰ�*/
#define THREAD_MAX_NUM      1

/*******************************************************************
Ϊ�˷�ֹ��memcpy�ڴ濽��ʱԽ�硣��memcpy�������Ĳ����ļ��
********************************************************************/
#ifndef DPI_MEMCPY
#define DPI_MEMCPY(dst, src, len, maxlen)                         \
do{                                                               \
    if ( ((NULL == (dst)) || (NULL == (src))) )                   \
    {                                                             \
        return DPI_FUN_PARAM_ERR;                                 \
    }                                                             \
    if (((len) < 1) || ((len) > (maxlen)))                        \
    {                                                             \
        return DPI_FUN_PARAM_ERR;                                 \
    }                                                             \
    memcpy((dst), (src), (len));                                  \
} while (0)
#endif


#ifndef bool
#define bool uint8_t
#endif
#ifndef true
#define true  1
#endif
#ifndef false
#define false 0
#endif

#endif /* COMMON_PUB_HEADER_H_ */
