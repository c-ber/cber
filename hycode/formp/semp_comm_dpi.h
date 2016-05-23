/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       semp_comm_dpi.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef INCLUDE_SEMP_COMM_DPI_H_
#define INCLUDE_SEMP_COMM_DPI_H_

#include <stdio.h>
#include <stdint.h>

#include "cvmx_common.h"
#include "semp-errno.h"



/* 识别状态 */
typedef enum
{
    ID_STATUS_SUCC   = 0,  //成功
    ID_STATUS_FAIL   = 1,  //未识别
    ID_STATUS_UNDONE = 2   //仍在识别中
}id_status_t;

/* 报文信息结构体, 主要保存报文相关的内容*/
typedef struct sk_buff
{
    uint16_t    protocol;       /* 表示报文类型， IPV4或者IPV6报文
                                   0x0800:IPV4，0x86DD:IPV6 */
    void       *network_header; /* 指向网络层头部的数据指针 */
}sk_buff_t;

typedef struct _dpi_skb
{
    sk_buff_t sap;
    uint16_t ptr_len;
}dpi_skb_t;

typedef struct
{
    uint8_t rlt; //
}app_session_t;
#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
