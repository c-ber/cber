/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司

 ******************************************************************************
  文件名       : packet_gtpv2c.c
  编码格式     ：ASCII
  版本         : Initial Draft
  作者         : Jonathan
  创建         : 2015/9/6
  上次修改     :
  描述         : 解析gtpv2c协议
  功能列表     :
  历史         :
  1.日期       : 2015/9/6
    作者       : Jonathan
    修改       : Created file
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

    /*判断是IPv4还是IPv6*/
    if(len == IPV4_LEN)
    {
        p_gsn_addr->ip.v4 = *(uint32_t *)cur;/*取出4个字节的ip*/
        p_gsn_addr->version = IP_V4;
    }
    else if(len == IPV6_LEN)
    {
        memcpy(p_gsn_addr->ip.v6, cur, IPV6_LEN);/*取出16个字节的ip*/
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
    cur ++;/*将Address digits的前一个扩展位的字节带上了，所以要跳过这个字节*/
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
        memcpy(msisdn, cur, len-1);/*获取14位的手机号*/
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
    uint8_t     location_type=0xff;/*用户位置信息类型:0-cgi;1-SAI;2-rai*/
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
    uint16_t            ie_len = 0;  /*ie长度，不包括头部*/
    uint8_t             ie_type = 0;
    int                 num = 0;/*用于判断有几个GSN地址，若只有一个，则一定为用户面*/
    ip_comm_t           gtp_ip[2] = {};/*用于缓存GSN地址*/
    uint8_t             is_parse_ie_end = FALSE;/*用于跳出不需要解析的ie报文*/
    
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
            case IE_TYPE_IS_GTPV1C_IMSI:/*解析imsi*/
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
            case IE_TYPE_IS_RAI:/*跳过*/
                ie_len = RAI_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*跳过*/
                ie_len = RECOVERY_LEN;
                break;
            case IE_TYPE_IS_Selection_Mode:/*跳过*/
                ie_len = SELECTION_MODE_LEN;
                break;

            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*解析用户面teid*/
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

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*解析控制面teid*/
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

            case IE_TYPE_IS_GTPV1C_NSAPI:/*解析NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;

            case IE_TYPE_IS_CHARGING:/*跳过*/
                ie_len = CHARGING_LEN;
                break;
                
            case IE_TYPE_IS_TRACE_REFERENCE:/*跳过*/
                ie_len = REFERENCE_LEN;
                break;
                
            case IE_TYPE_IS_TRACE_TYPE:/*跳过*/
                ie_len = TRACE_TYPE_LEN;
                break;
                
            case IE_TYPE_IS_END_USER_ADDR:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_ACCESS_POINT_NAME:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*解析用户面和控制面IP*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;

            case IE_TYPE_IS_GTPV1C_MSISDN:/*解析msisdn*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_msisdn(p, ie_len, gtpv1c_parse_info->msisdn);
                if(MP_E_NONE != rv)
                {
                    return MP_E_PARAM;
                }
                gtpv1c_parse_info->msisdn_len= ie_len-1;/*手机号长度为13位*/
                gtpv1c_parse_info->mask |= GTPV1C_PARA_MSISDN_VALID;
                PRINTF_MSISDN(gtpv1c_parse_info->msisdn);
                break;
            case IE_TYPE_IS_QOS:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_TFT:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_TRIGGER_ID:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_OMC_IDENTIFY:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_APN_RESTRICTION:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_RAT:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_USER_INFO:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                if(MP_E_NONE == gtpv1c_get_ci_form_user_loc_info(p, ie_len, gtpv1c_parse_info->cell_id, gtpv1c_parse_info->lac))
                {
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_LAC_VALID;
                    gtpv1c_parse_info->mask |= GTPV1C_PARA_CELL_ID_VALID;
                }
                break;
                
            case IE_TYPE_IS_MS_TIME:/*跳过*/
                ie_len = ntohs(*(uint16_t *)(p->ptr_offset+(char *)p->ptr));
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_IMEI:/*解析IMEI*/
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

        /*added by zhengwan for:只关注到QOS层*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
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
    uint16_t            ie_len = 0;  /*ie长度，不包括头部*/
    uint8_t             ie_type = 0;
    int                 num = 0;/*用于判断有几个GSN地址，若只有一个，则一定为用户面*/
    ip_comm_t           gtp_ip[2] = {};/*用于缓存GSN地址*/
    uint8_t             is_parse_ie_end = FALSE;/*用于跳出不需要解析的ie报文*/
    
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
            case IE_TYPE_IS_GTPV1C_CAUSE:/*解析cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECORDING:/*跳过*/
                ie_len = RECORDING_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*跳过*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*解析用户面teid*/
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

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*解析数据面teid*/
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
            case IE_TYPE_IS_GTPV1C_NSAPI:/*解析NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_CHARGING:/*跳过*/
                ie_len = CHARGING_LEN;
                break;
            case IE_TYPE_IS_END_USER_ADDR:/*解析用户ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_pdn(p, ie_len, &(gtpv1c_parse_info->pdn));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_PDN_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*解析数据面和用户面ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                is_parse_ie_end = TRUE;
                break;
            default:
                LOG_PRINT(M_PARSE, LV_INFO, "Unsupported IE type.\n");
                break;
            
        }

        /*added by zhengwan for:只关注到QOS层*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
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
    uint16_t        ie_len = 0;  /*ie长度，不包括头部*/
    uint8_t         ie_type = 0;
    int             num = 0;/*用于判断有几个GSN地址，若只有一个，则一定为用户面*/
    ip_comm_t       gtp_ip[2] = {};/*用于缓存GSN地址*/
    uint8_t         is_parse_ie_end = FALSE;/*用于跳出不需要解析的ie报文*/
    
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
            case IE_TYPE_IS_GTPV1C_IMSI:/*解析imsi*/
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
            case IE_TYPE_IS_RAI:/*跳过*/
                ie_len = RAI_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*跳过*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*解析用户面teid*/
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

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*解析控制面teid*/
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
            case IE_TYPE_IS_GTPV1C_NSAPI:/*解析NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_TRACE_REFERENCE:/*跳过*/
                ie_len = REFERENCE_LEN;
                break;
            case IE_TYPE_IS_TRACE_TYPE:/*跳过*/
                ie_len = TRACE_TYPE_LEN;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*解析用户面和控制面IP*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
             case IE_TYPE_IS_TFT:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_TRIGGER_ID:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_OMC_IDENTIFY:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_COMMON_FLAG:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_RAT:/*跳过*/
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

        /*added by zhengwan for:只关注到QOS层*/
        if(is_parse_ie_end)
        {
            break;
        }
        
        LOG_PRINT(M_PARSE, LV_INFO, "ie_len: %d.\n", ie_len);

        UPDATE_PBUF_OFFSET(p, ie_len);

        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
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
    uint16_t    ie_len = 0;  /*ie长度，不包括头部*/
    uint8_t     ie_type = 0;
    int num = 0;/*用于判断有几个GSN地址，若只有一个，则一定为用户面*/
    ip_comm_t   gtp_ip[2] = {};/*用于缓存GSN地址*/
    
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
            case IE_TYPE_IS_GTPV1C_CAUSE:/*解析cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
                
            case IE_TYPE_IS_GTPV1C_RECOVERY:/*跳过*/
                ie_len = RECOVERY_LEN;
                break;
                
            case IE_TYPE_IS_GTPV1C_TEID_DATA:/*解析用户面teid*/
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

            case IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE:/*解析控制面teid*/
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
            case IE_TYPE_IS_CHARGING:/*跳过*/
                ie_len = CHARGING_LEN;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
                
            case IE_TYPE_IS_GTPV1C_GSN_ADDR:/*解析控制面和用户面ip*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                rv = gtpv1c_get_ie_gsn_addr(p, ie_len,&gtp_ip[num]);
                num++;
                break;
            case IE_TYPE_IS_QOS:/*跳过*/
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
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
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
    uint16_t    ie_len = 0;  /*ie长度，不包括头部*/
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
            case IE_TYPE_IS_TEARDOWN:/*跳过*/
                ie_len = TEARDOWN_LEN;
                break;
            case IE_TYPE_IS_GTPV1C_NSAPI:/*解析NSAPI*/
                ie_len = NSAPI_LEN;
                rv = gtpv1c_get_ie_nsapi(p, ie_len, &gtpv1c_parse_info->nsapi);
                gtpv1c_parse_info->mask |= GTPV1C_PARA_NSAPI_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_PRI_EXTENSION:/*跳过*/
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
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
            break;
        }
    }
    return rv;
}

