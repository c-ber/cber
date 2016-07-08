#ifndef __LTE_HASH_H
#define __LTE_HASH_H

#include <stdlib.h>
#include "cvmx_common.h"
#include "string.h"
#include "semp-errno.h"
#include <stdio.h>
#include "list.h"
#include "semp_hydra_relate.h"

#define AGING_INIT_TIME       15    /* ��������ʼֵ<��Χ:1 �� 65535> */
#define AGING_SCAN_INTE       20     /* �ϻ�����ɨ��Ĭ�ϼ��ʱ�� */

#define HASH_TAB_UPDTAE_NONE    0   //������hash������κ�����

/*imsi����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagImsiTableUpdateAction
{
    IMSI_T_UPDATE_IMSI                    = 0x0001,           //[[CN]] ����imsi                                                       [[CN]]
    IMSI_T_UPDATE_IMEI                    = 0x0002,           //[[CN]] ����imei                                                       [[CN]]
    IMSI_T_UPDATE_MSISDN                  = 0x0004,           //[[CN]] ����msisdn                                                     [[CN]]
    IMSI_T_UPDATE_EX_FIELD                = 0x0008,           //[[CN]] ������չ�ֶ�                                                   [[CN]]
    IMSI_T_UPDATE_GUTI                    = 0x0010,           //[[CN]] ����GUTI                                                       [[CN]]
    IMSI_T_UPDATE_TAI                     = 0x0020,           //[[CN]] ����TAI                                                        [[CN]]
    IMSI_T_UPDATE_PDN                     = 0x0040,           //[[CN]] ����PDN                                                        [[CN]]
    IMSI_T_UPDATE_ALG                     = 0x0080,           //[[CN]] ����algorithm type                                             [[CN]]
    IMSI_T_UPDATE_KASME                   = 0x0100,           //[[CN]] ����kasme                                                      [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_C            = 0x0200,           //[[CN]] ����3g:sgsn�������������;4g:S11_MME����                       [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_C            = 0x0400,           //[[CN]] ����3g:ggsn�������������;4g:S11_SGW����                       [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_U_DEFAULT    = 0x0800,           //[[CN]] ����3g:��PDP�����û����������;4g:Ĭ�ϳ��������û����������   [[CN]]
    IMSI_T_UPDATE_POS_UL_GTP_U_SECOND     = 0x1000,           //[[CN]] ����3g:��PDP�����û����������;4g:ר�ó��������û����������   [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_U_DEFAULT    = 0x2000,           //[[CN]] ����3g:��PDP�����û����������;4g:Ĭ�ϳ��������û����������   [[CN]]
    IMSI_T_UPDATE_POS_DL_GTP_U_SECOND     = 0x4000,           //[[CN]] ����3g:��PDP�����û����������;4g:ר�ó��������û����������   [[CN]]
    IMSI_T_UPDATE_POS_S6A                 = 0x8000,           //[[CN]] ����s6a table table index                                      [[CN]]
    IMSI_T_UPDATE_MASK                    = 0x10000,          //[[CN]] ����mask                                                       [[CN]]
    IMSI_T_UPDATE_AGING                   = 0x20000,          //[[CN]] �����ϻ�ʱ��                                                   [[CN]]
    IMSI_T_UPDATE_POS_AN_INFO             = 0x40000,          //[[CN]] ����3g:rnc_ip;4g:eNodeB_ip                                     [[CN]]
    IMSI_T_UPDATE_POS_CN_INFO             = 0x80000,          //[[CN]] ����3g:sgsn_ip;4g:mme_ip                                       [[CN]]
    /*add by zhengwan for 3g,begin modified by zhengwan,������gn�ӿ���Ҫ����lac*/
    IMSI_T_UPDATE_PLMN                    = 0x100000,         //[[CN]] ����rai�е�plmn                                                [[CN]]
    IMSI_T_UPDATE_LAC                     = 0x200000,         //[[CN]] ����rai�е�lac                                                 [[CN]]
    IMSI_T_UPDATE_RAC                     = 0x400000,         //[[CN]] ����rai�е�rac                                                 [[CN]]
    IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP      = 0x800000,         //[[CN]] ����ptmsi_imsi_map index                                       [[CN]]
    /*add by zhengwan for 3g,end*/
    IMSI_T_UPDATE_ECGI                    = 0x1000000,         //[[CN]] ����ecgi                                                      [[CN]]
    IMSI_T_UPDATE_MOBILE_TYPE             = 0x2000000,         //[[CN]] ����mobile type                                               [[CN]]
    IMSI_T_UPDATE_CELL_ID                 = 0x40000000,        //[[CN]] ����CELL ID                                                   [[CN]]
}ImsiTableUpdateActionEnum;


