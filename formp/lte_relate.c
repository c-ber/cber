#include <stdio.h>
#include "lte_relate.h"
//#include "dp_stat.h"
//#include "packet_entry.h"
//#include "se_npcp.h"
//#include "ifgrp-exp.h"
//#include "packet_gre.h"
//#include "ifgrp.h"
//#include "transmit-exp.h"

CVMX_SHARED  hash_bucket_t *lte_tables = NULL;
CVMX_SHARED  hash_table_t   lte_tables_info[TABLE_MAX] = {};
CVMX_SHARED  cvmx_spinlock_t imsi_delete_lock;

//extern CVMX_SHARED uint64_t g_scan_interval;
extern CVMX_SHARED uint64_t g_aging_timer_max;
//extern CVMX_SHARED uint64_t g_max_relate_lifetime;


/***************************imsi************************/
/**********************************************************************************************
  函数名称      : imsi_table_compare
  描述          : imsi table 表项的比较函数
  调用          : 
  被调用        : dataplane_lte_init
                  hash_table_search_update  
  被访问的表    : 
  被修改的表    : 
  输入          : void *src 表项的地址, void* dst,构造的表项 hash_cmp_em_t *cmp比较的结果
  输出          : 无
  返回          : 返回值为MP_NULL_POINT或MP_OK
  其他          : 
**********************************************************************************************/
mp_code_t  imsi_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    int rv= 0;    

    if(NULL == src || NULL == dst || NULL == cmp) 
        return MP_FUN_PARAM_ERR;

    lte_table_imsi_t * sentry = (lte_table_imsi_t *)src;
    lte_table_imsi_t * dentry = (lte_table_imsi_t *)dst;     
    
    rv = memcmp(sentry->imsi, dentry->imsi, sizeof(lte_imsi_t));

    if(0 == rv)   
    {
        *cmp = HASH_CMP_SAME;
    }
    else
    {
        PRINTF_IMSI(sentry->imsi);
        PRINTF_IMSI(dentry->imsi);
        *cmp = HASH_CMP_DIFF;
    }
    
    return MP_OK;
}

/**********************************************************************************************
  函数名称      : imsi_table_hash
  描述          : imsi table 表项的hash 函数
  调用          : 
  被调用        : dataplane_lte_init
                  hash_table_search_update  
  被访问的表    : 
  被修改的表    : 
  输入          : hash_key_t *key,hash 的key值 uint32_t *hash_result hash的结果
  输出          : 无
  返回          : 返回值为MP_NULL_POINT或MP_OK
  其他          : 
**********************************************************************************************/

mp_code_t imsi_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    if(NULL == key || NULL == hash_result)
        return MP_FUN_PARAM_ERR;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}
