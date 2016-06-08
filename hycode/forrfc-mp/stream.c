/*
*   fivetuple.c

*   Created by Tsihang < qihang@semptian.com >
*   Copyright (c) 2014-2020  Semptian Inc.
*/


#include "stream.h"
#include "rfc-exp.h"
#include "pub_com.h"



/*掩码规则的结构体*/
CVMX_SHARED rule_stream_st  *g_stream_table = NULL;

/*commit时候进行rfc运算时候用的数据*/
CVMX_SHARED rfc_acl_s       *g_ix_rfc_table_base    = NULL;



static uint8_t rfc_protocol_convert (uint8_t proto)
{
    switch(proto)
    {
        case R_TCP:
            return R_TCP_DECODE;
        case R_UDP:
            return R_UDP_DECODE;
        case R_SCTP:
            return R_SCTP_DECODE;
        default:
            return R_OTHER_DECODE;
    }

}

uint32_t rule_rfc_match (uint8_t uc_iifgrp, V4_5TUP_T * ip5tuple)
{
    rfc_acl_s    *pst_filter_set = g_ix_rfc_table_base;
    rfc_pnoder_s *pst_pnoder = NULL;
    uint32_t value0,value1,value2,value3,value4,value5,value6,value7,value8,value9,value10,value11,value12;

    uint16_t us_siph = ip5tuple->sip / 65536;
    uint16_t us_sipl = ip5tuple->sip % 65536;
    uint16_t us_diph = ip5tuple->dip / 65536;
    uint16_t us_dipl = ip5tuple->dip % 65536;
    uint16_t us_sport = ip5tuple->sp;
    uint16_t us_dport = ip5tuple->dp;


    uint8_t  uc_protocol = rfc_protocol_convert (ip5tuple->proto);

    uc_protocol |= ((uc_iifgrp & 0xff) << 2);
    printf("uc_iifgrp = %d, uc_protocol = %d \n", uc_iifgrp, uc_protocol);

    if (pst_filter_set->pst_acl_ptr_md)
    {
        pst_pnoder = pst_filter_set->pst_acl_ptr_md->st_phase_nodes;
    }

    if ((pst_pnoder != NULL) && (pst_pnoder[0].pul_cell_md != NULL))
    {
        printf("test---->   us_siph = 0x%04x \n", us_siph);
        value0 =  (pst_pnoder[0].pul_cell_md)[us_siph];
        printf("test---->   us_sipl = 0x%04x \n", us_sipl);
        value1 =  (pst_pnoder[1].pul_cell_md)[us_sipl];
        printf("test---->   us_diph = 0x%04x \n", us_diph);
        value2 =  (pst_pnoder[2].pul_cell_md)[us_diph];
        printf("test---->   us_dipl = 0x%04x \n", us_dipl);
        value3 =  (pst_pnoder[3].pul_cell_md)[us_dipl];
        printf("test---->   us_sport = 0x%04x \n", us_sport);
        value4 =  (pst_pnoder[4].pul_cell_md)[us_sport];
        printf("test---->   us_dport = 0x%04x \n", us_dport);
        value5 =  (pst_pnoder[5].pul_cell_md)[us_dport];
        printf("test---->   uc_protocol = 0x%04x \n", uc_protocol);
        value6 =  (pst_pnoder[6].pul_cell_md)[uc_protocol];
        value7 =  (pst_pnoder[7].pul_cell_md)[value0 * pst_pnoder[1].ul_eq_id + value1];
        value8 =  (pst_pnoder[8].pul_cell_md)[value2 * pst_pnoder[3].ul_eq_id + value3];
        value9 =  (pst_pnoder[9].pul_cell_md)[value4 * pst_pnoder[5].ul_eq_id + value5];
        value10 = (pst_pnoder[10].pul_cell_md)[value6 * pst_pnoder[9].ul_eq_id + value9];
        value11 = (pst_pnoder[11].pul_cell_md)[value7 * pst_pnoder[8].ul_eq_id + value8];
        value12 = (pst_pnoder[12].pul_cell_md)[value10 * pst_pnoder[11].ul_eq_id + value11];

        int n = 0;
        for( n = 0 ; n < 5; n++)
        {
            printf("test----------[%d] = %d\n", n,
                    MPP_GET_MD_VAR (pst_pnoder[6].pul_cell)[n]);
        }
        printf("%d %d %d %d %d %d %d %d %d %d %d %d %d\n",
                value0,value1,value2,value3,value4,value5,value6,value7,
                value8,value9,value10,value11,value12);
    }
    else
    {
        return (MAX_NUM_RULE_FIVETUPLE + 1);
    }

    return (value12 + 1);
}



