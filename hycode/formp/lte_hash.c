#include "lte_hash.h"
#include "lte_relate.h"

extern CVMX_SHARED uint64_t g_aging_timer_max;



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


// Update imsi table callback function
mp_code_t update_imsi_table(void *dst, void *src, uint64_t action)
{
    
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);

    lte_table_imsi_t   *imsi_src = (lte_table_imsi_t *)src;
    lte_table_imsi_t   *imsi_dst = (lte_table_imsi_t *)dst;

    if( IMSI_T_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_imsi !\n");
        PRINTF_IMSI(imsi_src->imsi);
        PRINTF_IMSI(imsi_dst->imsi);
        memcpy(imsi_dst->imsi, imsi_src->imsi, sizeof(lte_imsi_t));
        imsi_dst->mask |= IMSI_T_IMSI_VALID;
    }
    if( IMSI_T_UPDATE_IMEI & action )
    {
        LTE_DEBUG_PRINTF("update_imei !\n");
        PRINTF_IMEI(imsi_src->imei);
        PRINTF_IMEI(imsi_dst->imei);
        memcpy(imsi_dst->imei, imsi_src->imei, sizeof(lte_imei_t));
        imsi_dst->mask |= IMSI_T_IMEI_VALID;
    }
    if( IMSI_T_UPDATE_MSISDN & action )
    {
        LTE_DEBUG_PRINTF("update_msisdn !\n");
        PRINTF_MSISDN(imsi_src->msisdn);
        PRINTF_MSISDN(imsi_dst->msisdn);
        memcpy(imsi_dst->msisdn, imsi_src->msisdn, sizeof(lte_msisdn_t));
        imsi_dst->mask |= IMSI_T_MSISDN_VALID;
    }
    if( IMSI_T_UPDATE_POS_DL_GTP_C & action )
    {
        LTE_DEBUG_PRINTF("update_pos_dl_gtp_c !\n");
        memcpy(&(imsi_dst->pos_dl_gtp_c), &(imsi_src->pos_dl_gtp_c), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_DL_GTP_C_VALID;
    }
    if( IMSI_T_UPDATE_POS_UL_GTP_C & action )
    {
        LTE_DEBUG_PRINTF("update_pos_ul_gtp_c !\n");
        memcpy(&(imsi_dst->pos_ul_gtp_c), &(imsi_src->pos_ul_gtp_c), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_UL_GTP_C_VALID;
    }
    if( IMSI_T_UPDATE_POS_S6A & action )
    {
        LTE_DEBUG_PRINTF("update_pos_s6a !\n");
        memcpy(&(imsi_dst->pos_s6a), &(imsi_src->pos_s6a), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_S6A_VALID;
    }
    if( IMSI_T_UPDATE_POS_AN_INFO & action )
    {
        LTE_DEBUG_PRINTF("update_imsi_AN_INFO_POS !\n");
        memcpy(&(imsi_dst->pos_an_info), &(imsi_src->pos_an_info), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_AN_INFO_VALID;
    }
    if( IMSI_T_UPDATE_PDN & action )
    {
        LTE_DEBUG_PRINTF("update_pdn !\n"); 
        memcpy(&(imsi_dst->pdn), &(imsi_src->pdn), sizeof(pdn_t));
        imsi_dst->mask |= IMSI_T_PDN_VALID;
    }
    if( IMSI_T_UPDATE_EX_FIELD & action )
    {
        LTE_DEBUG_PRINTF("update_ex_field !\n");
        memcpy(&(imsi_dst->ex_field), &(imsi_src->ex_field), sizeof(extend_field_t));
        imsi_dst->mask |= IMSI_T_EX_FIELD_VALID;
    }
    if( IMSI_T_UPDATE_GUTI & action )
    {
        LTE_DEBUG_PRINTF("update_imsi_GUTI !\n");
        PRINTF_GUTI(imsi_src->guti);
        PRINTF_GUTI(imsi_dst->guti);
        memcpy(imsi_dst->guti, imsi_src->guti, sizeof(lte_guti_t));
        imsi_dst->mask |= IMSI_T_GUTI_VALID;
    }
    if( IMSI_T_UPDATE_TAI & action )
    {
        LTE_DEBUG_PRINTF("update_imsi_TAI !\n");
        PRINTF_TAI(imsi_src->tai);
        PRINTF_TAI(imsi_dst->tai);
        memcpy(imsi_dst->tai, imsi_src->tai, sizeof(lte_tai_t));
        imsi_dst->mask |= IMSI_T_TAI_VALID;
    }
    if( IMSI_T_UPDATE_ALG & action )
    {
        LTE_DEBUG_PRINTF("update_imsi_ALG_type !\n");
        imsi_dst->alg_type = imsi_src->alg_type;
        imsi_dst->mask |= IMSI_T_ALG_VALID;
    }
    if( IMSI_T_UPDATE_KASME & action )
    {
        PRINTF_IMSI(imsi_src->imsi);
        LTE_DEBUG_PRINTF("update_imsi_kasme !\n");
        PRINTF_KASME(imsi_src->kasme);
        PRINTF_KASME(imsi_dst->kasme);

        memcpy(imsi_dst->kasme, imsi_src->kasme, sizeof(lte_kasme_t));
        imsi_dst->mask |= IMSI_T_KASME_VALID;
    }
#ifdef RELATE_AGING
    if( IMSI_T_UPDATE_AGING &action )
    {
        LTE_DEBUG_PRINTF("update_imsi_aging!\n");
        imsi_dst->aging = imsi_src->aging;
        imsi_dst->mask |= IMSI_T_AGING_VALID;
    }
#endif
    
    if (IMSI_T_UPDATE_POS_UL_GTP_U_DEFAULT & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_ul_gtp_u_default !\n");
        memcpy(&(imsi_dst->pos_ul_gtp_u[0]), &(imsi_src->pos_ul_gtp_u[0]), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_UL_GTP_U_DEFAULT_VALID;
        /*for (i=0; i < MAX_NUM_BEARER; i++)
        {
            memcpy(&(imsi_dst->pos_ul_gtp_u[i]), &(imsi_src->pos_ul_gtp_u[i]), sizeof(hash_table_index_t));
        }*/
    }
    if (IMSI_T_UPDATE_POS_UL_GTP_U_SECOND& action)
    {
        LTE_DEBUG_PRINTF("update_imsi_ul_gtp_u_second !\n");
        memcpy(&(imsi_dst->pos_ul_gtp_u[1]), &(imsi_src->pos_ul_gtp_u[1]), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_UL_GTP_U_SECOND_VALID;
    }
    if (IMSI_T_UPDATE_POS_DL_GTP_U_DEFAULT& action)
    {
        LTE_DEBUG_PRINTF("update_imsi_dl_gtp_u_default !\n");
        memcpy(&(imsi_dst->pos_dl_gtp_u[0]), &(imsi_src->pos_dl_gtp_u[0]), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_DL_GTP_U_DEFAULT_VALID;
        /*for (i=0; i < MAX_NUM_BEARER; i++)
        {
            memcpy(&(imsi_dst->pos_dl_gtp_u[i]), &(imsi_src->pos_dl_gtp_u[i]), sizeof(hash_table_index_t));
        }*/
    }
    if (IMSI_T_UPDATE_POS_DL_GTP_U_SECOND& action)
    {
        LTE_DEBUG_PRINTF("update_imsi_dl_gtp_u_second !\n");
        memcpy(&(imsi_dst->pos_dl_gtp_u[1]), &(imsi_src->pos_dl_gtp_u[1]), sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_DL_GTP_U_SECOND_VALID;
    }
    /*modified by zhengwan, 由于gn接口中需要更新lac字段，所以将rai的更新标志拆开,begin*/
    if (IMSI_T_UPDATE_PLMN & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_plmn !\n");
        memcpy(imsi_dst->rai.plmn, imsi_src->rai.plmn, sizeof(plmn_t));
        imsi_dst->mask |= IMSI_T_RAI_VALID;
    }
    if (IMSI_T_UPDATE_LAC & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_lac !\n");
        memcpy(imsi_dst->rai.lac, imsi_src->rai.lac, sizeof(lac_t));
        imsi_dst->mask |= IMSI_T_RAI_VALID;
    }
    if (IMSI_T_UPDATE_RAC & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_rac !\n");
        memcpy(imsi_dst->rai.rac, imsi_src->rai.rac, sizeof(rac_t));
        imsi_dst->mask |= IMSI_T_RAI_VALID;
    }
    /*modified by zhengwan, end*/
    if (IMSI_T_UPDATE_POS_PTMSI_IMSI_MAP & action)
    {
        LTE_DEBUG_PRINTF("update_pos_ptmsi_imsi_map !\n");
        memcpy(&imsi_dst->pos_ptmsi_imsi_map, &imsi_src->pos_ptmsi_imsi_map, sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_PTMSI_IMSI_MAP_VALID;
    }

    if (IMSI_T_UPDATE_POS_CN_INFO & action)
    {
        LTE_DEBUG_PRINTF("update_pos_cn_info !\n");
        memcpy(&imsi_dst->pos_cn_info, &imsi_src->pos_cn_info, sizeof(hash_table_index_t));
        imsi_dst->mask |= IMSI_T_POS_CN_INFO_VALID;
    }

    if (IMSI_T_UPDATE_MASK & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_mask !\n");
        imsi_dst->mask = imsi_src->mask;
    }

    if (IMSI_T_UPDATE_ECGI & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_ecgi !\n");
        memcpy(&(imsi_dst->ecgi), &(imsi_src->ecgi), sizeof(lte_ecgi_t));
        imsi_dst->mask |= IMSI_T_UPDATE_ECGI_VALID;
    }

    if (IMSI_T_UPDATE_MOBILE_TYPE & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_mobile_type !\n");
        memcpy(&(imsi_dst->mobile_type), &(imsi_src->mobile_type), sizeof(imsi_src->mobile_type));
        imsi_dst->mask |= IMSI_T_UPDATE_MOBILE_TYPE_VALID;
    }
    if (IMSI_T_UPDATE_CELL_ID & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_cell_id !\n");
        memcpy(&(imsi_dst->cell_id), &(imsi_src->cell_id), sizeof(imsi_src->cell_id));
        imsi_dst->mask |= IMSI_T_CELL_ID_VALID;
    }
    return MP_OK;
}

// Update s1_mme table callback function
mp_code_t update_s1_mme_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_S1, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S1, LV_ERROR);

    lte_table_s1_mme_enodeb_t   *s1_mme_src = (lte_table_s1_mme_enodeb_t *)src;
    lte_table_s1_mme_enodeb_t   *s1_mme_dst = (lte_table_s1_mme_enodeb_t *)dst;

    if( AN_INFOT_UPDATE_AN_IP & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_enode_ip !\n");
        memcpy(&(s1_mme_dst->lte_hash_para.access_node_ip), &(s1_mme_src->lte_hash_para.access_node_ip), sizeof(ip_comm_t));
        s1_mme_dst->mask |= AN_INFOT_AN_IP_VALID;
    }
    if( AN_INFOT_UPDATE_AN_ID & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_enode_ue_id !\n");
        s1_mme_dst->lte_hash_para.access_node_id = s1_mme_src->lte_hash_para.access_node_id;
        s1_mme_dst->mask |= AN_INFOT_AN_ID_VALID;
    }
    if( AN_INFOT_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_imsi !\n");
        PRINTF_IMSI(s1_mme_src->imsi);
        PRINTF_IMSI(s1_mme_dst->imsi);
        
        memcpy(s1_mme_dst->imsi, s1_mme_src->imsi, sizeof(lte_imsi_t));
        s1_mme_dst->mask |= AN_INFOT_IMSI_VALID;
    }
    if( AN_INFOT_UPDATE_CN_IP & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_mme_ip !\n");
        s1_mme_dst->lte_hash_para.cn_ip = s1_mme_src->lte_hash_para.cn_ip;
        s1_mme_dst->mask |= AN_INFOT_CN_IP_VALID;
    }
    if( AN_INFOT_UPDATE_CN_ID & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_mme_ue_id !\n");
        s1_mme_dst->lte_hash_para.cn_id = s1_mme_src->lte_hash_para.cn_id;
        s1_mme_dst->mask |= AN_INFOT_CN_ID_VALID;
    }
    if( AN_INFOT_UPDATE_RAND & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_rand !\n");
        PRINTF_IMSI(s1_mme_src->imsi);
        PRINTF_RAND(s1_mme_src->rand);
        
        memcpy(s1_mme_dst->rand, s1_mme_src->rand, sizeof(lte_rand_t));
        s1_mme_dst->mask |= AN_INFOT_RAND_VALID;
    }
    if( AN_INFOT_UPDATE_OLD_GUTI & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_old_guti !\n");
        PRINTF_GUTI(s1_mme_src->old_guti);
        PRINTF_GUTI(s1_mme_dst->old_guti);
        
        memcpy(s1_mme_dst->old_guti, s1_mme_src->old_guti, sizeof(lte_guti_t));
        s1_mme_dst->mask |= AN_INFOT_OLD_GUTI_VALID;
    }
    if( AN_INFOT_UPDATE_ALG_TYPE & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_alg_type !\n");
        s1_mme_dst->cipher_alg_type = s1_mme_src->cipher_alg_type;
        s1_mme_dst->mask |= AN_INFOT_ALG_TYPE_VALID;
    }
    if( AN_INFOT_UPDATE_GUTI_FLAG & action )
    {
        LTE_DEBUG_PRINTF("update_s1_mme_guti_flag !\n");
        s1_mme_dst->guti_flag = s1_mme_src->guti_flag;
        s1_mme_dst->mask |= AN_INFOT_GUTI_FLAG_VALID;
    }

    if (AN_INFOT_UPDATE_TAI & action)
    {
        LTE_DEBUG_PRINTF("update_imsi_TAI !\n");
        PRINTF_TAI(s1_mme_src->tai);
        PRINTF_TAI(s1_mme_dst->tai);
        memcpy(s1_mme_dst->tai, s1_mme_src->tai, sizeof(lte_tai_t));
        s1_mme_dst->mask |= AN_INFOT_TAI_VALID;
    }
	if(S1_MMET_UPDATE_ECGI&action)
    {
    	s1_mme_dst->ecgi = s1_mme_src->ecgi;
        s1_mme_dst->mask |= AN_INFOT_ECGI_VALID;
    }
#ifdef RELATE_AGING
    if (AN_INFOT_UPDATE_AGING &action)
    {
        LTE_DEBUG_PRINTF("update_imsi_aging!\n");
        s1_mme_dst->aging = s1_mme_src->aging;
        s1_mme_dst->mask |= AN_INFOT_AGING_VALID;
    }
#endif
    if(AN_INFOT_UPDATE_RAI & action)
    {
        memcpy(&s1_mme_dst->rai, &s1_mme_src->rai, sizeof(rai_t));    
        s1_mme_dst->mask |= AN_INFOT_RAI_VALID;
    }

    if (AN_INFOT_UPDATE_MASK & action)
    {
        s1_mme_dst->mask = s1_mme_src->mask;
    }

    if (AN_INFOT_UPDATE_TIMSI_FLAG & action)
    {
        s1_mme_dst->timsi_flag = s1_mme_src->timsi_flag;
        s1_mme_dst->mask |= AN_INFOT_TIMSI_FLAG_VALID;
    }

    if(AN_INFOT_UPDATE_RNC_POINT_CODE & action)
    {
        s1_mme_dst->umts_hash_para.rnc_m3ua_signal_code = s1_mme_src->umts_hash_para.rnc_m3ua_signal_code;
        s1_mme_dst->mask |= AN_INFOT_RNC_POINT_CODE_VALID;
    }

    if(AN_INFOT_UPDATE_RNC_SCCP_ID & action)
    {
        s1_mme_dst->umts_hash_para.rnc_sccp_id = s1_mme_src->umts_hash_para.rnc_sccp_id;
        s1_mme_dst->mask |= AN_INFOT_RNC_SCCP_ID_VALID;
    }
    if(AN_INFOT_UPDATE_SGSN_POINT_CODE & action)
    {
        s1_mme_dst->umts_hash_para.sgsn_m3ua_signal_code = s1_mme_src->umts_hash_para.sgsn_m3ua_signal_code;
        s1_mme_dst->mask |= AN_INFOT_SGSN_POINT_CODE_VALID;
    }
    if(AN_INFOT_UPDATE_SGSN_SCCP_ID & action)
    {
        s1_mme_dst->umts_hash_para.sgsn_sccp_id = s1_mme_src->umts_hash_para.sgsn_sccp_id;
        s1_mme_dst->mask |= AN_INFOT_SGSN_SCCP_ID_VALID;
    }
    if(AN_INFOT_UPDATE_MOBILE_TYPE & action)
    {
        s1_mme_dst->mobile_type = s1_mme_src->mobile_type;
        s1_mme_dst->mask |= AN_INFOT_MOBILE_TYPE_VALID;
    }
    return MP_OK;
}

mp_code_t update_ptmsi_imsi_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_SYS, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_SYS, LV_ERROR);

    umts_table_p_tmsi_t   *p_tmsi_src = (umts_table_p_tmsi_t *)src;
    umts_table_p_tmsi_t   *p_tmsi_dst = (umts_table_p_tmsi_t *)dst;

    if( P_TMSI_T_UPDATE_PTMSI & action )
    {
        LTE_DEBUG_PRINTF("update_p_tmsi_PTMSI !\n");
        memcpy(p_tmsi_dst->p_tmsi, p_tmsi_src->p_tmsi, sizeof(p_tmsi_t));
    }
   if( P_TMSI_T_UPDATE_IMSI & action )
   {
      LTE_DEBUG_PRINTF("update_p_tmsi_imsi !\n"); 

      memcpy(p_tmsi_dst->imsi, p_tmsi_src->imsi, sizeof(lte_imsi_t));
   }
      return MP_OK;
}    

// Update gtpc table callback function
mp_code_t update_gtpc_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_S11, LV_ERROR);

    lte_table_gtpc_t   *gtpc_src = (lte_table_gtpc_t *)src;
    lte_table_gtpc_t   *gtpc_dst = (lte_table_gtpc_t *)dst;
    
    if( GTP_C_T_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_imsi !\n");
        PRINTF_IMSI(gtpc_src->imsi);
        PRINTF_IMSI(gtpc_dst->imsi);
        memcpy(gtpc_dst->imsi, gtpc_src->imsi, sizeof(lte_imsi_t));
    }

    if( GTP_C_T_UPDATE_GTP_IP & action )
    {
        LTE_DEBUG_PRINTF("update_gtpc_fteid !\n");
        memcpy(&(gtpc_dst->control_plane_ip), &(gtpc_src->control_plane_ip),sizeof(ip_comm_t));
    }
    
    if( GTP_C_T_UPDATE_TEID & action )
    {
        LTE_DEBUG_PRINTF("update_gtpc_fteid !\n");
        gtpc_dst->teid = gtpc_src->teid;
    }
    
    if( GTP_C_T_UPDATE_AGING & action )
    {
        LTE_DEBUG_PRINTF("update_gtpc_aging !\n"); 
        gtpc_dst->aging = gtpc_src->aging;
    }

    return MP_OK;
}

// Update s1u table callback function
mp_code_t update_s1u_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_SYS, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_SYS, LV_ERROR);
    lte_table_gtpu_t   *s1u_src = (lte_table_gtpu_t *)src;
    lte_table_gtpu_t   *s1u_dst = (lte_table_gtpu_t *)dst;

    if( GTP_U_T_UPDATE_GTP_IP & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        memcpy(&(s1u_dst->trans_layer_ip), &(s1u_src->trans_layer_ip), sizeof(ip_comm_t));
        s1u_dst->mask |= GTP_U_T_GTP_IP_VALID;
    }
    if( GTP_U_T_UPDATE_TEID & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        s1u_dst->teid = s1u_src->teid;
        s1u_dst->mask |= GTP_U_T_TEID_VALID;
    }
    if( GTP_U_T_UPDATE_USER_IP & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_ue_ip !\n");
        memcpy(&(s1u_dst->user_ip), &(s1u_src->user_ip), sizeof(ip_comm_t));
        s1u_dst->mask |= GTP_U_T_USER_IP_VALID;
    }
    if( GTP_U_T_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_imsi !\n");
        PRINTF_IMSI(s1u_src->imsi);
        PRINTF_IMSI(s1u_dst->imsi);
        memcpy(s1u_dst->imsi, s1u_src->imsi, sizeof(lte_imsi_t));
        s1u_dst->mask |= GTP_U_T_IMSI_VALID;
    }
    if( GTP_U_T_UPDATE_IMEI & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_imei !\n");
        PRINTF_IMEI(s1u_src->imei);
        PRINTF_IMEI(s1u_dst->imei);
        memcpy(s1u_dst->imei, s1u_src->imei, sizeof(lte_imei_t));
        s1u_dst->mask |= GTP_U_T_IMEI_VALID;
    }
    if( GTP_U_T_UPDATE_MSISDN & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_msisdn !\n");
        PRINTF_MSISDN(s1u_src->msisdn);
        PRINTF_MSISDN(s1u_dst->msisdn);
        memcpy(s1u_dst->msisdn, s1u_src->msisdn, sizeof(lte_msisdn_t));
        s1u_dst->mask |= GTP_U_T_MSISDN_VALID;
    }
    if( GTP_U_T_UPDATE_EX_FIELD & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_ex_field !\n");
        memcpy(&(s1u_dst->ex_field), &(s1u_src->ex_field), sizeof(extend_field_t));
        s1u_dst->mask |= GTP_U_T_EX_FIELD_VALID;
    }
    if( GTP_U_T_UPDATE_AGING & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_aging !\n");
        s1u_dst->aging = s1u_src->aging;
        s1u_dst->mask |= GTP_U_T_AGING_VALID;
    }
    if( GTP_U_T_UPDATE_TAI & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_tai !\n");
        PRINTF_TAI(s1u_src->tai);
        PRINTF_TAI(s1u_dst->tai);
        memcpy(s1u_dst->tai, s1u_src->tai, sizeof(lte_tai_t));
        s1u_dst->mask |= GTP_U_T_TAI_VALID;
    }
    if( GTP_U_T_UPDATE_GUTI & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_guti !\n");
        PRINTF_GUTI(s1u_src->guti);
        PRINTF_GUTI(s1u_dst->guti);
        memcpy(s1u_dst->guti, s1u_src->guti, sizeof(lte_guti_t));
        s1u_dst->mask |= GTP_U_T_GUTI_VALID;
    }
    /*modified by zhengwan, 由于gn接口中需要更新lac字段，所以将rai的更新标志拆开,begin*/
    if( GTP_U_T_UPDATE_PLMN & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_plmn !\n");
        memcpy(s1u_dst->rai.plmn, s1u_src->rai.plmn, sizeof(plmn_t));
        s1u_dst->mask |= GTP_U_T_RAI_VALID;
    }

    if( GTP_U_T_UPDATE_LAC & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_lac !\n");
        memcpy(s1u_dst->rai.lac, s1u_src->rai.lac, sizeof(lac_t));
        s1u_dst->mask |= GTP_U_T_RAI_VALID;
    }
    
    if( GTP_U_T_UPDATE_RAC & action )
    {
        LTE_DEBUG_PRINTF("update_s1u_rac !\n");
        memcpy(s1u_dst->rai.rac, s1u_src->rai.rac, sizeof(rac_t));
        s1u_dst->mask |= GTP_U_T_RAI_VALID;
    }
    /*modified by zhengwan,end*/

    if (GTP_U_T_UPDATE_MASK & action)
    {
        LTE_DEBUG_PRINTF("update_s1u_mask !\n");
        s1u_dst->mask = s1u_src->mask;
    }
    if (GTP_U_T_UPDATE_ECGI & action)
    {
        LTE_DEBUG_PRINTF("update_s1u_ecgi !\n");
        memcpy(&s1u_dst->ecgi, &s1u_src->ecgi, sizeof(lte_ecgi_t));
        s1u_dst->mask |= GTP_U_T_ECGI_VALID;
    }
#ifdef STAT_TEST
    if( GTP_U_T_UPDATE_CREATE_REALTE & action )
    {
        s1u_dst->is_create_relate = s1u_src->is_create_relate;
        s1u_dst->mask |= GTP_U_T_CREATE_REALTE_VALID;
    }
    if( GTP_U_T_UPDATE_B0_NUM & action )
    {
        s1u_dst->b0_relate_gtpu_num = s1u_src->b0_relate_gtpu_num;
        s1u_dst->mask |= GTP_U_T_B0_NUM_VALID;
    }
    if( GTP_U_T_UPDATE_B1_NUM & action )
    {
        s1u_dst->b1_relate_gtpu_num = s1u_src->b1_relate_gtpu_num;
        s1u_dst->mask |= GTP_U_T_B1_NUM_VALID;
    }
#endif
    if(GTP_U_T_UPDATE_MOBILE_TYPE & action)
    {
        s1u_dst->mobile_type = s1u_src->mobile_type;
        s1u_dst->mask |= GTP_U_T_UPDATE_MOBILE_TYPE_VALID;
    }
    if (GTP_U_T_UPDATE_CELL_ID & action)
    {
        LTE_DEBUG_PRINTF("update_s1u_cell_id !\n");
        memcpy(&s1u_dst->cell_id, &s1u_src->cell_id, sizeof(s1u_src->cell_id));
        s1u_dst->mask |= GTP_U_T_CELL_ID_VALID;
    }
    
    return MP_OK;
}

