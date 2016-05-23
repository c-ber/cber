/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_relate_s11.c
编码格式:     ASCII
作者:         chenbin
创建:         Nov 16, 2015
历史:
    1.日期    :Nov 16, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "lte_relate_s11.h"



CVMX_SHARED gtpc_switch_t g_msg_module_switch[GTP_MSG_MAX] = {};


/***************************s11-mme************************/
/**********************************************************************************************
  函数名称      : s11_mme_table_compare
  描述          : imsi table 表项的比较函数
  调用          :
  被调用        : dataplane_lte_init
                  hash_table_search_update
  被访问的表    :
  被修改的表    :
  输入          : void *table, void *update
  输出          : 无
  返回          : 返回值为MP_OK
  其他          :
**********************************************************************************************/


mp_code_t s11_mme_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S11, LV_ERROR);

    lte_table_s11_mme_t * sentry = (lte_table_s11_mme_t *)src;
    lte_table_s11_mme_t * dentry = (lte_table_s11_mme_t *)dst;

    if(sentry->fteid.teid== dentry->fteid.teid
            && sentry->fteid.ip == dentry->fteid.ip)
    {
         *cmp = HASH_CMP_SAME;
    }
    else
    {
        LTE_DEBUG_PRINTF("Compare: Src:<0x%x,0x%x>, Dst<0x%x,0x%x>\n",
                    sentry->fteid.ip,sentry->fteid.teid,
                    dentry->fteid.ip,dentry->fteid.teid);
         *cmp = HASH_CMP_DIFF;
    }

    return MP_OK;
}

/**********************************************************************************************
  函数名称      : s11_mme_table_hash
  描述          : imsi table 表项的hash函数
  调用          :
  被调用        : dataplane_lte_init
                  hash_table_search_update
  被访问的表    :
  被修改的表    :
  输入          : hash_key_t *key, uint32_t *hash_result
  输出          : 无
  返回          : 返回值为MP_OK
  其他          :
**********************************************************************************************/


mp_code_t s11_mme_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S11, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s11_mme_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s11_mme_t *entry =  (lte_table_s11_mme_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S11, LV_ERROR);
    LTE_DEBUG_PRINTF("mme: aging = %d\n", entry->aging);

    switch( opera )
    {
        case TIMER_REPLACE:
            entry->aging = value;
            break;
        case TIMER_REDUCE:
            entry->aging = entry->aging?entry->aging - value:entry->aging;
            break;
        default:
            break;
    }
    return entry->aging;
}
#endif
/**********************************************************************************************
  函数名称      : s11_sgw_table_compare
  描述          : imsi table 表项更新函数
  调用          :
  被调用        : dataplane_lte_init
                  hash_table_search_update
  被访问的表    :
  被修改的表    :
  输入          : void *src, void* dst, hash_cmp_em_t *cmp
  输出          : 无
  返回          : 返回值为MP_OK
  其他          :
**********************************************************************************************/


/***************************s11-sgw************************/
mp_code_t s11_sgw_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S11, LV_ERROR);

    lte_table_s11_sgw_t * sentry = (lte_table_s11_sgw_t *)src;
    lte_table_s11_sgw_t * dentry = (lte_table_s11_sgw_t *)dst;



    if(sentry->fteid.teid== dentry->fteid.teid
            && sentry->fteid.ip == dentry->fteid.ip)
    {
         *cmp = HASH_CMP_SAME;
    }
    else
    {
        LTE_DEBUG_PRINTF("Compare: Src:<0x%x,0x%x>, Dst<0x%x,0x%x>\n",
                    sentry->fteid.ip,sentry->fteid.teid,
                    dentry->fteid.ip,dentry->fteid.teid);
         *cmp = HASH_CMP_DIFF;
    }

    return MP_OK;
}

/**********************************************************************************************
  函数名称      : s11_sgw_table_hash
  描述          : imsi table 表项hash函数
  调用          :
  被调用        : dataplane_lte_init
                  hash_table_search_update
  被访问的表    :
  被修改的表    :
  输入          : void *src, void* dst, hash_cmp_em_t *cmp
  输出          : 无
  返回          : 返回值为MP_OK
  其他          :
**********************************************************************************************/

mp_code_t s11_sgw_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S11, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s11_sgw_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s11_sgw_t *entry =  (lte_table_s11_sgw_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S11, LV_ERROR);
    LTE_DEBUG_PRINTF("sgw: aging = %d\n", entry->aging);

    switch( opera )
    {
        case TIMER_REPLACE:
            entry->aging = value;
            break;
        case TIMER_REDUCE:
            entry->aging = entry->aging?entry->aging - value:entry->aging;
            break;
        default:
            break;
    }
    return entry->aging;
}
#endif


/***************************s1u************************/
mp_code_t s1u_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S11, LV_ERROR);

    lte_table_s1u_t * sentry = (lte_table_s1u_t *)src;
    lte_table_s1u_t * dentry = (lte_table_s1u_t *)dst;

    if(sentry->fteid.teid== dentry->fteid.teid
            && sentry->fteid.ip == dentry->fteid.ip)
    {
         *cmp = HASH_CMP_SAME;
    }
    else
    {
         *cmp = HASH_CMP_DIFF;
    }

    return MP_OK;
}

mp_code_t s1u_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S11, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s1u_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s1u_t *entry =  (lte_table_s1u_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S11, LV_ERROR);
    LTE_DEBUG_PRINTF("s1u: aging = %d\n", entry->aging);

    switch( opera )
    {
        case TIMER_REPLACE:
            entry->aging = value;
            break;
        case TIMER_REDUCE:
            entry->aging = entry->aging?entry->aging - value:entry->aging;
            break;
        default:
            break;
    }
    return entry->aging;
}
#endif

/***************************s1u-end************************/


inline mp_code_t lte_update_s1u_bearer(hash_table_index_t *pos_index, uint32_t index, 
                                           struct list_head    *node, uint8_t bearerid)
{
    int i;

