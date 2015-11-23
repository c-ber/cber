/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       lte_relate_s11.h
�����ʽ:     ASCII
����:         chenbin
����:         Nov 16, 2015
��ʷ:
    1.����    :Nov 16, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_LTE_LTE_RELATE_S11_H_
#define MODULES_LTE_LTE_RELATE_S11_H_

#include "lte_relate.h"
#include "lte_hash.h"
#include "relate_aging.h"


extern CVMX_SHARED  hash_bucket_t *lte_tables;
extern CVMX_SHARED  hash_table_t   lte_tables_info[TABLE_MAX];
extern CVMX_SHARED  cvmx_spinlock_t imsi_delete_lock;

//extern CVMX_SHARED uint64_t g_scan_interval;
extern CVMX_SHARED uint64_t g_aging_timer_max;
//extern CVMX_SHARED uint64_t g_max_relate_lifetime;


inline mp_code_t lte_sgw_update_s1u(const struct list_head  *   node,
                             struct list_head* s1u_node,
                             uint32_t s1u_buck_offset, uint8_t bearerid);

//inline mp_code_t lte_mme_update_s1u(lte_table_ctrl_mme_t * mme_e,
//                             struct list_head* s1u_node,
//                             uint32_t s1u_buck_offset, uint8_t bearerid);
//
//inline mp_code_t lte_mme_delete_s1u(lte_table_ctrl_mme_t*table_mme_e, uint8_t bearerid);
//
//inline mp_code_t lte_sgw_delete_s1u(lte_table_ctrl_sgw_t*table_sgw_e, uint8_t bearerid);

mp_code_t check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf);

mp_code_t lte_s11_gtpc_create_session_requset(parse_gtpc_t *gtpc);

mp_code_t lte_s11_gtpc_create_session_response(parse_gtpc_t *gtpc);

mp_code_t lte_s11_gtpc_modify_bearer_requst(parse_gtpc_t *gtpc);

mp_code_t lte_s11_gtpc_modify_bearer_response(parse_gtpc_t *gtpc);

mp_code_t lte_s11_gtpc_delete_session_req(parse_gtpc_t *gtpc);



mp_code_t lte_s11_gtpc_delete_session_rsp(parse_gtpc_t *gtpc);

//int npcp_gtp_switch_set( uint16_t  ilen, void *idata,
//                                       uint16_t *olen, void *odata );
//
//int  npcp_relate_get_cell_num( uint16_t  ilen, void *idata,
//                                            uint16_t *olen, void *odata );
//
//int  npcp_relate_get_cell_value( uint16_t  ilen, void *idata,
//                                              uint16_t *olen, void *odata );
//
//int  npcp_relate_flush_table( uint16_t  ilen, void *idata,
//                                           uint16_t *olen, void *odata );
//
//int  npcp_show_relate_stat( uint16_t  ilen, void *idata,
//                                         uint16_t *olen, void *odata );
//
//int  npcp_relate_rescan( uint16_t  ilen, void *idata,
//                                          uint16_t *olen, void *odata);
//
//int  npcp_clear_relate_stat( uint16_t  ilen, void *idata,
//                                          uint16_t *olen, void *odata );
//
//int  npcp_show_relate_info( uint16_t  ilen, void *idata,
//                                         uint16_t *olen, void *odata );
//
//int  npcp_clear_relate_by_imsi( uint16_t  ilen, void *idata,
//                                             uint16_t *olen, void *odata );
//
//int  npcp_set_lte_aging_time( uint16_t  ilen, void *idata,
//                                           uint16_t *olen, void *odata );
//
//int  npcp_set_lte_scan_peirod( uint16_t  ilen, void *idata,
//                                            uint16_t *olen, void *odata );
//
//int  npcp_show_lte_aging_time( uint16_t  ilen, void *idata,
//                                            uint16_t *olen, void *odata );

mp_code_t npcp_show_relate_info();
#endif /* MODULES_LTE_LTE_RELATE_S11_H_ */
