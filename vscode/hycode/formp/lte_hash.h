#ifndef __LTE_HASH_H
#define __LTE_HASH_H

#include <stdlib.h>
#include "cvmx_common.h"
#include "string.h"
#include "semp-errno.h"
#include <stdio.h>
#include "list.h"
#include "semp_hydra_relate.h"

#define AGING_INIT_TIME       15    /* 计数器初始值<范围:1 到 65535> */
#define AGING_SCAN_INTE       20     /* 老化功能扫描默认间隔时间 */

#define HASH_TAB_UPDTAE_NONE    0   //不更新hash表项的任何内容

/*imsi表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagImsiTableUpdateAction
{
    IMSI_T_UPDATE_IMSI                    = 0x0001,           //[[CN]] 更新imsi                                                       [[CN]]
    IMSI_T_UPDATE_IMEI                    = 0x0002,           //[[CN]] 更新imei                                                       [[CN]]
    IMSI_T_UPDATE_MSISDN                  = 0x0004,           //[[CN]] 更新msisdn                                                     [[CN]]
    IMSI_T_UPDATE_EX_FIELD                = 0x0008,           //[[CN]] 更新扩展字段                                                   [[CN]]
    IMSI_T_UPDATE_GUTI                    = 0x0010,           //[[CN]] 更新GUTI                                                       [[CN]]
    IMSI_T_UPDATE_TAI                     = 0x0020,           //[[CN]] 更新TAI                                                        [[CN]]
    IMSI_T_UPDATE_PDN                     = 0x0040,           //[[CN]] 更新PDN                                                        [[CN]]
    IMSI_T_UPDATE_ALG                     = 0x0080,           //[[CN]] 更新algorithm type                                             [[CN]]
    IMSI_T_UPDATE_KASME                   = 0x0100,           //[[CN]] 更新kasme                                                      [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_C            = 0x0200,           //[[CN]] 更新3g:sgsn控制面表项索引;4g:S11_MME表项                       [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_C            = 0x0400,           //[[CN]] 更新3g:ggsn控制面表项索引;4g:S11_SGW表项                       [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_U_DEFAULT    = 0x0800,           //[[CN]] 更新3g:主PDP上行用户面表项索引;4g:默认承载上行用户面表项索引   [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_U_SECOND     = 0x1000,           //[[CN]] 更新3g:从PDP上行用户面表项索引;4g:专用承载上行用户面表项索引   [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_U_DEFAULT    = 0x2000,           //[[CN]] 更新3g:主PDP下行用户面表项索引;4g:默认承载下行用户面表项索引   [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_U_SECOND     = 0x4000,           //[[CN]] 更新3g:从PDP下行用户面表项索引;4g:专用承载下行用户面表项索引   [[CN]]
    IMSI_T_UPDATE_POS_S6A                 = 0x8000,           //[[CN]] 更新s6a table table index                                      [[CN]]
    IMSI_T_UPDATE_MASK                    = 0x10000,          //[[CN]] 更新mask                                                       [[CN]]
    IMSI_T_UPDATE_AGING                   = 0x20000,          //[[CN]] 更新老化时间                                                   [[CN]]
    IMSI_T_UPDATE_POS_AN_INFO             = 0x40000,          //[[CN]] 更新3g:rnc_ip;4g:eNodeB_ip                                     [[CN]]
    IMSI_T_UPDATE_POS_CN_INFO             = 0x80000,          //[[CN]] 更新3g:sgsn_ip;4g:mme_ip                                       [[CN]]
    /*add by zhengwan for 3g,begin modified by zhengwan,由于在gn接口中要更新lac*/
    IMSI_T_UPDATE_PLMN                    = 0x100000,         //[[CN]] 更新rai中的plmn                                                [[CN]]
    IMSI_T_UPDATE_LAC                     = 0x200000,         //[[CN]] 更新rai中的lac                                                 [[CN]]
    IMSI_T_UPDATE_RAC                     = 0x400000,         //[[CN]] 更新rai中的rac                                                 [[CN]]
    IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP      = 0x800000,         //[[CN]] 更新ptmsi_imsi_map index                                       [[CN]]
    /*add by zhengwan for 3g,end*/
    IMSI_T_UPDATE_ECGI                    = 0x1000000,         //[[CN]] 更新ecgi                                                      [[CN]]
    IMSI_T_UPDATE_MOBILE_TYPE             = 0x2000000,         //[[CN]] 更新mobile type                                               [[CN]]
    IMSI_T_UPDATE_CELL_ID                 = 0x40000000,        //[[CN]] 更新CELL ID                                                   [[CN]]
}ImsiTableUpdateActionEnum;