    CVMX_MP_POINT_CHECK(pos_index, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(node, M_S11, LV_ERROR);
    if (index > MAX_INDEX_V)
    {
        return MP_FUN_PARAM_ERR;
    }

    for (i= 0; i < MAX_NUM_BEARER; i++)
    {
        if(pos_index[i].en == ENABLE)
        {
             if(bearerid  == pos_index[i].bearerid)
             {
                pos_index[i].node  = node;
                pos_index[i].index  = index;
                LTE_DEBUG_PRINTF(" pos_index[i].index: %d \n", pos_index[i].index);
                return MP_OK;
             }
             else
             {
                continue;
             }

        }
        else
        {
             pos_index[i].en = ENABLE;
             pos_index[i].node  = node;
             pos_index[i].index  = index;
             pos_index[i].bearerid  = bearerid;
             LTE_DEBUG_PRINTF(" pos_index[i].index: %d \n", pos_index[i].index);
             return MP_OK;
        }
    }
    hydra_stat_inc(stat_pkts_s1u_pnd_over);
    return MP_FAIL;
}


inline mp_code_t lte_delete_s1u_by_imsi(lte_table_imsi_t *table_imsi_e,
                                    uint8_t bearerid )
{
    /*delete mme bearer in s1u*/
    int i;
    mp_code_t rv = MP_OK;

    CVMX_MP_POINT_CHECK(table_imsi_e, M_S11, LV_ERROR);

    if (0 == bearerid)
    {
        for (i = 0; i < MAX_NUM_BEARER; i++)
        {
            // delete s1u-sgw table entry (including default/dedicated bearer)
            if (ENABLE == table_imsi_e->pos_s1u_sgw[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_imsi_e->pos_s1u_sgw[i].index, table_imsi_e->pos_s1u_sgw[i].node);
                if( MP_OK != rv)
                {
                    return rv;
                }
            }

            // delete s1u-eNB table entry (including default/dedicated bearer)
            if (ENABLE == table_imsi_e->pos_s1u_eNB[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_imsi_e->pos_s1u_eNB[i].index, table_imsi_e->pos_s1u_eNB[i].node);
                if( MP_OK != rv)
                {
                    return rv;
                }
            }
            
        }
    }
    else
    {
        for (i = 0; i < MAX_NUM_BEARER; i++)
        {
            // delete s1u_sgw table entry
            if (bearerid == table_imsi_e->pos_s1u_sgw[i].bearerid
                        && ENABLE == table_imsi_e->pos_s1u_sgw[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_imsi_e->pos_s1u_sgw[i].index, table_imsi_e->pos_s1u_sgw[i].node);
                if (MP_OK != rv)
                {
                    return rv;
                }
            }

            // delete s1u_eNB table entry
            if (bearerid == table_imsi_e->pos_s1u_eNB[i].bearerid
                        && ENABLE == table_imsi_e->pos_s1u_eNB[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_imsi_e->pos_s1u_eNB[i].index, table_imsi_e->pos_s1u_eNB[i].node);
                if (MP_OK != rv)
                {
                    return rv;
                }
            }
        }
    }

    return rv;
}


/****************************/
inline bool check_imsi_table_integrity(lte_table_imsi_t imsi_cell)
{
    if ( (imsi_cell.mask & IMSIT_IMSI_VALID)
        && (imsi_cell.mask & IMSIT_IMEI_VALID)
        && (imsi_cell.mask & IMSIT_MSISDN_VALID)
        && (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
        && (imsi_cell.mask & IMSIT_GUTI_VALID)
        && (imsi_cell.mask & IMSIT_TAI_VALID)
        && (imsi_cell.mask & IMSIT_PDN_VALID)
        && (imsi_cell.mask & IMSIT_POS_S11_MME_VALID)
        && (imsi_cell.mask & IMSIT_POS_S11_SGW_VALID)
        && (imsi_cell.mask & IMSIT_POS_S1U_SGW_VALID)
        && (imsi_cell.mask & IMSIT_POS_S1U_ENB_VALID)
        && (imsi_cell.mask & IMSIT_POS_S6A_VALID)
        && (imsi_cell.mask & IMSIT_POS_S1_MME_VALID)
        )
    {
        return TRUE;
    }

    return FALSE;
}

inline bool check_s1u_table_integrity(lte_table_s1u_t s1u_cell)
{
    if ( (s1u_cell.mask & S1UT_IMSI_VALID)
        && (s1u_cell.mask & S1UT_IMEI_VALID)
        && (s1u_cell.mask & S1UT_MSISDN_VALID)
        && (s1u_cell.mask & S1UT_EX_FIELD_VALID)
        && (s1u_cell.mask & S1UT_GUTI_VALID)
        && (s1u_cell.mask & S1UT_TAI_VALID)
        )
    {
        return TRUE;
    }

    return FALSE;
}

mp_code_t check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf)
{
    uint16_t i = 0;
    uint8_t low  = 0;
    uint8_t high = 0;

    CVMX_MP_POINT_CHECK(ie_buf, M_S11, LV_ERROR);
    if ( 0 == ie_len )
    {
        return MP_FUN_PARAM_ERR;
    }
    for ( i = 0; i < ie_len; i++ )
    {
        BIT_LOW_ASCII_4(low, ie_buf[i]);
        BIT_HIGH_ASCII_4(high,ie_buf[i]);

        if ( ie_len-1 == i )
        {
            if ( !isdigit(low) || (!isdigit(high) &&  ((0xf & high)!=0x0f)) )
            {
                return MP_NON_BCD_FORMAT;
            }
        }
        else
        {
            if ( !isdigit(low) || !isdigit(high) )
            {
                return MP_NON_BCD_FORMAT;
            }
        }

    }
    return MP_OK;
}
lte_guti_t guti_base =  {0x11,0x22,0x33,0x44,0x55,0x66,0x77,0x88,0x99,0x05};
lte_tai_t tai_base =  {0x01,0x02,0x3,0x4,0x5};
/* 建立imsi表，建立 s11-mme表 */
mp_code_t lte_s11_gtpc_create_session_requset(parse_gtpc_t *gtpc)
{
    /*step 1. Imsi*/
    mp_code_t rv = MP_OK;

    hydra_stat_inc(stat_pkts_gtpc_create_session_req);

    if( cvmx_unlikely(NULL == gtpc) )
    {
        LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
        LTE_DEBUG_PRINTF("Create Session request: Check gtpc point <NULL> \n");
        hydra_stat_inc(stat_pkts_info_incompelte_1);
        return MP_FUN_PARAM_ERR;
    }

    if( MP_OK != check_TBCD_encode(LTE_IMSI_LEN, gtpc->imsi) )
    {
        LTE_DEBUG_PRINTF("Create Session request: Check imsi <non-bcd encode> \n");
        hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
        return MP_FUN_PARAM_ERR;
    }

    if( 0 == gtpc->fteid[S11_MME].ip
                    || 0 == gtpc->fteid[S11_MME].teid)
    {
        LTE_DEBUG_PRINTF("Create Session request: Check info <incompelte>\n");
        hydra_stat_inc(stat_pkts_info_incompelte_1);
        return MP_OK;
    }

    // create s11-mme table entry
    uint64_t action_s11_mme = 0;
    lte_table_s11_mme_t  s11_mme_search_d = {};
    hash_table_index_t s11_mme_index = {};

    memcpy(s11_mme_search_d.imsi, gtpc->imsi, sizeof(lte_imsi_t));
    action_s11_mme |= S11_MMET_UPDATE_IMSI;
    
    s11_mme_search_d.fteid.teid = gtpc->fteid[S11_MME].teid;
    s11_mme_search_d.fteid.ip   = gtpc->fteid[S11_MME].ip;
    action_s11_mme |= S11_MMET_UPDATE_FTEID;
    
#ifdef RELATE_AGING
    s11_mme_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s11_mme |= S11_MMET_UPDATE_AGING;
#endif
    LTE_DEBUG_PRINTF("s11_mme_teid:%x 11_mme_ip: %x \n",s11_mme_search_d.fteid.teid, s11_mme_search_d.fteid.ip);

    rv = create_update_table_by_hash(TABLE_S11_MME, CREATE_TABLE, action_s11_mme, 
    (void *)&s11_mme_search_d, sizeof(lte_table_s11_mme_t), &s11_mme_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: Search MME <Failed>\n");
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        return rv;
    }
    LTE_DEBUG_PRINTF("s11_mme_index: %d \n", s11_mme_index.index);


    // update imsi field or create new one if no exist
    lte_table_imsi_t         imsi_table_d   = {};
    hash_table_index_t          index_imsi  = {};
    uint64_t action_imsi = 0;

    UPDATE_IMSIT_OF(IMSI, imsi_table_d.imsi, gtpc->imsi, sizeof(lte_imsi_t), imsi_table_d, action_imsi);
    UPDATE_IMSIT_OF(IMEI, imsi_table_d.imei, gtpc->imei, sizeof(lte_imei_t), imsi_table_d, action_imsi);
    UPDATE_IMSIT_OF(MSISDN, imsi_table_d.msisdn, gtpc->msisdn, sizeof(lte_msisdn_t), imsi_table_d, action_imsi);

    imsi_table_d.ex_field.msisdn_len = gtpc->msisdn_len;
    action_imsi |= IMSIT_UPDATE_EX_FIELD;

    imsi_table_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    SET_TABLE_INDEX((&(imsi_table_d.pos_s11_mme)), s11_mme_index.index, s11_mme_index.node);
    action_imsi |= IMSIT_UPDATE_POS_S11_MME;

    PRINTF_IMSI(imsi_table_d.imsi);
    
    rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void *)&imsi_table_d, 
    sizeof(lte_table_imsi_t), &index_imsi);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: search Imsi <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }
    
    hydra_stat_inc(stat_pkts_gtpc_create_session_req_related);
    return rv;
}



