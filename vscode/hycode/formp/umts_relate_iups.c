/****************************************************************************** 

��Ȩ���У�C����2016-2026�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       umts_relate_iups.c
�����ʽ:     ASCII
����:         ruansong
����:         Mar 14, 2016
��ʷ:
    1.����    :Mar 14, 2016
      ����    :ruansong
      �޸�    :Created file
******************************************************************************/

#include "umts_relate.h"

mp_code_t hash_table_get_an_info_cell_by_hash(uint32_t rnc_m3ua_sig_code, uint32_t rnc_sccp_id, umts_table_rnc_iu_info_t *an_info_op);

/***************************P-TMSI************************/
mp_code_t p_tmsi_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{  
    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(cmp, M_S1, LV_ERROR);
    
    umts_table_p_tmsi_t * sentry = (umts_table_p_tmsi_t *)src;
    umts_table_p_tmsi_t * dentry = (umts_table_p_tmsi_t *)dst;     

    int rv= 0;
    
    rv = memcmp(sentry->p_tmsi, dentry->p_tmsi, sizeof(p_tmsi_t));

    if(0 == rv)   
    {
        *cmp = HASH_CMP_SAME;
    }
    else
    {
        *cmp = HASH_CMP_DIFF;
    }

    return MP_OK;
}


// Update s_tmsi table callback function
mp_code_t update_p_tmsi_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_SYS, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_SYS, LV_ERROR);
   
    umts_table_p_tmsi_t   *s_tmsi_src = (umts_table_p_tmsi_t *)src;
    umts_table_p_tmsi_t   *s_tmsi_dst = (umts_table_p_tmsi_t *)dst;

    if( P_TMSI_T_UPDATE_PTMSI & action )
    {
        LTE_DEBUG_PRINTF("update_p_tmsi_ptmsi !\n");
        memcpy(s_tmsi_dst->p_tmsi, s_tmsi_src->p_tmsi, sizeof(p_tmsi_t));
    }
    
    if( P_TMSI_T_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_p_tmsi_imsi !\n"); 
        memcpy(s_tmsi_dst->imsi, s_tmsi_src->imsi, sizeof(lte_imsi_t));
    }
    return MP_OK;
}


mp_code_t update_umts_an_info_table_key(uint32_t rnc_m3ua_sig_code, uint32_t rnc_sccp_id, hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    ptr = (uint8_t *)key->data;
    *ptr = 0;
    ptr++;

    *(uint32_t*)ptr = rnc_m3ua_sig_code;
    ptr+=sizeof(rnc_m3ua_sig_code);
    *(uint32_t*)ptr = rnc_sccp_id;
    key->size = 2;
    return MP_OK;
}
mp_code_t update_umts_cn_info_table_key(uint32_t sgsn_m3ua_sig_code, uint32_t sgsn_sccp_id,  uint32_t rnc_m3ua_sig_code,hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    ptr = (uint8_t *)key->data;
    *ptr = 0;
    ptr++;
    *(uint32_t*)ptr = sgsn_m3ua_sig_code;
    ptr+=sizeof(sgsn_m3ua_sig_code);
    *(uint32_t*)ptr = sgsn_sccp_id;
    ptr+=sizeof(sgsn_sccp_id);
    *(uint32_t*)ptr = rnc_m3ua_sig_code;
    key->size = 2;
    return MP_OK;
}

mp_code_t update_p_tmsi_table_key(p_tmsi_t ptmsi,hash_key_t *key)
{
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);
    key->size = 1;
    key->data[0] = *(uint32_t*)(( &(ptmsi[0])));
    key->data[0] <<= 32;
    return MP_OK;
}

mp_code_t update_gtp_u_table_key(ip_comm_t gtp_ip, uint32_t gtp_teid, hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    ptr = (uint8_t *)key->data;
    IP_TRASNFER_TO_KEY(ptr, gtp_ip);
    memcpy(ptr, &gtp_teid, sizeof(gtp_teid));
    key->size = 3;
    return MP_OK;
}


#define ______________________DT_GMM_RELATE_PROCESS_________________________________

/**********************************************************************************************
  ��������      : dt_gmm_relate_attach_request
  ����          : ��RANAP����Ϣ͸����GMM��Ϣattach_request�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_attach_request(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret;
    
    hash_key_t          key_p_tmsi={};
    umts_table_p_tmsi_t p_tmsi_cell= {};
    hash_table_index_t  index_p_tmsi= {};
    uint8_t             Is_find_p_tmsi=FALSE;//���ڱ�־��P-TMSI_IMSIӳ������Ƿ��ҵ���Ӧ��P-TMSI
    imsi_t              user_imsi;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_attachReq_IupsInfo_isNull);
        return MP_E_PARAM;
    }
    
    hydra_stat_inc(stat_pkts_Iups_gmm_attach_request);
    
    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_attachReq_no_sccpDlr);
        return MP_E_PARAM;
    }

    if(IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)
    {
        /**************************����P-TMSI����*************************/
        memcpy(p_tmsi_cell.p_tmsi, IuPS_info->gmm_info.p_tmsi, sizeof(p_tmsi_t));

        update_p_tmsi_table_key(p_tmsi_cell.p_tmsi, &(key_p_tmsi));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_P_TMSI), &key_p_tmsi, 
                                            &p_tmsi_cell, sizeof(p_tmsi_cell),&index_p_tmsi);
        if( MP_CELL_FOUND != ret )
        {
            //LOG_PRINT(M_S1,LV_ERROR, "[dt_gmm_relate_attach_request]:search p_tmsi table<Failed> !\n");
            hydra_stat_inc(stat_pkts_IuPS_not_found_imsi_from_PTMSI);
        }
        else
        {
            Is_find_p_tmsi = TRUE;//�ҵ�P-TMSI_IMSIӳ�������־λ��ΪTRUE
        }
    }

    //�жϿɷ��ҵ���Ӧ��IMSI�����û��ֱ�ӷ���
    if((IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)&&(TRUE==Is_find_p_tmsi))
    {
        memcpy(&user_imsi,&p_tmsi_cell.imsi,sizeof(imsi_t));
    }
    else if(IuPS_info->gmm_info.valid_ie_mask&IMSI_VALID)
    {
        memcpy(&user_imsi,&IuPS_info->gmm_info.imsi,sizeof(imsi_t));
    }
    else
    {
        return MP_E_NONE;
    }

    if(MP_OK != umts_check_TBCD_encode(LTE_IMSI_LEN, user_imsi))
    {
        LOG_PRINT(M_GN, LV_INFO, "IuPS-[direct_transfer]:Check imsi <non-bcd encode> \n");
        hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
        return MP_FUN_PARAM_ERR;
    }
    
    /**************************����sgsn_iu(cn_info)����*************************/
    hash_key_t                  key_sgsn_iu={};
    umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
    hash_table_index_t          index_sgsn_iu= {};
    uint64_t                    action_sgsn_iu = 0;

    update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

    ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                            &sgsn_iu_cell, sizeof(sgsn_iu_cell),&index_sgsn_iu);
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_cn_info_table_failed);  
        return rv;
    }
	else
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request search cn info table <success> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_attachReq_find_cnTable);

    if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
    {
        memcpy(&sgsn_iu_cell.imsi, user_imsi, sizeof(imsi_t));
        action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
            
        rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request update cn info table <Failed> !\n" );
            hydra_stat_inc(stat_pkts_update_cn_info_table_failed);  
            return rv;
        }
    }

   
    /**************************����rnc_iu(an_info)����*************************/
    hash_key_t                  key_rnc_iu={};
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    hash_table_index_t          index_rnc_iu= {};
    uint64_t                    action_rnc_iu = 0;

    
    update_umts_an_info_table_key(IuPS_info->sccp_info.opc, sgsn_iu_cell.umts_hash_para.rnc_sccp_id,&(key_rnc_iu));

    ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu,
                                            &rnc_iu_cell, sizeof(rnc_iu_cell),&index_rnc_iu);
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_attachReq_find_anTable);
    
    //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
    if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
    {
        memcpy(&rnc_iu_cell.imsi, &user_imsi, sizeof(imsi_t));
        action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
            
        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request update an info table <Failed> !\n" );
            hydra_stat_inc(stat_pkts_update_an_info_table_failed);
            return rv;
        }
    }
    

    /**************************IMSI��Ч������IMSI�ܱ�*************************/
    umts_table_imsi_t   imsi_search_d      = {};
    hash_table_index_t  imsi_index       = {};
    uint64_t            action_imsi = 0;

    // set s1_mme index to imsi table
    SET_TABLE_INDEX( (&(imsi_search_d.pos_an_info)), index_rnc_iu.index, index_rnc_iu.node);
    action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

    SET_TABLE_INDEX( (&(imsi_search_d.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
    action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;
    
    memcpy(&imsi_search_d.imsi, user_imsi, sizeof(imsi_t));
    action_imsi |= IMSI_T_UPDATE_IMSI;

    /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
    if(rnc_iu_cell.mask&AN_INFOT_RAI_VALID)
    {
        memcpy(&imsi_search_d.rai, &rnc_iu_cell.rai, sizeof(rai_t));
        action_imsi |= IMSI_T_UPDATE_PLMN;
        action_imsi |= IMSI_T_UPDATE_LAC;
        action_imsi |= IMSI_T_UPDATE_RAC;
    }
    /*modified by zhengwan��end*/
    
    if((IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)&&(TRUE==Is_find_p_tmsi))
    {
        SET_TABLE_INDEX( (&(imsi_search_d.pos_ptmsi_imsi_map)), index_p_tmsi.index, index_p_tmsi.node);
        action_imsi |= IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP;
    }

    imsi_search_d.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
    action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

    imsi_search_d.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSI_T_UPDATE_AGING;
    
    // create IMSI table
    rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_search_d, sizeof(umts_table_imsi_t), &imsi_index);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_request create imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_attachReq_create_imsiTable);

    return MP_E_NONE;
}


