/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       semp_hydra_relate.h
编码格式:     ASCII
作者:         chenbin
创建:         Aug 31, 2015
描述:         存放控制平面相关的，并且上层与mp通用的数据结构
历史:
    1.日期    :Aug 28, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef SEMP_HYDRA_RELATE_H_
#define SEMP_HYDRA_RELATE_H_

#include <stdint.h>
#include <ctype.h>
#include "semp_hydra_lte.h"


/*******************  函数调用返回错误的宏  ******************************/
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
         LTE_HASH_TABLE_UNLOCK(bucket);                     \
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

/*获取一个值在存储地址中的第n个字节[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

/******************* end  ***********************************************/



/*******************  数据长度相关的宏  **********************************/
/*bcd byte len 8*/
#define LTE_IPV4_LEN                            4
#define LTE_TEID_LEN                            4

/* ASCII byte len*/
#define LTE_TEID_MAX_LEN                        8
#define LTE_IMSI_MIN_LEN                        15
#define LTE_IMSI_MAX_LEN                        16
#define LTE_IMEI_MAX_LEN                        16

#define STR_LOCAL_MAX_LEN                       32
#define SHOW_CELL_STR_MAX_LEN                   256

/*string byte len,add to '\0'*/
#define LTE_IPV4_STRING_LEN                     13
#define LTE_TEID_STRING_LEN                     9
#define LTE_IMEI_STRING_LEN                     17
#define LTE_IMSI_STRING_LEN                     17
#define LTE_MSISDN_STRING_LEN                   17
#define IP_STR_MAX_LEN                          17

#define TABLE_MAGNITUDE                         2           /* 表尺寸的数量级 */
#define IMSI_TABLE_SIZE                         (1*TABLE_MAGNITUDE*2)
#define S11_MME_TABLE_SIZE                      (1*TABLE_MAGNITUDE)
#define S11_SGW_TABLE_SIZE                      (1*TABLE_MAGNITUDE)
#define S1_U_TABLE_SIZE                         (2*TABLE_MAGNITUDE)

#define HEX_IMSI_LEN                            18   /* 用于输入0xffffffff11223344格式*/

#define LTE_LOG_HEAD_SIZE                        4           //统一头的长度
#define LTE_LOG_DATA_SIZE                        1404        //统一内容长度

/******************* end  ***********************************************/


/* GTP 协议版本 */
typedef enum
{
    GTP_U = 1,
    GTP_C = 2
}gtp_version_t;

/* 消息类型 */
typedef enum
{
    CREATE_SESSION_REQ = 32,
    CREATE_SESSION_RSP = 33,
    MODIFY_BEARER_REQ  = 34,
    MODIFY_BEARER_RSP  = 35,
    T_PDU              = 0xff
}gtp_msgtype_t;

/* GTPC开关 */
typedef enum
{
    GTPC_DISABLE = 0,    /* 关闭 */
    GTPC_ENABLE  = 1     /* 打开 */
}gtpc_switch_t;

/* gtp协议关联开关 */
typedef struct
{
    gtp_version_t packet_type;  /* 协议版本, gtp-c, gtp-u */
    gtp_msgtype_t message_type; /* 消息类型, 32, 33, 34, 35*/
    gtpc_switch_t enable;       /* 开关标志, 0 for disable, 1 for enable */
}gtp_switch_t, *pgtp_switch_t;