typedef enum tagImsiTableContentValidMask
{
    IMSI_T_IMSI_VALID                  = 0x0001,           //[[CN]]  IMSI ��Ч                                                    [[CN]]
    IMSI_T_IMEI_VALID                  = 0x0002,           //[[CN]] IMEI ��Ч                                                     [[CN]]
    IMSI_T_MSISDN_VALID                = 0x0004,           //[[CN]] MSISDN ��Ч                                                   [[CN]]
    IMSI_T_EX_FIELD_VALID              = 0x0008,           //[[CN]] EX_FIELD��Ч                                                  [[CN]]
    IMSI_T_GUTI_VALID                  = 0x0010,           //[[CN]] GUTI��Ч                                                      [[CN]]
    IMSI_T_TAI_VALID                   = 0x0020,           //[[CN]] TAI��Ч                                                       [[CN]]
    IMSI_T_PDN_VALID                   = 0x0040,           //[[CN]] PDN��Ч                                                       [[CN]]
    IMSI_T_ALG_VALID                   = 0x0080,           //[[CN]] ALG��Ч                                                       [[CN]]
    IMSI_T_KASME_VALID                 = 0x0100,           //[[CN]] KASME��Ч                                                     [[CN]]
    IMSI_T_POS_DL_GTP_C_VALID          = 0x0200,           //[[CN]] 3g:sgsn�������������;4g:S11_MME������Ч                      [[CN]]
    IMSI_T_POS_UL_GTP_C_VALID          = 0x0400,           //[[CN]] 3g:ggsn�������������;4g:S11_SGW������Ч                      [[CN]]
    IMSI_T_POS_UL_GTP_U_DEFAULT_VALID  = 0x0800,           //[[CN]] 3g:��PDP�����û����������;4g:Ĭ�ϳ��������û������������Ч  [[CN]]
    IMSI_T_POS_UL_GTP_U_SECOND_VALID   = 0x1000,           //[[CN]] 3g:��PDP�����û����������;4g:ר�ó��������û������������Ч  [[CN]]
    IMSI_T_POS_DL_GTP_U_DEFAULT_VALID  = 0x2000,           //[[CN]] 3g:��PDP�����û����������;4g:Ĭ�ϳ��������û������������Ч  [[CN]]
    IMSI_T_POS_DL_GTP_U_SECOND_VALID   = 0x4000,           //[[CN]] 3g:��PDP�����û����������;4g:ר�ó��������û������������Ч  [[CN]]
    IMSI_T_POS_S6A_VALID               = 0x8000,           //[[CN]] s6a  index��Ч                                                [[CN]]
    IMSI_T_POS_AN_INFO_VALID           = 0x10000,          //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч                                    [[CN]]
    IMSI_T_AGING_VALID                 = 0x20000,          //[[CN]] AGING��Ч                                                     [[CN]]
    IMSI_T_POS_CN_INFO_VALID           = 0x40000,          //[[CN]] 3g:sgsn_ip;4g:mme_ip��Ч                                      [[CN]]
    /*add by zhengwan for 3g,begin*/
    IMSI_T_RAI_VALID                   = 0x80000,          //[[CN]] RAI��Ч                                                       [[CN]]
    IMSI_T_POS_PTMSI_IMSI_MAP_VALID    = 0x100000,         //[[CN]] ptmsi index ��Ч                                              [[CN]]
    /*add by zhengwan for 3g,end*/
    IMSI_T_UPDATE_ECGI_VALID           = 0x200000,         //[[CN]] ecgi index ��Ч                                               [[CN]]
    IMSI_T_UPDATE_MOBILE_TYPE_VALID    = 0x400000,         //[[CN]] ecgi index ��Ч                                               [[CN]]
    IMSI_T_CELL_ID_VALID               = 0x800000,         //[[CN]] CELL ID ��Ч                                                  [[CN]]
}ImsiTableContentValidMaskEnum;

