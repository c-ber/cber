/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_relate_s1.c
编码格式:     ASCII
作者:         chengshuan
创建:         Nov 17, 2015
历史:
    1.日期    :Nov 17, 2015
      作者    :chengshuan
      修改    :Created file
******************************************************************************/

#include "lte_relate_s1.h"


#define M_LTE_SIGNAL_SUBMIT 1//允许编译日志上送功能



mp_code_t enodeb_mme_handle_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S1, LV_ERROR);
    lte_table_enodeb_mme_handle_node_t *sentry = (lte_table_enodeb_mme_handle_node_t *)src;
    lte_table_enodeb_mme_handle_node_t *dentry = (lte_table_enodeb_mme_handle_node_t *)dst;
    /*如果这个表项是lte的这只需要比较mme的ip和id*/
    
    if(MOBILE_TYPE_UMTS_FLAG != dentry->umts_hash_para.reserved)
    {
        if((sentry->lte_hash_para.cn_ip.ip.u64[0] == dentry->lte_hash_para.cn_ip.ip.u64[0])
            && (sentry->lte_hash_para.cn_ip.ip.u64[1] == dentry->lte_hash_para.cn_ip.ip.u64[1])
            && (sentry->lte_hash_para.cn_id == dentry->lte_hash_para.cn_id))
        {
            *cmp = HASH_CMP_SAME;
        }
        else
        {
            *cmp = HASH_CMP_DIFF;
        }
    }
    /*如果这个表项是umts的则需要比较cn_ip an_ip,cn_id*/
    else
    {
        if((0 == sentry->umts_hash_para.reserved) && (0 == dentry->umts_hash_para.reserved))
        {
            if((sentry->umts_hash_para.sgsn_m3ua_signal_code == dentry->umts_hash_para.sgsn_m3ua_signal_code)
                 && (sentry->umts_hash_para.sgsn_sccp_id == dentry->umts_hash_para.sgsn_sccp_id))
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
            *cmp = HASH_CMP_DIFF;
        }
    }
    return MP_OK;
}

mp_code_t enodeb_mme_handle_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(hash_result, M_S1, LV_ERROR);

    uint32_t index = 0;
    index = semp_hash_data64(key->data[0], 0xFFFFFFFF);
    *hash_result = index;
    return MP_OK;
}

mp_code_t update_enodeb_mme_handle_table(void *dst, void *src, uint64_t action)
{

    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);

    lte_table_enodeb_mme_handle_node_t *sentry = (lte_table_enodeb_mme_handle_node_t *)src;
    lte_table_enodeb_mme_handle_node_t *dentry = (lte_table_enodeb_mme_handle_node_t *)dst;

    dentry->mask = 0;
    if(CN_INFOT_UPDATE_CN_IP&action)
    {
        memcpy(&(dentry->lte_hash_para.cn_ip), &(sentry ->lte_hash_para.cn_ip), sizeof(ip_comm_t));
    }

    if(CN_INFOT_UPDATE_CN_ID&action)
    {
        dentry->lte_hash_para.cn_id  = sentry ->lte_hash_para.cn_id;
    }
    if(CN_INFOT_UPDATE_AN_IP&action)
    {
        memcpy(&(dentry->lte_hash_para.access_node_ip), &(sentry ->lte_hash_para.access_node_ip), sizeof(ip_comm_t));
    }
    if(CN_INFOT_UPDATE_AN_ID&action)
    {
        dentry->lte_hash_para.access_node_id = sentry->lte_hash_para.access_node_id;
        dentry->mask  |=CN_INFOT_AN_ID_VALID;
    }
    if(CN_INFOT_UPDATE_CH_VALID&action)
    {
        dentry->handover_cache_info.valid = sentry->handover_cache_info.valid;
        dentry->mask  |=CN_INFOT_CH_VALID;
    }
    if(CN_INFOT_UPDATE_CH_ENB_IP&action)
    {
        memcpy(&(dentry->handover_cache_info.enodeb_ip), &(sentry->handover_cache_info.enodeb_ip), sizeof(ip_comm_t));
        dentry->mask  |=CN_INFOT_CH_ENB_IP_VALID;
    }
    if(CN_INFOT_UPDATE_CH_ENB_UE_ID&action)
    {
        dentry->handover_cache_info.enodeb_ue_s1ap_id = sentry->handover_cache_info.enodeb_ue_s1ap_id;
        dentry->mask  |=CN_INFOT_CH_ENB_UE_ID_VALID;
    }
    if(CN_INFOT_UPDATE_CH_ECGI&action)
    {
        dentry->handover_cache_info.ecgi = sentry->handover_cache_info.ecgi;
        dentry->mask  |=CN_INFOT_CH_ECGI_VALID;
    }
    if(CN_INFOT_UPDATE_CH_TAI&action)
    {
        memcpy(dentry->handover_cache_info.tai ,sentry->handover_cache_info.tai,sizeof(lte_tai_t));
        dentry->mask  |=CN_INFOT_CH_TAI_VALID;
    }
    if(CN_INFOT_UPDATE_AGING&action)
    {
        dentry->aging = sentry->aging;
        dentry->mask  |=CN_INFOT_AGING_VALID;
    }
    if(CN_INFOT_UPDATE_HANDOVER_INFO&action)
    {
        dentry->handover_cache_info = sentry->handover_cache_info;
        dentry->mask  |=CN_INFOT_HANDOVER_INFO_VALID;
    }
    if(CN_INFOT_UPDATE_IMSI&action)
    {
        memcpy(dentry->imsi ,sentry->imsi,sizeof(imsi_t));
        dentry->mask  |=CN_INFOT_IMSI_VALID;
    }
    /*更新手机网络类型*/
    if(CN_INFOT_UPDATE_MOBILE_TYPE&action)
    {
        dentry->mobile_type = sentry->mobile_type;
        dentry->mask  |= CN_INFOT_UPDATE_MOBILE_TYPE_VALID;
    }

    if(CN_INFOT_UPDATE_MASK&action)
    {
        dentry->mask = sentry->mask;
    }

	if(CN_INFOT_UPDATE_SGSN_POINT_CODE&action)
    {
        dentry->umts_hash_para.sgsn_m3ua_signal_code = sentry->umts_hash_para.sgsn_m3ua_signal_code;
    }

    if(CN_INFOT_UPDATE_SGSN_SCCP_ID&action)
    {
        dentry->umts_hash_para.sgsn_sccp_id = sentry->umts_hash_para.sgsn_sccp_id;
    }

    if(CN_INFOT_UPDATE_RNC_POINT_CODE&action)
    {
        dentry->umts_hash_para.rnc_m3ua_signal_code = sentry->umts_hash_para.rnc_m3ua_signal_code;
    }

    if(CN_INFOT_UPDATE_RNC_SCCP_ID&action)
    {
        dentry->umts_hash_para.rnc_sccp_id = sentry->umts_hash_para.rnc_sccp_id;
        dentry->mask  |=CN_INFOT_RNC_SCCP_ID_VALID;
    }

    return MP_OK;
}
/******************************************************************************
 * 函数名称    : update_enb_mme_handle_table_key
 * 功能        : 根据mme ip,mme id计算出一个hash值，用于建表或查表
 * 参数        : mme_ip mme_id
 * 说明        :
 * 返回        : 错误码，计算成功返回MP_OK,其他错误见错误码说明
******************************************************************************/
mp_code_t update_enb_mme_handle_table_key(ip_comm_t mme_ip,uint32_t mme_id,hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    ptr = (uint8_t *)key->data;
    IP_TRASNFER_TO_KEY(ptr, mme_ip);
    memcpy(ptr,&mme_id,sizeof(mme_id));
    ptr+=sizeof(mme_id);
    key->size = 3;
    return MP_OK;
}


mp_code_t update_s1u_ecgi(hash_table_index_t *index, lte_ecgi_t ecgi)
{
    uint64_t action_s1u        = 0;
    lte_table_gtpu_t s1u_cell  = {};
    mp_code_t rv               = MP_OK;

    if(!index->en)           //当索引号无效时返回
    {
        return MP_FAIL;
    }

    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), index,
                                                (void *)&s1u_cell, sizeof(lte_table_gtpu_t));
    if (MP_NOT_FOUND == rv)
    {
        return rv;
    }

    /*更新ecgi*/
    memcpy(&s1u_cell.ecgi, &ecgi, sizeof(lte_ecgi_t));
    action_s1u |= GTP_U_T_UPDATE_ECGI;

    rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_s1u, (void*)&s1u_cell,
                                     sizeof(lte_table_gtpu_t), index);
    return rv;

}

mp_code_t update_s1u_ecgi_by_imsi(lte_imsi_t imsi)
{
    int i                       = 0;
    mp_code_t rv                = MP_OK;
    hash_key_t key_imsi         = {};
    lte_table_imsi_t imsi_cell  = {};

    update_imsi_hash_key(imsi, &(key_imsi));

    LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                      (void*)&imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The imsi table search failed ! \n");
        return rv;
    }

    //更新s1u_enodeB的ecgi
    for(i=0; i<MAX_NUM_BEARER; i++)
    {
        update_s1u_ecgi(&imsi_cell.pos_dl_gtp_u[i], imsi_cell.ecgi);
    }

    //更新s1u_sgw的ecgi
    for(i=0; i<MAX_NUM_BEARER; i++)
    {
        update_s1u_ecgi(&imsi_cell.pos_ul_gtp_u[i], imsi_cell.ecgi);
    }

    return rv;
}
/******************************************************************************
 * 函数名称    : update_s1u_tai
 * 功能        : 通过index去更新tai
 * 参数        : index tai
 * 说明        :
 * 返回        : 错误码，计算成功返回MP_OK,其他错误见错误码说明
******************************************************************************/
mp_code_t update_s1u_tai(hash_table_index_t *index, lte_tai_t tai)
{
    uint64_t action_s1u        = 0;
    lte_table_gtpu_t s1u_cell  = {};
    mp_code_t rv               = MP_OK;

    if(!index->en)           //当索引号无效时返回
    {
        return MP_FAIL;
    }

    rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), index,
                                                (void *)&s1u_cell, sizeof(lte_table_gtpu_t));
    if (MP_NOT_FOUND == rv)
    {
        return rv;
    }

    /*更新ecgi*/
    memcpy(s1u_cell.tai, tai, sizeof(lte_tai_t));
    action_s1u |= GTP_U_T_UPDATE_TAI;

    rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_s1u, (void*)&s1u_cell,
                                     sizeof(lte_table_gtpu_t), index);
    return rv;

}

/******************************************************************************
 * 函数名称    : update_s1u_tai_by_imsi
 * 功能        : 通过imsi更新s1u表的tai
 * 参数        : imsi
 * 说明        :
 * 返回        : 错误码，计算成功返回MP_OK,其他错误见错误码说明
******************************************************************************/

mp_code_t update_s1u_tai_by_imsi(lte_imsi_t imsi)
{
    int i                       = 0;
    mp_code_t rv                = MP_OK;
    hash_key_t key_imsi         = {};
    lte_table_imsi_t imsi_cell  = {};

    update_imsi_hash_key(imsi, &(key_imsi));

    LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                      (void*)&imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The imsi table search failed ! \n");
        return rv;
    }

    //更新s1u_enodeB的tai
    for(i=0; i<MAX_NUM_BEARER; i++)
    {
        update_s1u_tai(&imsi_cell.pos_dl_gtp_u[i], imsi_cell.tai);
    }

    //更新s1u_sgw的tai
    for(i=0; i<MAX_NUM_BEARER; i++)
    {
        update_s1u_tai(&imsi_cell.pos_ul_gtp_u[i], imsi_cell.tai);
    }

    return rv;
}

/******************************************************************************
 * 函数名称    : update_all_table_ecgi
 * 功能        : 更新所有表项的ecgi
 * 参数        : s1ap
 * 说明        :
 * 返回        : 错误码，计算成功返回MP_OK,其他错误见错误码说明
******************************************************************************/

