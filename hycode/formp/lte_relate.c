#include <stdio.h>
#include "lte_relate.h"
//#include "dp_stat.h"
//#include "packet_entry.h"
//#include "se_npcp.h"
//#include "ifgrp-exp.h"
//#include "packet_gre.h"
//#include "ifgrp.h"
//#include "transmit-exp.h"
#ifdef CAP_PACKET_VERSION
CVMX_SHARED core_pktcap_t pkt_cap[48] = {};
#endif

CVMX_SHARED  hash_bucket_t *lte_tables = NULL;
CVMX_SHARED  hash_table_t   lte_tables_info[TABLE_MAX] = {};

volatile CVMX_SHARED  bool g_lte_start_flag = false; /* lte模块启动标志 */


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

    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S11, LV_ERROR);

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
    CVMX_MP_POINT_CHECK(key, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S11, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t imsi_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_imsi_t *entry =  (lte_table_imsi_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S11, LV_ERROR);
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



/***************************s1-mme************************/
mp_code_t s1_mme_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S1, LV_ERROR);

    lte_table_s1_mme_enodeb_t * sentry = (lte_table_s1_mme_enodeb_t *)src;
    lte_table_s1_mme_enodeb_t * dentry = (lte_table_s1_mme_enodeb_t *)dst;

    if((0 == sentry->umts_hash_para.reserved) && (0 == dentry->umts_hash_para.reserved))
    {
        if((sentry->umts_hash_para.rnc_m3ua_signal_code == dentry->umts_hash_para.rnc_m3ua_signal_code)
                 && (sentry->umts_hash_para.rnc_sccp_id == dentry->umts_hash_para.rnc_sccp_id))
        {
            *cmp = HASH_CMP_SAME;
        }
        else
        {
             *cmp = HASH_CMP_DIFF;
        }
    }
    else
    {
        if((sentry->lte_hash_para.access_node_ip.ip.u64[0] == dentry->lte_hash_para.access_node_ip.ip.u64[0])
                && (sentry->lte_hash_para.access_node_ip.ip.u64[1] == dentry->lte_hash_para.access_node_ip.ip.u64[1])
                && (sentry->lte_hash_para.access_node_id == dentry->lte_hash_para.access_node_id))
        {
            *cmp = HASH_CMP_SAME;
        }
        else
        {
            *cmp = HASH_CMP_DIFF;
        }
    }

    return MP_OK;
}

mp_code_t s1_mme_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S1, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

#ifdef RELATE_AGING
uint16_t s1_mme_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    lte_table_s1_mme_enodeb_t *entry =  (lte_table_s1_mme_enodeb_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S1, LV_ERROR);
    LTE_DEBUG_PRINTF("s1 mme: aging = %d\n", entry->aging);

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


#ifdef RELATE_AGING
uint16_t cn_info_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    umts_table_sgsn_Iu_info_t *entry =  (umts_table_sgsn_Iu_info_t *)cell;

    CVMX_MP_POINT_CHECK(cell, M_S1, LV_ERROR);
    LTE_DEBUG_PRINTF("cn info: aging = %d\n", entry->aging);

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
/***************************s1-mme end************************/

/***************************S-TMSI************************/
mp_code_t s_tmsi_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S1, LV_ERROR);

    lte_table_s_tmsi_t * sentry = (lte_table_s_tmsi_t *)src;
    lte_table_s_tmsi_t * dentry = (lte_table_s_tmsi_t *)dst;

    int rv= 0;

    rv = memcmp(sentry->s_tmsi, dentry->s_tmsi, sizeof(lte_s_tmsi_t));

    if(0 == rv)
    {
        *cmp = HASH_CMP_SAME;
    }
    else
    {
        PRINTF_S_TMSI(sentry->s_tmsi);
        PRINTF_S_TMSI(dentry->s_tmsi);
        PRINTF_IMSI(sentry->imsi);
        PRINTF_IMSI(dentry->imsi);
        *cmp = HASH_CMP_DIFF;
    }

    return MP_OK;
}

mp_code_t s_tmsi_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S1, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

mp_code_t p_tmsi_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S1, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}


#ifdef RELATE_AGING
uint16_t s_tmsi_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    return value;
    /*
    lte_table_s_tmsi_t *entry =  (lte_table_s_tmsi_t *)cell;
    LTE_DEBUG_PRINTF("s_tmsi: aging = %d\n", entry->aging);
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
    return entry->aging;*/
}
#endif
/***************************S-TMSI end************************/