#define UPDATE_IMSIT_FIELD(field, action, dst, src, len) \
    memcpy(dst, src, len);\
    action |= IMSI_T_UPDATE_##field;




/*s1_mme����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS1_MMETableUpdateAction
{
    AN_INFOT_UPDATE_AN_IP               = 0x0001,           //[[CN]] ����3g:rnc_ip;4g:eNodeB_ip                 [[CN]]
    AN_INFOT_UPDATE_AN_ID               = 0x0002,           //[[CN]] ����3g:rnc_sccp_id;4g:enode_ue_s1ap_id     [[CN]]
    AN_INFOT_UPDATE_IMSI                = 0x0004,           //[[CN]] ����imsi                                   [[CN]]
    AN_INFOT_UPDATE_CN_IP               = 0x0008,           //[[CN]] ����3g:sgsn_ip;4g:mme_ip                   [[CN]]
    AN_INFOT_UPDATE_CN_ID               = 0x0010,           //[[CN]] ����3g:sgsn_sccp_id;4g:mme_ue_s1ap_id      [[CN]]
    AN_INFOT_UPDATE_RAND                = 0x0020,           //[[CN]] ����rand                                   [[CN]]
    AN_INFOT_UPDATE_OLD_GUTI            = 0x0040,           //[[CN]] ����old_guti                               [[CN]]
    AN_INFOT_UPDATE_ALG_TYPE            = 0x0080,           //[[CN]] �����㷨����                               [[CN]]
    AN_INFOT_UPDATE_GUTI_FLAG           = 0x0100,           //[[CN]] ����guti flag                              [[CN]]
    AN_INFOT_UPDATE_TAI                 = 0x0200,           //[[CN]] ����TAI                                    [[CN]]
    AN_INFOT_UPDATE_MASK                = 0x0400,           //[[CN]] ����mask                                   [[CN]]
    AN_INFOT_UPDATE_AGING               = 0x0800,           //[[CN]] ����aging                                  [[CN]]
    S1_MMET_UPDATE_ECGI                 = 0x1000,           //[[CN]] ����ECGI                                   [[CN]]
    AN_INFOT_UPDATE_RAI                 = 0x2000,           //[CN]] ����RAI                                     [[CN]]
    AN_INFOT_UPDATE_TIMSI_FLAG          = 0X4000,           //[[CN]] ����timsi flag                             [[CN]]
    AN_INFOT_UPDATE_RNC_POINT_CODE      = 0x8000,           //[[CN]] ����rnc m3ua�������                        [[CN]]
    AN_INFOT_UPDATE_RNC_SCCP_ID         = 0x10000,           //[[CN]] ����rnc sccp id                           [[CN]]
    AN_INFOT_UPDATE_SGSN_POINT_CODE     = 0x20000,           //[[CN]] ����sgsn m3ua�������                     [[CN]]
    AN_INFOT_UPDATE_SGSN_SCCP_ID        = 0x40000,           //[[CN]] ����sgsn sccp id                          [[CN]]
    AN_INFOT_UPDATE_MOBILE_TYPE         = 0x80000            //[[CN]] ����mobile type                           [[CN]]
 }S1_MMETableUpdateActionEnum;
 
typedef enum tagS1MMETableContentValidMask
{
    AN_INFOT_AN_IP_VALID           = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч               [[CN]]
    AN_INFOT_AN_ID_VALID           = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч   [[CN]]
    AN_INFOT_IMSI_VALID            = 0x0004,           //[[CN]] ��Ч�� imsi                              [[CN]]
    AN_INFOT_CN_IP_VALID           = 0x0008,           //[[CN]] 3g:sgsn_ip;4g:mme_ip��Ч                 [[CN]]
    AN_INFOT_CN_ID_VALID           = 0x0010,           //[[CN]] 3g:sgsn_sccp_id;4g:mme_ue_s1ap_id��Ч    [[CN]]
    AN_INFOT_RAND_VALID            = 0x0020,           //[[CN]] ��Ч�� rand                              [[CN]]
    AN_INFOT_OLD_GUTI_VALID        = 0x0040,           //[[CN]] ��Ч�� old_guti                          [[CN]]
    AN_INFOT_ALG_TYPE_VALID        = 0x0080,           //[[CN]] ��Ч�� �㷨����                          [[CN]]
    AN_INFOT_GUTI_FLAG_VALID       = 0x0100,           //[[CN]] ��Ч�� guti flag                         [[CN]]
    AN_INFOT_TAI_VALID             = 0x0200,           //[[CN]] ��Ч�� TAI                               [[CN]]
    AN_INFOT_AGING_VALID           = 0x0400,           //[[CN]] ����aging                                [[CN]]
    AN_INFOT_ECGI_VALID            = 0x0800,           //[[CN]] ����ecgi                                 [[CN]]
    AN_INFOT_RAI_VALID             = 0x1000,           //[[CN]] RAI��Ч                                  [[CN]]
    AN_INFOT_TIMSI_FLAG_VALID      = 0X2000,           //[[CN]] ��Ч�� TIMSI flag                        [[CN]]
    AN_INFOT_RNC_POINT_CODE_VALID  = 0x4000,           //[[CN]] rnc m3ua������� ��Ч                    [[CN]]
    AN_INFOT_RNC_SCCP_ID_VALID     = 0x8000,           //[[CN]] rnc sccp id ��Ч                         [[CN]]
    AN_INFOT_SGSN_POINT_CODE_VALID = 0x10000,           //[[CN]] sgsn m3ua������� ��Ч                  [[CN]]
    AN_INFOT_SGSN_SCCP_ID_VALID    = 0x20000,           //[[CN]] sgsn sccp id  ��Ч                      [[CN]]
    AN_INFOT_MOBILE_TYPE_VALID     = 0x40000            //[[CN]] mobile type  ��Ч                       [[CN]]
}S1MMETableContentValidMaskEnum;

/*add by zhengwan for 3g,begin*/
typedef enum tag_P_TMSI_T_UPDATE_EM
{
    P_TMSI_T_UPDATE_PTMSI       = 0x0001,           //[[CN]] P-TMSI��Ч                  [[CN]]
    P_TMSI_T_UPDATE_IMSI        = 0x0002            //[[CN]] IMSI                        [[CN]]
}P_TMSI_T_UPDATE_EM;

