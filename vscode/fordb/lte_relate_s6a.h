#ifndef __LTE_DIAMETER_RELATE_H__
#define __LTE_DIAMETER_RELATE_H__

#include "lte_hash.h"
#include "lte_relate.h"
#include "relate_aging.h"

extern mp_code_t s6a_table_hash(hash_key_t *key, uint32_t *hash_result);

extern mp_code_t get_kasme_by_imsi(const imsi_rand_info_t *indata,lte_kasme_t *kasme,uint32_t *len);

extern mp_code_t del_s6a_node_by_imsi(lte_imsi_t imsi,const uint32_t len );

extern inline void update_s6a_hash_key(ip_hbh_t *indata,  hash_key_t *key);

extern int32_t lte_s6a_dmt_auth_request(parse_diameter_t *diameter);

extern int32_t lte_s6a_dmt_auth_response(parse_diameter_t *diameter);

extern mp_code_t dataplane_lte_dmt_init(LTE_ATTR_T *attr_ptr);

extern mp_code_t s6a_table_compare(void *src, void* dst, hash_cmp_em_t *cmp);

extern mp_code_t s6a_table_update_entry(void *table, void *update);

extern uint16_t s6a_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value);

//extern mp_code_t get_s6a_node_by_ip_hbh(ip_hbh_t *indata,lte_table_s6a_t*node);

extern mp_error_t lte_s6a_dmt_auth_response(parse_diameter_t *diameter);

extern inline void update_s6a_hash_key(ip_hbh_t *indata,  hash_key_t *key);

extern int dmt_auth_rep_action(void *table, void *update);

//extern mp_code_t get_s6a_node_by_imsi(lte_imsi_t imsi,lte_table_s6a_t *node,uint32_t len);



#endif