typedef struct
{
     uint64_t   lte_relate_failed;                  /*关联失败*/

     uint64_t   gtpu;                               /*数据报文*/
     uint64_t   gtpu_related;                       /*数据报文关联成功*/
     
     uint64_t   gtpc_create_session_req;            /*create-sseion 报文总数*/
     uint64_t   gtpc_create_session_req_related;    /*create-sseion 数据关联成功数*/
  
     uint64_t   gtpc_create_session_rsp;            /*create-sseion 报文总数*/
     uint64_t   gtpc_create_session_rsp_related;    /*create-sseion 数据关联成功数*/
    
     uint64_t   gtpc_modify_bearer_req;             /*Modify bearer request 报文总数*/
     uint64_t   gtpc_modify_bearer_req_related;     /*Modify bearer request  数据关联成功数*/

     uint64_t   imsi_table_failed;                  /*查表失败*/
     uint64_t   s11_mme_table_failed;
     uint64_t   s11_sgw_table_failed;
     uint64_t   s1u_table_failed;
     
     uint64_t   imsi_table_incomplete;              /*表项不完整*/
     uint64_t   s11_mme_table_incomplete;
     uint64_t   s11_sgw_table_incomplete;
     uint64_t   s1u_table_incomplete;
    
     uint64_t   s1u_table_ueip_mismatch;            /*数据报文UE IP 不匹配*/
     uint64_t   s11_mme_cell_use;
     uint64_t   s11_sgw_cell_use;
     uint64_t   imsi_cell_use;
     uint64_t   s1u_cell_use;
#ifdef STAT_TEST
     uint32_t user_fail_num;
     uint32_t user_succ_num;
     uint64_t total_fail_num;
     uint64_t total_succ_num;
#endif

     uint64_t   s6a_auth_req_num;
     uint64_t   s6a_auth_res_num;
     uint64_t   s6a_auth_req_related_num;
     uint64_t   s6a_auth_res_related_num;

     uint64_t   s1ap_initialUEMessage;              /*initialUEMessage*/
     uint64_t   s1ap_ciphered_initialUEMessage;
     uint64_t   s1ap_imsi_initialUEMessage;
     uint64_t   s1ap_old_guti_initialUEMessage;
     uint64_t   s1ap_invalid_initialUEMessage;
     uint64_t   s1ap_not_found_imsi_from_STMSI;
     uint64_t   s1ap_alg_type_set;
     uint64_t   s1ap_get_kasme_failed;
     uint64_t   s1ap_update_imsi_kasme_failed;
     uint64_t   s1ap_update_imsi_kasme_success;
     uint64_t   s1ap_search_imsi_kasme_failed;
     uint64_t   s1ap_guti_invalid;
     uint64_t   s1ap_uplinkNASTransport_update_imsi;

/*For debug S1-MME guti decrypt*/
    uint64_t    AttachRequest;
    uint64_t    NotAttachRequest;
    uint64_t    AttachAccept;
    uint64_t    NotAttachAccept;
    uint64_t   s1ap_InitialContextSetup_no_ciphered;
    uint64_t   decrypt_failed;
    uint64_t   parse_guti_failed;

    uint64_t   create_stmsi_table;
    uint64_t   create_stmsi_table_failed;
    uint64_t   search_imsi_failed_1;
    uint64_t   search_imsi_failed_2;
    uint64_t   search_kasme_failed_1;
    uint64_t   imsi_is_0;

    uint64_t RablistLengthOver255;
    uint64_t NaspduLengthOver255;

    uint64_t nas_attach_request_oldGuti;
    uint64_t nas_attach_request_imsi;
    uint64_t nas_tau_request_oldGuti;
    uint64_t nas_tau_request_imsi;
    uint64_t nas_identity_response_imsi;
    uint64_t nas_authentication_request;
    uint64_t nas_security_command;
    uint64_t nas_attach_accept;
    uint64_t ue_context_release_complete;

    uint64_t relate_identity_response_imsi;
    uint64_t relate_security_command;
    uint64_t relate_auth_request;
    uint64_t relate_UeContxtRelease;
    

}lte_relate_stat_t;



/* 表名 */
typedef enum
{
    TABLE_MIN = -1,/*用于数据越界判断*/
    TABLE_IMSI = 0,
    TABLE_S11_MME,
    TABLE_S11_SGW,
    TABLE_S1U,
    TABLE_S6A,
    TABLE_S1_ENODEB_MME,
    TABLE_S_TIMSI,
    TABLE_MAX
}table_name_t;

#define TABLE_S1U_SGW TABLE_S1U
#define TABLE_S1U_ENB TABLE_S1U
#define TABLE_S1_MME  TABLE_S1_ENODEB_MME