typedef enum tag_P_TMSI_T_ContentValidMask
{
    P_TMSI_T_PTMSI_VALID      = 0x0001,           //[[CN]] P-TMSI��Ч                  [[CN]]
    P_TMSI_T_IMSI_VALID       = 0x0002            //[[CN]] IMSI                        [[CN]]
}P_TMSI_T_ActionEnum;

/*add by zhengwan for 3g,end*/
#if 0
typedef enum tag_CN_INFOT_UPDATE_EM
{
    CN_INFOT_UPDATE_CN_IP       = 0x0001,           //[[CN]] ����3g:sgsn_ip;4g:mme_ip��Ч                [[CN]]
    CN_INFOT_UPDATE_CN_ID       = 0x0002,           //[[CN]] ����3g:sgsn_sccp_id;4g:mme_ue_s1ap_id��Ч   [[CN]]
    CN_INFOT_UPDATE_AN_IP       = 0x0004,           //[[CN]] ����3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    CN_INFOT_UPDATE_AN_ID       = 0x0008,           //[[CN]] ����3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_UPDATE_IMSI        = 0x0010            //[[CN]] ����imsi                                    [[CN]]
}CN_INFOT_UPDATE_EM;

typedef enum tag_EM_CN_INFOT_PARA_VALID
{
    CN_INFOT_CN_IP_VALID       = 0x0001,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    CN_INFOT_CN_ID_VALID       = 0x0002,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_AN_IP_VALID       = 0x0004,           //[[CN]] 3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    CN_INFOT_AN_ID_VALID       = 0x0008,           //[[CN]] 3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_IMSI_VALID        = 0x0010,           //[[CN]] imsi��Ч                                [[CN]]
}EM_CN_INFOT_PARA_VALID;
#endif

