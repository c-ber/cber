/******************************************************************************

 ��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

 ******************************************************************************
  �ļ���       : packet_gtpv2c.c
  �����ʽ     ��ASCII
  �汾         : Initial Draft
  ����         : Jonathan
  ����         : 2015/9/6
  �ϴ��޸�     :
  ����         : ����gtpv2cЭ��
  �����б�     :
  ��ʷ         :
  1.����       : 2015/9/6
    ����       : Jonathan
    �޸�       : Created file
 ******************************************************************************/

#include "packet_gtpv1c.h"

uint16_t g_gtpv1c_port = GTP_C_PORT_M;

inline mp_error_t gtpv1c_get_ie_cause(struct pbuf *p, uint16_t len, uint8_t *cause)
{
    uint8_t *cur = NULL;
    
    if (NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }
    PBUF_CUR_FORMAT(uint8_t *, cur, p);
    
    *cause = *cur;
    
    return MP_E_NONE;
}
inline mp_error_t gtpv1c_get_ie_imsi(struct pbuf *p, uint16_t len, lte_imsi_t imsi)
{
    uint8_t *cur = NULL;

    if (NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    PBUF_CUR_FORMAT(uint8_t *, cur, p);

    if(len>LTE_IMSI_LEN)
    {
        hydra_stat_inc(stat_pkts_gtpv1c_imsi_invalid);
        return MP_E_MEMORY;
    }
    else
    {
        memcpy(imsi, cur, len);
        return MP_E_NONE;
    }

}
inline mp_error_t gtpv1c_get_ie_teid_data(struct pbuf *p, uint16_t len, uint32_t *teid_data)
{
    uint32_t *cur = NULL;

    if(NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;        
    }

    PBUF_CUR_FORMAT(uint32_t *, cur, p);

    *teid_data = *cur;

    return MP_E_NONE;
}
inline mp_error_t gtpv1c_get_ie_teid_control_plane(struct pbuf *p, uint16_t len, uint32_t *teid_ctr_pl)
{
    uint32_t *cur = NULL;

    if(NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;        
    }
    PBUF_CUR_FORMAT(uint32_t *, cur, p);

    *teid_ctr_pl = *cur;

    return MP_E_NONE;

}
inline mp_error_t gtpv1c_get_ie_nsapi(struct pbuf *p, uint16_t len, uint8_t *nsapi)
{
    ie_nsapi_t *cur = NULL;

    if(NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;        
    }
    PBUF_CUR_FORMAT(ie_nsapi_t *, cur, p);
    
    *nsapi = cur->nsapi;

    return MP_E_NONE;
}

inline mp_error_t gtpv1c_get_ie_pdn(struct pbuf *p, uint16_t len, pdn_t *pdn)
{
    pdn_data_t *cur = NULL;
    uint8_t *ptr = NULL;

    if((NULL == p) || (NULL == pdn))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    PBUF_CUR_FORMAT(pdn_data_t *, cur, p);

    pdn->pdn_type = cur->pdn_type;
    PBUF_PTR_IP(uint8_t *, ptr, p,sizeof(pdn_data_t));

    if(cur->pdn_type == IPV4_TYPE)
    {
        pdn->pdn_addr.ip.v4 = *(uint32_t *)ptr;
        pdn->pdn_addr.version = IP_V4;
        LOG_PRINT(M_PARSE, LV_INFO, "PDN: pdn_type: %d, pdn_addr: %x.\n", cur->pdn_type, pdn->pdn_addr.ip.v4);
    }
    else if(cur->pdn_type == IPV6_TYPE)
    {
        memcpy(pdn->pdn_addr.ip.v6, ptr, IPV6_LEN);
        pdn->pdn_addr.version = IP_V6;
        LOG_PRINT(M_PARSE, LV_INFO, "PDN: pdn_type: %d, pdn_addr: %lx %lx.\n", cur->pdn_type, pdn->pdn_addr.ip.v6[0], pdn->pdn_addr.ip.v6[1]);
    }
    return MP_E_NONE;

}

inline mp_error_t gtpv1c_get_ie_gsn_addr(struct pbuf *p, uint16_t len, ip_comm_t* p_gsn_addr)
{
    uint8_t *cur = NULL;

    if(NULL == p || NULL == p_gsn_addr)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;        
    }
    PBUF_CUR_FORMAT(uint8_t *, cur, p);

    /*�ж���IPv4����IPv6*/
    if(len == IPV4_LEN)
    {
        p_gsn_addr->ip.v4 = *(uint32_t *)cur;/*ȡ��4���ֽڵ�ip*/
        p_gsn_addr->version = IP_V4;
    }
    else if(len == IPV6_LEN)
    {
        memcpy(p_gsn_addr->ip.v6, cur, IPV6_LEN);/*ȡ��16���ֽڵ�ip*/
        p_gsn_addr->version = IP_V6;
    }
    
    return MP_E_NONE;
}
inline mp_error_t gtpv1c_get_ie_msisdn(struct pbuf *p, uint16_t len, lte_msisdn_t msisdn)
{
    uint8_t *cur = NULL;

    if (NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    PBUF_CUR_FORMAT(uint8_t *, cur, p);
    cur ++;/*��Address digits��ǰһ����չλ���ֽڴ����ˣ�����Ҫ��������ֽ�*/
    if(NULL == cur)
    {
        hydra_stat_inc(stat_pkts_gtpv1c_cur_invalid);
        //hydra_stat_inc(stat_pkts_gtpv1c_null_point1);
        return MP_E_PARAM;
    }
    if(len-1>LTE_MSISDN_LEN)
    {
        hydra_stat_inc(stat_pkts_gtpv1c_msisdn_invalid);
        return MP_E_MEMORY;
    }
    else
    {
        memcpy(msisdn, cur, len-1);/*��ȡ14λ���ֻ���*/
    }

    return MP_E_NONE;

}
inline mp_error_t gtpv1c_get_ie_imei(struct pbuf *p, uint16_t len, lte_imei_t imei)
{
    uint8_t *cur = NULL;

    if (NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    PBUF_CUR_FORMAT(uint8_t *, cur, p);

    if(len>LTE_IMEI_LEN)
    {
        hydra_stat_inc(stat_pkts_gtpv1c_imei_invalid);
        return MP_E_MEMORY;
    }
    else
    {
        memcpy(imei, cur, len);
    }
    return MP_E_NONE;

}

inline mp_error_t gtpv1c_get_ci_form_user_loc_info(struct pbuf *p, uint16_t len, cell_id_t cell_id, lac_t lac)
{
    uint8_t     *cur = NULL;
    uint8_t     location_type=0xff;/*�û�λ����Ϣ����:0-cgi;1-SAI;2-rai*/
    if (NULL == p)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }
    PBUF_CUR_FORMAT(uint8_t *, cur, p);
    location_type = *(uint8_t *)cur;
    cur++;
    if(GTPV1C_LOC_TYPE_CGI==location_type)
    {
        cur += PLMN_LEN;
        memcpy(lac, cur, LAC_LEN);
        cur += LAC_LEN;
        memcpy(cell_id, cur, CELL_ID_LEN);
    }
    else
    {
        return MP_E_NOT_FOUND;
    }
    return MP_E_NONE;
}
    
mp_error_t get_relative_gtpv1c_create_pdp_context_req(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t          rv = MP_E_NONE;
    uint16_t            ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t             ie_type = 0;
    int                 num = 0;/*�����ж��м���GSN��ַ����ֻ��һ������һ��Ϊ�û���*/
    ip_comm_t           gtp_ip[2] = {};/*���ڻ���GSN��ַ*/
    uint8_t             is_parse_ie_end = FALSE;/*������������Ҫ������ie����*/
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);

        switch (ie_type)
        {   
            case IE_TYPE_IS_GTPV1C_IMSI:/*����imsi*/
                ie_len = LTE_IMSI_LEN;
                gtpv1c_parse_info->imsi_len = ie_len;
                rv = gtpv1c_get_ie_imsi(p, ie_len, gtpv1c_parse_info->imsi);
                if(MP_E_NONE != rv)
                {
                    return MP_E_PARAM;
                }
                gtpv1c_parse_info->mask |= GTPV1C_PARA_IMSI_VALID;
                PRINTF_IMSI(gtpv1c_parse_info->imsi);
                break;
            case IE_TYPE_IS_RAI:/*����*/
                ie_len = RAI_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*����*/
                ie_len = RECOVERY_LEN;
                break;
            case IE_TYPE_IS_Selection_Mode:/*����*/
                ie_len = SELECTION_MODE_LEN;
                break;

            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*�����û���teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &(gtpv1c_parse_info->gtp_teid[GTP_U_UL]));
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &(gtpv1c_parse_info->gtp_teid[GTP_U_DL]));
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_DL_VALID;
                }
                break;

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*����������teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &(gtpv1c_parse_info->gtp_teid[GTP_C_UL]));
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &(gtpv1c_parse_info->gtp_teid[GTP_C_DL]));
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_DL_VALID;
                }
                break;

            case IE_TYPE_IS_GTPV1C_NSAPI:/*����NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;

            case IE_TYPE_IS_CHARGING:/*����*/
                ie_len = CHARGING_LEN;
                break;
                
            case IE_TYPE_IS_TRACE_REFERENCE:/*����*/
                ie_len = REFERENCE_LEN;
                break;
                
            case IE_TYPE_IS_TRACE_TYPE:/*����*/
                ie_len = TRACE_TYPE_LEN;
                break;
                
            case IE_TYPE_IS_END_USER_ADDR:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_ACCESS_POINT_NAME:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*�����û���Ϳ�����IP*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;

            case IE_TYPE_IS_GTPV1C_MSISDN:/*����msisdn*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_msisdn(p, ie_len, gtpv1c_parse_info->msisdn);
                if(MP_E_NONE != rv)
                {
                    return MP_E_PARAM;
                }
                gtpv1c_parse_info->msisdn_len= ie_len-1;/*�ֻ��ų���Ϊ13λ*/
                gtpv1c_parse_info->mask |= GTPV1C_PARA_MSISDN_VALID;
                PRINTF_MSISDN(gtpv1c_parse_info->msisdn);
                break;
            case IE_TYPE_IS_QOS:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_TFT:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_TRIGGER_ID:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_OMC_IDENTIFY:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_APN_RESTRICTION:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_RAT:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_USER_INFO:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                if(MP_E_NONE == gtpv1c_get_ci_form_user_loc_info(p, ie_len, gtpv1c_parse_info->cell_id, gtpv1c_parse_info->lac))
                {
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_LAC_VALID;
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_CELL_ID_VALID;
                }
                break;
                
            case IE_TYPE_IS_MS_TIME:/*����*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_IMEI:/*����IMEI*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                gtpv1c_parse_info->imei_len = ie_len;
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_imei(p, ie_len, gtpv1c_parse_info->imei);
                if(MP_E_NONE != rv)
                {
                    return MP_E_PARAM;
                }
                gtpv1c_parse_info->mask |= GTPV1C_PARA_IMEI_VALID;
                PRINTF_IMEI(gtpv1c_parse_info->imei);
                is_parse_ie_end = TRUE;
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
        }

        /*added by zhengwan for:ֻ��ע��QOS��*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }
    switch(num)
    {
        case GSN_NUM_ZERO:
            break;

        case GSN_NUM_ONE:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;

        case GSN_NUM_TWO:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_UL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_DL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_DL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;
            
        default:
            break;
    }
    return rv;
}
mp_error_t get_relative_gtpv1c_create_pdp_conext_rsp(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t          rv = MP_E_NONE;
    uint16_t            ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t             ie_type = 0;
    int                 num = 0;/*�����ж��м���GSN��ַ����ֻ��һ������һ��Ϊ�û���*/
    ip_comm_t           gtp_ip[2] = {};/*���ڻ���GSN��ַ*/
    uint8_t             is_parse_ie_end = FALSE;/*������������Ҫ������ie����*/
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);
        switch (ie_type)
        {
            case IE_TYPE_IS_GTPV1C_CAUSE:/*����cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECORDING:/*����*/
                ie_len = RECORDING_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*����*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*�����û���teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_DL_VALID;
                }
                break;

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*����������teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_DL_VALID;
                }
                break;
            case IE_TYPE_IS_GTPV1C_NSAPI:/*����NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_CHARGING:/*����*/
                ie_len = CHARGING_LEN;
                break;
            case IE_TYPE_IS_END_USER_ADDR:/*�����û�ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_pdn(p, ie_len, &(gtpv1c_parse_info->pdn));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_PDN_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*������������û���ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                is_parse_ie_end = TRUE;
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
            
        }

        /*added by zhengwan for:ֻ��ע��QOS��*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }

    switch(num)
    {
        case GSN_NUM_ZERO:
            break;

        case GSN_NUM_ONE:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;

        case GSN_NUM_TWO:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_UL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_DL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_DL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;
            
        default:
            break;
    }
    return rv;
}
mp_error_t get_relative_gtpv1c_update_context_req(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t      rv = MP_E_NONE;
    uint16_t        ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t         ie_type = 0;
    int             num = 0;/*�����ж��м���GSN��ַ����ֻ��һ������һ��Ϊ�û���*/
    ip_comm_t       gtp_ip[2] = {};/*���ڻ���GSN��ַ*/
    uint8_t         is_parse_ie_end = FALSE;/*������������Ҫ������ie����*/
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);
        switch (ie_type)
        {
            case IE_TYPE_IS_GTPV1C_IMSI:/*����imsi*/
                ie_len = LTE_IMSI_LEN;
                gtpv1c_parse_info->imsi_len = ie_len;
                rv = gtpv1c_get_ie_imsi(p, ie_len, gtpv1c_parse_info->imsi);
                if(MP_E_NONE != rv)
                {
                    return MP_E_PARAM;
                }
                gtpv1c_parse_info->mask |= GTPV1C_PARA_IMSI_VALID;
                PRINTF_IMSI(gtpv1c_parse_info->imsi);
                break;
            case IE_TYPE_IS_RAI:/*����*/
                ie_len = RAI_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*����*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*�����û���teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_DL_VALID;
                }
                break;

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*����������teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_DL_VALID;
                }
                break;
            case IE_TYPE_IS_GTPV1C_NSAPI:/*����NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_TRACE_REFERENCE:/*����*/
                ie_len = REFERENCE_LEN;
                break;
            case IE_TYPE_IS_TRACE_TYPE:/*����*/
                ie_len = TRACE_TYPE_LEN;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*�����û���Ϳ�����IP*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
             case IE_TYPE_IS_TFT:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_TRIGGER_ID:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_OMC_IDENTIFY:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_COMMON_FLAG:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_RAT:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;    
            case IE_TYPE_IS_USER_INFO:
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                if(MP_E_NONE == gtpv1c_get_ci_form_user_loc_info(p, ie_len, gtpv1c_parse_info->cell_id, gtpv1c_parse_info->lac))
                {
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_LAC_VALID;
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_CELL_ID_VALID;
                }
                is_parse_ie_end = TRUE;
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
            
        }

        /*added by zhengwan for:ֻ��ע��QOS��*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }
    switch(num)
    {
        case GSN_NUM_ZERO:
            break;

        case GSN_NUM_ONE:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;

        case GSN_NUM_TWO:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_UL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_DL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_DL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;
            
        default:
            break;
    }
    return rv;
}

mp_error_t get_relative_gtpv1c_update_context_rsp(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t  rv = MP_E_NONE;
    uint16_t    ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t     ie_type = 0;
    int num = 0;/*�����ж��м���GSN��ַ����ֻ��һ������һ��Ϊ�û���*/
    ip_comm_t   gtp_ip[2] = {};/*���ڻ���GSN��ַ*/
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);
        switch (ie_type)
        {
            case IE_TYPE_IS_GTPV1C_CAUSE:/*����cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*����*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*�����û���teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_data(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_U_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_U_DL_VALID;
                }
                break;

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*����������teid*/
                ie_len = GTPV1_C_IE_TEID_LEN;
                if(flag == UP_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_UL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_UL_VALID;
                }
                else if(flag == DOWN_LINK)
                {
                    rv = gtpv1c_get_ie_teid_control_plane(p, ie_len, &gtpv1c_parse_info->gtp_teid[GTP_C_DL]);
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_TEID_C_DL_VALID;
                }
                break;
            case IE_TYPE_IS_CHARGING:/*����*/
                ie_len = CHARGING_LEN;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*������������û���ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
        }
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }
    switch(num)
    {
        case GSN_NUM_ZERO:
            break;

        case GSN_NUM_ONE:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;

        case GSN_NUM_TWO:
            if(flag == UP_LINK)
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_UL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_UL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_UL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_UL_VALID;
            }
            else
            {
                gtpv1c_parse_info->gtp_ip[GTP_C_DL] = gtp_ip[0];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_C_DL_VALID;
                gtpv1c_parse_info->gtp_ip[GTP_U_DL] = gtp_ip[1];
                gtpv1c_parse_info->mask |= GTPV1C_PARA_GTPIP_U_DL_VALID;
            }
            break;
            
        default:
            break;
    }
    return rv;
}