mp_code_t update_all_table_ecgi(parse_s1ap_t  *s1ap)
{

        mp_code_t rv = MP_OK;
        /* 更新ECGI */
        lte_table_s1_mme_enodeb_t s1_mme_cell   = {};
        uint64_t action_s1_mme = 0;
        hash_table_index_t s1_mme_index             = {};

        if(NULL == s1ap)
        {
            return MP_NULL_POINT;
        }
        if(!s1ap->ecgi_exist)
        {
            return MP_FAIL;
        }
        if( MP_E_NONE != get_s1_mme_table_entry(s1ap, &s1_mme_cell))
        {
            return MP_NOT_FOUND;
        }
        memcpy(&s1_mme_cell.ecgi, &s1ap->ecgi, sizeof(lte_ecgi_t));
        action_s1_mme |= S1_MMET_UPDATE_ECGI;
        /*更新an_info的ecgi*/
        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme, (void*)&s1_mme_cell, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table ecgi: <Failed>\n");
            return rv;
        }
        
        /* set ecgi to imsi table*/
        lte_table_imsi_t    imsi_search_d      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;
        
        UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &s1_mme_cell.imsi, sizeof(lte_imsi_t));

        memcpy(&(imsi_search_d.ecgi), &(s1_mme_cell.ecgi), sizeof(lte_ecgi_t));
        action_imsi |= IMSI_T_UPDATE_ECGI;

        // update IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("initialUEMessage: update ImsiT <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        //更新s1u中的ecgi
        update_s1u_ecgi_by_imsi(imsi_search_d.imsi);
        return MP_OK;
}
/******************************************************************************
 * 函数名称    : update_s1u_table_by_imsi
 * 功能        : 通过imsi更新s1u表的信息
 * 参数        : imsi s1u_info update_option
 * 说明        :
 * 返回        : 错误码，计算成功返回MP_OK,其他错误见错误码说明
******************************************************************************/
mp_code_t update_s1u_table_by_imsi(lte_imsi_t imsi,lte_table_gtpu_t  *s1u_info,uint64_t update_option)
{
    int i                       = 0;
    mp_code_t rv                = MP_OK;
    hash_key_t key_imsi         = {};
    lte_table_imsi_t imsi_cell  = {};
    lte_table_gtpu_t s1u_cell  = {};
    hash_table_index_t s1u_index = {};

    update_imsi_hash_key(imsi, &(key_imsi));

    LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                      (void*)&imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The imsi table search failed ! \n");
        return rv;
    }

    for(i=0; i<MAX_NUM_BEARER; i++)
    {
    
        if(!imsi_cell.pos_dl_gtp_u[i].en)           //当索引号无效时返回
        {
            return MP_FAIL;
        }
        //获取下行的s1u表表项
        rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &imsi_cell.pos_dl_gtp_u[i],
                                                    (void *)&s1u_cell, sizeof(lte_table_gtpu_t));
        if (MP_NOT_FOUND == rv)
        {
            return rv;
        }
        //将新的信息更新到表项里面
        rv = update_s1u_table(&s1u_cell,s1u_info,update_option);
        if(MP_OK != rv)
        {
            return rv;
        }
        //更新s1u表的信息
        rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, update_option, (void*)&s1u_cell,
                                sizeof(lte_table_gtpu_t), &s1u_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update gtp_u table <Failed>\n");
            return rv;
        }

        
        //将新的信息更新到表项里面
        if(!imsi_cell.pos_ul_gtp_u[i].en)           //当索引号无效时返回
        {
            return MP_FAIL;
        }
        
        //获取上行的s1u表表项
        rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &imsi_cell.pos_ul_gtp_u[i],
                                                    (void *)&s1u_cell, sizeof(lte_table_gtpu_t));
        if (MP_NOT_FOUND == rv)
        {
            return rv;
        }
        rv = update_s1u_table(&s1u_cell,s1u_info,update_option);
        if(MP_OK != rv)
        {
            return rv;
        }
        //更新s1u表的信息
        rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, update_option, (void*)&s1u_cell,
                                sizeof(lte_table_gtpu_t), &s1u_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update gtp_u table <Failed>\n");
            return rv;
        }
                    
    }
    
    return MP_OK;
}
/* 建立imsi表，建立 s1-mme表 */
mp_error_t lte_s1ap_initialUEMessage(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;
    parse_nas_t nas = s1ap->nas;
    /* query s-tmsi to find imsi with guti, result=FALSE indicate failure*/
    uint8_t result = TRUE;

    // 1.if s1ap packet has imsi info, create imsi table by imsi information directly
    // 2.if s1ap packet has old guti info, search imsi from S-TMSI table by old guti, and create imsi table by imsi
    hydra_stat_inc(stat_pkts_s1ap_initialUEMessage);

    /* InitialUEMessage 承载的信令中，我们主要关注的有两个: a. Attach Request, b. TAU Request 也就是Tracking Area Update */
    /* Attach Request 信令(NAS层)，其中有可能带有imsi或者old_guti */
    /* TAU Request 信令(NAS层)，一般只带有old_guti，除了这两种报文之外的报文，目前暂时不用处理 */
    /* chengshuan 2016.01.28 */
    if ((EMM_MSG_ATTACH_REQUEST != nas.EMM_message_type) && (EMM_MSG_TAU_REQUEST != nas.EMM_message_type))
    {
        LTE_DEBUG_PRINTF("Not Attach Request and TAU Request packet! \n");
        hydra_stat_inc(stat_pkts_s1ap_invalid_initialUEMessage);
        return MP_E_NONE;
    }
    hydra_stat_inc(stat_pkts_AttachRequest);

    if (EMM_MSG_ATTACH_REQUEST == nas.EMM_message_type)
    {
        /* step 0. S1-MME */
        hash_table_index_t s1_mme_index             = {};
        lte_table_s1_mme_enodeb_t s1_mme_search_d   = {};
        uint64_t action_s1_mme = 0;

        /* initialUEMessage has only access_node_id */
        memcpy(&(s1_mme_search_d.lte_hash_para.cn_ip), &(s1ap->cn_ip),sizeof(ip_comm_t));
        action_s1_mme |= AN_INFOT_UPDATE_CN_IP;

        memcpy(&(s1_mme_search_d.lte_hash_para.cn_id), &(s1ap->cn_id),sizeof(ip_comm_t));
        action_s1_mme |= AN_INFOT_UPDATE_CN_ID;

        memcpy(&(s1_mme_search_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip),sizeof(ip_comm_t));
        action_s1_mme |= AN_INFOT_UPDATE_AN_IP;

        s1_mme_search_d.lte_hash_para.access_node_id    = s1ap->access_node_id;
        action_s1_mme |= AN_INFOT_UPDATE_AN_ID;

        s1_mme_search_d.guti_flag           = FALSE;
        action_s1_mme |= AN_INFOT_UPDATE_GUTI_FLAG;

        if (TAI_VALID(s1ap->tai))
        {
            memcpy(&s1_mme_search_d.tai, s1ap->tai, sizeof(lte_tai_t));
            action_s1_mme |= AN_INFOT_UPDATE_TAI;
        }

        s1_mme_search_d.mobile_type = MCS_LTE;/*用于标志4g*/
        action_s1_mme |= AN_INFOT_UPDATE_MOBILE_TYPE;

        LTE_DEBUG_PRINTF("initialUEMessage: Check info nas.ciphered_flag = %d, nas.type_of_identity = %d \n", nas.ciphered_flag, nas.type_of_identity);

        if( TRUE == nas.ciphered_flag )
        {
            // Do not support ciphered InitialUEMessage yet
            // Count a statistic and return
            hydra_stat_inc(stat_pkts_s1ap_ciphered_initialUEMessage);
            return MP_E_NONE;
        }


        if( (TYPE_IMSI == nas.type_of_identity) && IMSI_VALID(nas.init_identify.imsi) )
        {
            if(MP_OK == check_TBCD_encode(sizeof(lte_imsi_t),nas.init_identify.imsi))
            {
                memcpy(s1_mme_search_d.imsi, nas.init_identify.imsi, sizeof(lte_imsi_t));
                action_s1_mme |= AN_INFOT_UPDATE_IMSI;
                hydra_stat_inc(stat_pkts_s1ap_imsi_initialUEMessage);
                PRINTF_IMSI(s1_mme_search_d.imsi);
            }
            else
            {
                //Invalid identity type
                hydra_stat_inc(stat_pkts_s1ap_initialUEMessage_invalid_bcd_imsi);
                return MP_E_PARAM;
            }
        }
        else if( (TYPE_OLD_GUTI == nas.type_of_identity) && GUTI_VALID(nas.init_identify.guti) )
        {
            // s1ap packet has no imsi but old_guti, search from S-TMSI table for imsi info
            s1_mme_search_d.guti_flag           = TRUE;
            memcpy(s1_mme_search_d.old_guti, nas.init_identify.guti, sizeof(lte_guti_t));
            action_s1_mme |= AN_INFOT_UPDATE_OLD_GUTI;
            hydra_stat_inc(stat_pkts_s1ap_old_guti_initialUEMessage);

            /* Step 0.1 S-TMSI */
            // Search S-TMSI table by old_guti for imsi, fill imsi into S1-MME table
            hash_key_t key_s_tmsi={};
            lte_table_s_tmsi_t s_tmsi_cell      = {};

            PRINTF_GUTI(nas.init_identify.guti);
            PRINTF_S_TMSI(nas.init_identify.guti + LTE_STMSI_OFFSET);

            update_s_tmsi_hash_key((nas.init_identify.guti + LTE_STMSI_OFFSET), &(key_s_tmsi)); // S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节
            LTE_DEBUG_PRINTF("key=%lx\n" , key_s_tmsi.data[0]);

            LTE_DEBUG_PRINTF("Search S-TMSI table for imsi! \n");

            rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S_TMSI), &key_s_tmsi,
                                       (void*)&s_tmsi_cell, sizeof(s_tmsi_cell));
            if(MP_CELL_FOUND != rv)
            {
                // even didn't find the IMSI associated with GUTI, but create a new S1_MME table entry to store tai without imsi
                LTE_DEBUG_PRINTF("Didn't find the related imsi from S-TMSI table!\n");
                hydra_stat_inc(stat_pkts_s1ap_not_found_imsi_from_STMSI);
                result = FALSE;
                s1_mme_search_d.timsi_flag = FALSE;
                action_s1_mme |= AN_INFOT_UPDATE_TIMSI_FLAG;
            }
            else
            {
                // get imsi by s-tmsi
                PRINTF_IMSI(s_tmsi_cell.imsi);
                memcpy(&s1_mme_search_d.imsi, &s_tmsi_cell.imsi, sizeof(lte_imsi_t));
                action_s1_mme |= AN_INFOT_UPDATE_IMSI;
                s1_mme_search_d.timsi_flag = TRUE;
                action_s1_mme |= AN_INFOT_UPDATE_TIMSI_FLAG;
            }

        }
        else
        {
            //Invalid identity type
            hydra_stat_inc(stat_pkts_s1ap_invalid_initialUEMessage);
            return MP_E_PARAM;
        }

        s1_mme_search_d.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= AN_INFOT_UPDATE_AGING;
        if(s1ap->ecgi_exist)
        {
             memcpy(&s1_mme_search_d.ecgi, &s1ap->ecgi, sizeof(lte_ecgi_t));
             action_s1_mme |= S1_MMET_UPDATE_ECGI;
        }

        // create S1-MME table
        rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_s1_mme,
        (void*)&s1_mme_search_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            return rv;
        }

        /* step 1. Imsi */
        lte_table_imsi_t imsi_search_d      = {};
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;

        // set s1_mme index and ecgi to imsi table
        if (TRUE == result)
        {
            SET_TABLE_INDEX( (&(imsi_search_d.pos_an_info)), s1_mme_index.index, s1_mme_index.node);
            action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

            UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &s1_mme_search_d.imsi, sizeof(lte_imsi_t));

            if (TAI_VALID(s1ap->tai))
            {
                UPDATE_IMSIT_FIELD(TAI, action_imsi, &imsi_search_d.tai, s1ap->tai, sizeof(lte_tai_t));
            }

            imsi_search_d.aging = (uint16_t)g_aging_timer_max;
            action_imsi |= IMSI_T_UPDATE_AGING;

            memcpy(&(imsi_search_d.ecgi), &(s1_mme_search_d.ecgi), sizeof(lte_ecgi_t));
            action_imsi |= IMSI_T_UPDATE_ECGI;

            imsi_search_d.mobile_type = MCS_LTE;/*用于标志为4g*/
            action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

            // create IMSI table
            rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                    sizeof(lte_table_imsi_t), &imsi_index);
            if(MP_OK != rv)
            {
                LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
                hydra_stat_inc(stat_pkts_imsi_table_failed);
                return rv;
            }

            //更新s1u中的ecgi
            update_s1u_ecgi_by_imsi(imsi_search_d.imsi);
        }
    }
    else if(EMM_MSG_TAU_REQUEST == s1ap->nas.EMM_message_type)
    {
        /* step 0. S1-MME */
        lte_table_s1_mme_enodeb_t s1_mme_cell   = {};
        uint64_t action_s1_mme = 0;
        hash_table_index_t s1_mme_index             = {};

        if( MP_E_NONE != get_s1_mme_table_entry(s1ap, &s1_mme_cell))
        {
            return rv;
        }

        if(s1ap->ecgi_exist)
        {
            memcpy(&s1_mme_cell.ecgi, &s1ap->ecgi, sizeof(lte_ecgi_t));
            action_s1_mme |= S1_MMET_UPDATE_ECGI;
        }

        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme, (void*)&s1_mme_cell, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table ecgi: <Failed>\n");
            return rv;
        }

        /* step 1. Imsi */
        lte_table_imsi_t        imsi_search_d      = {};
        hash_table_index_t      imsi_index       = {};
        uint64_t                action_imsi = 0;

        // set ecgi to imsi table
        UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &s1_mme_cell.imsi, sizeof(lte_imsi_t));

        memcpy(&(imsi_search_d.ecgi), &(s1_mme_cell.ecgi), sizeof(lte_ecgi_t));
        action_imsi |= IMSI_T_UPDATE_ECGI;

        // update IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("initialUEMessage: update ImsiT <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }

        //更新s1u中的ecgi
        update_s1u_ecgi_by_imsi(imsi_search_d.imsi);
    }
    return MP_E_NONE;
}