inline mp_code_t update_fteid_hash_key(ip_comm_t ip, uint32_t teid, hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    ptr = (uint8_t *)key->data;
    IP_TRASNFER_TO_KEY(ptr, ip);
    memcpy(ptr, &teid, sizeof(teid));
    key->size = 3;
    return MP_OK;
}


inline mp_code_t update_imsi_hash_key(lte_imsi_t imsi,  hash_key_t *key)
{
    CVMX_MP_POINT_CHECK(key, M_S11, LV_ERROR);
    key->size = 1;
    key->data[0] = *(uint64_t*)(( &(imsi[0])));
    return MP_OK;
}

inline mp_code_t update_s1_mme_hash_key(ip_comm_t enodeip, uint32_t enode_ueid, hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    ptr = (uint8_t *)key->data;
    IP_TRASNFER_TO_KEY(ptr, enodeip);
    memcpy(ptr, &enode_ueid, sizeof(enode_ueid));
    key->size = 3;

    return MP_OK;
}

inline mp_code_t update_s_tmsi_hash_key(lte_s_tmsi_t s_tmsi, hash_key_t *key)
{
    uint8_t tmp[8] = {0};

    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    memcpy(tmp, s_tmsi, sizeof(lte_s_tmsi_t));
    key->size = 1;
    key->data[0] = *(uint64_t*)(( &(tmp[0])));
    return MP_OK;
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
        case MP_RELATE_SUCCESS:
            hydra_stat_inc(stat_pkts_gtpu_related);
            break;
#ifdef STAT_TEST
        case MP_EXCEPTION_STAT:
            hydra_stat_inc(stat_pkts_gtpu_related_supply);
            break;
#endif
        default:
            hydra_stat_inc(stat_pkts_s1u_table_failed_gtpu);
            break;
    }
    return MP_OK;
}

mp_code_t lte_gtpc_process(parse_gtpc_t *gtpc)
{

    LTE_DEBUG_PRINTF("Message Type=%d\n", gtpc->message_type);
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
        case GTP_MSG_CREATE_BEARER_REQ:
            rv = lte_s11_gtpc_create_bearer_request(gtpc);
            break;

        case GTP_MSG_CREATE_BEARER_RSP:
            rv = lte_s11_gtpc_create_bearer_response(gtpc);
            break;

        case GTP_MSG_DELETE_SES_REQ:
            rv = lte_s11_gtpc_delete_session_req(gtpc);
            break;

        case GTP_MSG_DELETE_BEARER_REQ:
            break;

        case GTP_MSG_DELETE_BEARER_RSP:
            break;
         default:
            break;
    }

    if(MP_OK != rv)
    {
        hydra_stat_inc(stat_pkts_lte_relate_failed);
    }

    return MP_OK;
}

