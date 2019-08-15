/****************************************************************************** 

版权所有（C），2001-2016年，恒扬科技股份有限公司

******************************************************************************
文件名:       umts_relate_gn_c.c
编码格式:     ASCII
作者:         ruansong
创建:         Mar 17, 2016
历史:
    1.日期    :Mar 17, 2016
      作者    :ruansong
      修改    :Created file
******************************************************************************/

#include "umts_relate.h"

#if 1
mp_code_t umts_check_TBCD_encode(uint16_t ie_len, uint8_t *ie_buf)
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


mp_code_t update_gtp_c_hash_key(ip_comm_t gtp_ip, uint32_t teid, hash_key_t *key)
{
    uint8_t *ptr = NULL;
    CVMX_MP_POINT_CHECK(key, M_S1, LV_ERROR);

    ptr = (uint8_t *)key->data;
    IP_TRASNFER_TO_KEY(ptr, gtp_ip);
    memcpy(ptr, &teid, sizeof(teid));
    key->size = 3;
    return MP_OK;
}

/* 建立imsi表，建立 Gn_sgsn表 */
mp_code_t umts_gn_c_create_pdp_context_requset(parse_gtpv1c_t *gtpc)
{
    /*step 1. Imsi*/
    mp_code_t rv = MP_OK;

    umts_table_imsi_t       imsi_cell= {};
    hash_table_index_t      index_imsi= {};
    uint64_t                action_imsi = 0;
    
    umts_table_Gn_sgsn_t    Gn_sgsn_search_d = {};
    hash_table_index_t      Gn_sgsn_index = {};
    uint64_t                action_Gn_sgsn = 0;

    hydra_stat_inc(stat_pkts_gtpv1c_create_pdp_context_request);

    CVMX_MP_POINT_CHECK(gtpc, M_GN, LV_ERROR);

    //如果GTPV1-C的头部的teid为0，当做创建主PDP过程；反之为创建从PDP过程
    if(0 ==gtpc->teid)
    {
        /****************************创建主PDP过程*********************************/
        if(!(gtpc->mask&GTPV1C_PARA_IMSI_VALID))
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request:GTPV1C IMSI is valid \n");
            hydra_stat_inc(stat_pkts_gtpv1c_para_imsi_invalid);
            return MP_FUN_PARAM_ERR;
        }
        
        if(MP_OK != umts_check_TBCD_encode(LTE_IMSI_LEN, gtpc->imsi))
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request: Check imsi <non-bcd encode> \n");
            hydra_stat_inc(stat_pkts_imsi_info_not_bcd);
            return MP_FUN_PARAM_ERR;
        }

        if(!(gtpc->mask&GTPV1C_PARA_GTPIP_C_DL_VALID) || !(gtpc->mask&GTPV1C_PARA_TEID_C_DL_VALID))
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request:GTPV1C GTPIP_C_DL or TEID_C_DL is valid\n");
            hydra_stat_inc(stat_pkts_gtpv1c_ip_teid_invalid);
            return MP_FUN_PARAM_ERR;
        }

        /*--------------创建IMSI表项------------------*/
        memcpy(imsi_cell.imsi, gtpc->imsi, sizeof(imsi_t));
        action_imsi |= IMSI_T_UPDATE_IMSI;
        
        if(gtpc->mask&GTPV1C_PARA_IMEI_VALID)
        {
            memcpy(imsi_cell.imei, gtpc->imei, sizeof(imei_t));
            action_imsi |= IMSI_T_UPDATE_IMEI;
        }

        if(gtpc->mask&GTPV1C_PARA_MSISDN_VALID)
        {
            memcpy(imsi_cell.msisdn, gtpc->msisdn, sizeof(msisdn_t));
            action_imsi |= IMSI_T_UPDATE_MSISDN;
            imsi_cell.ex_field.msisdn_len = gtpc->msisdn_len;
            action_imsi |= IMSI_T_UPDATE_EX_FIELD;
        }        
        
        imsi_cell.mobile_type = MCS_WCDMA;/*用于标志为3g*/
        action_imsi |= IMSI_T_UPDATE_MOBILE_TYPE;

        /*modified by zhengwan,更新imsi表中的lac和cell_id字段,begin*/
        if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
        {
            memcpy(imsi_cell.cell_id, gtpc->cell_id, sizeof(gtpc->cell_id));
            action_imsi |= IMSI_T_UPDATE_CELL_ID;
        }

        if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
        {
            memcpy(imsi_cell.rai.lac, gtpc->lac, sizeof(lac_t));
            action_imsi |= IMSI_T_UPDATE_LAC;
        }
        /*modified by zhengwan,end*/
		
		imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_IMSI, CREATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request: create Imsi <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_createreq_create_imsiTable_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Gn_createreq_create_imsiTable);
   
        /*--------------创建Gn_sgsn表项------------------*/

        memcpy(&(Gn_sgsn_search_d.control_plane_ip), &(gtpc->gtp_ip[GTP_C_DL]), sizeof(ip_comm_t));
        Gn_sgsn_search_d.teid   = gtpc->gtp_teid[GTP_C_DL];
        action_Gn_sgsn |= GTP_C_T_UPDATE_GTP_IP;
        action_Gn_sgsn |= GTP_C_T_UPDATE_TEID;
        Gn_sgsn_search_d.aging = (uint16_t)g_aging_timer_max;
        action_Gn_sgsn |= GTP_C_T_UPDATE_AGING;
        memcpy(&Gn_sgsn_search_d.imsi, &gtpc->imsi, sizeof(imsi_t));
        action_Gn_sgsn |= GTP_C_T_UPDATE_IMSI;
         
        LOG_PRINT(M_GN, LV_INFO, "sgsn_ip: %lx %lx sgsn_teid:%x \n", Gn_sgsn_search_d.control_plane_ip.ip.u64[0],
                                            Gn_sgsn_search_d.control_plane_ip.ip.u64[1], Gn_sgsn_search_d.teid);

        rv = create_update_table_by_hash(TABLE_GTP_C, CREATE_TABLE, action_Gn_sgsn, (void *)&Gn_sgsn_search_d, sizeof(umts_table_Gn_sgsn_t), &Gn_sgsn_index);

        if(MP_OK != rv)
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request: create Gn_sgsn <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_createreq_create_sgsnTable_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Gn_createreq_create_sgsnTable);
        /*--------------在IMSI表项中更新pos_dl_gtp_c------------------*/
        action_imsi = 0;
        SET_TABLE_INDEX((&(imsi_cell.pos_dl_gtp_c)),
                            Gn_sgsn_index.index, Gn_sgsn_index.node);
        action_imsi |= IMSI_T_UPDATE_POS_DL_GTP_C;
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context request: update Imsi <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_createreq_update_imsiTable2_failed);
            return rv;
        }
        hydra_stat_inc(stat_pkts_Gn_createreq_update_imsiTable2);
    }
    else
    {
        /****************************创建从PDP过程*********************************/
        
    }

    return MP_OK;
}

