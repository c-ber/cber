/****************************************************************************** 

版权所有（C），2016-2026年，恒扬科技股份有限公司

******************************************************************************
文件名:       umts_relate_iups.h
编码格式:     ASCII
作者:         ruansong
创建:         Mar 14, 2016
历史:
    1.日期    :Mar 14, 2016
      作者    :ruansong
      修改    :Created file
******************************************************************************/
#ifndef MODULES_UMTS_RELATE_IUPS_H_
#define MODULES_UMTS_RELATE_IUPS_H_

#include "umts_relate.h"
#include "lte_hash.h"
#include "relate_aging.h"
#include "usr_info_pack.h"




/******************************************
 *           GMM消息类型枚举
 ******************************************/
typedef enum 
{
    GMM_MSG_ATTACH_REQUEST                  = 0x1,
    GMM_MSG_ATTACH_ACCEPT                   = 0x2,
    GMM_MSG_ATTACH_COMPELETE	            = 0x3,    

    GMM_MSG_DEATTACH_REQUEST                = 0x5,
    GMM_MSG_DEATTACH_ACCEPT                 = 0x6,
    GMM_MSG_RAU_REQUEST                     = 0x8,
    GMM_MSG_RAU_ACCEPT                      = 0x9,
    GMM_MSG_RAU_COMPELETE	                = 0xa, 
    GMM_MSG_SERVICE_REQUEST                 = 0xc,
    GMM_MSG_PTMSI_REALLOCATION_COMMAND      = 0x10,
    GMM_MSG_PTMSI_REALLOCATION_COMPELETE	= 0x11,
    GMM_MSG_IDENTIFY_RESPONSE               = 0x16
}GMM_MESSAGE_TYPE_EM;

/******************************************
 *           GMM消息类型枚举
 ******************************************/
 typedef enum tag_EN_RANAP_MESSAGE_TYPE
{
    EN_RANAP_MSG_RAB_ASSIGNMENT     = 0,    // Iu_Release 
    EN_RANAP_MSG_IU_RELEASE         = 1,    // Iu_Release  
    EN_RANAP_MSG_COMMAND_ID         = 15,    // Iu_Release 
    EN_RANAP_MSG_INIIT_UE_MSG       = 19,    // InitialUE_Message  
    EN_RANAP_MSG_DIRECT_TRANSFER    = 20,    // Iu_Release 
    EN_RANAP_MSG_BUTT
}EN_RANAP_MESSAGE_TYPE;

#if 0
typedef enum tag_RANAP_IE_VALID_TYPE_EM
{
    RANAP_IE_PDU_CODE_VALID         = (1<<0),
    RANAP_IE_PROCECODE_VALID        = (1<<1),
    RANAP_IE_IMSI_VALID             = (1<<2),
    RANAP_IE_RAI_VALID              = (1<<3),
    RANAP_IE_TRANS_BEARID_VALID     = (1<<4),
    RANAP_IE_TRANS_GTPIP_VALID      = (1<<5),
    RANAP_IE_TRANS_GTPID_VALID      = (1<<6)
}RANAP_IE_VALID_TYPE_EM;



/******************************************
 *           sccp消息类型枚举
 ******************************************/
typedef enum tag_EN_SCCP_MESSAGE_TYPE
{
    EN_SCCP_MESSAGE_CR     = 0x01,    // Connection request 
    EN_SCCP_MESSAGE_CC     = 0x02,    // Connection confirm 
    EN_SCCP_MESSAGE_CREF   = 0x03,    // Connection refused 
    EN_SCCP_MESSAGE_RLSD   = 0x04,    // Released 
    EN_SCCP_MESSAGE_RLC    = 0x05,    // Release complete 
    EN_SCCP_MESSAGE_DT1    = 0x06,    // Data form 1 
    EN_SCCP_MESSAGE_DT2    = 0x07,    // Data form 2 
    EN_SCCP_MESSAGE_AK     = 0x08,    // Data acknowledgement 
    EN_SCCP_MESSAGE_UDT    = 0x09,    // Unitdata 
    EN_SCCP_MESSAGE_UDTS   = 0x0A,    // Unitdata service 
    EN_SCCP_MESSAGE_ED     = 0x0B,    // Expedited data  
    EN_SCCP_MESSAGE_EA     = 0x0C,    // Expedited data acknowledgement 
    EN_SCCP_MESSAGE_RSR    = 0x0D,    // Reset request 
    EN_SCCP_MESSAGE_RSC    = 0x0E,    //Reset confirmation 
    EN_SCCP_MESSAGE_ERR    = 0x0F,    // Protocol data unit error 
    EN_SCCP_MESSAGE_IT     = 0x10,    // Inactivity test  
    EN_SCCP_MESSAGE_XUDT   = 0x11,    // Extended unitdata 
    EN_SCCP_MESSAGE_XUDTS  = 0x12,    // Extended unitdata service 
    EN_SCCP_MESSAGE_LUDT   = 0x13,    // Long unitdata 
    EN_SCCP_MESSAGE_LUDTS  = 0x14,    // Long unitdata service 
    EN_SCCP_MESSAGE_BUTT
}EN_SCCP_MESSAGE_TYPE;
#endif

typedef enum tag_EN_DIRECTION
{
    EN_DIRECTION_DOWN_LINK      = 0x00,      // 上行
    EN_DIRECTION_UP_LINK        = 0x01,    // 下行
}EN_DIRECTION;



mp_error_t umts_IuPS_relate_init_ue_msg(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_relate_Iu_release(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_relate_rab_assigment_rsp(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_relate_rab_assigment_req(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_relate_direct_transfer(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_relate_command_id(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_sccp_cr_msg_without_ranap(parse_IuPS_t *IuPS_info);
mp_error_t umts_IuPS_sccp_cc_msg_without_ranap(parse_IuPS_t *IuPS_info);
mp_error_t umts_signal_submit(parse_IuPS_t *IuPS_info,uint8_t event);
mp_code_t update_umts_cn_info_table_key(uint32_t sgsn_m3ua_sig_code, uint32_t sgsn_sccp_id,  uint32_t rnc_m3ua_sig_code,hash_key_t *key);
mp_code_t update_umts_an_info_table_key(uint32_t rnc_m3ua_sig_code, uint32_t rnc_sccp_id, hash_key_t *key);
//mp_code_t hash_table_get_an_info_cell_by_hash(uint32_t rnc_m3ua_sig_code, uint32_t rnc_sccp_id, umts_table_rnc_iu_info_t *an_info_op);

#endif /* MODULES_LTE_LTE_RELATE_S1_H_ */
