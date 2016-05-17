/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       ipv4Mask6Tup.c
编码格式:     ASCII
作者:         chenbin
创建:         May 10, 2016
历史:
    1.日期    :May 10, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "ipv4Mask6Tup.h"

rfc_acl_s      * g_ix_rfc_table_base   = NULL;
rule_stream_st *g_ix_stream_table_base = NULL;

int str2bitMask(char *str, uint64_t *bitMask)
{
    char *token = NULL;
    int start = 0;
    int end = 0;
    int i = 0;
    char pos = 0;
    int cnt = 0;

    if (str == NULL || bitMask == NULL)
    {
        return 0;
    }

    token = strtok(str, ",");
    while (token != NULL)
    {
        if ((pos = strstr(token, "-") != NULL))
        {
            if (sscanf(token, "%d-%d", &start, &end) != 2)
            {
                return 0;
            }
            else
            {
                for (i = start - 1; i <= end - 1 && i >= 0 && i < 64; i++)
                {
                    *bitMask |= (uint64_t)1 << i;
                    cnt++;
                }
            }
        }
        else
        {
            if (sscanf(token, "%d", &i) != 1 || i < 1 || i > 64)
            {
                return 0;
            }
            else
            {
                *bitMask |= (uint64_t)1 << (i - 1);
                cnt++;
            }
        }

        token = strtok(NULL, ",");
    }

    return cnt;
}


mp_code_t ipv4Convert(uint32_t ip, uint32_t mask, uint32_t *ipStart, uint32_t *ipEnd)
{
    if( (~mask) & (~mask+1) )
    {
        return MP_FAIL;
    }

    *ipStart = ip & mask;
    *ipEnd   = *ipStart + ~mask;
    return MP_OK;
}

mp_code_t proto_convert(unsigned char v6Flag, unsigned char virProto, unsigned char *realProto)
{
    unsigned char proto = 0;

    if (virProto == (1 << PROTO_TCP))
    {
        proto = R_TCP;
    }

    else if (virProto == (1 << PROTO_UDP))
    {
        proto = R_UDP;
    }
    else if (virProto == (1 << PROTO_ICMP))
    {
        if (v6Flag == 1)
        {
            proto = R_ICMPV6;
        }
        else
        {
            proto = R_ICMP;
        }
    }
    else if (virProto == (1 << PROTO_IGMP))
    {
        proto = R_IGMP;
    }
    else if (virProto == (1 << PROTO_SCTP))
    {
        proto = R_SCTP;
    }
    else if (virProto == 0)
    {
        proto = 0;  //ignore protocal
    }
    else if (virProto == 0xff)
    {
        proto = 0xff;  //protocal mask
    }
    else
    {
        return MP_FAIL;
    }

    *realProto = proto;
    return MP_OK;
}

mp_code_t rule_mask_v4_ip_convert(uint32_t ip, uint32_t mask, uint32_t *ip_start, uint32_t *ip_end)
{
    *ip_start = ip;
    *ip_end   = mask;
    return MP_OK;
}
mp_code_t rule_mask_v4_port_convert(uint16_t port, uint16_t mask, uint16_t *port_start, uint16_t *port_end)
{
    *port_start = port;
    *port_end   = mask;
    return MP_OK;
}

mp_code_t rule_mask_v4_protocol_convert(uint8_t poc, uint8_t mask, uint8_t *poc_start, uint8_t *poc_end)
{
    if( ((~mask) & 0xff) & ((~mask+1) & 0xff) )
    {
        return -1;
    }

    uint8_t poc_convert_start = 0, poc_convert_end = 0;

    poc_convert_start = poc & mask;
    poc_convert_end   = poc_convert_start + ~mask;

    if (poc_convert_start == R_TCP)
    {
        *poc_start = 0;
    }
    else if (poc_convert_start == R_UDP)
    {
        *poc_start = 1;
    }
    else if (poc_convert_start == R_SCTP)
    {
        *poc_start = 2;
    }
    else
    {
        *poc_start = poc_convert_start;
    }

    if (poc_convert_end == R_TCP)
    {
        *poc_end = 0;
    }
    else if (poc_convert_end == R_UDP)
    {
        *poc_end = 1;
    }
    else if (poc_convert_end == R_SCTP)
    {
        *poc_end = 2;
    }
    else if (poc_convert_end == 0xff)
    {
        *poc_end = 3;
    }
    else
    {
        *poc_end = poc_convert_end;
    }


    return MP_OK;
}