/* 建立imsi表，建立 Gn_ggsn 表 */
mp_code_t umts_gn_c_create_pdp_context_responese(parse_gtpv1c_t *gtpc)
{
    mp_code_t   rv = MP_OK;
    mp_error_t  ret = MP_E_NONE;

    hash_key_t              key_Gn_sgsn={};
    umts_table_Gn_sgsn_t    Gn_sgsn_cell= {};

    hydra_stat_inc(stat_pkts_gtpv1c_create_pdp_context_response);
    
    CVMX_MP_POINT_CHECK(gtpc, M_GN, LV_ERROR);
    
    if(gtpc->mask&GTPV1C_PARA_CAUSE_VALID)
    {
        if(CAUSE_REQUEST_ACCEPTED != gtpc->cause)
        {
            LOG_PRINT(M_GN, LV_INFO, "Create pdp context response: Check Cause <Reject-%d>\n", gtpc->cause);
            hydra_stat_inc(stat_pkts_response_reject);
            return MP_OK;  
        }
    }
    else
    {
        return MP_PARSE_RLT;  
    }

    if(!(gtpc->mask&GTPV1C_PARA_GTPIP_C_UL_VALID) || !(gtpc->mask&GTPV1C_PARA_TEID_C_UL_VALID) ||
         !(gtpc->mask&GTPV1C_PARA_GTPIP_U_UL_VALID) || !(gtpc->mask&GTPV1C_PARA_TEID_U_UL_VALID))
    {
        LOG_PRINT(M_GN, LV_INFO, "Create Session request: Check gtpc valid failed! \n");
        hydra_stat_inc(stat_pkts_gtpv1c_ip_teid_invalid);
        return MP_FUN_PARAM_ERR;
    }

    memcpy(&(Gn_sgsn_cell.control_plane_ip), &(gtpc->dstip), sizeof(ip_comm_t));
    Gn_sgsn_cell.teid = gtpc->teid;

    LOG_PRINT(M_GN, LV_INFO, "sgsn_ip: %lx %lx sgsn_teid:%x \n", Gn_sgsn_cell.control_plane_ip.ip.u64[0],
                                            Gn_sgsn_cell.control_plane_ip.ip.u64[1], Gn_sgsn_cell.teid);
    update_gtp_c_hash_key(gtpc->dstip, gtpc->teid, &(key_Gn_sgsn));
    
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_C), &key_Gn_sgsn, 
                                   &Gn_sgsn_cell, sizeof(Gn_sgsn_cell));
    if(MP_CELL_FOUND != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "Create pdp context response: Search Table Gn_sgsn <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_createrep_search_sgsnTable_failed);
        return rv;
    }
    
    hash_key_t              key_imsi={};
    umts_table_imsi_t       imsi_cell= {};
    hash_table_index_t      index_imsi= {};
    uint64_t                action_imsi = 0;

    /*--------------查询IMSI表项------------------*/
    memcpy(&imsi_cell.imsi, &Gn_sgsn_cell.imsi, sizeof(imsi_t));
    PRINTF_IMSI(imsi_cell.imsi);
    update_imsi_hash_key(imsi_cell.imsi, &key_imsi);

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if(MP_CELL_FOUND != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "Create pdp context response: Search Table imsi <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_createrep_search_imisTable_failed);
        return rv;
    }
    
    umts_table_Gn_ggsn_t    Gn_ggsn_search_d = {};
    hash_table_index_t      Gn_ggsn_index = {};
    uint64_t                action_gn_ggsn = 0;
    
    /*--------------创建Gn_ggsn_gtpc表项------------------*/
    memcpy(&(Gn_ggsn_search_d.control_plane_ip), &(gtpc->gtp_ip[GTP_C_UL]), sizeof(ip_comm_t));
    Gn_ggsn_search_d.teid   = gtpc->gtp_teid[GTP_C_UL];
    action_gn_ggsn |= GTP_C_T_UPDATE_GTP_IP;
    action_gn_ggsn |= GTP_C_T_UPDATE_TEID;
    Gn_ggsn_search_d.aging = (uint16_t)g_aging_timer_max;
    action_gn_ggsn |= GTP_C_T_UPDATE_AGING;
    memcpy(&Gn_ggsn_search_d.imsi, &Gn_sgsn_cell.imsi, sizeof(imsi_t));
    action_gn_ggsn |= GTP_C_T_UPDATE_IMSI;

    LOG_PRINT(M_GN, LV_INFO, "ggsn_ip: %lx %lx ggsn_teid:%x \n", Gn_ggsn_search_d.control_plane_ip.ip.u64[0],
                                            Gn_ggsn_search_d.control_plane_ip.ip.u64[1], Gn_ggsn_search_d.teid);

    rv = create_update_table_by_hash(TABLE_GTP_C, CREATE_TABLE, action_gn_ggsn, (void *)&Gn_ggsn_search_d, sizeof(umts_table_Gn_ggsn_t), &Gn_ggsn_index);

    if(MP_OK != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "Create pdp context response: Search Gn_ggsn <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_createrep_create_ggsnTable_failed);
        return rv;
    }
    hydra_stat_inc(stat_pkts_Gn_createrep_create_ggsnTable);

     /*--------------创建Gn_ggsn_gtpu表项------------------*/
    umts_table_gtpu_ul_t    gtpu_ul_search_d = {};
    hash_table_index_t      gtpu_ul_index = {};
    uint64_t                action_gtpu_ul = 0; 

    memcpy(&(gtpu_ul_search_d.trans_layer_ip), &(gtpc->gtp_ip[GTP_U_UL]), sizeof(ip_comm_t));
    gtpu_ul_search_d.teid           = gtpc->gtp_teid[GTP_U_UL];
    action_gtpu_ul |= GTP_U_T_UPDATE_GTP_IP;
    action_gtpu_ul |= GTP_U_T_UPDATE_TEID;

    if(!(gtpc->mask&GTPV1C_PARA_PDN_VALID))
    {
        LOG_PRINT(M_GN, LV_INFO, "Create pdp context response:GTPV1C PDN is valid \n");
        hydra_stat_inc(stat_pkts_gtpv1c_para_pdn_invalid);
        return MP_FUN_PARAM_ERR;
    }
    
    memcpy(&(gtpu_ul_search_d.user_ip), &(gtpc->pdn.pdn_addr), sizeof(ip_comm_t));
    action_gtpu_ul |= GTP_U_T_USER_IP_VALID;

    PRINTF_IMSI(Gn_sgsn_cell.imsi);
    memcpy(&gtpu_ul_search_d.imsi, &Gn_sgsn_cell.imsi, sizeof(imsi_t));
    action_gtpu_ul |= GTP_U_T_UPDATE_IMSI;

    PRINTF_IMSI(gtpu_ul_search_d.imsi);

    if(imsi_cell.mask&IMSI_T_IMEI_VALID)
    {
        memcpy(&gtpu_ul_search_d.imei, &imsi_cell.imei, sizeof(imei_t));
        action_gtpu_ul |= GTP_U_T_UPDATE_IMEI;
    }

    if(imsi_cell.mask&IMSI_T_MSISDN_VALID)
    {
        memcpy(&gtpu_ul_search_d.msisdn, &imsi_cell.msisdn, sizeof(msisdn_t));
        action_gtpu_ul |= GTP_U_T_UPDATE_MSISDN;

        if(imsi_cell.mask&IMSI_T_EX_FIELD_VALID)
        {
            gtpu_ul_search_d.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
            action_gtpu_ul |= GTP_U_T_UPDATE_EX_FIELD;
        }
    }

    /*modified by zhengwan, 由于gn接口中只需要更新lac字段，所以将rai的更新字段拆开,begin*/
    if(imsi_cell.mask&IMSI_T_RAI_VALID)
    {
        memcpy(&gtpu_ul_search_d.rai, &imsi_cell.rai, sizeof(rai_t));
        action_gtpu_ul |= GTP_U_T_UPDATE_PLMN;
        action_gtpu_ul |= GTP_U_T_UPDATE_LAC;
        action_gtpu_ul |= GTP_U_T_UPDATE_RAC;
    }
    /*modified by zhengwan, end*/
    
    if(imsi_cell.mask&IMSI_T_CELL_ID_VALID)
    {
        memcpy(&gtpu_ul_search_d.cell_id, &imsi_cell.cell_id, sizeof(cell_id_t));
        action_gtpu_ul |= GTP_U_T_UPDATE_CELL_ID;
    }
    
    gtpu_ul_search_d.aging = (uint16_t)g_aging_timer_max;
    action_gtpu_ul |= GTP_U_T_UPDATE_AGING;

    gtpu_ul_search_d.mobile_type = MCS_WCDMA;/*用于标志为3g*/
    action_gtpu_ul |= GTP_U_T_UPDATE_MOBILE_TYPE;
        
    ret = create_update_table_by_hash(TABLE_GTP_U, CREATE_TABLE, action_gtpu_ul, (void*)&gtpu_ul_search_d, sizeof(umts_table_gtpu_ul_t), &gtpu_ul_index);
    if(MP_E_NONE != ret)
    {
        LOG_PRINT(M_GN, LV_INFO, "create pdp context response: create Gn_ggsn_gtpu <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_createrep_create_gtpu_ulTable_failed);
       return rv;
    }
    hydra_stat_inc(stat_pkts_Gn_createrep_create_gtpu_ulTable);
    
    /*--------------在IMSI表项中更新pos_ul_gtp_c和pos_ul_gtp_u[0]------------------*/
    action_imsi = 0;
    SET_TABLE_INDEX( (&(imsi_cell.pos_ul_gtp_c)),
                        Gn_ggsn_index.index, Gn_ggsn_index.node);
    action_imsi |= IMSI_T_UPDATE_POS_UL_GTP_C;
    
    SET_TABLE_INDEX( (&(imsi_cell.pos_ul_gtp_u[0])),
                        gtpu_ul_index.index, gtpu_ul_index.node);
    action_imsi |= IMSI_T_UPDATE_POS_UL_GTP_U_DEFAULT;

    memcpy(&(imsi_cell.pdn.pdn_addr), &(gtpc->pdn.pdn_addr), sizeof(ip_comm_t));
    action_imsi |= IMSI_T_UPDATE_PDN;

    imsi_cell.aging = (uint16_t)g_aging_timer_max;
    action_imsi |= IMSI_T_UPDATE_AGING;
    
    rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
    if(MP_OK != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "Create pdp context response: update table imsi <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_createrep_update_imsiTable_failed);
        return rv;
    }      
    hydra_stat_inc(stat_pkts_Gn_createrep_update_imsiTable);
    
    return MP_OK;    
}