/* gtp_c����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ�� */
typedef enum tag_GTP_C_T_UPDATE_EM
{
    GTP_C_T_UPDATE_GTP_IP        = 0x0001,           //[[CN]] ����fteid       [[CN]]
    GTP_C_T_UPDATE_TEID          = 0x0002,
    GTP_C_T_UPDATE_IMSI          = 0x0004,           //[[CN]] ����imsi        [[CN]]
    GTP_C_T_UPDATE_AGING         = 0x0008,           //[[CN]] ����aging       [[CN]]
}GTP_C_T_UPDATE_EM;

/*s1u����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS1UTableUpdateAction
{
    GTP_U_T_UPDATE_GTP_IP       = 0x0001,           //[[CN]] ����trans_layer_ip        [[CN]]
    GTP_U_T_UPDATE_TEID         = 0x0002,           //[[CN]] ����TEID                  [[CN]]
    GTP_U_T_UPDATE_USER_IP      = 0x0004,           //[[CN]] ����user_ip               [[CN]]
    GTP_U_T_UPDATE_IMSI         = 0x0008,           //[[CN]] ����imsi                  [[CN]]
    GTP_U_T_UPDATE_IMEI         = 0x0010,           //[[CN]] ����imei                  [[CN]]
    GTP_U_T_UPDATE_MSISDN       = 0x0020,           //[[CN]] ����msisdn                [[CN]]
    GTP_U_T_UPDATE_EX_FIELD     = 0x0040,           //[[CN]] ����ex_field              [[CN]]
    GTP_U_T_UPDATE_AGING        = 0x0080,           //[[CN]] ����aging                 [[CN]]
    GTP_U_T_UPDATE_TAI          = 0x0100,           //[[CN]] ����tai                   [[CN]]
    GTP_U_T_UPDATE_GUTI         = 0x0200,           //[[CN]] ����guti                  [[CN]]
    GTP_U_T_UPDATE_MASK         = 0x0400,           //[[CN]] ����mask                  [[CN]]
    /*modified by zhengwan, ����gn�ӿ�����Ҫ����lac�ֶΣ����Խ�rai�ĸ��±�־��,begin*/
    GTP_U_T_UPDATE_PLMN         = 0x0800,           //[[CN]] ����plmn                  [[CN]]
    GTP_U_T_UPDATE_LAC          = 0x1000,           //[[CN]] ����lac                   [[CN]]
    GTP_U_T_UPDATE_RAC          = 0x2000,           //[[CN]] ����rac                   [[CN]]
    /*modified by zhengwan, end*/
    GTP_U_T_UPDATE_BEARID       = 0x4000,           //[[CN]] ����BEARID                [[CN]]
    GTP_U_T_UPDATE_PDN          = 0x8000,           //[[CN]] ����PDN                   [[CN]]
    GTP_U_T_UPDATE_ECGI         = 0x10000,           //[[CN]] ����ECGI                 [[CN]]
#ifdef STAT_TEST
    GTP_U_T_UPDATE_CREATE_REALTE= 0x20000,           //[[CN]] ����PDN                   [[CN]]
    GTP_U_T_UPDATE_B0_NUM       = 0x40000,           //[[CN]] ����PDN                   [[CN]]
    GTP_U_T_UPDATE_B1_NUM       = 0x80000,          //[[CN]] ����PDN                   [[CN]]
#endif
    GTP_U_T_UPDATE_MOBILE_TYPE  = 0x100000,         //[[CN]] ����mobile type index     [[CN]]
    GTP_U_T_UPDATE_CELL_ID      = 0x200000,         //[[CN]] ����CELL ID��Ч           [[CN]]
}S1UTableUpdateActionEnum;



