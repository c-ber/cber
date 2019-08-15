/*-----------------------------------------------------------------------------
 文件名  : s1ap_asn1_decode.c
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－S1AP的解码
 备注    :
 修改历史:
 1.修改者: ruansong
 时间    : 2016.01.19
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
/*  函数实现部分开始                                                         */
/*---------------------------------------------------------------------------*/
#ifdef  __cplusplus
extern "C" {
#endif
/*---------------------------------------------------------------------------*/

#include "s1ap_asn1_decode.h"
#include "packet_entry.h"



/****************************************************************************
 函数名名称  : s1ap_decode_cons_whole
 函数功能    : S1AP解码约束型整型数
 输入参数    : 比特操作的结构指针, 最小值, 最大值
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_constrained_whole(ST_BITPOINTER *pstBp, _U32 ulLb, _U32 ulUb)
{
    _U32    ulValue = 0;

    if (NULL == pstBp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    ulValue = PER_DecodeConstrainedWhole(pstBp, ulUb - ulLb + 1) + ulLb;
    return ulValue;
}

/****************************************************************************
 函数名名称  : s1ap_decode_enum
 函数功能    : S1AP解码约束型枚举整型数
 输入参数    : 比特操作的结构指针,最大值
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_enum(ST_BITPOINTER *pstBp, _U32 ulRange)
{
    _U32    ulValue = 0;

    if (NULL == pstBp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    ulValue = PER_DecodeConstrainedWhole(pstBp, ulRange);
    return ulValue;
}


/****************************************************************************
 函数名名称  : s1ap_decode_raw_octet_string
 函数功能    : S1AP解码字节串函数
 输入参数    : 比特操作的结构指针,字节串长度
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U8 *s1ap_decode_raw_octet_string( ST_BITPOINTER *pstBp, _U32 ulLength ,_U8 *cache_buf)
{
    _U8 *walker = NULL;

    if ((NULL == cache_buf) || (NULL == pstBp))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return NULL;
    }

    if (0 == ulLength)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, "ulLength is 0.\n");
        return NULL;
    }

    walker = cache_buf;
    /* 字节对齐 */
    BP_ReadPad(pstBp);

    memset(cache_buf,0,ulLength);
    while( ulLength-- > 0 )
    {
        *walker = (_U8)LDB(8, 0, BP_ReadBits(pstBp, 8));
        walker++;
    }
    
    return(cache_buf);
}

/****************************************************************************
 函数名名称  : s1ap_decode_octetstr_by_len
 函数功能    : S1AP解码函数
 输入参数    : 比特操作的结构指针, 解析好的S1AP指针, 消息类型
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_octetstr_by_len( ST_BITPOINTER *pstBp, _U8 *octets, _U32 ulLen)
{
    if ((NULL == octets) || (NULL == pstBp))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    if (0 == ulLen)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, "ulLen is 0.\n");
        return EN_S1APERR_DECODE;
    }

    /* 字节对齐 */
    BP_ReadPad(pstBp);
    while( ulLen-- > 0 )
    {
        *octets = (char)LDB(8, 0, BP_ReadBits(pstBp, 8));
        octets++;
    }
    return EN_S1AP_CODE_OK;
}
extern mp_error_t semp_nas_parse(struct pbuf *pt, parse_nas_t *nas);

_U32 semp_nas_pre_parse(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    struct pbuf nas_buf = {0};

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    nas_buf.len = PER_DecodeLengthDeterminant(pst_Bp);
    nas_buf.ptr = (void *)pst_Bp->bytes;
    nas_buf.ptr_offset = 0;
    LOG_PRINT(M_PARSE, LV_INFO, "nas length = %d.\n", nas_buf.len);
    pst_Bp->bytes += nas_buf.len; /*跳到下一个IE头处*/
    semp_nas_parse(&nas_buf, &(s1ap->nas));/*进入nas解析*/
    return EN_S1AP_CODE_OK;
}

