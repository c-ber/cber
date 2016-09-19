/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       pub_header.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 2, 2016
历史:
    1.日期    :Sep 2, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef COMMON_PUB_HEADER_H_
#define COMMON_PUB_HEADER_H_

//c 库
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

//linux库 和 sys库
#include    <syslog.h>
#include    <signal.h>

#include    <sys/types.h>
#include    <sys/stat.h>
#include    <sys/wait.h>
#include    <sys/socket.h>
#include    <sys/ioctl.h>


//网络库
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


//dpi头文件
#include    "dpi_errno.h"
#include    "dpi_sdk.h"
#include    "sapl_dpi_sdk.h"





/*多个dpi识别进程的个数*/
#define PROC_MAX_NUM        16
/*多个线程来抓网卡数据包*/
#define THREAD_MAX_NUM      1

/*******************************************************************
为了防止在memcpy内存拷贝时越界。“memcpy”函数的参数的检查
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