/**********************************************************************************************
  ��������      : dt_gmm_relate_attach_accept
  ����          : ��RANAP����Ϣ͸����GMM��Ϣattach_accept�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_attach_accept(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;


    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_gmm_attach_accept);

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_no_sccpDlr);
        return MP_E_PARAM;
    }
    
    /*GMM��Я����P-TMSI�Ļ���������P-TMSI�ط���*/
    if(IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)
    {    
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_pTmsi_valid);
        /**************************����rnc_iu(an_info)����*************************/
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};

        ret = hash_table_get_an_info_cell_by_hash(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr, &rnc_iu_cell);
        
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_accept search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_find_anTable);
        
        if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_anTable_imsi_invalid);
            return MP_E_NONE;
        }

        /**************************����imsi����*************************/
        hash_key_t          key_imsi={};
        umts_table_imsi_t   imsi_cell= {};
        hash_table_index_t  index_imsi= {};
        uint64_t            action_imsi = 0;
        
        update_imsi_hash_key(rnc_iu_cell.imsi, &key_imsi);
        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_accept search IMSI table <Failed> !\n");
            return rv;
        }

        if(imsi_cell.mask&IMSI_T_POS_PTMSI_IMSI_MAP_VALID)
        {
            hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_P_TMSI),&(imsi_cell.pos_ptmsi_imsi_map));
        }

        /**************************�����µ�PTMSI����*************************/
        umts_table_p_tmsi_t p_tmsi_cell= {};
        hash_table_index_t  index_p_tmsi= {};
        uint64_t            action_pimsi = 0;

        memcpy(&p_tmsi_cell.p_tmsi, &IuPS_info->gmm_info.p_tmsi, sizeof(p_tmsi_t));
        memcpy(&p_tmsi_cell.imsi, &rnc_iu_cell.imsi, sizeof(imsi_t));
        action_pimsi |= P_TMSI_T_UPDATE_PTMSI;
        action_pimsi |= P_TMSI_T_UPDATE_IMSI;

        rv = create_update_table_by_hash(TABLE_P_TMSI, CREATE_TABLE, action_pimsi, (void*)&p_tmsi_cell, sizeof(umts_table_p_tmsi_t), &index_p_tmsi);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_accept create p-tmsi table <Failed> !\n");
            hydra_stat_inc(stat_pkts_create_p_tmsi_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_create_pTmsiT);

        /**************************����IMSI����*************************/
        SET_TABLE_INDEX( (&(imsi_cell.pos_ptmsi_imsi_map)), index_p_tmsi.index, index_p_tmsi.node);
        action_imsi |= IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP;

        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_accept update imsi table <Failed> !\n");
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_attachAcc_up_imsiT_pTmsi);
        
    }
    /*�����û����ߵ���־����*/
    if(MP_E_NONE == umts_signal_submit(IuPS_info,USR_ONLINE))
    {
        hydra_stat_inc(stat_umts_online_log);
    }
    return MP_E_NONE;   
}

/**********************************************************************************************
  ��������      : dt_gmm_relate_rau_accept
  ����          : ��RANAP����Ϣ͸����GMM��Ϣrau_accept�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_rau_accept(parse_IuPS_t *IuPS_info)
{
    mp_error_t                  rv = MP_E_NONE;
    mp_code_t                   ret = MP_OK;
    uint8_t                     is_create_ptmsi_tbl_success=FALSE;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_gmm_rau_accept);

    if((1!=IuPS_info->sccp_info.dlr_indic)|| !(IuPS_info->gmm_info.valid_ie_mask&RAI_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_no_sccpDlr_or_rai);
        return MP_E_PARAM;
    }
 
    /**************************����rnc_iu(an_info)����*************************/
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    hash_table_index_t          index_rnc_iu= {};
    uint64_t                    action_rnc_iu = 0;
    
    ret = hash_table_get_an_info_cell_by_hash(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr, &rnc_iu_cell);
    
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:rau_accept search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
        return rv;
    }

    //����rnc_iu(an_info)�����е�RAI
    memcpy(&rnc_iu_cell.rai, &IuPS_info->gmm_info.rai, sizeof(rai_t));
    action_rnc_iu |= AN_INFOT_UPDATE_RAI;

    rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:rau_accept create an info table <Failed> !\n");
        hydra_stat_inc(stat_pkts_create_an_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_up_anTable_rai);
    
    if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
    {
        /**************************����imsi����*************************/
        hash_key_t          key_imsi={};
        umts_table_imsi_t   imsi_cell= {};
        hash_table_index_t  index_imsi= {};
        uint64_t            action_imsi = 0;

        umts_table_p_tmsi_t p_tmsi_cell= {};
        hash_table_index_t  index_p_tmsi= {};
        uint64_t            action_pimsi = 0;

        update_imsi_hash_key(rnc_iu_cell.imsi, &key_imsi);
        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:rau_accept search imsi table <Failed> !\n");
            //hydra_stat_inc(stat_search_kasme_failed_1);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_find_imsiT);

        if(IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)
        {   
            if(imsi_cell.mask&IMSI_T_POS_PTMSI_IMSI_MAP_VALID)
            {
                (void)hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_P_TMSI),&(imsi_cell.pos_ptmsi_imsi_map));
            }

            /**************************�����µ�PTMSI����*************************/
            

            memcpy(&p_tmsi_cell.p_tmsi, &IuPS_info->gmm_info.p_tmsi, sizeof(p_tmsi_t));
            memcpy(&p_tmsi_cell.imsi, &rnc_iu_cell.imsi, sizeof(imsi_t));
            action_pimsi |= P_TMSI_T_UPDATE_PTMSI;
            action_pimsi |= P_TMSI_T_UPDATE_IMSI;
            
            rv = create_update_table_by_hash(TABLE_P_TMSI, CREATE_TABLE, action_pimsi, (void*)&p_tmsi_cell, sizeof(umts_table_p_tmsi_t), &index_p_tmsi);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:rau_accept create p-tmsi table <Failed> !\n");
                hydra_stat_inc(stat_pkts_create_p_tmsi_table_failed);
               //return rv;
            }
            else
            {
                is_create_ptmsi_tbl_success = TRUE;
            }
            hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_create_pTmsiT);
        }

        /**************************����IMSI����*************************/
        if(TRUE == is_create_ptmsi_tbl_success)
        {
            SET_TABLE_INDEX( (&(imsi_cell.pos_ptmsi_imsi_map)), index_p_tmsi.index, index_p_tmsi.node);
            action_imsi |= IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP;
        }

        /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
        memcpy(&imsi_cell.rai, &IuPS_info->gmm_info.rai, sizeof(rai_t));
        action_imsi |= IMSI_T_UPDATE_PLMN;
        action_imsi |= IMSI_T_UPDATE_LAC;
        action_imsi |= IMSI_T_UPDATE_RAC;
        /*modified by zhengwan,end*/

        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:rau_accept update imsi table <Failed> !\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_rauAcc_up_imsiT);
    }
    
    if(MP_E_NONE == umts_signal_submit(IuPS_info,USR_RAU))//�����û�rau����־����
    {
        hydra_stat_inc(stat_umts_rau_log);
    }

    return MP_E_NONE;    
}

/**********************************************************************************************
  ��������      : dt_gmm_relate_identify_response
  ����          : ��RANAP����Ϣ͸����GMM��Ϣidentify_response�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_identify_response(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_gmm_identify_response);

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_no_sccpDlr);
        return MP_E_PARAM;
    }

    if(!(IuPS_info->gmm_info.valid_ie_mask&IMSI_VALID)&&!(IuPS_info->gmm_info.valid_ie_mask&IMEI_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_no_imsiAndimei);
        return MP_E_PARAM;
    }

    if(IuPS_info->gmm_info.valid_ie_mask&IMSI_VALID)
    {
        if(MP_OK != umts_check_TBCD_encode(LTE_IMSI_LEN, IuPS_info->gmm_info.imsi))
        {
            LOG_PRINT(M_GN, LV_INFO, "IuPS-[direct_transfer]:identify_response Check imsi <non-bcd encode> \n");
            hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
            return MP_FUN_PARAM_ERR;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_imsi_valid);
        
        /**************************����sgsn_iu(cn_info)����*************************/
        hash_key_t                  key_sgsn_iu={};
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        hash_table_index_t          index_sgsn_iu= {};
        uint64_t                    action_sgsn_iu = 0;

        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};
        hash_table_index_t          index_rnc_iu= {};
        uint64_t                    action_rnc_iu = 0;

        update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                            &sgsn_iu_cell, sizeof(sgsn_iu_cell),&index_sgsn_iu);
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_find_cnT);
            
            if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
            {
                memcpy(&sgsn_iu_cell.imsi, &IuPS_info->gmm_info.imsi, sizeof(imsi_t));
                action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
                    
                rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
                if(MP_E_NONE != rv)
                {
                    LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response update cn info table <Failed> !\n");
                    hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
                    return rv;
                }
                hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_up_cnT_imsi);
            }

            /**************************����rnc_iu(an_info)����*************************/
            
            update_umts_an_info_table_key(IuPS_info->sccp_info.opc, sgsn_iu_cell.umts_hash_para.rnc_sccp_id,&(key_rnc_iu));

            ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                                &rnc_iu_cell, sizeof(rnc_iu_cell),&index_rnc_iu);
            if( MP_CELL_FOUND != ret )
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
                hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            }
            else
            {
                hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_find_anT);
                
                //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
                if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
                {
                    rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.opc;
                    rnc_iu_cell.umts_hash_para.rnc_sccp_id = sgsn_iu_cell.umts_hash_para.rnc_sccp_id;

                    memcpy(&rnc_iu_cell.imsi, &IuPS_info->gmm_info.imsi, sizeof(imsi_t));
                    action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
                        
                    rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
                    if(MP_E_NONE != rv)
                    {
                        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response update an info table <Failed> !\n");
                        hydra_stat_inc(stat_pkts_update_an_info_table_failed); 
                        return rv;
                    }
                    hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_up_anT_imsi);
                }
            }
        }


        /**************************IMSI��Ч������IMSI�ܱ�*************************/
        umts_table_imsi_t   imsi_search_d      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;

        // set s1_mme index to imsi table
        SET_TABLE_INDEX( (&(imsi_search_d.pos_an_info)), index_rnc_iu.index, index_rnc_iu.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        SET_TABLE_INDEX( (&(imsi_search_d.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
        action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;
        
        memcpy(&imsi_search_d.imsi, &IuPS_info->gmm_info.imsi, sizeof(imsi_t));
        action_imsi |= IMSI_T_UPDATE_IMSI;

        /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
        if(rnc_iu_cell.mask&AN_INFOT_RAI_VALID)
        {
            memcpy(&imsi_search_d.rai, &rnc_iu_cell.rai, sizeof(rai_t));
            action_imsi |= IMSI_T_UPDATE_PLMN;
            action_imsi |= IMSI_T_UPDATE_LAC;
            action_imsi |= IMSI_T_UPDATE_RAC;
        }
        /*modified by zhengwan,end*/
        
        imsi_search_d.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
        action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        // create IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_search_d, sizeof(umts_table_imsi_t), &imsi_index);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response create imsi table <Failed> !\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_create_imsiT);
    }
    else if(IuPS_info->gmm_info.valid_ie_mask&IMEI_VALID)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_imei_vaild);
        
        /**************************����sgsn_iu(cn_info)����*************************/
        hash_key_t                  key_sgsn_iu={};
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};

        update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                   &sgsn_iu_cell, sizeof(sgsn_iu_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_imei_find_cnT);
        
        if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_imei_cnT_no_imsi);
            return MP_E_INTERNAL;
        }

        /**************************IMSI��Ч������IMSI�ܱ�*************************/
        umts_table_imsi_t   imsi_search_d      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;


        memcpy(&imsi_search_d.imei, &IuPS_info->gmm_info.imei, sizeof(imei_t));
        action_imsi |= IMSI_T_UPDATE_IMEI;
        
        memcpy(&imsi_search_d.imsi, &sgsn_iu_cell.imsi, sizeof(imsi_t));

        // update IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_search_d, sizeof(umts_table_imsi_t), &imsi_index);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:identify_response update imsi table <Failed> !\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_idenRes_imei_update_imsiT);
    }
    

    return MP_E_NONE;    
}