/****************************************************************************
 函数名名称  : s1ap_decode_E_RABSetupListCtxtSUResp_IE
 函数功能    : S1AP解析E_RABSetupListCtxtSUResp中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : by cb ,增加gtpu下行teid的解析
****************************************************************************/
_U32 s1ap_decode_E_RABSetupListCtxtSUResp_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U16 ie_num     = 0;
    _U16 ie_id      = 0xffff;
    _U16 len_addr   = 0;
    ST_IE_COMMON ie_common = {0};


    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    LOG_PRINT(M_PARSE, LV_INFO, "=======enter s1ap_decode_E_RABSetupListCtxtSUResp_IE=========\n");

    /*获取EN_ID_E_RABTOBESETUPLISTCTXTSUREQ的ie数量，为该字节的数值最小值*/
    ie_num = PER_DecodeConstrainedWhole(pst_Bp,
                        (S1AP_MAX_RABLIST_IES_NUMBER-S1AP_MIN_RABLIST_IES_NUMBER+1))
                        +S1AP_MIN_RABLIST_IES_NUMBER;
    LOG_PRINT(M_PARSE, LV_INFO, "ie_num = %d.\n",ie_num);
    while(ie_num>0)
    {
        ie_num --;
        ie_id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch(ie_id)
        {
            case EN_ID_E_RABSETUPITEMCTXTSURES:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));

                // e-rab flag
                pst_Bp->bytes += 1;
                BP_ReadPad(pst_Bp);

                // Transport address 4 bytes
                len_addr = PER_DecodeConstrainedWhole(pst_Bp, TIP_LEN_RANGE) + 1;
                BP_ReadPad(pst_Bp);

                LOG_PRINT(M_PARSE, LV_INFO, "IP length: %d, bits: %d\n", len_addr/8, len_addr);
                if(len_addr == DIGIT_IPV4)
                {
                    s1ap->s1u_dl_fteid.tip.ip.v4 = *((uint32_t *)pst_Bp->bytes);
                    s1ap->s1u_dl_fteid.tip.version = IP_V4;
                    pst_Bp->bytes += IPV4_LEN;/* transport ipv4 length*/
                    LOG_PRINT(M_PARSE, LV_INFO, "s1ap->s1u_dl_fteid.tip.ip.v4 = 0x%08x\n",
                            s1ap->s1u_dl_fteid.tip.ip.v4);
                 }
                else if(len_addr == DIGIT_IPV6)
                {
                    memcpy(s1ap->s1u_dl_fteid.tip.ip.v6, pst_Bp->bytes, IPV6_LEN);
                    s1ap->s1u_dl_fteid.tip.version = IP_V6;
                    pst_Bp->bytes += IPV6_LEN;/* transport ipv6 length*/
                    LOG_PRINT(M_PARSE, LV_INFO, "s1ap->s1u_dl_fteid.tip.ip.v6 = 0x%lx 0x%lx\n",
                            s1ap->s1u_dl_fteid.tip.ip.u64[0], s1ap->s1u_dl_fteid.tip.ip.u64[1]);
                }

                // Teid 4 bytes
                s1ap->s1u_dl_fteid.teid = *((uint32_t *)pst_Bp->bytes);
                pst_Bp->bytes += 4; /* teid length */
                LOG_PRINT(M_PARSE, LV_INFO, "teid: 0x%08x\n",s1ap->s1u_dl_fteid.teid);
                break;
            default:
                ie_num = 0;
                break;
        }

    }
    return EN_S1AP_CODE_OK;
}

/****************************************************************************
 函数名名称  : s1ap_decode_E_RabToBeSetUpListCtxtSUReq_IE
 函数功能    : S1AP解析E_RabToBeSetUpListCtxtSUReq中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_E_RabToBeSetUpListCtxtSUReq_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U16                       ie_num = 0;
    _U16                       ie_id  = 0xffff;
    ST_IE_COMMON               ie_common = {0};
    _U8                        extbit = 0;
    _U16                       len_addr = 0;
    _U8                        flag_nas = FALSE;

#define READ_EXBIT(p) \
    extbit = PER_DecodeBoolean(p);\
    if(extbit)\
    {\
        return EN_S1AP_CODE_OK;\
    }

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    LOG_PRINT(M_PARSE, LV_INFO, "=======enter s1ap_decode_E_RabToBeSetUpListCtxtSUReq_IE=========\n");

    /*获取EN_ID_E_RABTOBESETUPLISTCTXTSUREQ的ie数量，为该字节的数值最小值*/
    ie_num = PER_DecodeConstrainedWhole(pst_Bp,
                        (S1AP_MAX_RABLIST_IES_NUMBER-S1AP_MIN_RABLIST_IES_NUMBER+1))
                        +S1AP_MIN_RABLIST_IES_NUMBER;
    LOG_PRINT(M_PARSE, LV_INFO, "ie_num = %d.\n",ie_num);
    while(ie_num>0)
    {
        ie_num --;
        ie_id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch(ie_id)
        {
            case EN_ID_E_RABTOBESETUPITEMCTXTSUREQ:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                if(*(pst_Bp->bytes) & 0x40) //0100 0000,该位标志是否存在nas_pdu
                {
                    flag_nas = TRUE;
                }

                // e-rab + Qos total 4 bytes
                pst_Bp->bytes += 4;

                // Transport address 4 bytes
                READ_EXBIT(pst_Bp);
                len_addr = PER_DecodeConstrainedWhole(pst_Bp, TIP_LEN_RANGE) + 1;
                BP_ReadPad(pst_Bp);
                LOG_PRINT(M_PARSE, LV_INFO, "IP length: %d, bits: %d\n", len_addr/8, len_addr);
                if(len_addr == DIGIT_IPV4)
                {
                    s1ap->rab_info.tip.ip.v4 = *((uint32_t *)pst_Bp->bytes);
                    s1ap->rab_info.tip.version = IP_V4;
                    pst_Bp->bytes += IPV4_LEN;/* transport ipv4 length*/
                 }
                else if(len_addr == DIGIT_IPV6)
                {
                    memcpy(s1ap->rab_info.tip.ip.v6, (uint64_t *)pst_Bp->bytes, IPV6_LEN);
                    s1ap->rab_info.tip.version = IP_V6;
                    pst_Bp->bytes += IPV6_LEN;/* transport ipv6 length*/
                }
                // Teid 4 bytes
                s1ap->rab_info.teid = *((uint32_t *)pst_Bp->bytes);
                pst_Bp->bytes += 4; /* teid length */
                LTE_DEBUG_PRINTF("====teid: %x=====\n", s1ap->rab_info.teid);

                LOG_PRINT(M_PARSE, LV_INFO, "==========ip: %lx %lx teid: %x\n", s1ap->rab_info.tip.ip.u64[0],
                                                            s1ap->rab_info.tip.ip.u64[1],s1ap->rab_info.teid);
                
                if (TRUE == flag_nas) 
                {
                    s1ap->nas_exist = TRUE;
                    LTE_DEBUG_PRINTF("bytes pointer: %p\n", pst_Bp->bytes);
                    LTE_DEBUG_PRINTF("bits pointer: %d\n", pst_Bp->bits);
                    semp_nas_pre_parse(pst_Bp, s1ap);
                    PRINTF_GUTI(s1ap->nas.guti);
                }
                break;
            default:
                ie_num = 0;
                break;
        }
            
    }
    return EN_S1AP_CODE_OK;
}