mp_code_t rule_mask_v4_iifgrp_convert(semp_pbmp_t *port,  uint8_t *poc_start, uint8_t *poc_end)
{
    uint8_t max, num;

    if (SEMP_PBMP_IS_NULL(port) || SEMP_PBMP_IS_ALLF(port))
    {
        *poc_start = 0;
        *poc_end   = 0xff;
        return MP_OK;
    }

    num = semp_pbmp_get_num(port);
    max = semp_bpmp_max_port(port);

    if ( num > (max + 1) )
    {
        return -1;
    }

    *poc_start = (max + 1) - num;
    *poc_end   = max;

    return MP_OK;
}

#define RFC_FILTER_GET() (g_ix_rfc_table_base->pst_backup_set)
#define RFC_FILTER_SET_UCHANGE(_iifgrp, _v)  (g_ix_rfc_table_base->st_filter_index[_iifgrp - 1].u_changed = _v)
#define RFC_FILTER_INDEX_GET()  (g_ix_rfc_table_base->st_filter_index)

int hydra_rule_mask_rfc_table_set(rule_mask_t * rule)
{
    int index = 0;

    rfc_filter_set_s *pst_filter_set = RFC_FILTER_GET();

    index = rule->ul_rule_id -1;

    pst_filter_set->st_filter[index].ua_dim[0][0] = rule->ul_src_ip_start / 65536;
    pst_filter_set->st_filter[index].ua_dim[1][0] = rule->ul_src_ip_start % 65536;
    pst_filter_set->st_filter[index].ua_dim[0][1] = rule->ul_src_ip_end / 65536;
    pst_filter_set->st_filter[index].ua_dim[1][1] = rule->ul_src_ip_end % 65536;
    pst_filter_set->st_filter[index].ua_dim[2][0] = rule->ul_dst_ip_start / 65536;
    pst_filter_set->st_filter[index].ua_dim[3][0] = rule->ul_dst_ip_start % 65536;
    pst_filter_set->st_filter[index].ua_dim[2][1] = rule->ul_dst_ip_end / 65536;
    pst_filter_set->st_filter[index].ua_dim[3][1] = rule->ul_dst_ip_end % 65536;

    pst_filter_set->st_filter[index].ua_dim[4][0] = rule->us_src_port_start;
    pst_filter_set->st_filter[index].ua_dim[4][1] = rule->us_src_port_end;
    pst_filter_set->st_filter[index].ua_dim[5][0] = rule->us_dst_port_start;
    pst_filter_set->st_filter[index].ua_dim[5][1] = rule->us_dst_port_end;

    pst_filter_set->st_filter[index].ua_dim[6][0] = ((rule->uc_iifgrp_start << 2) & 0xff)
                                                    | rule->uc_protocol_start;
    pst_filter_set->st_filter[index].ua_dim[6][1] = ((rule->uc_iifgrp_end << 2) & 0xff)
                                                    | rule->uc_protocol_end;

    pst_filter_set->st_filter[index].u_state = ACL_ENABLE;
    pst_filter_set->st_filter[index].b_newitem = ACL_NEW;
    //pst_filter_set->st_filter[index].u_ifgroup = rule->us_iifgrp;
    pst_filter_set->st_filter[index].u_ifgroup = 1;

    pst_filter_set->ul_filter_num ++;

    printf("pst_filter_set->st_filter[%d].ua_dim[0][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[0][0],
        pst_filter_set->st_filter[index].ua_dim[0][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[1][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[1][0],
        pst_filter_set->st_filter[index].ua_dim[1][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[2][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[2][0],
        pst_filter_set->st_filter[index].ua_dim[2][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[3][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[3][0],
        pst_filter_set->st_filter[index].ua_dim[3][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[4][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[4][0],
        pst_filter_set->st_filter[index].ua_dim[4][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[5][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[5][0],
        pst_filter_set->st_filter[index].ua_dim[5][1]);
    printf("pst_filter_set->st_filter[%d].ua_dim[6][0-1](%#x-%#x)\n",
        index, pst_filter_set->st_filter[index].ua_dim[6][0],
        pst_filter_set->st_filter[index].ua_dim[6][1]);

    RFC_FILTER_SET_UCHANGE(1, ACL_CHANGED);
    return XSUCCESS;
}

mp_code_t hydra_rule_mask_v4_hfct_set(rule_mask_t * rule)
{
    mp_code_t rv = MP_OK;
    int index = rule->ul_rule_id - 1;

    rule_stream_st  *rule_stream_entry    = g_ix_stream_table_base + index;
    transimit_entry *rule_transimit_entry = &(rule_stream_entry->transimit);

    memset(rule_stream_entry, 0, sizeof(rule_stream_st));

    rule_stream_entry->enabled = ENABLE;
    rule_stream_entry->rule_id = rule->ul_rule_id;
    rule_stream_entry->addr_ver = IPV4;
    rule_stream_entry->iifgrp_type = rule->uc_iifgrp_type;
    rule_stream_entry->payload_id = rule->ul_payload;
    rule_stream_entry->string_id = rule->ul_string;

    rule_transimit_entry->valid = VALID;
    rule_transimit_entry->action = rule->action;
    rule_transimit_entry->iifgrp = rule->ul_iif_grp;
    rule_transimit_entry->oifgrp[0] = rule->ul_oif_grp[0];
    rule_transimit_entry->oifgrp[1] = rule->ul_oif_grp[1];
    rule_transimit_entry->oifgrp[2] = rule->ul_oif_grp[2];
    rule_transimit_entry->oifgrp[3] = rule->ul_oif_grp[3];
    rule_transimit_entry->fwd_oifgrp_num = rule->ul_oif_grp_num;
    rule_transimit_entry->out_port = rule->ul_out_port;

    //rv = npcp_mask_rule_action_set(rule->ul_rule_id);

    return XSUCCESS;
}


mp_code_t hydra_rule_mask_v4_add(fs_v4_mask_rule_7k_t *rule)
{
    rule_mask_t rfc_rule = {};
    mp_code_t rv = MP_OK;

    memset(&rfc_rule, 0, sizeof(rfc_rule));

    rv = rule_mask_v4_ip_convert(rule->data.tup5.sip, rule->mask.tup5.sip,
            &rfc_rule.ul_src_ip_start, &rfc_rule.ul_src_ip_end);
    if(rv)
    {
        printf("rule_mask_v4_ip_convert(%d).\n", rv);
        return MP_FAIL;
    }
    rv = rule_mask_v4_ip_convert(rule->data.tup5.dip, rule->mask.tup5.dip,
            &rfc_rule.ul_dst_ip_start, &rfc_rule.ul_dst_ip_end);
    if(rv)
    {
        printf("rule_mask_v4_ip_convert(%d).\n", rv);
        return MP_FAIL;
    }
    rv = rule_mask_v4_port_convert(rule->data.tup5.dp, rule->mask.tup5.dp,
            &rfc_rule.us_dst_port_start, &rfc_rule.us_dst_port_end);
    if(rv)
    {
        printf("rule_mask_v4_port_convert(%d).\n", rv);
        return MP_FAIL;
    }
    rv = rule_mask_v4_port_convert(rule->data.tup5.sp, rule->mask.tup5.sp,
            &rfc_rule.us_src_port_start, &rfc_rule.us_src_port_end);
    if(rv)
    {
        printf("rule_mask_v4_port_convert(%d).\n", rv);
        return MP_FAIL;
    }

    rv = rule_mask_v4_protocol_convert(rule->data.tup5.proto, rule->mask.tup5.proto,
            &rfc_rule.uc_protocol_start, &rfc_rule.uc_protocol_end);
    if(rv)
    {
        printf("rule_mask_v4_protocol_convert(%d).\n", rv);
        return MP_FAIL;
    }

    rv = rule_mask_v4_iifgrp_convert(&(rule->data.iif.port),
            &rfc_rule.uc_iifgrp_start, &rfc_rule.uc_iifgrp_end);
    if(rv)
    {
        printf("rule_mask_v4_iifgrp_convert(%d).\n", rv);
        return MP_FAIL;
    }
    rfc_rule.uc_iifgrp_start+=1;
    rfc_rule.uc_iifgrp_end+=1;

    rfc_rule.ul_rule_id = rule->index + 1;
    rfc_rule.ul_tag_id = rule->index  + 1;
    rfc_rule.ul_iif_grp = 1;
    printf("rfc_rule.ul_tag_id(%d).\n", rfc_rule.ul_tag_id);
    printf("sip(%#x-%#x), dip(%#x-%#x), sp(%d-%d), dp(%d-%d), proto(%d-%d), iifgrp(%d-%d)\n",
        rfc_rule.ul_src_ip_start, rfc_rule.ul_src_ip_end, rfc_rule.ul_dst_ip_start, rfc_rule.ul_dst_ip_end,
        rfc_rule.us_src_port_start, rfc_rule.us_src_port_end, rfc_rule.us_dst_port_start, rfc_rule.us_dst_port_end,
        rfc_rule.uc_protocol_start, rfc_rule.uc_protocol_end, rfc_rule.uc_iifgrp_start, rfc_rule.uc_iifgrp_end);

    switch(rule->acl.action) //FIXME:Need to Redefine
    {
        case FS_ACT_FORWARD:
            rfc_rule.action = ACTION_FORWARD ;
            //rfc_rule.ul_oif_grp = rule->acl.oifgrp;
            rfc_rule.ul_oif_grp_num = rule->acl.oifgrp_num;
            rfc_rule.ul_oif_grp[0] = rule->acl.oifgrp[0];
            rfc_rule.ul_oif_grp[1] = rule->acl.oifgrp[1];
            rfc_rule.ul_oif_grp[2] = rule->acl.oifgrp[2];
            rfc_rule.ul_oif_grp[3] = rule->acl.oifgrp[3];
            break;
        case FS_ACT_DROP:
            rfc_rule.action = ACTION_DROP ;
            break;
        default:
            rfc_rule.action = ACTION_PERMIT ;
            break;
    }

    rv |= hydra_rule_mask_rfc_table_set(&rfc_rule);
    rv |= hydra_rule_mask_v4_hfct_set(&rfc_rule);
    return rv;
}

mp_code_t apiV4Mask6TupAdd(unsigned int index, RULE_V4_MASK_6TUP_T *rule)
{
    mp_code_t ret = MP_OK;
    char _buf1[128] = {};
    char _buf2[128] = {};
    fs_v4_mask_rule_7k_t ruleConf;

    memset(&ruleConf, 0, sizeof(ruleConf));
    ruleConf.index = index;
    memcpy(&ruleConf.data.tup5, &rule->data.tup5, sizeof(V4_5TUP_T));
    memcpy(&ruleConf.mask.tup5, &rule->mask.tup5, sizeof(V4_5TUP_T));
    SEMP_PBMP_ASSIGN(ruleConf.data.iif.port, rule->data.iifGrpId);
    SEMP_PBMP_ASSIGN(ruleConf.mask.iif.port, rule->mask.iifGrpId);
    ruleConf.acl.action = rule->acl.action;


    if (SEMP_PBMP_NOT_NULL(&(rule->mask.iifGrpId)))
    {
        SEMP_PBMP_SET_ALLF(ruleConf.mask.iif.port);
    }

    /*convert real protocal */
    if (proto_convert(0, rule->data.tup5.proto, &ruleConf.data.tup5.proto) != MP_OK)
    {
        return MP_FAIL;
    }

    if (proto_convert(0, rule->mask.tup5.proto, &ruleConf.mask.tup5.proto) != MP_OK)
    {
        return MP_FAIL;
    }


    int i = 0;
    for(i = 0; i < 64; i++)
    {
        if((1ULL << i) & rule->acl.oifgrpMask)
        {
            ruleConf.acl.oifgrp[ruleConf.acl.oifgrp_num++] = i + 1;
        }
    }

    printf("apiV4Mask6TupAdd",
           "id=%d sip=%#x/%#x, dip=%#x/%#x, sp=%d/%d dp=%d/%d pro=%#x/%#x iifGrpId=%s/%s acl=%d|%d.%d.%d.%d",
           ruleConf.index, ruleConf.data.tup5.sip, ruleConf.mask.tup5.sip,
           ruleConf.data.tup5.dip, ruleConf.mask.tup5.dip,
           ruleConf.data.tup5.sp, ruleConf.mask.tup5.sp,
           ruleConf.data.tup5.dp, ruleConf.mask.tup5.dp,
           ruleConf.data.tup5.proto, ruleConf.mask.tup5.proto,
           semp_pbmp_format(ruleConf.data.iif.port, _buf1),
           semp_pbmp_format(ruleConf.mask.iif.port, _buf2),
           ruleConf.acl.action, ruleConf.acl.oifgrp[0],
           ruleConf.acl.oifgrp[1], ruleConf.acl.oifgrp[2],
           ruleConf.acl.oifgrp[3]);


    ret = hydra_rule_mask_v4_add(&ruleConf);
    return ret;
}


mp_code_t configV4Mask6TupAdd(uint32_t index,
                                RULE_V4_MASK_6TUP_T *pRule )
{
    return MP_OK;
}

mp_code_t cmdV4Mask6TupAdd(int argc, char *argv[] )
{
    mp_code_t ret = MP_OK;

    RULE_V4_MASK_6TUP_T rule;
    uint8_t iifGrpNum = 48; /*测试结果*/
    uint32_t ip       = 0;
    uint32_t ipMask   = 0;
    uint32_t index    = 0;

    //getiifGrpIdNum(&iifGrpNum);

    memset(&rule, 0, sizeof(rule));

    index = (uint32_t)atoi(argv[1]) - 1;

    /*source ip & extend*/
    if (strchr(argv[2], '-'))
    {
        str2ipv4Range(argv[2], &rule.data.tup5.sip, &rule.mask.tup5.sip);
    }
    else
    {
        str2ipv4Mask(argv[2], &ip, &ipMask);
        ipv4Convert(ip, ipMask, &rule.data.tup5.sip, &rule.mask.tup5.sip);
    }

    /* Destination ip & mask */
    if (strchr(argv[3], '-'))
    {
        str2ipv4Range(argv[3], &rule.data.tup5.dip, &rule.mask.tup5.dip);
    }
    else
    {
        str2ipv4Mask(argv[3], &ip, &ipMask);
        ipv4Convert(ip, ipMask, &rule.data.tup5.dip, &rule.mask.tup5.dip);
    }

    /* source port & mask */
    ret = str2portRange(argv[4], &rule.data.tup5.sp, &rule.mask.tup5.sp);
    if (ret != MP_OK)
    {
        printf("Error(0x%04x): invalid source port parameters!", ret);
        return MP_FAIL;
    }

    /* Destination port & mask */
    ret = str2portRange(argv[5], &rule.data.tup5.dp, &rule.mask.tup5.dp);
    if (ret != MP_OK)
    {
        printf("Error(0x%04x): invalid destination port parameters!", ret);
        return MP_FAIL;
    }

    /* protocol & mask */
    ret = str2protoMask(argv[6], &rule.data.tup5.proto, &rule.mask.tup5.proto);
    if (ret != MP_OK)
    {
        printf("Error(0x%04x): invalid protocol parameters!", ret);
        return MP_FAIL;
    }

    /* input inferface index */
    ret = parseIifGrpMask(argv[7], &rule.data.iifGrpId, iifGrpNum);
    if (ret != MP_OK)
    {
        printf("Error(0x%04x): invalid input interface group parameters!", MP_FAIL);
        return MP_FAIL;
    }

    if (SEMP_PBMP_IS_NULL(&(rule.data.iifGrpId)))
    {
        SEMP_PBMP_CLEAR(&(rule.mask.iifGrpId));
    }
    else
    {
        SEMP_PBMP_SET_ALLF(rule.mask.iifGrpId);
    }

    ret = str2action(argv[8], &rule.acl.action);
    if (ret != MP_OK)
    {
        printf("Error(0x%04x): invalid action parameters!", ret);
        return MP_FAIL;
    }

    /*fwd parameters*/
    if (argc == 10)
    {
        //rule.acl.param = atoi(argv[9]) - 1;
        if (str2bitMask(argv[9], &(rule.acl.oifgrpMask)) > 4)
        {
            printf("Error(0x%04x): too much oifgrp", MP_FAIL);
            return MP_FAIL;
        }
    }
    /* add a mask 6-tuple IPv4 rule */
    ret = apiV4Mask6TupAdd(index, &rule);
    ret = configV4Mask6TupAdd(index, &rule);

    return MP_OK;
}



void stream_commit ()
{
    int i = 0;

    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE; i ++)
    {
        if (g_ix_stream_table_base[i].enabled == ENABLE)
        {
            g_ix_stream_table_base[i].valid = VALID;
            g_ix_stream_table_base[i].hit.pkts = 0;
            g_ix_stream_table_base[i].hit.bytes = 0;
            g_ix_stream_table_base[i].miss.pkts = 0;
            g_ix_stream_table_base[i].miss.bytes = 0;
        }
        else if (g_ix_stream_table_base[i].enabled == DISABLE)
        {
            g_ix_stream_table_base[i].valid = INVALID;
        }
    }
}

mp_code_t cmdV4Mask6TupCommit(int argc , char *argv[] )
{
    mp_code_t ret = MP_OK;
    struct  timeval start;
    struct  timeval now;
    gettimeofday(&start, NULL);
    printf("start commit: time:%lds.%ldms\n", (int64_t)start.tv_sec, (int64_t)start.tv_usec);
    ret = rfc_phase_commit();
    stream_commit ();
    gettimeofday(&now, NULL);
    printf("end commit: time:%lds.%ldms\n", (int64_t)now.tv_sec, (int64_t)now.tv_usec);
    printf("commit spend: time:%lds\n", (int64_t)(now.tv_sec - start.tv_sec));

    return MP_OK;
}

#define R_OTHER_DECODE 3
#define R_ICMP_DECODE R_OTHER_DECODE /*other*/
#define R_IGMP_DECODE R_OTHER_DECODE/*other*/
#define R_TCP_DECODE  0
#define R_UDP_DECODE  1
#define R_ICMPV6_DECODE  R_OTHER_DECODE
#define R_SCTP_DECODE  2

uint8_t rfc_protocol_convert (uint8_t proto)
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
    //uint8_t  uc_protocol = ip5tuple->v4.protocol;
    //uint16_t  uc_protocol = ((uc_iifgrp & 0x00ff) << 8) | ip5tuple->v4.protocol;

    uint8_t  uc_protocol = rfc_protocol_convert (ip5tuple->proto);
    uc_protocol |= ((uc_iifgrp & 0xff) << 2);

    if (MPP_GET_MD_VAR(pst_filter_set->pst_acl_ptr) && MPP_GET_MD_VAR(pst_filter_set->pst_acl_ptr)[0])
    {
        pst_pnoder = MPP_GET_MD_VAR(pst_filter_set->pst_acl_ptr)[0]->st_phase_nodes;
    }

    if ((pst_pnoder != NULL) && (MPP_GET_MD_VAR (pst_pnoder[0].pul_cell) != NULL))
    {
        value0 = MPP_GET_MD_VAR (pst_pnoder[0].pul_cell)[us_siph];
        value1 = MPP_GET_MD_VAR (pst_pnoder[1].pul_cell)[us_sipl];
        value2 = MPP_GET_MD_VAR (pst_pnoder[2].pul_cell)[us_diph];
        value3 = MPP_GET_MD_VAR (pst_pnoder[3].pul_cell)[us_dipl];
        value4 = MPP_GET_MD_VAR (pst_pnoder[4].pul_cell)[us_sport];
        value5 = MPP_GET_MD_VAR (pst_pnoder[5].pul_cell)[us_dport];
        value6 = MPP_GET_MD_VAR (pst_pnoder[6].pul_cell)[uc_protocol];
        value7 = MPP_GET_MD_VAR (pst_pnoder[7].pul_cell)[value0 * pst_pnoder[1].ul_eq_id + value1];
        value8 = MPP_GET_MD_VAR (pst_pnoder[8].pul_cell)[value2 * pst_pnoder[3].ul_eq_id + value3];
        value9 = MPP_GET_MD_VAR (pst_pnoder[9].pul_cell)[value4 * pst_pnoder[5].ul_eq_id + value5];
        value10 = MPP_GET_MD_VAR (pst_pnoder[10].pul_cell)[value6 * pst_pnoder[9].ul_eq_id + value9];
        value11 = MPP_GET_MD_VAR (pst_pnoder[11].pul_cell)[value7 * pst_pnoder[8].ul_eq_id + value8];
        value12 = MPP_GET_MD_VAR (pst_pnoder[12].pul_cell)[value10 * pst_pnoder[11].ul_eq_id + value11];

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


void rule_mask_init()
{
    int i     = 0;
    int index = 0;
    rule_stream_st * rule_stream_tmp = NULL;

    printf("rule_stream_st = %d bytes\n rfc_acl_s = %d k\n",
            sizeof(rule_stream_st), sizeof(rfc_acl_s)/1024);

    printf("rfc_phase_data_s = %d k\n rfc_phase_set_s = %d bytes\n",
            sizeof(rfc_phase_data_s)/1024, sizeof(rfc_phase_set_s));

    printf("rfc_filter_index_s = %d bytes\n 1<<24 = %d M\n",
            sizeof(rfc_filter_index_s), (1<<24)*8/1024/1024);

    g_ix_stream_table_base = (rule_stream_st *)malloc(
                 (MAX_NUM_RULE_FIVETUPLE + MAX_NUM_RULE_FIVETUPLE_DEFAULT)*sizeof(rule_stream_st));
    memset(g_ix_stream_table_base, 0, (MAX_NUM_RULE_FIVETUPLE +
            MAX_NUM_RULE_FIVETUPLE_DEFAULT)*sizeof(rule_stream_st));

    g_ix_rfc_table_base = (rfc_acl_s*)malloc(sizeof(rfc_acl_s));
    memset(g_ix_rfc_table_base, 0, sizeof(rfc_acl_s));

    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE; i++)
    {
        rule_stream_tmp = &g_ix_stream_table_base[i];
        memset(rule_stream_tmp, 0, sizeof(rule_stream_st));
        rule_stream_tmp->valid = INVALID;
        rule_stream_tmp->enabled = DISABLE;
        rule_stream_tmp->rule_id = STREAM_INVALID_INDEX;
    }

    for (i = 0; i < MAX_NUM_RULE_FIVETUPLE_DEFAULT; i ++)
    {
        index = i + OFFSET_RULE_FIVETUPLE_DEFAULT;

        rule_stream_tmp = &g_ix_stream_table_base[index];
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