/**********************************************************************************************
  ��������      : dt_gmm_relate_ptmsi_reallocation_req
  ����          : ��RANAP����Ϣ͸����GMM��Ϣptmsi_reallocation_command�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_ptmsi_reallocation_cmd(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv  = MP_E_NONE;
    mp_code_t           ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd);

    if((1!=IuPS_info->sccp_info.dlr_indic) || !(IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd_no_sccpDlrOrPtmsi);
        return MP_E_PARAM;
    }

    /**************************����rnc_iu(an_info)����*************************/
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    
    ret = hash_table_get_an_info_cell_by_hash(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr, &rnc_iu_cell);
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:ptmsi_reallocation_command search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd_find_anT);

    if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
    {
        return MP_E_NONE;
    }

    /**************************����imsi����*************************/
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};
    hash_table_index_t  index_imsi= {};
    uint64_t            action_imsi = 0;

    update_imsi_hash_key(rnc_iu_cell.imsi, &key_imsi);
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:ptmsi_reallocation_command search imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }

    //ɾ���ɵ�P-TMSI_IMSIӳ���
    if(imsi_cell.mask&IMSI_T_POS_PTMSI_IMSI_MAP_VALID)
    {
        hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_P_TMSI),&(imsi_cell.pos_ptmsi_imsi_map));
    }

    /**************************�����µ�PTMSI����*************************/
    umts_table_p_tmsi_t p_tmsi_cell= {};
    hash_table_index_t  index_p_tmsi= {};
    uint64_t            action_pimsi = 0;

    memcpy(&p_tmsi_cell.p_tmsi, &IuPS_info->gmm_info.p_tmsi, sizeof(p_tmsi_t));
    memcpy(&p_tmsi_cell.imsi, &rnc_iu_cell.imsi, sizeof(imsi_t));
    action_pimsi |= P_TMSI_T_UPDATE_PTMSI;
    action_pimsi |= P_TMSI_T_UPDATE_IMSI;
    
    rv = create_update_table_by_hash(TABLE_P_TMSI, CREATE_TABLE, action_pimsi, (void*)&p_tmsi_cell, sizeof(umts_table_p_tmsi_t), &index_p_tmsi);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:ptmsi_reallocation_command create p-tmsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_create_p_tmsi_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd_create_pTmsiT);

    /**************************����IMSI����*************************/
    SET_TABLE_INDEX( (&(imsi_cell.pos_ptmsi_imsi_map)), index_p_tmsi.index, index_p_tmsi.node);
    action_imsi |= IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP;

    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:ptmsi_reallocation_command update imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed);
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_gmm_reallocCmd_up_imsiT_pTmsi);

    return MP_E_NONE;    
}

/**********************************************************************************************
  ��������      : dt_gmm_relate_deattach_accept
  ����          : ��RANAP����Ϣ͸����GMM��Ϣdeattach_accept�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_deattach_accept(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;
    imsi_t              user_imsi;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_gmm_deattach_accept);

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_no_sccpDlr);
        return MP_E_PARAM;
    }

    if(EN_DIRECTION_UP_LINK == IuPS_info->direction)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_upLink);
        
        /**************************����sgsn_iu(cn_info)����*************************/
        hash_key_t                  key_sgsn_iu={};
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        
        update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                   &sgsn_iu_cell, sizeof(sgsn_iu_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_upLink_find_cnT);

        if(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID)
        {
            memcpy(&user_imsi,&sgsn_iu_cell.imsi,sizeof(imsi_t));
            
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_upLink_cnTNoImsi);
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- the imsi in cn info table is invalid!\n");
            return MP_E_INTERNAL;
        }

        
    }
    else
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_downLink);
        
        /**************************����rnc_iu(an_info)����*************************/
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};

        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                   &rnc_iu_cell, sizeof(rnc_iu_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_down_find_anT);
        
        //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
        if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
        {
            memcpy(&user_imsi,&rnc_iu_cell.imsi,sizeof(imsi_t));
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_deattachacc_down_anTNoImsi);
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- the imsi in an info table is invalid!\n");
            return MP_E_INTERNAL;
        }
    }
    if(MP_E_NONE == umts_signal_submit(IuPS_info,USR_OFFLINE))
    {
        hydra_stat_inc(stat_umts_offline_log);
    }
    
    rv = lte_aging_clear_relate_by_imsi(user_imsi);
    if( MP_E_NONE != rv )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- Clear relate imsi table failed! rv = %d\n", rv);
        return rv;
    }
    
    return MP_E_NONE;    
}

/**********************************************************************************************
  ��������      : dt_gmm_relate_deattach_request
  ����          : ��RANAP����Ϣ͸����GMM��Ϣdeattach_request�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t dt_gmm_relate_deattach_request(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;
    imsi_t              user_imsi = {0};
    
    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_no_sccpDlr);
        return MP_E_PARAM;
    }

    if(EN_DIRECTION_UP_LINK == IuPS_info->direction)
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_upLink);
        
        /**************************����sgsn_iu(cn_info)����*************************/
        hash_key_t                  key_sgsn_iu={};
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        
        update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                   &sgsn_iu_cell, sizeof(sgsn_iu_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_upLink_find_cnT);

        if(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID)
        {
            memcpy(&user_imsi,&sgsn_iu_cell.imsi,sizeof(imsi_t));
            
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_upLink_cnTNoImsi);
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- the imsi in cn info table is invalid!\n");
            return MP_E_INTERNAL;
        }
        
    }
    else
    {
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_downLink);
        
        /**************************����rnc_iu(an_info)����*************************/
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};

        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                   &rnc_iu_cell, sizeof(rnc_iu_cell));
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_down_find_anT);
        
        //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
        if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
        {
            memcpy(&user_imsi,&rnc_iu_cell.imsi,sizeof(imsi_t));
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_gmm_deattachreq_down_anTNoImsi);
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- the imsi in an info table is invalid!\n");
            return MP_E_INTERNAL;
        }
    }
    if(MP_E_NONE == umts_signal_submit(IuPS_info,USR_OFFLINE))
    {
        hydra_stat_inc(stat_umts_offline_log);
    }
    
    rv = lte_aging_clear_relate_by_imsi(user_imsi);
    if( MP_E_NONE != rv )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_accept- Clear relate imsi table failed! rv = %d\n", rv);
        return rv;
    }
    
    return MP_E_NONE;    
}

#define ______________________UMTS_IUPS_RELATE_PROCESS_________________________________

