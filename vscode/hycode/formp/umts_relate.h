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
    AN_INFOT_AN_IP_VALID       = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    AN_INFOT_AN_ID_VALID       = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    AN_INFOT_CN_IP_VALID       = 0x0004,           //[[CN]] 3g:sgsn_ip;4g:mme_ip有效                [[CN]]
    AN_INFOT_CN_ID_VALID       = 0x0008,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id有效   [[CN]]
    AN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi有效                                [[CN]]
    AN_INFOT_RAI_VALID         = 0x0020,           //[[CN]] RAI有效                                 [[CN]]
    AN_INFOT_RAND_VALID        = 0x0040,           //[[CN]] RAND有效                                [[CN]]
    AN_INFOT_OLD_GUTI_VALID    = 0x0080,           //[[CN]] 旧的GUTI有效                            [[CN]]
    AN_INFOT_ALG_TYPE_VALID    = 0x0100,           //[[CN]] 算法类型有效                            [[CN]]
    AN_INFOT_TAI_VALID         = 0x0200,           //[[CN]] TAI有效                                 [[CN]]
}EM_AN_INFOT_PARA_VALID;


typedef enum tag_EM_CN_INFOT_PARA_VALID
{
    CN_INFOT_CN_IP_VALID       = 0x0001,           //[[CN]] 3g:sgsn_ip;4g:mme_ip有效                [[CN]]
    CN_INFOT_CN_ID_VALID       = 0x0002,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id有效   [[CN]]
    CN_INFOT_AN_IP_VALID       = 0x0004,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    CN_INFOT_AN_ID_VALID       = 0x0008,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi有效                                [[CN]]
}EM_CN_INFOT_PARA_VALID;

typedef enum tag_EM_GTPU_T_PARA_VALID
{
    GTPU_T_USER_IP_VALID        = 0x0001,           //[[CN]] user_ip有效                [[CN]]
    GTPU_T_IMSI_VALID           = 0x0002,           //[[CN]] imsi有效   [[CN]]
    GTPU_T_IMEI_VALID           = 0x0004,           //[[CN]] imei有效              [[CN]]
    GTPU_T_MSISDN_VALID         = 0x0008,           //[[CN]] msisdn有效  [[CN]]
    GTPU_T_EX_FIELD_VALID       = 0x0010,           //[[CN]] ex_field有效                                [[CN]]
    GTPU_T_RAI_VALID            = 0x0020,           //[[CN]] rai有效                                [[CN]]
    GTPU_T_BEARID_VALID         = 0x0040,           //[[CN]] bearId有效                                [[CN]]
    GTPU_T_TAI_VALID            = 0x0080,           //[[CN]] tai有效                                [[CN]]
    GTPU_T_GUTI_VALID           = 0x0100,           //[[CN]] guti有效                                [[CN]]
}EM_GTPU_T_PARA_VALID;


typedef enum tagImsiTableContentValidMask
{
    IMSIT_IMEI_VALID           = 0x0001,           //[[CN]] imei有效           [[CN]]
    IMSIT_MSISDN_VALID         = 0x0002,           //[[CN]] msisdn有效         [[CN]]
    IMSIT_PDN_VALID            = 0x0004,           //[[CN]] pdn有效            [[CN]]
    IMSIT_EX_FIELD_VALID       = 0x0008,           //[[CN]] 扩展字段有效       [[CN]]
    IMSIT_GUTI_VALID           = 0x0010,           //[[CN]] GUTI有效           [[CN]]
    IMSIT_TAI_VALID            = 0x0020,           //[[CN]] TAI有效            [[CN]]
    IMSIT_ALG_VALID            = 0x0040,           //[[CN]] 算法类型有效       [[CN]]
    IMSIT_KASME_VALID          = 0x0080,           //[[CN]] kasme有效          [[CN]]
    IMSIT_POS_UL_GTP_C         = 0x0100,           //[[CN]] 3g:ggsn控制面表项索引;4g:S11_SGW表项有效 [[CN]]
    IMSIT_POS_DL_GTP_C         = 0x0200,           //[[CN]] 3g:sgsn控制面表项索引;4g:S11_MME表项有效 [[CN]]
    IMSIT_POS_UL_GTP_U_DEFAULT = 0x0400,           //[[CN]] 3g:主PDP上行用户面表项索引;4g:默认承载上行用户面表项索引有效[[CN]]
    IMSIT_POS_UL_GTP_U_SECOND  = 0x0800,           //[[CN]] 3g:从PDP上行用户面表项索引;4g:专用承载上行用户面表项索引有效[[CN]]
    IMSIT_POS_DL_GTP_U_DEFAULT = 0x1000,           //[[CN]] 3g:主PDP下行用户面表项索引;4g:默认承载下行用户面表项索引有效[[CN]]
    IMSIT_POS_DL_GTP_U_SECOND  = 0x2000,           //[[CN]] 3g:从PDP下行用户面表项索引;4g:专用承载下行用户面表项索引有效[[CN]]
    IMSIT_RAI_VALID            = 0x4000,           //[[CN]] TAI有效            [[CN]]
    IMSIT_POS_PTMSI_IMSI_MAP   = 0x8000,           //[[CN]] RAI有效            [[CN]]
    IMSIT_POS_AN_INFO          = 0x10000,           //[[CN]] AN_INFO有效       [[CN]]
    IMSIT_POS_CN_INFO          = 0x20000,           //[[CN]] CN_INFO有效       [[CN]]
    IMSIT_POS_PDN              = 0x40000,           //[[CN]] PDN有效            [[CN]]
}ImsiTableContentValidMaskEnum;