mp_error_t lte_s1ap_relate_process(void *packet_ptr, parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(packet_ptr, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    LTE_DEBUG_PRINTF("Procedure Code=%d\n", s1ap->procecode);
    mp_error_t rv = MP_E_NONE;
    switch(s1ap->procecode)
    {
        case  id_initialUEMessage:
            rv = lte_s1ap_initialUEMessage(s1ap); //parse imsi or old_guti, create imsiT and S1-MME table
            break;
        case  id_InitialContextSetup:
            rv =  lte_s1ap_InitialContextSetup(packet_ptr, s1ap);//parse GUTI , put into imsi table
            break;
        case  id_uplinkNASTransport:
            rv = lte_s1ap_uplinkNASTransport(s1ap); //parse identity response packet,
            break;
        case  id_downlinkNASTransport:
            rv = lte_s1ap_downlinkNASTransport(packet_ptr, s1ap); //parse imsi or old_guti, create imsiT or S1-MME table
            break;
        case id_E_RABSetup:
            rv = lte_s1ap_ERABSetup(s1ap);
            break;
        case id_PathSwitchRequest:
            LTE_DEBUG_PRINTF("s1ap direction :%d\n",s1ap->direction);
            if ( UP_LINK == s1ap->direction ) // PathSwitchRequest that from eNodeB to MME is the initiating message
            {
                rv = lte_s1ap_path_swich_req(s1ap);
            }
            else
            {
                rv = lte_s1ap_path_swich_respone(s1ap); //respone contain PATH SWITCH REQUEST ACKNOWLEDGE or PATH SWITCH REQUEST FAILURE
            }
            break;

        case id_HandoverNotification:
            rv = lte_handover_notify(s1ap); //parse identity response packet,
            break;
        default:
            break;
    }
    //判断是否存在nas pdu
    if(s1ap->nas_exist)
    {
        switch(s1ap->nas.EMM_message_type)
        {
            //detach request
            case EMM_MSG_DETACH_REQUEST:    
                rv = lte_s1ap_nas_detach_req(s1ap);
                break;
            //detach accept
            case EMM_MSG_DETACH_ACCEPT:
                rv = lte_s1ap_nas_detach_accept(s1ap);
                break;
            default:
                break;
        }
    }

    if(MP_E_NONE != rv)
    {
        hydra_stat_inc(stat_pkts_lte_relate_failed);        /*s1ap relate failed*/
    }

    return MP_E_NONE;
}

mp_error_t lte_dmt_relevance_process(parse_diameter_t *diameter)
{
    mp_error_t rv = MP_E_NONE;


    switch(diameter->dmt_type)
    {
        case DMT_REQ_PKT:
        rv = lte_s6a_dmt_auth_request(diameter);
        break;
        case DMT_RES_PKT:
        rv = lte_s6a_dmt_auth_response(diameter);
        break;
        default:
        break;
    }
    return rv;
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
    uint8_t   index = 0;
    mp_code_t ret = MP_OK;
    prase_protocol_em pro;

    CVMX_MP_POINT_CHECK(mpp, M_SYS, LV_ERROR);

    if( cvmx_unlikely(mpp->pktinfo.result != PARSE_SUCCESS) )
    {
        HYDRA_STAT_INC(stat_business_unknown_gtp_pkt);
        return MP_OK;
    }

    pro = mpp->pktinfo.protocol;
    LTE_DEBUG_PRINTF("lte_relevance_process: pktinfo.protocol = %d \n", pro);

    switch(pro)
    {
        case PARSE_PROTOCOL_GTPCV1:
            ret = lte_gtpv1c_process(&(mpp->pktinfo.gtpv1c));
            break;
        case PARSE_PROTOCOL_GTPCV2:
            ret = lte_gtpc_process(&(mpp->pktinfo.gtpc));
            break;
        case PARSE_PROTOCOL_GTPU:
             ret = lte_gtpu_process(&(mpp->pktinfo.gtpu));
            break;
        case PARSE_PROTOCOL_S1AP:
            ret = lte_s1ap_relate_process(mpp->packet, &(mpp->pktinfo.s1ap));
            break;
        case PARSE_PROTOCOL_DIAMETER:
            ret = lte_dmt_relevance_process(&(mpp->pktinfo.diameter));
            break;
        case PARSE_PROTOCOL_IUPS:
            /* 一条sctp报文里面可能含有多个data chunk，而每个data chunk都会是不同的IuPS
               消息，因此需要根据解析结果进行循环处理,且不判断返回值 */
            for (index = 0; index < mpp->pktinfo.IuPS_msg_num; index++)
            {
                (void)umts_IuPS_relevance_process(&(mpp->pktinfo.IuPS_info[index]));
            }
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


    /*create Hash table*/
    //char * P1 = (char *)malloc(88);
    //lte_tables = (hash_bucket_t*)semp_named_shared_memblock_get(LTE_HASH_TABLES);
    lte_tables = (hash_bucket_t*)malloc( sizeof(hash_bucket_t)*LTE_TABLE_SIZE_TOTAL );


    if(NULL == lte_tables)
    {
        printf("LTE Module Init Failed\n");
        return MP_TABLE_FULL;
    }



    memset(lte_tables, 0x00, sizeof(hash_bucket_t)*LTE_TABLE_SIZE_TOTAL);

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
    lte_tables_info[TABLE_IMSI].update       = update_imsi_table;
    //lte_tables_info[TABLE_IMSI].pool         = CVMX_FPA_LTE_RELATE256_POOL;
    lte_tables_info[TABLE_IMSI].cell_size    = HASH_ENTRY_VALID_SIZE_256;
    strcpy(lte_tables_info[TABLE_IMSI].name, "TABLE_IMSI");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_IMSI].set_timer    = imsi_cell_set_timer;
#endif

    for(i=S11_MME_TABLE_START; i<S11_MME_TABLE_END+S11_SGW_TABLE_SIZE; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i - S11_MME_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_GTP_C].first_bucket = lte_tables + S11_MME_TABLE_START;
    lte_tables_info[TABLE_GTP_C].max_bucket   = S11_MME_TABLE_SIZE + S11_SGW_TABLE_SIZE;
    lte_tables_info[TABLE_GTP_C].compare      = s11_mme_table_compare;
    lte_tables_info[TABLE_GTP_C].hash         = s11_mme_table_hash;
    lte_tables_info[TABLE_GTP_C].update       = update_gtpc_table;
//    lte_tables_info[TABLE_S11_MME].pool         = CVMX_FPA_LTE_RELATE128_POOL0;
    lte_tables_info[TABLE_GTP_C].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_GTP_C].name, "TABLE_GTP_C");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_GTP_C].set_timer    = s11_mme_cell_set_timer;
