/****************************************************************************** 

��Ȩ���У�C����2001-2016�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       umts_relate_gn_c.h
�����ʽ:     ASCII
����:         ruansong
����:         Mar 17, 2016
��ʷ:
    1.����    :Mar 17, 2016
      ����    :ruansong
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_UMTS_RELTTE_GN_C_H_
#define MODULES_UMTS_RELTTE_GN_C_H_

#define CAUSE_REQUEST_ACCEPTED 128
mp_code_t umts_gn_c_create_pdp_context_requset(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_create_pdp_context_responese(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_update_pdp_context_request(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_delete_pdp_context_responese(parse_gtpv1c_t *gtpc);
#endif /* MODULES_UMTS_RELTTE_GN_C_H_ */