/**********************************************************************************************
  函数名称      : imsi_table_update
  描述          : imsi table 表项的表项更新函数
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
int havetest = 0;
mp_code_t imsi_table_update(void *table, void *update)
{
    
    lte_table_imsi_t *entry =  (lte_table_imsi_t *)table;
    lte_table_imsi_t *up_d =  (lte_table_imsi_t *)update; 
    
    memcpy(entry->imsi,   up_d->imsi, sizeof(lte_imsi_t));
    memcpy(entry->imei,   up_d->imei, sizeof(lte_imei_t));
    memcpy(entry->msisdn, up_d->msisdn, sizeof(lte_msisdn_t));

    if(havetest == 0)
    {
    memcpy(entry->guti,   up_d->guti, sizeof(lte_guti_t));
    memcpy(entry->tai,    up_d->tai, sizeof(lte_tai_t));
    havetest++;
    }

    entry->ex_field.msisdn_len = up_d->ex_field.msisdn_len;
#ifdef RELATE_AGING
    entry->aging = (uint16_t)g_aging_timer_max;
#endif

    return MP_OK;
}
#ifdef RELATE_AGING
uint16_t imsi_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_imsi_t *entry =  (lte_table_imsi_t *)cell;
    LTE_DEBUG_PRINTF("imsi: aging = %d\n", entry->aging);
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
    if(NULL == key || NULL == hash_result)
        return MP_NULL_POINT;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}
/**********************************************************************************************
  函数名称      : s11_mme_table_update_entry
  描述          : imsi table 表项更新函数
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


mp_code_t s11_mme_table_update_entry(void *table, void *update)
{
    
    lte_table_ctrl_mme_t *entry =  (lte_table_ctrl_mme_t *)table;
    lte_table_ctrl_mme_t *up_d =  (lte_table_ctrl_mme_t *)update; 
    
    entry->fteid.teid = up_d->fteid.teid;
    entry->fteid.ip   = up_d->fteid.ip; 
    entry->pos_imsi.index     = up_d->pos_imsi.index;
    entry->pos_imsi.node       = up_d->pos_imsi.node;
#ifdef RELATE_AGING
    entry->aging = (uint16_t)g_aging_timer_max;
#endif

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
    if(NULL == key || NULL == hash_result)
        return MP_FUN_PARAM_ERR;

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

mp_code_t s11_sgw_table_update_entry(void *table, void *update)
{
    
    lte_table_ctrl_sgw_t *entry =  (lte_table_ctrl_sgw_t *)table;
    lte_table_ctrl_sgw_t *up_d =  (lte_table_ctrl_sgw_t *)update; 
    
    entry->fteid.teid = up_d->fteid.teid;
    entry->fteid.ip   = up_d->fteid.ip; 

 //   entry->pos_imsi.index     = up_d->pos_imsi.index;
//    entry->pos_imsi.node       = up_d->pos_imsi.node; 

    memcpy(&(entry->pos_imsi), &(up_d->pos_imsi), 
                                            sizeof(hash_table_index_t)); 
    memcpy(&(entry->pos_mme), &(up_d->pos_mme), 
                                            sizeof(hash_table_index_t));
#ifdef RELATE_AGING
    entry->aging = (uint16_t)g_aging_timer_max;
#endif

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

mp_code_t s1u_table_update_entry(void *table, void *update)
{
    
    lte_table_s1u_t *entry =  (lte_table_s1u_t *)table;
    lte_table_s1u_t *up_d =  (lte_table_s1u_t *)update; 
    
    entry->fteid.teid = up_d->fteid.teid;
    entry->fteid.ip   = up_d->fteid.ip;
    entry->ue_ip      = up_d->ue_ip;
//    entry->bucket     = up_d->bucket;
//    entry->node       = up_d->node;

    memcpy(entry->imsi,   up_d->imsi, sizeof(lte_imsi_t));
    memcpy(entry->imei,   up_d->imei, sizeof(lte_imei_t));
    memcpy(entry->msisdn, up_d->msisdn, sizeof(lte_msisdn_t));

    memcpy(entry->guti,   up_d->guti, sizeof(lte_guti_t));
    memcpy(entry->tai,    up_d->tai, sizeof(lte_tai_t));

    entry->ex_field.msisdn_len = up_d->ex_field.msisdn_len;
#ifdef RELATE_AGING
    entry->aging = (uint16_t)g_aging_timer_max;
#endif

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


inline void update_fteid_hash_key(uint32_t ip, uint32_t teid, hash_key_t *key)
{
    key->size = 1;
    //大小端的差异在这里要处理 这里就改为小端吧
    //key->data[0] = ((uint64_t)ip<<32) | (uint64_t)(teid);//原大端
    key->data[0] = ((uint64_t)teid<<32) | (uint64_t)(ip);

    return ;
}


inline void update_imsi_hash_key(lte_imsi_t imsi,  hash_key_t *key)
{
    key->size = 1;
    //key->data[0] = (uint64_t)imsi;
    key->data[0] = *(uint64_t*)(( &(imsi[0])));
    return ;
}
/* 数据报文关联 根据TEID和IP匹配关联 */
mp_code_t lte_gtpu_process(parse_gtpu_t *gtpu)
{
    mp_code_t ret;

    hydra_stat_inc(stat_pkts_gtpu);
    ret = hash_table_get_s1u_info(gtpu);
    switch(ret)
    {
        case MP_NOT_FOUND:
            hydra_stat_inc(stat_pkts_s1u_table_incompelte);
            break;
        case MP_OK:
            hydra_stat_inc(stat_pkts_gtpu_related);
            break;
        default:
            hydra_stat_inc(stat_pkts_s1u_table_failed);
            break;
    }
    return MP_OK;
}

