
#include "lte_relate_s6a.h"

void print_buff(uint8_t *buff, int len)
{
#if DMT_DEBUG
    int i;

    if (buff == NULL) {
        printf("Buff is NULL, len %d.\n", len);
        return;
    }

    printf("%s.%d  Buff %p, len %d: \n",__FILE__, __LINE__, buff, len);
    for (i = 0; i < len; i++) {
        if ((i % 16) == 0) {
            printf("  %.3xH:", i);
        }
        if ((i % 16) == 8) {
            printf(" ");
        }
        printf(" %.2x", buff[i] & 0xff);
        if ((i % 16) == 15) {
            printf("\n");
        }
    }
    printf("\n");
#endif
}
mp_code_t s6a_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    uint32_t index = 0;
    index = semp_hash_data64(key->data[0],0xFFFFFFFF);
    *hash_result = index;
    LTE_DEBUG_PRINTF("index = %x\n",*hash_result );
    return MP_OK;
}
mp_code_t get_s6a_node_by_imsi(lte_imsi_t imsi,lte_table_s6a_t *node,uint32_t len)
{
    lte_table_imsi_t imsi_search_d;
    lte_table_s6a_t s6a_search_d ;
    hash_key_t  key = {};
    mp_code_t rv = MP_OK;

    CVMX_MP_POINT_CHECK(node, M_S6A, LV_ERROR);

    memset(&imsi_search_d,0,sizeof(imsi_search_d));
    memset(&s6a_search_d,0,sizeof(s6a_search_d));
    memset(&key,0,sizeof(key));
    PRINTF_IMSI(imsi);
    update_imsi_hash_key(imsi, &key);
    PRINTF_KEY(key);
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&key,&imsi_search_d,sizeof(imsi_search_d));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("not found Ims table node\n");
        return rv;
    }
    PRINTF_BUF(&imsi_search_d.pos_s6a,sizeof(imsi_search_d.pos_s6a));
    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S6A),&imsi_search_d.pos_s6a,&s6a_search_d,sizeof(s6a_search_d));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("not found s6a table node\n");
        return rv;
    }
    if(len < sizeof(s6a_search_d))
    {
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(node,&s6a_search_d,sizeof(s6a_search_d));
    return MP_OK;
    
}
/*
    通过hss ip,mme ip和hop_by_hop获取一个s6a节点
*/
mp_code_t get_s6a_node_by_ip_hbh(ip_hbh_t *indata,lte_table_s6a_t*node)
{
    lte_table_s6a_t s6a_search_d = {};
    hash_key_t  key = {};
    mp_code_t rv = MP_OK;

    CVMX_MP_POINT_CHECK(indata, M_S6A, LV_ERROR);
    CVMX_MP_POINT_CHECK(node,   M_S6A, LV_ERROR);

    memset(&key,0,sizeof(key));
    update_s6a_hash_key(indata,&key);    
    rv  = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S6A),&key,&s6a_search_d,sizeof(s6a_search_d));
    LTE_DEBUG_PRINTF("rv  = %d\n",rv);
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("not found s6a table node");
        return rv;
    }

    memcpy(node,&s6a_search_d,sizeof(lte_table_s6a_t));
    return MP_OK;
    
}
mp_code_t get_kasme_by_imsi(const imsi_rand_info_t *indata,lte_kasme_t *kasme,uint32_t *len)
{
    lte_table_s6a_t s6a_search_d = {};
    mp_code_t rv = MP_OK;
    uint32_t count = 0;
    uint32_t kasme_len = 0;
    lte_imsi_t imsi;

    CVMX_MP_POINT_CHECK(indata, M_S6A, LV_ERROR);
    CVMX_MP_POINT_CHECK(kasme,  M_S6A, LV_ERROR);
    CVMX_MP_POINT_CHECK(len,    M_S6A, LV_ERROR);

    memset(imsi,0,sizeof(imsi));
    memcpy(imsi,indata->imsi,sizeof(imsi));
    PRINTF_IMSI(indata->imsi);
    PRINTF_RAND(indata->rand);
    rv = get_s6a_node_by_imsi(imsi,&s6a_search_d,sizeof(s6a_search_d));
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("not found s6a node by imsi");
        return MP_NOT_FOUND;
    }
    if(s6a_search_d.nas_key.valid_key_num <= 0 )
    {
        LTE_DEBUG_PRINTF("no valid key\n");
        return MP_NOT_FOUND;
    }
    else
    {
        for(count =0;count < s6a_search_d.nas_key.valid_key_num;count++)
        {
            if(!memcmp(indata->rand,s6a_search_d.nas_key.key[count].rand,DMT_RAND_LEN))
            {
                kasme_len = sizeof(s6a_search_d.nas_key.key[count].kasme);
                memcpy(kasme,s6a_search_d.nas_key.key[count].kasme,kasme_len);
                *len = kasme_len;
                return MP_OK;
            }
        }
    }
    return MP_NOT_FOUND;
}
mp_code_t del_s6a_node_by_imsi(lte_imsi_t imsi )
{

    mp_code_t rv = MP_OK;
    hash_key_t  key = {};
    lte_table_imsi_t imsi_cell={};
    if(NULL == imsi)
    {
        return MP_FAIL;
    }
    update_imsi_hash_key(imsi, &key);
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&key,&imsi_cell,sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("not found Ims table node\n");
        return rv;
    }
    rv = hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S6A),\
                                                &imsi_cell.pos_s6a,LTE_AGING_TIMER_LOWER_LIMIT);
    if(rv != MP_OK)
    {
        LTE_DEBUG_PRINTF("set s6a time fail,rv = %d\n",rv);
        return rv;
    }
    return rv;
}
inline mp_code_t update_s6a_hash_key(ip_hbh_t *indata,  hash_key_t *key)
{
    uint8_t *ptr = (uint8_t *)key->data;
    CVMX_MP_POINT_CHECK(indata, M_S6A, LV_ERROR);
    CVMX_MP_POINT_CHECK(key, M_S6A, LV_ERROR);

    IP_TRASNFER_TO_KEY(ptr, indata->hss_ip);
    IP_TRASNFER_TO_KEY(ptr, indata->cn_ip);

    memcpy(ptr, &(indata->hop_by_hop), sizeof(indata->hop_by_hop));
    key->size = 5;
    return MP_OK;
}
int32_t lte_s6a_dmt_auth_request(parse_diameter_t *diameter)
{
    lte_table_s6a_t s6a_search_d = {};
    lte_table_imsi_t imsi_search_d = {};
    hash_table_index_t index;
    uint64_t updata_opt_mask = 0;
    int32_t rv = MP_E_NONE;

    hydra_stat_inc(stat_dmt_auth_request_pkts);
    

    memset(&index,0,sizeof(index));

    if(!((diameter->valid_mask&DMT_HOP_BY_HOP_VALID)
        &&(diameter->valid_mask&DMT_USER_NAME_VALID)
        &&(0 != (diameter->hss_ip.ip.u64[0] || diameter->hss_ip.ip.u64[1]) )
        &&(0 != (diameter->s6a_mme_ip.ip.u64[0] || diameter->s6a_mme_ip.ip.u64[1])) ))
    {
        LTE_DEBUG_PRINTF("diameter auth request: Check info <incompelte>\n");
        hydra_stat_inc(stat_business_dmt_auth_msg_incompelte);
        return MP_E_NONE;
    }
    memcpy(&s6a_search_d.hssip, &diameter->hss_ip, sizeof(ip_comm_t));
    updata_opt_mask |= S6_AT_UPDATE_HSSIP;
    memcpy(&s6a_search_d.mmeip, &diameter->s6a_mme_ip, sizeof(ip_comm_t));
    updata_opt_mask |= S6_AT_UPDATE_MMEIP;
    s6a_search_d.hop_by_hop = diameter->hop_by_hop;
    updata_opt_mask |= S6_AT_UPDATE_HOP_BY_HOP;
    memcpy(s6a_search_d.imsi,diameter->user_name,sizeof(lte_imsi_t));
    updata_opt_mask |= S6_AT_UPDATE_IMSI;
#ifdef RELATE_AGING
    s6a_search_d.aging = (uint16_t)g_aging_timer_max;
    updata_opt_mask |= S6_AT_UPDATE_AGING;
#endif
    rv = create_update_table_by_hash(TABLE_S6A,CREATE_TABLE,\
                                    updata_opt_mask,\
                                    (void *)&s6a_search_d,\
                                    sizeof(s6a_search_d),\
                                    &index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("diameter auth request: search Ts6a <Failed>\n");
        hydra_stat_inc(stat_business_dmt_auth_req_search_s6a_fail);
        return rv;        
    }
    updata_opt_mask = HASH_TAB_UPDTAE_NONE;
    imsi_search_d.pos_s6a = index;
    updata_opt_mask |= IMSI_T_UPDATE_POS_S6A;
    memcpy(imsi_search_d.imsi,diameter->user_name,sizeof(lte_imsi_t));
    updata_opt_mask |= IMSI_T_UPDATE_IMSI;
#ifdef RELATE_AGING
    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    updata_opt_mask |= IMSI_T_UPDATE_AGING;
#endif
    imsi_search_d.mobile_type = MCS_LTE;/*用于标志为4g*/
    updata_opt_mask |= IMSI_T_UPDATE_MOBILE_TYPE;

    rv = create_update_table_by_hash(TABLE_IMSI,CREATE_TABLE,\
                                    updata_opt_mask,\
                                    (void *)&imsi_search_d,\
                                    sizeof(imsi_search_d),\
                                    &index);
     
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("diameter auth request: search Imsi <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;       
    }
    hydra_stat_inc(stat_dmt_auth_request_related_pkts);
    return MP_E_NONE;
}
int32_t lte_s6a_dmt_auth_response(parse_diameter_t *diameter)
{
    lte_table_s6a_t s6a_search_d = {};
    hash_table_index_t index;
    ip_hbh_t data96;
    uint32_t count = 0;
    int32_t rv = MP_E_NONE;
    uint64_t updata_opt_mask = 0;
    
    hydra_stat_inc(stat_dmt_auth_response_pkts);
    

    memset(&data96,0,sizeof(data96));
    memset(&index,0,sizeof(index));

    if(!((diameter->valid_mask&DMT_HOP_BY_HOP_VALID)
        &&(diameter->valid_mask&DMT_KASME_RAND_PAIR_VALID)
        &&(0 != (diameter->hss_ip.ip.u64[0] || diameter->hss_ip.ip.u64[1]))
        &&(0 != (diameter->s6a_mme_ip.ip.u64[0] || diameter->s6a_mme_ip.ip.u64[1]))))
    {
        LTE_DEBUG_PRINTF("diameter auth responsae: Check info <incompelte>\n");
        hydra_stat_inc(stat_business_dmt_auth_msg_incompelte);
        return MP_E_NONE;
    }

    memcpy(&(s6a_search_d.hssip), &(diameter->hss_ip), sizeof(ip_comm_t));
    memcpy(&(s6a_search_d.mmeip), &(diameter->s6a_mme_ip), sizeof(ip_comm_t));
    s6a_search_d.hop_by_hop = diameter->hop_by_hop;
    for(count = 0;count < diameter->valid_kasme_rand_pair_num&&count<MAX_KASME_RAND_PAIR;count++)
    {
        memcpy(s6a_search_d.nas_key.key[count].kasme,diameter->kasme_info[count].kasme,DMT_KASME_LEN);
        memcpy(s6a_search_d.nas_key.key[count].rand,diameter->kasme_info[count].rand,DMT_RAND_LEN);
    }
    s6a_search_d.nas_key.valid_key_num = diameter->valid_kasme_rand_pair_num;
    updata_opt_mask |= S6_AT_UPDATE_NAS_KEY;
    updata_opt_mask |= S6_AT_UPDATE_HSSIP;
    updata_opt_mask |= S6_AT_UPDATE_MMEIP;
    updata_opt_mask |= S6_AT_UPDATE_HOP_BY_HOP;
#ifdef RELATE_AGING
    s6a_search_d.aging = (uint16_t)g_aging_timer_max;
    updata_opt_mask |= S6_AT_UPDATE_AGING;
#endif
    rv = create_update_table_by_hash(TABLE_S6A,UPDATE_TABLE,\
                                    updata_opt_mask,\
                                    (void *)&s6a_search_d,\
                                    sizeof(s6a_search_d),\
                                    &index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("diameter auth request: search Ts6a <Failed>\n");
        hydra_stat_inc(stat_business_dmt_auth_req_search_s6a_fail);
        return rv;        
    }
    hydra_stat_inc(stat_dmt_auth_response_related_pkts);
    return MP_E_NONE;
            
    
}