/****************************************************************************
 函数名名称  : s1ap_decode_initialUeMsg_IE
 函数功能    : S1AP解析initialUeMsg中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_initialUeMsg_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;
    _U16                       ie_num = 0;
    _U16                       ie_id  = 0xffff;
    _U32                       eNodeB_ue_s1_id=0xffffffff;

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));
    
    ST_IE_ENB_UE_S1AP_ID            ie_enb_ue_s1ap_id={0};
    ST_S1AP_IE_TAI                  ie_TAI={0};
    _U32                            ret = EN_S1AP_CODE_OK;
    ST_S1AP_IE_NAS_PDU              ie_nas_pdu={0};
    ST_S1AP_IE_ECGI                 ie_ecgi={0};

    while(ie_num>0)
    {
        ie_num--;
        ie_id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_id))
        {
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_enb_ue_s1ap_id));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit               
                break;

            case EN_ID_NAS_PDU:
                s1ap->nas_exist= TRUE;
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_nas_pdu));
                semp_nas_pre_parse(pst_Bp, s1ap);/*进入nas预解析*/
                BP_ReadPad(pst_Bp);
                break;

            case EN_ID_TAI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_TAI));
                ie_TAI.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_TAI.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                memcpy(&s1ap->tai[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->tai[3], pst_Bp->bytes, LTE_TAC_MAX_LEN);//获取TAC
                pst_Bp->bytes+=LTE_TAC_MAX_LEN;
                break;

            case EN_ID_EUTRAN_CGI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_ecgi));
                ie_ecgi.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_ecgi.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                /*
                printf("*****************[s1ap_decode_initialUeMsg_IE]*******************S1AP:ecgi[%02x%02x%02x-%02x%02x%02x%02x]\n", 
                                pst_Bp->bytes[0],pst_Bp->bytes[1],pst_Bp->bytes[2],
                                pst_Bp->bytes[3],pst_Bp->bytes[4],pst_Bp->bytes[5],pst_Bp->bytes[6]);
                */
                memcpy(&s1ap->ecgi.lte_plmn[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->ecgi.lte_cellid[0], pst_Bp->bytes, LTE_CELLID_MAX_LEN);//获取cell id
                *(uint32_t *)&s1ap->ecgi.lte_cellid[0] >>= 4;// cell id 28 bits, need to shift right 4 bits
                pst_Bp->bytes+=LTE_CELLID_MAX_LEN;
                s1ap->ecgi_exist = TRUE;                
                break;


            default:
                ie_num = 0;
                break;
        }
    }

    return ret;
}

/****************************************************************************
 函数名名称  : s1ap_decode_initialContextSetupResp_IE
 函数功能    : S1AP解析initialContextSetupResp中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        :
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_initialContextSetupResp_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U32  ret             = EN_S1AP_CODE_OK;
    _U8   extbit          = 0;
    _U16  ie_num          = 0;
    _UINT eNodeB_ue_s1_id = 0xffffffff;
    _UINT mme_ue_s1_id    = 0xffffffff;

    ST_BITPOINTER p         = {0};
    ST_IE_COMMON  ie_common = {0};


    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp); //获取拓展位
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));
    while( ie_num > 0 )
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                mme_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                s1ap->cn_id = mme_ue_s1_id & 0xFFFFFFFF;//max valid 32bit
                LOG_PRINT(M_PARSE, LV_INFO, "s1ap->cn_id = %u\n", s1ap->cn_id);
                break;

            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                LOG_PRINT(M_PARSE, LV_INFO, "s1ap->access_node_id = %u\n", s1ap->access_node_id);
                break;

            case EN_ID_E_RABSETUPLISTCTXTSURES:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                LOG_PRINT(M_PARSE, LV_INFO, "Identify EN_ID_E_RABSETUPLISTCTXTSURES\n");
                /*进入ie解析*/
                p.bytes = pst_Bp->bytes;
                p.bits = pst_Bp->bits;
                p.end = pst_Bp->bytes + ie_common.ie_length -1;//该ie的最后一个字节
                s1ap_decode_E_RABSetupListCtxtSUResp_IE(&p, s1ap);
                BP_ReadPad(pst_Bp);
                pst_Bp->bytes += ie_common.ie_length;//偏移指针，跳到下一个ie
                break;

            default:
                ie_num = 0;
                break;
        }
    }

    return ret;
}
/****************************************************************************
 函数名名称  : s1ap_decode_initialContextSetupReq_IE
 函数功能    : S1AP解析initialContextSetupReq中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_initialContextSetupReq_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       mme_ue_s1_id=0xffffffff;
    ST_BITPOINTER              p = {0};
    //struct pbuf                rabList_buf={0};

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp); //获取拓展位
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }
    
    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));
    
    ST_IE_COMMON                   ie_common = {0};
    _U32                            ret = EN_S1AP_CODE_OK;

    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                mme_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                s1ap->cn_id = mme_ue_s1_id & 0xFFFFFFFF;//max valid 32bit
                break;
                
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit 
                break;

            case EN_ID_UEAGGREGATEMAXIMUMBITRATE:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                pst_Bp->bytes += ie_common.ie_length;//偏移指针，跳到下一个ie
                pst_Bp->bits = 0;
                break;

            case EN_ID_E_RABTOBESETUPLISTCTXTSUREQ:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));

                /*进入ie解析*/
                p.bytes = pst_Bp->bytes;
                p.bits = pst_Bp->bits;
                p.end = pst_Bp->bytes + ie_common.ie_length -1;//该ie的最后一个字节
                s1ap_decode_E_RabToBeSetUpListCtxtSUReq_IE(&p, s1ap);
                BP_ReadPad(pst_Bp);
                pst_Bp->bytes += ie_common.ie_length;//偏移指针，跳到下一个ie
                break;
            
            default:
                ie_num = 0;
                break;
        }
    }

    return ret;
}