/* 首先根据s11-sgw的FTEID与上个报文中的s11-mme比较，如果在就建立s11-sgw表 */
mp_code_t lte_s11_gtpc_create_session_response(parse_gtpc_t *gtpc)
{
    /*rv*/
    mp_code_t rv;
    uint8_t bearerid;

    hydra_stat_inc(stat_pkts_gtpc_create_session_rsp);

    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);

    /* 处理create session rsp拒绝报文，不带后面的信息了*/
    if (cvmx_unlikely(REUQEST_ACCEPT != gtpc->cause ))
    {
         LTE_DEBUG_PRINTF("Create Session response: Check Cause <Reject-%d>\n", gtpc->cause );
         hydra_stat_inc(stat_pkts_response_reject);
    }

    if (cvmx_unlikely( 0 == gtpc->fteid[S11_SGW].ip
                    || 0 == gtpc->fteid[S11_SGW].teid
                    || 0 == gtpc->fteid[S1U_SGW].ip
                    || 0 == gtpc->fteid[S1U_SGW].teid
                        ))
    {
        LTE_DEBUG_PRINTF("Create Session response: Check Param Valid <Some fied zero>\n");
        hydra_stat_inc(stat_pkts_info_incompelte_2);
        return MP_OK;
    }



    bearerid = gtpc->bearerid;

    // query s11_mme table with fteid, return s11_mme_cell
    hash_key_t key_s11_mme = {};
    lte_table_s11_mme_t   s11_mme_cell     = {};

    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &key_s11_mme);
    
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_MME), &key_s11_mme, 
                               &s11_mme_cell, sizeof(s11_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S11_MME table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        return rv;
    }
    
    // query IMSI table according to s11_mme->imsi, return imsi_cell
    hash_key_t key_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};
    update_imsi_hash_key(s11_mme_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND == rv)
    {
        // create s11_sgw table entry
        uint64_t action_s11_sgw = 0;
        lte_table_s11_sgw_t s11_sgw_search_d = {};
        hash_table_index_t s11_sgw_index = {};

        s11_sgw_search_d.fteid.ip   =  gtpc->fteid[S11_SGW].ip;
        s11_sgw_search_d.fteid.teid =  gtpc->fteid[S11_SGW].teid;
        action_s11_sgw |= S11_SGWT_UPDATE_FTEID;
        
        memcpy(s11_sgw_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s11_sgw |= S11_SGWT_UPDATE_IMSI;
        
#ifdef RELATE_AGING
        s11_sgw_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s11_sgw |= S11_SGWT_UPDATE_AGING;
#endif
        
        LTE_DEBUG_PRINTF("s11_sgw_teid:%x s11_sgw_ip: %x \n",s11_sgw_search_d.fteid.teid, s11_sgw_search_d.fteid.ip);
        rv = create_update_table_by_hash(TABLE_S11_SGW, CREATE_TABLE, action_s11_sgw, (void *)&s11_sgw_search_d, 
                                         sizeof(lte_table_s11_sgw_t), &s11_sgw_index);
        LTE_DEBUG_PRINTF("s11_sgw_index: %d \n",s11_sgw_index.index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session response: search S11_SGW <Failed>\n");
            hydra_stat_inc(stat_pkts_s11_sgw_table_failed);
            return rv;
        }


        // create s1u_sgw table entry
        uint64_t action_s1u_sgw = 0;
        hash_table_index_t s1u_sgw_index = {};
        lte_table_s1u_t s1u_search_d = {};

        s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_SGW].ip;
        s1u_search_d.fteid.teid =  gtpc->fteid[S1U_SGW].teid;
        action_s1u_sgw |= S1UT_UPDATE_FTEID;

        s1u_search_d.ue_ip   =  gtpc->pdn.pdn_addr;
        action_s1u_sgw |= S1UT_UPDATE_UE_IP;
        
        if (imsi_cell.mask & IMSIT_IMSI_VALID)
        {
            memcpy(s1u_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
            action_s1u_sgw |= S1UT_UPDATE_IMSI;
        }
        if (imsi_cell.mask & IMSIT_IMEI_VALID)
        {
            memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
            action_s1u_sgw |= S1UT_UPDATE_IMEI;
        }
        
        if (imsi_cell.mask & IMSIT_MSISDN_VALID)
        {
            memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
            action_s1u_sgw |= S1UT_UPDATE_MSISDN;
        }
        
        if (imsi_cell.mask & IMSIT_GUTI_VALID)
        {
            memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
            action_s1u_sgw |= S1UT_UPDATE_GUTI;
        }
        // need check tai field validity
        if (imsi_cell.mask & IMSIT_TAI_VALID)
        {
            memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
            action_s1u_sgw |= S1UT_UPDATE_TAI;
        }
        if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
        {
            s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
            action_s1u_sgw |= S1UT_UPDATE_EX_FIELD;
        }        
        
#ifdef RELATE_AGING
        s1u_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1u_sgw |= S1UT_UPDATE_AGING;
#endif
 
#ifdef STAT_TEST
        s1u_search_d.is_create_relate = 1;
        s1u_search_d.b0_relate_gtpu_num = 0;
        s1u_search_d.b1_relate_gtpu_num = 0;
        action_s1u_sgw |= S1UT_UPDATE_CREATE_REALTE;
        action_s1u_sgw |= S1UT_UPDATE_B0_NUM;
        action_s1u_sgw |= S1UT_UPDATE_B1_NUM;
#endif
        rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_sgw, (void *)&s1u_search_d,
                                         sizeof(lte_table_s1u_t), &s1u_sgw_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session response: Search S1U table <Failed>\n");
            hydra_stat_inc(stat_pkts_s1u_table_failed_2);
            return rv;
        }

        // update s1u_sgw and s11_sgw index into imsi table
        uint64_t action_imsi = 0;
        lte_table_imsi_t imsi_search_d = {};
        hash_table_index_t imsi_index = {};

        PRINTF_IMSI(imsi_search_d.imsi);
        memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_imsi |= IMSIT_UPDATE_IMSI;
        
        // PDN
        imsi_search_d.pdn.pdn_addr = gtpc->pdn.pdn_addr;
        action_imsi |= IMSIT_UPDATE_PDN;

        // S11_SGW index
        SET_TABLE_INDEX( (&(imsi_search_d.pos_s11_sgw)), s11_sgw_index.index, s11_sgw_index.node);
        imsi_search_d.pos_s11_sgw.bearerid = bearerid;
        action_imsi |= IMSIT_UPDATE_POS_S11_SGW;

        // s1u_sgw index
        rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_sgw, s1u_sgw_index.index, s1u_sgw_index.node, bearerid);
        if(MP_OK != rv)
        {
            return rv;
        }
        action_imsi |= IMSIT_UPDATE_POS_S1U_SGW;

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;
        

        PRINTF_IMSI(imsi_search_d.imsi);
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                         sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session response: create imsi table <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }

    }
    else
    {
        hydra_stat_inc(stat_pkts_s11_mme_table_incompelte);
        LTE_DEBUG_PRINTF("Create Session response: Search S11_MME <Incompelte>\n");
        return MP_FAIL;
    }
    hydra_stat_inc(stat_pkts_gtpc_create_session_rsp_related);
    return rv;
}


