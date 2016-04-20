/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       semp_hydra_relate.h
�����ʽ:     ASCII
����:         chenbin
����:         Aug 31, 2015
����:         ��ſ���ƽ����صģ������ϲ���mpͨ�õ����ݽṹ
��ʷ:
    1.����    :Aug 28, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef SEMP_HYDRA_RELATE_H_
#define SEMP_HYDRA_RELATE_H_

#include <stdint.h>
#include <ctype.h>
#include "semp_hydra_lte.h"


/*******************  �������÷��ش���ĺ�  ******************************/
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

/* ����valueΪ����*/
#define MP_MEMSET(type, value) do {\
                                    memset(&(value), 0, sizeof(type));\
                                  }while(0)
/* ����valueΪָ��*/
#define MP_MEMSET_P(type, value) do {\
                                    memset((value), 0, sizeof(type));\
                                  }while(0)

#define MIN_EXCHANGE(a, b)     ( (a) = ( (a) < (b) ? (a) : (b) ) )
#define MP_MIN(a, b) ( ( (a) > (b) ) ? (b) : (a) )
#define MP_MAX(a, b) ( ( (a) < (b) ) ? (b) : (a) )



/*******************  ���ݴ�����صĺ�  **********************************/

#define BYTE_GET_UINT64(n) (sizeof(uint64_t)*(n))   /* ��ȡ��uint64Ϊ��λ�ĳ���ֵ���ֽ��� */

#define BIT_GET_LOW_ASCII_4(src)    ( (src) &  0x0f ) + 0x30 )
#define BIT_GET_HIGH_ASCII_4(src)   ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_ASCII_4(dst, src)    ( (dst) = ( (src) &  0x0f ) + 0x30 )
#define BIT_HIGH_ASCII_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_4(dst, src)    ( (dst) = ( (src) &  0x0f ) )
#define BIT_HIGH_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) )

/*��ȡһ��ֵ�ڴ洢��ַ�еĵ�n���ֽ�[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

/******************* end  ***********************************************/



/*******************  ���ݳ�����صĺ�  **********************************/
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

#define TABLE_MAGNITUDE                         2           /* ��ߴ�������� */
#define IMSI_TABLE_SIZE                         (1*TABLE_MAGNITUDE*2)
#define S11_MME_TABLE_SIZE                      (1*TABLE_MAGNITUDE)
#define S11_SGW_TABLE_SIZE                      (1*TABLE_MAGNITUDE)
#define S1_U_TABLE_SIZE                         (2*TABLE_MAGNITUDE)

#define HEX_IMSI_LEN                            18   /* ��������0xffffffff11223344��ʽ*/

#define LTE_LOG_HEAD_SIZE                        4           //ͳһͷ�ĳ���
#define LTE_LOG_DATA_SIZE                        1404        //ͳһ���ݳ���

/******************* end  ***********************************************/


/* GTP Э��汾 */
typedef enum
{
    GTP_U = 1,
    GTP_C = 2
}gtp_version_t;

/* ��Ϣ���� */
typedef enum
{
    CREATE_SESSION_REQ = 32,
    CREATE_SESSION_RSP = 33,
    MODIFY_BEARER_REQ  = 34,
    MODIFY_BEARER_RSP  = 35,
    T_PDU              = 0xff
}gtp_msgtype_t;

/* GTPC���� */
typedef enum
{
    GTPC_DISABLE = 0,    /* �ر� */
    GTPC_ENABLE  = 1     /* �� */
}gtpc_switch_t;

/* gtpЭ��������� */
typedef struct
{
    gtp_version_t packet_type;  /* Э��汾, gtp-c, gtp-u */
    gtp_msgtype_t message_type; /* ��Ϣ����, 32, 33, 34, 35*/
    gtpc_switch_t enable;       /* ���ر�־, 0 for disable, 1 for enable */
}gtp_switch_t, *pgtp_switch_t;