typedef enum tagImsiTableContentValidMask
{
    IMSI_T_IMSI_VALID                  = 0x0001,           //[[CN]]  IMSI 有效                                                    [[CN]]
    IMSI_T_IMEI_VALID                  = 0x0002,           //[[CN]] IMEI 有效                                                     [[CN]]
    IMSI_T_MSISDN_VALID                = 0x0004,           //[[CN]] MSISDN 有效                                                   [[CN]]
    IMSI_T_EX_FIELD_VALID              = 0x0008,           //[[CN]] EX_FIELD有效                                                  [[CN]]
    IMSI_T_GUTI_VALID                  = 0x0010,           //[[CN]] GUTI有效                                                      [[CN]]
    IMSI_T_TAI_VALID                   = 0x0020,           //[[CN]] TAI有效                                                       [[CN]]
    IMSI_T_PDN_VALID                   = 0x0040,           //[[CN]] PDN有效                                                       [[CN]]
    IMSI_T_ALG_VALID                   = 0x0080,           //[[CN]] ALG有效                                                       [[CN]]
    IMSI_T_KASME_VALID                 = 0x0100,           //[[CN]] KASME有效                                                     [[CN]]
    IMSI_T_POS_DL_GTP_C_VALID          = 0x0200,           //[[CN]] 3g:sgsn控制面表项索引;4g:S11_MME表项有效                      [[CN]]
    IMSI_T_POS_UL_GTP_C_VALID          = 0x0400,           //[[CN]] 3g:ggsn控制面表项索引;4g:S11_SGW表项有效                      [[CN]]
    IMSI_T_POS_UL_GTP_U_DEFAULT_VALID  = 0x0800,           //[[CN]] 3g:主PDP上行用户面表项索引;4g:默认承载上行用户面表项索引有效  [[CN]]
    IMSI_T_POS_UL_GTP_U_SECOND_VALID   = 0x1000,           //[[CN]] 3g:从PDP上行用户面表项索引;4g:专用承载上行用户面表项索引有效  [[CN]]
    IMSI_T_POS_DL_GTP_U_DEFAULT_VALID  = 0x2000,           //[[CN]] 3g:主PDP下行用户面表项索引;4g:默认承载下行用户面表项索引有效  [[CN]]
    IMSI_T_POS_DL_GTP_U_SECOND_VALID   = 0x4000,           //[[CN]] 3g:从PDP下行用户面表项索引;4g:专用承载下行用户面表项索引有效  [[CN]]
    IMSI_T_POS_S6A_VALID               = 0x8000,           //[[CN]] s6a  index有效                                                [[CN]]
    IMSI_T_POS_AN_INFO_VALID           = 0x10000,          //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效                                    [[CN]]
    IMSI_T_AGING_VALID                 = 0x20000,          //[[CN]] AGING有效                                                     [[CN]]
    IMSI_T_POS_CN_INFO_VALID           = 0x40000,          //[[CN]] 3g:sgsn_ip;4g:mme_ip有效                                      [[CN]]
    /*add by zhengwan for 3g,begin*/
    IMSI_T_RAI_VALID                   = 0x80000,          //[[CN]] RAI有效                                                       [[CN]]
    IMSI_T_POS_PTMSI_IMSI_MAP_VALID    = 0x100000,         //[[CN]] ptmsi index 有效                                              [[CN]]
    /*add by zhengwan for 3g,end*/
    IMSI_T_UPDATE_ECGI_VALID           = 0x200000,         //[[CN]] ecgi index 有效                                               [[CN]]
    IMSI_T_UPDATE_MOBILE_TYPE_VALID    = 0x400000,         //[[CN]] ecgi index 有效                                               [[CN]]
    IMSI_T_CELL_ID_VALID               = 0x800000,         //[[CN]] CELL ID 有效                                                  [[CN]]
}ImsiTableContentValidMaskEnum;

#define UPDATE_IMSIT_FIELD(field, action, dst, src, len) \
    memcpy(dst, src, len);\
    action |= IMSI_T_UPDATE_##field;