/* 查询S1-MME表项，通过NAS接口解密出GUTI以及TAI信息，更新到imsi表中 */
mp_error_t lte_s1ap_InitialContextSetup(void *packet_ptr, parse_s1ap_t *s1ap)
{
    mp_code_t rv                    = MP_E_NONE;
    mp_code_t ret_of_creat_cn_info  = MP_E_NONE;//创建cn info表项的结果

    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(packet_ptr, M_S1, LV_ERROR);

    parse_nas_t nas = s1ap->nas;
    lte_guti_t  guti = {};

    /* Attach Accept (NAS层)报文是由InitialContextSetup承载，我们需要的GUTI是在Attach Accept中，非Attach Accept报文不用处理 */
    /* chengshuan 2016.01.28 */
    hydra_stat_inc(stat_pkts_InitialContextSetup);
    if ((EMM_MSG_ATTACH_ACCEPT != nas.EMM_message_type)
                                 && (nas.ciphered_flag == FALSE))
    {
        LTE_DEBUG_PRINTF("Not Attach Accept packet! \n");
        hydra_stat_inc(stat_pkts_NotAttachAccept);
        return MP_E_NONE;
    }

    if (nas.ciphered_flag == FALSE)
    {
        // InitialContextSetup Message is not ciphered
        LTE_DEBUG_PRINTF("ciphered_flag: %d \n", nas.ciphered_flag);
        hydra_stat_inc(stat_pkts_InitialContextSetup_no_ciphered);
    }

    // 1.0 search s1_mme table for imsi and cipher Algorithm type
    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme,
                               (void*)&s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1-MME table search failed ! \n");
        return rv;
    }

    PRINTF_IMSI(s1_mme_cell.imsi);

    IMSI_IS_0(&(s1_mme_cell.imsi));

    hash_key_t                  key_imsi        = {};
    lte_table_imsi_t            imsi_cell       = {};
    lte_table_imsi_t            imsi_table_d    = {};
    uint64_t                    action_imsi     = 0;

    lte_table_s1u_sgw_t s1u_sgw_search_d = {};
    uint64_t action_s1u_sgw = 0;
    lte_table_s1u_sgw_t   s1u_sgw_cell     = {};
    hash_table_index_t    index_s1u_sgw = {};

    // if s1_mme table entry is valid, then query imsi table with s1_mme_cell->imsi
    if (s1_mme_cell.mask & AN_INFOT_IMSI_VALID)
    {
        update_imsi_hash_key(s1_mme_cell.imsi, &(key_imsi));

        LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
        (void*)&imsi_cell, sizeof(imsi_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
            return rv;
        }
    }
    // if imsi is no exist in s1-mme, then query imsi table with s1u-sgw->imsi
    else
    {
        // query s1u_sgw table with s1ap->rab_info then re-write

        hash_key_t key_s1u_sgw = {};

        update_fteid_hash_key(s1ap->rab_info.tip, s1ap->rab_info.teid, &key_s1u_sgw);

        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &key_s1u_sgw,
                                   (void*)&s1u_sgw_cell, sizeof(s1u_sgw_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("The S1U_SGW table search failed ! \n");
            return rv;
        }


        // query imsi table with s1u_sgw table
        update_imsi_hash_key(s1u_sgw_cell.imsi, &(key_imsi));

        LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                   (void*)&imsi_cell, sizeof(imsi_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("The imsi table search failed ! \n");
            return rv;
        }

        // re-write s1_mme imsi field
        uint64_t action_s1_mme = 0;
        lte_table_s1_mme_t s1_mme_table_d = {};
        hash_table_index_t index_s1_mme = {};

        memcpy(&(s1_mme_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
        s1_mme_table_d.lte_hash_para.access_node_id = s1ap->access_node_id;

        memcpy(s1_mme_table_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1_mme |= AN_INFOT_UPDATE_IMSI;

        s1_mme_table_d.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= AN_INFOT_UPDATE_AGING;

        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme,
                                         (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &index_s1_mme);
        if(MP_OK != rv)
        {
            return rv;
        }

        // update pos_an_info and tai field into imsi table entry
        CHECK_UPDATE_IMSI_OF_POS_S1_MME(imsi_cell, imsi_table_d, index_s1_mme, action_imsi);
        CHECK_UPDATE_IMSI_OF_TAI(imsi_cell, imsi_table_d, s1_mme_cell.tai, action_imsi);

        // re-write s1u-sgw tai field
        CHECK_UPDATE_S1U_OF_TAI(s1u_sgw_cell, s1u_sgw_search_d, s1_mme_cell.tai, action_s1u_sgw);
    }

    // 1.1 Search imsi table for kasme

    PRINTF_KASME(imsi_cell.kasme);
    PRINTF_IMSI(imsi_cell.imsi);


    // 1. calling NAS API for GUTI
    // 2.0 decrypt the NAS PDU
    //LTE_DEBUG_PRINTF("NAS data offset: nas.nas_cipher_off = %d !\n",nas.nas_cipher_off);

    nas_info_t nas_src = {};
    nas_plain_t nas_dst = {};
    uint8_t dst_data[MAX_CIPHER_LEN] = {};

    nas_src.sequence_no = nas.sequence_no;
    nas_src.bear_id = s1ap->bear_id;
    nas_src.dir = s1ap->direction;
    nas_src.data_len = nas.nas_cipher_len;
    //nas_src.data = (uint8_t*)(packet_ptr + nas.nas_cipher_off);
    nas_src.data = nas.nas_cipher_ptr;
    nas_src.type = s1_mme_cell.cipher_alg_type;
    memcpy(nas_src.kasme, imsi_cell.kasme, sizeof(lte_kasme_t));
    LTE_DEBUG_PRINTF("NAS data  nas.nas_cipher_len = %d !\n",nas.nas_cipher_len);
    LTE_DEBUG_PRINTF("NAS src data structure: sequence_no = %d, bear_id = %d, dir = %d, data_len = %d, data = %p, type = %d !\n",
                             nas_src.sequence_no, nas_src.bear_id, nas_src.dir, nas_src.data_len, nas_src.data, nas_src.type);
#if LTE_DEBUG
    LTE_DEBUG_PRINTF("NAS data cipher data dump !\n");
    uint8_t i = 0;
    for(i = 0; i < nas_src.data_len; i ++)
    {
        printf("NAS ciphered data[%d]:%02x \n",i,  *(unsigned int*)(nas_src.data + i));
    }
#endif


    if(ENABLE == nas.ciphered_flag)
    {
        nas_dst.data = dst_data;
        nas_dst.len = 0;

        rv = nas_pdu_decrypt(&nas_src, &nas_dst); //解密报文
        if( MP_OK != rv )
        {
            LTE_DEBUG_PRINTF("Decrypt failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_decrypt_failed);
            return rv;
        }
        // 2.1 parse guti from the plain data
        mp_error_t result = MP_E_NONE;
        result = nas_pdu_parse_guti(&nas_dst, guti);
        if(MP_E_INVALID_PACKET == result)
        {
            LTE_DEBUG_PRINTF("We don't care the packet! rv = %d\n", rv);
            hydra_stat_inc(stat_pkts_NotAttachAccept);
            return MP_E_NONE; /*不直接返回rv是这种包我们不关心，不用计入到关联失败的计数中*/
        }
        else if( MP_E_NONE != result )
        {
            hydra_stat_inc(stat_pkts_AttachAccept); /*虽然解析失败，但还是attach accept报文*/
            LTE_DEBUG_PRINTF("relate s1:Parse GUTI failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_parse_guti_failed);
            return result;
        }
    }
    else
    {
        memcpy(&guti, &nas.guti, sizeof(lte_guti_t));
    }

    hydra_stat_inc(stat_pkts_AttachAccept);/*放在这里可以防止加密报文中有不是attach accept报文的*/
    PRINTF_GUTI(guti);

    lte_guti_t guti_null = {0};
    memset(guti_null, 0, sizeof(lte_guti_t));
    if (0 == memcmp(guti, guti_null, sizeof(lte_guti_t)))
    {
        hydra_stat_inc(stat_pkts_s1ap_guti_invalid);
        return MP_E_INTERNAL;
    }


    if (GUTI_VALID(guti))
    {
        CHECK_UPDATE_S1U_OF_GUTI(s1u_sgw_cell, s1u_sgw_search_d, guti, action_s1u_sgw);
    }
    memcpy(&s1u_sgw_search_d.trans_layer_ip, &s1ap->rab_info.tip, sizeof(ip_comm_t));
    s1u_sgw_search_d.teid = s1ap->rab_info.teid;
    action_s1u_sgw |= GTP_U_T_UPDATE_GTP_IP;
    action_s1u_sgw |= GTP_U_T_UPDATE_TEID;

    s1u_sgw_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_sgw |= GTP_U_T_UPDATE_AGING;

    rv = create_update_table_by_hash(TABLE_S1U_SGW, CREATE_TABLE, action_s1u_sgw, (void *)&s1u_sgw_search_d,
                                     sizeof(lte_table_s1u_sgw_t), &index_s1u_sgw);
    if (MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("initial context request: Search S1U table <Failed>\n");
        hydra_stat_inc(stat_pkts_s1u_table_failed_2);
        return rv;
    }

    /*modified by yi for:为imsi表添加cn_info的index,begin*/
    
    /***********************************建立cn_info表******************************************/
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_table_d={};
    uint64_t                                action_mme = 0;
    hash_table_index_t                      enodeb_mme_handle_index={};

    enb_mme_handle_table_d.lte_hash_para.access_node_id = s1ap->access_node_id;
    action_mme |= CN_INFOT_UPDATE_AN_ID;

    memcpy(&(enb_mme_handle_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    action_mme |= CN_INFOT_UPDATE_AN_IP;

    enb_mme_handle_table_d.lte_hash_para.cn_id = s1ap->cn_id;
    action_mme |= CN_INFOT_UPDATE_CN_ID;

    memcpy(&(enb_mme_handle_table_d.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
    action_mme |= CN_INFOT_UPDATE_CN_IP;

    memcpy(enb_mme_handle_table_d.imsi,imsi_cell.imsi,IMSI_LEN);
    action_mme |= CN_INFOT_UPDATE_IMSI;
    /*手机网络是lte*/
    enb_mme_handle_table_d.mobile_type = MCS_LTE;
    action_mme |= CN_INFOT_UPDATE_MOBILE_TYPE;

    enb_mme_handle_table_d.aging = (uint16_t )g_aging_timer_max;
    action_mme |= CN_INFOT_UPDATE_AGING;

    ret_of_creat_cn_info = create_update_table_by_hash(TABLE_CN_INFO, CREATE_TABLE, action_mme, (void*)&enb_mme_handle_table_d, sizeof(lte_table_enodeb_mme_handle_node_t), &enodeb_mme_handle_index);
    if(MP_OK != ret_of_creat_cn_info)
    {
        LOG_PRINT(M_S1,LV_ERROR,"lte ueContextSetup create cn_info table fail\n");
        hydra_stat_inc(stat_lte_uecontextsetup_creat_cn_info_fail);
        /*如果创建失败为不影响后面流程故不返回*/
    }
    
     /*modified by yi for:为imsi表添加cn_info的index,end*/

    
    // 3. update imsi table, fill GUTI
    hash_table_index_t imsi_index       = {};

    // update guti field
    if (GUTI_VALID(guti))
    {
        memcpy(imsi_table_d.guti, guti, sizeof(lte_guti_t));
        action_imsi |= IMSI_T_UPDATE_GUTI;
    }
    /*added by yi for: 建立cn_info成功就将index更新到imsi总表,begin*/
    if(MP_OK == ret_of_creat_cn_info)
    {
        imsi_table_d.pos_cn_info = enodeb_mme_handle_index;
        action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;
    }
    /*added by yi,end*/

    memcpy(imsi_table_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));

    imsi_table_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSI_T_UPDATE_AGING;
    if (!(imsi_cell.mask & IMSI_T_UPDATE_POS_UL_GTP_U_DEFAULT))
    {
        /* if deal with InitialContextSetupRequest Message before CreateSessionResponse Message,
         * then create s1u-sgw table here, but now there is not bearerid, we need to assign the <default bearer id: 5>
         */
        rv = lte_update_s1u_bearer(imsi_table_d.pos_ul_gtp_u, index_s1u_sgw.index, index_s1u_sgw.node, DEFAULT_BEARER_ID);
        if(MP_OK != rv)
        {
            return rv;
        }
        action_imsi |= IMSI_T_POS_UL_GTP_U_DEFAULT_VALID;
    }

    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi,
                                     (void*)&imsi_table_d, sizeof(lte_table_imsi_t), &imsi_index);
    if (MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Update imsi table guti failed! \n");
        return rv;
    }


    /* Step 1. Compare the old GUTI with the GUTI get from the NAS PDU */
    /* if it's not same, delete old_GUTI in S-TMSI table */
    /* and create the S-TMSI table with the new GUTI value */

    PRINTF_GUTI(s1_mme_cell.old_guti);
    LTE_DEBUG_PRINTF("s1_mme_cell.guti_flag = %d! \n", s1_mme_cell.guti_flag);

    if (TRUE == s1_mme_cell.timsi_flag)
    {
        LTE_DEBUG_PRINTF("Compare the old_guti with the guti !\n");
        rv = memcmp((void*)guti, (void*)s1_mme_cell.old_guti, sizeof(lte_guti_t));
        if(0 == rv)
        {
            /* guti are the same */
            LTE_DEBUG_PRINTF("The old_guti in S1-MME table is the same as which InitialContextSetup message take !\n");
            return MP_E_NONE;
        }
        else
        {
            // 1. delete old_guti in S-TMSI table
            LTE_DEBUG_PRINTF("Delete old_guti from S-TMSI !\n");
            hash_key_t key_s_tmsi = {};

            PRINTF_S_TMSI(s1_mme_cell.old_guti + LTE_STMSI_OFFSET);// S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节

            update_s_tmsi_hash_key(s1_mme_cell.old_guti + LTE_STMSI_OFFSET, &(key_s_tmsi));
            LTE_DEBUG_PRINTF("key=%lx\n" , key_s_tmsi.data[0]);

            LTE_DEBUG_PRINTF("Search S-TMSI table for imsi! \n");

            rv = hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_S_TMSI), &key_s_tmsi);
            if (MP_OK != rv)
            {
                LTE_DEBUG_PRINTF("Didn't find the related imsi from S-TMSI table! \n");
                return MP_E_INTERNAL;
            }
        }
    }

    if (!GUTI_VALID(guti))
    {
        hydra_stat_inc(stat_pkts_s1ap_guti_invalid);
        return MP_E_INTERNAL;
    }
    
    // 2. create the S-TMSI table with the new GUTI value
    hash_table_index_t s_tmsi_index     = {};
    lte_table_s_tmsi_t s_tmsi_table_d   = {};
    uint64_t action_tmsi = 0;

    memcpy(s_tmsi_table_d.s_tmsi, (guti + LTE_STMSI_OFFSET), sizeof(lte_s_tmsi_t)); // S-TMSI 由MME CODE和M-TMSI组成，是GUTI中的后5个字节
    action_tmsi |= S_TMSIT_UPDATE_S_TMSI;
    memcpy(&s_tmsi_table_d.imsi, &s1_mme_cell.imsi, sizeof(lte_imsi_t));
    action_tmsi |= S_TMSIT_UPDATE_IMSI;

    // create S-TMSI table
    LTE_DEBUG_PRINTF("Create S-TMSI table!\n");
    PRINTF_S_TMSI( s_tmsi_table_d.s_tmsi );
    PRINTF_IMSI( s_tmsi_table_d.imsi );
    hydra_stat_inc(stat_pkts_create_stmsi_table);

    rv = create_update_table_by_hash(TABLE_S_TMSI, CREATE_TABLE, action_tmsi, (void*)&s_tmsi_table_d, sizeof(lte_table_s_tmsi_t), &s_tmsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create S-TMSI table failed!\n");
        hydra_stat_inc(stat_pkts_stmsi_table_failed);
       return rv;
    }
    return MP_E_NONE;
}

/* 获取identity response 消息，检查imsi信息 */
mp_error_t lte_s1ap_uplinkNASTransport(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;
    // NAS EPS Mobility Management Message Type:
    // 1. Identity response (0x56)
    //    parse imsi from the packet, compare with the value in S1-MME table
    // 2. Other
    //    not support


    parse_nas_t nas = s1ap->nas;
    if( TRUE == nas.ciphered_flag )
    {
        // Do not support ciphered upLinkNASTransport Message yet
        return MP_E_NONE;
    }
    if (EMM_MSG_IDENTIFY_RESPONSE == nas.EMM_message_type)
    {
        // identity_response message would take imsi information

        LTE_DEBUG_PRINTF("Searching S1-MME table for imsi!\n");
        hash_key_t key_s1_mme={};
        lte_table_s1_mme_enodeb_t   s1_mme_table_d  = {};
        lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};
        uint64_t action_s1_mme = 0;

        memcpy(&(s1_mme_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip),sizeof(ip_comm_t));
        action_s1_mme |= AN_INFOT_UPDATE_AN_IP;
        s1_mme_table_d.lte_hash_para.access_node_id    = s1ap->access_node_id;
        action_s1_mme |= AN_INFOT_UPDATE_AN_ID;
        memcpy(&(s1_mme_table_d.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
        action_s1_mme |= AN_INFOT_UPDATE_CN_IP;
        s1_mme_table_d.lte_hash_para.cn_id      = s1ap->cn_id;
        action_s1_mme |= AN_INFOT_UPDATE_CN_ID;
        if (TAI_VALID(s1ap->tai))
        {
            memcpy(&s1_mme_table_d.tai, s1ap->tai, sizeof(lte_tai_t));
            action_s1_mme |= AN_INFOT_UPDATE_TAI;
        }

        if (s1ap->ecgi_exist)
        {
            memcpy(&s1_mme_table_d.ecgi, &s1ap->ecgi, sizeof(lte_ecgi_t));
            action_s1_mme |= S1_MMET_UPDATE_ECGI;
        }

        if( (TYPE_IMSI == nas.type_of_identity) && (IMSI_VALID(nas.init_identify.imsi)) )
        {
            if(MP_OK == check_TBCD_encode(sizeof(lte_imsi_t), nas.init_identify.imsi))
            {
                memcpy(s1_mme_table_d.imsi, nas.init_identify.imsi, sizeof(lte_imsi_t));
                action_s1_mme |= AN_INFOT_UPDATE_IMSI;
                PRINTF_IMSI(s1_mme_table_d.imsi);
                hydra_stat_inc(stat_relate_identity_response_imsi);
            }
            else
            {
                hydra_stat_inc(stat_relate_identity_response_invalid_bcd_imsi);
                return MP_E_INTERNAL;
            }
        }
        else
        {
            LTE_DEBUG_PRINTF("The Identity_response Message has no imsi !\n");
            return MP_E_INTERNAL;
        }

        update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));

        LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");

        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   &s1_mme_cell, sizeof(s1_mme_cell));
        if(MP_CELL_FOUND == rv)
        {
            // Compare if S1-MME has the same imsi as identity_response message take
            rv = memcmp((void*)s1_mme_cell.imsi, (void*)nas.init_identify.imsi, sizeof(lte_imsi_t));
            if(0 == rv)
            {
                /* imsi are the same */
                LTE_DEBUG_PRINTF("The imsi saved is the same as which Identity_response message take !\n");
                return MP_E_NONE;
            }
            else if (s1_mme_cell.mask & AN_INFOT_IMSI_VALID)
            {
                LTE_DEBUG_PRINTF("The imsi saved is not same as which Identity_response message take! Create new imsi table and delete old one\n");
                PRINTF_IMSI(s1_mme_cell.imsi);
                PRINTF_IMSI(nas.init_identify.imsi);

                /* count a statistic and delete the old imsi info , create new imsi table */
                hydra_stat_inc(stat_pkts_s1ap_uplinkNASTransport_update_imsi);

                // delete old imsi related tables
                rv = lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);
                if( MP_OK != rv )
                {
                    LTE_DEBUG_PRINTF("Clear relate imsi table failed! rv = %d\n", rv);
                    return rv;
                }
                // calling diamter API to delete s6a related tables.
                rv = del_s6a_node_by_imsi(s1_mme_cell.imsi);
                if( MP_OK != rv )
                {
                    LTE_DEBUG_PRINTF("Clear relate s6a table failed! rv = %d\n", rv);
                    return rv;
                }
            }
        }

        //update imsi of S1-MME and create imsi table
        LTE_DEBUG_PRINTF("Update S1-MME table about imsi!\n");
        // step 1.update S1-MME table
        hash_table_index_t s1_mme_index             = {};

        s1_mme_table_d.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= AN_INFOT_UPDATE_AGING;

        s1_mme_table_d.mobile_type = MCS_LTE;/*用于标志4g*/
        action_s1_mme |= AN_INFOT_UPDATE_MOBILE_TYPE;
        // The old S1-MME table has already been deleted by imsi related tabels. so create a new one by s1_mme_cell value.
        rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_s1_mme,
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table imsi: <Failed>\n");
            return rv;
        }

        /* step 2. Imsi */
        lte_table_imsi_t imsi_search_d      = {};
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;

        // set s1_mme index to imsi table
        SET_TABLE_INDEX( (&(imsi_search_d.pos_an_info)), s1_mme_index.index, s1_mme_index.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        UPDATE_IMSIT_FIELD(IMSI, action_imsi, imsi_search_d.imsi, s1_mme_table_d.imsi, sizeof(lte_imsi_t));

        if (TAI_VALID(s1ap->tai))
        {
            UPDATE_IMSIT_FIELD(TAI, action_imsi, imsi_search_d.tai, s1ap->tai, sizeof(lte_tai_t));
        }

        if (s1ap->ecgi_exist)
        {
            memcpy(&(imsi_search_d.ecgi), &s1ap->ecgi, sizeof(lte_ecgi_t));
            action_imsi |= IMSI_T_UPDATE_ECGI;
        }

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;

        imsi_search_d.mobile_type = MCS_LTE;/*用于标志为4g*/
        action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

        // create IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi,
        (void*)&imsi_search_d, sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Create Imsi table <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }

    }
    else if(EMM_ATTACH_COMPELETE == nas.EMM_message_type)
    {
        hydra_stat_inc(stat_pkts_s1ap_attachCompelete_pkts);
        update_all_table_ecgi(s1ap);
        if(MP_E_NONE == lte_signal_submit(s1ap,USR_ONLINE))
        {
            hydra_stat_inc(stat_lte_online_log);
        }
    }
    else if(EMM_MSG_GUTI_REOCATION_COMPELETE == nas.EMM_message_type)
    {

        update_all_table_ecgi(s1ap);
        if(MP_E_NONE == lte_signal_submit(s1ap,USR_GUTI_RALOCATION))
        {
            hydra_stat_inc(stat_lte_guti_relocation_log);
        }
    }
    else if(EMM_MSG_TAU_REQUEST == nas.EMM_message_type)
    {
        /* 更新ECGI */
        lte_table_s1_mme_enodeb_t s1_mme_cell   = {};
        uint64_t action_s1_mme = 0;
        hash_table_index_t s1_mme_index             = {};
        uint8_t valid_tai_flag                  = FALSE;
        lte_tai_t   all_0_tai                    = {0};

        if( MP_E_NONE != get_s1_mme_table_entry(s1ap, &s1_mme_cell))
        {
            return rv;
        }

        if(s1ap->ecgi_exist)
        {
            memcpy(&s1_mme_cell.ecgi, &s1ap->ecgi, sizeof(lte_ecgi_t));
            action_s1_mme |= S1_MMET_UPDATE_ECGI;
        }
        if(memcmp(s1ap->tai,all_0_tai,sizeof(lte_tai_t)))
        {
            valid_tai_flag = TRUE;
        }
        if(TRUE == valid_tai_flag)
        {
            memcpy(s1_mme_cell.tai,s1ap->tai,LTE_TAI_MAX_LEN);
            action_s1_mme   |= AN_INFOT_UPDATE_TAI;
        }

        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme, (void*)&s1_mme_cell, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table ecgi: <Failed>\n");
            return rv;
        }

        /* set ecgi to imsi table*/
        lte_table_imsi_t    imsi_search_d      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;

        UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &s1_mme_cell.imsi, sizeof(lte_imsi_t));

        memcpy(&(imsi_search_d.ecgi), &(s1_mme_cell.ecgi), sizeof(lte_ecgi_t));
        action_imsi |= IMSI_T_UPDATE_ECGI;
        if(TRUE == valid_tai_flag)
        {
            memcpy(imsi_search_d.tai,s1ap->tai,LTE_TAI_MAX_LEN);
            action_imsi   |= IMSI_T_UPDATE_TAI;
        }
        // update IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("initialUEMessage: update ImsiT <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        //更新s1u中的ecgi
        update_s1u_ecgi_by_imsi(imsi_search_d.imsi);
        //更新s1u中的tai
        if(TRUE == valid_tai_flag)
        {
            update_s1u_tai_by_imsi(imsi_search_d.imsi);
        }
    }

    return MP_E_NONE;
}