/* 如果sgw的FTEID一致的话，就建立s1u表，还要填充s11-mme,s11-sgw表中的s1-bkt
 * 同时将s1u表的imsi,imei,msisdn填充 */
mp_code_t lte_s11_gtpc_modify_bearer_requst(parse_gtpc_t *gtpc)
{
    uint8_t bearerid ;
    mp_code_t rv = MP_OK;

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_req);

    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);

    if (cvmx_unlikely( 0 == gtpc->fteid[S1U_ENODEB].ip
                    || 0 == gtpc->fteid[S1U_ENODEB].teid))
    {

        hydra_stat_inc(stat_pkts_info_incompelte_3);
        return MP_OK;
    }

    // query s11_sgw table entry with ip and fteid to find imsi
    hash_key_t key_s11_sgw = {};
    lte_table_s11_mme_t   s11_sgw_cell     = {};
    
    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &key_s11_sgw);
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &key_s11_sgw, 
                               &s11_sgw_cell, sizeof(s11_sgw_cell));
    if(MP_CELL_FOUND != rv)
    {
        hydra_stat_inc(stat_pkts_s11_sgw_table_failed);
        LTE_DEBUG_PRINTF("The S11_SGW table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    // query imsi table entry with s11_sgw's imsi
    hash_key_t key_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};
    update_imsi_hash_key(s11_sgw_cell.imsi, &key_imsi);


    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }


    /*
     * 现网中modify Bearer request报文较频繁，
     * 有可能modify bearer报文会改动teid，所以需要重新建表
     * 避免在后面的modify Bearer request报文来的时候查找s11-sgw失败，
     * 同理modify bearer response 报文查找s11-mme 也会失败
     * 此处需要更新s11-sgw和s11-mme表的老化时间，
     */

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                    &(imsi_cell.pos_s11_sgw), g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                    &(imsi_cell.pos_s11_mme), g_aging_timer_max);

    // create s1u_eNB table entry
    uint64_t action_s1u_enodeb = 0;
    lte_table_s1u_t s1u_search_d = {};
    hash_table_index_t s1u_enodeb_index = {};

    s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_ENODEB].ip;
    s1u_search_d.fteid.teid =  gtpc->fteid[S1U_ENODEB].teid;
    action_s1u_enodeb |=  S1UT_UPDATE_FTEID;

    s1u_search_d.ue_ip   =      imsi_cell.pdn.pdn_addr;
    action_s1u_enodeb |= S1UT_UPDATE_UE_IP;
    

    if (imsi_cell.mask & IMSIT_IMSI_VALID)
    {
        memcpy(s1u_search_d.imsi , imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMSI;
    }
    
    if (imsi_cell.mask & IMSIT_IMEI_VALID)
    {
        memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMEI;
    }
    
    if (imsi_cell.mask & IMSIT_MSISDN_VALID)
    {
        memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
        action_s1u_enodeb |= S1UT_UPDATE_MSISDN;
    }
    
    if (imsi_cell.mask & IMSIT_GUTI_VALID)
    {
        memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
        action_s1u_enodeb |= S1UT_UPDATE_GUTI;
    }
    
    if (imsi_cell.mask & IMSIT_TAI_VALID)
    {
        memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
        action_s1u_enodeb |= S1UT_UPDATE_TAI;
    }
    
    if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
    {
        s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
        action_s1u_enodeb |= S1UT_UPDATE_EX_FIELD;
    }
    
#ifdef RELATE_AGING
    s1u_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_enodeb |= S1UT_UPDATE_AGING;
#endif
    
#ifdef STAT_TEST
    s1u_search_d.is_create_relate = 1;
    s1u_search_d.b0_relate_gtpu_num = 0;
    s1u_search_d.b1_relate_gtpu_num = 0;
    action_s1u_enodeb |= S1UT_UPDATE_CREATE_REALTE;
    action_s1u_enodeb |= S1UT_UPDATE_B0_NUM;
    action_s1u_enodeb |= S1UT_UPDATE_B1_NUM;
#endif

    rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_enodeb, 
                                     (void *)&s1u_search_d, sizeof(lte_table_s1u_t), &s1u_enodeb_index);
    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_s1u_table_failed_3);
        return rv;
    }    

    // update s1u_eNB index into imsi table
    uint64_t action_imsi = 0;
    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t imsi_index = {};

    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));

    bearerid = gtpc->bearerid;
    rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_eNB, s1u_enodeb_index.index, 
                                s1u_enodeb_index.node, bearerid);
    if(MP_OK != rv)
    {
        return rv;
    }
    action_imsi |= IMSIT_UPDATE_POS_S1U_ENB;

    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                     sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: update imsi table <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_req_related);
    return MP_OK;
}