/*s1_mme表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS1_MMETableUpdateAction
{
    AN_INFOT_UPDATE_AN_IP               = 0x0001,           //[[CN]] 更新3g:rnc_ip;4g:eNodeB_ip                 [[CN]]
    AN_INFOT_UPDATE_AN_ID               = 0x0002,           //[[CN]] 更新3g:rnc_sccp_id;4g:enode_ue_s1ap_id     [[CN]]
    AN_INFOT_UPDATE_IMSI                = 0x0004,           //[[CN]] 更新imsi                                   [[CN]]
    AN_INFOT_UPDATE_CN_IP               = 0x0008,           //[[CN]] 更新3g:sgsn_ip;4g:mme_ip                   [[CN]]
    AN_INFOT_UPDATE_CN_ID               = 0x0010,           //[[CN]] 更新3g:sgsn_sccp_id;4g:mme_ue_s1ap_id      [[CN]]
    AN_INFOT_UPDATE_RAND                = 0x0020,           //[[CN]] 更新rand                                   [[CN]]
    AN_INFOT_UPDATE_OLD_GUTI            = 0x0040,           //[[CN]] 更新old_guti                               [[CN]]
    AN_INFOT_UPDATE_ALG_TYPE            = 0x0080,           //[[CN]] 更新算法类型                               [[CN]]
    AN_INFOT_UPDATE_GUTI_FLAG           = 0x0100,           //[[CN]] 更新guti flag                              [[CN]]
    AN_INFOT_UPDATE_TAI                 = 0x0200,           //[[CN]] 更新TAI                                    [[CN]]
    AN_INFOT_UPDATE_MASK                = 0x0400,           //[[CN]] 更新mask                                   [[CN]]
    AN_INFOT_UPDATE_AGING               = 0x0800,           //[[CN]] 更新aging                                  [[CN]]
    S1_MMET_UPDATE_ECGI                 = 0x1000,           //[[CN]] 更新ECGI                                   [[CN]]
    AN_INFOT_UPDATE_RAI                 = 0x2000,           //[CN]] 更新RAI                                     [[CN]]
    AN_INFOT_UPDATE_TIMSI_FLAG          = 0X4000,           //[[CN]] 更新timsi flag                             [[CN]]
    AN_INFOT_UPDATE_RNC_POINT_CODE      = 0x8000,           //[[CN]] 更新rnc m3ua信令点码                        [[CN]]
    AN_INFOT_UPDATE_RNC_SCCP_ID         = 0x10000,           //[[CN]] 更新rnc sccp id                           [[CN]]
    AN_INFOT_UPDATE_SGSN_POINT_CODE     = 0x20000,           //[[CN]] 更新sgsn m3ua信令点码                     [[CN]]
    AN_INFOT_UPDATE_SGSN_SCCP_ID        = 0x40000,           //[[CN]] 更新sgsn sccp id                          [[CN]]
    AN_INFOT_UPDATE_MOBILE_TYPE         = 0x80000            //[[CN]] 更新mobile type                           [[CN]]
 }S1_MMETableUpdateActionEnum;
 
typedef enum tagS1MMETableContentValidMask
{
    AN_INFOT_AN_IP_VALID           = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效               [[CN]]
    AN_INFOT_AN_ID_VALID           = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效   [[CN]]
    AN_INFOT_IMSI_VALID            = 0x0004,           //[[CN]] 有效性 imsi                              [[CN]]
    AN_INFOT_CN_IP_VALID           = 0x0008,           //[[CN]] 3g:sgsn_ip;4g:mme_ip有效                 [[CN]]
    AN_INFOT_CN_ID_VALID           = 0x0010,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id有效    [[CN]]
    AN_INFOT_RAND_VALID            = 0x0020,           //[[CN]] 有效性 rand                              [[CN]]
    AN_INFOT_OLD_GUTI_VALID        = 0x0040,           //[[CN]] 有效性 old_guti                          [[CN]]
    AN_INFOT_ALG_TYPE_VALID        = 0x0080,           //[[CN]] 有效性 算法类型                          [[CN]]
    AN_INFOT_GUTI_FLAG_VALID       = 0x0100,           //[[CN]] 有效性 guti flag                         [[CN]]
    AN_INFOT_TAI_VALID             = 0x0200,           //[[CN]] 有效性 TAI                               [[CN]]
    AN_INFOT_AGING_VALID           = 0x0400,           //[[CN]] 更新aging                                [[CN]]
    AN_INFOT_ECGI_VALID            = 0x0800,           //[[CN]] 更新ecgi                                 [[CN]]
    AN_INFOT_RAI_VALID             = 0x1000,           //[[CN]] RAI有效                                  [[CN]]
    AN_INFOT_TIMSI_FLAG_VALID      = 0X2000,           //[[CN]] 有效性 TIMSI flag                        [[CN]]
    AN_INFOT_RNC_POINT_CODE_VALID  = 0x4000,           //[[CN]] rnc m3ua信令点码 有效                    [[CN]]
    AN_INFOT_RNC_SCCP_ID_VALID     = 0x8000,           //[[CN]] rnc sccp id 有效                         [[CN]]
    AN_INFOT_SGSN_POINT_CODE_VALID = 0x10000,           //[[CN]] sgsn m3ua信令点码 有效                  [[CN]]
    AN_INFOT_SGSN_SCCP_ID_VALID    = 0x20000,           //[[CN]] sgsn sccp id  有效                      [[CN]]
    AN_INFOT_MOBILE_TYPE_VALID     = 0x40000            //[[CN]] mobile type  有效                       [[CN]]
}S1MMETableContentValidMaskEnum;

/*add by zhengwan for 3g,begin*/
typedef enum tag_P_TMSI_T_UPDATE_EM
{
    P_TMSI_T_UPDATE_PTMSI       = 0x0001,           //[[CN]] P-TMSI有效                  [[CN]]
    P_TMSI_T_UPDATE_IMSI        = 0x0002            //[[CN]] IMSI                        [[CN]]
}P_TMSI_T_UPDATE_EM;