/****************************************************************************
 函数名名称  : s1ap_decode_UEContextReleaseComplete_IE
 函数功能    : S1AP解析UEContextReleaseComplete中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_UEContextReleaseComplete_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       mme_ue_s1_id=0xffffffff;

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp); //获取拓展位
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }
    
    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));
    
    ST_IE_COMMON                    ie_common = {0};
    _U32                            ret = EN_S1AP_CODE_OK;

    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                mme_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                s1ap->cn_id = mme_ue_s1_id & 0xFFFFFFFF;//max valid 32bit
                break;
                
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit 
                break;
            
            default:
                ie_num = 0;
                break;
        }
    }

    return ret;
}

/****************************************************************************
 函数名名称  : s1ap_decode_uplink_nas_trans
 函数功能    : S1AP解析uplinkNASTransport中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_uplink_nas_trans(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    ST_S1AP_IE_TAI             ie_TAI={0};
    _U32                       ret = EN_S1AP_CODE_OK;
    ST_IE_COMMON               ie_common = {0};
    ST_S1AP_IE_ECGI            ie_ecgi={0};
    
    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }
 
    extbit = PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }
    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));



    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                s1ap->cn_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                break;

            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                break;  
                
            case EN_ID_NAS_PDU:
                s1ap->nas_exist = TRUE;
#if 1              
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                semp_nas_pre_parse(pst_Bp, s1ap);/*进入nas预解析*/
                BP_ReadPad(pst_Bp);
#else
               { 
                ST_S1AP_IE_NAS_PDU              ie_nas_pdu={0};
    
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_nas_pdu));
                ie_nas_pdu.stValue.stNasPdu.ulLength = PER_DecodeLengthDeterminant(pst_Bp);
                
                nas_buf.len        = pst_Bp->bytes-pst_Bp->end;
                nas_buf.ptr        = pst_Bp->bytes;
                nas_buf.ptr_offset = 0;
                semp_nas_parse(&nas_buf, &(s1ap->nas));
                
                    
                    BP_ReadPad(pst_Bp);
                    /*不用做nas层解析，直接指针偏移即可*/
                    pst_Bp->bytes += ie_nas_pdu.stValue.stNasPdu.ulLength;
                    //s1ap_decode_raw_octet_string(pst_Bp, ie_nas_pdu.stValue.stNasPdu.ulLength, &nas_pdu_buffer[0]);
                }        
#endif
                break;    

             case EN_ID_EUTRAN_CGI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_ecgi));
                ie_ecgi.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_ecgi.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                memcpy(&s1ap->ecgi.lte_plmn[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->ecgi.lte_cellid[0], pst_Bp->bytes, LTE_CELLID_MAX_LEN);//获取cell id
                *(uint32_t *)&s1ap->ecgi.lte_cellid[0] >>= 4;// cell id 28 bits, need to shift right 4 bits
                pst_Bp->bytes+=LTE_CELLID_MAX_LEN;
                s1ap->ecgi_exist = TRUE;
                break;

            case EN_ID_TAI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_TAI));
                ie_TAI.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if((ret= s1ap_decode_octetstr_by_len(pst_Bp, &ie_TAI.PLMN_identity[0], 3))!=EN_S1AP_CODE_OK)
                {
                    return ret;
                }

                if((ret= s1ap_decode_octetstr_by_len(pst_Bp, &ie_TAI.TAC[0], 2))!=EN_S1AP_CODE_OK)
                {
                    return ret;
                }

                memcpy(s1ap->tai, &ie_TAI.PLMN_identity[0], LTE_TAI_MAX_LEN);//lint !e420
                break;

            default:
                ie_num = 0;
                break;    
        }

        
    }
    return EN_S1AP_CODE_OK;
}

/****************************************************************************
 函数名名称  : s1ap_decode_downlink_nas_trans
 函数功能    : S1AP解析downlinkNASTransport中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_downlink_nas_trans(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       ret = EN_S1AP_CODE_OK;
    ST_IE_COMMON               ie_common = {0};

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));

    

    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                s1ap->cn_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                break;

            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                break;  
                
            case EN_ID_NAS_PDU:
                s1ap->nas_exist = TRUE;
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                semp_nas_pre_parse(pst_Bp, s1ap);/*进入nas预解析*/
                BP_ReadPad(pst_Bp);
                break;    

            default:
                ie_num = 0;
                break;    
        }

        
    }
    return ret;
}