typedef struct
{
     uint64_t   lte_relate_failed;                  /*����ʧ��*/

     uint64_t   gtpu;                               /*���ݱ���*/
     uint64_t   gtpu_related;                       /*���ݱ��Ĺ����ɹ�*/
     
     uint64_t   gtpc_create_session_req;            /*create-sseion ��������*/
     uint64_t   gtpc_create_session_req_related;    /*create-sseion ���ݹ����ɹ���*/
  
     uint64_t   gtpc_create_session_rsp;            /*create-sseion ��������*/
     uint64_t   gtpc_create_session_rsp_related;    /*create-sseion ���ݹ����ɹ���*/
    
     uint64_t   gtpc_modify_bearer_req;             /*Modify bearer request ��������*/
     uint64_t   gtpc_modify_bearer_req_related;     /*Modify bearer request  ���ݹ����ɹ���*/

     uint64_t   imsi_table_failed;                  /*���ʧ��*/
     uint64_t   s11_mme_table_failed;
     uint64_t   s11_sgw_table_failed;
     uint64_t   s1u_table_failed;
     
     uint64_t   imsi_table_incomplete;              /*�������*/
     uint64_t   s11_mme_table_incomplete;
     uint64_t   s11_sgw_table_incomplete;
     uint64_t   s1u_table_incomplete;
    
     uint64_t   s1u_table_ueip_mismatch;            /*���ݱ���UE IP ��ƥ��*/
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



/* ���� */
typedef enum
{
    TABLE_MIN = -1,/*��������Խ���ж�*/
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

/* �ѱ�ʽ */
typedef enum
{
    SEARCH_INDEX,   /*����������*/
    SEARCH_HASH     /*����ϣֵ����*/
}search_mthd_t;


//ר��Ϊÿ�����Ժ���չ�ֶ��ṩ�ӿ�

/*ͨ��ip��teid��ϣ��ѯ�Ĺ��ýṹ�� */
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

/* Ҫ��ʾ�ı��� */
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

    it_cell_t it;            /* ͨ��ip��teid��ϣ��ѯ�Ŀɹ��� */

}cell_data_t;

/* cell��أ����������ڵ�Ͱ���������У���Ͱ��ƫ�ƣ��У���cellֵ */
typedef struct
{
    uint32_t     index_row;       /* ������ʽ:��������� */
    uint32_t     index_column;    /* ������ʽ:������������ȼ���Ͱ�ӵ�ƫ�� */
    cell_data_t  cell;
}show_lte_table_t;

/* �ѱ�ṹ�壬���ݱ������ѱ�ʽ���� */
typedef struct
{
    table_name_t     name;
    search_mthd_t    search_mthd;

    show_lte_table_t data;          /* mp���ص����� */
}search_table_t;


/*  �������ʱ�����ڻ�ȡͰ����cell���� */
typedef struct
{
    table_name_t     name;
    uint32_t         row_index;   /*���������*/
    uint32_t         column_count;/*Ͱ����cell���У�����*/
}sindex_bucket_t;

/* lte �������ܱ���Ϣ */
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

/* �ϻ����� */
typedef enum
{
    INT32_SCAN_PERIOD,                  /* ɨ������ */
    INT32_AGING_TIME                    /* �趨���ϻ�ʱ�� */
}lte_aging_param_t;

typedef struct
{
    int aging_time;
    table_name_t name;
}aging_time_t;


/*-----------------------------��־�ṹ-------------------------------------*/
/* ��־�ȼ� */
typedef enum
{
    LV_DBG  = (1 << 0), /* ���ڵ�����ģ�鹦�ܣ�������С�������������Ĳ��� */
    LV_INFO = (1 << 1), /* �����͹����е����̴�ӡ����������������� */
    LV_WARN = (1 << 2), /* ������Ϣ��������bcd��ʽ�ı���ʲô��
                         * ����һЩ�쳣���ص���ʾ��Ϣ */
    LV_ERROR= (1 << 3), /* �������⣬����������ָ���ˣ�
                         * �����ҵ���cell�Ҳ����˵����ص��߼������ϵͳ���� */
}log_level_t;


/* ����ʹ�� */
#define MODULE_LTE_AGING            0x0000001
#define MODULE_LTE_S11              0x0000002
#define MODULE_LTE_S1               0x0000004
#define MODULE_LTE_S6A              0x0000008
#define MODULE_LTE_TRNSF            0x0000010
#define MODULE_LTE_PARSE            0x0000020
#define MODULE_LTE_SYSTEM           0x0000040

/* ģ��ID */
typedef enum
{
    M_AGING = MODULE_LTE_AGING,       /* �ϻ�ģ��       */
    M_S11   = MODULE_LTE_S11,         /* s11����ģ��    */
    M_S1    = MODULE_LTE_S1,          /* s1����ģ��     */
    M_S6A   = MODULE_LTE_S6A,         /* s6a����ģ��    */
    M_TRNSF = MODULE_LTE_TRNSF,       /* ת��ģ��       */
    M_PARSE = MODULE_LTE_PARSE,       /* Э�����ģ��    */
    M_SYS   = MODULE_LTE_SYSTEM       /* ϵͳ������ģ��  */
}log_module_t;

/* ��־���� */
typedef enum
{
    LTE_LOG_OFF,
    LTE_LOG_ON
}log_en_t;

/* ��־���� */
typedef struct _lte_log
{
    log_module_t mid;                /* ģ��ID */
    log_level_t  lv;                 /* ��־�ȼ� */
    log_en_t     en;                 /* �򿪻�ر� */
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
/*added by ruansong for:��ȡdebug��ӡ��Ϣ*/
typedef struct _debug_log_info
{
    uint8_t     isFinish;         //��־�Ƿ��Ѷ�ȡ�굱ǰ��ȫ���Ĵ�ӡ��0Ϊδ��ɣ�1Ϊ�����
    uint8_t     log_num;          //װ���˵�log��ӡ����
    char        debug_info[GET_DEBUG_INFO_MAX_NUM];//log��ӡװ������
}debug_log_info_t;

//ÿ�������򻺴�Ŀ��ƿ�
typedef struct _core_debug_info_t
{
    uint8_t *   start_addr;                          //ÿ���˵Ķ�д��ʼ��ַ
    uint32_t    read_index;                         //��ǰ�Ķ�����ID����0��ʼ
    uint64_t    read_count;                         //��ǰ�Ķ�ͳ��������0��ʼ
    uint32_t    write_index;                        //��ǰ��д����ID����0��ʼ
    uint64_t    write_count;                        //��ǰ��дͳ��������0��ʼ
}core_debug_cache_info_t;


typedef enum tagDebugLogSwitch
{
    EN_TYPE_DEBUG_SWITCH_OFF = 0,
    EN_TYPE_DEBUG_SWITCH_ON = 1
}EM_DEBUG_SWITCH_TYPE;


/*ץ����������*/
typedef enum
{
    GET_PKT_COUNT_AND_SIZE, /*��ȡ��ǰ�����������ܴ�С*/
    RESET_PKT_CACHE,
    STOP_CAPTURE,
    START_CAPTURE_GTPC,
    START_CAPTURE_GTPU,  /*ץ�����Ҫ�ر�ץ��*/
}pkt_cap_ctrl_t;

typedef struct
{
    pkt_cap_ctrl_t ctrl;
    uint32_t pkt_count;
    uint32_t pkt_total_size;
}pkt_cache_t;

#endif /* SEMP_HYDRA_RELATE_H_ */
