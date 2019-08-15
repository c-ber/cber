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

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

/*��ȡһ��ֵ�ڴ洢��ַ�еĵ�n���ֽ�[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

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
#define STR_LOCAL_LEN                           64
#define STR_ECGI_LEN                            64
#define SHOW_CELL_STR_MAX_LEN                   2048

/*string byte len,add to '\0'*/
#define LTE_IPV4_STRING_LEN                     13
#define LTE_TEID_STRING_LEN                     9
#define LTE_IMEI_STRING_LEN                     17
#define LTE_IMSI_STRING_LEN                     17
#define LTE_MSISDN_STRING_LEN                   17
#define IP_STR_MAX_LEN                          17

#define TABLE_MAGNITUDE                         2           /* ��ߴ�������� */
#define IMSI_TABLE_SIZE                         (1*TABLE_MAGNITUDE)
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

/*debugģʽ��lte��umts��������ͳ����ʾ�����־*/
enum LTE_and_UMTS_statistics_mask
{
    LTE_ALL              = (1<<0),   // ����LTE�����͹���
    
    LTE_RELATE_ALL       = (1<<1),   // LTE����
    LTE_RELATE_S1        = (1<<2),   // s1����ͳ��
    LTE_RELATE_S11       = (1<<3),   // s11����ͳ��
    LTE_RELATE_S6A       = (1<<4),   // s6a����ͳ��

    LTE_PARSE_ALL        = (1<<5),   // LTE����
    LTE_PARSE_S1AP       = (1<<6),   // S1AP����ͳ��
    LTE_PARSE_GTPV2C     = (1<<7),   // GTPV2C����ͳ��
    LTE_PARSE_DIAMETER   = (1<<8),   // DIAMETER����ͳ��
    LTE_PARSE_NAS        = (1<<9),   // NAS����ͳ��
    LTE_PARSE_GTPU       = (1<<10),  //GTPU����ͳ��

    UMTS_ALL             = (1<<16),  //umts�Ĺ����ͽ���

    UMTS_RELATE_ALL      = (1<<17),  //umts����
    UMTS_RELATE_IuPs     = (1<<18),  //IuPs�ӿڵĹ���
    UMTS_RELATE_Gn       = (1<<19),  //Gn�ӿڹ���

    UMTS_PARSE_ALL       = (1<<20),  //umts����
    UMTS_PARSE_M3UA      = (1<<21),  //M3UA����
    UMTS_PARSE_SCCP      = (1<<22),  //SCCP����
    UMTS_PARSE_RANAP     = (1<<23),  //ranap����
    UMTS_PARSE_GMM       = (1<<24),  //gmm����
    UMTS_PARSE_GTPV1C    = (1<<25)   // GTPV1C����ͳ��
};

