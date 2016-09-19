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




typedef enum {
    MP_OK                   = 0,           /* 正常返回 */
    MP_PARSE_RLT            = 100,         /* 协议解析结果错误 */
    MP_TABLE_EMPTY          = 101,         /* 空表操作 */
    MP_TABLE_FULL           = 102,         /* 表项已满 */
    MP_NOT_FOUND            = 103,         /* 表项未找到 */
    MP_CELL_FOUND           = 104,         /* 表项已找到 */
    MP_FUN_PARAM_ERR        = 105,         /* 函数参数非法 */
    MP_NULL_POINT           = 106,         /* 空指针错误 */
    MP_SPACE_NOT_ENOUGH     = 107,         /* 指针指向的地址空间不够 */
    MP_NON_BCD_FORMAT       = 108,         /* 非BCD格式 */
    MP_NO_LOG_READ          = 109,         /* 当前没有可读日志 */
    MP_RELATE_SUCCESS       = 110,         /* gtpu关联成功 */
    MP_EXCEPTION_STAT       = 111,         /* 未建表的异常关联情况 */
    MP_MEMORY_FAIL          = 112,         /* 内存处理失败 */
    MP_WORK_NULL            = 113,         /* work创建为空 */
    MP_SEND_PKT_SUCCESS     = 114,         /* 数据包发送成功 */
    MP_FAIL                 = 255          /* 正常处理中的错误返回 */
}mp_code_t;


/******************* 自定义数据类型 start ******************************/
typedef uint8_t flag_t;
/******************* 自定义数据类型 end   ******************************/


/*******************  函数调用返回错误的宏  ******************************/

#ifndef CVMX_DPI_POINT_CHECK_UNLOCK
#define CVMX_DPI_POINT_CHECK_UNLOCK(p, mid, lv)              \
   do {                                                     \
           ;\
      }                                                     \
   } while (0)
#endif

/******************* end  ***********************************************/

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
typedef struct _dpi_skb_t
{
    care_pkt_t   care_pkt;             /* 是否为dpi需要处理的报文*/
    uint8_t      pktdir;               /* 必填 request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
                                          目前没看到用处，默认为0 */

    uint16_t     l2_proto;             /* 必填 报文类型， IPV4或者IPV6报文
                                          0x0800:IPV4，0x86DD:IPV6 */
    uint8_t      l3_proto;             /* 必填 报文类型， UDP或者TCP*/

    uint16_t     pkt_len;              /* 必填 整个报文的长度 */
    void        *pkt_tail;             /* 报文尾指针*/
    void        *network_header;       /* 必填 网络层头部的数据指针 */
    uint16_t     network_header_len;   /* 必填 含L2层及L2层以上的数据总长度 */
    void        *mac_header;           /* 链路层头部的数据指针 */

    void        *fe;                   /* struct flow_element  *指针,有些结果在里面*/
}dpi_skb_t;

typedef struct
{
    uint8_t rlt; //
}app_session_t;



#define CONFIG_FILE_1    "sap_apps_sigs.conf"
#define CONFIG_FILE_2    "webmail_cn.html"
#define CONFIG_FILE_3    "sap_category_behavior.conf"


#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