typedef enum tag_P_TMSI_T_ContentValidMask
{
    P_TMSI_T_PTMSI_VALID      = 0x0001,           //[[CN]] P-TMSI有效                  [[CN]]
    P_TMSI_T_IMSI_VALID       = 0x0002            //[[CN]] IMSI                        [[CN]]
}P_TMSI_T_ActionEnum;

/*add by zhengwan for 3g,end*/
#if 0
typedef enum tag_CN_INFOT_UPDATE_EM
{
    CN_INFOT_UPDATE_CN_IP       = 0x0001,           //[[CN]] 更新3g:sgsn_ip;4g:mme_ip有效                [[CN]]
    CN_INFOT_UPDATE_CN_ID       = 0x0002,           //[[CN]] 更新3g:sgsn_sccp_id;4g:mme_ue_s1ap_id有效   [[CN]]
    CN_INFOT_UPDATE_AN_IP       = 0x0004,           //[[CN]] 更新3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    CN_INFOT_UPDATE_AN_ID       = 0x0008,           //[[CN]] 更新3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_UPDATE_IMSI        = 0x0010            //[[CN]] 更新imsi                                    [[CN]]
}CN_INFOT_UPDATE_EM;

typedef enum tag_EM_CN_INFOT_PARA_VALID
{
    CN_INFOT_CN_IP_VALID       = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    CN_INFOT_CN_ID_VALID       = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_AN_IP_VALID       = 0x0004,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    CN_INFOT_AN_ID_VALID       = 0x0008,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi有效                                [[CN]]
}EM_CN_INFOT_PARA_VALID;
#endif

/* gtp_c表项的更新操作类型定义，每一位对应更新一个元素 */
typedef enum tag_GTP_C_T_UPDATE_EM
{
    GTP_C_T_UPDATE_GTP_IP        = 0x0001,           //[[CN]] 更新fteid       [[CN]]
    GTP_C_T_UPDATE_TEID          = 0x0002,
    GTP_C_T_UPDATE_IMSI          = 0x0004,           //[[CN]] 更新imsi        [[CN]]
    GTP_C_T_UPDATE_AGING         = 0x0008,           //[[CN]] 更新aging       [[CN]]
}GTP_C_T_UPDATE_EM;

/*s1u表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS1UTableUpdateAction
{
    GTP_U_T_UPDATE_GTP_IP       = 0x0001,           //[[CN]] 更新trans_layer_ip        [[CN]]
    GTP_U_T_UPDATE_TEID         = 0x0002,           //[[CN]] 更新TEID                  [[CN]]
    GTP_U_T_UPDATE_USER_IP      = 0x0004,           //[[CN]] 更新user_ip               [[CN]]
    GTP_U_T_UPDATE_IMSI         = 0x0008,           //[[CN]] 更新imsi                  [[CN]]
    GTP_U_T_UPDATE_IMEI         = 0x0010,           //[[CN]] 更新imei                  [[CN]]
    GTP_U_T_UPDATE_MSISDN       = 0x0020,           //[[CN]] 更新msisdn                [[CN]]
    GTP_U_T_UPDATE_EX_FIELD     = 0x0040,           //[[CN]] 更新ex_field              [[CN]]
    GTP_U_T_UPDATE_AGING        = 0x0080,           //[[CN]] 更新aging                 [[CN]]
    GTP_U_T_UPDATE_TAI          = 0x0100,           //[[CN]] 更新tai                   [[CN]]
    GTP_U_T_UPDATE_GUTI         = 0x0200,           //[[CN]] 更新guti                  [[CN]]
    GTP_U_T_UPDATE_MASK         = 0x0400,           //[[CN]] 更新mask                  [[CN]]
    /*modified by zhengwan, 由于gn接口中需要更新lac字段，所以将rai的更新标志拆开,begin*/
    GTP_U_T_UPDATE_PLMN         = 0x0800,           //[[CN]] 更新plmn                  [[CN]]
    GTP_U_T_UPDATE_LAC          = 0x1000,           //[[CN]] 更新lac                   [[CN]]
    GTP_U_T_UPDATE_RAC          = 0x2000,           //[[CN]] 更新rac                   [[CN]]
    /*modified by zhengwan, end*/
    GTP_U_T_UPDATE_BEARID       = 0x4000,           //[[CN]] 更新BEARID                [[CN]]
    GTP_U_T_UPDATE_PDN          = 0x8000,           //[[CN]] 更新PDN                   [[CN]]
    GTP_U_T_UPDATE_ECGI         = 0x10000,           //[[CN]] 更新ECGI                 [[CN]]