mp_code_t umts_gn_c_update_pdp_context_request(parse_gtpv1c_t *gtpc)
{
    mp_code_t   rv                          = MP_OK;
    mp_error_t  ret                         = MP_E_NONE;
    /*add by zhengwan, 此标志用于判断是否需要更新gtpu_ul表项中的lac和cell_id，当update中的lac或cell_id与create pdp request中的一致时，则置为TRUE，否则的话就要更新gtpu_ul表,begin*/
    uint8_t     gtpu_ul_lac_update_flag     = FALSE;
    uint8_t     gtpu_ul_cell_id_update_flag = FALSE;
    /*add by zhengwan, end*/

    hydra_stat_inc(stat_pkts_gtpv1c_update_pdp_context_request);

    CVMX_MP_POINT_CHECK(gtpc, M_GN, LV_ERROR);
    
    if(!(gtpc->mask&GTPV1C_PARA_GTPIP_C_DL_VALID) || !(gtpc->mask&GTPV1C_PARA_TEID_C_DL_VALID))
    {
        LOG_PRINT(M_GN, LV_INFO, "update pdp context request: check gtpv1c valid failed \n");
        hydra_stat_inc(stat_pkts_gtpv1c_ip_teid_invalid);
        return MP_FUN_PARAM_ERR;
    }

    hash_key_t              key_Gn_ggsn={};
    umts_table_Gn_sgsn_t    Gn_ggsn_cell= {};

    memcpy(&(Gn_ggsn_cell.control_plane_ip), &(gtpc->dstip), sizeof(ip_comm_t));
    Gn_ggsn_cell.teid = gtpc->teid;
    update_gtp_c_hash_key(gtpc->dstip, gtpc->teid, &(key_Gn_ggsn));

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_C), &key_Gn_ggsn, 
                                   &Gn_ggsn_cell, sizeof(Gn_ggsn_cell));
    if(MP_CELL_FOUND != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "update pdp context request: Search Table Gn_ggsn <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_updatereq_search_ggsnTable_failed);
        return rv;
    }

    /**************************查询IMSI表项中位置信息是否有效*************************/    
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};
    hash_table_index_t  index_imsi= {};
    uint64_t            action_imsi=0;

    memcpy(&imsi_cell.imsi, &Gn_ggsn_cell.imsi, sizeof(imsi_t));
    update_imsi_hash_key(imsi_cell.imsi, &key_imsi);
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != rv )
    {
        LOG_PRINT(M_GN, LV_INFO, "The imsi table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_pkts_Gn_updatereq_search_imsiTable_failed);
        return rv;
    }

    /*当lac一致时，后面就无需更新gtu_ul表*/
    if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
    {
        if(gtpc->lac[0] == imsi_cell.rai.lac[0] && gtpc->lac[1] == imsi_cell.rai.lac[1])
        {
            gtpu_ul_lac_update_flag = TRUE;
        }
    }

    /*当cell_id一致时，后面就无需更新gtu_ul表*/
    if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
    {
        if(gtpc->cell_id[0] == imsi_cell.cell_id[0] && gtpc->lac[1] == imsi_cell.cell_id[1])
        {
            gtpu_ul_cell_id_update_flag = TRUE;
        }
    }
    
    /**************************查找下行GTP-U表项*************************/
    hash_key_t                  key_gtpu_dl={};
    umts_table_gtpu_dl_t        gtpu_dl_cell= {};
    hash_table_index_t          index_gtpu_dl= {};
    uint64_t                    action_gtpu_dl = 0;

    gtpu_dl_cell.teid = gtpc->gtp_teid[GTP_U_DL];
    memcpy(&(gtpu_dl_cell.trans_layer_ip), &(gtpc->gtp_ip[GTP_U_DL]), sizeof(ip_comm_t));

    update_gtp_u_table_key(gtpu_dl_cell.trans_layer_ip,gtpu_dl_cell.teid,&key_gtpu_dl);

    rv = hash_get_cell_and_index_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_U), &key_gtpu_dl, 
                                        &gtpu_dl_cell, sizeof(gtpu_dl_cell),&index_gtpu_dl);
    if( MP_CELL_FOUND != rv )
    {
        hydra_stat_inc(stat_pkts_Gn_updatereq_search_gtpu_dlTable_failed);
        gtpu_dl_cell.teid = gtpc->gtp_teid[GTP_U_DL];
        action_gtpu_dl |= GTP_U_T_UPDATE_TEID;
        
        memcpy(&(gtpu_dl_cell.trans_layer_ip), &(gtpc->gtp_ip[GTP_U_DL]), sizeof(ip_comm_t));
        action_gtpu_dl |= GTP_U_T_UPDATE_GTP_IP;

        memcpy(&gtpu_dl_cell.imsi, &imsi_cell.imsi, sizeof(imsi_t));
        action_gtpu_dl |= GTP_U_T_UPDATE_IMSI;

        /*add by zhengwan, 首先判断imis中的cell_id是否有效，若有效则判断gtpv1c中的cell_id是否有效,
        若有效则更新gtpu_dl中的cell_id,若无效，则根据imsi表中的cell_id来更新gtpu_dl中的cell_id,begin*/
        if(imsi_cell.mask&IMSI_T_CELL_ID_VALID)
        {
            if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            }
            else
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(imsi_cell.cell_id), sizeof(cell_id_t));
            }
        }
        else/*若imsi表中的cell_id无效，则判断gtpv1c中的cell_id是否有效，有效则更新cell_id*/
        {
            if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            }
        }
        action_gtpu_dl |= GTP_U_T_UPDATE_CELL_ID;
        /*add by zhengwan,end*/
        
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

        /*add by zhengwan,更新imsi表和gtpu_dl中的lac,首先判断imsi表里的rai是否有效,
        若有效，则判断gtpv1c中的lac是否有效，若有效，则更新imsi表中的lac,若无效，
        则直接更新gtpu_dl表中的rai,begin*/
        if(imsi_cell.mask&IMSI_T_RAI_VALID)
        {
            if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
            {
                memcpy(&imsi_cell.rai.lac, gtpc->lac, sizeof(lac_t));
            }
            
            memcpy(&gtpu_dl_cell.rai, &imsi_cell.rai, sizeof(rai_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_PLMN;
            action_gtpu_dl |= GTP_U_T_UPDATE_LAC;
            action_gtpu_dl |= GTP_U_T_UPDATE_RAC;
        }
        else/*若imsi表中的rai无效，则判断gtpv1c中的cell_id是否有效，有效则直接更新gtpu_dl中的lac*/
        {
            if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
            {
                memcpy(&gtpu_dl_cell.rai.lac, gtpc->lac, sizeof(lac_t));
                action_gtpu_dl |= GTP_U_T_UPDATE_LAC;
            }
        }
        /*add by zhengwan,end*/
        
        gtpu_dl_cell.aging = (uint16_t)g_aging_timer_max;
        action_gtpu_dl |= GTP_U_T_UPDATE_AGING;

        gtpu_dl_cell.mobile_type = MCS_WCDMA;/*用于标志为3g*/
        action_gtpu_dl |= GTP_U_T_UPDATE_MOBILE_TYPE;
    
        ret = create_update_table_by_hash(TABLE_GTP_U, CREATE_TABLE, action_gtpu_dl, (void*)&gtpu_dl_cell, sizeof(umts_table_gtpu_dl_t), &index_gtpu_dl);
        if(MP_E_NONE != ret)
        {
            LOG_PRINT(M_GN, LV_INFO, "update pdp context request: create table GTP_U_DL <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_updatereq_create_gtpu_dlTable_failed);
           return rv;
        }
        hydra_stat_inc(stat_pkts_Gn_updatereq_create_gtpu_dlTable);

        /*--------------在IMSI表项中更新pos_dl_gtp_u[0]------------------*/
        action_imsi = 0;
        SET_TABLE_INDEX( (&(imsi_cell.pos_dl_gtp_u[0])),
                            index_gtpu_dl.index, index_gtpu_dl.node);
        action_imsi |= IMSI_T_UPDATE_POS_DL_GTP_U_DEFAULT;

        /*modified by zhengwan, 更新imsi表中的cell_id和lac字段,begin*/
        if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
        {
            memcpy(&(imsi_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            action_imsi |= IMSI_T_UPDATE_CELL_ID;
        }

        if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
        {
            memcpy(&(imsi_cell.rai.lac), &(gtpc->lac), sizeof(lac_t));
            action_imsi |= IMSI_T_UPDATE_LAC;
        }
        /*modified by zhengwan,end*/
		
		imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            LOG_PRINT(M_GN, LV_INFO, "update pdp context request: update Imsi <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_updatereq_update_imsiTable1_failed);
            return rv;
        } 
        hydra_stat_inc(stat_pkts_Gn_updatereq_update_imsiTable1);

        /*add by zhengwan,在GTPU_UL表项中更新CELL_ID和lac字段,begin*/
        if(TRUE != gtpu_ul_lac_update_flag || TRUE != gtpu_ul_cell_id_update_flag)
        {
            /*判断cell_id和lac字段是否有效，若有效则更新gtpu_ul表项内容*/
            if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID || gtpc->mask&GTPV1C_PARA_LAC_VALID)
            {
                umts_table_gtpu_ul_t   gtpu_ul_cell= {};
                hash_table_index_t     index_gtpu_ul= {};
                uint64_t               action_gtpu_ul=0;

                /*查询gtpu_ul表项，获取ip和teid*/
                rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &imsi_cell.pos_ul_gtp_u[BEAR_DEFAULT], 
                                        (void *)&gtpu_ul_cell, sizeof(umts_table_gtpu_ul_t));
                if(MP_CELL_FOUND != rv)
                {
                    LOG_PRINT(M_GN, LV_INFO, "Search gtpu_ul table <Failed>\n");
                    hydra_stat_inc(stat_pkts_Gn_updatereq_search_gtpu_ulTable1_failed);
                    return rv;
                }

                memcpy(&(gtpu_ul_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
                action_gtpu_ul |= GTP_U_T_UPDATE_CELL_ID;

                memcpy(gtpu_ul_cell.rai.lac, gtpc->lac, sizeof(lac_t));
                action_gtpu_ul |= GTP_U_T_UPDATE_LAC;

                rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_gtpu_ul, (void*)&gtpu_ul_cell, sizeof(umts_table_gtpu_ul_t), &index_gtpu_ul);  
                if(MP_OK != rv)
                {
                    printf("update gtpu_ul failed! \n");
                    LOG_PRINT(M_S1,LV_ERROR, "UPDATE GTPU_UL INFO table<Failed> !\n");
                    hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_ulTable1_failed);    
                    return rv;
                }
                hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_ulTable1);
            }
        }
        /*add by zhengwan,end*/
    }
    else
    {
        /*add by zhengwan,检查身份信息,begin*/
        if(!(gtpu_dl_cell.mask&GTP_U_T_IMEI_VALID))
        {
            memcpy(&gtpu_dl_cell.imei, &imsi_cell.imei, sizeof(imei_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_IMEI;
        }

        if(!(gtpu_dl_cell.mask&GTP_U_T_MSISDN_VALID))
        {
            memcpy(&gtpu_dl_cell.msisdn, &imsi_cell.msisdn, sizeof(msisdn_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_MSISDN;
            if(!(gtpu_dl_cell.mask&GTP_U_T_UPDATE_EX_FIELD))
            {
                gtpu_dl_cell.ex_field.msisdn_len = imsi_cell.ex_field.msisdn_len;
                action_gtpu_dl |= GTP_U_T_UPDATE_EX_FIELD;
            }
        }

        if(!(gtpu_dl_cell.mask&GTP_U_T_PDN_VALID))
        {
            memcpy(&(gtpu_dl_cell.user_ip), &(imsi_cell.pdn.pdn_addr), sizeof(ip_comm_t));
            action_gtpu_dl |= GTP_U_T_UPDATE_PDN;
        }

        /*如果gtpu_dl表中的rai无效的话，则判断gtpv1c中的lac是否有效，若有效，
        则更新gtpu_dl中的lac,若无效，则将imsi表中的rai赋给gtpu_ul中的rai */
        if(!(gtpu_dl_cell.mask&GTP_U_T_RAI_VALID))
        {
            if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
            {
                memcpy(imsi_cell.rai.lac, gtpc->lac, sizeof(lac_t));
                memcpy(&(gtpu_dl_cell.rai), &(imsi_cell.rai), sizeof(rai_t));
            }
            else
            {
                memcpy(&(gtpu_dl_cell.rai), &(imsi_cell.rai), sizeof(rai_t));
            }
            action_gtpu_dl |= GTP_U_T_UPDATE_PLMN;
            action_gtpu_dl |= GTP_U_T_UPDATE_LAC;
            action_gtpu_dl |= GTP_U_T_UPDATE_RAC;
        }
        else/*若有效，则判断gtpv1c中的lac是否有效，有效则更新lac*/
        {
            if(gtpc->mask&GTPV1C_PARA_LAC_VALID)
            {
                memcpy(gtpu_dl_cell.rai.lac, gtpc->lac, sizeof(lac_t));
                action_gtpu_dl |= GTP_U_T_UPDATE_LAC;
            }
        }

        /*如果gtpu_dl表中的cell_id无效的话，则判断gtpv1c中的cell_id是否有效，若有效，
        则更新gtpu_dl中的cell_id,若无效，则将imsi表中的cell_id赋给gtpu_ul中的cell_id */
        if(!(gtpu_dl_cell.mask&GTP_U_T_CELL_ID_VALID))
        {
            if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            }
            else
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(imsi_cell.cell_id), sizeof(cell_id_t));
            }
        }
        else/*若有效，则判断gtpv1c中的cell_id是否有效，有效则更新cell_id*/
        {
            if(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID)
            {
                memcpy(&(gtpu_dl_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            }
        }
        action_gtpu_dl |= GTP_U_T_UPDATE_CELL_ID;
        
        rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_gtpu_dl, (void*)&gtpu_dl_cell, sizeof(umts_table_gtpu_dl_t), &index_gtpu_dl);
        if(MP_OK != rv)
        {
            LOG_PRINT(M_S1,LV_ERROR, "UPDATE GTPU_DL INFO table<Failed> !\n");
            hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_dlTable_failed);    
            return rv;
        }
        hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_dlTable);
        
        if(!(gtpc->mask&GTPV1C_PARA_CELL_ID_VALID) || !(gtpc->mask&GTPV1C_PARA_LAC_VALID))
        {
            return MP_OK;
        }
        
        /*--------------在IMSI表项中更新cell_id和lac------------------*/
        action_imsi = 0;

        /*更新imsi表中的cell_id和lac字段*/

        memcpy(&(imsi_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
        action_imsi |= IMSI_T_UPDATE_CELL_ID;

        memcpy(&(imsi_cell.rai.lac), &(gtpc->lac), sizeof(lac_t));
        action_imsi |= IMSI_T_UPDATE_LAC;
		
		imsi_cell.aging = (uint16_t)g_aging_timer_max;
        action_imsi |= IMSI_T_UPDATE_AGING;
        
        rv = create_update_table_by_hash(TABLE_IMSI, UPDATE_TABLE, action_imsi, (void *)&imsi_cell, sizeof(umts_table_imsi_t), &index_imsi);
        if(MP_OK != rv)
        {
            LOG_PRINT(M_GN, LV_INFO, "update pdp context request: update Imsi <Failed>\n");
            hydra_stat_inc(stat_pkts_Gn_updatereq_update_imsiTable2_failed);
            return rv;
        } 
        hydra_stat_inc(stat_pkts_Gn_updatereq_update_imsiTable2);

        /*在GTPU_UL表项中更新CELL_ID和lac字段*/
        if(TRUE != gtpu_ul_lac_update_flag || TRUE != gtpu_ul_cell_id_update_flag)
        {
            umts_table_gtpu_ul_t   gtpu_ul_cell= {};
            hash_table_index_t     index_gtpu_ul= {};
            uint64_t               action_gtpu_ul=0;

            /*查询gtpu_ul表项，获取ip和teid*/
            rv = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &imsi_cell.pos_ul_gtp_u[BEAR_DEFAULT], 
                                    (void *)&gtpu_ul_cell, sizeof(umts_table_gtpu_ul_t));
            if(MP_CELL_FOUND != rv)
            {
                LOG_PRINT(M_GN, LV_INFO, "Search gtpu_ul table <Failed>\n");
                hydra_stat_inc(stat_pkts_Gn_updatereq_search_gtpu_ulTable2_failed);
                return rv;
            }

            memcpy(&(gtpu_ul_cell.cell_id), &(gtpc->cell_id), sizeof(cell_id_t));
            action_gtpu_ul |= GTP_U_T_UPDATE_CELL_ID;

            memcpy(gtpu_ul_cell.rai.lac, gtpc->lac, sizeof(lac_t));
            action_gtpu_ul |= GTP_U_T_UPDATE_LAC;

            rv = create_update_table_by_hash(TABLE_GTP_U, UPDATE_TABLE, action_gtpu_ul, (void*)&gtpu_ul_cell, sizeof(umts_table_gtpu_ul_t), &index_gtpu_ul);  
            if(MP_OK != rv)
            {
                printf("update gtpu_ul failed! \n");
                LOG_PRINT(M_S1,LV_ERROR, "UPDATE GTPU_UL INFO table<Failed> !\n");
                hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_ulTable2_failed);    
                return rv;
            }
            hydra_stat_inc(stat_pkts_Gn_updatereq_update_gtpu_ulTable2);
        }
        /*add by zhengwan, end*/
    }
    
    return MP_OK;  
    
}


