#ifndef __UMTS_RELATE_H
#define __UMTS_RELATE_H

#include <stdio.h>
#include "semp-errno.h"
#include "semp_hydra_lte.h"
#include "lte_hash.h"
#include "relate_aging.h"
#include "lte_relate_s11.h"
#include "lte_relate.h"
#include "umts_relate_iups.h"
#include "umts_relate_gn_c.h"


/*BCD Code*/
//#define IMEI_LEN    8
//#define IMSI_LEN    8 
#define MSISDN_LEN  8
#define RAI_LEN     6
#define P_TMSI_LEN  4
#define LAC_LEN     2
#define RAC_LEN     1
#define PLMN_LEN    3





mp_code_t update_p_tmsi_table_key(p_tmsi_t ptmsi,hash_key_t *key);
mp_code_t update_gtp_u_table_key(ip_comm_t gtp_ip, uint32_t gtp_teid, hash_key_t *key);
mp_code_t p_tmsi_table_compare(void *src, void* dst, hash_cmp_em_t *cmp);
mp_code_t p_tmsi_table_hash(hash_key_t *key, uint32_t *hash_result);
mp_code_t update_p_tmsi_table(void *dst, void *src, uint64_t action);
mp_error_t umts_IuPS_relevance_process(parse_IuPS_t *IuPS);
mp_error_t lte_gtpv1c_process(parse_gtpv1c_t *gtpv1c);
mp_code_t umts_check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf);
mp_code_t get_umts_table_create_statistics(table_name_t table_type);
#if 0
typedef enum tag_EM_AN_INFOT_PARA_VALID
{
    AN_INFOT_AN_IP_VALID       = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    AN_INFOT_AN_ID_VALID       = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    AN_INFOT_CN_IP_VALID       = 0x0004,           //[[CN]] 3g:sgsn_ip;4g:mme_ip��Ч                [[CN]]
    AN_INFOT_CN_ID_VALID       = 0x0008,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id��Ч   [[CN]]
    AN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi��Ч                                [[CN]]
    AN_INFOT_RAI_VALID         = 0x0020,           //[[CN]] RAI��Ч                                 [[CN]]
    AN_INFOT_RAND_VALID        = 0x0040,           //[[CN]] RAND��Ч                                [[CN]]
    AN_INFOT_OLD_GUTI_VALID    = 0x0080,           //[[CN]] �ɵ�GUTI��Ч                            [[CN]]
    AN_INFOT_ALG_TYPE_VALID    = 0x0100,           //[[CN]] �㷨������Ч                            [[CN]]
    AN_INFOT_TAI_VALID         = 0x0200,           //[[CN]] TAI��Ч                                 [[CN]]
}EM_AN_INFOT_PARA_VALID;


typedef enum tag_EM_CN_INFOT_PARA_VALID
{
    CN_INFOT_CN_IP_VALID       = 0x0001,           //[[CN]] 3g:sgsn_ip;4g:mme_ip��Ч                [[CN]]
    CN_INFOT_CN_ID_VALID       = 0x0002,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id��Ч   [[CN]]
    CN_INFOT_AN_IP_VALID       = 0x0004,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    CN_INFOT_AN_ID_VALID       = 0x0008,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi��Ч                                [[CN]]
}EM_CN_INFOT_PARA_VALID;

typedef enum tag_EM_GTPU_T_PARA_VALID
{
    GTPU_T_USER_IP_VALID        = 0x0001,           //[[CN]] user_ip��Ч                [[CN]]
    GTPU_T_IMSI_VALID           = 0x0002,           //[[CN]] imsi��Ч   [[CN]]
    GTPU_T_IMEI_VALID           = 0x0004,           //[[CN]] imei��Ч              [[CN]]
    GTPU_T_MSISDN_VALID         = 0x0008,           //[[CN]] msisdn��Ч  [[CN]]
    GTPU_T_EX_FIELD_VALID       = 0x0010,           //[[CN]] ex_field��Ч                                [[CN]]
    GTPU_T_RAI_VALID            = 0x0020,           //[[CN]] rai��Ч                                [[CN]]
    GTPU_T_BEARID_VALID         = 0x0040,           //[[CN]] bearId��Ч                                [[CN]]
    GTPU_T_TAI_VALID            = 0x0080,           //[[CN]] tai��Ч                                [[CN]]
    GTPU_T_GUTI_VALID           = 0x0100,           //[[CN]] guti��Ч                                [[CN]]
}EM_GTPU_T_PARA_VALID;