_U32 s1ap_decode_E_RabSetUpListBearSU_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U16                       ie_num = 0;
    _U16                       ie_id  = 0xffff;
    ST_IE_COMMON               ie_common = {0};
  
    _U8                        extbit = 0;
    _U16                       len_addr = 0;
    
#define READ_EXBIT(p) \
        extbit = PER_DecodeBoolean(p);\
        if(extbit)\
        {\
            return EN_S1AP_CODE_OK;\
        }

    if ((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    LOG_PRINT(M_PARSE, LV_INFO, "=======enter s1ap_decode_E_RabToBeSetUpListCtxtSUReq_IE=========\n");

    ie_num = PER_DecodeConstrainedWhole(pst_Bp,
                        (S1AP_MAX_RABLIST_IES_NUMBER-S1AP_MIN_RABLIST_IES_NUMBER+S1AP_SIZE_GAP))
                        +S1AP_MIN_RABLIST_IES_NUMBER;
    LOG_PRINT(M_PARSE, LV_INFO, "ie_num = %d.\n",ie_num);
    while (ie_num > 0)
    {
        ie_num --;
        ie_id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-S1AP_MIN_NUM_PROTOCOL_IES+S1AP_SIZE_GAP));

        switch(ie_id)
        {
            case EN_ID_E_RABTOBESETUPITEMBEARERSUREQ:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                // e-rab + Qos total 4 bytes
                pst_Bp->bytes += 4;
                
                // Transport address 4 bytes
                READ_EXBIT(pst_Bp); 
                // address bits, bytes = bits/8
                len_addr = PER_DecodeConstrainedWhole(pst_Bp, TIP_LEN_RANGE) + 1;
                LTE_DEBUG_PRINTF("IP length: %d, bits: %d\n", len_addr/8, len_addr);
                BP_ReadPad(pst_Bp);
                if(len_addr == DIGIT_IPV4)
                {
                    s1ap->rab_info.tip.ip.v4 = *((uint32_t *)pst_Bp->bytes);
                    s1ap->rab_info.tip.version = IP_V4;
                    pst_Bp->bytes += IPV4_LEN;/* transport ipv4 length*/
                 }
                else if(len_addr == DIGIT_IPV6)
                {
                    memcpy(s1ap->rab_info.tip.ip.v6, (uint64_t *)pst_Bp->bytes, IPV6_LEN);
                    s1ap->rab_info.tip.version = IP_V6;
                    pst_Bp->bytes += IPV6_LEN;/* transport ipv6 length*/
                }
                // Teid 4 bytes
                s1ap->rab_info.teid = *((uint32_t *)pst_Bp->bytes);
                pst_Bp->bytes += 4; /* teid length */
                
                LOG_PRINT(M_PARSE, LV_INFO, "==========ip: %lx %lx teid: %x\n", s1ap->rab_info.tip.ip.u64[0],
                                                           s1ap->rab_info.tip.ip.u64[1], s1ap->rab_info.teid);
                break;
            case EN_ID_E_RABSETUPITEMBEARERSURES:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                
                // e-rab 1 bytes
                pst_Bp->bytes += 1;

                // transport address
                BP_ReadPad(pst_Bp);
                len_addr = PER_DecodeConstrainedWhole(pst_Bp, TIP_LEN_RANGE) + 1;
                LTE_DEBUG_PRINTF("IP length: %d, bits: %d\n", len_addr/8, len_addr);
                BP_ReadPad(pst_Bp);
                if(len_addr == DIGIT_IPV4)
                {
                    s1ap->rab_info.tip.ip.v4 = *((uint32_t *)pst_Bp->bytes);
                    s1ap->rab_info.tip.version = IP_V4;
                    pst_Bp->bytes += IPV4_LEN;/* transport ipv4 length*/
                 }
                else if(len_addr == DIGIT_IPV6)
                {
                    memcpy(s1ap->rab_info.tip.ip.v6, (uint64_t *)pst_Bp->bytes, IPV6_LEN);
                    s1ap->rab_info.tip.version = IP_V6;
                    pst_Bp->bytes += IPV6_LEN;/* transport ipv6 length*/

                }

                // Teid 4 bytes
                s1ap->rab_info.teid = *((uint32_t *)pst_Bp->bytes);
                pst_Bp->bytes += 4; /* teid length */
                
                LOG_PRINT(M_PARSE, LV_INFO, "==========ip: %lx %lx teid: %x\n", s1ap->rab_info.tip.ip.u64[0], 
                                                            s1ap->rab_info.tip.ip.u64[0],s1ap->rab_info.teid);
                break;
            default:
                break;
        }
    }
    
    return EN_S1AP_CODE_OK;
}