/**********************************************************************************************
  ��������      : umts_IuPS_relate_init_ue_msg
  ����          : ��RANAP����ϢInitialUE_Message�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_init_ue_msg(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;
    
    hash_key_t          key_p_tmsi={};
    umts_table_p_tmsi_t p_tmsi_cell= {};
    hash_table_index_t  index_p_tmsi= {};
    uint8_t             Is_find_p_tmsi=FALSE;//���ڱ�־��P-TMSI_IMSIӳ������ҵ���Ӧ��P-TMSI
    
    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_IupsInfo_isNull);
        LOG_PRINT(M_S1,LV_ERROR,LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_initialUeMsg);

    if((EN_SCCP_MESSAGE_CR != IuPS_info->sccp_info.message_type) ||
        (1!=IuPS_info->sccp_info.slr_indic))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_sccp_no_CrOrSlr);
        return MP_E_PARAM;
    }

    if((GMM_MSG_ATTACH_REQUEST != IuPS_info->gmm_info.message_type) &&
        (GMM_MSG_SERVICE_REQUEST != IuPS_info->gmm_info.message_type) &&
        (GMM_MSG_RAU_REQUEST != IuPS_info->gmm_info.message_type)&&
        (GMM_MSG_DEATTACH_REQUEST != IuPS_info->gmm_info.message_type))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_gmm_notCare);
        return MP_E_PARAM;
    }

    if(IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_gmm_pTmsi_valid);
        /**************************����P-TMSI����*************************/
        memcpy(p_tmsi_cell.p_tmsi, IuPS_info->gmm_info.p_tmsi, sizeof(p_tmsi_t));

        update_p_tmsi_table_key(p_tmsi_cell.p_tmsi, &(key_p_tmsi));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_P_TMSI), &key_p_tmsi, 
                                            &p_tmsi_cell, sizeof(p_tmsi_cell),&index_p_tmsi);
        if( MP_CELL_FOUND != ret )
        {
            hydra_stat_inc(stat_pkts_IuPS_not_found_imsi_from_PTMSI);    
            //LOG_PRINT(M_S1,LV_ERROR, "IuPS-[InitialUE_Message]:Search P-TMSI table failed ! rv = %d\n", rv);
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_find_pTmsiT);
            Is_find_p_tmsi = TRUE;//�ҵ�P-TMSI_IMSIӳ�������־λ��ΪTRUE
        }
    }

    /**************************����RNC_IU(an_info)����*************************/
    hash_table_index_t          rnc_iu_index  = {};
    umts_table_rnc_iu_info_t    rnc_iu_cell   = {};
    uint64_t                    action_rnc_iu = 0;

    rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
    rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.opc;
    action_rnc_iu |= AN_INFOT_UPDATE_RNC_POINT_CODE;
    rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.slr;
    action_rnc_iu |= AN_INFOT_UPDATE_RNC_SCCP_ID;
    
    if(IuPS_info->ranap_info.mask & RANAP_IE_RAI_VALID)
    {
        memcpy(&rnc_iu_cell.rai, &IuPS_info->ranap_info.rai, sizeof(rai_t));
        action_rnc_iu |= AN_INFOT_UPDATE_RAI;
    }

    if((IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)&&(TRUE==Is_find_p_tmsi))
    {
        memcpy(&rnc_iu_cell.imsi, &p_tmsi_cell.imsi, sizeof(imsi_t));
        action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
    }
    else if(IuPS_info->gmm_info.valid_ie_mask&IMSI_VALID)
    {
        PRINTF_IMSI(IuPS_info->gmm_info.imsi);
        memcpy(&rnc_iu_cell.imsi, &IuPS_info->gmm_info.imsi, sizeof(imsi_t));
        action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
    }

    rnc_iu_cell.mobile_type = MCS_WCDMA;/*���ڱ�ʶΪ3g*/
    action_rnc_iu |= AN_INFOT_UPDATE_MOBILE_TYPE;

    rnc_iu_cell.aging = g_aging_timer_max;
    action_rnc_iu |= AN_INFOT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &rnc_iu_index);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[InitialUE_Message]:create AN INFO table<Failed> !\n");
        hydra_stat_inc(stat_pkts_create_an_info_table_failed);      
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_create_anT);

    /**************************��������*************************/
    if(GMM_MSG_ATTACH_REQUEST == IuPS_info->gmm_info.message_type)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_initialUeMsg_attachreq);
        
        //�жϿɷ��ҵ���Ӧ��IMSI�����û��ֱ�ӷ���
        if(!((IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)&&(TRUE==Is_find_p_tmsi))&&
            !(IuPS_info->gmm_info.valid_ie_mask&IMSI_VALID))
        {
            hydra_stat_inc(stat_pkts_IuPS_attach_request_not_found_valid_imsi);  
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[InitialUE_Message]:Attach request not found valid imsi !\n");
            return MP_E_NONE;
        }

        if(MP_OK != umts_check_TBCD_encode(LTE_IMSI_LEN, rnc_iu_cell.imsi))
        {
            LOG_PRINT(M_GN, LV_INFO, "IuPS-[InitialUE_Message]:Check imsi <non-bcd encode> \n");
            hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
            return MP_FUN_PARAM_ERR;
        }

        /**************************IMSI��Ч������IMSI�ܱ�*************************/
        umts_table_imsi_t   imsi_search_d      = {};
        hash_table_index_t  imsi_index       = {};
        uint64_t            action_imsi = 0;

        // set s1_mme index to imsi table
        SET_TABLE_INDEX( (&(imsi_search_d.pos_an_info)), rnc_iu_index.index, rnc_iu_index.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        memcpy(&imsi_search_d.imsi, &rnc_iu_cell.imsi, sizeof(imsi_t));
        action_imsi |= IMSI_T_UPDATE_IMSI;
        
       /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
        if(IuPS_info->ranap_info.mask & RANAP_IE_RAI_VALID)
        {
            memcpy(&imsi_search_d.rai, &IuPS_info->ranap_info.rai, sizeof(rai_t));
            action_imsi |= IMSI_T_UPDATE_PLMN;
            action_imsi |= IMSI_T_UPDATE_LAC;
            action_imsi |= IMSI_T_UPDATE_RAC;
        }
        /*modified by zhengwan,end*/
        
        if((IuPS_info->gmm_info.valid_ie_mask&P_TMSI_VALID)&&(TRUE==Is_find_p_tmsi))
        {
            SET_TABLE_INDEX( (&(imsi_search_d.pos_ptmsi_imsi_map)), index_p_tmsi.index, index_p_tmsi.node);
            action_imsi |= IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP;
        }

        imsi_search_d.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
        action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

        imsi_search_d.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        // create IMSI table
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_search_d, sizeof(umts_table_imsi_t), &imsi_index);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[InitialUE_Message]:create ImsiT <Failed> !\n");
            hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_iniUeMsg_attachreq_createImsiT);
    }
    else if(GMM_MSG_DEATTACH_REQUEST == IuPS_info->gmm_info.message_type)
    {
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};
        imsi_t                      imsi = {0};

        update_umts_an_info_table_key(IuPS_info->sccp_info.opc, IuPS_info->sccp_info.slr,&(key_rnc_iu));
        /*����an info��*/
        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                        &rnc_iu_cell, sizeof(rnc_iu_cell));
            
        if( MP_CELL_FOUND != ret )
        {
            /*û���ҵ�����*/
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_signal_submit]:attach_accept search an info table <Failed> ![rnc_ip=%lx],[rnc_id=0x%x]\n",IuPS_info->rncip.ip.u64[0],IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            return MP_E_INTERNAL;
        }
        if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
        {
            /*an info���imsi��Ч���򷵻�*/
            LTE_DEBUG_PRINTF("table an info error imsi invalid\n");
            return MP_E_INTERNAL;
        }
        else
        {
            if(MP_E_NONE == umts_signal_submit(IuPS_info,USR_OFFLINE))
            {           
                hydra_stat_inc(stat_umts_offline_log);
            }
            memcpy(&imsi,&rnc_iu_cell.imsi,sizeof(lte_imsi_t));
        }
        rv = lte_aging_clear_relate_by_imsi(imsi);
        if( MP_E_NONE != rv )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:deattach_request- Clear relate imsi table failed! rv = %d\n", rv);
            return rv;
        }
             
        
    }

    
    return MP_E_NONE;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_command_id
  ����          : ��RANAP����Ϣcommand_id�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_command_id(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;
    uint8_t             imsi_table_not_exit=false;//true:����IMSI������ڣ�false:����IMSI�������

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_commonID);

    if(!(IuPS_info->ranap_info.mask&RANAP_IE_IMSI_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_imsi_invalid);
        return MP_E_PARAM;
    }

    if(MP_OK != umts_check_TBCD_encode(LTE_IMSI_LEN, IuPS_info->ranap_info.imsi))
    {
        LOG_PRINT(M_GN, LV_INFO, "IuPS-[command_id]:Check imsi <non-bcd encode> \n");
        hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
        return MP_FUN_PARAM_ERR;
    }


    if(EN_SCCP_MESSAGE_CC == IuPS_info->sccp_info.message_type)
    {
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};
        hash_table_index_t          index_rnc_iu= {};
        uint64_t                    action_rnc_iu = 0;

        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc);
        
        if((1!=IuPS_info->sccp_info.slr_indic) || (1!=IuPS_info->sccp_info.dlr_indic))
        {
            return MP_E_PARAM;
        }

        /**************************����rnc_iu(an_info)����*************************/
        rnc_iu_cell.mask = 0;
        
        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                            &rnc_iu_cell, sizeof(rnc_iu_cell),&index_rnc_iu);

        if( MP_CELL_FOUND != ret )
        {
            /*����rnc_iu(an_info)����ʧ�ܣ����½���rnc_iu(an_info)����*/
            rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
            rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
            action_rnc_iu |= AN_INFOT_UPDATE_RNC_POINT_CODE;

            rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
            action_rnc_iu |= AN_INFOT_UPDATE_RNC_SCCP_ID;

            rnc_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
            action_rnc_iu |= AN_INFOT_UPDATE_SGSN_POINT_CODE;

            rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
            action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;

            memcpy(&rnc_iu_cell.imsi, &IuPS_info->ranap_info.imsi, sizeof(imsi_t));
            action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
            rnc_iu_cell.mask |= AN_INFOT_UPDATE_IMSI;
            /*an info����δ����������Ϊimsi����δ��������*/
            imsi_table_not_exit = true;
            
            rnc_iu_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
            action_rnc_iu |= AN_INFOT_UPDATE_MOBILE_TYPE;

            rnc_iu_cell.aging = g_aging_timer_max;
            action_rnc_iu |= AN_INFOT_UPDATE_AGING;
            
            rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:create AN INFO table<Failed> !\n");
                hydra_stat_inc(stat_pkts_create_an_info_table_failed);    
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_createAnT);
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_findAnT);
            //�˴���Ҫע��:���ֱ�Ӳ�ѯ��rnc_iu(an_info)����ȱ���й���Ϣ������rnc_iu(an_info)����
            if((!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))||
                (!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))||
                (!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID)))
            {

                rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;

                rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;

                if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))
                {
                    rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
                    action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;
                }

                if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID))
                {
                    rnc_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
                    action_rnc_iu |= AN_INFOT_UPDATE_SGSN_POINT_CODE;
                }

                if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
                {
                    imsi_table_not_exit = true;
                    memcpy(&rnc_iu_cell.imsi, &IuPS_info->ranap_info.imsi, sizeof(imsi_t));
                    action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
                }
                
                rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
                if(MP_E_NONE != rv)
                {
                    LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:UPDATE AN INFO table<Failed> !\n");
                    hydra_stat_inc(stat_pkts_update_an_info_table_failed);    
                    return rv;
                }
                hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_up_anT);
            }

        }

        /**************************����sgsn_iu(cn_info)����*************************/
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        hash_table_index_t          index_sgsn_iu= {};
        uint64_t                    action_sgsn_iu = 0;

        sgsn_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
        sgsn_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
        action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_POINT_CODE;
        
        sgsn_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
        action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_SCCP_ID;
        sgsn_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
        action_sgsn_iu |= CN_INFOT_UPDATE_RNC_POINT_CODE;
        
        sgsn_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
        action_sgsn_iu |= CN_INFOT_UPDATE_RNC_SCCP_ID;

        memcpy(&sgsn_iu_cell.imsi, &IuPS_info->ranap_info.imsi, sizeof(imsi_t));
        action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
        /*�ֻ�������3g*/
        sgsn_iu_cell.mobile_type = MCS_WCDMA;
        action_sgsn_iu |= CN_INFOT_UPDATE_MOBILE_TYPE;

        sgsn_iu_cell.aging = g_aging_timer_max;
        action_sgsn_iu |= CN_INFOT_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_CN_INFO, CREATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:create CN INFO table<Failed> ![dpc=%d],[opc=%d],[slr=0x%x],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.slr, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_create_cn_info_table_failed);  
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_create_cnT);

        
        /**************************����IMSI����*************************/
        umts_table_imsi_t           imsi_cell= {};
        hash_table_index_t          index_imsi= {};
        uint64_t                    action_imsi = 0;

        SET_TABLE_INDEX( (&(imsi_cell.pos_an_info)), index_rnc_iu.index, index_rnc_iu.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        SET_TABLE_INDEX( (&(imsi_cell.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
        action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;

        memcpy(&imsi_cell.imsi,&IuPS_info->ranap_info.imsi, sizeof(imsi_t));

        /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
        if(rnc_iu_cell.mask&AN_INFOT_RAI_VALID)
        {
            memcpy(&imsi_cell.rai,&rnc_iu_cell.rai, sizeof(rai_t));
            action_imsi |= IMSI_T_UPDATE_PLMN;
            action_imsi |= IMSI_T_UPDATE_LAC;
            action_imsi |= IMSI_T_UPDATE_RAC;
        }
        /*modified by zhengwan,end*/
		
		imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        if(true == imsi_table_not_exit)
        {
            action_imsi |= IMSI_T_UPDATE_IMSI;

            imsi_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
            action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;
            
            rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:create ImsiT <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_imsi_table_failed);  
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_create_imsiT);

        }
        else
        {
            rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:update ImsiT <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_imsi_table_failed);  
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_cc_up_imsiT);

        }
    }
    else if(EN_SCCP_MESSAGE_DT1 == IuPS_info->sccp_info.message_type)
    {
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};
        hash_table_index_t          index_rnc_iu= {};
        uint64_t                    action_rnc_iu = 0;

        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_dt1);
        
        if(1!=IuPS_info->sccp_info.dlr_indic)
        {
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_dt1_noDlr);
            return MP_E_PARAM;
        }

        /**************************����rnc_iu(an_info)����*************************/
        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));
        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                   &rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t),&index_rnc_iu);
        
        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:search an info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed);  
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_dt1_find_anT);
        
        //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
        if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
        {
            imsi_table_not_exit = true;
            rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
            rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;

            memcpy(&rnc_iu_cell.imsi, &IuPS_info->ranap_info.imsi, sizeof(imsi_t));
            action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
                
            rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:update an info table <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_an_info_table_failed);  
                return rv;
            }
        }

        /**************************����sgsn_iu(cn_info)����*************************/
        hash_key_t                  key_sgsn_iu={};
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        hash_table_index_t          index_sgsn_iu= {};
        uint64_t                    action_sgsn_iu = 0;

        update_umts_cn_info_table_key(IuPS_info->sccp_info.opc,rnc_iu_cell.umts_hash_para.sgsn_sccp_id,IuPS_info->sccp_info.dpc, &(key_sgsn_iu));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                   &sgsn_iu_cell, sizeof(sgsn_iu_cell),&index_sgsn_iu);

        if( MP_CELL_FOUND != ret )
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:search cn info table <Failed> ![dpc=%d],[opc=%d],[dlr=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_cn_info_table_failed);  
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_commonID_dt1_find_cnT);

        if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
        {
            imsi_table_not_exit = true;
            memcpy(&sgsn_iu_cell.imsi, &IuPS_info->ranap_info.imsi, sizeof(imsi_t));
            action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
                
            rv = create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:update cn info table <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_cn_info_table_failed);  
                return rv;
            }
        }

        if(true==imsi_table_not_exit)
        {
            umts_table_imsi_t           imsi_cell= {};
            hash_table_index_t          index_imsi= {};
            uint64_t                    action_imsi = 0;

            SET_TABLE_INDEX( (&(imsi_cell.pos_an_info)), index_rnc_iu.index, index_rnc_iu.node);
            action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

            SET_TABLE_INDEX( (&(imsi_cell.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
            action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;

            memcpy(&imsi_cell.imsi,&IuPS_info->ranap_info.imsi, sizeof(imsi_t));
            action_imsi |= IMSI_T_UPDATE_IMSI;

            imsi_cell.aging = (uint16_t)g_aging_timer_max;
            action_imsi |= IMSI_T_UPDATE_AGING;

            if(rnc_iu_cell.mask&AN_INFOT_RAI_VALID)
            {
                memcpy(&imsi_cell.rai,&rnc_iu_cell.rai, sizeof(rai_t));
                action_imsi |= IMSI_T_UPDATE_PLMN;
                action_imsi |= IMSI_T_UPDATE_LAC;
                action_imsi |= IMSI_T_UPDATE_RAC;
            }
            
            imsi_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
            action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;
            
            rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[command_id]:create ImsiT <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_imsi_table_failed);  
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_commonID_dt1_create_imsiT); 
        }
    }

    return MP_E_NONE;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_command_id
  ����          : ��RANAP����Ϣdirect_transfer�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_direct_transfer(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_directTransfer);

    //���SCCP����Ϣ��CC��Ϣ����Ҫ����SGSN������Ҹ���RNC�����IMSI����
    if(EN_SCCP_MESSAGE_CC == IuPS_info->sccp_info.message_type)
    {
        hash_key_t                  key_rnc_iu={};
        umts_table_rnc_iu_info_t    rnc_iu_cell= {};
        hash_table_index_t          index_rnc_iu= {};
        uint64_t                    action_rnc_iu = 0;

        hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_cc);
        
        if((1!=IuPS_info->sccp_info.slr_indic) || (1!=IuPS_info->sccp_info.dlr_indic))
        {
            return MP_E_PARAM;
        }

        /**************************����rnc_iu(an_info)����*************************/
        rnc_iu_cell.mask = 0;
        
        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

        ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                            &rnc_iu_cell, sizeof(rnc_iu_cell),&index_rnc_iu);

        if( MP_CELL_FOUND != ret )
        {
            /*����rnc_iu(an_info)����ʧ�ܣ����½���rnc_iu(an_info)����*/
            rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
            rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
            action_rnc_iu |= AN_INFOT_UPDATE_RNC_POINT_CODE;

            rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
            action_rnc_iu |= AN_INFOT_UPDATE_RNC_SCCP_ID;

            rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
            action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;

            rnc_iu_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
            action_rnc_iu |= AN_INFOT_UPDATE_MOBILE_TYPE;

            rnc_iu_cell.aging = g_aging_timer_max;
            action_rnc_iu |= AN_INFOT_UPDATE_AGING;
            
            rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct transfer]:create AN INFO table<Failed> !\n");
                hydra_stat_inc(stat_pkts_create_an_info_table_failed);    
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_cc_create_anT);
        }
        else
        {
            hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_cc_find_anT);
        }

        /**************************����sgsn_iu(cn_info)����*************************/
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        hash_table_index_t          index_sgsn_iu= {};
        uint64_t                    action_sgsn_iu = 0;

        sgsn_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
        sgsn_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
        action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_POINT_CODE;
        
        sgsn_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
        action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_SCCP_ID;
        sgsn_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
        action_sgsn_iu |= CN_INFOT_UPDATE_RNC_POINT_CODE;
        
        sgsn_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
        action_sgsn_iu |= CN_INFOT_UPDATE_RNC_SCCP_ID;

        if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
        {
            memcpy(&sgsn_iu_cell.imsi, rnc_iu_cell.imsi, sizeof(imsi_t));
            action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
        }

        /*�ֻ�������3g*/
        sgsn_iu_cell.mobile_type = MCS_WCDMA;
        action_sgsn_iu |= CN_INFOT_UPDATE_MOBILE_TYPE;

        sgsn_iu_cell.aging = g_aging_timer_max;
        action_sgsn_iu |= CN_INFOT_UPDATE_AGING;

        rv = create_update_table_by_hash(TABLE_CN_INFO, CREATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct transfer]:create CN INFO table<Failed> ![dpc=%d],[opc=%d],[sgsn_id=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.slr);
            hydra_stat_inc(stat_pkts_create_cn_info_table_failed);  
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_cc_create_cnT);
        
        if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
        {
            /**************************����IMSI����*************************/
            umts_table_imsi_t           imsi_cell= {};
            hash_table_index_t          index_imsi= {};
            uint64_t                    action_imsi = 0;

            SET_TABLE_INDEX( (&(imsi_cell.pos_an_info)), index_rnc_iu.index, index_rnc_iu.node);
            action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

            SET_TABLE_INDEX( (&(imsi_cell.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
            action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;

            memcpy(&imsi_cell.imsi,&rnc_iu_cell.imsi, sizeof(imsi_t));
 
            rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
            
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct transfer]:update ImsiT <Failed> !\n");
                hydra_stat_inc(stat_pkts_update_imsi_table_failed);  
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_cc_up_imsiT);
        }

        //�˴���Ҫע��:���ֱ�Ӳ�ѯ��rnc_iu(an_info)����ȱ���й���Ϣ������rnc_iu(an_info)����
        if((!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))||
            (!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID)))
        {
            rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
            rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;

            if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))
            {
                rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
                action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;
            }

            if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID))
            {
                rnc_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
                action_rnc_iu |= AN_INFOT_UPDATE_SGSN_POINT_CODE;
            }

            
            rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct transfer]:UPDATE AN INFO table<Failed> !\n");
                hydra_stat_inc(stat_pkts_update_an_info_table_failed);    
                return rv;
            }
            hydra_stat_inc(stat_pkts_Iups_ranap_dirTrans_cc_up_anT);
        }
    }

    
    switch(IuPS_info->gmm_info.message_type)
    {
        case GMM_MSG_ATTACH_REQUEST:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_attachreq);
            rv = dt_gmm_relate_attach_request(IuPS_info);
            break;

        case GMM_MSG_ATTACH_ACCEPT:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_attachacc);
            rv = dt_gmm_relate_attach_accept(IuPS_info);
            break;    

        case GMM_MSG_RAU_ACCEPT:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_rauacc);
            rv = dt_gmm_relate_rau_accept(IuPS_info);
            break;    

        case GMM_MSG_IDENTIFY_RESPONSE:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_identityres);
            rv = dt_gmm_relate_identify_response(IuPS_info);
            break;    

        case GMM_MSG_PTMSI_REALLOCATION_COMMAND:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_realloccmd);
            rv = dt_gmm_relate_ptmsi_reallocation_cmd(IuPS_info);
            break;
       case GMM_MSG_DEATTACH_ACCEPT:
            hydra_stat_inc(stat_pkts_Iups_ranap_directTrans_deattachacc);
            rv = dt_gmm_relate_deattach_accept(IuPS_info);
            break; 
       case GMM_MSG_DEATTACH_REQUEST:
            hydra_stat_inc(stat_pkts_Iups_gmm_deattach_request);
            rv = dt_gmm_relate_deattach_request(IuPS_info);
            break; 
    }

    return rv;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_rab_assigment_req
  ����          : ��RANAP����Ϣrab_assigment_request�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_rab_assigment_req(parse_IuPS_t *IuPS_info)
{
    mp_error_t                  rv = MP_E_NONE;
    mp_code_t                   ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_rabAssigReq);

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_no_dlr);
        return MP_E_PARAM;
    }

    if(!(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_BEARID_VALID)||
        !(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_GTPIP_VALID)||
        !(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_GTPID_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_trasInfo_invalid);
        return MP_E_NONE;
    }

    hash_key_t                  key_gtpu_ul={};
    umts_table_gtpu_ul_t        gtpu_ul_cell= {};
    hash_table_index_t          index_gtpu_ul= {};
    uint64_t                    action_gtpu_ul = 0;

    update_gtp_u_table_key(IuPS_info->ranap_info.transportMsg.gTP_ip, IuPS_info->ranap_info.transportMsg.gTP_id, &key_gtpu_ul);

    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_U), &key_gtpu_ul, 
                                   &gtpu_ul_cell, sizeof(gtpu_ul_cell));
    if( MP_CELL_FOUND != ret )
    {
        //LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_request]:search GTP-U table <Failed> !\n");
        hydra_stat_inc(stat_pkts_search_gtp_u_table_failed);  
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_find_gtpuT);

    if(!(gtpu_ul_cell.mask&GTP_U_T_IMSI_VALID))
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_request]:gtp-u table info without imsi !\n");
        hydra_stat_inc(stat_pkts_gtp_u_table_info_without_imsi);  
        return MP_E_INTERNAL;
    }

    /**************************����rnc_iu(an_info)����*************************/
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    hash_table_index_t          index_rnc_iu= {};
    uint64_t                    action_rnc_iu = 0;
    
    ret = hash_table_get_an_info_cell_by_hash(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr, &rnc_iu_cell);

    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_request]: search an info table <Failed> ![dpc=%d],[opc=%d],[rnc_id=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_find_anT);
    
    //���IMSI��Ч�������rnc_iu(an_info)�����е�IMSI
    if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
    {
        rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
        rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
        rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;

        memcpy(&rnc_iu_cell.imsi, &gtpu_ul_cell.imsi, sizeof(imsi_t));
        action_rnc_iu |= AN_INFOT_UPDATE_IMSI;
            
        (void)create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &index_rnc_iu);

        //ͬʱ����sgsn_iu(cn_info)�����е�IMSI
        umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
        hash_table_index_t          index_sgsn_iu= {};
        uint64_t                    action_sgsn_iu = 0;


        sgsn_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
        sgsn_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
        sgsn_iu_cell.umts_hash_para.sgsn_sccp_id = rnc_iu_cell.umts_hash_para.sgsn_sccp_id;
        sgsn_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dlr;

        memcpy(&sgsn_iu_cell.imsi, &gtpu_ul_cell.imsi, sizeof(imsi_t));
        action_rnc_iu |= CN_INFOT_UPDATE_IMSI;

        (void)create_update_table_by_hash(TABLE_CN_INFO, UPDATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_up_anT);
    }

    /**************************�ж�GTP-U������λ����Ϣ�Ƿ���Ч*************************/    
    if(!(gtpu_ul_cell.mask&GTP_U_T_RAI_VALID))
    {
        //��Ч�Ļ����ɸ���RAI
        if(!(rnc_iu_cell.mask&AN_INFOT_RAI_VALID))
        {
            memcpy(&gtpu_ul_cell.rai, &rnc_iu_cell.rai, sizeof(rai_t));
            action_gtpu_ul |= GTP_U_T_UPDATE_IMSI;
            rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_gtpu_ul, (void*)&gtpu_ul_cell, sizeof(umts_table_gtpu_ul_t), &index_gtpu_ul);
            if(MP_E_NONE != rv)
            {
               hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_up_gtpuT_rai_fail);
               return rv;
            }
        }
    }
    else
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_gtpuT_rai_valid);
        return MP_E_NONE;
    }

    /**************************��ѯIMSI������λ����Ϣ�Ƿ���Ч*************************/    
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};
    hash_table_index_t  index_imsi= {};
    uint64_t            action_imsi = 0;

    memcpy(&imsi_cell.imsi, &gtpu_ul_cell.imsi, sizeof(imsi_t));
    update_imsi_hash_key(imsi_cell.imsi, &key_imsi);
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_request]: search imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_find_imsiT);

    //rai��Ч�����IMSI�ܱ��λ����Ϣ
    /*modified by zhengwan,����gn�ӿ���ֻ��Ҫ����lac�����Խ�rac�ĸ����ֶβ�,begin*/
    if(!(imsi_cell.mask&IMSI_T_RAI_VALID))
    {
        memcpy(&imsi_cell.rai, &IuPS_info->gmm_info.rai, sizeof(rai_t));
        action_imsi |= IMSI_T_UPDATE_PLMN;
        action_imsi |= IMSI_T_UPDATE_LAC;
        action_imsi |= IMSI_T_UPDATE_RAC;
    }
    /*modified by zhengwan,end*/
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_request]: update imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsreq_up_imsiT);
    return MP_E_NONE;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_rab_assigment_rsp
  ����          : ��RANAP����Ϣrab_assigment_response�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_rab_assigment_rsp(parse_IuPS_t *IuPS_info)
{
    mp_error_t                  rv= MP_E_NONE;
    mp_code_t                   ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_rabAssigRes);

    if(1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_no_dlr);
        return MP_E_PARAM;
    }

    if(!(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_BEARID_VALID)||
        !(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_GTPIP_VALID)||
        !(IuPS_info->ranap_info.mask&RANAP_IE_TRANS_GTPID_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_trasInfo_invalid);
        return MP_E_NONE;
    }

    /**************************����sgsn_iu(cn_info)����*************************/
    hash_key_t                  key_sgsn_iu={};
    umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
    
    update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));

    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                   &sgsn_iu_cell, sizeof(sgsn_iu_cell));
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_response]: search cn info table <Failed> ![dpc=%d],[opc=%d],[sgsn_id=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_find_cnT);

    if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_cnT_no_imsi);
        return MP_E_INTERNAL;
    }

    /**************************��ѯIMSI������λ����Ϣ�Ƿ���Ч*************************/    
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};
    hash_table_index_t  index_imsi= {};
    uint64_t            action_imsi=0;

    update_imsi_hash_key(sgsn_iu_cell.imsi, &key_imsi);
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_response]: search imsi table <Failed> !\n");
        hydra_stat_inc(stat_pkts_imsi_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_find_imsiT);
    
    /**************************��������GTP-U����*************************/
    hash_key_t                  key_gtpu_dl={};
    umts_table_gtpu_dl_t        gtpu_dl_cell= {};
    hash_table_index_t          index_gtpu_dl= {};
    uint64_t                    action_gtpu_dl = 0;

    update_gtp_u_table_key(IuPS_info->ranap_info.transportMsg.gTP_ip,IuPS_info->ranap_info.transportMsg.gTP_id,&key_gtpu_dl);

    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_U), &key_gtpu_dl, 
                                   &gtpu_dl_cell, sizeof(gtpu_dl_cell));
    if( MP_CELL_FOUND != ret )
    {
        gtpu_dl_cell.teid = IuPS_info->ranap_info.transportMsg.gTP_id;
        action_gtpu_dl |= GTP_U_T_UPDATE_TEID;
        
        memcpy(&(gtpu_dl_cell.trans_layer_ip), &(IuPS_info->ranap_info.transportMsg.gTP_ip), sizeof(ip_comm_t));
        action_gtpu_dl |= GTP_U_T_UPDATE_GTP_IP;

        memcpy(&gtpu_dl_cell.imsi, &imsi_cell.imsi, sizeof(imsi_t));
        action_gtpu_dl |= GTP_U_T_UPDATE_IMSI;

        gtpu_dl_cell.bearId = IuPS_info->ranap_info.transportMsg.bear_id;
        action_gtpu_dl |= GTP_U_T_UPDATE_BEARID;

        if(imsi_cell.mask&IMSI_T_PDN_VALID)
        {
            memcpy(&(gtpu_dl_cell.user_ip), &(imsi_cell.pdn.pdn_addr), sizeof(ip_comm_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_PDN;
        }

        if(imsi_cell.mask&IMSI_T_IMEI_VALID)
        {
            memcpy(&gtpu_dl_cell.imei, &imsi_cell.imei, sizeof(imei_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_IMEI;
        }

        if(imsi_cell.mask&IMSI_T_MSISDN_VALID)
        {
            memcpy(&gtpu_dl_cell.msisdn, &imsi_cell.msisdn, sizeof(msisdn_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_MSISDN;

            if(imsi_cell.mask&IMSI_T_EX_FIELD_VALID)
            {
                gtpu_dl_cell.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
                action_gtpu_dl |= GTP_U_T_UPDATE_EX_FIELD;
            }
        }

        if(imsi_cell.mask&IMSI_T_RAI_VALID)
        {
            memcpy(&gtpu_dl_cell.rai, &imsi_cell.rai, sizeof(rai_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_PLMN;
            action_gtpu_dl |= GTP_U_T_UPDATE_LAC;
            action_gtpu_dl |= GTP_U_T_UPDATE_RAC;
        }
        
        if(imsi_cell.mask&IMSI_T_CELL_ID_VALID)
        {
            memcpy(&gtpu_dl_cell.cell_id, &imsi_cell.cell_id, sizeof(cell_id_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_CELL_ID;
        }
        gtpu_dl_cell.aging = (uint16_t)g_aging_timer_max;
        action_gtpu_dl |= GTP_U_T_UPDATE_AGING;

        gtpu_dl_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
        action_gtpu_dl |= GTP_U_T_UPDATE_MOBILE_TYPE;
        
        rv = create_update_table_by_hash(TABLE_GTP_U, CREATE_TABLE, action_gtpu_dl, (void*)&gtpu_dl_cell, sizeof(umts_table_gtpu_dl_t), &index_gtpu_dl);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_response]:create GTP-U table <Failed> !\n");
            hydra_stat_inc(stat_pkts_create_gtp_u_table_failed);  
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_ranap_rabAsres_create_gtpuT);

        /*--------------��IMSI�����и���pos_dl_gtp_u[0]------------------*/
        action_imsi = 0;
        SET_TABLE_INDEX( (&(imsi_cell.pos_dl_gtp_u[0])),
                            index_gtpu_dl.index, index_gtpu_dl.node);
        action_imsi |= IMSI_T_UPDATE_POS_DL_GTP_U_DEFAULT;
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_response]:update imsi table <Failed> !\n");
            //hydra_stat_inc(stat_pkts_imsi_table_failed);
            return rv;
        }    
    }

    return MP_E_NONE;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_Iu_release
  ����          : ��RANAP����ϢIu_release�����Ĺ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_relate_Iu_release(parse_IuPS_t *IuPS_info)
{
    mp_error_t          rv = MP_E_NONE;
    mp_code_t           ret = MP_OK;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_IuRelease_IupsInfo_isNull);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_ranap_IuRelease);

    if((1!=IuPS_info->sccp_info.dlr_indic)||( EN_DIRECTION_DOWN_LINK !=IuPS_info->direction) )
    {
        hydra_stat_inc(stat_pkts_Iups_ranap_IuRelease_noDlrOrDirection);
        return MP_E_PARAM;
    }

    /**************************����rnc_iu(an_info)����*************************/
    hash_key_t                  key_rnc_iu={};
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    hash_key_t                  key_sgsn_iu={};
   
    update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                   &rnc_iu_cell, sizeof(rnc_iu_cell));
    if( MP_CELL_FOUND != ret )
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[Iu_release]: search an info table <Failed> ![dpc=%d],[opc=%d],[rnc_id=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_ranap_IuRelease_find_anT);
    update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));
    update_umts_cn_info_table_key(IuPS_info->sccp_info.opc,rnc_iu_cell.umts_hash_para.sgsn_sccp_id,IuPS_info->sccp_info.dpc, &(key_sgsn_iu));
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};
    uint64_t            action_imsi = 0;
    hash_table_index_t  index_imsi= {};
    if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
    {
        update_imsi_hash_key(rnc_iu_cell.imsi, &key_imsi);
        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
        if( MP_CELL_FOUND != ret )
        {
            
            hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO),&(key_rnc_iu));
            hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO),&(key_sgsn_iu));
            return MP_E_NONE;
        }
        else
        {
            if(imsi_cell.mask&IMSI_T_POS_AN_INFO_VALID)
            {
                hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_AN_INFO),&(imsi_cell.pos_an_info));
            }
            else
            {
                hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO),&(key_rnc_iu));
            }

            if(imsi_cell.mask&IMSI_T_POS_CN_INFO_VALID)
            {
                hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_CN_INFO),&(imsi_cell.pos_cn_info));
            }
            else
            {
                hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO),&(key_sgsn_iu));
            }

            //��IMSI�ܱ��е�pos_an_info��pos_cn_info��MASK��־λ�ĳɿ�
            imsi_cell.mask &= 0xfffeffff;
            imsi_cell.mask &= 0xfffbffff;
            action_imsi |= IMSI_T_UPDATE_MASK;
            rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
            if(MP_E_NONE != rv)
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[direct_transfer]:attach_accept update imsi table <Failed> !\n");
                return rv;
            }            
        }
        
    }
    else
    {
        
        hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO),&(key_rnc_iu));
        hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO),&(key_sgsn_iu));
    }


    return MP_E_NONE;
}