typedef struct
{
    uint32_t stat_mask;     //��־��ʾ��Щͳ�ƣ�������� LTE_and_UMTS_statistics_mask
    
    /*s1ap parse statistics*/
    uint64_t ue_context_release_complete;

    /*GTPV2-C statistics*/
    uint64_t pkts_gtpv2c;
    uint64_t pkts_gtpc_hd;


    /*gtp-u statistics*/
    uint64_t pkts_gtpu;

    /*DIAMETER parse statistics*/
    uint64_t business_dmt_version_err_pkts;
    uint64_t business_dmt_cmd_not_318_pkts;
    uint64_t business_dmt_not_3gpp_app_pkts;
    uint64_t diameter_pkt_rand_too_long;
    uint64_t diameter_pkt_rand_too_short;
    uint64_t diameter_pkt_kasme_too_long;
    uint64_t diameter_pkt_kasme_too_short;
    uint64_t business_dmt_too_many_kasme_rand_pair;
    uint64_t business_dmt_auth_request_pkts;
    uint64_t business_dmt_usr_too_long;
    uint64_t business_dmt_auth_response_pkts;
    uint64_t diameter_auth_ans_pkt_without_key;


    /*nas parse statistics*/
    uint64_t nas_attach_request_oldGuti;
    uint64_t nas_tau_request_oldGuti;
    uint64_t nas_attach_request_imsi;
    uint64_t nas_tau_request_imsi;
    uint64_t nas_identity_response_imsi;
    uint64_t nas_authentication_request;
    uint64_t nas_security_command;
    uint64_t parse_guti_failed;
    uint64_t nas_attach_accept;

    /*s1 relevance statistics*/
    uint64_t pkts_s1ap_initialUEMessage;
    uint64_t pkts_s1ap_invalid_initialUEMessage;
    uint64_t pkts_AttachRequest;
    uint64_t pkts_s1ap_ciphered_initialUEMessage;
    uint64_t pkts_s1ap_imsi_initialUEMessage;
    uint64_t pkts_s1ap_old_guti_initialUEMessage;
    uint64_t pkts_s1ap_not_found_imsi_from_STMSI;
    uint64_t pkts_imsi_table_failed;
    uint64_t pkts_InitialContextSetup;
    uint64_t pkts_NotAttachAccept;
    uint64_t pkts_InitialContextSetup_no_ciphered;
    uint64_t decrypt_failed;
    uint64_t pkts_AttachAccept;
    uint64_t pkts_s1ap_guti_invalid;
    uint64_t pkts_s1u_table_failed_2;
    uint64_t pkts_create_stmsi_table;
    uint64_t pkts_stmsi_table_failed;
    uint64_t relate_identity_response_imsi;
    uint64_t pkts_s1ap_uplinkNASTransport_update_imsi;
    uint64_t relate_security_command;
    uint64_t pkts_s1ap_alg_type_set;
    uint64_t relate_auth_request;
    uint64_t pkts_s1ap_get_kasme_failed;
    uint64_t pkts_s1ap_update_imsi_kasme_failed;
    uint64_t pkts_s1ap_update_imsi_kasme_success;
    uint64_t relate_UeContxtRelease;
    uint64_t search_imsi_failed_1;
    uint64_t hanover_notify_search_s1_mme_fail;
    uint64_t pkts_info_incompelte_erab_rst;
    uint64_t pkts_info_incompelte_erab_rsp;
    uint64_t pkts_s1u_table_failed_3;


    /*s11 relevance statistics*/
    uint64_t pkts_gtpc_create_session_req;
    uint64_t pkts_imsi_info_not_bcd;
    uint64_t pkts_info_incompelte_1;
    uint64_t pkts_s11_mme_table_failed;
    uint64_t pkts_gtpc_create_session_req_related;
    uint64_t pkts_gtpc_create_session_rsp;
    uint64_t pkts_response_reject;
    uint64_t pkts_info_incompelte_2;
    uint64_t pkts_s11_sgw_table_failed;
    uint64_t pkts_s11_mme_table_incompelte;
    uint64_t pkts_gtpc_create_session_rsp_related;
    uint64_t pkts_gtpc_modify_bearer_req;
    uint64_t pkts_info_incompelte_3;
    uint64_t pkts_gtpc_modify_bearer_req_related ;
    uint64_t pkts_gtpc_modify_bearer_res;
    uint64_t pkts_info_incompelte_4;
    uint64_t pkts_s1u_table_failed_4;
    uint64_t pkts_gtpc_modify_bearer_res_related;
    uint64_t pkts_gtpc_delete_session_req;
    uint64_t pkts_gtpc_delete_session_req_related;
    uint64_t pkts_gtpc_delete_session_rsp;
    uint64_t pkts_gtpc_delete_session_rsp_related;
    uint64_t pkts_gtpc_create_bearer_req;
    uint64_t pkts_gtpc_create_bearer_req_related;
    uint64_t pkts_gtpc_create_bearer_rsp;
    uint64_t search_kasme_failed_1;
    uint64_t pkts_gtpc_create_bearer_rsp_related;

    /*s6a relevance statistics*/
    uint64_t dmt_auth_request_pkts;
    uint64_t business_dmt_auth_msg_incompelte;
    uint64_t business_dmt_auth_req_search_s6a_fail;
    uint64_t dmt_auth_request_related_pkts;
    uint64_t dmt_auth_response_pkts;
    uint64_t dmt_auth_response_related_pkts;
}lte_relate_stat_t;