/*判断关联是否成功，成功的话，就把s1u表填上imsi,imei,msisdn*/
mp_code_t lte_s11_gtpc_modify_bearer_response(parse_gtpc_t *gtpc)
{
    mp_code_t rv = MP_OK;
    
    uint8_t bearerid = gtpc->bearerid;

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_res);

    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);

    /*check param*/
    if (cvmx_unlikely(REUQEST_ACCEPT != gtpc->cause ))
    {
         hydra_stat_inc(stat_pkts_response_reject);
    }

    if( 0 == gtpc->fteid[S1U_SGW].ip  || 0 == gtpc->fteid[S1U_SGW].teid)
    {

        hydra_stat_inc(stat_pkts_info_incompelte_4);
        return MP_OK;
    }

    // query s11-mme table entry with gtpc->dstip and gtpc->teid
    hash_key_t key_s11_mme = {};
    lte_table_s11_mme_t   s11_mme_cell     = {};
    
    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &key_s11_mme);
    
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_MME), &key_s11_mme, 
                               &s11_mme_cell, sizeof(s11_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        LTE_DEBUG_PRINTF("The S11_MME table search failed ! rv = %d\n", rv);
        return rv;
    }
    
    // check imsi table entry integrity
    hash_key_t key_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};
    update_imsi_hash_key(s11_mme_cell.imsi, &key_imsi);
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }    

    // s1u-sgw exist, then return ;
    if (imsi_cell.mask & IMSIT_POS_S11_SGW_VALID)
    {
        return MP_OK;
    }

    // recheck s1u-sgw table entry
    uint64_t action_s1u_sgw = 0;
    hash_table_index_t s1u_sgw_index = {};
    lte_table_s1u_t s1u_search_d = {};
    
    lte_table_s1u_t s1u_sgw_cell = {};
    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &imsi_cell.pos_s1u_sgw[BEAR_DEFAULT], 
                                (void *)&s1u_sgw_cell, sizeof(lte_table_s1u_t));
    
    s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_SGW].ip;
    s1u_search_d.fteid.teid =  gtpc->fteid[S1U_SGW].teid;
    
    // if no found, then create s1U-sgw table entry
    if (MP_NOT_FOUND == rv)
    {
        
        action_s1u_sgw |= S1UT_UPDATE_FTEID;

        s1u_search_d.ue_ip   =      imsi_cell.pdn.pdn_addr;
        action_s1u_sgw |= S1UT_UPDATE_UE_IP;
        
        if (imsi_cell.mask & IMSIT_IMSI_VALID)
        {
            memcpy(s1u_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
            action_s1u_sgw |= S1UT_UPDATE_IMSI;
        }
        
        if (imsi_cell.mask & IMSIT_IMEI_VALID)
        {
            memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
            action_s1u_sgw |= S1UT_UPDATE_IMEI;
        }
        
        if (imsi_cell.mask & IMSIT_MSISDN_VALID)
        {
            memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
            action_s1u_sgw |= S1UT_UPDATE_MSISDN;
        }
        
        if (imsi_cell.mask & IMSIT_GUTI_VALID)
        {
            memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
            action_s1u_sgw |= S1UT_UPDATE_GUTI;
        }

        if (imsi_cell.mask & IMSIT_TAI_VALID)
        {
            memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
            action_s1u_sgw |= S1UT_UPDATE_TAI;
        }
        
        if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
        {
            s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
            action_s1u_sgw |= S1UT_UPDATE_EX_FIELD;
        }

        
#ifdef RELATE_AGING
        s1u_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1u_sgw |= S1UT_UPDATE_AGING;
#endif

#ifdef STAT_TEST
        s1u_search_d.is_create_relate = 1;
        s1u_search_d.b0_relate_gtpu_num = 0;
        s1u_search_d.b1_relate_gtpu_num = 0;
        action_s1u_sgw |= S1UT_UPDATE_CREATE_REALTE;
        action_s1u_sgw |= S1UT_UPDATE_B0_NUM;
        action_s1u_sgw |= S1UT_UPDATE_B1_NUM;
#endif
        rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_sgw, 
                                         (void *)&s1u_search_d, sizeof(lte_table_s1u_t), &s1u_sgw_index);
        if(MP_OK != rv)
        {
            hydra_stat_inc(stat_pkts_s1u_table_failed_4);
            return rv;
        }

        // update  s1-sgw table index into imsi table
        uint64_t action_imsi = 0;
        lte_table_imsi_t imsi_search_d = {};
        hash_table_index_t imsi_index = {};

        // update imsi table entry mask field, first get mask
        memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        imsi_search_d.mask = imsi_cell.mask;
        
        rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_sgw, s1u_sgw_index.index, s1u_sgw_index.node, bearerid);
        if(MP_OK != rv)
        {
            return rv;
        }
        action_imsi |= IMSIT_UPDATE_POS_S1U_SGW;
        
        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSIT_UPDATE_AGING;

        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                         sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session request: create imsi table <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
    }


    CHECK_UPDATE_S1U_OF_IMSI(s1u_sgw_cell, s1u_search_d, imsi_cell.imsi, action_s1u_sgw);
    CHECK_UPDATE_S1U_OF_IMEI(s1u_sgw_cell, s1u_search_d, imsi_cell.imei, action_s1u_sgw);
    CHECK_UPDATE_S1U_OF_MSISDN(s1u_sgw_cell, s1u_search_d, imsi_cell.msisdn, action_s1u_sgw);
    CHECK_UPDATE_S1U_OF_GUTI(s1u_sgw_cell, s1u_search_d, imsi_cell.guti, action_s1u_sgw);
    CHECK_UPDATE_S1U_OF_TAI(s1u_sgw_cell, s1u_search_d, imsi_cell.tai, action_s1u_sgw);
    CHECK_UPDATE_S1U_OF_EX_FIELD(s1u_sgw_cell, s1u_search_d, imsi_cell.ex_field.msisdn_len, action_s1u_sgw);

    rv = create_update_table_by_hash(TABLE_S1U_SGW, UPDATE_TABLE, action_s1u_sgw, (void *)&s1u_search_d,
                                                sizeof(lte_table_s1u_t), &s1u_sgw_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("modify bearer response: update S1U table <Failed>\n");
        hydra_stat_inc(stat_pkts_s1u_table_failed_2);
        return rv;
    }

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_res_related);
    return MP_OK;
}


mp_code_t lte_s11_gtpc_delete_session_req(parse_gtpc_t *gtpc)
{

    hydra_stat_inc(stat_pkts_gtpc_delete_session_req);
    hydra_stat_inc(stat_pkts_gtpc_delete_session_req_related);
    return MP_OK;
}

/*删除数据隧道
   可能的异常情况：
   如果后续后gtp-u的数据报文来关联，则导致删除会失效，依靠正常老化功能完成删除*/
mp_code_t lte_s11_gtpc_delete_session_rsp(parse_gtpc_t *gtpc)
{
    mp_code_t ret = MP_OK;

    lte_table_s11_mme_t   cell_mme  = {};
    hash_key_t key = {};

    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);

    if (cvmx_unlikely(REUQEST_ACCEPT != gtpc->cause ))
    {
         hydra_stat_inc(stat_pkts_response_reject);
         return MP_OK;
    }
    hydra_stat_inc(stat_pkts_gtpc_delete_session_rsp);

    update_fteid_hash_key( gtpc->dstip, gtpc->teid, &key );

    /* 查询s11-mme表，获取imsi的索引 */
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                &key, (void*)&cell_mme,
                                sizeof(lte_table_s11_mme_t));
    if(MP_CELL_FOUND != ret)
    {
        hydra_stat_inc(stat_pkts_s11_mme_table_incompelte);
        return MP_FAIL;
    }

    /* 设置imsi表计数器值为最小值 */
    update_imsi_hash_key(cell_mme.imsi, &key);
    hash_cell_update_timer_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),
                                   &key, LTE_AGING_TIMER_LOWER_LIMIT);

    hydra_stat_inc(stat_pkts_gtpc_delete_session_rsp_related);
    return MP_OK;
}

mp_code_t lte_s11_gtpc_create_bearer_request(parse_gtpc_t *gtpc)
{
    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);
    
    int32_t rv = MP_E_NONE;

    // query s11-mme with fteid
    hash_key_t key_s11_mme = {};
    lte_table_s11_mme_t   s11_mme_cell     = {};

    hydra_stat_inc(stat_pkts_gtpc_create_bearer_req);
	//key_update and s11_mme_table_d operation
    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &key_s11_mme);
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_MME), &key_s11_mme, 
                               &s11_mme_cell, sizeof(s11_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S11-MME table search failed ! rv = %d\n", rv);
        return rv;
    }    

    
    // query imsi with s11_mme->imsi
    hash_key_t                  key_imsi    = {};
    lte_table_imsi_t            imsi_cell   = {};

    update_imsi_hash_key(s11_mme_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_search_kasme_failed_1);
        return rv;
    }
    
    // create dedicated s1u-sgw table
    
    uint64_t action_s1u_sgw = 0;
    hash_table_index_t s1u_sgw_index = {};
    lte_table_s1u_t s1u_search_d = {};

    s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_SGW].ip;
    s1u_search_d.fteid.teid =  gtpc->fteid[S1U_SGW].teid;
    action_s1u_sgw |= S1UT_UPDATE_FTEID;

    s1u_search_d.ue_ip   =  gtpc->pdn.pdn_addr;
    action_s1u_sgw |= S1UT_UPDATE_UE_IP;

    
    if (imsi_cell.mask & IMSIT_IMSI_VALID)
    {
        memcpy(s1u_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1u_sgw |= S1UT_UPDATE_IMSI;
    }
    
    if (imsi_cell.mask & IMSIT_IMEI_VALID)
    {
        memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
        action_s1u_sgw |= S1UT_UPDATE_IMEI;
    }
    
    if (imsi_cell.mask & IMSIT_MSISDN_VALID)
    {
        memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
        action_s1u_sgw |= S1UT_UPDATE_MSISDN;
    }
    
    if (imsi_cell.mask & IMSIT_GUTI_VALID)
    {
        memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
        action_s1u_sgw |= S1UT_UPDATE_GUTI;
    }

    if (imsi_cell.mask & IMSIT_TAI_VALID)
    {
        memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
        action_s1u_sgw |= S1UT_UPDATE_TAI;
    }
    
    if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
    {
        s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
        action_s1u_sgw |= S1UT_UPDATE_EX_FIELD;
    }
    
#ifdef RELATE_AGING
    s1u_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_sgw |= S1UT_UPDATE_AGING;
#endif

    rv = create_update_table_by_hash(TABLE_S1U_SGW, CREATE_TABLE, action_s1u_sgw, (void *)&s1u_search_d,
                                     sizeof(lte_table_s1u_t), &s1u_sgw_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session response: Search S1U table <Failed>\n");
        hydra_stat_inc(stat_pkts_s1u_table_failed_2);
        return rv;
    }

    // update index into imsi
    uint64_t action_imsi = 0;
    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t imsi_index = {};

    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
    
    rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_sgw, s1u_sgw_index.index, 
                               s1u_sgw_index.node, gtpc->bearerid);
    if(MP_OK != rv)
    {
        return rv;
    }
    action_imsi |= IMSIT_UPDATE_POS_S1U_SGW;

    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                     sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Bearer request: create imsi table <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }
    hydra_stat_inc(stat_pkts_gtpc_create_bearer_req_related);
    return MP_OK;
}