/**********************************************************************************************
  ��������      : umts_IuPS_sccp_cr_msg_without_ranap
  ����          : SCCP����ϢΪCR��Ϣ��û��RANAP��Ϣ�Ĵ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_sccp_cr_msg_without_ranap(parse_IuPS_t *IuPS_info)
{
    mp_error_t                  rv            = MP_E_NONE;
    hash_table_index_t          rnc_iu_index  = {};
    umts_table_rnc_iu_info_t    rnc_iu_cell   = {};
    uint64_t                    action_rnc_iu = 0;

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_sccp_cr_no_IupsInfo);
        LOG_PRINT(M_S1,LV_ERROR,LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_sccp_cr_without_ranap);

    if(1!=IuPS_info->sccp_info.slr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_sccp_cr_no_slr);
        return MP_E_PARAM;
    }


    /**************************����RNC_IU(an_info)����*************************/
    
    rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
    rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.opc;
    action_rnc_iu |= AN_INFOT_UPDATE_RNC_POINT_CODE;
    rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.slr;
    action_rnc_iu |= AN_INFOT_UPDATE_RNC_SCCP_ID;
    rnc_iu_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
    action_rnc_iu |= AN_INFOT_UPDATE_MOBILE_TYPE;

    rnc_iu_cell.aging = g_aging_timer_max;
    action_rnc_iu |= AN_INFOT_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &rnc_iu_index);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[sccp_cr_msg_without_ranap]:create AN INFO table<Failed> !\n");
        hydra_stat_inc(stat_pkts_create_an_info_table_failed);      
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_sccp_cr_create_anT);

    return MP_E_NONE;
}


