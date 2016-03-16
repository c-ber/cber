/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       lte_relate_s11.c
�����ʽ:     ASCII
����:         chenbin
����:         Nov 16, 2015
��ʷ:
    1.����    :Nov 16, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/

#include "lte_relate_s11.h"



CVMX_SHARED gtpc_switch_t g_msg_module_switch[GTP_MSG_MAX] = {};


/***************************s11-mme************************/
/**********************************************************************************************
  ��������      : s11_mme_table_compare
  ����          : imsi table ����ıȽϺ���
  ����          :
  ������        : dataplane_lte_init
                  hash_table_search_update
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : void *table, void *update
  ���          : ��
  ����          : ����ֵΪMP_OK
  ����          :
**********************************************************************************************/


mp_code_t s11_mme_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{

    if(NULL == src || NULL == dst || NULL == cmp)
        return MP_NULL_POINT;

    lte_table_ctrl_mme_t * sentry = (lte_table_ctrl_mme_t *)src;
    lte_table_ctrl_mme_t * dentry = (lte_table_ctrl_mme_t *)dst;


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
  ��������      : s11_mme_table_hash
  ����          : imsi table �����hash����
  ����          :
  ������        : dataplane_lte_init
                  hash_table_search_update
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : hash_key_t *key, uint32_t *hash_result
  ���          : ��
  ����          : ����ֵΪMP_OK
  ����          :
**********************************************************************************************/


mp_code_t s11_mme_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    if(NULL == key || NULL == hash_result)
        return MP_NULL_POINT;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s11_mme_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_ctrl_mme_t *entry =  (lte_table_ctrl_mme_t *)cell;
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
  ��������      : s11_sgw_table_compare
  ����          : imsi table ������º���
  ����          :
  ������        : dataplane_lte_init
                  hash_table_search_update
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : void *src, void* dst, hash_cmp_em_t *cmp
  ���          : ��
  ����          : ����ֵΪMP_OK
  ����          :
**********************************************************************************************/


/***************************s11-sgw************************/
mp_code_t s11_sgw_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{

    if(NULL == src || NULL == dst || NULL == cmp)
        return MP_FUN_PARAM_ERR;

    lte_table_ctrl_sgw_t * sentry = (lte_table_ctrl_sgw_t *)src;
    lte_table_ctrl_sgw_t * dentry = (lte_table_ctrl_sgw_t *)dst;



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
  ��������      : s11_sgw_table_hash
  ����          : imsi table ����hash����
  ����          :
  ������        : dataplane_lte_init
                  hash_table_search_update
  �����ʵı�    :
  ���޸ĵı�    :
  ����          : void *src, void* dst, hash_cmp_em_t *cmp
  ���          : ��
  ����          : ����ֵΪMP_OK
  ����          :
**********************************************************************************************/

mp_code_t s11_sgw_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    if(NULL == key || NULL == hash_result)
        return MP_FUN_PARAM_ERR;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s11_sgw_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_ctrl_sgw_t *entry =  (lte_table_ctrl_sgw_t *)cell;
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

    if(NULL == src || NULL == dst || NULL == cmp)
        return MP_FUN_PARAM_ERR;

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
    if(NULL == key || NULL == hash_result)
        return MP_FUN_PARAM_ERR;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s1u_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s1u_t *entry =  (lte_table_s1u_t *)cell;
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


inline mp_code_t lte_sgw_update_s1u(const struct list_head  *   node,
                             struct list_head* s1u_node,
                             uint32_t s1u_buck_offset, uint8_t bearerid)
{
    lte_table_ctrl_sgw_t *sgw_e = NULL;
    int i;

    if( cvmx_unlikely(NULL == node || NULL == s1u_node) )
    {
        return MP_FUN_PARAM_ERR;
    }

    if(s1u_buck_offset > MAX_INDEX_V)
    {
        return MP_FUN_PARAM_ERR;
    }

    sgw_e = NODE2ENTRY(node, lte_table_ctrl_sgw_t);
    if( cvmx_unlikely(NULL == sgw_e) )
    {
        return MP_NULL_POINT;
    }

    for(i=0; i<MAX_PDN; i++)
    {
        if(sgw_e->pos_s1u[i].en == ENABLE)
        {
             if(bearerid  == sgw_e->pos_s1u[i].bearerid)
             {
                sgw_e->pos_s1u[i].node  = s1u_node;
                sgw_e->pos_s1u[i].index  = s1u_buck_offset;
                LTE_DEBUG_PRINTF(" sgw_e->pos_s1u[i].index: %d \n", sgw_e->pos_s1u[i].index);
                return MP_OK;
             }
             else
             {
                continue;
             }

        }
        else
        {
             sgw_e->pos_s1u[i].en = ENABLE;
             sgw_e->pos_s1u[i].node  = s1u_node;
             sgw_e->pos_s1u[i].index  = s1u_buck_offset;
             sgw_e->pos_s1u[i].bearerid  = bearerid;
             LTE_DEBUG_PRINTF(" sgw_e->pos_s1u[i].index: %d \n", sgw_e->pos_s1u[i].index);
             return MP_OK;
        }
    }
    hydra_stat_inc(stat_pkts_s1u_pnd_over);
    return MP_FAIL;
}

/* Ϊͬһ���û�����bid������ɿ��еģ�����ռ��
 * ���û�п��еģ�����bid��һ�µĻ������滻�����򷵻ش��󣬹������ɹ� */
inline mp_code_t lte_mme_update_s1u(lte_table_ctrl_mme_t * mme_e,
                             struct list_head* s1u_node,
                             uint32_t s1u_buck_offset, uint8_t bearerid)
{
    int i;

    if (cvmx_unlikely( NULL == mme_e))
    {
        return MP_FUN_PARAM_ERR;
    }

    if(s1u_buck_offset > MAX_INDEX_V)
    {
        return MP_FUN_PARAM_ERR;
    }

    for(i=0; i<MAX_PDN; i++)
    {
        if(mme_e->pos_s1u[i].en == ENABLE)
        {
             if(bearerid  == mme_e->pos_s1u[i].bearerid)
             {
                mme_e->pos_s1u[i].node  = s1u_node;
                mme_e->pos_s1u[i].index  = s1u_buck_offset;
                LTE_DEBUG_PRINTF("mme_e->pos_s1u[i].index: %d \n",mme_e->pos_s1u[i].index);
                return MP_OK;
             }
             else
             {
                continue;
             }
        }
        else
        {
             mme_e->pos_s1u[i].en = ENABLE;
             mme_e->pos_s1u[i].node  = s1u_node;
             mme_e->pos_s1u[i].index  = s1u_buck_offset;
             mme_e->pos_s1u[i].bearerid = bearerid;
             LTE_DEBUG_PRINTF("mme_e->pos_s1u[i].index: %d \n",mme_e->pos_s1u[i].index);
             return MP_OK;
        }
    }
    hydra_stat_inc(stat_pkts_s1u_pnd_over);
    return MP_FAIL;
}
inline mp_code_t lte_mme_delete_s1u(lte_table_ctrl_mme_t*table_mme_e, uint8_t bearerid)
{
    /*delete mme bearer in s1u*/
    int i;
    mp_code_t rv = MP_OK;

    if( cvmx_unlikely(NULL == table_mme_e) )
    {
        return MP_FUN_PARAM_ERR;
    }

    if(bearerid == 0)
    {
        for(i=0; i<MAX_PDN; i++)
        {
            if(ENABLE == table_mme_e->pos_s1u[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_mme_e->pos_s1u[i].index, table_mme_e->pos_s1u[i].node);
                if( MP_OK != rv)
                    return rv;
            }
        }
    }
    else
    {
        for(i=0; i<MAX_PDN; i++)
        {
            if(bearerid == table_mme_e->pos_s1u[i].bearerid
                        && ENABLE == table_mme_e->pos_s1u[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_mme_e->pos_s1u[i].index, table_mme_e->pos_s1u[i].node);
                if( MP_OK != rv)
                    return rv;
                break;
            }
        }
    }
    return rv;
}


inline mp_code_t lte_sgw_delete_s1u(lte_table_ctrl_sgw_t *table_sgw_e,
                                    uint8_t bearerid )
{
    /*delete mme bearer in s1u*/
    int i;
    mp_code_t rv = MP_OK;

    if (cvmx_unlikely( NULL == table_sgw_e))
    {
        return MP_FUN_PARAM_ERR;
    }

    if(bearerid == 0)
    {
        for(i=0; i<MAX_PDN; i++)
        {
            if(ENABLE == table_sgw_e->pos_s1u[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_sgw_e->pos_s1u[i].index, table_sgw_e->pos_s1u[i].node);
                if( MP_OK != rv)
                    return rv;
            }
        }
    }
    else
    {
        for(i=0; i<MAX_PDN; i++)
        {
            if(bearerid == table_sgw_e->pos_s1u[i].bearerid
                        && ENABLE == table_sgw_e->pos_s1u[i].en)
            {
                rv = hash_table_cell_delete(LTE_GET_TABLE_PTR(TABLE_S1U),
                        table_sgw_e->pos_s1u[i].index, table_sgw_e->pos_s1u[i].node);
                if( MP_OK != rv)
                    return rv;
                break;
            }
        }
    }

    return rv;
}

mp_code_t check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf)
{
    uint16_t i = 0;
    uint8_t low  = 0;
    uint8_t high = 0;

    if ( NULL == ie_buf || 0 == ie_len )
    {
        return MP_NULL_POINT;
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
/* ����imsi������ s11-mme�� */
mp_code_t lte_s11_gtpc_create_session_requset(parse_gtpc_t *gtpc)
{
    /*step 1. Imsi*/
    mp_code_t rv = MP_OK;

    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t imsi_index = {};
    lte_table_ctrl_mme_t  s11_mme_search_d = {};
    hash_table_index_t s11_mme_index = {};

    hydra_stat_inc(stat_pkts_gtpc_create_session_req);

    if( cvmx_unlikely(NULL == gtpc) )
    {
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

    uint64_t action_imsi = 0;
    memcpy(imsi_search_d.imsi, gtpc->imsi, sizeof(lte_imsi_t));
    action_imsi |= IMSIT_UPDATE_IMSI;
    memcpy(imsi_search_d.imei, gtpc->imei, sizeof(lte_imei_t));
    action_imsi |= IMSIT_UPDATE_IMEI;
    memcpy(imsi_search_d.msisdn, gtpc->msisdn, sizeof(lte_msisdn_t));
    action_imsi |= IMSIT_UPDATE_MSISDN;
    imsi_search_d.ex_field.msisdn_len = gtpc->msisdn_len;
    action_imsi |= IMSIT_UPDATE_EX_FIELD;
    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSIT_UPDATE_AGING;

    PRINTF_IMSI(imsi_search_d.imsi);

    rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void *)&imsi_search_d, sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: search Imsi <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    uint64_t action_s11_mme = 0;
    SET_TABLE_INDEX( (&(s11_mme_search_d.pos_imsi)), imsi_index.index, imsi_index.node);
    action_s11_mme |= S11_MMET_UPDATE_POS_IMSI;
    s11_mme_search_d.fteid.teid = gtpc->fteid[S11_MME].teid;
    s11_mme_search_d.fteid.ip   = gtpc->fteid[S11_MME].ip;
    action_s11_mme |= S11_MMET_UPDATE_FTEID;
    s11_mme_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s11_mme |= S11_MMET_UPDATE_AGING;
    LTE_DEBUG_PRINTF("s11_mme_teid:%x 11_mme_ip: %x \n",s11_mme_search_d.fteid.teid, s11_mme_search_d.fteid.ip);

    rv = create_update_table_by_hash(TABLE_S11_MME, CREATE_TABLE, action_s11_mme, (void *)&s11_mme_search_d, sizeof(lte_table_ctrl_mme_t), &s11_mme_index);

    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: Search MME <Failed>\n");
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        return rv;
    }
    LTE_DEBUG_PRINTF("s11_mme_index: %d \n", s11_mme_index.index);
    
    hydra_stat_inc(stat_pkts_gtpc_create_session_req_related);
    return rv;
}



/* ���ȸ���s11-sgw��FTEID���ϸ������е�s11-mme�Ƚϣ�����ھͽ���s11-sgw�� */
mp_code_t lte_s11_gtpc_create_session_response(parse_gtpc_t *gtpc)
{
    /*bucket*/
    hash_bucket_t *mme_bucket = NULL, *imsi_bucket = NULL;

    /*list head*/
    struct list_head *mme_list_node = NULL, *imsi_list_node = NULL;
    struct list_head *pos ,*next= NULL;


    /*T imsi*/
    lte_table_imsi_t * table_imsi_e = NULL;
    
    /*T MME*/
    lte_table_ctrl_mme_t *table_mme_e = NULL;
    
    /*rv*/
    mp_code_t rv;
    uint8_t bearerid;

    lte_table_ctrl_mme_t s11_mme_search_d = {};
    hash_table_control_t s11_mme_control = {};

    hydra_stat_inc(stat_pkts_gtpc_create_session_rsp);


    /* ����create session rsp�ܾ����ģ������������Ϣ��*/
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

    update_fteid_hash_key(gtpc->dstip, gtpc->teid, &(s11_mme_control.key));
    s11_mme_search_d.fteid.ip = gtpc->dstip;
    s11_mme_search_d.fteid.teid= gtpc->teid;

    s11_mme_control.d_compare = (void *)&s11_mme_search_d;
    s11_mme_control.d_update  = (void *)&s11_mme_search_d;
    s11_mme_control.compare_enable = ENABLE;
    s11_mme_control.new_enable     = DISABLE;
    s11_mme_control.update_enable  = DISABLE;



    rv = hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_S11_MME), &s11_mme_control);

    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session response: Search Table S11_MME <Failed>\n");
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        return rv;
    }

    mme_bucket = s11_mme_control.bucket;
    mme_list_node = s11_mme_control.node;

    if (cvmx_unlikely( NULL == mme_bucket
        || NULL == mme_list_node ))
    {
        hydra_stat_inc(stat_pkts_s11_mme_entry_unexpect_null);
        LTE_DEBUG_PRINTF("Create Session response: Check S11_MME bucket and node <NULL>\n");
        return MP_NULL_POINT;
    }

    if (cvmx_likely(HASH_CMP_SAME == s11_mme_control.search))
    {

        table_mme_e  = NODE2ENTRY(mme_list_node, lte_table_ctrl_mme_t);
        if( cvmx_unlikely(NULL == table_mme_e) )
        {
            hydra_stat_inc(stat_pkts_s11_mme_entry_unexpect_null);
            return MP_NULL_POINT;
        }

        imsi_bucket = GET_HASH_BUCKET_BY_INDEX
                    (LTE_GET_TABLE_PTR(TABLE_IMSI), table_mme_e->pos_imsi.index)

        if (cvmx_unlikely(NULL == imsi_bucket))
        {
            LTE_DEBUG_PRINTF("Error: invalid imsi node at S11_MME %s.%d\n",
                                                __func__, __LINE__);
            return MP_NULL_POINT;
        }

        LTE_HASH_TABLE_LOCK(imsi_bucket);

        int compare;
        compare = 0;
        imsi_list_node = table_mme_e->pos_imsi.node;

        list_for_each_safe(pos, next, &(imsi_bucket->head))
        {
            
            if(pos  ==  imsi_list_node)
            {
                compare  = 1;
                break;
            }
        }
        if(compare)
        {
            table_imsi_e  = NODE2ENTRY( imsi_list_node, lte_table_imsi_t);
            if (cvmx_unlikely(NULL == table_imsi_e))
            {
                hydra_stat_inc(stat_pkts_imsi_unexpect_free);
                return MP_NULL_POINT;
            }
            table_imsi_e->pos_mme.index = mme_bucket->index;
            table_imsi_e->pos_mme.en =  ENABLE;
            table_imsi_e->pos_mme.bearerid =  bearerid;
            table_imsi_e->pos_mme.node =  mme_list_node;
        }
        else
        {
             LTE_DEBUG_PRINTF("Create Session response: Check IMSI bucket and node <unexpec free>\n");
             LTE_HASH_TABLE_UNLOCK((imsi_bucket));
             hydra_stat_inc(stat_pkts_imsi_unexpect_free);
             return MP_FAIL;
        }
        LTE_HASH_TABLE_UNLOCK((imsi_bucket));


        uint64_t action_s11_sgw = 0;
        lte_table_ctrl_sgw_t s11_sgw_search_d = {};
        hash_table_index_t s11_sgw_index = {};

        s11_sgw_search_d.fteid.ip   =  gtpc->fteid[S11_SGW].ip;
        s11_sgw_search_d.fteid.teid =  gtpc->fteid[S11_SGW].teid;
        action_s11_sgw |= S11_SGWT_UPDATE_FTEID;

        /*update sgw index into mme*/
        memcpy(&(s11_sgw_search_d.pos_mme), &(table_imsi_e->pos_mme),
                                            sizeof(hash_table_index_t));
        action_s11_sgw |= S11_SGWT_UPDATE_POS_MME;

        SET_TABLE_INDEX( (&(s11_sgw_search_d.pos_imsi)),
                            imsi_bucket->index, imsi_list_node);
        action_s11_sgw |= S11_SGWT_UPDATE_POS_IMSI;
        s11_sgw_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s11_sgw |= S11_SGWT_UPDATE_AGING;

        
        LTE_DEBUG_PRINTF("s11_sgw_teid:%x s11_sgw_ip: %x \n",s11_sgw_search_d.fteid.teid, s11_sgw_search_d.fteid.ip);
        rv = create_update_table_by_hash(TABLE_S11_SGW, CREATE_TABLE, action_s11_sgw, (void *)&s11_sgw_search_d, 
                                                        sizeof(lte_table_ctrl_sgw_t), &s11_sgw_index);
        LTE_DEBUG_PRINTF("s11_sgw_index: %d \n",s11_sgw_index.index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session response: search S11_SGW <Failed>\n");
            hydra_stat_inc(stat_pkts_s11_sgw_table_failed);
            return rv;
        }

        table_imsi_e->pos_sgw.index     =  s11_sgw_index.index;
        table_imsi_e->pos_sgw.en      =  ENABLE;
        table_imsi_e->pos_sgw.bearerid  =  bearerid;
        table_imsi_e->pos_sgw.node      =  s11_sgw_index.node;

        /*update sgw index into mme*/
        memcpy(&(table_mme_e->pos_sgw), &(table_imsi_e->pos_sgw),
                                            sizeof(hash_table_index_t));


        uint64_t action_s1u_sgw = 0;
        hash_table_index_t s1u_sgw_index = {};
        lte_table_s1u_t s1u_search_d = {};

        s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_SGW].ip;
        s1u_search_d.fteid.teid =  gtpc->fteid[S1U_SGW].teid;
        action_s1u_sgw |= S1UT_UPDATE_FTEID;

        s1u_search_d.ue_ip   =  gtpc->pdn.pdn_addr;
        action_s1u_sgw |= S1UT_UPDATE_UE_IP;
  

        table_imsi_e->pdn.pdn_addr = gtpc->pdn.pdn_addr;

        memcpy(s1u_search_d.imsi ,   table_imsi_e->imsi, sizeof(lte_imsi_t));
        action_s1u_sgw |= S1UT_UPDATE_IMSI;
        memcpy(s1u_search_d.imei ,   table_imsi_e->imei, sizeof(lte_imei_t));
        action_s1u_sgw |= S1UT_UPDATE_IMEI;
        memcpy(s1u_search_d.msisdn , table_imsi_e->msisdn, sizeof(lte_msisdn_t));
        action_s1u_sgw |= S1UT_UPDATE_MSISDN;
        memcpy(s1u_search_d.guti, table_imsi_e->guti, sizeof(lte_guti_t));
        action_s1u_sgw |= S1UT_UPDATE_GUTI;
        memcpy(s1u_search_d.tai,  table_imsi_e->tai,  sizeof(lte_tai_t));
        action_s1u_sgw |= S1UT_UPDATE_TAI;
        s1u_search_d.ex_field.msisdn_len = table_imsi_e->ex_field.msisdn_len;
        action_s1u_sgw |= S1UT_UPDATE_EX_FIELD;
        s1u_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1u_sgw |= S1UT_UPDATE_AGING;
 
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
        