void dataplane_stream_global_initialize(void)
{
    int i     = 0;
    int index = 0;
    rule_stream_st * rule_stream_tmp = NULL;

    g_stream_table = (rule_stream_st *)malloc(
                 (MAX_NUM_RULE_FIVETUPLE + MAX_NUM_RULE_FIVETUPLE_DEFAULT)*sizeof(rule_stream_st));
    memset(g_stream_table, 0, (MAX_NUM_RULE_FIVETUPLE +
            MAX_NUM_RULE_FIVETUPLE_DEFAULT)*sizeof(rule_stream_st));

    g_ix_rfc_table_base = (rfc_acl_s*)malloc(sizeof(rfc_acl_s));
    memset(g_ix_rfc_table_base, 0, sizeof(rfc_acl_s));

    printf("test-------------->sizeof(g_ix_rfc_table_base) = %d \n",
            sizeof(*g_ix_rfc_table_base));

    printf("test-------------->sizeof(g_stream_table) = %d \n",
            sizeof(*g_stream_table));

    printf("test-------------->sizeof(rule_set_t) = %d \n",
            sizeof(rule_set_t));

    printf("test-------------->sizeof(rule_t) = %d \n",
            sizeof(rule_t));



    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE; i++)
    {
        rule_stream_tmp = &g_stream_table[i];
        memset(rule_stream_tmp, 0, sizeof(rule_stream_st));
        rule_stream_tmp->valid = INVALID;
        rule_stream_tmp->enabled = DISABLE;
        rule_stream_tmp->rule_id = STREAM_INVALID_INDEX;
    }

    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE_DEFAULT; i ++)
    {
        index = i + OFFSET_RULE_FIVETUPLE_DEFAULT;

        rule_stream_tmp = &g_stream_table[index];
        memset(rule_stream_tmp, 0, sizeof(rule_stream_st));
        rule_stream_tmp->valid = INVALID;
        rule_stream_tmp->enabled = DISABLE;
        rule_stream_tmp->rule_id = index + 1; //STREAM_INVALID_INDEX;

        rule_stream_tmp->transimit.action = ACTION_PERMIT;
        rule_stream_tmp->transimit.iifgrp = i + 1 ;
        rule_stream_tmp->transimit.oifgrp[0] = INVALID_GROUP;
        rule_stream_tmp->transimit.oifgrp[1] = INVALID_GROUP;
        rule_stream_tmp->transimit.oifgrp[2] = INVALID_GROUP;
        rule_stream_tmp->transimit.oifgrp[3] = INVALID_GROUP;
        rule_stream_tmp->transimit.fwd_oifgrp_num = 0;
    }
    rfc_init();
}

void stream_commit ()
{
    int i = 0;
    
    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE; i ++)
    {
        if (g_stream_table[i].enabled == ENABLE)
        {
            g_stream_table[i].valid      = VALID;
            g_stream_table[i].hit.pkts   = 0;
            g_stream_table[i].hit.bytes  = 0;
            g_stream_table[i].miss.pkts  = 0;
            g_stream_table[i].miss.bytes = 0;
        }
        else if (g_stream_table[i].enabled == DISABLE)
        {
            g_stream_table[i].valid = INVALID;
        }
    }
}




/*------------------ new add 函数和commit函数 -------------------*/