/**********************************************************************************************
  ��������      : umts_IuPS_sccp_cc_msg_without_ranap
  ����          : SCCP����ϢΪCC��Ϣ��û��RANAP��Ϣ�Ĵ�������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t umts_IuPS_sccp_cc_msg_without_ranap(parse_IuPS_t *IuPS_info)
{
    mp_error_t                  rv            = MP_E_NONE;
    mp_code_t                   ret           = MP_OK;
    hash_table_index_t          rnc_iu_index  = {};
    umts_table_rnc_iu_info_t    rnc_iu_cell   = {};
    uint64_t                    action_rnc_iu = 0;
    hash_key_t                  key_rnc_iu    ={};

    if(NULL == IuPS_info)
    {
        hydra_stat_inc(stat_pkts_Iups_sccp_cc_no_IupsInfo);
        LOG_PRINT(M_S1,LV_ERROR,LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    hydra_stat_inc(stat_pkts_Iups_sccp_cc_without_ranap);

    if(1!=IuPS_info->sccp_info.slr_indic || 1!=IuPS_info->sccp_info.dlr_indic)
    {
        hydra_stat_inc(stat_pkts_Iups_sccp_cc_no_slrOrdlr);
        return MP_E_PARAM;
    }

    /**************************����rnc_iu(an_info)����*************************/
    rnc_iu_cell.mask = 0;
    
    update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));

    ret = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                               &rnc_iu_cell, sizeof(rnc_iu_cell),&rnc_iu_index);

    if( MP_CELL_FOUND != ret )
    {
        hydra_stat_inc(stat_pkts_Iups_sccp_cc_no_find_anT);
        
        /*����rnc_iu(an_info)����ʧ�ܣ����½���rnc_iu(an_info)����*/
        rnc_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
        rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
        action_rnc_iu |= AN_INFOT_UPDATE_RNC_POINT_CODE;
        rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
        action_rnc_iu |= AN_INFOT_UPDATE_RNC_SCCP_ID;
        rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
        action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;
            
        rnc_iu_cell.mobile_type = MCS_WCDMA;/*���ڱ�־Ϊ3g*/
        action_rnc_iu |= AN_INFOT_UPDATE_MOBILE_TYPE;

        rnc_iu_cell.aging = g_aging_timer_max;
        action_rnc_iu |= AN_INFOT_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_AN_INFO, CREATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &rnc_iu_index);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_IuPS_sccp_cc_msg_without_ranap]:create AN INFO table<Failed> !\n");
            hydra_stat_inc(stat_pkts_create_an_info_table_failed);    
            return rv;
        }
        hydra_stat_inc(stat_pkts_Iups_sccp_cc_create_anT);
    }

    /**************************����sgsn_iu(cn_info)����*************************/
    umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
    hash_table_index_t          index_sgsn_iu= {};
    uint64_t                    action_sgsn_iu = 0;

    sgsn_iu_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
    sgsn_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
    action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_POINT_CODE;
    
    sgsn_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
    action_sgsn_iu |= CN_INFOT_UPDATE_SGSN_SCCP_ID;
    sgsn_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;
    action_sgsn_iu |= CN_INFOT_UPDATE_RNC_POINT_CODE;
    
    sgsn_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;
    action_sgsn_iu |= CN_INFOT_UPDATE_RNC_SCCP_ID;

    if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
    {
        memcpy(&sgsn_iu_cell.imsi, &rnc_iu_cell.imsi, sizeof(imsi_t));
        action_sgsn_iu |= CN_INFOT_UPDATE_IMSI;
    }
    /*�ֻ�������3g*/
    sgsn_iu_cell.mobile_type = MCS_WCDMA;
    action_sgsn_iu |= CN_INFOT_UPDATE_MOBILE_TYPE;

    sgsn_iu_cell.aging = g_aging_timer_max;
    action_sgsn_iu |= CN_INFOT_UPDATE_AGING;

    rv = create_update_table_by_hash(TABLE_CN_INFO, CREATE_TABLE, action_sgsn_iu, (void*)&sgsn_iu_cell, sizeof(umts_table_sgsn_Iu_info_t), &index_sgsn_iu);
    if(MP_E_NONE != rv)
    {
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_IuPS_sccp_cc_msg_without_ranap]:create CN INFO table<Failed> ![dpc=%d],[opc=%d],[sgsn_id=0x%x],[rnc_id=0x%x]\n",
              IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.slr, IuPS_info->sccp_info.dlr);
        hydra_stat_inc(stat_pkts_create_cn_info_table_failed);  
        return rv;
    }
    hydra_stat_inc(stat_pkts_Iups_sccp_cc_create_cnT);

    if(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID)
    {

        /**************************����IMSI����*************************/
        umts_table_imsi_t           imsi_cell= {};
        hash_table_index_t          index_imsi= {};
        uint64_t                    action_imsi = 0;

        SET_TABLE_INDEX( (&(imsi_cell.pos_an_info)), rnc_iu_index.index, rnc_iu_index.node);
        action_imsi |= IMSI_T_UPDATE_POS_AN_INFO;

        SET_TABLE_INDEX( (&(imsi_cell.pos_cn_info)), index_sgsn_iu.index, index_sgsn_iu.node);
        action_imsi |= IMSI_T_UPDATE_POS_CN_INFO;

        memcpy(&imsi_cell.imsi,&rnc_iu_cell.imsi, sizeof(imsi_t));
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void*)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_IuPS_sccp_cc_msg_without_ranap]:update ImsiT <Failed> !\n");
            hydra_stat_inc(stat_pkts_update_imsi_table_failed);  
            return rv;
        }
    }

    //�˴���Ҫע��:���ֱ�Ӳ�ѯ��rnc_iu(an_info)����ȱ���й���Ϣ������rnc_iu(an_info)����
    if((!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))||
        (!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID)))
    {

        rnc_iu_cell.umts_hash_para.rnc_m3ua_signal_code = IuPS_info->sccp_info.dpc;

        rnc_iu_cell.umts_hash_para.rnc_sccp_id = IuPS_info->sccp_info.dlr;

        if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_SCCP_ID_VALID))
        {
            rnc_iu_cell.umts_hash_para.sgsn_sccp_id = IuPS_info->sccp_info.slr;
            action_rnc_iu |= AN_INFOT_UPDATE_SGSN_SCCP_ID;
        }

        if(!(rnc_iu_cell.mask&AN_INFOT_SGSN_POINT_CODE_VALID))
        {
            rnc_iu_cell.umts_hash_para.sgsn_m3ua_signal_code = IuPS_info->sccp_info.opc;
            action_rnc_iu |= AN_INFOT_UPDATE_SGSN_POINT_CODE;
        }
        
        rv = create_update_table_by_hash(TABLE_AN_INFO, UPDATE_TABLE, action_rnc_iu, (void*)&rnc_iu_cell, sizeof(umts_table_rnc_iu_info_t), &rnc_iu_index);
        if(MP_E_NONE != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_IuPS_sccp_cc_msg_without_ranap]:UPDATE AN INFO table<Failed> !\n");
            hydra_stat_inc(stat_pkts_update_an_info_table_failed);    
            return rv;
        }
    }
    return MP_E_NONE;
}


