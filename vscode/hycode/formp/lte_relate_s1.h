/****************************************************************************** 

版权所有（C），2014-2024年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_relate_s1.h
编码格式:     ASCII
作者:         chengshuan
创建:         Nov 17, 2015
历史:
    1.日期    :Nov 17, 2015
      作者    :chengshuan
      修改    :Created file
******************************************************************************/
#ifndef MODULES_LTE_LTE_RELATE_S1_H_
#define MODULES_LTE_LTE_RELATE_S1_H_

#include "lte_relate.h"
#include "lte_hash.h"
#include "relate_aging.h"
#include "lte_relate_s6a.h"
#include "nas.h"
#include "relate_aging.h"


#include "usr_info_pack.h"



//lte_table_enodeb_mme_handle表的节点类型,已经移到lte_relate.h文件下面
/*typedef struct
{
    uint32_t                cn_id;
    ip_comm_t               enodeb_ip;
    uint32_t                enodeb_ue_s1ap_id;
    usr_eNB_handover_stat_e stat;//暂时放在这里扩展用
    handover_cache_info_t   handover_cache_info;//基站切换时缓存之前的信息如果失败可以恢复之前的数据
    uint16_t                aging;
}lte_table_enodeb_mme_handle_node_t;*/




mp_error_t lte_s1ap_initialUEMessage(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_InitialContextSetup(void *packet_ptr, parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_uplinkNASTransport(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_downlinkNASTransport(void *packet_ptr, parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_UEContextRelease(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_ERABSetup(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_path_swich_req(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_path_swich_respone(parse_s1ap_t *s1ap);
mp_error_t lte_handover_notify(parse_s1ap_t *s1ap);

uint32_t bcdlen(const uint8_t *bcd_code, uint32_t max_Len);
void get_mnc_from_plmnIdentity(uint8_t *plmn_id,uint8_t *mnc_buf);

mp_error_t lte_signal_submit(parse_s1ap_t *s1ap,uint8_t event);



 #define MAX_MUTI_OIFGRP 4
/*********************end************************/

extern mp_code_t enodeb_mme_handle_table_compare(void *src, void* dst, hash_cmp_em_t *cmp);
extern mp_code_t enodeb_mme_handle_table_hash(hash_key_t *key, uint32_t *hash_result);
extern mp_code_t update_enodeb_mme_handle_table(void *dst, void *src, uint64_t action);
/*使用mme ip,mme id计算key值*/
extern mp_code_t update_enb_mme_handle_table_key(ip_comm_t mme_ip,uint32_t mme_id,hash_key_t *key);

extern mp_error_t lte_s1ap_nas_detach_req(parse_s1ap_t *s1ap);
extern mp_error_t lte_s1ap_nas_detach_accept(parse_s1ap_t *s1ap);


#endif /* MODULES_LTE_LTE_RELATE_S1_H_ */