/* 查询S1-MME表项，更新KASME以及算法类型到imsi表项 */
mp_error_t lte_s1ap_downlinkNASTransport(void *packet_ptr, parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    // TODO
    // NAS EPS Mobility Management Message Type :
    // 1. Security mode command (0x5d)
    //    parse Type of ciphering algorithm: EPS encryption algorithm 128-EEA2 (2) from the packet and fill it into imsi table
    // 2. Authentication request (0x52)
    //    parse RAND value, and search S6-a table by RAND for KASME. Fill KASME into imsi table

    mp_code_t rv = MP_E_NONE;
    bool update_kasme = false;

    hash_key_t key_s1_mme                   = {};
    hash_key_t key_imsi                     = {};
    lte_table_s1_mme_enodeb_t s1_mme_table_d   = {};
    lte_table_s1_mme_enodeb_t   s1_mme_cell = {};

    uint64_t action_s1_mme = 0;
    hash_table_index_t s1_mme_index             = {};
    // search s1_mme table for imsi

    memcpy(&(s1_mme_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    s1_mme_table_d.lte_hash_para.access_node_id    = s1ap->access_node_id;
    s1_mme_table_d.guti_flag           = FALSE;
    parse_nas_t nas                    = s1ap->nas;



    update_s1_mme_hash_key(s1_mme_table_d.lte_hash_para.access_node_ip, s1_mme_table_d.lte_hash_para.access_node_id, &key_s1_mme);
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);
    LTE_DEBUG_PRINTF("EMM_message_type=%x\n" , nas.EMM_message_type);
    if (EMM_SECURITE_COMMAND == nas.EMM_message_type)
    {
        hydra_stat_inc(stat_relate_security_command);
        //Security mode command, parse type of ciphering algorithm
        s1_mme_table_d.cipher_alg_type = nas.cipher_alg_type;
        action_s1_mme |= AN_INFOT_UPDATE_ALG_TYPE;
        LTE_DEBUG_PRINTF("Update cipher Algorithm type of S1-MME to %d!\n" , nas.cipher_alg_type);
        hydra_stat_inc(stat_pkts_s1ap_alg_type_set);

        // update the Ciphering Algorithm type into S1-MME table
        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme,
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table cipher alg type failed! \n");
            return rv;
        }
    }
    else if (EMM_MSG_AUTH_REQUEST == nas.EMM_message_type)
    {
        hydra_stat_inc(stat_relate_auth_request);
        //Authentication request, parse rand and fill into s1_mme table
        memcpy(&(s1_mme_table_d.rand), &nas.rand, sizeof(lte_rand_t));
        action_s1_mme |= AN_INFOT_UPDATE_RAND;
        // update rand into S1-MME table at the same time search imsi info from s1_mme
        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_s1_mme,
        (void*)&s1_mme_table_d, sizeof(lte_table_s1_mme_enodeb_t), &s1_mme_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update S1-MME table rand failed! \n");
            return rv;
        }

        // Search  S1-MME table for imsi info
        // Search S1-MME table and imsi table to check if kasme has been update successfully
        LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   (void *)&s1_mme_cell, sizeof(s1_mme_cell));
        if(MP_CELL_FOUND != rv)
        {
            LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
            return MP_E_INTERNAL;
        }
        PRINTF_IMSI(s1_mme_cell.imsi);

        update_kasme = true;
    }
    else if((EMM_MSG_GUTI_REOCATION_CMD == nas.EMM_message_type)||(EMM_MSG_TAU_ACCEPT == nas.EMM_message_type))
    {
        lte_table_imsi_t            imsi_cell   = {};
        lte_guti_t  guti = {};

        if(packet_ptr == NULL)
        {
            return MP_E_EINVAL;
        }
        update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
        rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   &s1_mme_cell, sizeof(s1_mme_cell));
        if( MP_CELL_FOUND != rv )
        {
            LTE_DEBUG_PRINTF("The S1-MME table search failed ! rv = %d\n", rv);
            return MP_E_INTERNAL;
        }

        if( MP_E_NONE != get_imsi_table_entry(&s1_mme_cell.imsi[0], &imsi_cell))
        {
            return MP_E_INTERNAL;
        }


        nas_info_t nas_src = {};
        nas_plain_t nas_dst = {};
        uint8_t dst_data[MAX_CIPHER_LEN] = {};

        nas_src.sequence_no = nas.sequence_no;
        nas_src.bear_id = s1ap->bear_id;
        nas_src.dir = s1ap->direction;
        nas_src.data_len = nas.nas_cipher_len;
        //nas_src.data = (uint8_t*)(packet_ptr + nas.nas_cipher_off);
        nas_src.data = nas.nas_cipher_ptr;
        nas_src.type = s1_mme_cell.cipher_alg_type;
        memcpy(nas_src.kasme, imsi_cell.kasme, sizeof(lte_kasme_t));
        LTE_DEBUG_PRINTF("NAS data  nas.nas_cipher_len = %d !\n",nas.nas_cipher_len);
        LTE_DEBUG_PRINTF("NAS src data structure: sequence_no = %d, bear_id = %d, dir = %d, data_len = %d, data = %p, type = %d !\n",
                                 nas_src.sequence_no, nas_src.bear_id, nas_src.dir, nas_src.data_len, nas_src.data, nas_src.type);

        if(ENABLE == nas.ciphered_flag)
        {
            nas_dst.data = dst_data;
            nas_dst.len = 0;

            rv = nas_pdu_decrypt(&nas_src, &nas_dst); //解密报文
            if( MP_OK != rv )
            {
                LTE_DEBUG_PRINTF("Decrypt failed ! rv = %d\n", rv);
                hydra_stat_inc(stat_decrypt_failed);
                return rv;
            }
            // 2.1 parse guti from the plain data
            rv = nas_pdu_parse_guti(&nas_dst, guti);
            if( MP_OK != rv )
            {
                LTE_DEBUG_PRINTF("relate s1:Parse GUTI failed ! rv = %d\n", rv);
                hydra_stat_inc(stat_parse_guti_failed);
                return rv;
            }
        }
        else
        {
            memcpy(&guti, &nas.guti, sizeof(lte_guti_t));
        }

        PRINTF_GUTI(guti);

        lte_guti_t guti_null = {0};
        memset(guti_null, 0, sizeof(lte_guti_t));
        if (0 == memcmp(guti, guti_null, sizeof(lte_guti_t)))
        {
            hydra_stat_inc(stat_pkts_s1ap_guti_invalid);
            return MP_E_INTERNAL;
        }

        // 3. update imsi table, fill GUTI
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;

        if (GUTI_VALID(guti))
        {
            memcpy(imsi_cell.guti, guti, sizeof(lte_guti_t));
            action_imsi |= IMSI_T_UPDATE_GUTI;
        }
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(lte_table_imsi_t), &imsi_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update imsi table guti failed! \n");
            return rv;
        }

        /*如果是TAU ACCEPT消息，则发送TUA信令上报*/
        if(EMM_MSG_TAU_ACCEPT == nas.EMM_message_type)
        {
            if(MP_E_NONE == lte_signal_submit(s1ap,USR_TAU))
            {
                hydra_stat_inc(stat_lte_tau_log);
            }
        }

        return MP_E_NONE;
    }
    else
    {
        //we do not need to parse other packet yet
        LTE_DEBUG_PRINTF("Didn't find the match EMM message, EMM_message_type=%x\n" , nas.EMM_message_type);
        return MP_E_NONE;
    }

    if ( true == update_kasme )
    {

        /* get kasme */
        lte_kasme_t kasme = {};
        uint32_t len = 0;
        imsi_rand_info_t indata;
        memset(&indata, 0x00, sizeof(imsi_rand_info_t));

        memcpy(indata.imsi, s1_mme_cell.imsi, sizeof(lte_imsi_t));
        memcpy(indata.rand, s1_mme_cell.rand, sizeof(lte_rand_t));
        PRINTF_IMSI(indata.imsi);
        PRINTF_RAND(indata.rand);

        // get kasme by imsi and rand from S6A table
        rv = (mp_error_t)get_kasme_by_imsi((const imsi_rand_info_t *)&indata, &kasme, &len);
        if(MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("get_kasme_by_imsi failed <rv=%d>!\n", rv);
            hydra_stat_inc(stat_pkts_s1ap_get_kasme_failed);
            return rv;
        }
        if (( sizeof(lte_kasme_t) != len ) || ( NULL == kasme ))
        {
            return MP_E_INTERNAL;
        }
        update_imsi_hash_key(s1_mme_cell.imsi, &(key_imsi));

        lte_table_imsi_t imsi_cell = {};
        hash_table_index_t imsi_index       = {};
        uint64_t action_imsi = 0;

        memcpy(imsi_cell.imsi, s1_mme_cell.imsi, sizeof(lte_imsi_t));
        memcpy(imsi_cell.kasme, kasme, sizeof(lte_kasme_t));
        action_imsi |= IMSI_T_UPDATE_KASME;

        LTE_DEBUG_PRINTF("lte_s1ap_downlinkNASTransport Will update kasme!\n");
        PRINTF_IMSI(imsi_cell.imsi);
        PRINTF_KASME(imsi_cell.kasme);

        imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;

        imsi_cell.mobile_type = MCS_LTE;/*用于标志为4g*/
        action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

        /* update kasme into imsi table */
        action_imsi |= IMSI_T_UPDATE_IMSI;
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi,
                                         (void*)&imsi_cell, sizeof(lte_table_imsi_t), &imsi_index);
        if (MP_OK != rv)
        {
            LTE_DEBUG_PRINTF("Update IMSI table kasme failed! \n");
            hydra_stat_inc(stat_pkts_s1ap_update_imsi_kasme_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_s1ap_update_imsi_kasme_success);
    }

    return MP_E_NONE;
}