/**********************************************************************************************
  ��������      : umts_signal_submit
  ����          : �����û���־����
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : IuPS_info���������ı�����Ϣ���ڹ����� event �û��¼�
  ���          : ��
  ����          : �ɹ�����MP_E_NONE/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t  umts_signal_submit(parse_IuPS_t *IuPS_info,uint8_t event)
{
    hash_key_t                  key_rnc_iu={};
    umts_table_rnc_iu_info_t    rnc_iu_cell= {};
    mp_code_t                   ret = MP_OK;
    hash_key_t                  key_imsi = {};
    umts_table_imsi_t           imsi_cell= {};
    pack_info_t                 event_info    = {};
    int64_t                     pack_mask = 0;
    uint8_t                     buf[1024] = "";
    uint16_t                    len = 0;
    uint32_t                    oifgrp_id = 0;
    lte_imsi_t                  imsi;
    hash_key_t                  key_sgsn_iu={};
    umts_table_sgsn_Iu_info_t   sgsn_iu_cell= {};
    pkt_setup_t   pkt_setup_backup              = {};
    pkt_setup_t   pkt_setup_tmp                 = {};
   
    if(FALSE == lte_signal_enable_get())//���lte_signal_enable_get()����FALSE˵��������־�����ǽ��õ�
    {
        return MP_E_INTERNAL;
    }
    
    if(EN_DIRECTION_DOWN_LINK==IuPS_info->direction)
    {
        update_umts_an_info_table_key(IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.dlr,&(key_rnc_iu));
        /*����an info��*/
        ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                        &rnc_iu_cell, sizeof(rnc_iu_cell));
            
        if( MP_CELL_FOUND != ret )
        {
            /*û���ҵ�����*/
            LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_signal_submit]: search an info table <Failed> ![rnc_ip=%lx],[rnc_id=0x%x]\n",IuPS_info->rncip.ip.u64[0],IuPS_info->sccp_info.dlr);
            hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
            return MP_E_INTERNAL;
        }
        if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
        {
            /*an info���imsi��Ч���򷵻�*/
            LTE_DEBUG_PRINTF("table an info error imsi invalid\n");
            return MP_E_INTERNAL;
        }
        else
        {
            memcpy(&imsi,&rnc_iu_cell.imsi,sizeof(lte_imsi_t));
        }
    }
    else 
    {
        if((GMM_MSG_DEATTACH_REQUEST == IuPS_info->gmm_info.message_type) &&(ranap_id_InitialUE_Message == IuPS_info->ranap_info.procecode))
        {
            update_umts_an_info_table_key(IuPS_info->sccp_info.opc, IuPS_info->sccp_info.slr,&(key_rnc_iu));
            /*����an info��*/
            ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_AN_INFO), &key_rnc_iu, 
                                            &rnc_iu_cell, sizeof(rnc_iu_cell));
                
            if( MP_CELL_FOUND != ret )
            {
                /*û���ҵ�����*/
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_signal_submit]:attach_request search an info table <Failed> ![rnc_ip=%lx],[rnc_id=0x%x]\n",IuPS_info->rncip.ip.u64[0],IuPS_info->sccp_info.dlr);
                hydra_stat_inc(stat_pkts_search_an_info_table_failed); 
                return MP_E_INTERNAL;
            }
            if(!(rnc_iu_cell.mask&AN_INFOT_IMSI_VALID))
            {
                /*an info���imsi��Ч���򷵻�*/
                LTE_DEBUG_PRINTF("table an info error imsi invalid\n");
                return MP_E_INTERNAL;
            }
            else
            {
                memcpy(&imsi,&rnc_iu_cell.imsi,sizeof(lte_imsi_t));
            }
        }
        else
        {
            update_umts_cn_info_table_key(IuPS_info->sccp_info.dpc,IuPS_info->sccp_info.dlr,IuPS_info->sccp_info.opc, &(key_sgsn_iu));
            ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_CN_INFO), &key_sgsn_iu, 
                                       &sgsn_iu_cell, sizeof(sgsn_iu_cell));
            if( MP_CELL_FOUND != ret )
            {
                LOG_PRINT(M_S1,LV_ERROR, "IuPS-[rab_assigment_response]: search cn info table <Failed> ![dpc=%d],[opc=%d],[sgsn_id=0x%x]\n",IuPS_info->sccp_info.dpc, IuPS_info->sccp_info.opc, IuPS_info->sccp_info.dlr);
                hydra_stat_inc(stat_pkts_search_cn_info_table_failed); 
                return MP_E_INTERNAL;
            }

            if(!(sgsn_iu_cell.mask&CN_INFOT_IMSI_VALID))
            {
                return MP_E_INTERNAL;
            }
            else
            {
                memcpy(&imsi,&sgsn_iu_cell.imsi,sizeof(lte_imsi_t));
            }
        }
    }
        
    update_imsi_hash_key(imsi, &key_imsi);
    /*����imsi�ܱ�*/
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                               &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != ret )
    {
        /*û���ҵ�����,��ֱ�ӷ���*/
        LOG_PRINT(M_S1,LV_ERROR, "IuPS-[umts_signal_submit]: search imsi table <Failed> !\n");
        //hydra_stat_inc(stat_search_kasme_failed_1);
        return MP_E_INTERNAL;
    }

    if(imsi_cell.mask&IMSI_T_IMSI_VALID)
    {
        memcpy(event_info.imsi,imsi_cell.imsi,IMSI_LEN);
        event_info.imsi_en = ENABLE;     
    }
    else
    {
        event_info.imsi_en = DISABLE;
    }
    pack_mask |= PACK_IMSI;  
    
    if(imsi_cell.mask&IMSI_T_IMEI_VALID)
    {
        memcpy(event_info.imei,imsi_cell.imei,IMEI_LEN);
        event_info.imei_en = ENABLE;   
    }
    else
    {
        event_info.imei_en = DISABLE;
    }
    pack_mask |= PACK_IMEI;       
    
    if(imsi_cell.mask&IMSI_T_MSISDN_VALID)
    {
        memcpy(event_info.st_msisdn.msisdn,imsi_cell.msisdn,LTE_MSISDN_LEN);
        event_info.st_msisdn.msisdn_len = imsi_cell.ex_field.msisdn_len;
        event_info.msisdn_en = ENABLE;
    }
    else
    {
        event_info.msisdn_en = DISABLE;   
    }
    pack_mask |= PACK_MSISDN;   
    
    if(imsi_cell.mask&IMSI_T_RAI_VALID)
    {
        memcpy(&event_info.rai,&imsi_cell.rai,RAI_LEN);
        event_info.rai_en = ENABLE;      
    }
    else
    {
       event_info.rai_en = DISABLE;         
    }
    pack_mask |= PACK_RAI; 

    
    event_info.event_type = event;
    /*����û�����*/
    if(MP_E_NONE != signal_log_usr_info_pack(event_info,buf,sizeof(buf),&len,pack_mask))
    {
        return MP_E_INTERNAL;
    }
    oifgrp_id = 1;//lte_signal_oifgrp_get();
    //��ȡ��ǰ��packet ����
    pkt_setup_get(&pkt_setup_backup);
    pkt_setup_tmp = pkt_setup_backup;
    /*ԴĿ��ip�İ汾������ͬ*/
    if(IuPS_info->rncip.version != IuPS_info->sgsnip.version)
    {
        return MP_E_INTERNAL;
    }
    /*�ж��Ƿ���ipv4*/
    if(IP_V4 == IuPS_info->rncip.version)
    {
        /*����ipv4��������־����,��־���Ķ���udp����*/
        pkt_setup_tmp.output_packet_type = PACKET_TYPE_IPV4_UDP;
    }
    else
    {
        pkt_setup_tmp.output_packet_type = PACKET_TYPE_IPV6_UDP;
    }
    pkt_setup_tmp.src_ip = IuPS_info->rncip;
    pkt_setup_tmp.dest_ip = IuPS_info->sgsnip;
    pkt_setup_tmp.dest_port = htons(8888);
    pkt_setup_tmp.src_port = htons(6666);
    //����packet����
    pkt_setup_set(&pkt_setup_tmp);
    if(MP_E_NONE != send_buf(oifgrp_id,buf,len))
    {
        hydra_stat_inc(stat_send_buf_fail);
        return MP_E_INTERNAL;
    }
    //�ָ�packet����
    pkt_setup_set(&pkt_setup_backup);    
    /*������־����*/
    return MP_E_NONE;
}







