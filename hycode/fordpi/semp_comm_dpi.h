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

#define LTE_LOG_INPUT_SERIAL

#ifdef LTE_LOG_INPUT_SERIAL
#define LOG_PRINT(mid, level, fmt, ...) \
    do{\
                printf("[%s, %s]%s:%d  "fmt,\
                #mid,#level,__FILE__, __LINE__, ##__VA_ARGS__);\
}while(0)
#endif


/******************* 自定义数据类型 start ******************************/
typedef uint8_t flag_t;
/******************* 自定义数据类型 end   ******************************/


/*******************  函数调用返回错误的宏  ******************************/
#define LOG_CONTENT_NULL_POINT          "null point exception\n"
#define LOG_CONTENT_ALLOC_FAIL          "alloc memory fail\n"
#define LOG_CONTENT_FREE_MEMORY_FAIL    "free memory fail\n"

#ifndef MP_ERR_PRT
#define MP_ERR_PRT(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (MP_OK != ret) {                                   \
         printf("%s:%d error[%d]\n",__func__,__LINE__,ret); \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR_RET
#define MP_ERR_RET(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (MP_OK != ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR
#define MP_ERR(f)                                           \
   do {                                                     \
      mp_code_t ret = f;                                    \
      if (MP_OK != ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR_RET_CMD
#define MP_ERR_RET_CMD(f)                                   \
   do {                                                     \
      mp_code_t ret = f;                                    \
      if (MP_OK != ret) {                                   \
         return MDL_ERR(E_FAIL);                            \
      }                                                     \
   } while (0)
#endif

#ifndef MP_POINT_CHECK
#define MP_POINT_CHECK(p)                                   \
   do {                                                     \
      if (NULL == p){                                       \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

#ifndef PRINT_DATA_CONSL
#define PRINT_DATA_CONSL(p)                                 \
   do {                                                     \
      if (MP_OK == p){                                      \
          vty_printf(vty, "%s", show_str);                  \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK
#define CVMX_MP_POINT_CHECK(p, mid, lv)                     \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK_RET_P
#define CVMX_MP_POINT_CHECK_RET_P(p, mid, lv)               \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return NULL;                                       \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK_UNLOCK
#define CVMX_MP_POINT_CHECK_UNLOCK(p, mid, lv)              \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         HASH_TABLE_BUCKET_UNLOCK(bucket);                     \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

/******************* end  ***********************************************/

/* 参数value为变量*/
#define MP_MEMSET(type, value) do {\
                                    memset(&(value), 0, sizeof(type));\
                                  }while(0)
/* 参数value为指针*/
#define MP_MEMSET_P(type, value) do {\
                                    memset((value), 0, sizeof(type));\
                                  }while(0)

#define MIN_EXCHANGE(a, b)     ( (a) = ( (a) < (b) ? (a) : (b) ) )
#define MP_MIN(a, b) ( ( (a) > (b) ) ? (b) : (a) )
#define MP_MAX(a, b) ( ( (a) < (b) ) ? (b) : (a) )



/*******************  数据处理相关的宏  **********************************/

#define BYTE_GET_UINT64(n) (sizeof(uint64_t)*(n))   /* 获取以uint64为单位的长度值的字节数 */

#define BIT_GET_LOW_ASCII_4(src)    ( (src) &  0x0f ) + 0x30 )
#define BIT_GET_HIGH_ASCII_4(src)   ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_ASCII_4(dst, src)    ( (dst) = ( (src) &  0x0f ) + 0x30 )
#define BIT_HIGH_ASCII_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_4(dst, src)    ( (dst) = ( (src) &  0x0f ) )
#define BIT_HIGH_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

/*获取一个值在存储地址中的第n个字节[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

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


/*sdk 识别结果结构体*/

//src_mac=00:50:56:c0:00:08;src_ip=0.0.0.0;dst_ip=192.168.80.1;dst_port=5355;
//app_name=腾讯资源;app_cat_name=P2P软件;handle_action=0;account=;action_name=下载;content=;msg=

typedef   uint8_t    mac_t[6];

typedef struct _dpi_result_t
{
    uint32_t    app_id;             /* 应用id*/
    flag_t      have_audit_log;     /* 有审计日志的标志*/
    mac_t       src_mac;            /* 源mac地址*/
    ip_comm_t   src_ip;             /* 源ip*/
    ip_comm_t   dst_ip;             /* 目的ip*/
    uint32_t    user_ip;            /* 用户IP*/
    uint16_t    dst_port;           /* 目的端口*/

    uint8_t    *app_name;           /* app名称*/
    uint16_t    app_name_len;

    uint8_t    *app_cat_name;       /* 应用分类*/
    uint8_t     app_cat_name_len;

    uint32_t    handle_action;      /* 未用的选项，用于放行所有的字段 */

    uint8_t    *account;            /* 审计行为下的用户名 */
    uint16_t    account_len;

    uint8_t    *action_name;        /* 应用行为*/
    uint16_t    action_name_len;

    uint8_t    *content;            /* 审计内容 */
    uint32_t    content_len;
    uint8_t    *msg;                /* 预留字段 */
}dpi_result_t;


/*-----------------------------日志结构-------------------------------------*/
/* 日志等级 */
typedef enum
{
    LV_DBG  = (1 << 0), /* 用于调试子模块功能，粒度最小，建议少量报文测试 */
    LV_INFO = (1 << 1), /* 解析和关联中的流程打印，用于现网问题分析 */
    LV_WARN = (1 << 2), /* 警告信息，比如有bcd格式的报文什么，
                         * 或者一些异常返回的提示信息 */
    LV_ERROR= (1 << 3), /* 严重问题，比如遇到空指针了，
                         * 本该找到的cell找不到了等严重的逻辑错误和系统错误 */
}log_level_t;


/* 对内使用 */
#define MODULE_DPI_SESSION          0x0000001
#define MODULE_DPI_DATA             0x0000002

/* 模块ID */
typedef enum
{
    M_SE = MODULE_DPI_SESSION,      /* 会话管理 */
    M_DT = MODULE_DPI_DATA,         /* 识别结果数据处理 */
}log_module_t;

#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