/* 会话结束，删除相关表项，触发老化操作 */
mp_error_t lte_s1ap_UEContextRelease(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_E_NONE;

    // S1AP-PDU: has two type initiatingMessage(0) and successfulOutcome (1)
    // we only trigger the delete operation when receive successfulOutcome (1) message

    // search s1_mme table for imsi
    // del related tables by imsi
    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    hydra_stat_inc(stat_relate_UeContxtRelease);//只统计UEContextReleaseComplete
    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
        return MP_E_INTERNAL;
    }

    PRINTF_IMSI(s1_mme_cell.imsi);
    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");

    if(MP_E_NONE == lte_signal_submit(s1ap,USR_OFFLINE))
    {
        hydra_stat_inc(stat_lte_offline_log);
    }

    // delete old imsi related tables
    rv = lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);
    if( MP_OK != rv )
    {
        LTE_DEBUG_PRINTF("Clear relate imsi table failed! rv = %d\n", rv);
        return rv;
    }
    // calling diamter API to delete s6a related tables.
    rv = del_s6a_node_by_imsi(s1_mme_cell.imsi);
    if( MP_OK != rv )
    {
        LTE_DEBUG_PRINTF("Clear relate s6a table failed! rv = %d\n", rv);
        return rv;
    }

    return MP_E_NONE;
}

/******************************************************************************
 * 函数名称    : lte_s1ap_path_swich_req
 * 描述        : 基于X1的ENodeB切换的关联处理
 * 调用        :
 * 被调用      :
 * 输入        : s1ap
 * 输出        : 无
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_error_t lte_s1ap_path_swich_req(parse_s1ap_t *s1ap)
{
    hash_key_t                              key_enb_mme_h={};
    hash_table_index_t                      index_enb_mme_h = {};
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_cell={};
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_table_d={};
    uint64_t                                action_mme = 0;

    if(NULL == s1ap)
    {
        return MP_E_PARAM;
    }

    /*查询enodeb_mme_handle表:该表以cn_ip、cn_id、an_ip为key*/
    enb_mme_handle_table_d.lte_hash_para.cn_id = s1ap->cn_id;
    memcpy(&(enb_mme_handle_table_d.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
    memcpy(&(enb_mme_handle_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    update_enb_mme_handle_table_key(s1ap->cn_ip,s1ap->cn_id,&(key_enb_mme_h));
    if( MP_CELL_FOUND != hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_enb_mme_h
                                ,&enb_mme_handle_cell, sizeof(enb_mme_handle_cell)))
    {
        LTE_DEBUG_PRINTF("search table enodeb mme handle failed ! \n");
        return MP_E_INTERNAL;
    }


    /*缓存enodeb_mme_handle表中的切换相关信息*/
    enb_mme_handle_table_d.handover_cache_info.valid = TRUE;

    if(s1ap->ecgi_exist)
    {
        /*缓存E-CGI*/
        memcpy(&enb_mme_handle_table_d.handover_cache_info.ecgi,&s1ap->ecgi,sizeof(lte_ecgi_t));
    }
    /*缓存TAI*/
    if (TAI_VALID(s1ap->tai))
    {
        memcpy(&enb_mme_handle_table_d.handover_cache_info.tai[0],&s1ap->tai[0],LTE_TAI_MAX_LEN);
    }
    action_mme |= CN_INFOT_UPDATE_HANDOVER_INFO;
    if(MP_E_NONE != create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_mme, (void*)&enb_mme_handle_table_d, sizeof(lte_table_enodeb_mme_handle_node_t), &index_enb_mme_h))
    {
        //LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
        //hydra_stat_inc(stat_pkts_imsi_table_failed);
       return MP_E_INTERNAL;
    }

    /* set ecgi to imsi table*/
    lte_table_imsi_t    imsi_search_d      = {};
    hash_table_index_t  imsi_index       = {};
    uint64_t            action_imsi = 0;

    UPDATE_IMSIT_FIELD(IMSI, action_imsi, &imsi_search_d.imsi, &enb_mme_handle_table_d.imsi, sizeof(lte_imsi_t));

    memcpy(&(imsi_search_d.ecgi), &(enb_mme_handle_table_d.handover_cache_info.ecgi), sizeof(lte_ecgi_t));
    action_imsi |= IMSI_T_UPDATE_ECGI;

    // update IMSI table
    if(MP_E_NONE != create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                            sizeof(lte_table_imsi_t), &imsi_index))
    {
        return MP_E_INTERNAL;
    }

    //更新s1u中的ecgi
    update_s1u_ecgi_by_imsi(imsi_search_d.imsi);
    return MP_E_NONE;
}