#endif

   /* for(i=S11_SGW_TABLE_START; i<S11_SGW_TABLE_END; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));

          bucket->index = i - S11_SGW_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_GTP_C].first_bucket = lte_tables+S11_SGW_TABLE_START;
    lte_tables_info[TABLE_GTP_C].max_bucket   = S11_SGW_TABLE_SIZE;
    lte_tables_info[TABLE_GTP_C].compare      = s11_sgw_table_compare;
    lte_tables_info[TABLE_GTP_C].hash         = s11_sgw_table_hash;
    lte_tables_info[TABLE_GTP_C].update       = update_s11_sgw_table;
//    lte_tables_info[TABLE_GTP_C].pool         = CVMX_FPA_LTE_RELATE128_POOL0;
    lte_tables_info[TABLE_GTP_C].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_GTP_C].name, "TABLE_GTP_C");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_GTP_C].set_timer =s11_sgw_cell_set_timer;
#endif
    */
    for(i=S1_U_TABLE_START; i<S1_U_TABLE_END; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i -  S1_U_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_GTP_U].first_bucket = lte_tables+S1_U_TABLE_START;
    lte_tables_info[TABLE_GTP_U].max_bucket   = S1_U_TABLE_SIZE;
    lte_tables_info[TABLE_GTP_U].compare      = s1u_table_compare;
    lte_tables_info[TABLE_GTP_U].hash         = s1u_table_hash;
    lte_tables_info[TABLE_GTP_U].update       = update_s1u_table;
//    lte_tables_info[TABLE_GTP_U].pool         = CVMX_FPA_LTE_GTPU_POOL;
    lte_tables_info[TABLE_GTP_U].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(lte_tables_info[TABLE_GTP_U].name, "TABLE_GTP_U");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_GTP_U].set_timer    = s1u_cell_set_timer;
#endif

#define V14
#ifdef V14

    for(i=S6A_TABLE_START; i<S6A_TABLE_END; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i -  S6A_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_S6A].first_bucket = lte_tables+S6A_TABLE_START;
    lte_tables_info[TABLE_S6A].max_bucket =  S6A_TABLE_SIZE;
    lte_tables_info[TABLE_S6A].compare = s6a_table_compare;
    lte_tables_info[TABLE_S6A].hash    = s6a_table_hash;
    lte_tables_info[TABLE_S6A].update  = update_s6a_table;
//    lte_tables_info[TABLE_S6A].pool =  CVMX_FPA_LTE_RELATE256_POOL;
    lte_tables_info[TABLE_S6A].cell_size = HASH_ENTRY_VALID_SIZE_256;
    strcpy(lte_tables_info[TABLE_S6A].name, "TABLE_S6A");
#ifdef RELATE_AGING
    lte_tables_info[TABLE_S6A].set_timer =s6a_cell_set_timer;
#endif




#endif


    /* S1-MME table */
    for(i=S1_MME_ENOB_TABLE_START; i<S1_MME_ENOB_TABLE_END; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i -  S1_MME_ENOB_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_AN_INFO].first_bucket = lte_tables + S1_MME_ENOB_TABLE_START;
    lte_tables_info[TABLE_AN_INFO].max_bucket   = S1_MME_ENOB_TABLE_SIZE;
    lte_tables_info[TABLE_AN_INFO].compare      = s1_mme_table_compare;
    lte_tables_info[TABLE_AN_INFO].hash         = s1_mme_table_hash;
    lte_tables_info[TABLE_AN_INFO].update       = update_s1_mme_table;
//    lte_tables_info[TABLE_AN_INFO].pool         = CVMX_FPA_UMTS_RELATE256_POOL;
    strcpy(lte_tables_info[TABLE_AN_INFO].name, "TABLE_S1_ENODEB_MME");
    lte_tables_info[TABLE_AN_INFO].cell_size    = HASH_ENTRY_VALID_SIZE_256;