// Update s6a table callback function
mp_code_t update_s6a_table(void *dst, void *src, uint64_t action)
{
    int i;
    CVMX_MP_POINT_CHECK(src, M_SYS, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_SYS, LV_ERROR);

    lte_table_s6a_t   *s6a_src = (lte_table_s6a_t *)src;
    lte_table_s6a_t   *s6a_dst = (lte_table_s6a_t *)dst;

   if( S6_AT_UPDATE_HSSIP & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_hssip !\n");
        memcpy(&(s6a_dst->hssip), &(s6a_src->hssip), sizeof(ip_comm_t));
    }
    if( S6_AT_UPDATE_MMEIP  & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_mmeip !\n");
        memcpy(&(s6a_dst->mmeip), &(s6a_src->mmeip), sizeof(ip_comm_t));
    }
    if( S6_AT_UPDATE_HOP_BY_HOP & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_hop_by_hop !\n");
        s6a_dst->hop_by_hop= s6a_src->hop_by_hop;
    }
    if( S6_AT_UPDATE_IMSI & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_imsi !\n");
        PRINTF_IMSI(s6a_src->imsi);
        PRINTF_IMSI(s6a_dst->imsi);
        memcpy(s6a_dst->imsi, s6a_src->imsi, sizeof(lte_imsi_t));
    }
    if( S6_AT_UPDATE_AGING & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_aging !\n");
        s6a_dst->aging = s6a_src->aging;
    }
    if( S6_AT_UPDATE_NAS_KEY & action )
    {
        LTE_DEBUG_PRINTF("update_s6a_nas_key !\n"); 
        s6a_dst->nas_key.valid_key_num = s6a_src->nas_key.valid_key_num;
        for(i=0; i<MAX_KASME_RAND_PAIR; i++)
        {
            memcpy(s6a_dst->nas_key.key[i].rand, s6a_src->nas_key.key[i].rand, sizeof(lte_rand_t));
            memcpy(s6a_dst->nas_key.key[i].kasme, s6a_src->nas_key.key[i].kasme, sizeof(lte_kasme_t));
        }
    }
    return MP_OK;
}