/******************************************************************************
 * 函数名称    : lte_s1ap_path_swich_respone
 * 描述        : 基于X1的ENodeB切换响应的关联处理
 * 调用        :
 * 被调用      :
 * 输入        : s1ap
 * 输出        : 无
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_error_t lte_s1ap_path_swich_respone(parse_s1ap_t *s1ap)
{
    mp_error_t                              rv = MP_E_NONE;
    hash_key_t                              key_enb_mme_h={};
    hash_table_index_t                      index_enb_mme_h = {};
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_cell={};
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_table_d={};
    uint64_t                                action_mme = 0;

    if(NULL == s1ap)
    {
        return MP_E_PARAM;
    }
    LTE_DEBUG_PRINTF("s1ap->is_enb_path_switch_suc = %d\n",s1ap->is_enb_path_switch_suc);
    if(FALSE == s1ap->is_enb_path_switch_suc)
    {
        /*切换失败处理流程*/
        /*查询enodeb_mme_handle表:该表以MME_UE_ID为key*/
        enb_mme_handle_table_d.lte_hash_para.cn_id = s1ap->cn_id;
        memcpy(&(enb_mme_handle_table_d.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
        memcpy(&(enb_mme_handle_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
        /*这是4G的基站切换切换，所以用update_enb_mme_handle_table_key去计算key*/
        update_enb_mme_handle_table_key(s1ap->cn_ip,s1ap->cn_id,&(key_enb_mme_h));
        if( MP_CELL_FOUND != hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_enb_mme_h,
                                   &enb_mme_handle_cell, sizeof(enb_mme_handle_cell)) )
        {
            LTE_DEBUG_PRINTF("search table enodeb mme handle failed  ! rv = %d\n", rv);
            return MP_E_INTERNAL;
        }

        /*清空enodeb_mme_handle表中的切换相关信息*/
        memset(&enb_mme_handle_table_d.handover_cache_info,0,sizeof(handover_cache_info_t));
        action_mme |= CN_INFOT_UPDATE_HANDOVER_INFO;

        rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_mme, (void*)&enb_mme_handle_table_d, sizeof(lte_table_enodeb_mme_handle_node_t), &index_enb_mme_h);
        if(MP_E_NONE != rv)
        {
            //LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
            //hydra_stat_inc(stat_pkts_imsi_table_failed);
           return rv;
        }
    }
    else/*切换成功处理流程*/
    {
        /*查询enodeb_mme_handle表:该表以MME_UE_ID为key*/
        enb_mme_handle_table_d.lte_hash_para.cn_id = s1ap->cn_id;
        memcpy(&(enb_mme_handle_table_d.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
        memcpy(&(enb_mme_handle_table_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
        /*这是4G的基站切换切换，获取cn_info表项要用update_enb_mme_handle_table_key*/
        update_enb_mme_handle_table_key(s1ap->cn_ip,s1ap->cn_id,&(key_enb_mme_h));
        if( MP_CELL_FOUND != hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO),
                                                &key_enb_mme_h, &enb_mme_handle_cell, sizeof(enb_mme_handle_cell)) )
        {
            LTE_DEBUG_PRINTF("The S1-MME table search failed ! rv = %d\n", rv);
            hydra_stat_inc(stat_path_switch_rsp_search_cn_info_fail);
            return MP_E_FAIL;
        }

        if(!enb_mme_handle_cell.handover_cache_info.valid)
        {
            //切换缓存信息无效，直接返回无需处理
            return MP_E_NONE;
        }

        /******************************获取源S1_MME表项*************************************/
        hash_key_t key_s1_mme={};
        lte_table_s1_mme_enodeb_t   s1_mme_table_old_d  = {};
        lte_table_s1_mme_enodeb_t   s1_mme_cell_old     = {};

        memcpy(&(s1_mme_table_old_d.lte_hash_para.access_node_ip), &(enb_mme_handle_cell.lte_hash_para.access_node_ip), sizeof(ip_comm_t));
        s1_mme_table_old_d.lte_hash_para.access_node_id = enb_mme_handle_cell.lte_hash_para.access_node_id;

        update_s1_mme_hash_key(s1_mme_table_old_d.lte_hash_para.access_node_ip, s1_mme_table_old_d.lte_hash_para.access_node_id, &(key_s1_mme));

        LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
        if( MP_CELL_FOUND != hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   &s1_mme_cell_old, sizeof(s1_mme_cell_old)) )
        {    

            LTE_DEBUG_PRINTF("The S1-MME table search failed !\n");
            return MP_E_INTERNAL;
        }


        /******************************创建新的S1_MME表项*************************************/
        
        uint64_t                                action_s1_mme = 0;
        lte_table_s1_mme_enodeb_t               s1_mme_cell_new     = {};
        hash_table_index_t                      index_s1_mme_new = {};

        memset(&action_s1_mme,0xff,sizeof(uint64_t));
        memcpy(&s1_mme_cell_new,&s1_mme_cell_old,sizeof(lte_table_s1_mme_enodeb_t));

        memcpy(&(s1_mme_cell_new.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
        s1_mme_cell_new.lte_hash_para.access_node_id = s1ap->access_node_id;
        
        s1_mme_cell_new.ecgi = enb_mme_handle_cell.handover_cache_info.ecgi;
        action_s1_mme |= S1_MMET_UPDATE_ECGI;
        
        memcpy(s1_mme_cell_new.tai,enb_mme_handle_cell.handover_cache_info.tai,sizeof(lte_tai_t));
        action_s1_mme |= AN_INFOT_UPDATE_TAI;
        
        s1_mme_cell_new.aging = (uint16_t)g_aging_timer_max;
        action_s1_mme |= AN_INFOT_UPDATE_AGING;
        
        s1_mme_cell_new.mobile_type = MCS_LTE;/*用于标志4g*/
        action_s1_mme |= AN_INFOT_UPDATE_MOBILE_TYPE;
        
        rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_s1_mme, (void*)&s1_mme_cell_new, sizeof(lte_table_s1_mme_enodeb_t), &index_s1_mme_new);
        if(MP_E_NONE != rv)
        {
           LTE_DEBUG_PRINTF("create_update_table_by_hash returned a error rv = %d\n",rv);
           return rv;
        }

        /******************************更新enb_mme_handle_table_d表项*************************************/
        lte_tai_t   cache_tai;

        action_mme = 0;
        memcpy(&(enb_mme_handle_cell.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
        action_mme |= CN_INFOT_UPDATE_AN_IP;
        enb_mme_handle_cell.lte_hash_para.access_node_id = s1ap->access_node_id;
        action_mme |= CN_INFOT_UPDATE_AN_ID;

        memcpy(cache_tai,enb_mme_handle_cell.handover_cache_info.tai,sizeof(lte_tai_t));

        /*清空enodeb_mme_handle表中的切换相关信息*/
        memset(&enb_mme_handle_cell.handover_cache_info,0,sizeof(handover_cache_info_t));
        action_mme |= CN_INFOT_UPDATE_HANDOVER_INFO;

        enb_mme_handle_cell.lte_hash_para.cn_id = s1ap->cn_id;

        rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_mme, (void*)&enb_mme_handle_cell, sizeof(lte_table_enodeb_mme_handle_node_t), &index_enb_mme_h);
        if(MP_E_NONE != rv)
        {
            //LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
            //hydra_stat_inc(stat_pkts_imsi_table_failed);
            LTE_DEBUG_PRINTF("create_update_table_by_hash returned a error rv = %d\n",rv);
           return rv;
        }

        /******************************更新IMSI表项的INDEX*************************************/
        // 3. update imsi table, fill s1_mme index
         /* step 1. Imsi */
        lte_table_imsi_t    imsi_search_d      = {};
        lte_table_imsi_t    imsi_cell      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;
        hash_key_t          key_imsi={};

        memcpy(&imsi_search_d.imsi[0],&s1_mme_cell_old.imsi[0],LTE_IMSI_LEN);
        update_imsi_hash_key(&imsi_search_d.imsi[0], &(key_imsi));
        if( MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                   &imsi_cell, sizeof(imsi_cell)) )
        {
            LTE_DEBUG_PRINTF("The imsi table search failed ! rv = %d\n", rv);
            return MP_E_INTERNAL;
        }


        lte_table_imsi_t    imsi_update_cell      = {};
        // set s1_mme index to imsi table
        imsi_update_cell.pos_an_info = index_s1_mme_new;
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        memcpy(imsi_update_cell.tai,cache_tai,sizeof(lte_tai_t));
        action_imsi |= IMSI_T_UPDATE_TAI;

        memcpy(&imsi_update_cell.imsi[0],&imsi_cell.imsi[0],LTE_IMSI_LEN);

        memcpy(&(imsi_update_cell.ecgi), &(s1_mme_cell_new.ecgi),sizeof(lte_ecgi_t));
        action_imsi |= IMSI_T_UPDATE_ECGI;

        // update IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_update_cell, sizeof(lte_table_imsi_t), &imsi_index);
        if(MP_E_NONE != rv)
        {
            LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
           return rv;
        }

        /******************************更新s1u表*************************************/
        lte_table_gtpu_t    s1u_search_d = {};
        uint64_t            action_s1u = 0;
        memcpy(&s1u_search_d.ecgi,&imsi_update_cell.ecgi,sizeof(lte_ecgi_t));
        action_s1u  |= GTP_U_T_UPDATE_ECGI;

        memcpy(s1u_search_d.tai,imsi_update_cell.tai,sizeof(lte_tai_t));
        action_s1u  |= GTP_U_T_UPDATE_TAI;
        
        update_s1u_table_by_imsi(imsi_search_d.imsi,&s1u_search_d,action_s1u);   
        
        /*信令日志上报*/
        if(MP_E_NONE == lte_signal_submit(s1ap,USR_ENB_SWITCH))
        {
            hydra_stat_inc(stat_lte_handover_log);
        }

    }

    return MP_E_NONE;
}


/******************************************************************************
 * 函数名称    : lte_handover_notify
 * 描述        : 基于S1的ENodeB切换且MME、SGW不变的关联处理
 * 调用        :
 * 被调用      :
 * 输入        : s1ap
 * 输出        : 无
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_error_t lte_handover_notify(parse_s1ap_t *s1ap)
{   mp_error_t                              rv = MP_E_NONE;
    hash_key_t                              key_enb_mme_h={};
    hash_table_index_t                      index_enb_mme_h = {};
    lte_table_enodeb_mme_handle_node_t      enb_mme_handle_cell={};
    uint64_t                                action_mme = 0;

    /*查询enodeb_mme_handle表:该表以cn_ip、cn_id、an_ip为key*/
    enb_mme_handle_cell.lte_hash_para.cn_id = s1ap->cn_id;
    memcpy(&(enb_mme_handle_cell.lte_hash_para.cn_ip), &(s1ap->cn_ip), sizeof(ip_comm_t));
    memcpy(&(enb_mme_handle_cell.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    /*这是4G的基站切换切换，获取cn_info表项要用update_enb_mme_handle_table_key*/
    update_enb_mme_handle_table_key(s1ap->cn_ip,s1ap->cn_id,&(key_enb_mme_h));
    if(MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_enb_mme_h,
                                   &enb_mme_handle_cell, sizeof(enb_mme_handle_cell)))
    {
        LTE_DEBUG_PRINTF("The enodeb_mme_handle table search failed ! \n");
        return MP_E_INTERNAL;
    }

    /******************************获取源S1_MME表项*************************************/

    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_table_old_d  = {};
    lte_table_s1_mme_enodeb_t   s1_mme_cell_old     = {};

    memcpy(&(s1_mme_table_old_d.lte_hash_para.access_node_ip), &(enb_mme_handle_cell.lte_hash_para.access_node_ip), sizeof(ip_comm_t));
    s1_mme_table_old_d.lte_hash_para.access_node_id = enb_mme_handle_cell.lte_hash_para.access_node_id;

    update_s1_mme_hash_key(s1_mme_table_old_d.lte_hash_para.access_node_ip, s1_mme_table_old_d.lte_hash_para.access_node_id, &(key_s1_mme));

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    if(MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   &s1_mme_cell_old, sizeof(s1_mme_cell_old)))
    {
        LTE_DEBUG_PRINTF("The S1-MME table search failed !\n");
        hydra_stat_inc(stat_hanover_notify_search_s1_mme_fail);
        return MP_E_INTERNAL;
    }

    /******************************创建新的S1_MME表项*************************************/
    uint64_t                                action_s1_mme = 0;
    lte_table_s1_mme_enodeb_t               s1_mme_cell_new     = {};
    hash_table_index_t                      index_s1_mme_new = {};

    memset(&action_s1_mme,0xff,sizeof(uint64_t));
    memcpy(&s1_mme_cell_new,&s1_mme_cell_old,sizeof(lte_table_s1_mme_enodeb_t));

    memcpy(&(s1_mme_cell_new.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    s1_mme_cell_new.lte_hash_para.access_node_id = s1ap->access_node_id;
    if (ECGI_VALID(s1ap->ecgi))
    {
        s1_mme_cell_new.ecgi = s1ap->ecgi;
        action_s1_mme |= S1_MMET_UPDATE_ECGI;
    }
    if(TAI_VALID(s1ap->tai))
    {
        memcpy(s1_mme_cell_new.tai,s1ap->tai,sizeof(lte_tai_t));
        action_s1_mme |= AN_INFOT_UPDATE_TAI;
    }

    s1_mme_cell_new.mobile_type = MCS_LTE;/*用于标志4g*/
    action_s1_mme |= AN_INFOT_UPDATE_MOBILE_TYPE;

    s1_mme_cell_new.aging = (uint16_t)g_aging_timer_max;
    action_s1_mme |= AN_INFOT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_s1_mme, (void*)&s1_mme_cell_new, sizeof(lte_table_s1_mme_enodeb_t), &index_s1_mme_new);
    if(MP_E_NONE != rv)
    {
       LTE_DEBUG_PRINTF("create_update_table_by_hash returned a error rv = %d\n",rv);
       return rv;
    }

    /******************************更新enb_mme_handle_table_d表项*************************************/
    action_mme = 0;
    memcpy(&(enb_mme_handle_cell.lte_hash_para.access_node_ip), &(s1ap->access_node_ip),sizeof(ip_comm_t));
    action_mme |= CN_INFOT_UPDATE_AN_IP;
    enb_mme_handle_cell.lte_hash_para.access_node_id = s1ap->access_node_id;
    action_mme |= CN_INFOT_UPDATE_AN_ID;

    enb_mme_handle_cell.lte_hash_para.cn_id = s1ap->cn_id;

    rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_mme, (void*)&enb_mme_handle_cell, sizeof(lte_table_enodeb_mme_handle_node_t), &index_enb_mme_h);
    if(MP_E_NONE != rv)
    {
        //LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
        //hydra_stat_inc(stat_pkts_imsi_table_failed);
        LTE_DEBUG_PRINTF("create_update_table_by_hash returned a error rv = %d\n",rv);
       return rv;
    }

    /******************************更新IMSI表项的INDEX*************************************/
    // 3. update imsi table, fill s1_mme index
     /* step 1. Imsi */
    lte_table_imsi_t    imsi_search_d      = {};
    lte_table_imsi_t    imsi_cell      = {};
    hash_table_index_t  imsi_index       = {};
    uint64_t            action_imsi = 0;
    hash_key_t          key_imsi={};

    memcpy(&imsi_search_d.imsi[0],&s1_mme_cell_old.imsi[0],LTE_IMSI_LEN);
    update_imsi_hash_key(&imsi_search_d.imsi[0], &(key_imsi));
    if(MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                   &imsi_cell, sizeof(imsi_cell)))
    {
        LTE_DEBUG_PRINTF("The IMSI table search failed !\n");
        return MP_E_INTERNAL;
    }

    lte_table_imsi_t    imsi_update_cell      = {};
    // set s1_mme index to imsi table
    imsi_update_cell.pos_an_info = index_s1_mme_new;
    action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

    if (TAI_VALID(s1ap->tai))
    {
        memcpy(imsi_update_cell.tai,s1ap->tai,sizeof(lte_tai_t));
        action_imsi |= IMSI_T_UPDATE_TAI;
    }

    memcpy(&imsi_update_cell.imsi[0],&imsi_cell.imsi[0],LTE_IMSI_LEN); 
    if (ECGI_VALID(s1_mme_cell_new.ecgi))
    {
        memcpy(&(imsi_update_cell.ecgi), &(s1_mme_cell_new.ecgi), sizeof(lte_ecgi_t));
        action_imsi |= IMSI_T_UPDATE_ECGI;
    }

    // update IMSI table
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_update_cell, sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_E_NONE != rv)
    {
        LTE_DEBUG_PRINTF("initialUEMessage: create ImsiT <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    /******************************更新s1u表*************************************/
    lte_table_gtpu_t    s1u_search_d = {};
    uint64_t            action_s1u = 0;
    memcpy(&s1u_search_d.ecgi,&imsi_update_cell.ecgi,sizeof(lte_ecgi_t));
    action_s1u  |= GTP_U_T_UPDATE_ECGI;

    memcpy(s1u_search_d.tai,imsi_update_cell.tai,sizeof(lte_tai_t));
    action_s1u  |= GTP_U_T_UPDATE_TAI;
    
    update_s1u_table_by_imsi(imsi_search_d.imsi,&s1u_search_d,action_s1u);   

    /*信令日志上报*/
    if(MP_E_NONE == lte_signal_submit(s1ap,USR_ENB_SWITCH))
    {
        hydra_stat_inc(stat_lte_handover_log);
    }
    return MP_E_NONE;

}

static const uint8_t end_mask[]     = { 0xf0, 0xf };
/* ulMaxLen使用BCD号码长度 */
uint32_t bcdlen(const uint8_t *bcd_code, uint32_t max_Len)
{
    uint32_t i = 0;
    uint32_t len = 0;

    for(i = 0; i < max_Len; i++) /* 通过ulMaxLen保证不会越界 */
    {
        if( (bcd_code[len/2] & end_mask[len%2]) == end_mask[len%2] )
            break;

        len++;
    }

    return len;
}

void get_mnc_from_plmnIdentity(uint8_t *plmn_id,uint8_t *mnc_buf)
{
    if(plmn_id==NULL || mnc_buf==NULL)
    {
        return;
    }

    mnc_buf[0] = (*(plmn_id + 2) & 0x0F) << 4;
    mnc_buf[0] |= (*(plmn_id + 2) & 0xF0) >> 4;

    mnc_buf[1] = 0xFF;
    mnc_buf[1] = *(plmn_id + 1) & 0xF0;
}

mp_error_t get_s1_mme_table_entry(parse_s1ap_t *s1ap,lte_table_s1_mme_enodeb_t *s1_mme_entry)
{
    hash_key_t key_s1_mme={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};
    mp_error_t rv = MP_E_NONE;

    if( NULL == s1ap || NULL == s1_mme_entry)
    {
        return MP_E_PARAM;
    }


    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx,%lx,%lx\n" , key_s1_mme.data[0],key_s1_mme.data[1],key_s1_mme.data[2]);
    if(MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme,
                                   &s1_mme_cell, sizeof(s1_mme_cell)))
    {
        LTE_DEBUG_PRINTF("The S1-MME table search failed !\n");
        hydra_stat_inc(stat_search_imsi_failed_1);
        return MP_E_INTERNAL;
    }
    memcpy(s1_mme_entry, &s1_mme_cell, sizeof(lte_table_s1_mme_enodeb_t));
    return rv;
}