typedef struct tag_rai_t    
{
    plmn_t plmn;
    lac_t lac;
    rac_t rac;
}rai_t;

#define MAX_NUM_BEARER 2


/* imsi 表项 */
typedef struct 
{
    // identity info
    imsi_t                      imsi;
    imei_t                      imei;
    msisdn_t                    msisdn;
    extend_field_t              ex_field;
    ip_comm_t                   pdn;

    // sub-tables index
    hash_table_index_t          pos_ul_gtp_c;   //上行的GTPC表项index: 相当于原LTE系统设计的s11-sgw表项index(可以考虑UP命名)
    hash_table_index_t          pos_dl_gtp_c;   //下行的GTPC表项index: 相当于原LTE系统设计的s11-mme表项index
    hash_table_index_t          pos_ul_gtp_u[MAX_NUM_BEARER];    // 上行GTPU表项index:相当于上行s1-u表项索引
    hash_table_index_t          pos_dl_gtp_u[MAX_NUM_BEARER];    //下行GTPU表项index:相当于下行s1-u表项索引
    hash_table_index_t          pos_an_info;  //接入点(an-access node)控制信息表项index: 相当于原LTE系统设计的s1_mme表项index(3g表示rnc_Iu表项index) 
    hash_table_index_t          pos_cn_info; //核心网控制信息表项index: 相当于原LTE系统设计的lte_table_enodeb_mme_handle表项index(3g表示sgsn_Iu表项index)

    hash_table_index_t          pos_ptmsi_imsi_map; //ptmsi_imsi映射表项index:
    rai_t                       rai;

    hash_table_index_t          pos_stmsi_imsi_map; //stmsi_imsi映射表项index:
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


/* 接入点控制信息 表项 (s1_mme/rnc_iu)*/
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
    uint32_t        mask;      // indicate table entry field validity详见类型EM_AN_INFOT_PARA_VALID
}__attribute__((packed)) umts_table_rnc_iu_info_t;

/* 核心网控制信息 表项 (lte_table_enodeb_mme_handle/sgsn_iu)*/
typedef struct
{
    ip_comm_t               cn_ip;              /*3G:sgsn_ip;       4G:MME_ip*/
    uint32_t                cn_id;              /*3G:sgsn_sccp_id;  4G:mme_ue_s1ap_id*/
    ip_comm_t               access_node_ip;     /*3G:rnc_ip;        4G:eNodeB_ip*/
    uint32_t                access_node_id;     /*3G:rnc_sccp_id;   4G:enode_ue_s1ap_id*/

    imsi_t                  imsi;

    /*stat和handover_cache_info用于信令日志切换流程*/
    //usr_eNB_handover_stat_e stat;//暂时放在这里扩展用
    //handover_cache_info_t   handover_cache_info;//基站切换时缓存之前的信息如果失败可以恢复之前的数据
    
    uint16_t                aging;
    uint32_t                mask;                           // indicate table entry field validity
}__attribute__((packed)) umts_table_sgsn_Iu_info_t;


/* gtpc 表项(s11-sgw/s11-MME/gn-sgsn-gtpc/gn-ggsn-gtpc)*/
typedef struct
{
    ip_comm_t           control_plane_ip;     /*3G:sgsn_ip或者ggsn_ip;       4G:MME_ip或者sgw_ip*/
    teid_t              teid;               /*3G:sgsn或ggsn控制面teid;       4G:MME或SGW控制面teid*/
    imsi_t              imsi;
    uint16_t            aging;              //2字节
}__attribute__((packed)) umts_table_Gn_ggsn_t ,umts_table_Gn_sgsn_t;

/* P-TMSI_IMSI 表项 */
typedef struct
{
    p_tmsi_t     p_tmsi;     
    imsi_t       imsi;
}__attribute__((packed)) umts_table_p_tmsi_t ;


/* gptu 表项  一共2,000,000 个，分上下行，分别1,000,000*/
typedef struct
{
    ip_comm_t           trans_layer_ip;     /*上行或者下行用户面隧道传输层IP*/
    teid_t              teid;               /*上行teid或者上行teid*/
    
    ip_comm_t           user_ip;              //4字节:分配给用户上网的IP-3g:ms_ip  4g:ue_ip
    imsi_t              imsi;               //8字节
    imei_t              imei;               //8字节
    msisdn_t            msisdn;             //8字节
    extend_field_t      ex_field;           //1字节
    uint16_t            aging;              //2字节
    uint32_t            mask;               // 4 字节

    rai_t               rai;
    uint8_t             bearId;              //3g:naspi  4g:bearid

    lte_tai_t           tai;                //5字节
    lte_guti_t          guti;               //12字节

}__attribute__((packed))umts_table_gtpu_ul_t, umts_table_gtpu_dl_t;

#endif

#endif