// Update s_tmsi table callback function
mp_code_t update_s_tmsi_table(void *dst, void *src, uint64_t action)
{
    CVMX_MP_POINT_CHECK(src, M_SYS, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst, M_SYS, LV_ERROR);

    lte_table_s_tmsi_t   *s_tmsi_src = (lte_table_s_tmsi_t *)src;
    lte_table_s_tmsi_t   *s_tmsi_dst = (lte_table_s_tmsi_t *)dst;

   if( S_TMSIT_UPDATE_S_TMSI & action )
    {
        LTE_DEBUG_PRINTF("update_s_tmsi_stmsi !\n");
        memcpy(s_tmsi_dst->s_tmsi, s_tmsi_src->s_tmsi, sizeof(lte_s_tmsi_t));
    }
   if( S_TMSIT_UPDATE_IMSI & action )
   {
      LTE_DEBUG_PRINTF("update_s_tmsi_imsi !\n"); 
      PRINTF_IMSI(s_tmsi_src->imsi);
      PRINTF_IMSI(s_tmsi_dst->imsi);
      memcpy(s_tmsi_dst->imsi, s_tmsi_src->imsi, sizeof(lte_imsi_t));
   }
      return MP_OK;
}

/* 这个函数可以考虑去掉了，待断流问题搞完后 */
mp_code_t hash_table_flush(hash_table_t *table)
{
    int i =0;
    hash_bucket_t *bucket = NULL; 
    hash_cell_t *hash_cell = NULL;    
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_S11, LV_ERROR);

    LTE_DEBUG_PRINTF("Flush Table:%s\n", table->name);
    for(i=0; i<table->max_bucket; i++)
    {
        bucket = table->first_bucket + i;

        CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);
        
        LTE_HASH_TABLE_LOCK(bucket);
        
        list_for_each_safe(pos, next, &(bucket->head))
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_S11, LV_ERROR);
            __list_del( hash_cell->node.prev, hash_cell->node.next);
            HASH_CELL_FREE(bucket, table->pool, hash_cell);
        }

        bucket->bucket_depth = 0;
        LTE_HASH_TABLE_UNLOCK(bucket);     
    }
    return MP_OK;
}