#ifdef RELATE_AGING
    lte_tables_info[TABLE_AN_INFO].set_timer =s1_mme_cell_set_timer;
#endif


    /* S-TMSI table */
    for(i=S1_STMSI_ENOB_TABLE_START; i<S1_STMSI_ENOB_TABLE_END; i++)
    {
          bucket = lte_tables + i;
          cvmx_spinlock_init(&(bucket->lock));
          bucket->index = i -  S1_STMSI_ENOB_TABLE_START;
          INIT_LIST_HEAD(&bucket->head);
    }

    lte_tables_info[TABLE_S_TMSI].first_bucket  = lte_tables + S1_STMSI_ENOB_TABLE_START;
    lte_tables_info[TABLE_S_TMSI].max_bucket    = S1_STMSI_ENOB_TABLE_SIZE;
    lte_tables_info[TABLE_S_TMSI].compare       = s_tmsi_table_compare;
    lte_tables_info[TABLE_S_TMSI].hash          = s_tmsi_table_hash;
    lte_tables_info[TABLE_S_TMSI].update        = update_s_tmsi_table;
//    lte_tables_info[TABLE_S_TMSI].pool          = CVMX_FPA_LTE_RELATE128_POOL1;
    strcpy(lte_tables_info[TABLE_S_TMSI].name, "TABLE_S_TIMSI");
    lte_tables_info[TABLE_S_TMSI].cell_size     = HASH_ENTRY_VALID_SIZE_128;
#ifdef RELATE_AGING
    lte_tables_info[TABLE_S_TMSI].set_timer     =s_tmsi_cell_set_timer;
#endif
    //ENB_MME_HANDLE_TABLE
    for(i = ENB_MME_HANDLE_TABLE_START;i<ENB_MME_HANDLE_TABLE_END;i++)
    {
        bucket = lte_tables + i;
        cvmx_spinlock_init(&(bucket->lock));
        bucket->index = i -  ENB_MME_HANDLE_TABLE_START;
        INIT_LIST_HEAD(&bucket->head);
    }
    lte_tables_info[TABLE_CN_INFO].first_bucket = lte_tables + ENB_MME_HANDLE_TABLE_START;
    lte_tables_info[TABLE_CN_INFO].max_bucket   = ENB_MME_HANDLE_TABLE_SIZE;
    lte_tables_info[TABLE_CN_INFO].compare      = enodeb_mme_handle_table_compare;
    lte_tables_info[TABLE_CN_INFO].hash         = enodeb_mme_handle_table_hash;
    lte_tables_info[TABLE_CN_INFO].update       = update_enodeb_mme_handle_table;
//    lte_tables_info[TABLE_CN_INFO].pool         = CVMX_FPA_UMTS_RELATE256_POOL;
    strcpy(lte_tables_info[TABLE_CN_INFO].name, "TABLE_CN_INFO");
    lte_tables_info[TABLE_CN_INFO].cell_size    = HASH_ENTRY_VALID_SIZE_256;
#ifdef RELATE_AGING
    lte_tables_info[TABLE_CN_INFO].set_timer     =cn_info_cell_set_timer;
#endif
    

    for(i = P_TMSI_IMSI_TABLE_START;i<P_TMSI_IMSI_TABLE_END;i++)
    {
        bucket = lte_tables + i;
        cvmx_spinlock_init(&(bucket->lock));
        bucket->index = i -  P_TMSI_IMSI_TABLE_START;
        INIT_LIST_HEAD(&bucket->head);
    }
    lte_tables_info[TABLE_P_TMSI].first_bucket  = lte_tables + P_TMSI_IMSI_TABLE_START;
    lte_tables_info[TABLE_P_TMSI].max_bucket    = P_TMSI_IMSI_TABLE_SIZE;
    lte_tables_info[TABLE_P_TMSI].compare       = p_tmsi_table_compare;
    lte_tables_info[TABLE_P_TMSI].hash          = p_tmsi_table_hash;
    lte_tables_info[TABLE_P_TMSI].update        = update_ptmsi_imsi_table;
//    lte_tables_info[TABLE_P_TMSI].pool          = CVMX_FPA_LTE_RELATE128_POOL1;
    strcpy(lte_tables_info[TABLE_P_TMSI].name, "TABLE_P_TMSI");
    lte_tables_info[TABLE_P_TMSI].cell_size     = HASH_ENTRY_VALID_SIZE_128;


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