typedef enum tagS1uTableContentValidMask
{
    GTP_U_T_GTP_IP_VALID                = 0x0001,           //[[CN]] trans_layer_ip��Ч [[CN]]
    GTP_U_T_TEID_VALID                  = 0x0002,           //[[CN]] TEID��Ч           [[CN]]
    GTP_U_T_USER_IP_VALID               = 0x0004,           //[[CN]] user_ip��Ч        [[CN]]
    GTP_U_T_IMSI_VALID                  = 0x0008,           //[[CN]] IMSI ��Ч          [[CN]]
    GTP_U_T_IMEI_VALID                  = 0x0010,           //[[CN]] IMEI ��Ч          [[CN]]
    GTP_U_T_MSISDN_VALID                = 0x0020,           //[[CN]] MSISDN ��Ч        [[CN]]
    GTP_U_T_AGING_VALID                 = 0x0040,           //[[CN]] AGING ��Ч         [[CN]]
    GTP_U_T_EX_FIELD_VALID              = 0x0080,           //[[CN]] EX_FIELD��Ч       [[CN]]
    GTP_U_T_GUTI_VALID                  = 0x0100,           //[[CN]] GUTI��Ч           [[CN]]
    GTP_U_T_TAI_VALID                   = 0x0200,           //[[CN]] TAI��Ч            [[CN]]
    GTP_U_T_RAI_VALID                   = 0x0400,           //[[CN]] RAI��Ч            [[CN]]
    GTP_U_T_BEARID_VALID                = 0x0800,           //[[CN]] BEARID��Ч         [[CN]]
    GTP_U_T_PDN_VALID                   = 0x1000,           //[[CN]] PDN��Ч            [[CN]]
    GTP_U_T_CREATE_REALTE_VALID         = 0x2000,           //[[CN]] CREATE_REALTE��Ч  [[CN]]
    GTP_U_T_B0_NUM_VALID                = 0x4000,           //[[CN]] B0_NUM��Ч         [[CN]]
    GTP_U_T_B1_NUM_VALID                = 0x8000,           //[[CN]] B1_NUM��Ч         [[CN]]
    GTP_U_T_ECGI_VALID                  = 0x10000,          //[[CN]] ECGI��Ч           [[CN]]
    GTP_U_T_UPDATE_MOBILE_TYPE_VALID    = 0x20000,          //[[CN]] mobile type index ��Ч  [[CN]]
    GTP_U_T_CELL_ID_VALID               = 0x40000,          //[[CN]] CELL ID ��Ч       [[CN]]
}S1uTableContentValidMaskEnum;

