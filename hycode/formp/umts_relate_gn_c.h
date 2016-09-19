/****************************************************************************** 

版权所有（C），2001-2016年，恒扬科技股份有限公司

******************************************************************************
文件名:       umts_relate_gn_c.h
编码格式:     ASCII
作者:         ruansong
创建:         Mar 17, 2016
历史:
    1.日期    :Mar 17, 2016
      作者    :ruansong
      修改    :Created file
******************************************************************************/
#ifndef MODULES_UMTS_RELTTE_GN_C_H_
#define MODULES_UMTS_RELTTE_GN_C_H_

#define CAUSE_REQUEST_ACCEPTED 128
mp_code_t umts_gn_c_create_pdp_context_requset(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_create_pdp_context_responese(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_update_pdp_context_request(parse_gtpv1c_t *gtpc);
mp_code_t umts_gn_c_delete_pdp_context_responese(parse_gtpv1c_t *gtpc);
#endif /* MODULES_UMTS_RELTTE_GN_C_H_ */
