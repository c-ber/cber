/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       rfc.h
编码格式:     ASCII
作者:         chenbin
创建:         Jun 6, 2016
历史:
    1.日期    :Jun 6, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef RFC_H_
#define RFC_H_

#include "pub_com.h"

extern CVMX_SHARED rfc_acl_s       *g_ix_rfc_table_base;

uint8_t CRC8  (uint8_t *ptr, uint32_t len);

void rfc_init_default_rule(rfc_filter_s *pst_default);

int rfc_phase_init(uint16_t u_ifgroup);

int rfc_noder_init(rfc_phase_set_s *pst_acl_commit,
                   rfc_phase_data_s *pst_acl_phase_data, rfc_pnoder_s *pst_noder, uint32_t ul_max);

rfcbool rfc_compare_bmp(uint64_t *pud_abmp, uint64_t *pud_bbmp, uint32_t ul_len);

uint32_t rfc_search_bmp(uint64_t *pud_bmp, uint32_t ul_table);

uint32_t rfc_get_rule_cost(uint64_t *pud_bmp);

int rfc_phase0(rfc_phase_set_s *pst_acl_commit,
               rfc_filter_set_s *pst_filter_set, rfc_filter_index_s *pst_filter_index);

int  rfc_phase(rfc_pnoder_s *pst_node1,
               rfc_pnoder_s *pst_node2, rfc_pnoder_s *pst_node3, uint32_t ul_table);

int rfc_phase1(rfc_pnoder_s *pst_prev_phase_nodes,
               rfc_pnoder_s *pst_phase_nodes, uint32_t ul_len, uint32_t ul_table);

int rfc_phase2(rfc_pnoder_s *pst_prev_phase_nodes,
               rfc_pnoder_s *pst_phase_nodes, uint32_t ul_table);

int rfc_phase3(rfc_pnoder_s *pst_prev_phase_nodes,
               rfc_pnoder_s *pst_phase_nodes, uint16_t u_ifgroup);

int npcp_mask_rule_commit(uint8_t *ptr, uint32_t total_len, uint32_t offset,
        uint16_t len, uint32_t num, uint8_t over, uint8_t iifgrp, uint8_t crc);

int npcp_mask_rule_init();

int mask_rule_fct_commit(uint8_t *fct, uint32_t size, uint8_t iifgrp);

int rfc_phase_commit(void);

int rfc_phase_commit_not_submit(void);

int rfc_phase_move(uint16_t u_start, int32_t l_num);

int rfc_init(void);

int rfc_ptr_init ();


#endif /* RFC_H_ */
