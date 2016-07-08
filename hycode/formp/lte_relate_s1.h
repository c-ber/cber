/****************************************************************************** 

��Ȩ���У�C����2014-2024�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       lte_relate_s1.h
�����ʽ:     ASCII
����:         chengshuan
����:         Nov 17, 2015
��ʷ:
    1.����    :Nov 17, 2015
      ����    :chengshuan
      �޸�    :Created file
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



//lte_table_enodeb_mme_handle��Ľڵ�����,�Ѿ��Ƶ�lte_relate.h�ļ�����
/*typedef struct
{
    uint32_t                cn_id;
    ip_comm_t               enodeb_ip;
    uint32_t                enodeb_ue_s1ap_id;
    usr_eNB_handover_stat_e stat;//��ʱ����������չ��
    handover_cache_info_t   handover_cache_info;//��վ�л�ʱ����֮ǰ����Ϣ���ʧ�ܿ��Իָ�֮ǰ������
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
/*ʹ��mme ip,mme id����keyֵ*/
extern mp_code_t update_enb_mme_handle_table_key(ip_comm_t mme_ip,uint32_t mme_id,hash_key_t *key);

extern mp_error_t lte_s1ap_nas_detach_req(parse_s1ap_t *s1ap);
extern mp_error_t lte_s1ap_nas_detach_accept(parse_s1ap_t *s1ap);


#endif /* MODULES_LTE_LTE_RELATE_S1_H_ */