#ifdef RELATE_AGING
        /* imsi��mme���ڵ�һ����������ʱ���ѽ���,sgw��δ���� */
        table_imsi_e->aging = g_aging_timer_max;/*�Ż���s1u���º�Ҫͬ��imsi�ļ����� */
        table_mme_e->aging  = g_aging_timer_max;/*�Ż���s1u���º�Ҫͬ��mme�ļ����� */
#endif
        
        LTE_DEBUG_PRINTF("s1u_sgw_index: %d \n", s1u_sgw_index.index);
        rv = lte_mme_update_s1u(table_mme_e, s1u_sgw_index.node,
                                s1u_sgw_index.index, bearerid);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Session response: Update S1U_SGW bucket <Failed>\n");
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


/* ���sgw��FTEIDһ�µĻ����ͽ���s1u����Ҫ���s11-mme,s11-sgw���е�s1-bkt
 * ͬʱ��s1u���imsi,imei,msisdn��� */
mp_code_t lte_s11_gtpc_modify_bearer_requst(parse_gtpc_t *gtpc)
{
    /*step 1. Imsi*/
    hash_bucket_t * sgw_bucket = NULL, *imsi_bucket =NULL;


    struct list_head *sgw_list_node = NULL, *imsi_list_node = NULL;
    struct list_head *pos, *next= NULL;

    uint8_t bearerid ;
    mp_code_t rv = MP_OK;

    /*T sgw*/
    lte_table_ctrl_sgw_t * table_sgw_e = NULL;

    /*T IMSI*/
    lte_table_imsi_t * table_imsi_e =NULL;

    /*s11-sgw*/
    lte_table_ctrl_sgw_t s11_sgw_search_d = {};
    hash_table_control_t s11_sgw_control = {};

    /*s1u*/
    uint64_t action_s1u_enodeb = 0;
    lte_table_s1u_t s1u_search_d = {};
    hash_table_index_t s1u_enodeb_index = {};



    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_req);

    if (cvmx_unlikely( 0 == gtpc->fteid[S1U_ENODEB].ip
                    || 0 == gtpc->fteid[S1U_ENODEB].teid))
    {

        hydra_stat_inc(stat_pkts_info_incompelte_3);
        return MP_OK;
    }


    bearerid = gtpc->bearerid;
    update_fteid_hash_key(gtpc->dstip,
                        gtpc->teid,  &(s11_sgw_control.key));

    s11_sgw_search_d.fteid.ip   =  gtpc->dstip;
    s11_sgw_search_d.fteid.teid =  gtpc->teid;

    s11_sgw_control.d_compare =
    s11_sgw_control.d_update = (void *)&s11_sgw_search_d;

    s11_sgw_control.compare_enable = ENABLE;
    s11_sgw_control.new_enable     = DISABLE;
    s11_sgw_control.update_enable  = DISABLE;


    rv = hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                                             &s11_sgw_control);
    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_s11_sgw_table_failed);
        return rv;
    }

    sgw_bucket = s11_sgw_control.bucket;
    sgw_list_node = s11_sgw_control.node;

    if (cvmx_likely(HASH_CMP_SAME == s11_sgw_control.search))
    {

        if (cvmx_unlikely( NULL == sgw_bucket
              || NULL == sgw_list_node ))
        {
            hydra_stat_inc(stat_pkts_s11_sgw_entry_unexpect_null);
                return MP_NULL_POINT;
        }
        table_sgw_e =  NODE2ENTRY(sgw_list_node , lte_table_ctrl_sgw_t);
        if (cvmx_unlikely(NULL == table_sgw_e))
        {
            hydra_stat_inc(stat_pkts_s11_sgw_entry_unexpect_null);
            return MP_NULL_POINT;
        }

        int compare;
        compare = 0;

        imsi_bucket = GET_HASH_BUCKET_BY_INDEX(LTE_GET_TABLE_PTR(TABLE_IMSI),
                                    table_sgw_e->pos_imsi.index);

        imsi_list_node = table_sgw_e->pos_imsi.node;

        LTE_HASH_TABLE_LOCK(imsi_bucket);

        list_for_each_safe(pos, next, &(imsi_bucket->head))
        {
            if(pos == imsi_list_node)
            {
                compare  = 1;
                break;
            }
        }
        if(compare)
        {
              table_imsi_e =  NODE2ENTRY(imsi_list_node , lte_table_imsi_t);
        }
        else
        {
             LTE_HASH_TABLE_UNLOCK(imsi_bucket);
             hydra_stat_inc(stat_pkts_imsi_unexpect_free);
             return MP_FAIL;
        }
        LTE_HASH_TABLE_UNLOCK(imsi_bucket);


        /*step: Create s1u Table*/

        s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_ENODEB].ip;
        s1u_search_d.fteid.teid =  gtpc->fteid[S1U_ENODEB].teid;
        action_s1u_enodeb |=  S1UT_UPDATE_FTEID;

        /*some infomation update for Table s1*/
        //s1u_search_d.node    =  table_sgw_e->node;
        //s1u_search_d.bucket  =  table_sgw_e->bucket;
        s1u_search_d.ue_ip   =      table_imsi_e->pdn.pdn_addr;
        action_s1u_enodeb |= S1UT_UPDATE_UE_IP;
        memcpy(s1u_search_d.imsi , table_imsi_e->imsi, sizeof(lte_imsi_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMSI;
        memcpy(s1u_search_d.imei , table_imsi_e->imei, sizeof(lte_imei_t));
        action_s1u_enodeb |= S1UT_UPDATE_IMEI;
        memcpy(s1u_search_d.msisdn , table_imsi_e->msisdn, sizeof(lte_msisdn_t));
        action_s1u_enodeb |= S1UT_UPDATE_MSISDN;
        memcpy(s1u_search_d.guti, table_imsi_e->guti, sizeof(lte_guti_t));
        action_s1u_enodeb |= S1UT_UPDATE_GUTI;
        memcpy(s1u_search_d.tai,  table_imsi_e->tai,  sizeof(lte_tai_t));
        action_s1u_enodeb |= S1UT_UPDATE_TAI;
        s1u_search_d.ex_field.msisdn_len = table_imsi_e->ex_field.msisdn_len;
        action_s1u_enodeb |= S1UT_UPDATE_EX_FIELD;
        s1u_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1u_enodeb |= S1UT_UPDATE_AGING;
#ifdef STAT_TEST
        s1u_search_d.is_create_relate = 1;
        s1u_search_d.b0_relate_gtpu_num = 0;
        s1u_search_d.b1_relate_gtpu_num = 0;
        action_s1u_enodeb |= S1UT_UPDATE_CREATE_REALTE;
        action_s1u_enodeb |= S1UT_UPDATE_B0_NUM;
        action_s1u_enodeb |= S1UT_UPDATE_B1_NUM;
#endif

        rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_enodeb, (void *)&s1u_search_d, sizeof(lte_table_s1u_t), &s1u_enodeb_index);
        if(MP_OK != rv)
        {
            hydra_stat_inc(stat_pkts_s1u_table_failed_3);
            return rv;
        }
        LTE_DEBUG_PRINTF("s1u_buck_offset:%d \n", s1u_enodeb_index.index);
        rv = lte_sgw_update_s1u(sgw_list_node, s1u_enodeb_index.node,
                        s1u_enodeb_index.index, bearerid);
        if(MP_OK != rv)
        {
            return rv;
        }
    }
    else
    {
         hydra_stat_inc(stat_pkts_s11_sgw_table_incompelte);
         return MP_FAIL;
    }

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_req_related);
    return MP_OK;
}


