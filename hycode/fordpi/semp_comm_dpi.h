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
//#include "semp-config.h"
//#include "executive-common.h"
//#include "semp-ctypes.h"
#include "semp-errno.h"


/*用于支持IPV4和IPV6*/
typedef union
{
    uint64_t u64[2];
    uint32_t v4;
    uint64_t v6[2];
}mp_ip_t;

typedef struct
{
    uint8_t version;
    mp_ip_t ip;
}__attribute__((packed)) ip_comm_t;

/* 五元组结构体 */
typedef union _five_tuple_t
{
    uint64_t        data64[5];
    struct
    {
        ip_comm_t       sip;
        ip_comm_t       dip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
    };
}five_tuple_t;

/* 识别状态 */
typedef enum _id_status_t
{
    ID_STATUS_SUCC   = 0,  //成功
    ID_STATUS_FAIL   = 1,  //未识别
    ID_STATUS_UNDONE = 2   //仍在识别中
}id_status_t;

/* 解析结果，DPI关心的报文*/
typedef enum
{
    PKT_NOT_CARE,    /* 不参与识别 */
    PKT_CARE         /* 参与识别 */
}care_pkt_t;

/* 报文信息结构体, 主要保存报文相关的内容*/
typedef struct sk_buff
{
    care_pkt_t   care_pkt;             /* 是否为dpi需要处理的报文*/
    uint8_t      pktdir;               /* request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
                                          目前没看到用处，默认为0 */

    uint16_t     l2_proto;             /* 报文类型， IPV4或者IPV6报文
                                          0x0800:IPV4，0x86DD:IPV6 */
    uint8_t      l3_proto;             /* 报文类型， UDP或者TCP*/

    uint16_t     pkt_len;              /* 整个报文的长度 */
    void        *pkt_tail;             /* 报文尾指针*/
    void        *network_header;       /* 网络层头部的数据指针 */
    uint16_t     network_header_len;   /* 含L2层及L2层以上的数据总长度 */
    void        *mac_header;           /* 链路层头部的数据指针 */

    void        *fe;                   /* struct flow_element  *指针,有些结果在里面*/
}dpi_skb_t;

typedef struct
{
    uint8_t rlt; //
}app_session_t;
#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