#ifdef STAT_TEST
    GTP_U_T_UPDATE_CREATE_REALTE= 0x20000,           //[[CN]] 更新PDN                   [[CN]]
    GTP_U_T_UPDATE_B0_NUM       = 0x40000,           //[[CN]] 更新PDN                   [[CN]]
    GTP_U_T_UPDATE_B1_NUM       = 0x80000,          //[[CN]] 更新PDN                   [[CN]]
#endif
    GTP_U_T_UPDATE_MOBILE_TYPE  = 0x100000,         //[[CN]] 更新mobile type index     [[CN]]
    GTP_U_T_UPDATE_CELL_ID      = 0x200000,         //[[CN]] 更新CELL ID有效           [[CN]]
}S1UTableUpdateActionEnum;



typedef enum tagS1uTableContentValidMask
{
    GTP_U_T_GTP_IP_VALID                = 0x0001,           //[[CN]] trans_layer_ip有效 [[CN]]
    GTP_U_T_TEID_VALID                  = 0x0002,           //[[CN]] TEID有效           [[CN]]
    GTP_U_T_USER_IP_VALID               = 0x0004,           //[[CN]] user_ip有效        [[CN]]
    GTP_U_T_IMSI_VALID                  = 0x0008,           //[[CN]] IMSI 有效          [[CN]]
    GTP_U_T_IMEI_VALID                  = 0x0010,           //[[CN]] IMEI 有效          [[CN]]
    GTP_U_T_MSISDN_VALID                = 0x0020,           //[[CN]] MSISDN 有效        [[CN]]
    GTP_U_T_AGING_VALID                 = 0x0040,           //[[CN]] AGING 有效         [[CN]]
    GTP_U_T_EX_FIELD_VALID              = 0x0080,           //[[CN]] EX_FIELD有效       [[CN]]
    GTP_U_T_GUTI_VALID                  = 0x0100,           //[[CN]] GUTI有效           [[CN]]
    GTP_U_T_TAI_VALID                   = 0x0200,           //[[CN]] TAI有效            [[CN]]
    GTP_U_T_RAI_VALID                   = 0x0400,           //[[CN]] RAI有效            [[CN]]
    GTP_U_T_BEARID_VALID                = 0x0800,           //[[CN]] BEARID有效         [[CN]]
    GTP_U_T_PDN_VALID                   = 0x1000,           //[[CN]] PDN有效            [[CN]]
    GTP_U_T_CREATE_REALTE_VALID         = 0x2000,           //[[CN]] CREATE_REALTE有效  [[CN]]
    GTP_U_T_B0_NUM_VALID                = 0x4000,           //[[CN]] B0_NUM有效         [[CN]]
    GTP_U_T_B1_NUM_VALID                = 0x8000,           //[[CN]] B1_NUM有效         [[CN]]
    GTP_U_T_ECGI_VALID                  = 0x10000,          //[[CN]] ECGI有效           [[CN]]
    GTP_U_T_UPDATE_MOBILE_TYPE_VALID    = 0x20000,          //[[CN]] mobile type index 有效  [[CN]]
    GTP_U_T_CELL_ID_VALID               = 0x40000,          //[[CN]] CELL ID 有效       [[CN]]
}S1uTableContentValidMaskEnum;