mp_code_t hash_table_cell_delete(hash_table_t *table, uint32_t offset, struct list_head * cnode)
{
    hash_bucket_t *bucket = NULL;
    struct list_head * pos = NULL, *next = NULL;
    hash_cell_t *hash_cell = NULL;
    
    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(cnode, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_S11, LV_ERROR);

    if(cvmx_unlikely( offset >= table->max_bucket ))
    {
        return MP_FUN_PARAM_ERR;
    }
    
    bucket = table->first_bucket + offset;

    LTE_HASH_TABLE_LOCK(bucket); 
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == cnode)
        {
            __list_del( cnode->prev, cnode->next);
            hash_cell = list_entry(cnode, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_S11, LV_ERROR);
            HASH_CELL_FREE(bucket, table->pool, hash_cell);
            break;        
        }
    }                     
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_OK;
}


mp_code_t hash_table_search_destroy(hash_table_t *table,
                                        hash_table_control_t *control)
{
    mp_code_t rv = MP_OK;

    uint32_t hash_v = 0, index = 0;
    hash_bucket_t *bucket = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(control, M_S11, LV_ERROR);

    rv = table->hash(&(control->key), &hash_v);
    if(MP_OK != rv)
    {
        return rv;
    }
    
    index  = hash_v % table->max_bucket;
    bucket = table->first_bucket + index;

    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {    
        hash_cell = list_entry(pos, hash_cell_t, node);
        CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_S11, LV_ERROR);

        /*check compare  same or diff(new)*/
        if (cvmx_likely(ENABLE == control->compare_enable ))
        {
            if(NULL == table->compare || NULL == control->d_compare)
            {
                LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
                LTE_HASH_TABLE_UNLOCK(bucket); 
                return MP_NULL_POINT;
            }

            rv = table->compare((void *)hash_cell->entry, control->d_compare, &(control->search));
            if (cvmx_unlikely(MP_OK != rv))
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                return MP_NOT_FOUND;
            }

            if(HASH_CMP_SAME == control->search)
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                HASH_CELL_FREE(bucket, table->pool, hash_cell);
                break;
            }
        }
        else
        {
            LTE_DEBUG_PRINTF("Error: Cannot Find The Table Cell, May caused by compare_enable != ENABLE\n");
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_NOT_FOUND;
                
        }
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    return rv;
}