typedef struct
{
    uint32_t stat_mask;     //��־��ʾ��Щͳ�ƣ�������� LTE_and_UMTS_statistics_mask
    
    /*gtpv1c statistics*/
    uint64_t pkts_gtpv1c;
    
    /*sccp parse statistics*/
    uint64_t business_sccp_pkts_CR;
    uint64_t business_sccp_pkts_CC;
    uint64_t business_sccp_pkts_CREF;
    uint64_t business_sccp_pkts_RLSD;
    uint64_t business_sccp_pkts_RLC;
    uint64_t business_sccp_pkts_DT1;
    uint64_t business_sccp_pkts_DT2;
    uint64_t business_sccp_pkts_AK;
    uint64_t business_sccp_pkts_UDT;
    uint64_t business_sccp_pkts_UDTS;
    uint64_t business_sccp_pkts_ED;
    uint64_t business_sccp_pkts_EA;
    uint64_t business_sccp_pkts_RSR;
    uint64_t business_sccp_pkts_RSC;
    uint64_t business_sccp_pkts_ERR;
    uint64_t business_sccp_pkts_IT;
    uint64_t business_sccp_pkts_XUDT;
    uint64_t business_sccp_pkts_XUDTS;
    uint64_t business_sccp_pkts_LUDT;
    uint64_t business_sccp_pkts_LUDTS;
    uint64_t business_sccp_pkts_unkown_type;
    uint64_t business_sccp_pkts_reassembling;
    uint64_t business_sccp_pkts_bad;

    /*m3ua parse statistics*/
    uint64_t business_m3ua_pkts;
    uint64_t business_m3ua_pkts_class_trans;
    uint64_t business_m3ua_pkts_class_others;
    uint64_t business_m3ua_pkts_proto_sccp;
    uint64_t business_m3ua_pkts_proto_others;
    uint64_t business_m3ua_pkts_bad;

    /*ranap parse statistics*/
    uint64_t business_ranap_pkts_InitialUEMsg;
    uint64_t business_ranap_pkts_DirectTransfer;
    uint64_t business_ranap_pkts_CommonID;
    uint64_t business_ranap_pkts_IuReleaseCommand;
    uint64_t business_ranap_pkts_RabAssigmentReq;
    uint64_t business_ranap_pkts_SetOrModifyList_more;      
    uint64_t business_ranap_pkts_SetOrModifyItem_more;    
    uint64_t business_ranap_pkts_RabAssigmentRes;
    uint64_t business_ranap_pkts_SetOrModifiedList_more;      
    uint64_t business_ranap_pkts_SetOrModifiedItem_more;    
    uint64_t business_ranap_pkts_Invalid_Packet;          
    uint64_t business_ranap_pkts_not_PSdomain;
    uint64_t business_ranap_pkts_LAI_IEextbit;
    uint64_t business_ranap_pkts_LAI_pkt_len_error;
    uint64_t business_ranap_pkts_RAC_pkt_len_error;
    uint64_t business_ranap_pkts_PerNASUEID_extbit;
    uint64_t business_ranap_pkts_PerNASUEID_pktLenError;
    uint64_t business_ranap_pkts_transAddr_extbit;
    uint64_t business_ranap_pkts_transAddr_pktLenError;
    uint64_t business_ranap_pkts_transAddr_notIPv4orIPv6;
    uint64_t business_ranap_pkts_transAss_extbit;
    uint64_t business_ranap_pkts_transAss_not_teid;
    uint64_t business_ranap_pkts_rabPara_extbit;
    uint64_t business_ranap_pkts_rabPara_IEextbit;
    uint64_t business_ranap_pkts_trafficClass_extbit;
    uint64_t business_ranap_pkts_rABAsymmetry_extbit;
    uint64_t business_ranap_pkts_sDU_Para_extbit;
    uint64_t business_ranap_pkts_sDU_Para_IEextbit;
    uint64_t business_ranap_pkts_sDU_ErrRatio_IEextbit;
    uint64_t business_ranap_pkts_residualBit_IEextbit;
    uint64_t business_ranap_pkts_sDUFormatInfo_extbit;
    uint64_t business_ranap_pkts_sDUFormatInfo_IEextbit;
    uint64_t business_ranap_pkts_allocation_extbit;
    uint64_t business_ranap_pkts_allocation_IEextbit;
    uint64_t business_ranap_pkts_sourceStatDesc_extbit;
    uint64_t business_ranap_pkts_relocationReq_extbit;
    uint64_t business_ranap_pkts_RABModifyItF_extbit;
    uint64_t business_ranap_pkts_RABModifyItF_IEextbit;
    uint64_t business_ranap_pkts_RABModifyItFNOTransinfo;
    uint64_t business_ranap_pkts_RABuserPlaneInfo_extbit;
    uint64_t business_ranap_pkts_RABuserPlaneInfo_IEextbit;
    uint64_t business_ranap_pkts_RABuserPlaneMode_extbit;
    uint64_t business_ranap_pkts_RABtransInfo_extbit;
    uint64_t business_ranap_pkts_RABtransInfo_IEextbit;
    uint64_t business_ranap_pkts_RABModifiedIt_extbit;
    uint64_t business_ranap_pkts_RABModifiedIt_IEextbit;
    uint64_t business_ranap_pkts_RABModifiedItno_ip_teid;
    uint64_t business_ranap_pkts_initialUEMsg_extbit;
    uint64_t business_ranap_pkts_initialUEMsg_IEextbit;
    uint64_t business_ranap_pkts_invalid_initialUEMsg;
    uint64_t business_ranap_pkts_commonID_extbit;
    uint64_t business_ranap_pkts_commonID_IEextbit;
    uint64_t business_ranap_pkts_invalid_commonID;
    uint64_t business_ranap_pkts_DirectTransfer_extbit;
    uint64_t business_ranap_pkts_DirectTransfer_IEextbit;
    uint64_t business_ranap_pkts_invalid_DirectTransfer;
    uint64_t business_ranap_pkts_RABAssigReq_extbit;
    uint64_t business_ranap_pkts_RABAssigReq_IEextbit;
    uint64_t business_ranap_pkts_invalid_RABAssigReq;
    uint64_t business_ranap_pkts_RABAssigRes_extbit;
    uint64_t business_ranap_pkts_RABAssigRes_IEextbit;
    uint64_t business_ranap_pkts_invalid_RABAssigRes;
    uint64_t business_ranap_pkts_initiMsg_not_care;
    uint64_t business_ranap_pkts_outcome_not_care;
    uint64_t business_ranap_pkts_succoutcome_packet;
    uint64_t business_ranap_pkts_unsuccoutcome_packet;
    uint64_t business_ranap_pkts_RANAPpdu_extbit;
    uint64_t business_ranap_pkts_Unknown_Packet;
    uint64_t business_ranap_pkts_all_packet;
    uint64_t business_ranap_pkts_initiating_packet;
    uint64_t business_ranap_pkts_outcome_packet;
    uint64_t business_ranap_pkts_num;
    uint64_t business_ranap_pkts_size;

    /*GMM-NAS parse statistics*/
    uint64_t ms_identity_imeisv;
    uint64_t attach_request_packet;
    uint64_t attach_request_bad_packet;
    uint64_t attach_request_ms_identity_parse_err;
    uint64_t attach_accept_packet;
    uint64_t attach_accept_bad_packet;
    uint64_t attach_accept_ms_identity_parse_err;
    uint64_t identity_response_packet;
    uint64_t identity_response_ms_identity_parse_err;
    uint64_t rau_request_packet;
    uint64_t rau_request_bad_packet;
    uint64_t rau_request_ptmsi_err;
    uint64_t rau_accept_packet;
    uint64_t rau_accept_bad_packet;
    uint64_t rau_accept_ms_identity_parse_err;
    uint64_t ptmsi_reloc_cmd_packet;
    uint64_t ptmsi_reloc_cmd_ptmsi_parse_err;
    uint64_t gmm_deteach_packet;
    uint64_t gmm_other_message_packet;
    uint64_t not_gmm_nas_packet;
}umts_parse_stat_t;