mp_code_t s6a_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{

    uint8_t *ptr = NULL;
    ptr = (uint8_t *)src;
    print_buff(ptr,16);
    ptr = (uint8_t *)dst;
    print_buff(ptr,16);
    lte_table_s6a_t *sentry = (lte_table_s6a_t *)src;
    lte_table_s6a_t *dentry = (lte_table_s6a_t *)dst;

    if( sentry->hssip.ip.u64[0] == dentry->hssip.ip.u64[0]\
        &&sentry->hssip.ip.u64[1] == dentry->hssip.ip.u64[1]\
        &&sentry->mmeip.ip.u64[0] == dentry->mmeip.ip.u64[0]\
        &&sentry->mmeip.ip.u64[1] == dentry->mmeip.ip.u64[1]\
        &&sentry->hop_by_hop == dentry->hop_by_hop\
    )
    {
        *cmp = HASH_CMP_SAME;
    }
    else
    {
        *cmp = HASH_CMP_DIFF;  
    }
    return MP_OK;
        
}

int dmt_auth_rep_action(void *table, void *update)
{
    uint32_t i = 0;


    lte_table_s6a_t *entry = (lte_table_s6a_t *)table;
    lte_table_s6a_t *up_d =  (lte_table_s6a_t *)update;
    PRINTF_IMSI(entry->imsi);
    for(i=0;i<up_d->nas_key.valid_key_num;i++)
    {
          memcpy(entry->nas_key.key[i].rand,up_d->nas_key.key[i].rand,DMT_RAND_LEN);
          memcpy(entry->nas_key.key[i].kasme,up_d->nas_key.key[i].kasme,DMT_KASME_LEN);
          PRINTF_RAND(entry->nas_key.key[i].rand);
          PRINTF_KASME(entry->nas_key.key[i].kasme);
    }
    entry->nas_key.valid_key_num = up_d->nas_key.valid_key_num;
#ifdef RELATE_AGING
    entry->aging = (uint16_t)g_aging_timer_max;
#endif
    
    return MP_E_NONE;
    
}
#ifdef RELATE_AGING
uint16_t s6a_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s6a_t *entry =  (lte_table_s6a_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S6A, LV_ERROR);

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