mp_code_t hash_table_search_update(hash_table_t *table, 
                            hash_table_control_t *control)
{
    mp_code_t rv = MP_OK;

    uint32_t hash_v = 0, index = 0;
    hash_bucket_t *bucket = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;
    
    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(control, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);

    LTE_DEBUG_PRINTF("---------------------start:%s----------------\n", table->name);

    rv = table->hash(&(control->key), &hash_v);
    if(MP_OK != rv)
    {
        return rv;
    }

    index  = hash_v % table->max_bucket;

    bucket = table->first_bucket + index;

    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    
    list_for_each_safe(pos, next, &(bucket->head))
    {    
        hash_cell = list_entry(pos, hash_cell_t, node);
        CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_S11, LV_ERROR);

        /*check compare  same or diff(new)*/
        if (cvmx_likely(ENABLE == control->compare_enable ))
        {
            LTE_DEBUG_PRINTF("%s: compare Enable\n", table->name);
            if(NULL == table->compare || NULL == control->d_compare)
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
                LTE_DEBUG_PRINTF("%s: table->compare==NULL || control->d_compare == NULL\n", table->name);
                return MP_NULL_POINT;
            }

            rv = table->compare((void *)hash_cell->entry, control->d_compare, &(control->search));
            if ( cvmx_unlikely( MP_OK != rv ) )
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                LTE_DEBUG_PRINTF("%s: compare failed\n", table->name);
                return MP_FAIL;
            }
            if(HASH_CMP_SAME == control->search)
            {
                LTE_DEBUG_PRINTF("%s: compare: <FIND>\n", table->name);
                control->node =  pos;
                control->bucket = bucket;
                break;
            }
        }
        else
        {
            LTE_DEBUG_PRINTF("%s: compare Disable\n", table->name);
        }
    }

    if( HASH_CMP_DIFF == control->search)
    {
        if(ENABLE == control->new_enable)
        {
            /*new The cell*/

            if( HASH_ENTRY_VALID_SIZE_256 == table->cell_size )
            {
                hash_cell = (hash_cell_t *)HASH_CELL_NEW_256(table->pool);
            }
            else
            {
                hash_cell = (hash_cell_t *)HASH_CELL_NEW(table->pool);
            }
            if( NULL  == hash_cell)
            {
                LTE_HASH_TABLE_UNLOCK(bucket);
                LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_ALLOC_FAIL);

                if( LTE_GET_TABLE_PTR(TABLE_GTP_U) == table )
                {
                    hydra_stat_inc(stat_pkts_s1u_new_cell_fail);
                }
                else if( LTE_GET_TABLE_PTR(TABLE_IMSI) == table )
                {
                    hydra_stat_inc(stat_pkts_imsi_new_cell_fail);
                }
                else if( LTE_GET_TABLE_PTR(TABLE_GTP_C) == table )
                {
                    hydra_stat_inc(stat_pkts_s11_sgw_new_cell_fail);
                }
                else if( LTE_GET_TABLE_PTR(TABLE_GTP_C) == table )
                {
                    hydra_stat_inc(stat_pkts_s11_mme_new_cell_fail);
                }
                LTE_DEBUG_PRINTF("FPA Memory not available for CVMX_FPA_LTE_POOL %s.%d\n", __func__, __LINE__);
                return MP_NULL_POINT;
            }
            if( HASH_ENTRY_VALID_SIZE_256 == table->cell_size )
            {
                memset( hash_cell, 0, TABLE_CELL_MAX_LEN);
            }
            else
            {
                memset( hash_cell, 0, sizeof(hash_cell_t));
            }

            control->node =   &(hash_cell->node);
            control->bucket = bucket; 
            list_add( &(hash_cell->node),&bucket->head);
            bucket->bucket_depth++;
            LTE_DEBUG_PRINTF("%s: compare: <New>\n", table->name);
        }
        else
        {
            LTE_DEBUG_PRINTF("%s: compare: <IGNORE>\n", table->name);
        }
    }

    if(ENABLE == control->update_enable && NULL != hash_cell)
    {
        if(NULL == control->d_update  || NULL == table->update)
        {
            LTE_HASH_TABLE_UNLOCK(bucket);
            LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
            LTE_DEBUG_PRINTF("%s: update: NULL == control->d_update  || NULL == table->update\n", table->name);
            return MP_NULL_POINT;
        }
        rv = table->update((void *)hash_cell->entry, control->d_update, control->update_action);

        if (cvmx_unlikely( MP_OK != rv))
        {
            LTE_HASH_TABLE_UNLOCK(bucket);
            LTE_DEBUG_PRINTF("%s: update: Failed\n", table->name);
            return rv;
        }
        LTE_DEBUG_PRINTF("%s: update: Success\n", table->name);      
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    LTE_DEBUG_PRINTF("==========================END==========================\n\n");    
    return rv;
}