/*�жϹ����Ƿ�ɹ����ɹ��Ļ����Ͱ�s1u������imsi,imei,msisdn*/
mp_code_t lte_s11_gtpc_modify_bearer_response(parse_gtpc_t *gtpc)
{
    /*step 1. Imsi*/
    hash_bucket_t * mme_bucket = NULL, *imsi_bucket = NULL;

    struct list_head *mme_list_node = NULL, *imsi_list_node = NULL;
    struct list_head *pos, *next= NULL;

    mp_code_t rv = MP_OK;
    /*T sgw*/
    lte_table_ctrl_mme_t * table_mme_e = NULL;

    /*T IMSI*/
    lte_table_imsi_t * table_imsi_e =NULL;

    /*s11-sgw*/
    lte_table_ctrl_mme_t s11_mme_search_d = {};
    hash_table_control_t s11_mme_control = {};

    /*s1u*/
    lte_table_s1u_t s1u_search_d = {};
    hash_table_index_t s1u_index = {};
    uint64_t action_s1u_sgw = 0;
    uint8_t bearerid ;

    hydra_stat_inc(stat_pkts_gtpc_modify_bearer_res);

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


    bearerid = gtpc->bearerid;
    update_fteid_hash_key(gtpc->dstip,
                        gtpc->teid,  &(s11_mme_control.key));

    s11_mme_search_d.fteid.ip   =  gtpc->dstip;
    s11_mme_search_d.fteid.teid =  gtpc->teid;

    s11_mme_control.d_compare =
    s11_mme_control.d_update = (void *)&s11_mme_search_d;

    s11_mme_control.compare_enable = ENABLE;
    s11_mme_control.new_enable     =  DISABLE;
    s11_mme_control.update_enable  = DISABLE;


    rv = hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                                             &s11_mme_control);
    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_s11_mme_table_failed);
        /*When The rv != BCM_E_NONE*/
        return rv;
    }

    mme_bucket =    s11_mme_control.bucket;
    mme_list_node = s11_mme_control.node;

    if (cvmx_unlikely( NULL == mme_bucket
        || NULL == mme_list_node ))
    {
        hydra_stat_inc(stat_pkts_s11_mme_entry_unexpect_null);
        return MP_NULL_POINT;
    }

    if (cvmx_likely(HASH_CMP_SAME == s11_mme_control.search))
    {

        table_mme_e =  NODE2ENTRY(mme_list_node ,lte_table_ctrl_mme_t);
        int compare;
        compare = 0;
        if( cvmx_unlikely(NULL == table_mme_e) )
        {
            hydra_stat_inc(stat_pkts_s11_mme_entry_unexpect_null);
            return MP_NULL_POINT;
        }
        imsi_list_node = table_mme_e->pos_imsi.node;

        imsi_bucket   = GET_HASH_BUCKET_BY_INDEX(LTE_GET_TABLE_PTR(TABLE_IMSI),
                                    table_mme_e->pos_imsi.index);


        LTE_HASH_TABLE_LOCK(imsi_bucket);

        list_for_each_safe(pos, next, &(imsi_bucket->head))
        {
            if(pos == imsi_list_node)
            {
                compare  = 1;
                break;
            }
        }
        if(compare)
        {

            table_imsi_e =  NODE2ENTRY(imsi_list_node ,lte_table_imsi_t);
        }
        else
        {
             LTE_HASH_TABLE_UNLOCK(imsi_bucket);

             return MP_FAIL;
        }
        LTE_HASH_TABLE_UNLOCK(imsi_bucket);

        s1u_search_d.fteid.ip   =  gtpc->fteid[S1U_SGW].ip;
        s1u_search_d.fteid.teid =  gtpc->fteid[S1U_SGW].teid;
        action_s1u_sgw |= S1UT_UPDATE_FTEID;


         /*some infomation update for Table s1*/

        s1u_search_d.ue_ip   =      table_imsi_e->pdn.pdn_addr;
        action_s1u_sgw |= S1UT_UPDATE_UE_IP;
        
        memcpy(s1u_search_d.imsi ,   table_imsi_e->imsi, sizeof(lte_imsi_t));
        action_s1u_sgw |= S1UT_UPDATE_IMSI;
        memcpy(s1u_search_d.imei ,   table_imsi_e->imei, sizeof(lte_imei_t));
        action_s1u_sgw |= S1UT_UPDATE_IMEI;
        memcpy(s1u_search_d.msisdn , table_imsi_e->msisdn, sizeof(lte_msisdn_t));
        action_s1u_sgw |= S1UT_UPDATE_MSISDN;
        memcpy(s1u_search_d.guti, table_imsi_e->guti, sizeof(lte_guti_t));
        action_s1u_sgw |= S1UT_UPDATE_GUTI;
        memcpy(s1u_search_d.tai,  table_imsi_e->tai,  sizeof(lte_tai_t));
        action_s1u_sgw |= S1UT_UPDATE_TAI;
        s1u_search_d.ex_field.msisdn_len = table_imsi_e->ex_field.msisdn_len;
        action_s1u_sgw |= S1UT_UPDATE_EX_FIELD;
        s1u_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1u_sgw |= S1UT_UPDATE_AGING;
#ifdef STAT_TEST
        s1u_search_d.is_create_relate = 1;
        s1u_search_d.b0_relate_gtpu_num = 0;
        s1u_search_d.b1_relate_gtpu_num = 0;
        action_s1u_sgw |= S1UT_UPDATE_CREATE_REALTE;
        action_s1u_sgw |= S1UT_UPDATE_B0_NUM;
        action_s1u_sgw |= S1UT_UPDATE_B1_NUM;
#endif
        rv = create_update_table_by_hash(TABLE_S1U, CREATE_TABLE, action_s1u_sgw, (void *)&s1u_search_d, sizeof(lte_table_s1u_t), &s1u_index);
        if(MP_OK != rv)
        {
            hydra_stat_inc(stat_pkts_s1u_table_failed_4);
            return rv;
        }

        rv = lte_mme_update_s1u(table_mme_e, s1u_index.node,
                            s1u_index.index, bearerid);

        if(MP_OK != rv)
        {
            hydra_stat_inc(stat_pkts_s1u_table_failed_4);
            return rv;
        }

    }
    else
    {
         hydra_stat_inc(stat_pkts_s11_mme_table_incompelte);
         return MP_FAIL;
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

/*ɾ���������
   ���ܵ��쳣�����
   ���������gtp-u�����ݱ���������������ɾ����ʧЧ�����������ϻ��������ɾ��*/
mp_code_t lte_s11_gtpc_delete_session_rsp(parse_gtpc_t *gtpc)
{
    mp_code_t ret = MP_OK;

    lte_table_ctrl_mme_t   cell_mme  = {};
    hash_key_t key = {};

    if(cvmx_unlikely(NULL == gtpc))
    {
        return MP_FUN_PARAM_ERR;
    }

    if (cvmx_unlikely(REUQEST_ACCEPT != gtpc->cause ))
    {
         hydra_stat_inc(stat_pkts_response_reject);
         return MP_OK;
    }
    hydra_stat_inc(stat_pkts_gtpc_delete_session_rsp);

    update_fteid_hash_key( gtpc->dstip, gtpc->teid, &key );

    /* ��ѯs11-mme����ȡimsi������ */
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                &key, (void*)&cell_mme,
                                sizeof(lte_table_ctrl_mme_t));
    if(MP_CELL_FOUND != ret)
    {
        hydra_stat_inc(stat_pkts_s11_mme_table_incompelte);
        return MP_FAIL;
    }

    /* ����������ѯ�ӿڣ���ѯimsi�����¼�����ֵΪ��Сֵ */
    ret = hash_cell_update_timer_by_index(
                                    LTE_GET_TABLE_PTR(TABLE_IMSI),
                                    &(cell_mme.pos_imsi),
                                    LTE_AGING_TIMER_LOWER_LIMIT);
    if( cvmx_unlikely(MP_OK != ret) )
    {
        hydra_stat_inc(stat_pkts_imsi_entry_unexpect_null);
        return MP_NULL_POINT;
    }

    hydra_stat_inc(stat_pkts_gtpc_delete_session_rsp_related);
    return MP_OK;
}