mp_code_t umts_gn_c_delete_pdp_context_responese(parse_gtpv1c_t *gtpc)
{
    mp_code_t   rv = MP_OK;

    hydra_stat_inc(stat_pkts_gtpv1c_delete_pdp_context_response);

    CVMX_MP_POINT_CHECK(gtpc, M_GN, LV_ERROR);

    hash_key_t              key_Gn_sgsn={};
    umts_table_Gn_sgsn_t    Gn_sgsn_cell= {};

    memcpy(&(Gn_sgsn_cell.control_plane_ip), &(gtpc->dstip), sizeof(ip_comm_t));
    Gn_sgsn_cell.teid = gtpc->teid;
    update_gtp_c_hash_key(gtpc->dstip, gtpc->teid, &(key_Gn_sgsn));

    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_GTP_C), &key_Gn_sgsn, 
                                   &Gn_sgsn_cell, sizeof(Gn_sgsn_cell));
    if(MP_CELL_FOUND != rv)
    {
        LOG_PRINT(M_GN, LV_INFO, "delete pdp context response: Search Table Gn_sgsn <Failed>\n");
        hydra_stat_inc(stat_pkts_Gn_deleterep_search_sgsnTable_failed);
        return rv;
    }
    
    /**************************查询IMSI表项中位置信息是否有效*************************/    
    hash_key_t          key_imsi={};
    umts_table_imsi_t   imsi_cell= {};

    update_imsi_hash_key(Gn_sgsn_cell.imsi, &key_imsi);
    rv = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI), &key_imsi, 
                                   &imsi_cell, sizeof(imsi_cell));
    if( MP_CELL_FOUND != rv )
    {
        LOG_PRINT(M_GN, LV_INFO, "delete pdp context response:The imsi table search failed ! rv = %d\n", rv);
        hydra_stat_inc(stat_pkts_Gn_deleterep_search_imsiTable_failed);
        return rv;
    }

    /*目前只支持通过index来删除表项，到时候要优化成通过设置老化时间来删除表项*/
    if(imsi_cell.mask&IMSI_T_POS_UL_GTP_C_VALID)
    {
#if 0        
        hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_C),\
                                                &(imsi_cell.pos_ul_gtp_c),LTE_AGING_TIMER_LOWER_LIMIT);