typedef enum tagImsiTableContentValidMask
{
    IMSIT_IMEI_VALID           = 0x0001,           //[[CN]] imei��Ч           [[CN]]
    IMSIT_MSISDN_VALID         = 0x0002,           //[[CN]] msisdn��Ч         [[CN]]
    IMSIT_PDN_VALID            = 0x0004,           //[[CN]] pdn��Ч            [[CN]]
    IMSIT_EX_FIELD_VALID       = 0x0008,           //[[CN]] ��չ�ֶ���Ч       [[CN]]
    IMSIT_GUTI_VALID           = 0x0010,           //[[CN]] GUTI��Ч           [[CN]]
    IMSIT_TAI_VALID            = 0x0020,           //[[CN]] TAI��Ч            [[CN]]
    IMSIT_ALG_VALID            = 0x0040,           //[[CN]] �㷨������Ч       [[CN]]
    IMSIT_KASME_VALID          = 0x0080,           //[[CN]] kasme��Ч          [[CN]]
    IMSIT_POS_UL_GTP_C         = 0x0100,           //[[CN]] 3g:ggsn�������������;4g:S11_SGW������Ч [[CN]]
    IMSIT_POS_DL_GTP_C         = 0x0200,           //[[CN]] 3g:sgsn�������������;4g:S11_MME������Ч [[CN]]
    IMSIT_POS_UL_GTP_U_DEFAULT = 0x0400,           //[[CN]] 3g:��PDP�����û����������;4g:Ĭ�ϳ��������û������������Ч[[CN]]
    IMSIT_POS_UL_GTP_U_SECOND  = 0x0800,           //[[CN]] 3g:��PDP�����û����������;4g:ר�ó��������û������������Ч[[CN]]
    IMSIT_POS_DL_GTP_U_DEFAULT = 0x1000,           //[[CN]] 3g:��PDP�����û����������;4g:Ĭ�ϳ��������û������������Ч[[CN]]
    IMSIT_POS_DL_GTP_U_SECOND  = 0x2000,           //[[CN]] 3g:��PDP�����û����������;4g:ר�ó��������û������������Ч[[CN]]
    IMSIT_RAI_VALID            = 0x4000,           //[[CN]] TAI��Ч            [[CN]]
    IMSIT_POS_PTMSI_IMSI_MAP   = 0x8000,           //[[CN]] RAI��Ч            [[CN]]
    IMSIT_POS_AN_INFO          = 0x10000,           //[[CN]] AN_INFO��Ч       [[CN]]
    IMSIT_POS_CN_INFO          = 0x20000,           //[[CN]] CN_INFO��Ч       [[CN]]
    IMSIT_POS_PDN              = 0x40000,           //[[CN]] PDN��Ч            [[CN]]
}ImsiTableContentValidMaskEnum;

typedef struct tag_rai_t    
{
    plmn_t plmn;
    lac_t lac;
    rac_t rac;
}rai_t;

#define MAX_NUM_BEARER 2


/* imsi ���� */
typedef struct 
{
    // identity info
    imsi_t                      imsi;
    imei_t                      imei;
    msisdn_t                    msisdn;
    extend_field_t              ex_field;
    ip_comm_t                   pdn;

    // sub-tables index
    hash_table_index_t          pos_ul_gtp_c;   //���е�GTPC����index: �൱��ԭLTEϵͳ��Ƶ�s11-sgw����index(���Կ���UP����)
    hash_table_index_t          pos_dl_gtp_c;   //���е�GTPC����index: �൱��ԭLTEϵͳ��Ƶ�s11-mme����index
    hash_table_index_t          pos_ul_gtp_u[MAX_NUM_BEARER];    // ����GTPU����index:�൱������s1-u��������
    hash_table_index_t          pos_dl_gtp_u[MAX_NUM_BEARER];    //����GTPU����index:�൱������s1-u��������
    hash_table_index_t          pos_an_info;  //�����(an-access node)������Ϣ����index: �൱��ԭLTEϵͳ��Ƶ�s1_mme����index(3g��ʾrnc_Iu����index) 
    hash_table_index_t          pos_cn_info; //������������Ϣ����index: �൱��ԭLTEϵͳ��Ƶ�lte_table_enodeb_mme_handle����index(3g��ʾsgsn_Iu����index)

    hash_table_index_t          pos_ptmsi_imsi_map; //ptmsi_imsiӳ�����index:
    rai_t                       rai;

    hash_table_index_t          pos_stmsi_imsi_map; //stmsi_imsiӳ�����index:
    hash_table_index_t          pos_s6a; 
    // encryption info
    uint8_t                     alg_type;               
    lte_kasme_t                 kasme;  
    // location info
    lte_guti_t                  guti;                   
    lte_tai_t                   tai; 
    
    uint32_t                    mask;                           // indicate table entry field validity
    uint16_t                    aging;
}__attribute__((packed)) umts_table_imsi_t ;