typedef struct
{
    uint32_t stat_mask;     //��־��ʾ��Щͳ�ƣ�������� LTE_and_UMTS_statistics_mask
    
    /*Iups relate statistics*/
    uint64_t pkts_IuPS_not_found_imsi_from_PTMSI;
    uint64_t pkts_IuPS_attach_request_not_found_valid_imsi;
    uint64_t pkts_IuPS_search_imsi_table_failed;
    uint64_t pkts_create_an_info_table_failed;
    uint64_t pkts_search_an_info_table_failed;
    uint64_t pkts_update_an_info_table_failed;
    uint64_t pkts_create_cn_info_table_failed;
    uint64_t pkts_search_cn_info_table_failed;
    uint64_t pkts_update_cn_info_table_failed;
    uint64_t pkts_update_imsi_table_failed;
    uint64_t pkts_create_p_tmsi_table_failed;
    uint64_t pkts_search_p_tmsi_table_failed;
    uint64_t pkts_update_p_tmsi_table_failed;

    uint64_t pkts_create_gtp_u_table_failed;
    uint64_t pkts_search_gtp_u_table_failed;
    uint64_t pkts_update_gtp_u_table_failed;
    uint64_t pkts_gtp_u_table_info_without_imsi;

    uint64_t pkts_Iups_gmm_attach_request;
    uint64_t pkts_Iups_gmm_attach_accept;
    uint64_t pkts_Iups_gmm_rau_accept;
    uint64_t pkts_Iups_gmm_identify_response;
    uint64_t pkts_Iups_gmm_reallocCmd;
    uint64_t pkts_Iups_gmm_deattach_accept;

    uint64_t pkts_Iups_ranap_initialUeMsg;
    uint64_t pkts_Iups_ranap_initialUeMsg_attachreq;
    uint64_t pkts_Iups_ranap_commonID;
    uint64_t pkts_Iups_ranap_commonID_cc;
    uint64_t pkts_Iups_ranap_commonID_dt1;
    uint64_t pkts_Iups_ranap_directTransfer;
    uint64_t pkts_Iups_ranap_directTrans_cc;
    uint64_t pkts_Iups_ranap_directTrans_attachreq;
    uint64_t pkts_Iups_ranap_directTrans_attachacc;
    uint64_t pkts_Iups_ranap_directTrans_rauacc;
    uint64_t pkts_Iups_ranap_directTrans_identityres;
    uint64_t pkts_Iups_ranap_directTrans_realloccmd;
    uint64_t pkts_Iups_ranap_directTrans_deattachacc;
    uint64_t pkts_Iups_ranap_rabAssigReq;
    uint64_t pkts_Iups_ranap_rabAssigRes;
    uint64_t pkts_Iups_ranap_IuRelease;
    uint64_t pkts_Iups_sccp_cr_without_ranap;
    uint64_t pkts_Iups_sccp_cc_without_ranap;

    uint64_t pkts_Iups_gmm_attachReq_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_attachReq_find_cnTable;
    uint64_t pkts_Iups_gmm_attachReq_find_anTable;
    uint64_t pkts_Iups_gmm_attachReq_create_imsiTable;
    uint64_t pkts_Iups_gmm_attachAcc_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_attachAcc_pTmsi_valid;
    uint64_t pkts_Iups_gmm_attachAcc_find_anTable;
    uint64_t pkts_Iups_gmm_attachAcc_anTable_imsi_invalid;
    uint64_t pkts_Iups_gmm_attachAcc_create_pTmsiT;
    uint64_t pkts_Iups_gmm_attachAcc_up_imsiT_pTmsi;
    uint64_t pkts_Iups_gmm_rauAcc_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_rauAcc_up_anTable_rai;
    uint64_t pkts_Iups_gmm_rauAcc_find_imsiT;
    uint64_t pkts_Iups_gmm_rauAcc_create_pTmsiT;
    uint64_t pkts_Iups_gmm_rauAcc_up_imsiT;
    uint64_t pkts_Iups_gmm_idenRes_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_idenRes_no_imsiAndimei;
    uint64_t pkts_Iups_gmm_idenRes_imsi_valid;
    uint64_t pkts_Iups_gmm_idenRes_find_cnT;
    uint64_t pkts_Iups_gmm_idenRes_up_cnT_imsi;
    uint64_t pkts_Iups_gmm_idenRes_find_anT;
    uint64_t pkts_Iups_gmm_idenRes_up_anT_imsi;
    uint64_t pkts_Iups_gmm_idenRes_create_imsiT;
    uint64_t pkts_Iups_gmm_idenRes_imei_vaild;
    uint64_t pkts_Iups_gmm_idenRes_imei_find_cnT;
    uint64_t pkts_Iups_gmm_idenRes_imei_cnT_no_imsi;
    uint64_t pkts_Iups_gmm_idenRes_imei_update_imsiT;
    uint64_t pkts_Iups_gmm_reallocCmd_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_reallocCmd_find_anT;
    uint64_t pkts_Iups_gmm_reallocCmd_create_pTmsiT;
    uint64_t pkts_Iups_gmm_reallocCmd_up_imsiT_pTmsi;
    uint64_t pkts_Iups_gmm_deattachacc_IupsInfo_isNull;
    uint64_t pkts_Iups_gmm_deattachacc_upLink;
    uint64_t pkts_Iups_gmm_deattachacc_upLink_find_cnT;
    uint64_t pkts_Iups_gmm_deattachacc_upLink_cnTNoImsi;
    uint64_t pkts_Iups_gmm_deattachacc_downLink;
    uint64_t pkts_Iups_gmm_deattachacc_down_find_anT;
    uint64_t pkts_Iups_gmm_deattachacc_down_anTNoImsi;
    uint64_t pkts_Iups_ranap_iniUeMsg_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_iniUeMsg_sccp_no_CrOrSlr;
    uint64_t pkts_Iups_ranap_iniUeMsg_gmm_notCare;
    uint64_t pkts_Iups_ranap_iniUeMsg_gmm_pTmsi_valid;
    uint64_t pkts_Iups_ranap_iniUeMsg_find_pTmsiT;
    uint64_t pkts_Iups_ranap_iniUeMsg_create_anT;
    uint64_t pkts_Iups_ranap_iniUeMsg_attachreq_createImsiT;
    uint64_t pkts_Iups_ranap_commonID_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_commonID_imsi_invalid;
    uint64_t pkts_Iups_ranap_commonID_cc_createAnT;
    uint64_t pkts_Iups_ranap_commonID_cc_findAnT;
    uint64_t pkts_Iups_ranap_commonID_cc_create_cnT;
    uint64_t pkts_Iups_ranap_commonID_cc_up_anT;
    uint64_t pkts_Iups_ranap_commonID_cc_create_imsiT;
    uint64_t pkts_Iups_ranap_commonID_cc_up_imsiT;
    uint64_t pkts_Iups_ranap_commonID_dt1_noDlr;
    uint64_t pkts_Iups_ranap_commonID_dt1_find_anT;
    uint64_t pkts_Iups_ranap_commonID_dt1_find_cnT;
    uint64_t pkts_Iups_ranap_commonID_dt1_create_imisT;
    uint64_t pkts_Iups_ranap_dirTrans_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_dirTrans_cc_create_anT;
    uint64_t pkts_Iups_ranap_dirTrans_cc_find_anT;
    uint64_t pkts_Iups_ranap_dirTrans_cc_create_cnT;
    uint64_t pkts_Iups_ranap_dirTrans_cc_up_imsiT;
    uint64_t pkts_Iups_ranap_dirTrans_cc_up_anT;
    uint64_t pkts_Iups_ranap_rabAsreq_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_rabAsreq_no_dlr;
    uint64_t pkts_Iups_ranap_rabAsreq_trasInfo_invalid;
    uint64_t pkts_Iups_ranap_rabAsreq_find_gtpuT;
    uint64_t pkts_Iups_ranap_rabAsreq_find_anT;
    uint64_t pkts_Iups_ranap_rabAsreq_up_anT;
    uint64_t pkts_Iups_ranap_rabAsreq_up_gtpuT_rai_fail;
    uint64_t pkts_Iups_ranap_rabAsreq_gtpuT_rai_valid;
    uint64_t pkts_Iups_ranap_rabAsreq_find_imsiT;
    uint64_t pkts_Iups_ranap_rabAsreq_up_imsiT;
    uint64_t pkts_Iups_ranap_rabAsres_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_rabAsres_no_dlr;
    uint64_t pkts_Iups_ranap_rabAsres_trasInfo_invalid;
    uint64_t pkts_Iups_ranap_rabAsres_find_cnT;
    uint64_t pkts_Iups_ranap_rabAsres_cnT_no_imsi;
    uint64_t pkts_Iups_ranap_rabAsres_find_imsiT;
    uint64_t pkts_Iups_ranap_rabAsres_create_gtpuT;
    uint64_t pkts_Iups_ranap_IuRelease_IupsInfo_isNull;
    uint64_t pkts_Iups_ranap_IuRelease_noDlrOrDirection;
    uint64_t pkts_Iups_ranap_IuRelease_find_anT;
    uint64_t pkts_Iups_sccp_cr_no_IupsInfo;
    uint64_t pkts_Iups_sccp_cr_no_slr;
    uint64_t pkts_Iups_sccp_cr_create_anT;
    uint64_t pkts_Iups_sccp_cc_no_IupsInfo;
    uint64_t pkts_Iups_sccp_cc_no_slrOrdlr;
    uint64_t pkts_Iups_sccp_cc_no_find_anT;
    uint64_t pkts_Iups_sccp_cc_create_anT;
    uint64_t pkts_Iups_sccp_cc_create_cnT;

    /*gn relate statistics*/
    uint64_t pkts_gtpv1c_create_pdp_context_request;
    uint64_t pkts_gtpv1c_create_pdp_context_response;
    uint64_t pkts_gtpv1c_update_pdp_context_request;
    uint64_t pkts_gtpv1c_delete_pdp_context_response;
    uint64_t pkts_gtpv1c_para_imsi_invalid;
    uint64_t pkts_gtpv1c_ip_teid_invalid;
    uint64_t pkts_gtpv1c_para_pdn_invalid;
    uint64_t pkts_Gn_createreq_create_imsiTable_failed;
    uint64_t pkts_Gn_createreq_create_imsiTable;
    uint64_t pkts_Gn_createreq_update_imsiTable1_failed;
    uint64_t pkts_Gn_createreq_update_imsiTable1;
    uint64_t pkts_Gn_createreq_create_sgsnTable_failed;
    uint64_t pkts_Gn_createreq_create_sgsnTable;
    uint64_t pkts_Gn_createreq_update_imsiTable2_failed;
    uint64_t pkts_Gn_createreq_update_imsiTable2;
    
    uint64_t pkts_Gn_createrep_search_sgsnTable_failed;
    uint64_t pkts_Gn_createrep_search_imisTable_failed;
    uint64_t pkts_Gn_createrep_create_ggsnTable_failed;
    uint64_t pkts_Gn_createrep_create_ggsnTable;
    uint64_t pkts_Gn_createrep_create_gtpu_ulTable_failed;
    uint64_t pkts_Gn_createrep_create_gtpu_ulTable;
    uint64_t pkts_Gn_createrep_update_imsiTable_failed;
    uint64_t pkts_Gn_createrep_update_imsiTable;
    
    uint64_t pkts_Gn_updatereq_search_ggsnTable_failed;
    uint64_t pkts_Gn_updatereq_search_imsiTable_failed;
    uint64_t pkts_Gn_updatereq_search_gtpu_dlTable_failed;
    uint64_t pkts_Gn_updatereq_create_gtpu_dlTable_failed;
    uint64_t pkts_Gn_updatereq_create_gtpu_dlTable;
    uint64_t pkts_Gn_updatereq_update_imsiTable1_failed;
    uint64_t pkts_Gn_updatereq_update_imsiTable1;
    uint64_t pkts_Gn_updatereq_search_gtpu_ulTable1_failed;
    uint64_t pkts_Gn_updatereq_search_gtpu_ulTable2_failed;
    uint64_t pkts_Gn_updatereq_update_gtpu_ulTable1_failed;
    uint64_t pkts_Gn_updatereq_update_gtpu_ulTable1;
    uint64_t pkts_Gn_updatereq_update_gtpu_dlTable_failed;
    uint64_t pkts_Gn_updatereq_update_gtpu_dlTable;
    uint64_t pkts_Gn_updatereq_update_imsiTable2_failed;
    uint64_t pkts_Gn_updatereq_update_imsiTable2;
    uint64_t pkts_Gn_updatereq_update_gtpu_ulTable2_failed;
    uint64_t pkts_Gn_updatereq_update_gtpu_ulTable2;
    
    uint64_t pkts_Gn_deleterep_search_sgsnTable_failed;
    uint64_t pkts_Gn_deleterep_search_imsiTable_failed;

    /*add by zhengwan, ����������ʱ����ͳ��, begin*/
    uint64_t pkts_create_imsiT;
    uint64_t pkts_create_gtpcT;
    uint64_t pkts_create_gtpuT;
    uint64_t pkts_create_an_infoT;
    uint64_t pkts_create_cn_infoT;
    uint64_t pkts_create_p_tmsiT;
    /*add by zhengwan, end*/
    
}umts_relate_stat_t;