inline bool not_empty_array(uint8_t *src, int len)
{
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
 * ��������    : hash_table_get_s1u_info
 * ����        : gtpu���Ľ�����s1u���ȡ������Ϣ
 * ����        : gtpu: gtpu�ֶεĽṹ��
 * ˵��        : gtpu�Դ�key���鵽����Ҫ�������ֶ�����ȥ
 * ����        : �����룬�����ɹ�����MP_OK,���������������˵��
******************************************************************************/
inline mp_code_t hash_table_get_s1u_info(parse_gtpu_t *gtpu)
{
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_table_t    *table      = LTE_GET_TABLE_PTR(TABLE_S1U);
    hash_bucket_t   *bucket     = NULL;
    hash_cell_t     *src_cell   = NULL;       /* �����ص�cell�ڵ㣬��ҪתΪs1u cell*/
    hash_cmp_em_t   cmp_rlt     = HASH_CMP_DIFF;
    uint32_t        hash_result = 0;
    lte_table_s1u_t s1u_cell    = {};         /* ����cell���ϣ�Ƚϵ���ʱֵ */
    lte_table_s1u_t *s1u_src_cell = NULL;     /* ָ���ѯ����cell */
    hash_key_t  key = {};

    if (cvmx_unlikely( NULL == gtpu ))
    {
        return MP_FUN_PARAM_ERR;
    }

    s1u_cell.fteid.ip   =  gtpu->ot_dstip ;
    s1u_cell.fteid.teid =  gtpu->teid;

    /* ��ϣ�����ȡͰƫ��ֵ */
    update_fteid_hash_key( gtpu->ot_dstip, gtpu->teid, &key );
    if( MP_OK !=  table->hash(&key, &hash_result) )
    {
        return MP_NULL_POINT;
    }
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /*����˫�������Ƚ�cell��key�Ƿ�һ��,��ȷ����*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);

        if(NULL == table->compare)
        {
            return MP_NULL_POINT;
        }

        if( MP_OK != table->compare((void *)src_cell->entry,
                                    (void *)&s1u_cell, &cmp_rlt))
        {
            return MP_NULL_POINT;
        }

        if(HASH_CMP_SAME == cmp_rlt)
        {
            s1u_src_cell = (lte_table_s1u_t *)(src_cell->entry);
            /* �����Ĵ��Ϲ�����Ϣ��imsi, imei, msisdn */
            if ( cvmx_likely( (uint64_t)(gtpu->imsi) != 0))
            {
                memcpy(gtpu->imsi , s1u_src_cell->imsi, sizeof(lte_imsi_t));
                gtpu->imsi_en = ENABLE;
            }
            PRINTF_IMSI(gtpu->imsi);
            if ( cvmx_likely( (uint64_t)(gtpu->imei) != 0))
            {
                memcpy(gtpu->imei , s1u_src_cell->imei, sizeof(lte_imei_t));
                gtpu->imei_en = ENABLE;
            }
            if ( cvmx_likely( (uint64_t)(gtpu->msisdn) != 0))
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
                s1u_src_cell->aging = g_aging_timer_max;
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
           /* ���ڹ����ϵ�gtp-u����,��Ҫ���¹������������ֵ */
            s1u_src_cell->aging = g_aging_timer_max;
            s1u_src_cell->ex_field.updt_tim = true;
#endif
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_RELATE_SUCCESS;
        }
    }