mp_code_t lte_gtpc_process(parse_gtpc_t *gtpc)
{

    LTE_DEBUG_PRINTF1("Message Type=%d\n", gtpc->message_type);
    GET_MSG_SWITCH_RETURN(gtpc->message_type);
    mp_code_t rv = MP_OK;


    switch(gtpc->message_type)
    {
        case  GTP_MSG_CREATE_SES_REQ:
            rv =  lte_s11_gtpc_create_session_requset(gtpc);
            break;
            
        case  GTP_MSG_CREATE_SES_RSP:
            rv =  lte_s11_gtpc_create_session_response(gtpc);
            break;  
            
        case  GTP_MSG_MODIFY_BEARER_REQ:
            rv =  lte_s11_gtpc_modify_bearer_requst(gtpc);
            break;

        case  GTP_MSG_MODIFY_BEARER_RSP: 
            rv =  lte_s11_gtpc_modify_bearer_response(gtpc);
            break;
            
        case GTP_MSG_DELETE_SES_REQ:
            rv = lte_s11_gtpc_delete_session_req(gtpc); 
            break;
        case GTP_MSG_DELETE_SES_RSP:
           rv = lte_s11_gtpc_delete_session_rsp(gtpc); 
           break;

        case GTP_MSG_DELETE_BEARER_REQ:
            
        case GTP_MSG_DELETE_BEARER_RSP:
         default:            
            break;
    }

    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_lte_relate_failed);
    }
    
    return MP_OK;
}

/**********************************************************************************************
  函数名称      : lte_relevance_process
  描述          : imsi table 表项hash函数
  调用          : 
  被调用        : dataplane_lte_init
                  hash_table_search_update  
  被访问的表    : 
  被修改的表    : 
  输入          : void *src, void* dst, hash_cmp_em_t *cmp
  输出          : 无
  返回          : 返回码mp_code_t
  其他          : 
**********************************************************************************************/

mp_code_t lte_relevance_process(cvmx_wqe_t *work, mpp_control_st *mpp)
{
    mp_code_t ret = MP_OK;
    prase_protocol_em pro; 

    if( cvmx_unlikely(mpp->pktinfo.result != PARSE_SUCCESS) )
    {
        HYDRA_STAT_INC(stat_business_unknown_gtp_pkt);
        return MP_OK;
    }

    pro = mpp->pktinfo.protocol;
    LTE_DEBUG_PRINTF("lte_relevance_process: pktinfo.protocol = %d \n", pro);

    switch(pro)
    {
        case PARSE_PROTOCOL_GTPCV2:
            ret = lte_gtpc_process(&(mpp->pktinfo.gtpc));
            break;
        case PARSE_PROTOCOL_GTPU:
             ret = lte_gtpu_process(&(mpp->pktinfo.gtpu));
            break;
         default :
            break;
    }
    return ret;
}