mp_code_t hash_table_get_bucket_depth_by_index(hash_table_t *table,
                                               uint32_t      index,
                                               uint32_t     *depth)
{
    hash_bucket_t * bucket = NULL;
    
    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);

    if(index > table->max_bucket)
    {
        return MP_FUN_PARAM_ERR;
    }
    
     
    bucket = table->first_bucket + index;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    *depth = bucket->bucket_depth;
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_OK;
}

/* 用于给命令行提供的根据行列索引查表 */
mp_code_t hash_table_search_by_index_and_offset(hash_table_t *table,
                                        uint32_t index, uint32_t  column, 
                                        void *odata, uint32_t olen) 
{
    mp_code_t ret = MP_OK;
    hash_bucket_t * bucket = NULL;
    struct list_head *pos = NULL, *next = NULL;
    hash_cell_t * cell= NULL;
    int i= 0;

    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(odata, M_S11, LV_ERROR);

    LTE_DEBUG_PRINTF("table=%s, index=%d, clomu=%d\n",table->name, index,  column);
    if(index > table->max_bucket)
    {
        return MP_SPACE_NOT_ENOUGH;
    }
  
    bucket = table->first_bucket + index;

    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {

        if(i ==  column)
        {
           cell =  list_entry(pos, hash_cell_t, node); 
           memcpy(odata, cell->entry, MP_MIN(olen, table->cell_size));
           LTE_HASH_TABLE_UNLOCK(bucket);
           return MP_CELL_FOUND;
            
        }
        i++;
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;               
}




     
void *hash_table_index_to_entry(hash_table_t *table, hash_table_index_t *index)
{
   hash_bucket_t *bucket = NULL;
   struct list_head *pos = NULL, *next = NULL, *node = NULL; 
   int compare =0 ; 
   hash_cell_t *hash_cell = NULL;

   CVMX_MP_POINT_CHECK_RET_P(table, M_S11, LV_ERROR);
   CVMX_MP_POINT_CHECK_RET_P(index, M_S11, LV_ERROR);

    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index); 
    node  =   index->node;

    CVMX_MP_POINT_CHECK_RET_P(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            compare = 1;
            break;
        }
    }

    if(compare)
    {
        hash_cell = list_entry(pos, hash_cell_t, node);   
    }
    else
    {
         LTE_HASH_TABLE_UNLOCK(bucket);
         return NULL;
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    
    return  (hash_cell->entry);   
}


mp_code_t hash_table_remove_entry_by_index(hash_table_t *table, hash_table_index_t *index)
{
    hash_bucket_t *bucket = NULL;
    struct list_head *pos = NULL, *next = NULL, *node = NULL; 
    hash_cell_t *hash_cell = NULL;

    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(index, M_S11, LV_ERROR);

    if(ENABLE != index->en)
    {
        return MP_FUN_PARAM_ERR;
    }
    
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index); 
    node  =   index->node;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            __list_del( node->prev, node->next);
            hash_cell = list_entry(node, hash_cell_t, node);
            HASH_CELL_FREE(bucket, table->pool, hash_cell);
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }

     LTE_HASH_TABLE_UNLOCK(bucket);
     return MP_NOT_FOUND;
}


/******************************************************************************
 * 函数名称    : hash_cell_update_timer_by_index
 * 功能        : 根据索引来更新表项的计数器内容
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定行号
 *               hti  :含cell的结点指针，比较指针 即确定列号
 *               tm: 要设置的计数器值
 * 返回        : 返回码，更新成功返回MP_OK,失败返回其他错误码
******************************************************************************/
mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm)
{
    mp_code_t ret = MP_OK;

#ifdef RELATE_AGING
    hash_bucket_t *bucket = NULL;
    struct list_head *pos = NULL, *next = NULL, *node = NULL;
    int compare =0 ;
    hash_cell_t *hash_cell = NULL;

    CVMX_MP_POINT_CHECK(table, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(index, M_S11, LV_ERROR);

    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index);
    node  =   index->node;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            compare = 1;
            break;
        }
    }

    if(compare)
    {
        hash_cell = list_entry(pos, hash_cell_t, node);
    }
    else
    {
         LTE_HASH_TABLE_UNLOCK(bucket);
         return MP_NOT_FOUND;
    }
    CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_S11, LV_ERROR);

    table->set_timer((void *)hash_cell->entry, TIMER_REPLACE, tm);

    LTE_HASH_TABLE_UNLOCK(bucket);
#endif
    return ret;
}

/******************************************************************************
 * 函数名称    : hash_cell_update_timer_by_hash
 * 功能        : 根据hash key来更新表项的计数器内容
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定行号
 *               key  :hash key
 *               tm: 要设置的计数器值
 * 返回        : 返回码，更新成功返回MP_OK,失败返回其他错误码
******************************************************************************/
mp_code_t hash_cell_update_timer_by_hash(hash_table_t *table,
                                         hash_key_t   *key,
                                         uint16_t      tm)
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(key,      M_S11, LV_ERROR);

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            ret = MP_CELL_FOUND;
            table->set_timer((void *)src_cell->entry, TIMER_REPLACE, tm);
            break;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;
}