/* 搜表方式 */
typedef enum
{
    SEARCH_INDEX,   /*按索引查找*/
    SEARCH_HASH     /*按哈希值查找*/
}search_mthd_t;


//专门为每个表以后扩展字段提供接口

/*通过ip和teid哈希查询的共用结构体 */
typedef struct
{
    uint32_t     ip_v4;         /* ipv4 */
    lte_teid_t   teid;          /* TEID */
    lte_imsi_t   imsi;
    struct
    {
        lte_imei_t   imei;
        lte_msisdn_t msisdn;
        uint16_t     msisdn_len;
        lte_guti_t   guti;
        lte_tai_t    tai;
    }s1;
}it_cell_t;

/* 要显示的表项 */
typedef union
{
    /* IMSI_TABLE */
    struct
    {
        lte_imsi_t   imsi;
        lte_imei_t   imei;
        lte_msisdn_t msisdn;
        uint32_t     s11_mme_bkt;
        uint32_t     s11_sgw_bkt;
        uint32_t     s6a_bkt;
        uint32_t     s1_mme_bkt;
        lte_guti_t    guti;
        lte_tai_t     tai;
        uint16_t     msisdn_len;
        uint16_t     guti_len;
        uint16_t     tai_len;
        uint32_t     s1u_sgw_bkt;
        uint32_t     s1u_enb_bkt;
    }im;
    
    /*s1_enode_mme table*/
    struct
    {
        uint32_t        enode_ip;
        uint32_t        enode_ue_s1ap_id;
        lte_imsi_t      imsi;
        uint32_t        mme_ip;
        uint64_t        mme_ue_s1ap_id;
        lte_rand_t      rand;
        lte_guti_t      old_guti;
        uint32_t        cipher_alg_type;
        uint32_t        guti_flag;
        lte_tai_t       tai;
    }id;

    /*s_timsi table*/
    struct
    {
        lte_s_tmsi_t     s_tmsi;       
        lte_imsi_t      imsi;
    }in;

    it_cell_t it;            /* 通过ip和teid哈希查询的可共用 */

}cell_data_t;

/* cell相关：，包括所在的桶子索引（行），桶子偏移（列），cell值 */
typedef struct
{
    uint32_t     index_row;       /* 索引方式:表的行索引 */
    uint32_t     index_column;    /* 索引方式:表的列索引，等价于桶子的偏移 */
    cell_data_t  cell;
}show_lte_table_t;

/* 搜表结构体，根据表名和搜表方式处理 */
typedef struct
{
    table_name_t     name;
    search_mthd_t    search_mthd;

    show_lte_table_t data;          /* mp返回的数据 */
}search_table_t;


/*  索引查表时，用于获取桶子内cell个数 */
typedef struct
{
    table_name_t     name;
    uint32_t         row_index;   /*表的行索引*/
    uint32_t         column_count;/*桶子内cell（列）总数*/
}sindex_bucket_t;

/* lte 关联表总表信息 */
typedef struct
{
    lte_imsi_t   imsi;
    lte_imei_t   imei;
    lte_msisdn_t msisdn;

    uint32_t     s11_mme_ip_v4;         /* ipv4 */
    lte_teid_t   s11_mme_teid;          /* TEID */

    uint32_t     s11_sgw_ip_v4;         /* ipv4 */
    lte_teid_t   s11_sgw_teid;          /* TEID */

    uint32_t     s1u_enode_ip_v4;       /* ipv4 */
    lte_teid_t   s1u_enode_teid;        /* TEID */

    uint32_t     s1u_sgw_ip_v4;         /* ipv4 */
    lte_teid_t   s1u_sgw_teid;          /* TEID */

    uint32_t     ue_ip;                 /*mobile IP*/
    uint16_t     msisdn_len;

    lte_guti_t      guti;
    lte_tai_t       tai;
}lte_relate_info_t;