mp_error_t get_relative_gtpv1c_delete_context_rsp(struct pbuf *p, parse_gtpv1c_t *gtpv1c_parse_info, uint8_t flag)
{
    mp_error_t  rv = MP_E_NONE;
    uint16_t    ie_len = 0;  /*ie长度，不包括头部*/
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
            case IE_TYPE_IS_GTPV1C_CAUSE:/*解析cause*/
                ie_len = CAUSE_LEN;
                rv = gtpv1c_get_ie_cause(p, ie_len, &(gtpv1c_parse_info->cause));
                gtpv1c_parse_info->mask |= GTPV1C_PARA_CAUSE_VALID;
                break;
            case IE_TYPE_IS_PROTOCOL_CONFIGURATION:/*跳过*/
                ie_len = *(uint16_t *)(p->ptr_offset+(char *)p->ptr);
                UPDATE_PBUF_OFFSET(p, GTPV1_C_IE_TLV_LEN);
                break;
            case IE_TYPE_IS_PRI_EXTENSION:/*跳过*/
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
            //IP内容L4层及其以上应用层的字节已经全部解析完毕
            break;
        }
    }
    return rv;
}

mp_error_t semp_gtpv1c_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    mp_error_t rv = MP_E_NONE;
    struct gtpv1c_hdr *gtpv1_c_hdr = NULL;  /*gtpv1c协议头部指针*/
    parse_gtpv1c_t *infop = NULL;   /*分析gtpv1c协议需要的数据结构*/
    uint8_t flag = 0; /*用于判断是上行gtp端点ip和teid，还是下行的gtp端点ip和teid*/
    
    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, GTPV1_C_COMMON_HDR_LEN);//检查是否超过gtp最小长度8字节
    INC_STATS_PKTS(all_proto_statistic[g_corenum].gtp_v1_c, 1);

    PBUF_CUR_FORMAT(struct gtpv1c_hdr *, gtpv1_c_hdr, p);

    //npdu_num_flag-这个标志仅对GTP-U有意义
    //ex_head_flag-不支持扩展头
    //resv-应置为0
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

    if (gtpv1_c_hdr->seq_flag)//当存在sequence numeber时，gtp长度为12字节
    {
        HYDRA_STAT_INC(stat_pkts_gtpv1c_with_seq);
        CHECK_PBUF_LEN(p, GTPV1C_HDR_WITH_SEQ_NO_LEN);//检查长度是否超过12个字节
        UPDATE_PBUF_OFFSET(p, GTPV1_C_COMMON_HDR_LEN);//先偏移8个字节，指向seq no的位置，取出seq no的值
        infop->sequence_number = *((uint16_t*)(p->ptr_offset+(char *)p->ptr));
        mpp->pktinfo.gtpv1c.sequence_number = infop->sequence_number;
        mpp->pktinfo.gtpv1c.mask |= GTPV1C_PARA_SEQ_NUM_VALID;
        UPDATE_PBUF_OFFSET(p, GTPV1_C_SEQ_NO_LEN);//取完值后再偏移4个字节，seq no占两个字节，PN和下一扩展头各占一字节
    }
    else
    {
        HYDRA_STAT_INC(stat_pkts_gtpv1c_without_seq);
        UPDATE_PBUF_OFFSET(p, GTPV1_C_COMMON_HDR_LEN);//若seq no标识不为1，则只偏移8字节，函数进来时就进行了长度检查
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