/******************************************************************************
 * ��������    : hash_table_get_an_info_cell_by_hash
 * ����        : 
 * ����        : 
 * ˵��        : 
 * ����        : �����룬�����ɹ�����MP_OK,���������������˵��
******************************************************************************/
mp_code_t hash_table_get_an_info_cell_by_hash(uint32_t rnc_m3ua_sig_code, uint32_t rnc_sccp_id, umts_table_rnc_iu_info_t *an_info_op)
{
    struct list_head *pos                           = NULL;
    struct list_head *next                          = NULL;

    hash_table_t    *table                          = LTE_GET_TABLE_PTR(TABLE_AN_INFO);
    hash_bucket_t   *bucket                         = NULL;
    hash_cell_t     *src_cell                       = NULL;       /* �����ص�cell�ڵ㣬��ҪתΪs1u cell*/
    hash_cmp_em_t   cmp_rlt                         = HASH_CMP_DIFF;
    uint32_t        hash_result                     = 0;
    umts_table_rnc_iu_info_t    an_info_cell        = {};         /* ����cell���ϣ�Ƚϵ���ʱֵ */
    umts_table_rnc_iu_info_t *  an_info_src_cell    = NULL;     /* ָ���ѯ����cell */
    hash_key_t                                      key_rnc_iu={};


    CVMX_MP_POINT_CHECK(an_info_op, M_S1, LV_ERROR);
    
    an_info_cell.umts_hash_para.reserved = MOBILE_TYPE_UMTS_FLAG;
    an_info_cell.umts_hash_para.rnc_m3ua_signal_code = rnc_m3ua_sig_code;
    an_info_cell.umts_hash_para.rnc_sccp_id = rnc_sccp_id;  
    update_umts_an_info_table_key(rnc_m3ua_sig_code,rnc_sccp_id,&key_rnc_iu);
    
    if( MP_OK !=  table->hash(&key_rnc_iu, &hash_result) )
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

    /*����˫�������Ƚ�cell��key�Ƿ�һ��,��ȷ����*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S1, LV_ERROR);
        CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S1, LV_ERROR);

        if( MP_OK != table->compare((void *)src_cell->entry,
                                    (void *)&an_info_cell, &cmp_rlt))
        {
            return MP_FAIL;
        }

        if(HASH_CMP_SAME == cmp_rlt)
        {
            LTE_DEBUG_PRINTF("[hash_table_get_an_info_cell_by_hash]:found an info table!!!!\n");
            an_info_src_cell = (umts_table_rnc_iu_info_t *)(src_cell->entry);            

           /* ���ڹ����ϵı���,��Ҫ���¹������������ֵ */
            an_info_src_cell->aging = g_aging_timer_max;
            an_info_src_cell->updt_tim_flag = true;
            memcpy( an_info_op, src_cell->entry, sizeof(umts_table_rnc_iu_info_t));
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_CELL_FOUND;
        }
    }

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_NOT_FOUND;
}