#ifdef STAT_TEST
    /*û�����Ͼ�����ͳ��*/
    s1u_cell.is_create_relate |= RELATE_NEVER_CREATE;
    s1u_cell.b0_relate_gtpu_num = 0;
    s1u_cell.b1_relate_gtpu_num = 1;
    s1u_cell.aging = g_aging_timer_max;
    hash_cell_new(table, bucket, &s1u_cell);
#endif

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_NOT_FOUND;
}

/******************************************************************************
 * ��������    : npcp_gtp_switch_set
 * ����        : gtp�������ƿ�������
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
int npcp_gtp_switch_set( uint16_t  ilen, void *idata,
                                       uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}
/******************************************************************************
 * ��������    : npcp_relate_get_cell_num
 * ����        : �������ʽ�£���ȡͰ����cell����
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
int npcp_relate_get_cell_num( uint16_t  ilen, void *idata,
                                            uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;
    return ret;
}

/******************************************************************************
 * ��������    : npcp_relate_get_cell_value
 * ����        : �������ʽ�£�ͨ����������ȡͰ����ָ��cell��ֵ
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
int npcp_relate_get_cell_value( uint16_t  ilen, void *idata,
                                              uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}

/******************************************************************************
 * ��������    : npcp_relate_flush_table
 * ����        : ͨ��������Ϊ���������������
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
int npcp_relate_flush_table( uint16_t  ilen, void *idata,
                                           uint16_t *olen, void *odata )
{
    mp_code_t ret = MP_OK;

    return ret;
}
/******************************************************************************
 * ��������    : npcp_show_relate_stat
 * ����        : ��ȡLTE������ͳ����Ϣ
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
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
 * ��������    : npcp_clear_relate_stat
 * ����        : ���LTE������ͳ����Ϣ
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
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
    else if( ch >= 'A' && ch <= 'Z' )//��д��ĸ
        ch -= 0x37;
    else if( ch >= 'a' && ch <= 'z' )//Сд��ĸ
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
/******************************************************************************
 * ��������    : npcp_show_relate_info
 * ����        : ����imsi��ʾ�����ܱ��ȫ����Ϣ
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
******************************************************************************/
mp_code_t npcp_show_relate_info(lte_imsi_t cb_imsi)
{
    int i;
    lte_relate_info_t t_relate_info;
    lte_relate_info_t *relate_info = &t_relate_info;
    lte_table_imsi_t     *table_imsi_e= NULL;
    lte_table_ctrl_sgw_t *table_sgw_e = NULL;
    lte_table_ctrl_mme_t* table_mme_e = NULL;
    lte_table_s1u_t *table_s1u  = NULL;
    
    lte_table_imsi_t imsi_search_d = {};
    hash_table_control_t imsi_control = {};

    imsi_control.d_compare = (void *)&imsi_search_d;
    imsi_control.d_update  = (void *)&imsi_search_d;
    imsi_control.compare_enable = ENABLE;
    imsi_control.new_enable    =  DISABLE;
    imsi_control.update_enable =  DISABLE;    
 
    memcpy(relate_info->imsi, cb_imsi, sizeof(lte_imsi_t));
    memcpy(imsi_search_d.imsi,   relate_info->imsi, sizeof(lte_imsi_t));

    PRINTF_IMSI(imsi_search_d.imsi); 
    
    update_imsi_hash_key(imsi_search_d.imsi, &(imsi_control.key));
    LTE_DEBUG_PRINTF1("key=%lx\n" , imsi_control.key.data[0]);
    
    hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_IMSI), &imsi_control);
   
    if(HASH_CMP_DIFF  == imsi_control.search)
    {
        return MP_E_NOT_FOUND;
    }

    table_imsi_e = NODE2ENTRY(imsi_control.node, lte_table_imsi_t);

    PRINTF_IMEI(table_imsi_e->imei);
    memcpy(relate_info->imei, table_imsi_e->imei, sizeof(lte_imei_t));    
    memcpy(relate_info->msisdn, table_imsi_e->msisdn, sizeof(lte_msisdn_t));
    relate_info->msisdn_len = table_imsi_e->ex_field.msisdn_len;
    PRINTF_MSISDN(table_imsi_e->msisdn);

    
    table_sgw_e = (lte_table_ctrl_sgw_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(table_imsi_e->pos_sgw));     


    if(NULL != table_sgw_e )
    {
        relate_info->s11_sgw_ip_v4 = table_sgw_e->fteid.ip;
        relate_info->s11_sgw_teid  = table_sgw_e->fteid.teid;
        for(i=0; i<MAX_PDN; i++)
        {   
             if(ENABLE == table_sgw_e->pos_s1u[i].en)
             {
                    
                    table_s1u = (lte_table_s1u_t*)hash_table_index_to_entry
                        (LTE_GET_TABLE_PTR(TABLE_S1U), &(table_sgw_e->pos_s1u[i]));

                    if( NULL != table_s1u)
                    {
                        relate_info->s1u_enode_ip_v4 = table_s1u->fteid.ip;
                        relate_info->s1u_enode_teid = table_s1u->fteid.teid;                
                        relate_info->ue_ip = table_s1u->ue_ip;
                        LTE_DEBUG_PRINTF1("The %d's PDN, teid= 0x%x, ip=0x%x\n",
                                    i, relate_info->s1u_enode_teid, relate_info->s1u_enode_ip_v4 );                
                            break;
                    }      
             }
        } 

        
    }


    table_mme_e = (lte_table_ctrl_mme_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_MME), &(table_imsi_e->pos_mme));  

    if(NULL != table_mme_e)
    {
        relate_info->s11_mme_ip_v4 = table_mme_e->fteid.ip;
        relate_info->s11_mme_teid  = table_mme_e->fteid.teid;

        //find a new
        for(i=0; i<MAX_PDN; i++)
        {   
             if(ENABLE == table_mme_e->pos_s1u[i].en)
             {
                    table_s1u = (lte_table_s1u_t*)hash_table_index_to_entry
                        (LTE_GET_TABLE_PTR(TABLE_S1U), &(table_mme_e->pos_s1u[i]));

                    if( NULL != table_s1u)
                    {
                        relate_info->s1u_sgw_ip_v4 = table_s1u->fteid.ip;
                        relate_info->s1u_sgw_teid = table_s1u->fteid.teid;                
                        relate_info->ue_ip = table_s1u->ue_ip;
                        LTE_DEBUG_PRINTF1("The %d's PDN, teid= 0x%x, ip=0x%x\n",
                                    i, relate_info->s1u_sgw_teid, relate_info->s1u_sgw_ip_v4 );                  
                        break;
                    }
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
 * ��������    : npcp_clear_relate_by_imsi
 * ����        : ����imsiɾ��������������
 * ����        :
 * ������      :
 * ����        : ilen-�������ݳ���,idata-�������ݿ�
 * ���        : olen-������ݳ���,odata-������ݿ�
 * ����        : �����룬�������붨��
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