_U32 s1ap_decode_ERABSetup_IE(ST_BITPOINTER *pst_Bp, parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num = 0;
    _U32                       eNodeB_ue_s1_id = 0xffffffff;
    _U32                       mme_ue_s1_id = 0xffffffff;
    ST_BITPOINTER              p = {0};

    if ((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp); //获取拓展位
    if (extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    // get IE num
    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-S1AP_MIN_NUM_PROTOCOL_IES+S1AP_SIZE_GAP));
    
    ST_IE_COMMON                   ie_common = {0};
    _U32                            ret = EN_S1AP_CODE_OK;

    while (ie_num > 0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-S1AP_MIN_NUM_PROTOCOL_IES+S1AP_SIZE_GAP));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                mme_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-S1AP_MIN_MME_UE_S1AP_ID+S1AP_SIZE_GAP));
                s1ap->cn_id = mme_ue_s1_id & 0xFFFFFFFF;//max valid 32bit
                break;
                
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-S1AP_MIN_ENODEB_UE_S1AP_ID+S1AP_SIZE_GAP));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit 
                break;

            case EN_ID_UEAGGREGATEMAXIMUMBITRATE:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                pst_Bp->bytes += ie_common.ie_length;//偏移指针，跳到下一个ie
                pst_Bp->bits = 0;
                break;

            // E-RAB setup Request
            case EN_ID_E_RABTOBESETUPLISTBEARERSUREQ:
            case EN_ID_E_RABSETUPLISTBEARERSURES:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));

                /*进入ie解析*/
                p.bytes = pst_Bp->bytes;
                p.bits = pst_Bp->bits;
                p.end = pst_Bp->bytes + ie_common.ie_length - S1AP_SIZE_GAP;//该ie的最后一个字节
                s1ap_decode_E_RabSetUpListBearSU_IE(&p, s1ap);
                BP_ReadPad(pst_Bp);
                pst_Bp->bytes += ie_common.ie_length;//偏移指针，跳到下一个ie
                break;
                
            default:
                ie_num = 0;
                break;
        }
    }

    return ret;

}

/****************************************************************************
 函数名名称  : s1ap_decode_path_switch_req_IE
 函数功能    : S1AP解析s1ap_decode_path_switch_req_IE中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_path_switch_req_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       ret = EN_S1AP_CODE_OK;
    ST_IE_COMMON               ie_common = {0};
    ST_S1AP_IE_TAI             ie_TAI={0};
    ST_S1AP_IE_ECGI            ie_ecgi={0};

    if((NULL == s1ap) || NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));

    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                break;  
                
            case EN_ID_E_RABTOBESWITCHEDDLLIST:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                BP_ReadPad(pst_Bp);
                pst_Bp->bytes += ie_common.ie_length;
                break;

            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                s1ap->cn_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                //printf("KKKKKKKKKKs1ap->mme_ue_s1ap_id = %lu\n",s1ap->mme_ue_s1ap_id);
                break;

            case EN_ID_EUTRAN_CGI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_ecgi));
                ie_ecgi.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_ecgi.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);

                memcpy(&s1ap->ecgi.lte_plmn[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->ecgi.lte_cellid[0], pst_Bp->bytes, LTE_CELLID_MAX_LEN);//获取cell id
                (*(uint32_t *)&s1ap->ecgi.lte_cellid[0]) >>= 4;// cell id 28 bits, need to shift right 4 bits
                pst_Bp->bytes+=LTE_CELLID_MAX_LEN;
                s1ap->ecgi_exist = TRUE;   
                break;    
                
            case EN_ID_TAI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_TAI));
                ie_TAI.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_TAI.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                memcpy(&s1ap->tai[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->tai[3], pst_Bp->bytes, LTE_TAC_MAX_LEN);//获取TAC
                pst_Bp->bytes+=LTE_TAC_MAX_LEN;
                break;
                                
            default:
                ie_num = 0;
                break;    
        }
    }
    return ret;
}


/****************************************************************************
 函数名名称  : s1ap_decode_path_switch_req_IE
 函数功能    : S1AP解析s1ap_decode_path_switch_req_IE中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_path_switch_req_respone_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       ret = EN_S1AP_CODE_OK;
    ST_IE_COMMON               ie_common = {0};

    if((NULL == s1ap) || (NULL == pst_Bp))
    {
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));

    s1ap->is_enb_path_switch_suc = TRUE;
    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                s1ap->cn_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                break;
            
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                break;  

            case EN_ID_CAUSE:
                /*收到原因值时当做切换失败*/
                s1ap->is_enb_path_switch_suc = FALSE;
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                BP_ReadPad(pst_Bp);
                pst_Bp->bytes += ie_common.ie_length;
                break;    
                                
            default:
                ie_num = 0;
                break;    
        }
    }
    return ret;
}