mp_error_t get_imsi_table_entry(uint8_t *imsi_ptr,lte_table_imsi_t *s1_imsi_entry)
{
    hash_key_t                  key_imsi    = {};
    lte_table_imsi_t            imsi_cell   = {};
    lte_table_imsi_t            imsi_table_d   = {};
    mp_error_t rv = MP_E_NONE;

    if( NULL == imsi_ptr || NULL == s1_imsi_entry)
    {
        return MP_E_PARAM;
    }

    memcpy(imsi_table_d.imsi, imsi_ptr, sizeof(lte_imsi_t));
    update_imsi_hash_key(imsi_ptr, &(key_imsi));

    LTE_DEBUG_PRINTF("Search imsi table for kasme! \n");
    if(MP_CELL_FOUND !=  hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                                   &imsi_cell, sizeof(imsi_cell)))
    {
        LTE_DEBUG_PRINTF("The imsi table search failed !\n");
        hydra_stat_inc(stat_search_imsi_failed_1);
        return MP_E_INTERNAL;
    }

    memcpy(s1_imsi_entry, &imsi_cell, sizeof(lte_table_imsi_t));

    return rv;
}

uint8_t lte_signal_enable_get(void)
{
    return TRUE;
}
//获取报文的配置
mp_error_t  pkt_setup_get(pkt_setup_t  *setup)
{
    if(NULL == setup)
    {
        return MP_E_PARAM;
    }
    //memcpy(setup,&send_pkt_setup,sizeof(pkt_setup_t));
    return MP_E_NONE;
}
//配置报文的ip,mac等等
mp_error_t  pkt_setup_set(pkt_setup_t const *setup)
{
    //memcpy(&send_pkt_setup,setup,sizeof(pkt_setup_t));
    return MP_E_NONE;
}
mp_error_t  send_buf(uint8_t oifgrp_id,uint8_t *buf,uint32_t size)
{
    return MP_OK;
}

mp_error_t lte_signal_submit(parse_s1ap_t *s1ap,uint8_t event)
{
#if M_LTE_SIGNAL_SUBMIT//信令日志模块使能宏开关
    uint8_t buf[1024]                           = {0};
    uint16_t payload_len                        = 0;
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};
    lte_table_imsi_t            imsi_cell       = {};
    int32_t oifgrp_id                           = 0;
    pack_info_t   event_info                    = {};
    pkt_setup_t   pkt_setup_backup              = {};
    pkt_setup_t   pkt_setup_tmp                 = {};
    if(FALSE == lte_signal_enable_get())//如果lte_signal_enable_get()返回FALSE说明信令日志功能是禁用的
    {
        return MP_E_INTERNAL;
    }
    if( NULL == s1ap )
    {
        return MP_E_PARAM;
    }
    //获取用户对应的s1-mme表的表项
    if( MP_E_NONE != get_s1_mme_table_entry(s1ap, &s1_mme_cell))
    {
        hydra_stat_inc(stat_lte_signaling_log_search_an_info_fail);
        return MP_E_NOT_FOUND;
    }

    //获取imsi总表
    if( MP_E_NONE != get_imsi_table_entry(&s1_mme_cell.imsi[0], &imsi_cell))
    {
        hydra_stat_inc(stat_lte_signaling_log_search_imsi_table_fail);
        return MP_E_NOT_FOUND;
    }

    event_info.event_type = event;
    if(s1_mme_cell.mask & AN_INFOT_ECGI_VALID)
    {
        memcpy(&event_info.ecgi,&s1_mme_cell.ecgi,sizeof(lte_ecgi_t));
        event_info.ecgi_en = ENABLE;
    }
    else
    {
        event_info.ecgi_en = DISABLE;
    }
    
    if(s1_mme_cell.mask & AN_INFOT_IMSI_VALID)
    {
        memcpy(&event_info.imsi,&s1_mme_cell.imsi,sizeof(lte_imsi_t));
        event_info.imsi_en= ENABLE;
    }
    else
    {
        event_info.imsi_en= DISABLE;
    }

    if(imsi_cell.mask & IMSI_T_IMEI_VALID)
    {
        memcpy(&event_info.imei,&imsi_cell.imei,sizeof(lte_imei_t));
        event_info.imei_en = ENABLE;
    }
    else
    {
        event_info.imei_en= DISABLE;
    }
    
    if(imsi_cell.mask & IMSI_T_MSISDN_VALID)
    {
        memcpy(&event_info.st_msisdn.msisdn,&imsi_cell.msisdn,sizeof(lte_msisdn_t));
        //计算msisdn的长度
        event_info.st_msisdn.msisdn_len = imsi_cell.ex_field.msisdn_len;
        event_info.msisdn_en = ENABLE;
    }
    else
    {
        event_info.msisdn_en = DISABLE;
    }

    
    memset(&event_info.mnc[0],0xff,LTE_MNC_MAX_LEN);
    if(event_info.ecgi_en)
    {
        //从plmn里面去获取mnc,plmn是由mcc+mnc
        get_mnc_from_plmnIdentity(&event_info.ecgi.lte_plmn[0],&event_info.mnc[0]);
        event_info.mnc_en = ENABLE;
    }
    else
    {
        event_info.mnc_en = DISABLE;
    }

    //将event_info里面的用户信息进行打包
    if(MP_E_NONE != signal_log_usr_info_pack(event_info,buf,1024,&payload_len,
                                            PACK_IMSI|PACK_IMEI|PACK_MSISDN|PACK_ECGI|PACK_MNC))
    {
        return MP_E_INTERNAL;
    }
    
    oifgrp_id = 1;//lte_signal_oifgrp_get();
    //获取当前的packet 配置
    pkt_setup_get(&pkt_setup_backup);
    pkt_setup_tmp = pkt_setup_backup;
     /*源目的ip的版本必须相同*/
    if(s1ap->access_node_ip.version != s1ap->cn_ip.version)
    {
        return MP_E_INTERNAL;
    }
      /*判断是否是ipv4*/
    if(IP_V4 == s1ap->access_node_ip.version)
    {
        /*发送ipv4的信令日志报文,日志报文都是udp报文*/
        pkt_setup_tmp.output_packet_type = PACKET_TYPE_IPV4_UDP;
    }
    else
    {
        pkt_setup_tmp.output_packet_type = PACKET_TYPE_IPV6_UDP;
    }
    pkt_setup_tmp.src_ip = s1ap->access_node_ip;
    pkt_setup_tmp.dest_ip = s1ap->cn_ip;
    pkt_setup_tmp.dest_port = htons(8888);
    pkt_setup_tmp.src_port = htons(6666);
    //设置packet配置
    pkt_setup_set(&pkt_setup_tmp);
    if(MP_E_NONE != send_buf(oifgrp_id,buf,payload_len))
    {
        return MP_E_INTERNAL;
    }
    //恢复packet配置
    pkt_setup_set(&pkt_setup_backup);
    return MP_E_NONE;
#else
    return MP_E_NONE;