mp_code_t lte_s11_gtpc_create_bearer_response(parse_gtpc_t *gtpc)
{
    CVMX_MP_POINT_CHECK(gtpc, M_S11, LV_ERROR);
    
    int32_t rv = MP_E_NONE;


    // query s11-sgw with fteid
    hash_key_t key_s11_sgw = {};
    lte_table_s11_sgw_t   s11_sgw_cell     = {};

    hydra_stat_inc(stat_pkts_gtpc_create_bearer_rsp);

    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &key_s11_sgw);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &key_s11_sgw, 
                               &s11_sgw_cell, sizeof(s11_sgw_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S11-SGW table search failed ! rv = %d\n", rv);
        return rv;
    }    
    
    // query imsi with s11_sgw->imsi
    hash_key_t                  key_imsi    = {};
    lte_table_imsi_t            imsi_cell   = {};

    update_imsi_hash_key(s11_sgw_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_search_kasme_failed_1);
        return rv;
    }    
    
    // create dedicate s1u-eNB
    uint64_t action_s1u_eNB = 0;
    hash_table_index_t s1u_eNB_index = {};
    lte_table_s1u_t s1u_search_d = {};

    s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_ENODEB].ip;
    s1u_search_d.fteid.teid =  gtpc->fteid[S1U_ENODEB].teid;
    action_s1u_eNB |= S1UT_UPDATE_FTEID;

    s1u_search_d.ue_ip   =  gtpc->pdn.pdn_addr;
    action_s1u_eNB |= S1UT_UPDATE_UE_IP;

    
    if (imsi_cell.mask & IMSIT_IMSI_VALID)
    {
        memcpy(s1u_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1u_eNB |= S1UT_UPDATE_IMSI;
    }
    
    if (imsi_cell.mask & IMSIT_IMEI_VALID)
    {
        memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
        action_s1u_eNB |= S1UT_UPDATE_IMEI;
    }
    
    if (imsi_cell.mask & IMSIT_MSISDN_VALID)
    {
        memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
        action_s1u_eNB |= S1UT_UPDATE_MSISDN;
    }
    
    if (imsi_cell.mask & IMSIT_GUTI_VALID)
    {
        memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
        action_s1u_eNB |= S1UT_UPDATE_GUTI;
    }

    if (imsi_cell.mask & IMSIT_TAI_VALID)
    {
        memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
        action_s1u_eNB |= S1UT_UPDATE_TAI;
    }
    
    if (imsi_cell.mask & IMSIT_EX_FIELD_VALID)
    {
        s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
        action_s1u_eNB |= S1UT_UPDATE_EX_FIELD;
    }
    
#ifdef RELATE_AGING
    s1u_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_eNB |= S1UT_UPDATE_AGING;
#endif

    rv = create_update_table_by_hash(TABLE_S1U_ENB, CREATE_TABLE, action_s1u_eNB, (void *)&s1u_search_d,
                                     sizeof(lte_table_s1u_t), &s1u_eNB_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session response: Search S1U table <Failed>\n");
        hydra_stat_inc(stat_pkts_s1u_table_failed_2);
        return rv;
    }

    // update index into imsi
    uint64_t action_imsi = 0;
    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t imsi_index = {};

    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
    
    rv = lte_update_s1u_bearer(imsi_search_d.pos_s1u_sgw, s1u_eNB_index.index, 
                               s1u_eNB_index.node, gtpc->bearerid);
    if(MP_OK != rv)
    {
        return rv;
    }
    action_imsi |= IMSIT_UPDATE_POS_S1U_ENB;
    
    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d, 
                                     sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: create imsi table <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    hydra_stat_inc(stat_pkts_gtpc_create_bearer_rsp_related);
    return MP_OK;
}



inline bool not_empty_array(uint8_t *src, int len)
{
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);

    int i = 0;
    for( i = 0; i < len; i++ )
    {
        if( 0x00 != *(src+i) )
        {
            return true;
        }
    }
    return false;
}
/******************************************************************************
 * 函数名称    : hash_table_get_s1u_info
 * 功能        : gtpu报文进入后从s1u表获取关联信息
 * 参数        : gtpu: gtpu字段的结构体
 * 说明        : gtpu自带key，查到后需要将关联字段填充进去
 * 返回        : 错误码，关联成功返回MP_OK,其他错误见错误码说明
******************************************************************************/
inline mp_code_t hash_table_get_s1u_info(parse_gtpu_t *gtpu)
{
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_table_t    *table      = LTE_GET_TABLE_PTR(TABLE_S1U);
    hash_bucket_t   *bucket     = NULL;
    hash_cell_t     *src_cell   = NULL;       /* 链表返回的cell节点，需要转为s1u cell*/
    hash_cmp_em_t   cmp_rlt     = HASH_CMP_DIFF;
    uint32_t        hash_result = 0;
    lte_table_s1u_t s1u_cell    = {};         /* 用于cell间哈希比较的临时值 */
    lte_table_s1u_t *s1u_src_cell = NULL;     /* 指向查询到的cell */
    hash_key_t  key = {};

    CVMX_MP_POINT_CHECK(gtpu, M_S11, LV_ERROR);

    s1u_cell.fteid.ip   =  gtpu->ot_dstip ;
    s1u_cell.fteid.teid =  gtpu->teid;

    /* 哈希运算获取桶偏移值 */
    update_fteid_hash_key( gtpu->ot_dstip, gtpu->teid, &key );
    if( MP_OK !=  table->hash(&key, &hash_result) )
    {
        return MP_FUN_PARAM_ERR;
    }
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK(src_cell, M_S11, LV_ERROR);
        CVMX_MP_POINT_CHECK(table->compare, M_S11, LV_ERROR);

        if( MP_OK != table->compare((void *)src_cell->entry,
                                    (void *)&s1u_cell, &cmp_rlt))
        {
            return MP_FAIL;
        }

        if(HASH_CMP_SAME == cmp_rlt)
        {
            s1u_src_cell = (lte_table_s1u_t *)(src_cell->entry);
            /* 给报文打上关联信息，imsi, imei, msisdn */
            if ( cvmx_likely( *((uint64_t*)(s1u_src_cell->imsi)) != 0))
            {
                memcpy(gtpu->imsi , s1u_src_cell->imsi, sizeof(lte_imsi_t));
                gtpu->imsi_en = ENABLE;
            }
            PRINTF_IMSI(gtpu->imsi);
            if ( cvmx_likely( *((uint64_t*)(s1u_src_cell->imei)) != 0))
            {
                memcpy(gtpu->imei , s1u_src_cell->imei, sizeof(lte_imei_t));
                gtpu->imei_en = ENABLE;
            }
            if ( cvmx_likely( *((uint64_t*)(s1u_src_cell->msisdn)) != 0))
            {
                memcpy(gtpu->msisdn, s1u_src_cell->msisdn, sizeof(lte_msisdn_t));
                gtpu->msisdn_en= ENABLE;
            }
            if ( cvmx_likely( not_empty_array(s1u_src_cell->guti, LTE_GUTI_LEN )))
            {
                memcpy(gtpu->guti, s1u_src_cell->guti, sizeof(lte_guti_t));
                gtpu->guti_en= ENABLE;
            }
            PRINTF_GUTI(gtpu->guti);
            if ( cvmx_likely( not_empty_array(s1u_src_cell->tai,LTE_TAI_MAX_LEN )))
            {
                memcpy(gtpu->tai,  s1u_src_cell->tai,  sizeof(lte_tai_t));
                gtpu->tai_en= ENABLE;
            }
            PRINTF_TAI(gtpu->tai);
            gtpu->msisdn_len = s1u_src_cell->ex_field.msisdn_len;

#ifdef STAT_TEST
            if(s1u_src_cell->is_create_relate & RELATE_FULL_CREATE)
            {
                s1u_src_cell->b0_relate_gtpu_num++;
            }
            else
            {
                s1u_src_cell->b1_relate_gtpu_num++;
#ifdef RELATE_AGING
                s1u_src_cell->aging = g_aging_timer_max;
#endif
                LTE_HASH_TABLE_UNLOCK(bucket);

#ifdef CAP_PACKET_VERSION
                int core_num = cvmx_get_core_num();
                //printf("core num[%d]:is_open = %d\n",core_num, pkt_cap[core_num].is_open);
                if(true == pkt_cap[core_num].is_open)
                {
                    pkt_cap[core_num].need_cap = true;
                    pkt_cap[core_num].is_open = false;
                }
#endif

                return MP_EXCEPTION_STAT;
            }
#endif


#ifdef RELATE_AGING
           /* 对于关联上的gtp-u报文,需要更新关联表项计数器值 */
            s1u_src_cell->aging = g_aging_timer_max;
            s1u_src_cell->ex_field.updt_tim = true;
#endif
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_RELATE_SUCCESS;
        }
    }