#else
        hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_C), &(imsi_cell.pos_ul_gtp_c));
        imsi_cell.mask &= 0xfffffbff;/*删除表项后将mask置为0,可能有问题，后续再继续优化*/
#endif
    }

    if(imsi_cell.mask&IMSI_T_POS_DL_GTP_C_VALID)
    {
#if 0         
        hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_C),\
                                               &(imsi_cell.pos_dl_gtp_c),LTE_AGING_TIMER_LOWER_LIMIT);
#else 
        hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_C), &(imsi_cell.pos_dl_gtp_c));
        imsi_cell.mask &= 0xfffffdff;/*删除表项后将mask置为0,可能有问题，后续再继续优化*/
#endif
    }

    //先做主PDP上下行用户面表项的删除
    if(imsi_cell.mask&IMSI_T_POS_UL_GTP_U_DEFAULT_VALID)
    {
#if 0        
        hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U),\
                                                &(imsi_cell.pos_ul_gtp_u[0]),LTE_AGING_TIMER_LOWER_LIMIT);
#else
        hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &(imsi_cell.pos_ul_gtp_u[0]));
        imsi_cell.mask &= 0xfffff7ff;/*删除表项后将mask置为0,可能有问题，后续再继续优化*/
#endif
    }

    if(imsi_cell.mask&IMSI_T_POS_DL_GTP_U_DEFAULT_VALID)
    {
#if 0        
        hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U),\
                                                &(imsi_cell.pos_dl_gtp_u[0]),LTE_AGING_TIMER_LOWER_LIMIT);
#else
        hash_cell_delete_by_index(LTE_GET_TABLE_PTR(TABLE_GTP_U), &(imsi_cell.pos_dl_gtp_u[0]));
        imsi_cell.mask &= 0xffffefff;/*删除表项后将mask置为0,可能有问题，后续再继续优化*/
#endif
    }

    return MP_OK;  

}    

#endif