/*s6a����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS6_ATableUpdateAction
{
    S6_AT_UPDATE_HSSIP        = 0x0001,           //[[CN]] ����hssip       [[CN]]
    S6_AT_UPDATE_MMEIP        = 0x0002,           //[[CN]] ����mmeip       [[CN]]
    S6_AT_UPDATE_HOP_BY_HOP   = 0x0004,           //[[CN]] ����hop_by_hop  [[CN]]
    S6_AT_UPDATE_IMSI         = 0x0008,           //[[CN]] ����imsi        [[CN]]
    S6_AT_UPDATE_AGING        = 0x0010,           //[[CN]] ����aging       [[CN]]
    S6_AT_UPDATE_NAS_KEY      = 0x0020,           //[[CN]] ����nas_key     [[CN]]
}S6_ATableUpdateActionEnum;

/*s_tmsi����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS_TMSITableUpdateAction
{
    S_TMSIT_UPDATE_S_TMSI        = 0x0001,           //[[CN]] ����s_tmsi       [[CN]]
    S_TMSIT_UPDATE_IMSI          = 0x0002,           //[[CN]] ����imsi         [[CN]]
}S_TMSITableUpdateActionEnum;


typedef enum tag_CN_INFOT_UPDATE_EM
{
    CN_INFOT_UPDATE_CN_IP                       = (0x1<<0), //[[CN]] ����3g:sgsn_ip;4g:mme_ip��Ч                [[CN]]
    CN_INFOT_UPDATE_CN_ID                       = (0x1<<1), //[[CN]] ����3g:sgsn_sccp_id;4g:mme_ue_s1ap_id��Ч   [[CN]]
    CN_INFOT_UPDATE_AN_IP                       = (0x01<<2),//[[CN]] ����3g:rnc_ip;4g:eNodeB_ip��Ч              [[CN]]
    CN_INFOT_UPDATE_AN_ID                       = (0x01<<3),//[[CN]] ����3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_UPDATE_STAT                        = (0x01<<4),//
    CN_INFOT_UPDATE_CH_VALID                    = (0x01<<5),//
    CN_INFOT_UPDATE_CH_ENB_IP                   = (0x01<<6),//
    CN_INFOT_UPDATE_CH_ENB_UE_ID                = (0x01<<7),//
    CN_INFOT_UPDATE_CH_ECGI                     = (0x01<<8),//
    CN_INFOT_UPDATE_CH_TAI                      = (0x01<<9),//
    CN_INFOT_UPDATE_AGING                       = (0x01<<10),//
    CN_INFOT_UPDATE_HANDOVER_INFO               = (0x01<<11),//
    CN_INFOT_UPDATE_IMSI                        = (0x01<<12), //[[CN]] ����imsi                                    [[CN]]
    CN_INFOT_UPDATE_MASK                        = (0x01<<13), //[[CN]] ����imsi                                    [[CN]]
    CN_INFOT_UPDATE_SGSN_POINT_CODE             = (0x01<<14), //[[CN]] ����imsi                                    [[CN]]
    CN_INFOT_UPDATE_SGSN_SCCP_ID                = (0x01<<15), //[[CN]] ����imsi                                    [[CN]]
    CN_INFOT_UPDATE_RNC_POINT_CODE              = (0x01<<16), //[[CN]] ����imsi                                    [[CN]]
    CN_INFOT_UPDATE_RNC_SCCP_ID                 = (0x01<<17), //[[CN]] ����imsi                                     [[CN]]
    CN_INFOT_UPDATE_MOBILE_TYPE                 = (0x01<<18)
}CN_INFOT_UPDATE_EM;

typedef enum tag_CN_INFOT_PARA_VALID_EM
{
    CN_INFOT_AN_ID_VALID                       = (0x01<<0),//[[CN]]  3g:rnc_sccp_id;4g:enode_ue_s1ap_id��Ч  [[CN]]
    CN_INFOT_STAT_VALID                        = (0x01<<1),//
    CN_INFOT_CH_VALID                          = (0x01<<2),//
    CN_INFOT_CH_ENB_IP_VALID                   = (0x01<<3),//
    CN_INFOT_CH_ENB_UE_ID_VALID                = (0x01<<4),//
    CN_INFOT_CH_ECGI_VALID                     = (0x01<<5),//
    CN_INFOT_CH_TAI_VALID                      = (0x01<<6),//
    CN_INFOT_AGING_VALID                       = (0x01<<7),//
    CN_INFOT_HANDOVER_INFO_VALID               = (0x01<<8),//
    CN_INFOT_IMSI_VALID                        = (0x01<<9), //[[CN]]  imsi��Ч                                [[CN]]
    CN_INFOT_MASK_VALID                        = (0x01<<10), //[[CN]]  MASK��Ч                                [[CN]]
    CN_INFOT_SGSN_POINT_CODE_VALID             = (0x01<<11),//
    CN_INFOT_SGSN_SCCP_ID_VALID                = (0x01<<12),//
    CN_INFOT_RNC_POINT_CODE_VALID              = (0x01<<13), //[[CN]]  imsi��Ч                                [[CN]]
    CN_INFOT_RNC_SCCP_ID_VALID                 = (0x01<<14), //[[CN]]  MASK��Ч                                [[CN]]
    CN_INFOT_UPDATE_MOBILE_TYPE_VALID         = (0x01<<15)
}CN_INFOT_PARA_VALID_EM;



/*��ʱ����������*/
typedef enum
{
    TIMER_REPLACE,                  /* �����µ�ֵ */
    TIMER_REDUCE,                   /* ������ */
}timer_opera_t;


/* lte hash table cell */
#define ENTRY_CELL_DATA_SIZE 14
typedef struct hash_cell_s 
{
    struct list_head node;                 /* ˫������ָ�� 16�ֽ�*/
    uint64_t entry[ENTRY_CELL_DATA_SIZE];  /* Cell���� 14*8 = 112 �ֽ�*/
}__attribute__((packed)) hash_cell_t; /* 128�ֽ� */
#define HASH_ENTRY_VALID_SIZE_128  (128-16)
#define HASH_ENTRY_VALID_SIZE_256  (256-16)

typedef struct
{
#define MAX_HASH_DWORD 8
    uint64_t  data[MAX_HASH_DWORD];
    uint8_t   size;//sizeof(uint64_t)
}hash_key_t;