mp_error_t get_relative_gtpv1c__delete_context_req(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t  rv = MP_E_NONE;
    uint16_t    ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t     ie_type = 0;
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);
        switch (ie_type)
        {
            case IE_TYPE_IS_TEARDOWN:/*����*/
                ie_len = TEARDOWN_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_NSAPI:/*����NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_PRI_EXTENSION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
        }
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }
    return rv;
}

mp_error_t get_relative_gtpv1c_delete_context_rsp(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t  rv = MP_E_NONE;
    uint16_t    ie_len = 0;  /*ie���ȣ�������ͷ��*/
    uint8_t     ie_type = 0;
    
    if ((NULL == p) || (NULL == gtpv1c_parse_info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    while(PBUF_LENGTH_ASSURE(p))
    {
        LOG_PRINT(M_PARSE, LV_INFO, "p->ptr_offset: %d, p->len: %d.\n", p->ptr_offset, p->len);

        ie_type = *(uint8_t *)(p->ptr_offset+(char *)p->ptr);
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_type: %d.\n", ie_type);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TYPE_LEN);
        switch (ie_type)
        {
            case IE_TYPE_IS_GTPV1C_CAUSE:/*����cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_PRI_EXTENSION:/*����*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
        }
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������
            break;
        }
    }
    return rv;
}

mp_error_t semp_gtpv1c_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    mp_error_t rv = MP_E_NONE;
    struct gtpv1c_hdr *gtpv1_c_hdr = NULL;  /*gtpv1cЭ��ͷ��ָ��*/
    parse_gtpv1c_t *infop = NULL;   /*����gtpv1cЭ����Ҫ�����ݽṹ*/
    uint8_t flag = 0; /*�����ж�������gtp�˵�ip��teid���������е�gtp�˵�ip��teid*/
    
    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, GTPV1_C_COMMON_HDR_LEN);//����Ƿ񳬹�gtp��С����8�ֽ�
    INC_STATS_PKTS(all_proto_statistic[g_corenum].gtp_v1_c, 1);

    PBUF_CUR_FORMAT(struct gtpv1c_hdr *, gtpv1_c_hdr, p);

    //npdu_num_flag-�����־����GTP-U������
    //ex_head_flag-��֧����չͷ
    //resv-Ӧ��Ϊ0
    if(gtpv1_c_hdr->npdu_num_flag || gtpv1_c_hdr->ex_head_flag || gtpv1_c_hdr->resv)
    {
        HYDRA_STAT_INC(stat_pkts_gtpv1c_with_npdu_ex_flag);
        return MP_E_PARAM;
    }

    infop = &mpp->pktinfo.gtpv1c;
    if (NULL == infop)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_E_PARAM;
    }

    infop->gtp_version  = GTPv1C_VERSION(gtpv1_c_hdr);
    infop->message_len  = ntohs(GTPv1C_LENGTH(gtpv1_c_hdr));
    infop->message_type = GTPv1C_MESG_TYPE(gtpv1_c_hdr);
    infop->teid         = GTPv1C_TEID(gtpv1_c_hdr);
    LOG_PRINT(M_PARSE, LV_INFO, "version:%d, msg_len:%d, msg_typ:%d, teid:%x.\n",
                infop->gtp_version, infop->message_len, infop->message_type, infop->teid);

    if (gtpv1_c_hdr->seq_flag)//������sequence numeberʱ��gtp����Ϊ12�ֽ�
    {
        HYDRA_STAT_INC(stat_pkts_gtpv1c_with_seq);
        CHECK_PBUF_LEN(p, GTPV1C_HDR_WITH_SEQ_NO_LEN);//��鳤���Ƿ񳬹�12���ֽ�
        UPDATE_PBUF_OFFSET(p, GTPV1_C_COMMON_HDR_LEN);//��ƫ��8���ֽڣ�ָ��seq no��λ�ã�ȡ��seq no��ֵ
        infop->sequence_number = *((uint16_t*)(p->ptr_offset+(char *)p->ptr));
        mpp->pktinfo.gtpv1c.sequence_number = infop->sequence_number;
        mpp->pktinfo.gtpv1c.mask |= GTPV1C_PARA_SEQ_NUM_VALID;
        UPDATE_PBUF_OFFSET(p, GTPV1_C_SEQ_NO_LEN);//ȡ��ֵ����ƫ��4���ֽڣ�seq noռ�����ֽڣ�PN����һ��չͷ��ռһ�ֽ�
    }
    else
    {
        HYDRA_STAT_INC(stat_pkts_gtpv1c_without_seq);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_COMMON_HDR_LEN);//��seq no��ʶ��Ϊ1����ֻƫ��8�ֽڣ���������ʱ�ͽ����˳��ȼ��
    }

    SET_MPP_PARSE_PRO(mpp, PARSE_PROTOCOL_GTPCV1);

    switch (infop->message_type)
    {
        case GTPV1_C_MSG_CREATE_PDP_CONTEXT_REQ:
            flag = DOWN_LINK;
            rv = get_relative_gtpv1c_create_pdp_context_req(p, infop, flag);
            break;
            
        case GTPV1_C_MSG_CREATE_PDP_CONTEXT_RSP:
            flag = UP_LINK;
            rv = get_relative_gtpv1c_create_pdp_conext_rsp(p, infop, flag);
            break;            
            
        case GTPV1_C_MSG_UPDATE_PDP_CONTEXT_REQ:
            flag = DOWN_LINK;
            rv = get_relative_gtpv1c_update_context_req(p, infop, flag);
            break;

        case GTPV1_C_MSG_UPDATE_PDP_CONTEXT_RSP:
            flag = UP_LINK;
            rv = get_relative_gtpv1c_update_context_rsp(p, infop, flag);
            break;

        case GTPV1_C_MSG_DELETE_PDP_CONTEXT_REQ:
            rv = get_relative_gtpv1c__delete_context_req(p, infop, flag);
            break;

        case GTPV1_C_MSG_DELETE_PDP_CONTEXT_RSP:
            rv = get_relative_gtpv1c_delete_context_rsp(p, infop, flag);
            break;

        default:
            LOG_PRINT(M_PARSE, LV_INFO, "unsupport msg type.\n");
            break;
    }


    if (cvmx_likely(MP_E_NONE == rv))
    {
        memcpy(&(mpp->pktinfo.gtpv1c.srcip), &(mpp->pktinfo.ip.srcip), sizeof(ip_comm_t));
        memcpy(&(mpp->pktinfo.gtpv1c.dstip), &(mpp->pktinfo.ip.dstip), sizeof(ip_comm_t));
        SET_MPP_PARSE_RESULT(mpp, PARSE_SUCCESS);
    }
    else
    {
        SET_MPP_PARSE_RESULT(mpp, PARSE_UNKNOW_OR_NOSUPPORT);
    }

    return rv;
}


