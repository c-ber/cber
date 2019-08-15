/*
*   stream.h

*   Created by Tsihang < qihang@semptian.com >
*   Copyright (c) 2014-2020  Semptian Inc.
*/


#ifndef __STREAM_H__
#define __STREAM_H__

#include <stdio.h>
#include <stdint.h>
#include "rfc.h"

/*----------sempcc中的一些结构定义------------------------*/

#define MAX_FWD_OIFGRP_NUM 4   /*出口组转发最大值，应该是64，需要确认该值*/


/*---------------宏函数--------------*/
#define RFC_FILTER_GET()        (g_ix_rfc_table_base->bak_rs)

#define RFC_FILTER_SET_UCHANGE(_iifgrp, _v)  \
              (g_ix_rfc_table_base->commit.changed = _v)

#define RFC_FILTER_INDEX_GET()  (g_ix_rfc_table_base->commit)

#define IPV4    0x04
#define IPV6    0x06

/*-----------结构体和枚举定义----------*/


/*五元组掩码数据*/
typedef struct
{
    uint16_t    ul_tag_id;
    uint16_t    us_iifgrp;
    uint32_t    ul_src_ip_start;
    uint32_t    ul_src_ip_end;
    uint32_t    ul_dst_ip_start;
    uint32_t    ul_dst_ip_end;
    uint16_t    us_src_port_start;
    uint16_t    us_src_port_end;
    uint16_t    us_dst_port_start;
    uint16_t    us_dst_port_end;
    uint8_t     uc_protocol_start;
    uint8_t     uc_protocol_end;
    uint8_t     uc_iifgrp_start;
    uint8_t     uc_iifgrp_end;
    uint8_t     mirror_en;
    uint8_t     copy_en;
    action_en   action;
    uint16_t    ul_rule_id;
    uint8_t     uc_iifgrp_type;
    uint32_t    ul_iif_grp;
    uint32_t    ul_oif_grp_num;
    uint32_t    ul_oif_grp[MAX_FWD_OIFGRP_NUM];
    uint32_t    ul_mif_grp;
    uint32_t    ul_vif_grp;
    uint32_t    ul_out_port;
    uint32_t    ul_payload;
    uint32_t    ul_string;
}rule_mask_t;

extern void dataplane_stream_global_initialize(void);
int stream_npcp_init(void);


#define STATISTICS_UNCLEAR      0
#define STATISTICS_CLEAR        1

#define MAX_NUM_RULE_FIVETUPLE          10
#define MAX_NUM_RULE_FIVETUPLE_DEFAULT  10
#define OFFSET_RULE_FIVETUPLE_DEFAULT   MAX_NUM_RULE_FIVETUPLE

#define STREAM_INVALID_INDEX    65535

#define IS_STREAM_ENTRY_ENABLE(rule_id)   (g_ix_stream_table_base[rule_id - 1].enabled == ENABLE)
#define IS_STREAM_ENTRY_VALID(rule_id)    (g_ix_stream_table_base[rule_id - 1].valid == VALID)


int npcp_cmd_mask_rule_add(rule_mask_t *rule);

int npcp_cmd_mask_rule_commit();

int npcp_cmd_mask_rule_init();

void dataplane_stream_global_initialize(void);

uint32_t rule_rfc_match (uint8_t uc_iifgrp, V4_5TUP_T * ip5tuple);



#endif  /* __STREAM_H__ */