typedef struct{
    struct list_head head;          /* Ͱ�ӵ�˫������ָ�� */
    uint64_t bucket_depth;          /* Ͱ��ȣ���������cell���� */
    uint64_t total_cell;            /* δʹ�� */
    uint64_t del_cell;              /* δʹ�� */
    cvmx_spinlock_t lock;           /* ������ */
    uint32_t index;                 /* δʹ�� */
}hash_bucket_t;//32B


typedef enum
{
    HASH_CMP_DIFF,
    HASH_CMP_SAME,
}hash_cmp_em_t;

typedef struct
{
    char            name[64];               /* cavium�ڴ�ط���ı�ʶ��������������*/
    
    hash_bucket_t * first_bucket;           /* ָ���һ��Ͱ��ָ�� */
    uint32_t        max_bucket;             /* Ͱ�������ֵ��Ŀǰȡֵ��1ǧ��,2ǧ�� */
    
    int             pool;                   /*FPA POOL ID*/
    uint16_t        cell_size;              /* cell�ռ��С */
    mp_code_t (*hash)(hash_key_t *key, uint32_t *index);
    mp_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    mp_code_t (*update)(void *src, void*dst, uint64_t action);
    mp_code_t (*get_bucket)(uint32_t *buck);
#ifdef RELATE_AGING
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
#endif
}hash_table_t;

#define GET_HASH_BUCKET_BY_INDEX(_table, _index)  (_index < _table->max_bucket)? (_table->first_bucket+_index):NULL;

/* ���ڶ����ĳ������Ĳ��� */
typedef struct
{
    hash_bucket_t    *bucket;               /* Ͱ���ݽṹ�壬����˫������ͷ�ڵ� */
    struct list_head *node;                 /* ˫������ǰ��ָ��ṹ�壺��ǰ��� */
    hash_key_t  key;                        /* ��ϣ������key��������imsi��������ip��teid�Ľ�� */
    hash_cmp_em_t search;                   /* ��ϣ��ѯ���*/
    int hash_enable;                        /* δʹ�ã�Ŀǰ��ѯֻ��ͨ��hash */
    int compare_enable;                     /* �Ƿ��ǹ�ϣ���ѯ���� */
    int update_enable;                      /* �Ƿ��ǹ�ϣ����²��� */
    int new_enable;                         /* �Ƿ��ǹ�ϣ����½����� */
    uint64_t update_action;                 /* update�����Ŀ��أ�����λ������ѡ����µı������� */
    int (*action)(void *src, void*dst);     /* �ص�����ʵ�֣���ͬ��ϣ���Ӧ����ͬ����*/
    int (*action_up)(void *src, void*dst, uint64_t action);     /* �ص�����ʵ�֣���ͬ��ϣ���Ӧ����ͬ����*/
    void            *d_compare;             /* ��ĳ������*/
    void            *d_update;              /* ��ĳ������*/
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


/*��������������Ӧ����uint32��Ϊ��ʡ�ռ䣬������λ�� */
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

/* ��ͨ��ip�ṹתΪkeyֵ */
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

/*���±������ݵĲ�������*/
typedef enum
{
    CREATE_TABLE,
    UPDATE_TABLE
}UpdateTypeEnum;

mp_error_t search_table_by_index(
                            table_name_t table_type,             /* [in] ��Ҫ���ҵı������ */
                            hash_table_index_t index,            /* [in] index */
                            void* compare_d,                     /* [in] compare_d for table control*/
                            void* data,                         /* [out] �������� */
                            uint8_t* len,                        /* [out] ����ȣ�У�������� */
                            uint8_t* result                      /* [out] ���ҽ�����Ƿ��ҵ���Ӧkey�ı��� */
                            );

mp_error_t create_update_table_by_hash(
                            table_name_t table_type,             /* [in] ��Ҫ���µı������ */
                            UpdateTypeEnum opType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
                            uint64_t actionType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
                            void* data,                          /* [in] �������� */
                            uint8_t len,                         /* [in] ����ȣ�У�������� */
                            hash_table_index_t* index           /* [out] index*/
                            );

/* chengshuan Add for table operation -end- */



#endif