/**********************************************************************************************
  函数名称      : dataplane_lte_relate_init
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
mp_code_t dataplane_lte_relate_init()
{   
    /*loop index*/
    int i = 0;
    hash_bucket_t *bucket = NULL; /*hash table ptr*/
    int rv = 0; /*ret*/

    char imsiname[11] = "TABLE_IMSI";
    
    /*create Hash table*/
    //char * P1 = (char *)malloc(88);
    //lte_tables = (hash_bucket_t*)semp_named_shared_memblock_get(LTE_HASH_TABLES);
    lte_tables = (hash_bucket_t*)malloc( sizeof(hash_bucket_t)*LTE_HASH_TABLE_SIZE );

   
    if(NULL == lte_tables)    
    {
        printf("LTE Module Init Failed\n");
        return MP_TABLE_FULL;
    }

    for(i=0; i<GTP_MSG_MAX; i++)
    {
        SET_MSG_SWITCH(i, GTPC_ENABLE);
    }


    memset(lte_tables, 0x00, sizeof(hash_bucket_t)*LTE_HASH_TABLE_SIZE);
    
    for(i=IMSI_TABLE_START; i<IMSI_TABLE_END; i++)
    {
          bucket = lte_tables + i; 
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i - IMSI_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
                 
    }
    lte_tables_info[TABLE_IMSI].first_bucket = lte_tables + IMSI_TABLE_START; 
    lte_tables_info[TABLE_IMSI].max_bucket   = IMSI_TABLE_SIZE;
    lte_tables_info[TABLE_IMSI].compare      = imsi_table_compare;
    lte_tables_info[TABLE_IMSI].hash         = imsi_table_hash;
    lte_tables_info[TABLE_IMSI].update       = imsi_table_update;
//    lte_tables_info[TABLE_IMSI].pool         = CVMX_FPA_LTE_RELATE256_POOL;
    lte_tables_info[TABLE_IMSI].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    memcpy(lte_tables_info[TABLE_IMSI].name ,imsiname, sizeof(imsiname));
#ifdef RELATE_AGING
    lte_tables_info[TABLE_IMSI].set_timer    = imsi_cell_set_timer;
#endif
    
    for(i=S11_MME_TABLE_START; i<S11_MME_TABLE_END; i++)
    {
          bucket = lte_tables + i; 
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i - S11_MME_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }
    
    lte_tables_info[TABLE_S11_MME].first_bucket = lte_tables + S11_MME_TABLE_START;
    lte_tables_info[TABLE_S11_MME].max_bucket   = S11_MME_TABLE_SIZE;
    lte_tables_info[TABLE_S11_MME].compare      = s11_mme_table_compare;
    lte_tables_info[TABLE_S11_MME].hash         = s11_mme_table_hash;
    lte_tables_info[TABLE_S11_MME].update       = s11_mme_table_update_entry;
//    lte_tables_info[TABLE_S11_MME].pool         = CVMX_FPA_LTE_RELATE128_POOL0;
    lte_tables_info[TABLE_S11_MME].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_S11_MME].name, "TABLE_S11_MME");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_S11_MME].set_timer    = s11_mme_cell_set_timer;
#endif
    
    for(i=S11_SGW_TABLE_START; i<S11_SGW_TABLE_END; i++)
    {
          bucket = lte_tables + i; 
          cvmx_spinlock_init(&(bucket->lock));

          bucket->index = i - S11_SGW_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }
    
    lte_tables_info[TABLE_S11_SGW].first_bucket = lte_tables+S11_SGW_TABLE_START; 
    lte_tables_info[TABLE_S11_SGW].max_bucket   = S11_SGW_TABLE_SIZE;
    lte_tables_info[TABLE_S11_SGW].compare      = s11_sgw_table_compare;
    lte_tables_info[TABLE_S11_SGW].hash         = s11_sgw_table_hash;
    lte_tables_info[TABLE_S11_SGW].update       = s11_sgw_table_update_entry;
//    lte_tables_info[TABLE_S11_SGW].pool         = CVMX_FPA_LTE_RELATE128_POOL0;
    lte_tables_info[TABLE_S11_SGW].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_S11_SGW].name, "TABLE_S11_SGW");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_S11_SGW].set_timer =s11_sgw_cell_set_timer;
#endif
    
    for(i=S1_U_TABLE_START; i<S1_U_TABLE_END; i++)
    {
          bucket = lte_tables + i; 
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i -  S1_U_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }
    
    lte_tables_info[TABLE_S1].first_bucket = lte_tables+S1_U_TABLE_START;
    lte_tables_info[TABLE_S1].max_bucket   = S1_U_TABLE_SIZE;
    lte_tables_info[TABLE_S1].compare      = s1u_table_compare;
    lte_tables_info[TABLE_S1].hash         = s1u_table_hash;
    lte_tables_info[TABLE_S1].update       = s1u_table_update_entry;