#endif
}
static mp_error_t lte_s1ap_ERABSetupRequest(parse_s1ap_t * s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;

    // query s1_mme table entry and rewrite imsi field
    hash_key_t key_s1_mme = {};
    hash_table_index_t index_s1_mme = {};
    lte_table_s1_mme_t   s1_mme_cell     = {};
    lte_table_s1_mme_t s1_mme_search_d = {};

    if (cvmx_unlikely( ((0 == s1ap->rab_info.tip.ip.u64[0]) && (0 == s1ap->rab_info.tip.ip.u64[1]))
                    || 0 == s1ap->rab_info.teid))
    {
        hydra_stat_inc(stat_pkts_info_incompelte_erab_rst);
        return MP_OK;
    }

    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &key_s1_mme);

    memcpy(&(s1_mme_search_d.lte_hash_para.access_node_ip), &(s1ap->access_node_ip), sizeof(ip_comm_t));
    s1_mme_search_d.lte_hash_para.access_node_id = s1ap->access_node_id;

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme,
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1_MME table search failed ! rv = %d\n", rv);
        return rv;
    }

    // re-write imsi into s1-mme table entry, if imsi field of s1-mme table is valid, then return
    if (s1_mme_cell.mask & AN_INFOT_IMSI_VALID)
    {
        return MP_OK;
    }

    // query s1u-sgw table entry with ip and teid located in s1ap
    hash_key_t key_s1u_sgw = {};
    hash_table_index_t index_s1u_sgw = {};
    lte_table_s1u_sgw_t   s1u_sgw_cell     = {};
    lte_table_s1u_sgw_t s1u_sgw_search_d = {};

    update_fteid_hash_key(s1ap->rab_info.tip, s1ap->rab_info.teid, &key_s1u_sgw);

    memcpy(&(s1u_sgw_search_d.trans_layer_ip), &(s1ap->rab_info.tip), sizeof(ip_comm_t));
    s1u_sgw_search_d.teid = s1ap->rab_info.teid;

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1U_SGW), &key_s1u_sgw,
                               &s1u_sgw_cell, sizeof(s1u_sgw_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1U_SGW table search failed ! rv = %d\n", rv);
        return rv;
    }


    // query imsi table entry with imsi value located in s1u-sgw
    hash_key_t key_imsi = {};
    hash_table_index_t index_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};
    lte_table_imsi_t imsi_search_d = {};

    update_imsi_hash_key(s1u_sgw_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }


    //rewrite s1-mme imsi
    uint64_t action_s1_mme = 0;

    memcpy(s1_mme_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));
    action_s1_mme |= AN_INFOT_UPDATE_IMSI;

    rv = create_update_table_by_hash(TABLE_S1_MME, UPDATE_TABLE, action_s1_mme,
                                     (void*)&s1_mme_search_d, sizeof(lte_table_s1_mme_t), &index_s1_mme);
    if (MP_OK != rv)
    {
        return rv;
    }

    // update imsi table entry field: TAI, s1-mme index
    uint64_t action_imsi = 0;

    memcpy(imsi_search_d.imsi, imsi_cell.imsi, sizeof(lte_imsi_t));

    if (!(imsi_cell.mask & IMSI_T_POS_AN_INFO_VALID))
    {
        CHECK_UPDATE_IMSI_OF_TAI(imsi_cell, imsi_search_d, s1_mme_cell.tai, action_imsi);

        SET_TABLE_INDEX((&(imsi_search_d.pos_an_info)), index_s1_mme.index, index_s1_mme.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;

        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d,
                                         sizeof(lte_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            return rv;
        }

        // update s1u_sgw TAI field
        if (!(s1u_sgw_cell.mask & GTP_U_T_TAI_VALID))
        {
            uint64_t action_s1_sgw = 0;

            memcpy(&s1u_sgw_search_d.tai, s1_mme_cell.tai, sizeof(lte_tai_t));
            action_s1_sgw |= GTP_U_T_UPDATE_TAI;

            rv = create_update_table_by_hash(TABLE_S1U_SGW, UPDATE_TABLE, action_s1_sgw, (void*)&s1u_sgw_search_d,
                                             sizeof(lte_table_s1u_sgw_t), &index_s1u_sgw);
            if(MP_OK != rv)
            {
                return rv;
            }
        }


        // update s1u_eNB TAI field
        uint64_t action_s1u_eNB = 0;
        lte_table_gtpu_t s1u_eNB_cell = {};
        hash_table_index_t index_s1u_eNB = {};

        rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S1U_ENB), &imsi_cell.pos_dl_gtp_u[BEAR_DEFAULT],
                                                      (void *)&s1u_eNB_cell, sizeof(lte_table_s1u_eNB_t));
        if (MP_NOT_FOUND == rv)
        {
            return rv;
        }

        if (!(s1u_eNB_cell.mask & GTP_U_T_TAI_VALID))
        {

            memcpy(&s1u_eNB_cell.tai, s1_mme_cell.tai, sizeof(lte_tai_t));
            action_s1u_eNB |= GTP_U_T_UPDATE_TAI;

            rv = create_update_table_by_hash(TABLE_S1U_ENB, UPDATE_TABLE, action_s1u_eNB, (void*)&s1u_eNB_cell,
                                             sizeof(lte_table_s1u_eNB_t), &index_s1u_eNB);
            if(MP_OK != rv)
            {
                return rv;
            }
        }

    }

    return  MP_E_NONE;
}

static mp_error_t lte_s1ap_ERABSetupResponse(parse_s1ap_t * s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);

    mp_code_t rv = MP_OK;

    // query s1_mme table entry with s1ap->access_node_ip and s1ap->access_node_id
    hash_key_t key_s1_mme = {};
    lte_table_s1_mme_t   s1_mme_cell     = {};

    if (cvmx_unlikely( ((0 == s1ap->rab_info.tip.ip.u64[0]) && (0 == s1ap->rab_info.tip.ip.u64[1]))
                    || 0 == s1ap->rab_info.teid))
    {
        hydra_stat_inc(stat_pkts_info_incompelte_erab_rsp);
        return MP_OK;
    }

    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &key_s1_mme);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_S1_MME), &key_s1_mme,
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The S1_MME table search failed ! rv = %d\n", rv);
        return rv;
    }

    // query imsi table entry with s1_mme->imsi
    hash_key_t key_imsi = {};
    lte_table_imsi_t   imsi_cell     = {};

    update_imsi_hash_key(s1_mme_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi,
                               &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("The IMSI table search failed ! rv = %d\n", rv);
        return rv;
    }


    if (imsi_cell.mask & IMSI_T_POS_DL_GTP_U_SECOND_VALID)
    {
        return MP_OK;
    }

    // create s1u_eNB table entry
    uint64_t action_s1u_enodeb = 0;
    lte_table_gtpu_t s1u_search_d = {};
    hash_table_index_t s1u_enodeb_index = {};

    memcpy(&(s1u_search_d.trans_layer_ip), &(s1ap->rab_info.tip), sizeof(ip_comm_t));
    action_s1u_enodeb |=  GTP_U_T_UPDATE_GTP_IP;

    s1u_search_d.teid =  s1ap->rab_info.teid;
    action_s1u_enodeb |=  GTP_U_T_UPDATE_TEID;

    memcpy(&(s1u_search_d.user_ip), &(imsi_cell.pdn.pdn_addr), sizeof(ip_comm_t));
    action_s1u_enodeb |= GTP_U_T_UPDATE_USER_IP;


    if (imsi_cell.mask & IMSI_T_IMSI_VALID)
    {
        memcpy(s1u_search_d.imsi , imsi_cell.imsi, sizeof(lte_imsi_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_IMSI;
    }

    if (imsi_cell.mask & IMSI_T_IMEI_VALID)
    {
        memcpy(s1u_search_d.imei , imsi_cell.imei, sizeof(lte_imei_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_IMEI;
    }

    if (imsi_cell.mask & IMSI_T_MSISDN_VALID)
    {
        memcpy(s1u_search_d.msisdn , imsi_cell.msisdn, sizeof(lte_msisdn_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_MSISDN;
    }

    if (imsi_cell.mask & IMSI_T_GUTI_VALID)
    {
        memcpy(s1u_search_d.guti, imsi_cell.guti, sizeof(lte_guti_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_GUTI;
    }

    if (imsi_cell.mask & IMSI_T_IMSI_VALID)
    {
        memcpy(s1u_search_d.tai,  imsi_cell.tai,  sizeof(lte_tai_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_TAI;
    }

    if (imsi_cell.mask & IMSI_T_EX_FIELD_VALID)
    {
        s1u_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
        action_s1u_enodeb |= GTP_U_T_UPDATE_EX_FIELD;
    }

    if (imsi_cell.mask & IMSI_T_UPDATE_ECGI_VALID)
    {
        memcpy(&s1u_search_d.ecgi, &imsi_cell.ecgi, sizeof(lte_ecgi_t));
        action_s1u_enodeb |= GTP_U_T_UPDATE_ECGI;
    }

#ifdef RELATE_AGING
    s1u_search_d.aging = (uint16_t)g_aging_timer_max;
    action_s1u_enodeb |= GTP_U_T_UPDATE_AGING;
#endif

#ifdef STAT_TEST
    s1u_search_d.is_create_relate = 1;
    s1u_search_d.b0_relate_gtpu_num = 0;
    s1u_search_d.b1_relate_gtpu_num = 0;
    action_s1u_enodeb |= GTP_U_T_UPDATE_CREATE_REALTE;
    action_s1u_enodeb |= GTP_U_T_UPDATE_B0_NUM;
    action_s1u_enodeb |= GTP_U_T_UPDATE_B1_NUM;
#endif

    s1u_search_d.mobile_type = MCS_LTE;/*用于标志为4g*/
    action_s1u_enodeb |= GTP_U_T_UPDATE_MOBILE_TYPE;

    rv = create_update_table_by_hash(TABLE_GTP_U, CREATE_TABLE, action_s1u_enodeb,
                                     (void *)&s1u_search_d, sizeof(lte_table_gtpu_t), &s1u_enodeb_index);
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

    rv = lte_update_s1u_bearer(imsi_search_d.pos_dl_gtp_u, s1u_enodeb_index.index,
                               s1u_enodeb_index.node, s1ap->bear_id);
    if(MP_OK != rv)
    {
        return rv;
    }
    action_imsi |= IMSI_T_UPDATE_POS_DL_GTP_U_SECOND;

    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSI_T_UPDATE_AGING;

    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_search_d,
                                     sizeof(lte_table_imsi_t), &imsi_index);
    if(MP_OK != rv)
    {
        LTE_DEBUG_PRINTF("Create Session request: update imsi table <Failed>\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    return  MP_E_NONE;
}

mp_error_t lte_s1ap_ERABSetup(parse_s1ap_t *s1ap)
{
    if (DOWN_LINK == s1ap->direction)
    {
        lte_s1ap_ERABSetupRequest(s1ap);
    }
    else if (UP_LINK == s1ap->direction)
    {
        lte_s1ap_ERABSetupResponse(s1ap);
    }

    return MP_E_INVALID_PACKET;
}
/******************************************************************************
 * 函数名称    : lte_s1ap_nas_detach_req
 * 描述        : 处理上行的detach request报文,上行的detach request报文我们认为是下线
 * 调用        :
 * 被调用      :
 * 输入        : s1ap
 * 输出        : 无
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_error_t lte_s1ap_nas_detach_req(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);
    mp_code_t                   rv              = MP_E_NONE;
    hash_key_t                  key_s1_mme      ={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    if(UP_LINK == s1ap->direction)
    {
            /*更新所有表项的ecgi*/
        update_all_table_ecgi(s1ap);
    }
    hydra_stat_inc(stat_relate_detach_req);
    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme, 
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
        return MP_E_INTERNAL;
    }

    PRINTF_IMSI(s1_mme_cell.imsi);
    //用户下线信令日志报文上送
    if(MP_E_NONE == lte_signal_submit(s1ap,USR_OFFLINE))
    {
        hydra_stat_inc(stat_lte_offline_log);
    }

    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");
    // calling diamter API to delete s6a related tables.
    del_s6a_node_by_imsi(s1_mme_cell.imsi);
    
    // delete old imsi related tables
    lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);
    return MP_E_NONE;
    
}
/******************************************************************************
 * 函数名称    : lte_s1ap_nas_detach_accept
 * 描述        : 处理上行的detach accept报文,上行的detach accept报文我们认为是下线
 * 调用        :
 * 被调用      :
 * 输入        : s1ap
 * 输出        : 无
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_error_t lte_s1ap_nas_detach_accept(parse_s1ap_t *s1ap)
{
    CVMX_MP_POINT_CHECK(s1ap, M_S1, LV_ERROR);
    mp_code_t                   rv              = MP_E_NONE;
    hash_key_t                  key_s1_mme      ={};
    lte_table_s1_mme_enodeb_t   s1_mme_cell     = {};

    /*当是上行的detach accept报文的时候才认为是下线，才进行处理*/
    if(UP_LINK != s1ap->direction)
    {
        return MP_E_NONE;
    }
    /*更新所有表项的ecgi*/
    update_all_table_ecgi(s1ap);
    hydra_stat_inc(stat_relate_uplink_detach_accept);
    update_s1_mme_hash_key(s1ap->access_node_ip, s1ap->access_node_id, &(key_s1_mme));
    LTE_DEBUG_PRINTF("key=%lx\n" , key_s1_mme.data[0]);

    LTE_DEBUG_PRINTF("Search S1-MME table for imsi! \n");
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_s1_mme, 
                               &s1_mme_cell, sizeof(s1_mme_cell));
    if(MP_CELL_FOUND != rv)
    {
        LTE_DEBUG_PRINTF("Didn't find S1-MME table! rv = %d\n", rv);
        return MP_E_INTERNAL;
    }

    PRINTF_IMSI(s1_mme_cell.imsi);
    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");

    //用户下线信令日志报文上送
    if(MP_E_NONE == lte_signal_submit(s1ap,USR_OFFLINE))
    {
        hydra_stat_inc(stat_lte_offline_log);
    }


    // calling diamter API to delete s6a related tables.
    del_s6a_node_by_imsi(s1_mme_cell.imsi);
    // delete old imsi related tables
    lte_aging_clear_relate_by_imsi(s1_mme_cell.imsi);

    return MP_E_NONE;
    
}