/******************************************************************************
 * 函数名称    : rule_mask_set_rfc_bitmap
 * 功能        : 根据规则内容设置rfc位图结构
 * 参数        : rule:六元组规则内容
 * 返回        : 详见错误码
******************************************************************************/
mp_code_t rule_mask_set_rfc_bitmap(rule_mask_t *rule)
{
    mp_code_t ret = MP_OK;

    if( NULL == rule )
    {
        return MP_FUN_PARAM_ERR;
    }

    rule_set_t *rs = RFC_FILTER_GET();
    int index = rule->ul_rule_id -1;

    rs->rule[index].rule_item[0][0] = rule->ul_src_ip_start / 65536;
    rs->rule[index].rule_item[1][0] = rule->ul_src_ip_start % 65536;
    rs->rule[index].rule_item[0][1] = rule->ul_src_ip_end   / 65536;
    rs->rule[index].rule_item[1][1] = rule->ul_src_ip_end   % 65536;
    rs->rule[index].rule_item[2][0] = rule->ul_dst_ip_start / 65536;
    rs->rule[index].rule_item[3][0] = rule->ul_dst_ip_start % 65536;
    rs->rule[index].rule_item[2][1] = rule->ul_dst_ip_end   / 65536;
    rs->rule[index].rule_item[3][1] = rule->ul_dst_ip_end   % 65536;

    rs->rule[index].rule_item[4][0] = rule->us_src_port_start;
    rs->rule[index].rule_item[4][1] = rule->us_src_port_end;
    rs->rule[index].rule_item[5][0] = rule->us_dst_port_start;
    rs->rule[index].rule_item[5][1] = rule->us_dst_port_end;

    rs->rule[index].rule_item[6][0] = ((rule->uc_iifgrp_start << 2) & 0xff)
                                         | rule->uc_protocol_start;
    rs->rule[index].rule_item[6][1] = ((rule->uc_iifgrp_end << 2) & 0xff)
                                         | rule->uc_protocol_end;

    printf("pst_filter_set->rule[%d].rule_item[0][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[0][0],
        rs->rule[index].rule_item[0][1]);
    printf("pst_filter_set->rule[%d].rule_item[1][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[1][0],
        rs->rule[index].rule_item[1][1]);
    printf("pst_filter_set->rule[%d].rule_item[2][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[2][0],
        rs->rule[index].rule_item[2][1]);
    printf("pst_filter_set->rule[%d].rule_item[3][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[3][0],
        rs->rule[index].rule_item[3][1]);
    printf("pst_filter_set->rule[%d].rule_item[4][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[4][0],
        rs->rule[index].rule_item[4][1]);
    printf("pst_filter_set->rule[%d].rule_item[5][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[5][0],
        rs->rule[index].rule_item[5][1]);
    printf("pst_filter_set->rule[%d].rule_item[6][0-1](0x%04x-%04x)\n",
        index, rs->rule[index].rule_item[6][0],
        rs->rule[index].rule_item[6][1]);

    rs->rule[index].u_state   = ACL_ENABLE;
    rs->rule[index].b_newitem = ACL_NEW;
    rs->rule[index].u_ifgroup = 1;

    rs->rule_num++;

    RFC_FILTER_SET_UCHANGE(1, ACL_CHANGED);
    return ret;
}

/******************************************************************************
 * 函数名称    : rule_mask_set_stream
 * 功能        : 增加一个规则的具体设置
 * 参数        : rule:六元组规则内容
 * 返回        : 详见错误码
******************************************************************************/
mp_code_t rule_mask_set_stream(rule_mask_t *rule)
{
    mp_code_t ret = MP_OK;

    if( NULL == rule )
    {
        return MP_FUN_PARAM_ERR;
    }

    printf("rule->ul_rule_id(%d) .\n", rule->ul_rule_id);

    rule_stream_st  *rs = g_stream_table + rule->ul_rule_id - 1;
    transimit_entry *te = &rs->transimit;
    memset(rs, 0, sizeof(rule_stream_st));

    rs->enabled     = ENABLE;
    rs->rule_id     = rule->ul_rule_id;
    rs->addr_ver    = IPV4;
    rs->iifgrp_type = rule->uc_iifgrp_type;
    rs->payload_id  = rule->ul_payload;
    rs->string_id   = rule->ul_string;

    te->valid          = VALID;
    te->action         = rule->action;
    te->iifgrp         = rule->ul_iif_grp;
    te->oifgrp[0]      = rule->ul_oif_grp[0];
    te->oifgrp[1]      = rule->ul_oif_grp[1];
    te->oifgrp[2]      = rule->ul_oif_grp[2];
    te->oifgrp[3]      = rule->ul_oif_grp[3];
    te->out_port       = rule->ul_out_port;
    te->fwd_oifgrp_num = rule->ul_oif_grp_num;

    return ret;
}

void printf_rfc_table()
{
    FILE* fp = NULL;
    int i = 0;

    if(( fp = fopen( "/mnt/hgfs/share/file1", "wb" ) ) == NULL )
    {
        printf("dst pcap file cann't create!\n");
        return;
    }
    for(i = 0 ; i < 1837728; i++)
    {
        fwrite(((uint8_t *)g_ix_rfc_table_base)+i, 1, 1, fp);
    }
    fclose(fp);
}
int npcp_cmd_mask_rule_add(rule_mask_t *rule)
{
    mp_code_t ret = MP_OK;

    /*设置rfc的过滤位图*/
    rule_mask_set_rfc_bitmap(rule);

    rule_mask_set_stream(rule);

    return ret;
}

int npcp_cmd_mask_rule_commit()
{
    mp_code_t ret = MP_OK;

    //rfc 运算，掩码过滤，将命令行commit操作放到这里来做
    ret = rfc_phase_commit();
    stream_commit ();

    printf_rfc_table();

    printf("npcp_cmd_mask_rule_commit ret = %d \n", ret);
    return ret;
}