/*s6a表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS6_ATableUpdateAction
{
    S6_AT_UPDATE_HSSIP        = 0x0001,           //[[CN]] 更新hssip       [[CN]]
    S6_AT_UPDATE_MMEIP        = 0x0002,           //[[CN]] 更新mmeip       [[CN]]
    S6_AT_UPDATE_HOP_BY_HOP   = 0x0004,           //[[CN]] 更新hop_by_hop  [[CN]]
    S6_AT_UPDATE_IMSI         = 0x0008,           //[[CN]] 更新imsi        [[CN]]
    S6_AT_UPDATE_AGING        = 0x0010,           //[[CN]] 更新aging       [[CN]]
    S6_AT_UPDATE_NAS_KEY      = 0x0020,           //[[CN]] 更新nas_key     [[CN]]
}S6_ATableUpdateActionEnum;

/*s_tmsi表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS_TMSITableUpdateAction
{
    S_TMSIT_UPDATE_S_TMSI        = 0x0001,           //[[CN]] 更新s_tmsi       [[CN]]
    S_TMSIT_UPDATE_IMSI          = 0x0002,           //[[CN]] 更新imsi         [[CN]]
}S_TMSITableUpdateActionEnum;


typedef enum tag_CN_INFOT_UPDATE_EM
{
    CN_INFOT_UPDATE_CN_IP                       = (0x1<<0), //[[CN]] 更新3g:sgsn_ip;4g:mme_ip有效                [[CN]]
    CN_INFOT_UPDATE_CN_ID                       = (0x1<<1), //[[CN]] 更新3g:sgsn_sccp_id;4g:mme_ue_s1ap_id有效   [[CN]]
    CN_INFOT_UPDATE_AN_IP                       = (0x01<<2),//[[CN]] 更新3g:rnc_ip;4g:eNodeB_ip有效              [[CN]]
    CN_INFOT_UPDATE_AN_ID                       = (0x01<<3),//[[CN]] 更新3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_UPDATE_STAT                        = (0x01<<4),//
    CN_INFOT_UPDATE_CH_VALID                    = (0x01<<5),//
    CN_INFOT_UPDATE_CH_ENB_IP                   = (0x01<<6),//
    CN_INFOT_UPDATE_CH_ENB_UE_ID                = (0x01<<7),//
    CN_INFOT_UPDATE_CH_ECGI                     = (0x01<<8),//
    CN_INFOT_UPDATE_CH_TAI                      = (0x01<<9),//
    CN_INFOT_UPDATE_AGING                       = (0x01<<10),//
    CN_INFOT_UPDATE_HANDOVER_INFO               = (0x01<<11),//
    CN_INFOT_UPDATE_IMSI                        = (0x01<<12), //[[CN]] 更新imsi                                    [[CN]]
    CN_INFOT_UPDATE_MASK                        = (0x01<<13), //[[CN]] 更新imsi                                    [[CN]]
    CN_INFOT_UPDATE_SGSN_POINT_CODE             = (0x01<<14), //[[CN]] 更新imsi                                    [[CN]]
    CN_INFOT_UPDATE_SGSN_SCCP_ID                = (0x01<<15), //[[CN]] 更新imsi                                    [[CN]]
    CN_INFOT_UPDATE_RNC_POINT_CODE              = (0x01<<16), //[[CN]] 更新imsi                                    [[CN]]
    CN_INFOT_UPDATE_RNC_SCCP_ID                 = (0x01<<17), //[[CN]] 更新imsi                                     [[CN]]
    CN_INFOT_UPDATE_MOBILE_TYPE                 = (0x01<<18)
}CN_INFOT_UPDATE_EM;

typedef enum tag_CN_INFOT_PARA_VALID_EM
{
    CN_INFOT_AN_ID_VALID                       = (0x01<<0),//[[CN]]  3g:rnc_sccp_id;4g:enode_ue_s1ap_id有效  [[CN]]
    CN_INFOT_STAT_VALID                        = (0x01<<1),//
    CN_INFOT_CH_VALID                          = (0x01<<2),//
    CN_INFOT_CH_ENB_IP_VALID                   = (0x01<<3),//
    CN_INFOT_CH_ENB_UE_ID_VALID                = (0x01<<4),//
    CN_INFOT_CH_ECGI_VALID                     = (0x01<<5),//
    CN_INFOT_CH_TAI_VALID                      = (0x01<<6),//
    CN_INFOT_AGING_VALID                       = (0x01<<7),//
    CN_INFOT_HANDOVER_INFO_VALID               = (0x01<<8),//
    CN_INFOT_IMSI_VALID                        = (0x01<<9), //[[CN]]  imsi有效                                [[CN]]
    CN_INFOT_MASK_VALID                        = (0x01<<10), //[[CN]]  MASK有效                                [[CN]]
    CN_INFOT_SGSN_POINT_CODE_VALID             = (0x01<<11),//
    CN_INFOT_SGSN_SCCP_ID_VALID                = (0x01<<12),//
    CN_INFOT_RNC_POINT_CODE_VALID              = (0x01<<13), //[[CN]]  imsi有效                                [[CN]]
    CN_INFOT_RNC_SCCP_ID_VALID                 = (0x01<<14), //[[CN]]  MASK有效                                [[CN]]
    CN_INFOT_UPDATE_MOBILE_TYPE_VALID         = (0x01<<15)
}CN_INFOT_PARA_VALID_EM;



/*计时器操作处理*/
typedef enum
{
    TIMER_REPLACE,                  /* 设置新的值 */
    TIMER_REDUCE,                   /* 减操作 */
}timer_opera_t;