#ifdef STAT_TEST
inline mp_code_t hash_cell_new(hash_table_t *table,
                               hash_bucket_t *bucket,
                               void * cell)
{
    mp_code_t ret = MP_OK;
    hash_cell_t *hash_cell = NULL;
    /*new The cell*/
    hash_cell = (hash_cell_t *)HASH_CELL_NEW(table->pool);
    if( NULL  == hash_cell)
    {
        LTE_DEBUG_PRINTF("FPA Memory not available for CVMX_FPA_LTE_POOL %s.%d\n", __func__, __LINE__);
        return MP_NULL_POINT;
    }
    list_add( &(hash_cell->node),&bucket->head);
    bucket->bucket_depth++;

    memcpy(hash_cell->entry, cell, table->cell_size);
    return ret;
}
/* 插入算法：如果找到就更新，没找到就在链表尾部插入新结点 */
mp_code_t hash_cell_insert_by_hash( hash_table_t *table,
                                    hash_key_t   *key,
                                    void * cell)
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    if (cvmx_unlikely(NULL == table || NULL == key ))
    {
        return MP_FUN_PARAM_ERR;
    }

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */

    if(NULL == table->hash)
    {
        return MP_FUN_PARAM_ERR;
    }
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /* 遍历双向链表，比较cell中key是否一致 */
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);

        if(NULL == table->compare)
        {
            ret = MP_NULL_POINT;
            break;
        }
        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            table->update(src_cell->entry, cell, 0xffffffffffffffff);//将action参数置为全1，对表项的所有内容进行更新
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }
    /*调用new函数*/
    hash_cell_new(table, bucket, cell);

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_FAIL;
}
#endif
/******************************************************************************
 * 函数名称    : hash_cell_get_by_index
 * 功能        : 根据行列索引读取cell值
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定行号
 *               hti  :含cell的结点指针，比较指针 即确定列号
 *               dst_data :由调用者分配空间，将查询的值填进去
 *                         目的地址分配空间必须为128(imsi表为256),否则产生越界
 *               dst_len: 目的地址空间长度
 * 返回        : 错误码，查找成功返回MP_OK,失败返回MP_NOT_FOUND
******************************************************************************/
mp_code_t hash_cell_get_by_index( hash_table_t        *table,
                                  hash_table_index_t  *hti,
                                  void    *dst_data,
                                  uint32_t dst_len )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    struct list_head *node = NULL;
    hash_bucket_t *bucket   = NULL;
    hash_cell_t   *src_cell = NULL;
    bool isfind = false;

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hti,      M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst_data, M_S11, LV_ERROR);

    /*根据基址和偏移，计算桶子地址*/
    LTE_DEBUG_PRINTF("hit->index = %d\n", hti->index);
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, hti->index);
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /* 遍历双向链表，查找cell */
    LTE_HASH_TABLE_LOCK(bucket);
    node = hti->node;
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node){
            isfind = true;
            break;
        }
    }

    /* 将结果填充给调用者的数据，否则返回错误 */
    if(isfind)
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        memcpy( dst_data, src_cell->entry, MP_MIN(dst_len, table->cell_size));
        ret = MP_CELL_FOUND;
    }
    else
    {
         ret = MP_NOT_FOUND;
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;
}

/******************************************************************************
 * 函数名称    : hash_cell_get_by_hash
 * 功能        : 根据哈希获取cell值
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 *               dst_data :由调用者分配空间，将查询的值填进去
 * 说明        : key限定为表项结构中第一个字段
 * 返回        : 错误码，查找成功返回 MP_CELL_FOUND
******************************************************************************/
mp_code_t hash_cell_get_by_hash( hash_table_t *table,
                                 hash_key_t   *key,
                                 void         *dst_data,
                                 uint32_t      dst_len )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(key,      M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst_data, M_S11, LV_ERROR);

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            ret = MP_CELL_FOUND;
            memcpy( dst_data, src_cell->entry, MP_MIN(dst_len, table->cell_size));
            break;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;

}


/******************************************************************************
 * 函数名称    : hash_get_cell_and_index_by_hash
 * 功能        : 根据哈希获取cell值以及该cell的索引
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 *               dst_data :由调用者分配空间，将查询的值填进去
 *               index :获取的哈希表cell的索引
 * 说明        : key限定为表项结构中头几个字段
 * 返回        : 错误码，查找成功返回 MP_CELL_FOUND
******************************************************************************/
mp_code_t hash_get_cell_and_index_by_hash( hash_table_t *table,
                                         hash_key_t   *key,
                                         void         *dst_data,
                                         uint32_t      dst_len,
                                         hash_table_index_t *index)
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(key,      M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(dst_data, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(index, M_S11, LV_ERROR);

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            index->node     = pos;
            index->en       = ENABLE;
            index->index    = bucket->index;
            index->bearerid = 0;
            ret = MP_CELL_FOUND;
            memcpy( dst_data, src_cell->entry, MP_MIN(dst_len, table->cell_size));
            break;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;

}

/******************************************************************************
 * 函数名称    : hash_cell_delete_by_index
 * 功能        : 根据索引删除指定cell
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定桶子偏移
 *               hti  :含cell的结点指针，比较指针
 * 返回        : 错误码，查找成功返回MP_OK,失败返回MP_FAIL
******************************************************************************/
mp_code_t hash_cell_delete_by_index( hash_table_t        *table,
                                     hash_table_index_t  *hti)
{
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    struct list_head *node = NULL;
    hash_bucket_t *bucket   = NULL;
    hash_cell_t   *src_cell = NULL;

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(hti,      M_S11, LV_ERROR);

    /*根据基址和偏移，计算桶子地址*/
    LTE_DEBUG_PRINTF("hit->index = %d\n", hti->index);
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, hti->index);
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /* 遍历双向链表，查找cell */
    LTE_HASH_TABLE_LOCK(bucket);
    node = hti->node;
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            src_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);

            __list_del(pos->prev, pos->next);
            memset(src_cell, 0x0, sizeof(hash_cell_t));
            HASH_CELL_FREE(bucket, table->pool, src_cell);
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_FAIL;
}

/******************************************************************************
 * 函数名称    : hash_cell_delete_by_hash
 * 功能        : 根据哈希删除cell值
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 * 说明        : key限定为表项结构中第一个字段
 * 返回        : 错误码，删除成功返回MP_OK,失败返回MP_FAIL
******************************************************************************/
mp_code_t hash_cell_delete_by_hash( hash_table_t *table,
                                    hash_key_t   *key )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(key,      M_S11, LV_ERROR);

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            __list_del( pos->prev, pos->next);
            HASH_CELL_FREE(bucket, table->pool, src_cell);
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_FAIL;
}