/* ����������Ϣ ���� (s1_mme/rnc_iu)*/
typedef struct
{
    ip_comm_t       access_node_ip; /*3g:rnc_ip;4g:eNodeB_ip*/
    uint32_t        access_node_id; /*3g:rnc_sccp_id;4g:enode_ue_s1ap_id*/
    imsi_t          imsi;
    ip_comm_t       cn_ip; /*3g:sgsn_ip;4g:mme_ip*/
    uint64_t        cn_id;/*3g:sgsn_sccp_id;4g:mme_ue_s1ap_id*/
    p_tmsi_t        cache_ptmsi;
    rai_t           rai;
    lte_rand_t      rand;
    lte_guti_t      old_guti;
    uint32_t        cipher_alg_type;    //Type of ciphering algorithm
    lte_tai_t       tai;
    uint16_t        aging;
    uint32_t        mask;      // indicate table entry field validity�������EM_AN_INFOT_PARA_VALID
}__attribute__((packed)) umts_table_rnc_iu_info_t;

/* ������������Ϣ ���� (lte_table_enodeb_mme_handle/sgsn_iu)*/
typedef struct
{
    ip_comm_t               cn_ip;              /*3G:sgsn_ip;       4G:MME_ip*/
    uint32_t                cn_id;              /*3G:sgsn_sccp_id;  4G:mme_ue_s1ap_id*/
    ip_comm_t               access_node_ip;     /*3G:rnc_ip;        4G:eNodeB_ip*/
    uint32_t                access_node_id;     /*3G:rnc_sccp_id;   4G:enode_ue_s1ap_id*/

    imsi_t                  imsi;

    /*stat��handover_cache_info����������־�л�����*/
    //usr_eNB_handover_stat_e stat;//��ʱ����������չ��
    //handover_cache_info_t   handover_cache_info;//��վ�л�ʱ����֮ǰ����Ϣ���ʧ�ܿ��Իָ�֮ǰ������
    
    uint16_t                aging;
    uint32_t                mask;                           // indicate table entry field validity
}__attribute__((packed)) umts_table_sgsn_Iu_info_t;


/* gtpc ����(s11-sgw/s11-MME/gn-sgsn-gtpc/gn-ggsn-gtpc)*/
typedef struct
{
    ip_comm_t           control_plane_ip;     /*3G:sgsn_ip����ggsn_ip;       4G:MME_ip����sgw_ip*/
    teid_t              teid;               /*3G:sgsn��ggsn������teid;       4G:MME��SGW������teid*/
    imsi_t              imsi;
    uint16_t            aging;              //2�ֽ�
}__attribute__((packed)) umts_table_Gn_ggsn_t ,umts_table_Gn_sgsn_t;

/* P-TMSI_IMSI ���� */
typedef struct
{
    p_tmsi_t     p_tmsi;     
    imsi_t       imsi;
}__attribute__((packed)) umts_table_p_tmsi_t ;


/* gptu ����  һ��2,000,000 �����������У��ֱ�1,000,000*/
typedef struct
{
    ip_comm_t           trans_layer_ip;     /*���л��������û�����������IP*/
    teid_t              teid;               /*����teid��������teid*/
    
    ip_comm_t           user_ip;              //4�ֽ�:������û�������IP-3g:ms_ip  4g:ue_ip
    imsi_t              imsi;               //8�ֽ�
    imei_t              imei;               //8�ֽ�
    msisdn_t            msisdn;             //8�ֽ�
    extend_field_t      ex_field;           //1�ֽ�
    uint16_t            aging;              //2�ֽ�
    uint32_t            mask;               // 4 �ֽ�

    rai_t               rai;
    uint8_t             bearId;              //3g:naspi  4g:bearid

    lte_tai_t           tai;                //5�ֽ�
    lte_guti_t          guti;               //12�ֽ�

}__attribute__((packed))umts_table_gtpu_ul_t, umts_table_gtpu_dl_t;

#endif

#endif