typedef enum
{
    UMTS_PARSE,
    UMTS_RELATE,
}UMTS_STAT_TYPE;

typedef struct
{
    UMTS_STAT_TYPE type;
    union
    {
        umts_relate_stat_t relate_stat;
        umts_parse_stat_t  parse_stat;
    };
}umts_stat_t;

/* ���� */
typedef enum
{
    TABLE_IMSI = 0,
    TABLE_GTP_C,
    TABLE_GTP_U,
    TABLE_S6A,
    TABLE_AN_INFO,
    TABLE_S_TMSI,
    TABLE_CN_INFO,
    TABLE_P_TMSI,
    TABLE_MAX
}table_name_t;

#define TABLE_S1U_SGW TABLE_GTP_U
#define TABLE_S1U_ENB TABLE_GTP_U
#define TABLE_S1_MME  TABLE_AN_INFO

/* �ѱ�ʽ */
typedef enum
{
    SEARCH_INDEX,   /*����������*/
    SEARCH_HASH     /*����ϣֵ����*/
}search_mthd_t;

typedef struct
{
    ip_comm_t       access_node_ip;/*4g:eNodeB_ip*/
    uint32_t        access_node_id;/*4g:enode_ue_s1ap_id*/
    ip_comm_t       cn_ip;/*3g:sgsn_ip;4g:mme_ip*/
    uint32_t        cn_id;/*3g:sgsn_sccp_id;4g:mme_ue_s1ap_id*/
}__attribute__((packed)) lte_an_info_hash_para ;
typedef struct
{
    uint8_t         reserved;/*����λ��ǿ����Ϊ0�������ֿ�������ʱLTE���е�IP��version*/
    uint32_t        rnc_m3ua_signal_code;/*m3ua�������*/
    uint32_t        rnc_sccp_id;
    uint32_t        sgsn_m3ua_signal_code;
    uint32_t        sgsn_sccp_id;
}__attribute__((packed)) umts_an_info_hash_para ;
typedef struct
{
    ip_comm_t               cn_ip;              /*4G:MME_ip*/
    uint32_t                cn_id;              /*4G:mme_ue_s1ap_id*/
    ip_comm_t               access_node_ip;     /*4G:eNodeB_ip*/
    uint32_t                access_node_id;     /*4G:enode_ue_s1ap_id*/
}__attribute__((packed)) lte_cn_info_hash_para ;
typedef struct
{
    uint8_t         reserved;/*����λ��ǿ����Ϊ0�������ֿ�������ʱLTE���е�IP��version*/
    uint32_t        sgsn_m3ua_signal_code;/*m3ua�������*/
    uint32_t        sgsn_sccp_id;
    uint32_t        rnc_m3ua_signal_code;/*m3ua�������*/
    uint32_t        rnc_sccp_id;
}__attribute__((packed)) umts_cn_info_hash_para ;