/******************************************************************************
 * 函数名称    : create_update_table_by_hash
 * 功能        : 根据传入的hash key来更新表项，如果未查询到相关表项，会创建
 * 参数        : table_name:需要创建的表的类型
 *               data      :表项内容
 *               len       :内容长度,用于校验
 * 返回        : 错误码，创建成功返回MP_OK,失败返回XFAILURE
******************************************************************************/
mp_error_t create_update_table_by_hash(
                            table_name_t table_type,             /* [in] 需要更新的表的类型 */
                            UpdateTypeEnum opType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            uint64_t actionType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            void* data,                          /* [in] 表项内容 */
                            uint8_t len,                         /* [in] 表项长度，校验类型用 */
                            hash_table_index_t* index          /* [out] index*/
                            )
{
    mp_error_t ret = MP_E_NONE;

    CVMX_MP_POINT_CHECK(data, M_S11, LV_ERROR);
    CVMX_MP_POINT_CHECK(index, M_S11, LV_ERROR);

    lte_table_imsi_t imsi_search_d              = {};
    lte_table_s1_mme_enodeb_t s1_mme_search_d   = {};
    lte_table_s_tmsi_t s_tmsi_search_d          = {};
    lte_table_gtpc_t  gtpc_search_d             = {};
    lte_table_gtpu_t s1u_search_d                = {};
    lte_table_s6a_t s6a_search_d                = {};
    ip_hbh_t s6a_key                            = {};
    umts_table_p_tmsi_t p_tmsi_search_d= {};
    lte_table_enodeb_mme_handle_node_t enodeb_mme_handle_search_d = {};

    hash_table_control_t table_control  = {};

    table_control.compare_enable   = ENABLE;
    table_control.new_enable       = ENABLE;
    table_control.update_enable    = ENABLE;    
    table_control.update_action = actionType;   // 操作类型

    table_control.d_compare        = data;
    table_control.d_update         = data;

    if(CREATE_TABLE != opType)
    {
        table_control.new_enable = DISABLE;
    }

    if( TABLE_IMSI == table_type )
    {
        if( sizeof(lte_table_imsi_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&imsi_search_d, data, sizeof(lte_table_imsi_t));

        PRINTF_IMSI(imsi_search_d.imsi);
        update_imsi_hash_key(imsi_search_d.imsi, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_IMSI key=%lx\n" , table_control.key.data[0]);
        LTE_DEBUG_PRINTF("TABLE_IMSI update_action=%lx\n" , actionType);
    }
    else if( TABLE_GTP_C == table_type)
    {
        if( sizeof(lte_table_gtpc_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&gtpc_search_d, data, sizeof(lte_table_s11_mme_t));

        update_fteid_hash_key(gtpc_search_d.control_plane_ip, gtpc_search_d.teid, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_GTP_C key=%lx\n" , table_control.key.data[0]);
        LTE_DEBUG_PRINTF("TABLE_GTP_C update_action=%lx\n" , actionType);
    }
    else if( TABLE_GTP_U == table_type)
    {
        if( sizeof(lte_table_gtpu_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&s1u_search_d, data, sizeof(lte_table_gtpu_t));

        update_fteid_hash_key(s1u_search_d.trans_layer_ip, s1u_search_d.teid, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_S1U key=%lx %lx %lx\n" , table_control.key.data[0], 
                            table_control.key.data[1], table_control.key.data[2]);
        LTE_DEBUG_PRINTF("TABLE_S1U update_action=%lx\n" , actionType);
    }
    else if( TABLE_S6A == table_type)
    {
        if( sizeof(lte_table_s6a_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&s6a_search_d, data, sizeof(lte_table_s6a_t));
        
        memcpy(&(s6a_key.hss_ip), &(s6a_search_d.hssip), sizeof(ip_comm_t));
        memcpy(&(s6a_key.cn_ip), &(s6a_search_d.mmeip), sizeof(ip_comm_t));
        s6a_key.hop_by_hop = s6a_search_d.hop_by_hop;
        
        update_s6a_hash_key(&s6a_key, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_S6A key=%lx\n" , table_control.key.data[0]);
        LTE_DEBUG_PRINTF("TABLE_S6A update_action=%lx\n" , actionType);
    }
    else if( TABLE_AN_INFO == table_type)
    {
        if( sizeof(lte_table_s1_mme_enodeb_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&s1_mme_search_d, data, sizeof(lte_table_s1_mme_enodeb_t));
        uint8_t     reserved;
        reserved = *(uint8_t*)data;
        if(0 == reserved)
        {
            update_umts_an_info_table_key(s1_mme_search_d.umts_hash_para.rnc_m3ua_signal_code, s1_mme_search_d.umts_hash_para.rnc_sccp_id,&(table_control.key));
        }
        else
        {
            update_s1_mme_hash_key(s1_mme_search_d.lte_hash_para.access_node_ip, s1_mme_search_d.lte_hash_para.access_node_id, &(table_control.key));
        }
        LTE_DEBUG_PRINTF("TABLE_S1_ENODEB_MME key=%lx key=%lx\n" , table_control.key.data[0], table_control.key.data[1]);
        LTE_DEBUG_PRINTF("TABLE_S1_ENODEB_MME update_action=%lx\n" , actionType);
    }
    else if( TABLE_S_TMSI == table_type)
    {
        /* check parameter validation and set table content */
        if( sizeof(lte_table_s_tmsi_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&s_tmsi_search_d, data, sizeof(lte_table_s_tmsi_t));

        update_s_tmsi_hash_key(s_tmsi_search_d.s_tmsi, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_S_TIMSI key=%lx\n" , table_control.key.data[0]);
    }
    else if(TABLE_CN_INFO == table_type)
    {
        if(sizeof(lte_table_enodeb_mme_handle_node_t) != len)
        {
            return MP_E_PARAM;
        }
        memcpy(&enodeb_mme_handle_search_d,data,sizeof(lte_table_enodeb_mme_handle_node_t));
        uint8_t     reserved;
        /*判断是要查找3g表项还是4g表项，4g和3g他们的hash方法不一样*/
        reserved = *(uint8_t*)data;

        if(0 == reserved)
        {
            update_umts_cn_info_table_key(enodeb_mme_handle_search_d.umts_hash_para.sgsn_m3ua_signal_code, enodeb_mme_handle_search_d.umts_hash_para.sgsn_sccp_id, enodeb_mme_handle_search_d.umts_hash_para.rnc_m3ua_signal_code, &(table_control.key));
        }
        else
        {
            update_enb_mme_handle_table_key(enodeb_mme_handle_search_d.lte_hash_para.cn_ip, enodeb_mme_handle_search_d.lte_hash_para.cn_id, &(table_control.key));
        }
        LTE_DEBUG_PRINTF("TABLE_ENB_MME_HANDLE_TABLE key=%lx %lx\n" , table_control.key.data[0], table_control.key.data[1]);
    }
    else if( TABLE_P_TMSI == table_type)
    {
        /* check parameter validation and set table content */
        if( sizeof(umts_table_p_tmsi_t) != len )
        {
            return MP_E_PARAM;
        }
        memcpy(&p_tmsi_search_d, data, sizeof(umts_table_p_tmsi_t));

        update_p_tmsi_table_key(p_tmsi_search_d.p_tmsi, &(table_control.key));
        LTE_DEBUG_PRINTF("TABLE_P_TMSI key=%lx\n" , table_control.key.data[0]);
    }
    else
    {
        /* Invalid table type */
        return MP_E_PARAM;
    }

    ret = hash_table_search_update(LTE_GET_TABLE_PTR(table_type), &table_control);
    if(MP_E_NONE != ret)
    {   
        LTE_DEBUG_PRINTF("Create or Update Table : <Failed>\n");
        return ret;
    }
    else 
    {
        if(CREATE_TABLE == opType)
        {
            ret = get_umts_table_create_statistics(table_type);
            if(MP_E_NONE != ret)
            {
                LTE_DEBUG_PRINTF("Get create table statistics failed! \n");
                return ret;
            }
        }
    }

    if(NULL != table_control.bucket)
    {
        index->en       = ENABLE;
        index->index    = (table_control.bucket)->index;
        index->bearerid = 0;
        index->node     = table_control.node;
    }

    
    return ret;
}