/****************************************************************************
 函数名名称  : s1ap_decode_handover_notify_IE
 函数功能    : S1AP解析handover notify中的IE解码函数
 输入参数    : 比特操作的结构指针,需要填充的的S1AP指针
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_decode_handover_notify_IE(ST_BITPOINTER *pst_Bp,parse_s1ap_t *s1ap)
{
    _U8                        extbit = 0;   
    _U16                       ie_num=0;
    _U32                       eNodeB_ue_s1_id=0xffffffff;
    _U32                       ret = EN_S1AP_CODE_OK;
    ST_IE_COMMON               ie_common = {0};
    ST_S1AP_IE_TAI             ie_TAI={0};
    ST_S1AP_IE_ECGI            ie_ecgi={0};

    if((NULL == s1ap) || (NULL == pst_Bp))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    extbit = PER_DecodeBoolean(pst_Bp); //获取拓展位
    if (extbit)
    {
        return EN_S1AP_CODE_OK;  //有拓展位时不处理
    }

    ie_num = (_U16)PER_DecodeConstrainedWhole(pst_Bp,(S1AP_MAX_NUM_PROTOCOL_IES-0+1));

    while(ie_num>0)
    {
        ie_num--;
        ie_common.id = (_U16)PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_NUM_PROTOCOL_IES-0+1));
        switch ((int)(ie_common.id))
        {
            case EN_ID_MME_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                s1ap->cn_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_MME_UE_S1AP_ID-0+1));
                break;
            
            case EN_ID_ENB_UE_S1AP_ID:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_common));
                eNodeB_ue_s1_id = PER_DecodeConstrainedWhole(pst_Bp, (S1AP_MAX_ENODEB_UE_S1AP_ID-0+1));
                s1ap->access_node_id = eNodeB_ue_s1_id & 0xFFFFFF;//max valid 24bit
                break;  

            case EN_ID_EUTRAN_CGI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_ecgi));
                ie_ecgi.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_ecgi.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                memcpy(&s1ap->ecgi.lte_plmn[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->ecgi.lte_cellid[0], pst_Bp->bytes, LTE_CELLID_MAX_LEN);//获取cell id
                (*(uint32_t *)&s1ap->ecgi.lte_cellid[0]) >>= 4;// cell id 28 bits, need to shift right 4 bits
                pst_Bp->bytes+=LTE_CELLID_MAX_LEN;
                s1ap->ecgi_exist = TRUE;  
                break;    
                
            case EN_ID_TAI:
                S1AP_DECODE_IE_HEAD_NOID(pst_Bp, (&ie_TAI));
                ie_TAI.is_has_extension = PER_DecodeBoolean(pst_Bp);
                if(ie_TAI.is_has_extension)
                {
                    return EN_S1AP_CODE_OK;  //有拓展位时不处理
                }
                BP_ReadPad(pst_Bp);
                memcpy(&s1ap->tai[0], pst_Bp->bytes, LTE_PLMN_MAX_LEN);//获取PLMN
                pst_Bp->bytes+=LTE_PLMN_MAX_LEN;
                memcpy(&s1ap->tai[3], pst_Bp->bytes, LTE_TAC_MAX_LEN);//获取TAC
                pst_Bp->bytes+=LTE_TAC_MAX_LEN;
                break;
                
            default:
                ie_num = 0;
                break;
        }
    }

    return ret;

}


/****************************************************************************
 函数名名称  : s1ap_pdu_decode
 函数功能    : S1AP解码函数
 输入参数    : 比特操作的结构指针, 解析好的S1AP指针, 消息类型
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
_U32 s1ap_pdu_decode(ST_BITPOINTER *pst_Bp, PST_S1AP_EP pst_s1ap_ep,parse_s1ap_t *s1ap,ip_comm_t srcip,ip_comm_t dstip)

{
    ST_S1AP_EP_PDU             *pst_s1ap_ep_pdu = NULL;

    if((NULL == s1ap) || (NULL == pst_Bp) || (NULL == pst_s1ap_ep))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return EN_S1APERR_DECODE;
    }

    pst_s1ap_ep->bExtension = (_BOOL)PER_DecodeBoolean(pst_Bp);
    pst_s1ap_ep->ucID = (_U8)PER_DecodeConstrainedWhole(pst_Bp, LEN_S1AP_TRIGGER_MSG);
    LOG_PRINT(M_PARSE, LV_INFO, "pst_s1ap_ep->bExtension = %d, pst_s1ap_ep->ucID = %d \n",
            pst_s1ap_ep->bExtension, pst_s1ap_ep->ucID);
    if(!pst_s1ap_ep->bExtension)/*暂不解析有拓展的报文*/
    { 
        switch(pst_s1ap_ep->ucID)
        {
            case EN_S1AP_TRIGGER_INIT_MSG:
                break;  

            case EN_S1AP_TRIGGER_SUCC_OUT_COME:
                /*获取s1ap.UEContextReleaseComplete*/
                pst_s1ap_ep_pdu = (ST_S1AP_EP_PDU *)&pst_s1ap_ep->content;
    
                pst_s1ap_ep_pdu->ucProcedureCode = (_U8)s1ap_decode_constrained_whole(pst_Bp, 0, 255);
                switch(pst_s1ap_ep_pdu->ucProcedureCode)
                {
                    case id_InitialContextSetup:
                        LOG_PRINT(M_PARSE, LV_INFO, "Entry id_InitialContextSetupResponse\n");
                        s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
                        s1ap->direction = UP_LINK;
                        memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
                        memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t));
                        S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
                        s1ap_decode_initialContextSetupResp_IE(pst_Bp, s1ap);
                        return EN_S1AP_CODE_OK;

                    case id_UEContextRelease:
                        s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
                        s1ap->direction = UP_LINK;
                        memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
                        memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t)); 
                        S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
                        s1ap_decode_UEContextReleaseComplete_IE(pst_Bp, s1ap);/*解析IE*/
                        s1ap->nas.submit_flag = ENABLE;//所有的ueContxtReleaseComplete都转给core 2
                        hydra_stat_inc(stat_ue_context_release_complete);
                        return EN_S1AP_CODE_OK;
                    case id_PathSwitchRequest:
                        s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
                        s1ap->direction = DOWN_LINK;
                        memcpy(&(s1ap->access_node_ip), &dstip, sizeof(ip_comm_t));
                        memcpy(&(s1ap->cn_ip), &srcip, sizeof(ip_comm_t));  
                        S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
                        s1ap_decode_path_switch_req_respone_IE(pst_Bp, s1ap);/*解析IE*/
                        s1ap->nas.submit_flag = ENABLE;//所有的ueContxtReleaseComplete都转给core 2
                        return EN_S1AP_CODE_OK;
                    case id_E_RABSetup:
                        s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
                        s1ap->direction = UP_LINK;
                        memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
                        memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t));  
                        S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
                        s1ap_decode_ERABSetup_IE(pst_Bp, s1ap);/*解析IE*/
                        return EN_S1AP_CODE_OK;
                    default:
                        return EN_S1APERR_MSG_IGNORE;
                }
              

            /*S1AP关联不需要关注以下的消息类型*/    
            case EN_S1AP_TRIGGER_UNSUCC_OUT_COME:
            /*获取s1ap.UEContextReleaseComplete*/
                pst_s1ap_ep_pdu = (ST_S1AP_EP_PDU *)&pst_s1ap_ep->content;
    
                pst_s1ap_ep_pdu->ucProcedureCode = (_U8)s1ap_decode_constrained_whole(pst_Bp, 0, 255);

                switch(pst_s1ap_ep_pdu->ucProcedureCode)
                {
                    case id_PathSwitchRequest:
                        s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
                        s1ap->direction = DOWN_LINK;
                        memcpy(&(s1ap->access_node_ip), &dstip, sizeof(ip_comm_t));
                        memcpy(&(s1ap->cn_ip), &srcip, sizeof(ip_comm_t)); 
                        S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
                        s1ap_decode_path_switch_req_respone_IE(pst_Bp, s1ap);/*解析IE*/
                        s1ap->nas.submit_flag = ENABLE;//所有的ueContxtReleaseComplete都转给core 2
                        return EN_S1AP_CODE_OK;

                    default:
                        return EN_S1APERR_MSG_IGNORE;    
                }
            case EN_S1AP_TRIGGER_OUT_COME:
            default:
                return EN_S1APERR_MSG_IGNORE;
        }
    }
    else
    {
        return EN_S1APERR_MSG_IGNORE;
    }

    pst_s1ap_ep_pdu = (ST_S1AP_EP_PDU *)&pst_s1ap_ep->content;
    
    pst_s1ap_ep_pdu->ucProcedureCode = (_U8)s1ap_decode_constrained_whole(pst_Bp, 0, 255);
    s1ap->procecode = pst_s1ap_ep_pdu->ucProcedureCode;
    switch(pst_s1ap_ep_pdu->ucProcedureCode)
    {
        case id_initialUEMessage:
            s1ap->direction = UP_LINK;
            memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp,pst_s1ap_ep_pdu);/*解析消息头*/
            s1ap_decode_initialUeMsg_IE(pst_Bp,s1ap);/*解析IE*/
            break;     

        case id_uplinkNASTransport:
            s1ap->direction =  UP_LINK;
            memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);/*解析消息头*/
            s1ap_decode_uplink_nas_trans(pst_Bp, s1ap);/*解析IE*/
            break;   
            
        case id_downlinkNASTransport: 
            s1ap->direction =  DOWN_LINK;
            memcpy(&(s1ap->access_node_ip), &dstip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &srcip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);/*解析消息头*/
            s1ap_decode_downlink_nas_trans(pst_Bp, s1ap);/*解析IE*/
            break;
            
        case id_InitialContextSetup:
            s1ap->direction =  DOWN_LINK;
            memcpy(&(s1ap->access_node_ip), &dstip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &srcip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);/*解析消息头*/
            
            s1ap_decode_initialContextSetupReq_IE(pst_Bp, s1ap);/*解析IE*/
            break;

        case id_E_RABSetup:
            s1ap->direction =  DOWN_LINK;
            memcpy(&(s1ap->access_node_ip), &dstip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &srcip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);/*解析消息头*/
            s1ap_decode_ERABSetup_IE(pst_Bp, s1ap);/*解析IE*/

            
            s1ap_decode_initialContextSetupReq_IE(pst_Bp, s1ap);/*解析IE*/
            break;
        case id_PathSwitchRequest:    
            s1ap->direction = UP_LINK;
            memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);;/*解析消息头*/
            s1ap_decode_path_switch_req_IE(pst_Bp, s1ap);/*解析IE*/
            break;   

        case id_HandoverNotification:    
            s1ap->direction = UP_LINK;
            memcpy(&(s1ap->access_node_ip), &srcip, sizeof(ip_comm_t));
            memcpy(&(s1ap->cn_ip), &dstip, sizeof(ip_comm_t)); 
            S1AP_DECODE_MSG_HEAD_NOID(pst_Bp, pst_s1ap_ep_pdu);/*解析消息头*/
            s1ap_decode_handover_notify_IE(pst_Bp, s1ap);/*解析IE*/
            break;      
        default: 
            return EN_S1APERR_MSG_IGNORE;
    }    
    
    return EN_S1AP_CODE_OK;
}


/*---------------------------------------------------------------------------*/
#ifdef  __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
/*  函数实现部分结束                                                         */
/*---------------------------------------------------------------------------*/