//    lte_tables_info[TABLE_S1].pool         = CVMX_FPA_LTE_GTPU_POOL;
    lte_tables_info[TABLE_S1].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_S1].name, "TABLE_S1");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_S1].set_timer    = s1u_cell_set_timer;
#endif

    cvmx_spinlock_init(&(imsi_delete_lock));
    
#if 0
    mp_code_t ret;
    parse_pkt_info_t   pktinfo; 
                            
    lte_imsi_t          imsi =  {0x44,0x50,0x14,0x09,0x17,0x02,0x00,0xf8};  /*IMSI*/
    lte_imei_t          imei =  {0x53,0x61,0x20,0x00,0x31,0x16,0x12,0x00};  /*IMEI*/
    lte_msisdn_t        msisdn= {0x18,0x09,0x73,0x21,0x00,0x80};/*phone number*/

    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;
    
    memcpy(pktinfo.gtpc.imsi, imsi, sizeof(lte_imsi_t) ); 
    memcpy(pktinfo.gtpc.imei, imei, sizeof(lte_imei_t) ); 
    memcpy(pktinfo.gtpc.msisdn, msisdn, sizeof(lte_msisdn_t) ); 
    pktinfo.gtpc.fteid[S11_MME].teid = 0xf100800a;
    pktinfo.gtpc.fteid[S11_MME].ip  =  0xac143902;    

    pktinfo.gtpc.message_type = GTP_MSG_CREATE_SES_REQ;
    ret = lte_gtpc_process(&pktinfo.gtpc);
    if( MP_OK != ret )
    {
        printf("step 1 Failed\n");        
    }


    pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
    pktinfo.result   = PARSE_SUCCESS;
    

    pktinfo.gtpc.message_type = GTP_MSG_CREATE_SES_RSP;
    pktinfo.gtpc.fteid[S11_SGW].teid = 0x10016985;
    pktinfo.gtpc.fteid[S11_SGW].ip  = 0xac143687;
    pktinfo.gtpc.dstip = 0xac143902;
    pktinfo.gtpc.teid  = 0xf100800a; 
    pktinfo.gtpc.fteid[S1U_SGW].teid = 0x00017469;
    pktinfo.gtpc.fteid[S1U_SGW].ip  = 0xac143687;
    pktinfo.gtpc.pdn.pdn_addr  = 0x0a2a7bf0;
    pktinfo.gtpc.dstip =0xac143902; 
    pktinfo.gtpc.teid = 0xf100800a; 
    ret = lte_gtpc_process(&pktinfo.gtpc);
    
    if( MP_OK != ret )
    {
        printf("step 2 Failed\n");        
    }


     memset(&pktinfo, 0,  sizeof(pktinfo));
        
     pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
     pktinfo.result   = PARSE_SUCCESS;
   
     pktinfo.gtpc.message_type = GTP_MSG_MODIFY_BEARER_REQ;
     pktinfo.gtpc.fteid[S1U_ENODEB].teid = 0x00000042;
     pktinfo.gtpc.fteid[S1U_ENODEB].ip  = 0xac145619;
     pktinfo.gtpc.dstip = 0xac143687;
     pktinfo.gtpc.teid  = 0x10016985; 

    ret = lte_gtpc_process(&pktinfo.gtpc);

    if( MP_OK != ret )
    {
        printf("step 3 Failed\n");        
    }


     memset(&pktinfo, 0,  sizeof(pktinfo));
     pktinfo.protocol = PARSE_PROTOCOL_GTPU;
     pktinfo.result   = PARSE_SUCCESS;
     
     //pktinfo.gtpu.message_type = GTP_MSG_PDU;
     pktinfo.gtpu.ot_dstip = 0xac145619;
     pktinfo.gtpu.teid  = 0x00000042; 
     pktinfo.gtpu.in_dstip =  0x0a2a7bf0;
     
   
    ret = lte_gtpu_process(&pktinfo.gtpu);

    if( MP_OK != ret )
    {
        printf("step 4 Failed\n");        
    }
    else
    {
        PRINTF_IMSI( (pktinfo.gtpu.imsi));
        PRINTF_IMEI( (pktinfo.gtpu.imei));
        PRINTF_MSISDN((pktinfo.gtpu.msisdn));
    }

    
     memset(&pktinfo, 0,  sizeof(pktinfo));
     pktinfo.protocol = PARSE_PROTOCOL_GTPU;
     pktinfo.result   = PARSE_SUCCESS;
     
   
     //pktinfo.gtpu.message_type = GTP_MSG_PDU;
     pktinfo.gtpu.ot_dstip = 0xac143687;
     
     pktinfo.gtpu.teid  =   0x00017469; 
     pktinfo.gtpu.in_srcip =  0x0a2a7bf0;
     
     ret = lte_gtpu_process(&pktinfo.gtpu);

    if( MP_OK != ret )
    {
        printf("step 5 Failed\n");        
    }else
    {
        PRINTF_IMSI( (pktinfo.gtpu.imsi));
        PRINTF_IMEI( (pktinfo.gtpu.imei));
        PRINTF_MSISDN((pktinfo.gtpu.msisdn)); 
    }

     memset(&pktinfo, 0,  sizeof(pktinfo));
     pktinfo.protocol = PARSE_PROTOCOL_GTPCV2;
     pktinfo.result   = PARSE_SUCCESS;
     
   
     pktinfo.gtpc.message_type = GTP_MSG_DELETE_SES_RSP;
    pktinfo.gtpc.dstip =0xac143902; 
    pktinfo.gtpc.teid = 0xf100800a; 
     pktinfo.gtpc.cause = REUQEST_ACCEPT;
     
    //ret = lte_gtpc_process(&pktinfo.gtpc);

    if( MP_OK != ret )
    {
        printf("step 6 Failed\n");        
    }