#ifdef STAT_TEST
    /*没关联上就做下统计*/
    s1u_cell.is_create_relate |= RELATE_NEVER_CREATE;
    s1u_cell.b0_relate_gtpu_num = 0;
    s1u_cell.b1_relate_gtpu_num = 1;
#ifdef RELATE_AGING
    s1u_cell.aging = g_aging_timer_max;
    hash_cell_new(table, bucket, &s1u_cell);
#endif
#endif

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_NOT_FOUND;
}

/******************************************************************************
 * 函数名称    : npcp_gtp_switch_set
 * 描述        : gtp关联控制开关设置
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_gtp_switch_set( uint16_t  ilen, void *idata,
                                       uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}
/******************************************************************************
 * 函数名称    : npcp_relate_get_cell_num
 * 描述        : 索引查表方式下，获取桶子内cell个数
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_relate_get_cell_num( uint16_t  ilen, void *idata,
                                            uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;
    return ret;
}

/******************************************************************************
 * 函数名称    : npcp_relate_get_cell_value
 * 描述        : 索引查表方式下，通过列索引获取桶子内指定cell的值
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_relate_get_cell_value( uint16_t  ilen, void *idata,
                                              uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

/******************************************************************************
 * 函数名称    : npcp_relate_flush_table
 * 描述        : 通过表名作为参数，清除表内容
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_relate_flush_table( uint16_t  ilen, void *idata,
                                           uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}
/******************************************************************************
 * 函数名称    : npcp_show_relate_stat
 * 描述        : 获取LTE关联的统计信息
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_show_relate_stat( uint16_t  ilen, void *idata,
                                         uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;
    return ret;
}

int npcp_relate_rescan( uint16_t  ilen, void *idata,
                                          uint16_t *olen, void *odata)
{
    mp_code_t ret = MP_OK;

    return  ret;
}

/******************************************************************************
 * 函数名称    : npcp_clear_relate_stat
 * 描述        : 清除LTE关联的统计信息
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_clear_relate_stat( uint16_t  ilen, void *idata,
                                          uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

uint8_t asc_to_hex(uint8_t ch)
{
    if( ch >= '0' && ch <= '9')
        ch -= '0';
    else if( ch >= 'A' && ch <= 'Z' )//大写字母
        ch -= 0x37;
    else if( ch >= 'a' && ch <= 'z' )//小写字母
        ch -= 0x57;
    else ch = 0xff;
    return ch;
}
mp_code_t ip_to_string(uint32_t ip, unsigned char *dst )
{
    uint8_t * static_str_ip = NULL;
    struct in_addr st_ip = {0};

    if( NULL == dst )
    {
        return MP_NULL_POINT;
    }

    st_ip.s_addr = ip;
    static_str_ip = (uint8_t *)inet_ntoa(st_ip);
    if( NULL == static_str_ip)
    {
        return MP_NULL_POINT;
    }
    strncpy((char *)dst, (char *)static_str_ip, IP_STR_MAX_LEN);

    return MP_OK;
}
mp_code_t hex_to_string_reverse(uint8_t *src, int len, uint8_t *dst)
{
    int pos    = 0;
    int movlen = 0;
    int i      = 0;
    uint8_t low  = 0;
    uint8_t high = 0;
    if( NULL == dst || NULL == src )
    {
        return MP_NULL_POINT;
    }
    for( i = 0 ; i < len; i++ )
    {
        BIT_LOW_4(low, src[i]);
        BIT_HIGH_4(high, src[i]);

        if( ( (len - 1) == i ) && ( 0xf == high ) )
        {
            movlen = sprintf((char *)(dst + pos), "%x",low);
        }
        else
        {
            movlen = sprintf((char *)(dst + pos), "%x%x",low, high);
        }
        pos += movlen;
    }
    return MP_OK;
}
mp_code_t hex_string_to_array(const uint8_t *src, int slen, uint8_t *dst)
{
    int i = 0;
    int byte_len = 0;
    uint8_t low  = 0;
    uint8_t high = 0;

    if( NULL == dst || NULL == src || slen > 126)
    {
        return MP_NULL_POINT;
    }

    if( (slen % 2) !=  0  ||  *src != '0' ||
        ((*(src+1) != 'x' ) && ( *(src+1) != 'X') ))
    {
        return MP_FAIL;
    }
    src += 2;
    byte_len = strlen((char *)src) / 2;
    for ( i = 0; i < byte_len; i++ )
    {
        high  = asc_to_hex( *(src + 2*i) );
        low = asc_to_hex( *(src + 2*i + 1) );
        *(dst + i) = (high << 4) + low;
    }
    return MP_OK;
}
mp_code_t hex_to_string(uint8_t *src, int len, uint8_t *dst)
{
    int pos    = 0;
    int movlen = 0;
    int i      = 0;
    if( NULL == dst || NULL == src )
    {
        return MP_NULL_POINT;
    }
    for( i = 0 ; i < len; i++ )
    {
        movlen = sprintf((char *)(dst + pos), "%02x", src[i]);
        pos += movlen;
    }
    return MP_OK;
}
extern lte_imsi_t imsi_base;
/******************************************************************************
 * 函数名称    : npcp_show_relate_info
 * 描述        : 根据imsi显示关联总表的全部信息
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_code_t npcp_show_relate_info(lte_imsi_t cb_imsi)
{
   int i = 0;
    mp_code_t rv = MP_OK;


    lte_relate_info_t t_relate_info = {};
    lte_relate_info_t * relate_info = &t_relate_info;


    // query imsi table entry with relate_info->imsi
    lte_table_imsi_t imsi_search_d = {};
    hash_key_t  key_imsi = {};
    
    memcpy(relate_info->imsi, imsi_base, sizeof(lte_imsi_t));
    memcpy(imsi_search_d.imsi, relate_info->imsi, sizeof(lte_imsi_t));
    PRINTF_IMSI(imsi_search_d.imsi);

    update_imsi_hash_key(imsi_search_d.imsi, &key_imsi);
    LTE_DEBUG_PRINTF("key=%lx\n" , key_imsi.data[0]);
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, &imsi_search_d, sizeof(imsi_search_d));
    if(MP_CELL_FOUND == rv)
    {
        PRINTF_IMEI(imsi_search_d.imei);
        memcpy(relate_info->imei, imsi_search_d.imei, sizeof(lte_imei_t));
        memcpy(relate_info->msisdn, imsi_search_d.msisdn, sizeof(lte_msisdn_t));
        relate_info->msisdn_len = imsi_search_d.ex_field.msisdn_len;

        memcpy(relate_info->guti, imsi_search_d.guti, sizeof(lte_guti_t));
        memcpy(relate_info->tai, imsi_search_d.tai, sizeof(lte_tai_t));
        PRINTF_MSISDN(imsi_search_d.msisdn);
    }
    else
    {
        return MP_NOT_FOUND;
    }
    
    // query s11-sgw table entry by imsi->pos_s11_sgw
    lte_table_s11_sgw_t s11_sgw_search_d = {};
    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &imsi_search_d.pos_s11_sgw, 
                                &s11_sgw_search_d, sizeof(s11_sgw_search_d));
    if(MP_CELL_FOUND == rv)
    {
        relate_info->s11_sgw_ip_v4 = s11_sgw_search_d.fteid.ip;
        relate_info->s11_sgw_teid  = s11_sgw_search_d.fteid.teid;
    }
    
    // query s1u-enb table entry
    for (i = 0; i < MAX_NUM_BEARER; ++i)
    {

        if(ENABLE == imsi_search_d.pos_s1u_eNB[i].en)
        {
            lte_table_s1u_t s1u_eNB_search_d = {};
            rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S1U_ENB), &imsi_search_d.pos_s1u_eNB[i], 
                                        &s1u_eNB_search_d, sizeof(s1u_eNB_search_d));
            if(MP_CELL_FOUND == rv)
            {
                relate_info->s1u_enode_ip_v4 = s1u_eNB_search_d.fteid.ip;
                relate_info->s1u_enode_teid = s1u_eNB_search_d.fteid.teid;
                relate_info->ue_ip = s1u_eNB_search_d.ue_ip;
                LTE_DEBUG_PRINTF("The PDN, teid= 0x%x, ip=0x%x\n",
                            relate_info->s1u_enode_teid, relate_info->s1u_enode_ip_v4 );
                break;
            }
        
        }
    }
    
    
    // query s11_mme table entry
    lte_table_s11_mme_t s11_mme_search_d = {};
    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME), &imsi_search_d.pos_s11_mme, 
                                &s11_mme_search_d, sizeof(s11_mme_search_d));
    if(MP_CELL_FOUND == rv)
    {
        relate_info->s11_mme_ip_v4 = s11_mme_search_d.fteid.ip;
        relate_info->s11_mme_teid  = s11_mme_search_d.fteid.teid;
    }
    
    
    // query s1u-sgw table entry
    for (i = 0; i < MAX_NUM_BEARER; ++i)
    {

        if(ENABLE == imsi_search_d.pos_s1u_sgw[i].en)
        {
            lte_table_s1u_t s1u_sgw_search_d = {};
            rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &imsi_search_d.pos_s1u_sgw[i], 
                                        &s1u_sgw_search_d, sizeof(s1u_sgw_search_d));
            if(MP_CELL_FOUND == rv)
            {
                relate_info->s1u_sgw_ip_v4 = s1u_sgw_search_d.fteid.ip;
                relate_info->s1u_sgw_teid = s1u_sgw_search_d.fteid.teid;
                LTE_DEBUG_PRINTF("The PDN, teid= 0x%x, ip=0x%x\n",
                            relate_info->s1u_sgw_ip_v4, relate_info->s1u_sgw_teid);
                break;
            }
        }
    }


    uint8_t str_ip[STR_LOCAL_MAX_LEN]     = {0};
    uint8_t str_imsi[STR_LOCAL_MAX_LEN]   = {0};
    uint8_t str_imei[STR_LOCAL_MAX_LEN]   = {0};
    uint8_t str_msisdn[STR_LOCAL_MAX_LEN] = {0};
    uint8_t str_guti[STR_LOCAL_MAX_LEN]   = {0};
    uint8_t str_tai[STR_LOCAL_MAX_LEN]    = {0};
    hex_to_string_reverse(t_relate_info.imsi, LTE_IMSI_LEN, str_imsi);
    hex_to_string_reverse(t_relate_info.imei, LTE_IMEI_LEN, str_imei);
    hex_to_string_reverse(t_relate_info.msisdn, t_relate_info.msisdn_len, str_msisdn);

    printf("IMSI           : %s\n",str_imsi);
    printf("IMEI           : %s\n",str_imei);
    printf("MSISDN         : %s\n",str_msisdn);

     (ip_to_string(t_relate_info.s11_mme_ip_v4, str_ip));
    printf("MME IP         : %-16s\n",str_ip);
    printf("MME TEID       : 0x%08x\n",t_relate_info.s11_mme_teid);

     (ip_to_string(t_relate_info.s11_sgw_ip_v4, str_ip));
    printf("S11-SGW IP     : %-16s\n",str_ip);
    printf("S11-SGW TEID   : 0x%08x\n",t_relate_info.s11_sgw_teid);

     (ip_to_string(t_relate_info.s1u_enode_ip_v4, str_ip));
    printf("S1U-ENODE IP   : %-16s\n",str_ip);;
    printf("S1U-ENODE TEID : 0x%08x\n",t_relate_info.s1u_enode_teid);

     (ip_to_string(t_relate_info.s1u_sgw_ip_v4, str_ip));
    printf("S1U-SGW IP     : %-16s\n",str_ip);
    printf("S1U-SGW TEID   : 0x%08x\n",t_relate_info.s1u_sgw_teid);

     (ip_to_string(t_relate_info.ue_ip, str_ip));
    printf("UE IP          : %-16s\n",str_ip);

    (hex_to_string(t_relate_info.guti, LTE_GUTI_LEN, str_guti));
    (hex_to_string(t_relate_info.tai, LTE_TAI_MAX_LEN, str_tai));
    printf( "GUTI           : %s\n",str_guti);
    printf( "TAI            : %s\n",str_tai);

    return MP_OK;
}

/******************************************************************************
 * 函数名称    : npcp_clear_relate_by_imsi
 * 描述        : 根据imsi删除单个关联表项
 * 调用        :
 * 被调用      :
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
int npcp_clear_relate_by_imsi( uint16_t  ilen, void *idata,
                                             uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

int npcp_set_lte_aging_time( uint16_t  ilen, void *idata,
                                           uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

int npcp_set_lte_scan_peirod( uint16_t  ilen, void *idata,
                                            uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

int npcp_show_lte_aging_time( uint16_t  ilen, void *idata,
                                            uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