typedef struct
{
    uint32_t good_imsi;
    uint32_t empty_imsi;
    uint32_t gtpc_fteid_incompelte;
    uint32_t gtpu_fteid_incompelte;    
}lte_relate_rescan_t;

/* 老化参数 */
typedef enum
{
    INT32_SCAN_PERIOD,                  /* 扫描周期 */
    INT32_AGING_TIME                    /* 设定的老化时间 */
}lte_aging_param_t;

typedef struct
{
    int aging_time;
    table_name_t name;
}aging_time_t;


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
#define MODULE_LTE_AGING            0x0000001
#define MODULE_LTE_S11              0x0000002
#define MODULE_LTE_S1               0x0000004
#define MODULE_LTE_S6A              0x0000008
#define MODULE_LTE_TRNSF            0x0000010
#define MODULE_LTE_PARSE            0x0000020
#define MODULE_LTE_SYSTEM           0x0000040

/* 模块ID */
typedef enum
{
    M_AGING = MODULE_LTE_AGING,       /* 老化模块       */
    M_S11   = MODULE_LTE_S11,         /* s11关联模块    */
    M_S1    = MODULE_LTE_S1,          /* s1关联模块     */
    M_S6A   = MODULE_LTE_S6A,         /* s6a关联模块    */
    M_TRNSF = MODULE_LTE_TRNSF,       /* 转发模块       */
    M_PARSE = MODULE_LTE_PARSE,       /* 协议解析模块    */
    M_SYS   = MODULE_LTE_SYSTEM       /* 系统及共用模块  */
}log_module_t;

/* 日志开关 */
typedef enum
{
    LTE_LOG_OFF,
    LTE_LOG_ON
}log_en_t;

/* 日志设置 */
typedef struct _lte_log
{
    log_module_t mid;                /* 模块ID */
    log_level_t  lv;                 /* 日志等级 */
    log_en_t     en;                 /* 打开或关闭 */
}lte_log_t, *plte_log_t;

typedef struct
{
    uint16_t fin:1;
    uint16_t fir:1;
    uint16_t len:14;
}pkt_head_t;

typedef struct _log_str
{
    pkt_head_t head;
    uint16_t   core_num;
    uint8_t    va[LTE_LOG_DATA_SIZE];
}log_str_t;

#define      GET_DEBUG_INFO_MAX_NUM       (1400-sizeof(uint8_t)-sizeof(uint8_t))
/*added by ruansong for:获取debug打印信息*/
typedef struct _debug_log_info
{
    uint8_t     isFinish;         //标志是否已读取完当前核全部的打印：0为未完成，1为已完成
    uint8_t     log_num;          //装载了的log打印数量
    char        debug_info[GET_DEBUG_INFO_MAX_NUM];//log打印装载区域
}debug_log_info_t;

//每个核区域缓存的控制块
typedef struct _core_debug_info_t
{
    uint8_t *   start_addr;                          //每个核的读写起始地址
    uint32_t    read_index;                         //当前的读索引ID，从0开始
    uint64_t    read_count;                         //当前的读统计数，从0开始
    uint32_t    write_index;                        //当前的写索引ID，从0开始
    uint64_t    write_count;                        //当前的写统计数，从0开始
}core_debug_cache_info_t;


typedef enum tagDebugLogSwitch
{
    EN_TYPE_DEBUG_SWITCH_OFF = 0,
    EN_TYPE_DEBUG_SWITCH_ON = 1
}EM_DEBUG_SWITCH_TYPE;


/*抓包控制设置*/
typedef enum
{
    GET_PKT_COUNT_AND_SIZE, /*获取当前报文总数和总大小*/
    RESET_PKT_CACHE,
    STOP_CAPTURE,
    START_CAPTURE_GTPC,
    START_CAPTURE_GTPU,  /*抓完后需要关闭抓包*/
}pkt_cap_ctrl_t;

typedef struct
{
    pkt_cap_ctrl_t ctrl;
    uint32_t pkt_count;
    uint32_t pkt_total_size;
}pkt_cache_t;

#endif /* SEMP_HYDRA_RELATE_H_ */