#endif
    return MP_OK;
    
}


mp_error_t lte_relate_npcp_init(void)
{
    mp_error_t rv = 0;

//    NPCP_CMD_REGISTER(NPCP_CMD_GTP_SWITCH_SET , npcp_gtp_switch_set);
//    NPCP_CMD_REGISTER(NPCP_CMD_GET_BUCKET_NUM , npcp_relate_get_cell_num);
//    NPCP_CMD_REGISTER(NPCP_CMD_SHOW_TABLE_CELL, npcp_relate_get_cell_value);
//    NPCP_CMD_REGISTER(NPCP_CMD_LTE_FLUSH_TABLE, npcp_relate_flush_table);
//    NPCP_CMD_REGISTER(NPCP_CMD_SHOW_LTE_RELATE_STAT,  npcp_show_relate_stat );
//    NPCP_CMD_REGISTER(NPCP_CMD_CLEAR_LTE_RELATE_STAT, npcp_clear_relate_stat);
//    NPCP_CMD_REGISTER(NPCP_CMD_SHOW_LTE_RELATE_INFO,  npcp_show_relate_info );
//    NPCP_CMD_REGISTER(NPCP_CMD_CLEAR_RELATE_BY_IMSI,  npcp_clear_relate_by_imsi);
//
//    NPCP_CMD_REGISTER(NPCP_CMD_SET_AGING_TIME,npcp_set_lte_aging_time);
//    NPCP_CMD_REGISTER(NPCP_CMD_SHOW_AGING_TIME,npcp_show_lte_aging_time);
//    NPCP_CMD_REGISTER(NPCP_CMD_SET_AGING_SCAN_PERIOD,npcp_set_lte_scan_peirod);
//
//    NPCP_CMD_REGISTER(NPCP_CMD_SHOW_LTE_RELATE_RESCAN,npcp_relate_rescan);
    return MP_E_NONE;
}