//ר��Ϊÿ�����Ժ���չ�ֶ��ṩ�ӿ�

/*ͨ��ip��teid��ϣ��ѯ�Ĺ��ýṹ�� */
typedef struct
{
    ip_comm_t     ip;         /* ip */
    lte_teid_t   teid;          /* TEID */
    lte_imsi_t   imsi;
    struct
    {
        lte_imei_t   imei;
        lte_msisdn_t msisdn;
        uint16_t     msisdn_len;
        lte_guti_t   guti;
        lte_tai_t    tai;
        rai_t        rai;
        cell_id_t    cellid;
    }s1;
}it_cell_t;

/*Mobile Communication System*/
typedef enum
{
    MCS_GPRS   = 2,   /*2g*/
    MCS_WCDMA  = 3,   /*3g*/
    MCS_LTE    = 4    /*4g*/
}mobile_comm_sys_t;

#define UMTS 0 /*���ڱ��Ϊ3g*/
#define LTE  1 /*���ڱ��Ϊ4g*/

/* Ҫ��ʾ�ı��� */
typedef union
{
    /* IMSI_TABLE */
    struct
    {
        lte_imsi_t     imsi;
        lte_imei_t     imei;
        lte_msisdn_t   msisdn;
        uint32_t       pos_dl_gtp_c;
        uint32_t       pos_ul_gtp_c;
        uint32_t       s6a_bkt;
        uint32_t       pos_an_info;
        uint32_t       pos_cn_info;
        lte_guti_t     guti;
        lte_tai_t      tai;
        uint16_t       msisdn_len;
        uint16_t       guti_len;
        uint16_t       tai_len;
        uint32_t       pos_ul_gtp_u;
        uint32_t       pos_dl_gtp_u;
        uint32_t       pos_ptmsi_imsi_map;
        lte_ecgi_t     ecgi;
        rai_t          rai;
        cell_id_t      cellid;
    }im;
    
    /*s1_enode_mme table*/
    struct
    {
        union
        {
            lte_an_info_hash_para       lte_hash_para;
            umts_an_info_hash_para      umts_hash_para;
        };
        lte_imsi_t      imsi;
        lte_rand_t      rand;
        lte_guti_t      old_guti;
        uint32_t        cipher_alg_type;
        uint32_t        guti_flag;
        lte_tai_t       tai;
        lte_ecgi_t      ecgi;
        rai_t           rai;
        mobile_comm_sys_t   mobile_type; //����������3g����4g
    }id;

    /*s_timsi table*/
    struct
    {
        lte_s_tmsi_t    s_tmsi;       
        lte_imsi_t      imsi;
    }st;

    struct
    {
        p_tmsi_t        p_tmsi;     
        imsi_t          imsi;
    }pt;
    /*CN INFO*/
    struct
    {
        union
        {
            lte_cn_info_hash_para       lte_hash_para;
            umts_cn_info_hash_para      umts_hash_para;
        };
        imsi_t                  imsi;
        struct
        {
            int8_t      valid;
            ip_comm_t   enodeb_ip;
            int32_t     enodeb_ue_s1ap_id;
            lte_ecgi_t  ecgi;
            lte_tai_t   tai;
        } cache_info;  
        mobile_comm_sys_t       mobile_type; //����������3g����4g
        uint16_t                aging;
        uint32_t                mask;
    }cn;
    
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

/*add by zhengwan 
�����ж���Щ�ֶ�ֵ�Ƿ���Ч����mp�е��ֶ���Чֵ��Ӧ������mp���޸���Щֵ���ڴ˴�ҲҪ�޸�*/
typedef enum tagImsi_T
{ 
    IMSI_IMEI_VALID                  = 0x0002,           //[[CN]] IMEI ��Ч                                                     [[CN]]
    IMSI_MSISDN_VALID                = 0x0004,           //[[CN]] MSISDN ��Ч                                                   [[CN]]
    IMSI_GUTI_VALID                  = 0x0010,           //[[CN]] GUTI��Ч                                                      [[CN]]
    IMSI_TAI_VALID                   = 0x0020,           //[[CN]] TAI��Ч                                                       [[CN]]
    IMSI_RAI_VALID                   = 0x80000,          //[[CN]] RAI��Ч                                                       [[CN]]
    IMSI_UPDATE_ECGI_VALID           = 0x200000,         //[[CN]] ecgi index ��Ч                                               [[CN]]
    IMSI_CELL_ID_VALID               = 0x800000,         //[[CN]] CELL ID ��Ч                                                  [[CN]]
}Imsi_TUpdateActionEnum;


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
#define MODULE_GN                   0x0000080

/* ģ��ID */
typedef enum
{
    M_AGING = MODULE_LTE_AGING,       /* �ϻ�ģ��       */
    M_S11   = MODULE_LTE_S11,         /* s11����ģ��    */
    M_S1    = MODULE_LTE_S1,          /* s1����ģ��     */
    M_S6A   = MODULE_LTE_S6A,         /* s6a����ģ��    */
    M_TRNSF = MODULE_LTE_TRNSF,       /* ת��ģ��       */
    M_PARSE = MODULE_LTE_PARSE,       /* Э�����ģ��   */
    M_SYS   = MODULE_LTE_SYSTEM,      /* ϵͳ������ģ�� */
    M_GN    = MODULE_GN               /* gn����ģ��   */
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
