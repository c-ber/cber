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


mp_error_t lte_s1ap_initialUEMessage(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_InitialContextSetup(void *packet_ptr, parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_uplinkNASTransport(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_downlinkNASTransport(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_UEContextRelease(parse_s1ap_t *s1ap);
mp_error_t lte_s1ap_ERABSetup(parse_s1ap_t *s1ap);



#endif /* MODULES_LTE_LTE_RELATE_S1_H_ */