/* lte hash table cell */
#define ENTRY_CELL_DATA_SIZE 14
typedef struct hash_cell_s 
{
    struct list_head node;                 /* 双向链表指针 16字节*/
    uint64_t entry[ENTRY_CELL_DATA_SIZE];  /* Cell数据 14*8 = 112 字节*/
}__attribute__((packed)) hash_cell_t; /* 128字节 */
#define HASH_ENTRY_VALID_SIZE_128  (128-16)
#define HASH_ENTRY_VALID_SIZE_256  (256-16)

typedef struct
{
#define MAX_HASH_DWORD 8
    uint64_t  data[MAX_HASH_DWORD];
    uint8_t   size;//sizeof(uint64_t)
}hash_key_t;




typedef struct{
    struct list_head head;          /* 桶子的双向链表指针 */
    uint64_t bucket_depth;          /* 桶深度，即包含的cell个数 */
    uint64_t total_cell;            /* 未使用 */
    uint64_t del_cell;              /* 未使用 */
    cvmx_spinlock_t lock;           /* 操作锁 */
    uint32_t index;                 /* 未使用 */
}hash_bucket_t;//32B


typedef enum
{
    HASH_CMP_DIFF,
    HASH_CMP_SAME,
}hash_cmp_em_t;

typedef struct
{
    char            name[64];               /* cavium内存池分配的标识，按表名来命名*/
    
    hash_bucket_t * first_bucket;           /* 指向第一个桶的指针 */
    uint32_t        max_bucket;             /* 桶子数最大值，目前取值有1千万,2千万 */
    
    int             pool;                   /*FPA POOL ID*/
    uint16_t        cell_size;              /* cell空间大小 */
    mp_code_t (*hash)(hash_key_t *key, uint32_t *index);
    mp_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    mp_code_t (*update)(void *src, void*dst, uint64_t action);
    mp_code_t (*get_bucket)(uint32_t *buck);
#ifdef RELATE_AGING
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
#endif
}hash_table_t;

#define GET_HASH_BUCKET_BY_INDEX(_table, _index)  (_index < _table->max_bucket)? (_table->first_bucket+_index):NULL;

/* 用于定义对某个表项的操作 */
typedef struct
{
    hash_bucket_t    *bucket;               /* 桶数据结构体，包含双向链表头节点 */
    struct list_head *node;                 /* 双向链表前后指针结构体：当前结点 */
    hash_key_t  key;                        /* 哈希函数的key，可以是imsi，或者是ip和teid的结合 */
    hash_cmp_em_t search;                   /* 哈希查询结果*/
    int hash_enable;                        /* 未使用，目前查询只能通过hash */
    int compare_enable;                     /* 是否是哈希表查询操作 */
    int update_enable;                      /* 是否是哈希表更新操作 */
    int new_enable;                         /* 是否是哈希结点新建操作 */
    uint64_t update_action;                 /* update操作的开关，按照位操作来选择更新的表项内容 */
    int (*action)(void *src, void*dst);     /* 回调函数实现：不同哈希表对应的相同操作*/
    int (*action_up)(void *src, void*dst, uint64_t action);     /* 回调函数实现：不同哈希表对应的相同操作*/
    void            *d_compare;             /* 绑定某个表项*/
    void            *d_update;              /* 绑定某个表项*/
}hash_table_control_t;


typedef struct
{           
    hash_bucket_t    *bucket; /*cur*/      
    struct list_head *node;
    int search;
    void *cell_compare;     /*when the entry use*/
    void *cell_update;
    int (*compare)(void *src, void*dst); /*0:equals 1:not equals*/
    mp_error_t (*update)(void *src, void*dst); 
}lte_search_info_t;


/*表项索引，本来应该用uint32，为节省空间，采用了位域 */
typedef struct
{
    uint32_t en:1;
    uint32_t bearerid:4;
    uint32_t resv:2;
    uint32_t index:25;
#define MAX_INDEX_V 0x1ffffff    
    struct list_head    *node;        
}__attribute__((packed)) hash_table_index_t;



#define GET_BUCKET_OFFSET(_hasht, _bucket)  ((_bucket-_hasht->first_bucket)/(sizeof(hash_bucket_t)))

#define NODE2ENTRY(_node, _type)    ( (_type*) (((lte_hash_cell_t *)list_entry(_node, lte_hash_cell_t, node))->entry))
        



#define LTE_HASH_TABLE_LOCK(_hash_table)  do{ \
    cvmx_spinlock_lock(&((_hash_table)->lock));  \
    }while(0)
    
#define LTE_HASH_TABLE_UNLOCK(_hash_table)  do{\
    cvmx_spinlock_unlock(&((_hash_table)->lock));  \
}while(0)

#define LTE_IMSI_TABLE_DELETE_LOCK  do{ \
    cvmx_spinlock_lock(&(imsi_delete_lock));  \
    }while(0)

#define LTE_IMSI_TABLE_DELETE_UNLOCK  do{\
    cvmx_spinlock_unlock(&(imsi_delete_lock));  \
}while(0)

/* 将通用ip结构转为key值 */
#define IP_TRASNFER_TO_KEY(ptr, comm_ip)  \
do{                 \
    *ptr = comm_ip.version; \
    ptr++; \
    memcpy(ptr,  &(comm_ip.ip.u64), sizeof(comm_ip.ip.u64)); \
    ptr += 16;\
}while(0)

mp_code_t check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf);

mp_code_t hash_table_search_update(hash_table_t *table, hash_table_control_t *control);
mp_code_t hash_table_search_destroy(hash_table_t *table, hash_table_control_t *control);
mp_code_t hash_table_search_by_index_and_offset(hash_table_t *table,
                                        uint32_t index, uint32_t  column, 
                                        void *odata, uint32_t olen);
mp_code_t hash_table_get_bucket_depth_by_index(hash_table_t *table, uint32_t index, uint32_t *depth);
mp_code_t hash_table_flush(hash_table_t *table);
mp_code_t hash_table_cell_delete(hash_table_t *table, uint32_t offset,
                                                struct list_head * cnode);

void *hash_table_index_to_entry(hash_table_t *table, hash_table_index_t *index);
mp_code_t hash_table_remove_entry_by_index(hash_table_t *table, hash_table_index_t *index);

mp_code_t hash_cell_get_by_index( hash_table_t *table, hash_table_index_t *hti,
                                  void *dst_data, uint32_t dst_len );

mp_code_t hash_cell_get_by_hash( hash_table_t *table, hash_key_t *key,
                                 void *dst_data, uint32_t dst_len );

mp_code_t hash_get_cell_and_index_by_hash( hash_table_t *table,
                                         hash_key_t   *key,
                                         void         *dst_data,
                                         uint32_t      dst_len,
                                         hash_table_index_t *index);

mp_code_t hash_cell_delete_by_hash( hash_table_t *table,
                                    hash_key_t   *key );

mp_code_t hash_cell_delete_by_index( hash_table_t       *table,
                                     hash_table_index_t *hti);

mp_code_t hash_cell_update_timer_by_hash(hash_table_t *table,
                                         hash_key_t   *key,
                                         uint16_t      tm);

mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm);

mp_code_t update_imsi_table(void *dst, void *src, uint64_t action);
mp_code_t update_s1_mme_table(void *dst, void *src, uint64_t action);
mp_code_t update_gtpc_table(void *dst, void *src, uint64_t action);
mp_code_t update_s1u_table(void *dst, void *src, uint64_t action);
mp_code_t update_s6a_table(void *dst, void *src, uint64_t action);
mp_code_t update_s_tmsi_table(void *dst, void *src, uint64_t action);
mp_code_t update_ptmsi_imsi_table(void *dst, void *src, uint64_t action);



#ifdef STAT_TEST
inline mp_code_t hash_cell_new(hash_table_t *table, hash_bucket_t *bucket, void * cell);
#endif
/* chengshuan Add for table operation */

/*更新表项内容的操作类型*/
typedef enum
{
    CREATE_TABLE,
    UPDATE_TABLE
}UpdateTypeEnum;

mp_error_t search_table_by_index(
                            table_name_t table_type,             /* [in] 需要查找的表的类型 */
                            hash_table_index_t index,            /* [in] index */
                            void* compare_d,                     /* [in] compare_d for table control*/
                            void* data,                         /* [out] 表项内容 */
                            uint8_t* len,                        /* [out] 表项长度，校验类型用 */
                            uint8_t* result                      /* [out] 查找结果，是否找到对应key的表项 */
                            );

mp_error_t create_update_table_by_hash(
                            table_name_t table_type,             /* [in] 需要更新的表的类型 */
                            UpdateTypeEnum opType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            uint64_t actionType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            void* data,                          /* [in] 表项内容 */
                            uint8_t len,                         /* [in] 表项长度，校验类型用 */
                            hash_table_index_t* index           /* [out] index*/
                            );

/* chengshuan Add for table operation -end- */



#endif
