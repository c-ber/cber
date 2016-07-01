

#include "packet_entry.h"
#include "ranap_asn1_decode.h"

/****************************************************************************
 ����������  : ranap_DataPrint
 ��������    : ���յ�ַ��ӡһ�����ȵı���
 �������    : ����ָ�룬���ݳ���
 �������    : ��
 ����ֵ      : ʧ�ܳɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_DataPrint(uint8_t *pucData, uint16_t usDataLength)
{
    uint16_t                        usMaxByteNum = 0;
    char                            szOut[1024] = {0};
    char                            szTemp[36] = {0};
    int32_t                         i = 0;

    if( NULL == pucData)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    usMaxByteNum = 200;

    if(0 == usDataLength)
    {
        return MP_E_FAIL;
    }

    /* ��ӡ��Ϣ��Ԫ���ƣ���ӡ�Ļ�Ҫ���ֹ���Э�黹��˽��Э�� */
    sprintf(szOut, "\r\n%8sLEN=%3u,"," ",
                usDataLength);

    if(usDataLength < usMaxByteNum)
    {
         usMaxByteNum = usDataLength;
    }

    sprintf(szTemp, "[");
    strcat(szOut, szTemp);

    for(i = 0; i < usMaxByteNum; i++)
    {
        if(i%16 == 0 && i != 0)
        {
            sprintf(szTemp, "\r\n%16s[%02X ", " ", *(pucData+i));
        }
        else
        {
            sprintf(szTemp, "%02X ", *(pucData+i));
        }
        strcat(szOut, szTemp);
    }

    if(usMaxByteNum < 200)
    {
        sprintf(szTemp, "]");
    }
    else
    {
        sprintf(szTemp, "...]");
    }

    strcat(szOut, szTemp);
    LOG_PRINT(M_PARSE, LV_INFO, "%s\n", szOut);

    return MP_E_NONE;
}

/****************************************************************************
 ����������  : ranap_decode_ConsInteger
 ��������    : �����з�Χ������ֵ
 �������    : ���ز����Ľṹָ�룬���������޺�����
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
uint32_t ranap_decode_ConsInteger(ST_BITPOINTER *pst_Bp, uint32_t lower, uint32_t upper)
{
    uint32_t value       = 0; 
    uint32_t range_value = upper - lower + 1;

    if(NULL == pst_Bp)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    value = (uint32_t)PER_DecodeConstrainedWhole(pst_Bp, range_value) + lower;

    return value;
}

/****************************************************************************
 ����������  : parse_and_update_LAI
 ��������    : ����LAI,���洢
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : ��ȷ����0�����󷵻ش�����
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_LAI(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    uint8_t IEextbit = 0;
    mp_error_t ret   = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_and_update_LAI<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /* IE extension bit,����ʱ���ݲ����д��� */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_LAI_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "id_LAI has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /*����ȡlai��ֵ��Ҫ����*/
    BP_ReadPad(pst_Bp);       //IE extension bitռһλ�������7��bitΪ���λ��ֱ�Ӷ�������

    /*ȡ��lai��ֵ�洢,���ڲ�����mask����Ϊrac��ֵ��û��ȡ��*/
    if(pst_Bp->bytes+LAI_LEN-1 <= pst_Bp->end)  //�жϳ����Ƿ��㹻
    {
        memcpy(&pst_ranap->rai, pst_Bp->bytes, LAI_LEN);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_LAI_pkt_len_error);
        LOG_PRINT(M_PARSE, LV_ERROR, "id_LAI:packet length error!\n");
        return MP_E_INVALID_PACKET;
    }
    
    return ret;
}


/****************************************************************************
 ����������  : parse_and_update_LAI
 ��������    : ����RAC,���洢����mask��־λ
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : ��ȷ����0�����󷵻ش�����
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_RAC(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret   = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_and_update_RAC<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /*ȡ��rac��ֵ�洢,����mask*/
    if(pst_Bp->bytes+RAC_LEN-1 <= pst_Bp->end)  //�жϳ����Ƿ��㹻
    {
        memcpy(pst_ranap->rai.rac, pst_Bp->bytes, RAC_LEN); 
        pst_ranap->mask |= RANAP_IE_RAI_VALID ;
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_RAC_pkt_len_error);
        LOG_PRINT(M_PARSE, LV_ERROR, "id_RAC:packet length error!\n");
        return MP_E_INVALID_PACKET;
    }

    return ret;
}

/****************************************************************************
 ����������  : parse_id_NAS_PDU
 ��������    : ����nas-pdu,����nas�����
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : �ɹ���ʧ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_NAS_PDU(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    mp_error_t ret           = MP_E_NONE;
    uint32_t NASPDU_len      = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_NAS_PDU<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /*������nas pdu�ĳ���*/
    NASPDU_len = (uint32_t)PER_DecodeLengthDeterminant(pst_Bp);

    //(void)gmm_nas_parse(pst_Bp->bytes, NASPDU_len, pstIuPs_Info);
    return ret;
}

/****************************************************************************
 ����������  : parse_id_PermanentNAS_UE_ID
 ��������    : ������imsi,���洢����mask��־λ
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : �ɹ���ʧ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_PermanentNAS_UE_ID(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret   = 0;
    uint8_t extbit   = 0;
    uint8_t imsi_len = 0;

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_PermanentNAS_UE_ID<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_PerNASUEID_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "id_PermanentNAS_UE_ID has extbit");
        return MP_E_INVALID_PACKET;
    }

    /*����Я����imsiռ�����ֽ�*/
    imsi_len = ranap_decode_ConsInteger(pst_Bp, RANAP_IMSI_LEN_MIN, RANAP_IMSI_LEN_MAX);

    /*�ֽڶ��룬����Ķ��ǰ�λ��ƫ�Ƶģ����濽��imsi���ֽ�*/
    BP_ReadPad(pst_Bp);

    /*��imsi���������ñ�־λ*/
    if(pst_Bp->bytes+imsi_len-1 <= pst_Bp->end)  //�жϳ����Ƿ��㹻
    {
        memcpy((uint8_t *)pst_ranap->imsi, pst_Bp->bytes, imsi_len);
        pst_ranap->mask |= RANAP_IE_IMSI_VALID;
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_PerNASUEID_pktLenError);
        LOG_PRINT(M_PARSE, LV_ERROR, "id_PermanentNAS_UE_ID:packet length error!\n");
        return MP_E_INVALID_PACKET;
    }
    

    return ret;
    
}

/****************************************************************************
 ����������  : decode_and_update_transportLayerAddress
 ��������    : ��������gtp-ip������ֻ֧����ipv4
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : �ɹ���ʧ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t decode_and_update_transportLayerAddress(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret          = 0;
    uint8_t bit_len         = 0;
    uint8_t extbit          = 0;

    LOG_PRINT(M_PARSE, LV_INFO, 
            "--------->enter decode_and_update_transportLayerAddress<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }


    /*������չλ������չλ����ʱ������*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_transAddr_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "transportLayerAddress has extbit\n");
        return MP_E_INVALID_PACKET;
    }
    
    /*��ȡip��ռ��bitλ*/
    bit_len = ranap_decode_ConsInteger(pst_Bp, 
                    TRANSPORTLAYERADDRESS_LEN_MIN, TRANSPORTLAYERADDRESS_LEN_MAX);

    /*����ȡip��ֵ��Ҫ����*/
    BP_ReadPad(pst_Bp);

    /*��ȡip��ַ������mask*/
    if(IPV4_BIT_LEN == bit_len)             //ע��IPv4��ipv6
    {
        if(pst_Bp->bytes+IPV4_OCTET_LEN-1 <= pst_Bp->end)  //�жϳ����Ƿ��㹻
        {
            pst_ranap->transportMsg.gTP_ip.version = IP_V4;
            memcpy(&pst_ranap->transportMsg.gTP_ip.ip.v4, pst_Bp->bytes, IPV4_OCTET_LEN);
            pst_ranap->mask |= RANAP_IE_TRANS_GTPIP_VALID;
        }
        else
        {
            hydra_stat_inc(stat_business_ranap_pkts_transAddr_pktLenError);
            LOG_PRINT(M_PARSE, LV_ERROR, "transportLayerAddress:Packet len error!\n");
            return MP_E_INVALID_PACKET;
        }
        
    }
    else if(IPV6_BIT_LEN == bit_len)
    {
        if(pst_Bp->bytes+IPV6_OCTET_LEN-1 <= pst_Bp->end)  //�жϳ����Ƿ��㹻
        {
            pst_ranap->transportMsg.gTP_ip.version = IP_V6;
            memcpy(pst_ranap->transportMsg.gTP_ip.ip.v6, pst_Bp->bytes, IPV6_OCTET_LEN);
            pst_ranap->mask |= RANAP_IE_TRANS_GTPIP_VALID;
        }
        else
        {
            hydra_stat_inc(stat_business_ranap_pkts_transAddr_pktLenError);
            LOG_PRINT(M_PARSE, LV_ERROR, "transportLayerAddress:Packet len error!\n");
            return MP_E_INVALID_PACKET;
        }
        
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_transAddr_notIPv4orIPv6);
        LOG_PRINT(M_PARSE, LV_ERROR, "ip is not IPv4 or IPv6\n");
        return MP_E_INVALID_PACKET;
    }

    /*ָ����ƣ�����ip��ַ�ֶ�*/
    pst_Bp->bytes += (bit_len/CHAR_BITS);
    
    return ret;
}


/****************************************************************************
 ����������  : decode_and_update_iuTransportAssociation
 ��������    : ��������teid
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t decode_and_update_iuTransportAssociation(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                    = 0;
    uint8_t extbit                    = 0;
    uint8_t transportAssociation_type = 0;

    LOG_PRINT(M_PARSE, LV_INFO, 
                "--------->enter decode_and_update_transportLayerAddress<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /*������չλ������չλ����ʱ������*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_transAss_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "transportAssociation have extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /*��ȡtransportAssociation���ͣ�Ϊ��ʱ��gtp-teid*/
    transportAssociation_type = ranap_decode_ConsInteger(pst_Bp, 
                                    TRANSPORTASSOCIATION_MIN, TRANSPORTASSOCIATION_MAX);

    /*ָ����룬ǰ���ǰ�bit��teid�ǰ��ֽ�*/
    BP_Pad(pst_Bp);
    
    /*��ȡteid������mask*/
    if(!transportAssociation_type)     //transportAssociation_type = 0,��ʱΪteid
    {
        pst_ranap->transportMsg.gTP_id= *((uint32_t *)pst_Bp->bytes);
        pst_ranap->mask |= RANAP_IE_TRANS_GTPID_VALID;
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_transAss_not_teid);
        LOG_PRINT(M_PARSE, LV_INFO, "transportAssociation_type is not teid\n");
        return MP_E_INVALID_PACKET;
    }
    return ret;
}

/****************************************************************************
 ����������  : decode_and_update_bearID
 ��������    : ��������bearID
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : bearIdռ8��bit
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t decode_and_update_bearID(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret = 0;

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter decode_and_update_bearID<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /*��ȡbearID������mask*/
    pst_ranap->transportMsg.bear_id = BP_ReadBits(pst_Bp, BEARID_BIT_NUM);
    pst_ranap->mask |= RANAP_IE_TRANS_BEARID_VALID;

    return ret;
}

/****************************************************************************
 ����������  : parse_rabParameters
 ��������    : ����rabParameters
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : �����ĸ��ֶ�
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_rabParameters (ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret          = 0;
    uint8_t n               = 0;
    uint8_t extbit          = 0;
    uint8_t item_num        = 0;
    uint8_t IE_extbit       = 0;
    uint8_t GuaranteedBitRatePresent        = 0;
    uint8_t TransferDelayPresent            = 0;
    uint8_t TrafficHandlingPriorityPresent  = 0;
    uint8_t AorPriorityPresent              = 0;
    uint8_t SsDescriptorPresent             = 0;
    uint8_t RelocationRequirementpresent    = 0;
    uint8_t IEextPresent                    = 0;

    uint8_t sDU_ErrorRatioPresent                     = 0;
    uint8_t sDU_FormatInformationParametersPresent    = 0;
    uint8_t iE_ExtensionsPresent                      = 0;
    uint8_t subflowSDU_SizePresent                    = 0;
    uint8_t rAB_SubflowCombinationBitRatePresent      = 0;
    

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_rabParameters<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /*��չλ*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_rabPara_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "rabParameters has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /*��ѡ���־λ����ռһ�� bit����ȡʱָ��������Զ�ƫ��*/
    GuaranteedBitRatePresent       = (uint8_t)PER_DecodeBoolean(pst_Bp);
    TransferDelayPresent           = (uint8_t)PER_DecodeBoolean(pst_Bp);
    TrafficHandlingPriorityPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
    AorPriorityPresent             = (uint8_t)PER_DecodeBoolean(pst_Bp);
    SsDescriptorPresent            = (uint8_t)PER_DecodeBoolean(pst_Bp);
    RelocationRequirementpresent   = (uint8_t)PER_DecodeBoolean(pst_Bp);
    IEextPresent                   = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextPresent) //����չʱ�ݲ�����
    {
        hydra_stat_inc(stat_business_ranap_pkts_rabPara_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "rabParameters has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /*decode trafficClass����ѡ��*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_trafficClass_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "trafficClass has extbit\n");
        return MP_E_INVALID_PACKET;
    }
    BP_Increment(pst_Bp, TRAFFICCLASS_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    LOG_PRINT(M_PARSE, LV_INFO, "decode trafficClass\n");


    /* decode rAB_AsymmetryIndicator ����ѡ��*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_rABAsymmetry_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "rAB_AsymmetryIndicator has extbit\n");
        return MP_E_INVALID_PACKET;
    }
    BP_Increment(pst_Bp, RAB_ASYMMETRYINDICATOR_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    LOG_PRINT(M_PARSE, LV_INFO, "decode rAB_AsymmetryIndicator\n");


    /* decode maxBitrate ����ѡ��*/
    item_num = ranap_decode_ConsInteger(pst_Bp, 
                    MAXBITRATE_ITEM_NUM_MIN, MAXBITRATE_ITEM_NUM_MAX);
    while(item_num>0)  //���ǲ������ֵ�Ƕ��٣�����Ҫͨ�������ֵ��������ֶε�
    {
        item_num--;
        ranap_decode_ConsInteger(pst_Bp, 
                            MAXBITRATE_MIN, MAXBITRATE_MAX);
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode maxBitrate\n");
    

    /* decode guaranteedBitRate����ѡ�� */
    if(GuaranteedBitRatePresent)
    {
        item_num = ranap_decode_ConsInteger(pst_Bp, 
                      GUARANTEEDBITRATE_ITEM_NUM_MIN, GUARANTEEDBITRATE_ITEM_NUM_MAX);
        while(item_num>0)  //���ǲ��������ֵ�Ƕ��٣�����Ҫͨ�������ֵ��������ֶε�
        {
            item_num--;
            ranap_decode_ConsInteger(pst_Bp, 
                                GUARANTEEDBITRATE_MIN, GUARANTEEDBITRATE_MAX);
        }
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode guaranteedBitRate\n");
    

    /* decode deliveryOrder����ѡ�� */
    BP_Increment(pst_Bp, DELIVERYORDER_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    LOG_PRINT(M_PARSE, LV_INFO, "decode deliveryOrder \n");
    

    /* decode maxSDU_Size����ѡ�� */
    BP_ReadPad(pst_Bp);                   //�ֽڶ���
    BP_Increment(pst_Bp, MAXSDU_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    LOG_PRINT(M_PARSE, LV_INFO, "decode maxSDU_Size \n");
    

    /* decode sDU_Parameters����ѡ�� */
    item_num = ranap_decode_ConsInteger(pst_Bp, 
                  SDU_PARAMETERS_ITEM_NUM_MIN, SDU_PARAMETERS_ITEM_NUM_MAX);
    while(item_num>0)  //���ǲ������ֵ�Ƕ��٣�����Ҫͨ�������ֵ��������ֶε�
    {
        item_num--;
        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_sDU_Para_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "sDU_Parameters has extbit\n");
            return MP_E_INVALID_PACKET;
        }
        /*��ѡ���־λ����ռһ��bit*/
        sDU_ErrorRatioPresent                  = (uint8_t)PER_DecodeBoolean(pst_Bp);
        sDU_FormatInformationParametersPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
        iE_ExtensionsPresent                   = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(iE_ExtensionsPresent)
        {
            hydra_stat_inc(stat_business_ranap_pkts_sDU_Para_IEextbit);
            LOG_PRINT(M_PARSE, LV_INFO, "sDU_Parameters has IE extbit\n");
            return MP_E_INVALID_PACKET;
        }

        /*decode sDU_ErrorRatio����ѡ��*/
        if(sDU_ErrorRatioPresent)
        {
            IE_extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
            if(IE_extbit)
            {
                hydra_stat_inc(stat_business_ranap_pkts_sDU_ErrRatio_IEextbit);
                LOG_PRINT(M_PARSE, LV_INFO, "sDU_ErrorRatio has IE extbit\n");
                return MP_E_INVALID_PACKET;
            }
            BP_Increment(pst_Bp, SDU_ERRORRATIO_CONTENT_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
        }


        /* decode residualBitErrorRatio����ѡ�� */
        /*residualBitErrorRatio������sDU_ErrorRatioһ��*/
        IE_extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(IE_extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_residualBit_IEextbit);
            LOG_PRINT(M_PARSE, LV_INFO, "residualBitErrorRatio has IE extbit\n");
            return MP_E_INVALID_PACKET;
        }
        BP_Increment(pst_Bp, SDU_ERRORRATIO_CONTENT_BIT_LEN); //���ֲ����ĵ���Ϣֱ������


        /* decode deliveryOfErroneousSDU ����ѡ��*/
        BP_Increment(pst_Bp, DELIVERYOFERRONEOUSSDU_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
        

        /* decode sDU_FormatInformationParameters����ѡ�� */
        if(sDU_FormatInformationParametersPresent)
        {
            /*��ȡ��item������*/
            n = ranap_decode_ConsInteger(pst_Bp, 
                           FORMATIONINFORMATION_ITEM_MIN, FORMATIONINFORMATION_ITEM_MAX);
            while(n>0)
            {
                n--;
                /*extention bit*/
                extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
                if(extbit)
                {
                    hydra_stat_inc(stat_business_ranap_pkts_sDUFormatInfo_extbit);
                    LOG_PRINT(M_PARSE, LV_INFO, "sDU_FormatInformationParameters has extbit\n");
                    return MP_E_INVALID_PACKET;
                }

                /*��ѡ���־λ��ռһ��bit*/
                subflowSDU_SizePresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
                rAB_SubflowCombinationBitRatePresent =
                                         (uint8_t)PER_DecodeBoolean(pst_Bp);
                iE_ExtensionsPresent   = (uint8_t)PER_DecodeBoolean(pst_Bp);
                if(iE_ExtensionsPresent) //����չʱ����
                {
                    hydra_stat_inc(stat_business_ranap_pkts_sDUFormatInfo_IEextbit);
                    LOG_PRINT(M_PARSE, LV_INFO, "sDU_FormatInformationParameters has IE extbit\n");
                    return MP_E_INVALID_PACKET;
                }

                /*decode subflowSDU_Size,��ѡ��*/
                if(subflowSDU_SizePresent)
                {
                    BP_ReadPad(pst_Bp);  //�����ֽ�
                    BP_Increment(pst_Bp, SUBFLOWSDU_SIZE_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
                }

                /*decode rAB_SubflowCombinationBitRate,��ѡ��*/
                if(rAB_SubflowCombinationBitRatePresent)
                {
                    ranap_decode_ConsInteger(pst_Bp, BIT_RATE_MIN, BIT_RATE_MAX);
                }
            }   
        }
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode sDU_Parameters \n");
    

    /* decode transferDelay ����ѡ��*/
    if(TransferDelayPresent)
    {
        BP_ReadPad(pst_Bp);  //�����ֽ�
        BP_Increment(pst_Bp, TRANSFERDELAY_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode transferDelay \n");
    

    /* decode trafficHandlingPriority����ѡ�� */
    if(TrafficHandlingPriorityPresent)
    {
        BP_Increment(pst_Bp, TRAFFICHASNLINGPRIORITY_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode trafficHandlingPriority \n");

    
    /* decode allocationOrRetentionPriority����ѡ�� */
    if(AorPriorityPresent)
    {
        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_allocation_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "allocationOrRetentionPriority has extbit\n");
            return MP_E_INVALID_PACKET;
        }

        /*ѡ���־λ��ռһ��bit*/
        iE_ExtensionsPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(iE_ExtensionsPresent) //����չʱ����
        {
            hydra_stat_inc(stat_business_ranap_pkts_allocation_IEextbit);
            LOG_PRINT(M_PARSE, LV_INFO, "allocationOrRetentionPriority has IE extbit\n");
            return MP_E_INVALID_PACKET;
        }
        
        BP_Increment(pst_Bp, AORPRIORITY_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode allocationOrRetentionPriority \n");

    
    /* decode sourceStatisticsDescriptor����ѡ�� */
    if(SsDescriptorPresent)
    {
        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_sourceStatDesc_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "sourceStatisticsDescriptor has extbit\n");
            return MP_E_INVALID_PACKET;
        }

        BP_Increment(pst_Bp, SSDESCRIPTOR_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }
    LOG_PRINT(M_PARSE, LV_INFO, "decode sourceStatisticsDescriptor \n");

    
    /* decode relocationRequirement ����ѡ��*/
    if(RelocationRequirementpresent)
    {
        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_relocationReq_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "relocationRequirement has extbit\n");
            return MP_E_INVALID_PACKET;
        }

        BP_Increment(pst_Bp, RELOCAREQ_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }

    return ret;
}

/****************************************************************************
 ����������  : parse_RAB_SetupOrModifyItemFirst
 ��������    : ������ȡgtp-ip  gtp-teid
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_RAB_SetupOrModifyItemFirst(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                      = 0;
    uint8_t extbit                      = 0;
    uint8_t nasSyncIndicatorPresent     = 0;
    uint8_t rabParametersPresent        = 0;
    uint8_t usePlaneInfoPresent         = 0;
    uint8_t transportLayerInfoPresent   = 0;
    uint8_t serviceHandoverPresent      = 0;
    uint8_t IEextPresent                = 0;

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_RAB_SetupOrModifyItemFirst<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /*��չλ*/
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABModifyItF_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RAB_SetupOrModifyItemFirst has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /*��ѡ���־λ����ռһ�� bit����ȡʱָ��������Զ�ƫ��*/
    nasSyncIndicatorPresent   = (uint8_t)PER_DecodeBoolean(pst_Bp);
    rabParametersPresent      = (uint8_t)PER_DecodeBoolean(pst_Bp);
    usePlaneInfoPresent       = (uint8_t)PER_DecodeBoolean(pst_Bp);
    transportLayerInfoPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
    serviceHandoverPresent    = (uint8_t)PER_DecodeBoolean(pst_Bp);
    IEextPresent              = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextPresent)         //����IE��չʱ�ݲ�����
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABModifyItF_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RAB_SetupOrModifyItemFirst has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    if(!transportLayerInfoPresent)//����Ҫȡ����Ϣ�ڸÿ�ѡ�����棬����ѡ�����ʱ����
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABModifyItFNOTransinfo);
        LOG_PRINT(M_PARSE, LV_INFO, "RAB_SetupOrModifyItemFirst don't have transportLayerInfoPresent\n");
        return MP_E_INVALID_PACKET;
    }
    
    /*decode and update bearID����ѡ��*/
    RANAP_ERR_RET(decode_and_update_bearID(pst_Bp, pst_ranap));
    LOG_PRINT(M_PARSE, LV_INFO, "bearID = %d\n", pst_ranap->transportMsg.bear_id);
    
    /*parse nasSyncIndicator����ѡ��*/
    if(nasSyncIndicatorPresent)
    {
        BP_Increment(pst_Bp, NASSYNCINDICATOR_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
    }

    /* decode rAB_Parameters����ѡ�� */
    if(rabParametersPresent)
    {
        LOG_PRINT(M_PARSE, LV_INFO, "decode rAB_Parameters\n");
        RANAP_ERR_RET(parse_rabParameters(pst_Bp, pst_ranap));
    }

    /* decode userPlaneInformation ��ѡ��*/
    if(usePlaneInfoPresent)
    {
        LOG_PRINT(M_PARSE, LV_INFO, "decode userPlaneInformation\n");

        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_RABuserPlaneInfo_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "userPlaneInformation has extbit\n");
            return MP_E_INVALID_PACKET;
        }
        
        IEextPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(IEextPresent)
        {
            hydra_stat_inc(stat_business_ranap_pkts_RABuserPlaneInfo_IEextbit);
            LOG_PRINT(M_PARSE, LV_INFO, "userPlaneInformation has IE extbit\n");
            return MP_E_INVALID_PACKET;
        }

        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_RABuserPlaneMode_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "userPlaneMode has extbit\n");
            return MP_E_INVALID_PACKET;
        }
        BP_Increment(pst_Bp, USERPLANEMODE_BIT_LEN); //���ֲ����ĵ���Ϣֱ������


        BP_Increment(pst_Bp, UP_MODEVERSION_BIT_LEN); //���ֲ����ĵ���Ϣֱ������
        
    }
    
    
    /* decode transportLayerInformation ����ѡ��*/
    if(transportLayerInfoPresent)
    {
        LOG_PRINT(M_PARSE, LV_INFO, "decode transportLayerInformation\n");

        /*extention bit*/
        extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(extbit)
        {
            hydra_stat_inc(stat_business_ranap_pkts_RABtransInfo_extbit);
            LOG_PRINT(M_PARSE, LV_INFO, "transportLayerInformation has extbit\n");
            return MP_E_INVALID_PACKET;
        }
        
        IEextPresent = (uint8_t)PER_DecodeBoolean(pst_Bp);
        if(IEextPresent)   //����IE��չʱ�����ز�����
        {
            hydra_stat_inc(stat_business_ranap_pkts_RABtransInfo_IEextbit);
            LOG_PRINT(M_PARSE, LV_INFO, "transportLayerInformation has IE extbit\n");
            return MP_E_INVALID_PACKET;
        }


        /*decode and update gtp ip*/
        LOG_PRINT(M_PARSE, LV_INFO, "decode and update gtp ip\n");
        RANAP_ERR_RET(decode_and_update_transportLayerAddress(pst_Bp, pst_ranap));
        //LOG_PRINT(M_PARSE, LV_INFO, "gtp ip = %d\n", pst_ranap->transportMsg.gTP_ip);
        

        /*decode and update gtp teid*/
        LOG_PRINT(M_PARSE, LV_INFO, "decode and update gtp teid\n");
        RANAP_ERR_RET(decode_and_update_iuTransportAssociation(pst_Bp, pst_ranap));
        LOG_PRINT(M_PARSE, LV_INFO, "gtp teid = %d\n", pst_ranap->transportMsg.gTP_id);
    }

    /* decode service_Handover ����ѡ��*/
    if(serviceHandoverPresent) //��Ҫ����Ϣ�Ѿ���ȡ���ˣ����治������
    {
        ;
    }

    return ret;
}

/****************************************************************************
 ����������  : parse_id_RAB_SetupOrModifyItem
 ��������    : ����id_RAB_SetupOrModifyItem
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : �ɹ���ʧ��
 ��ע        : ��Ҫ�������ֶΣ�firstvalue��secondvalue �����ǹ���firstvalue
               ������0-65535��item��Ŀǰֻ�����һ��
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_RAB_SetupOrModifyItem(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                          = 0;
    uint16_t ie_num                         = 0;
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd   = {0};
    ST_BITPOINTER st_Bp_value               = {0};
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_RAB_SetupOrModifyItem<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
 
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                    RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);

    if(ie_num > 1) //Ŀǰ����ֻ��ȡһ���gtp-ip��teid
    {
        hydra_stat_inc(stat_business_ranap_pkts_SetOrModifyItem_more);
        LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifyItem Item_num more than 1\n");
        return MP_E_INVALID_PACKET;
    }
    
    while(ie_num > 0)
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);

        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        /*������һ��IEͷ*/
        pst_Bp->bytes += st_IE_Common_hd.value_lenth;

        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_RAB_SetupOrModifyItem:
                RANAP_ERR_RET(parse_RAB_SetupOrModifyItemFirst(&st_Bp_value, pst_ranap));
                break;
                
            default:
                break;
        }
        
    }

    return ret;
}

/****************************************************************************
 ����������  : parse_id_RAB_SetupOrModifyList
 ��������    : ����id_RAB_SetupOrModifyList
 �������    : ���ز����Ľṹָ�룬����ƽ�����ṹ��ָ��
 �������    : ��
 ����ֵ      : �ɹ���ʧ��
 ��ע        : ���ܺ���1-256��id_RAB_SetupOrModifyItem,Ŀǰֻ����ͷһ��
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_RAB_SetupOrModifyList(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                         = 0;
    uint16_t item_num                      = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_RAB_SetupOrModifyList<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /*��ȡitem����������ΧΪ1-255*/
    item_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                    RAB_SETORMODLIST_IE_NUM_MIN, RAB_SETORMODLIST_IE_NUM_MAX);
    LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifyList item_num=%d\n",item_num);

    if(item_num > 1)    //����ֻ֧��ȡһ�� gtp-ip��teid
    {
        hydra_stat_inc(stat_business_ranap_pkts_SetOrModifyList_more);
        LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifyList Item_num more than 1\n");
        return MP_E_INVALID_PACKET;
    }

    while(item_num > 0)
    {
        item_num--;
        RANAP_ERR_RET(parse_id_RAB_SetupOrModifyItem(pst_Bp, pst_ranap));
    }

    return ret;
}


/****************************************************************************
 ����������  : parse_id_RAB_SetupOrModifiedItem
 ��������    : ����id_RAB_SetupOrModifiedItem
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : ������0-65535��item��Ŀǰֻ�����һ��
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_RAB_SetupOrModifiedItem(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                          = 0;
    uint32_t ie_num                         = 0;
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd   = {0};
    uint8_t extbit                          = 0;
    uint8_t transportLayerAddressPresent    = 0;
    uint8_t iuTransportAssociationPresent   = 0;
    uint8_t dl_dataVolumesPresent           = 0;
    uint8_t iE_ExtensionsPresent            = 0;
    ST_BITPOINTER st_Bp_value               = {0};
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_RAB_SetupOrModifiedItem<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    

    /*��ȡie����������ΧΪ0-65535*/
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                    RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);
    LOG_PRINT(M_PARSE, LV_INFO, "parse_id_RAB_SetupOrModifiedItem = %d\n", ie_num);

    if(ie_num > 1) //Ŀǰ����ֻ��ȡһ���gtp-ip��teid
    {
        hydra_stat_inc(stat_business_ranap_pkts_SetOrModifyItem_more);
        LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifiedItem Item_num more than 1\n");
        return MP_E_INVALID_PACKET;
    }
    
    while(ie_num>0)
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);
        
        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth; //�������IE

        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_RAB_SetupOrModifiedItem:
                /*������չλ������չλ����ʱ���ز�����*/
                extbit = (uint8_t)PER_DecodeBoolean(&st_Bp_value);
                if(extbit)
                {
                    hydra_stat_inc(stat_business_ranap_pkts_RABModifiedIt_extbit);
                    LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifiedItem has extbit\n");
                    return MP_E_INVALID_PACKET;
                }

                /*optional bit*/
                transportLayerAddressPresent = (uint8_t)PER_DecodeBoolean(&st_Bp_value);
                iuTransportAssociationPresent = (uint8_t)PER_DecodeBoolean(&st_Bp_value);
                dl_dataVolumesPresent = (uint8_t)PER_DecodeBoolean(&st_Bp_value);
                iE_ExtensionsPresent = (uint8_t)PER_DecodeBoolean(&st_Bp_value);
                if(iE_ExtensionsPresent) //��IE��չʱ������
                {
                    hydra_stat_inc(stat_business_ranap_pkts_RABModifiedIt_IEextbit);
                    LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifiedItem has IE extbit\n");
                    return MP_E_INVALID_PACKET;
                }

                /*������Ҫ��ȡ����Ϣ��������ѡ���У���������ʱ����*/
                if(!transportLayerAddressPresent || !iuTransportAssociationPresent)
                {
                    hydra_stat_inc(stat_business_ranap_pkts_RABModifiedItno_ip_teid);
                    LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifiedItem don't have transportLayerAddressPresent or transportLayerAddressPresent\n");
                    return MP_E_INVALID_PACKET;
                }
                LOG_PRINT(M_PARSE, LV_INFO, "decode and update bearID\n");
                
                /*decode and update bear ID*/
                RANAP_ERR_RET(decode_and_update_bearID(&st_Bp_value, pst_ranap));
                LOG_PRINT(M_PARSE, LV_INFO, "bearID = %d\n", pst_ranap->transportMsg.bear_id);
                
                /*decode and update gtp ip*/
                if(transportLayerAddressPresent)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "decode and update gtp IP\n");
                    RANAP_ERR_RET(decode_and_update_transportLayerAddress(
                                                        &st_Bp_value, pst_ranap));
                    //LOG_PRINT(M_PARSE, LV_INFO, "gtp ip = %d\n", pst_ranap->transportMsg.gTP_ip);
                }

                /*decode and update gtp teid*/ 
                if(iuTransportAssociationPresent)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "decode and update gtp teid\n");
                    RANAP_ERR_RET(decode_and_update_iuTransportAssociation(
                                                            &st_Bp_value, pst_ranap));
                    LOG_PRINT(M_PARSE, LV_INFO, "gtp teid = %d\n", pst_ranap->transportMsg.gTP_id);
                }

                /*decode dataVolumes*/ 
                if(dl_dataVolumesPresent) //����Ҫ��ȡ����Ϣ�Ѿ���ȡ�����ˣ����治���н�����
                {
                    ;
                }
                break;
                
            default:
                break;
        }
        
    }
    
    return ret;
}


/****************************************************************************
 ����������  : parse_id_RAB_SetupOrModifiedList
 ��������    : ����id_RAB_SetupOrModifiedList
 �������    : ���ز����Ľṹָ�룬�洢���ݵĽṹ��ָ��
 �������    : ��
 ����ֵ      : ����ֵ
 ��ע        : ���ܺ���1-256��id_RAB_SetupOrModifiedItem������Ŀǰ����ֻ����ͷһ��
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t parse_id_RAB_SetupOrModifiedList(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret         = 0;
    uint16_t item_num      = 0;
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter parse_id_RAB_SetupOrModifiedList<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /*��ȡitem����������ΧΪ1-255*/
    item_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                    RAB_SETORMODLIST_IE_NUM_MIN, RAB_SETORMODLIST_IE_NUM_MAX);

    if(item_num > 1)    //����ֻ֧��ȡһ�� gtp-ip��teid
    {
        hydra_stat_inc(stat_business_ranap_pkts_SetOrModifiedList_more);
        LOG_PRINT(M_PARSE, LV_INFO, "id_RAB_SetupOrModifiedList Item_num more than 1\n");
        return MP_E_INVALID_PACKET;
    }
    
    while(item_num>0)
    {
        item_num--;
        RANAP_ERR_RET(parse_id_RAB_SetupOrModifiedItem(pst_Bp, pst_ranap));
    }
    
    return ret;
}

/****************************************************************************
 ����������  : ranap_decode_initialUEMsg_IE
 ��������    : pdu��initiatingMsg�Ľ���
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_decode_initialUEMsg_IE(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    mp_error_t ret                        = 0;
    uint8_t extbit                        = 0;
    uint8_t IEextbit                      = 0;
    uint16_t ie_num                       = 0;
    uint8_t CNDomain                      = 0;
    ST_BITPOINTER st_Bp_value             = {0};
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd = {0};
    parse_ranap_t *pst_ranap              = NULL;
    uint8_t IE_M_1_EXIST                  = NO;  //��ѡIE���ڱ�־��NO�����ڣ�YES����
    uint8_t IE_M_2_EXIST                  = NO;  //��ĳ����ѡIE�����ڣ�Ϊ��Ч����
    uint8_t IE_M_3_EXIST                  = NO;  
    uint8_t IE_M_4_EXIST                  = NO;  
    uint8_t IE_M_5_EXIST                  = NO;  
    uint8_t IE_M_6_EXIST                  = NO; 
    uint8_t IE_M_7_EXIST                  = NO;  
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_decode_initialUEMsg_IE<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    pst_ranap = &pstIuPs_Info->ranap_info;

    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_initialUEMsg_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "initialUEMsg has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* optional bits */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit)         //��IE��ѡ����չ������
    {
        hydra_stat_inc(stat_business_ranap_pkts_initialUEMsg_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "initialUEMsg has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* IE number */
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                        RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);
    
    while((ie_num > 0) && (MP_E_NONE == ret))
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);

        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth;  //������һ��IE
        
        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_CN_DomainIndicator:  //����cn��ʶ���־������Ϊ1������Ϊps��ʱ����
                CNDomain = (uint8_t)ranap_decode_ConsInteger(&st_Bp_value, 
                                            RANAP_CNDomain_MIN, RANAP_CNDomain_MAX);    
                if(PS_DOMAIN != CNDomain)
                {
                    hydra_stat_inc(stat_business_ranap_pkts_not_PSdomain);
                    LOG_PRINT(M_PARSE, LV_INFO, "CNDomain is not PSDomain\n");
                    ret =  MP_E_INVALID_PACKET;
                }
                IE_M_1_EXIST = YES;
                break;
                
            case ranap_id_LAI:                 //����LAI���洢�����ǲ���mask���ȵ�rac�����洢֮������
                ret = parse_id_LAI(&st_Bp_value, pst_ranap);
                IE_M_2_EXIST = YES;
                break;
                
            case ranap_id_RAC:                 //����RAC���洢����mask��־λ
                ret = parse_id_RAC(&st_Bp_value, pst_ranap);
                //RAI_PRINTF(pst_ranap->rai.data);
                IE_M_3_EXIST = YES;
                break;
                
            case ranap_id_SAI:                 //����ע��IE
                IE_M_4_EXIST = YES;
                break;
                
            case ranap_id_NAS_PDU:             //����nas pdu
                ret = parse_id_NAS_PDU(&st_Bp_value, pstIuPs_Info);
                if(MP_E_NONE == ret)  //�ж�nas������Ƿ�ɹ����ɹ���IE��Ч
                {
                    IE_M_5_EXIST = YES;
                }
                break;
                
            case ranap_id_IuSigConId:          //����ע��IE
                IE_M_6_EXIST = YES;
                break;
                
            case ranap_id_GlobalRNC_ID:
                IE_M_7_EXIST = YES;
                break;
                
            default:
                ie_num = 0;                    //ʣ�µ�IE����ע
                break;
        }
    }

    /*���б�ѡIE������ʱ��Ϊ��Ч����*/
    if(IE_M_1_EXIST && IE_M_2_EXIST && IE_M_3_EXIST && IE_M_4_EXIST 
                    && IE_M_5_EXIST && IE_M_6_EXIST && IE_M_7_EXIST && (MP_E_NONE == ret))
    {
        pst_ranap->isPacketValid = YES;
        hydra_stat_inc(stat_business_ranap_pkts_InitialUEMsg);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_invalid_initialUEMsg);
        LOG_PRINT(M_PARSE, LV_INFO, "initialUEMsg don't have all IE that must exsit!\n");
        ret = MP_E_INVALID_PACKET;
    }
    
    return ret;

}

/****************************************************************************
 ����������  : ranap_decode_commonID_IE
 ��������    : ����commonID��IE
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_decode_commonID_IE(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                        = 0;
    uint8_t extbit                        = 0;
    uint8_t IEextbit                      = 0;
    uint16_t ie_num                       = 0;
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd = {0};
    ST_BITPOINTER st_Bp_value             = {0};
    uint8_t IE_M_1_EXIST                  = NO;  //��ѡIE���ڱ�־��NO�����ڣ�YES����
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_decode_commonID_IE<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }
    
    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_commonID_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "commonID has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* optional bits,����ʱ���ݲ����д��� */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit)   //����IE��չλʱ���ݲ�����
    {
        hydra_stat_inc(stat_business_ranap_pkts_commonID_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "commonID has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* IE number */
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                        RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);

    while((ie_num > 0) && (MP_E_NONE == ret))
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);

        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth;

        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_PermanentNAS_UE_ID:
                ret = parse_id_PermanentNAS_UE_ID(&st_Bp_value, pst_ranap);
                IE_M_1_EXIST = YES;
                break;
                
            default:
                ie_num = 0; //ʣ��Ĳ��ù���
                break;
        }
    }

    if(IE_M_1_EXIST && (MP_E_NONE == ret))
    {
        pst_ranap->isPacketValid = YES;
        hydra_stat_inc(stat_business_ranap_pkts_CommonID);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_invalid_commonID);
        LOG_PRINT(M_PARSE, LV_INFO, "CommonID don't have all IE that must exsit!\n");
        ret = MP_E_INVALID_PACKET;
    }
    
    return ret;
}

/****************************************************************************
 ����������  : ranap_decode_DirectedTransfer_IE
 ��������    : ����DirectedTransfer��IE
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_decode_DirectTransfer_IE(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    mp_error_t ret                        = 0;
    uint8_t extbit                        = 0;
    uint8_t IEextbit                      = 0;
    uint16_t ie_num                       = 0;
    parse_ranap_t *pst_ranap              = NULL;
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd = {0};
    ST_BITPOINTER st_Bp_value             = {0};
    uint8_t IE_M_1_EXIST                  = NO;  //��ѡIE���ڱ�־��NO�����ڣ�YES����

    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_decode_DirectTransfer_IE<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    pst_ranap = &pstIuPs_Info->ranap_info;

    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_DirectTransfer_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "DirectTransfer has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* optional bits,����ʱ���ݲ����д��� */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit)    //����IE��չλʱ������
    {
        hydra_stat_inc(stat_business_ranap_pkts_DirectTransfer_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "DirectTransfer has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* IE number */
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                        RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);

    while((ie_num > 0) && (MP_E_NONE == ret))
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);

        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth;
        
        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_NAS_PDU:
                ret = parse_id_NAS_PDU(&st_Bp_value, pstIuPs_Info);
                if(MP_E_NONE == ret)  //�ж�nas������Ƿ�ɹ����ɹ���IE��Ч
                {
                    IE_M_1_EXIST = YES;
                }
                break;
                
            case ranap_id_LAI:            //����LAI���洢�����ǲ���mask���ȵ�rac�����洢֮������
                ret = parse_id_LAI(&st_Bp_value, pst_ranap);
                break;
                
            case ranap_id_RAC:            //����RAC���洢����mask��־λ
                ret = parse_id_RAC(&st_Bp_value, pst_ranap);
                //RAI_PRINTF(pst_ranap->rai.data);
                break;
                
            default:
                ie_num = 0;
                break;
        }
    }

    if(IE_M_1_EXIST && (MP_E_NONE == ret))
    {
        pst_ranap->isPacketValid = YES;
        hydra_stat_inc(stat_business_ranap_pkts_DirectTransfer);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_invalid_DirectTransfer);
        LOG_PRINT(M_PARSE, LV_INFO, "DirectTransfer don't have all IE that must exist!\n");
        ret = MP_E_INVALID_PACKET;
    }
    return ret;
}

/****************************************************************************
 ����������  : ranap_decode_RABAssignmentRequest_IE
 ��������    : RABAssignmentRequest��IE����
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_decode_RABAssignmentRequest_IE(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                        = 0;
    uint8_t extbit                        = 0;
    uint8_t IEextbit                      = 0;
    uint16_t ie_num                       = 0;
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd = {0};
    ST_BITPOINTER st_Bp_value             = {0};
    uint8_t IE_M_1_EXIST                  = NO;  //���ǹ��ĵ�IE���ڱ�־��NO�����ڣ�YES����

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_decode_RABAssignmentRequest_IE<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABAssigReq_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentRequest has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* optional bits,����ʱ���ݲ����д��� */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit)                 //IE��չ����ʱ�������н���
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABAssigReq_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentRequest has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* IE number */
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                        RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);
    while((ie_num>0) && (MP_E_NONE == ret))
    {
        ie_num --;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);
        
        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth;
        
        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_RAB_SetupOrModifyList:
                ret = parse_id_RAB_SetupOrModifyList(&st_Bp_value, pst_ranap);
                IE_M_1_EXIST = YES;
                break;
                
            default:
                break;
        }
    }

    if(IE_M_1_EXIST && (MP_E_NONE == ret))
    {
        pst_ranap->isPacketValid = YES;
        hydra_stat_inc(stat_business_ranap_pkts_RabAssigmentReq);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_invalid_RABAssigReq);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentRequest don't have all IE that we cared!\n");
        ret = MP_E_INVALID_PACKET;
    }
    
    return ret;
}

/****************************************************************************
 ����������  : ranap_decode_RABAssignmentResponse_IE
 ��������    : RABAssignmentResponse��IE����
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_decode_RABAssignmentResponse_IE(ST_BITPOINTER *pst_Bp, parse_ranap_t *pst_ranap)
{
    mp_error_t ret                          = 0;
    uint8_t extbit                          = 0;
    uint8_t IEextbit                        = 0;
    uint16_t ie_num                         = 0;
    ST_BITPOINTER st_Bp_value               = {0};
    ST_RANAP_IE_COMMON_hd st_IE_Common_hd   = {0};
    uint8_t IE_M_1_EXIST                    = NO;  //���ǹ��ĵ�IE���ڱ�־��NO�����ڣ�YES����
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_decode_RABAssignmentRequest_IE<--------\n");

    if((NULL == pst_Bp) || (NULL == pst_ranap))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    /* extension bit,����ʱ���ݲ����д��� */
    extbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(extbit)
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABAssigRes_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentResponse has extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* optional bits */
    IEextbit = (uint8_t)PER_DecodeBoolean(pst_Bp);
    if(IEextbit) //�������IE��չλ�����أ��ֲ�����
    {
        hydra_stat_inc(stat_business_ranap_pkts_RABAssigRes_IEextbit);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentResponse has IE extbit\n");
        return MP_E_INVALID_PACKET;
    }

    /* IE number */
    ie_num = (uint16_t)ranap_decode_ConsInteger(pst_Bp, 
                        RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);

    while((ie_num > 0) && (MP_E_NONE == ret))
    {
        ie_num--;
        
        /*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
        PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd);

        st_Bp_value.bytes = pst_Bp->bytes;
        st_Bp_value.end = pst_Bp->bytes + st_IE_Common_hd.value_lenth - 1;
        st_Bp_value.bits = 0;

        pst_Bp->bytes += st_IE_Common_hd.value_lenth;

        switch(st_IE_Common_hd.IE_id)
        {
            case ranap_id_RAB_SetupOrModifiedList:
                ret = parse_id_RAB_SetupOrModifiedList(&st_Bp_value, pst_ranap);
                IE_M_1_EXIST = YES;
                break;
                
            default:
                break;
        }
    }

    if(IE_M_1_EXIST && (MP_E_NONE == ret))
    {
        pst_ranap->isPacketValid = YES;
        hydra_stat_inc(stat_business_ranap_pkts_RabAssigmentRes);
    }
    else
    {
        hydra_stat_inc(stat_business_ranap_pkts_invalid_RABAssigRes);
        LOG_PRINT(M_PARSE, LV_INFO, "RABAssignmentResponse don't have all IE that we cared!\n");
        ret = MP_E_INVALID_PACKET;
    }
    return ret;
}

/****************************************************************************
 ����������  : pdu_initiatingMsg_decode
 ��������    : pdu��initiatingMsg�Ľ���
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t pdu_initiatingMsg_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    parse_ranap_t *pst_ranap        = NULL;
    RANAP_INIT_MSG_HD_t st_head     = {0};
    mp_error_t ret                  = 0;
    ST_BITPOINTER st_Bp_value       = {0};
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter pdu_initiatingMsg_decode<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    pst_ranap = &pstIuPs_Info->ranap_info;

    /******����pdu��ͷ��******/
    PARSE_PDU_COMMON_HEAD(st_head, pst_Bp);

    /*�������value�����ݵĽṹ��*/
    st_Bp_value.bytes = pst_Bp->bytes;
    st_Bp_value.end = pst_Bp->bytes + st_head.value_lenth - 1;
    st_Bp_value.bits = 0;
    
    pst_Bp->bytes += st_head.value_lenth;
    
    /*********���ݲ�ͬ��procedureCode���벻ͬ��ģ�����IE******/
    /************�����Ϣ�������з���,procedureCOde******/
    switch(st_head.ucProcedureCode)
    {
        case ranap_id_InitialUE_Message:
            pstIuPs_Info->direction = UP;
            pst_ranap->procecode = ranap_id_InitialUE_Message;
            ret = ranap_decode_initialUEMsg_IE(&st_Bp_value, pstIuPs_Info);
            break;
            
        case ranap_id_Iu_Release: //����Ϣֻ�û�ȡ����Ϣ���;Ϳ����ˣ����ù���IE 
            pst_ranap->procecode = ranap_id_Iu_Release;
            pst_ranap->isPacketValid = YES;
            pstIuPs_Info->direction = DOWN;
            HYDRA_STAT_INC(stat_business_ranap_pkts_IuReleaseCommand);
            break;
            
        case ranap_id_CommonID:
            pst_ranap->procecode = ranap_id_CommonID;
            pstIuPs_Info->direction = DOWN;
            ret = ranap_decode_commonID_IE(&st_Bp_value, pst_ranap);
            break;
            
        case ranap_id_DirectTransfer:           //����Ϣ����������nas�����
            pst_ranap->procecode = ranap_id_DirectTransfer;
            ret = ranap_decode_DirectTransfer_IE(&st_Bp_value, pstIuPs_Info);
            break;
            
        case ranap_id_RAB_Assignment:
            pst_ranap->procecode = ranap_id_RAB_Assignment;
            pstIuPs_Info->direction = DOWN;
            ret = ranap_decode_RABAssignmentRequest_IE(&st_Bp_value, pst_ranap);
            break;
            
        default:
            hydra_stat_inc(stat_business_ranap_pkts_initiMsg_not_care);
            ret = MP_E_INVALID_PACKET;
            break;
    }
    return ret;
}

/****************************************************************************
 ����������  : pdu_successfulOutcome_decode
 ��������    : pdu��successfulOutcome�Ľ���
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t pdu_successfulOutcome_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    return MP_E_NONE;
}

/****************************************************************************
 ����������  : pdu_unsuccessfulOutcome_decode
 ��������    : pdu��unsuccessfulOutcome�Ľ���
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t pdu_unsuccessfulOutcome_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    return MP_E_NONE;
}

/****************************************************************************
 ����������  : pdu_outcome_decode
 ��������    : pdu��outcome�Ľ���
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t pdu_outcome_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    parse_ranap_t *pst_ranap    = NULL;
    RANAP_OUTCOME_HD_t head     = {0};
    mp_error_t ret              = 0;
    ST_BITPOINTER st_Bp_value   = {0};
    
    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter pdu_outcome_decode<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    pst_ranap = &pstIuPs_Info->ranap_info;
    
    
    /******1.����pdu��ͷ��******/
    PARSE_PDU_COMMON_HEAD(head, pst_Bp);

    st_Bp_value.bytes = pst_Bp->bytes;
    st_Bp_value.end = pst_Bp->bytes + head.value_lenth - 1;
    st_Bp_value.bits = 0;

    pst_Bp->bytes += head.value_lenth;
    /******2.���ݲ�ͬ��procedureCode���벻ͬ��ģ�����IE******/
    switch(head.ucProcedureCode)
    {
        case ranap_id_RAB_Assignment:
            pst_ranap->procecode = ranap_id_RAB_Assignment;
            pstIuPs_Info->direction = UP;
            ret = ranap_decode_RABAssignmentResponse_IE(&st_Bp_value, pst_ranap);
            break;
            
        default:
            hydra_stat_inc(stat_business_ranap_pkts_outcome_not_care);
            ret = MP_E_INVALID_PACKET;
            break;
    }
    return ret;
}

/****************************************************************************
 ����������  : ranap_pdu_decode
 ��������    : ranap��pdu����
 �������    : ���ز����Ľṹָ�룬������ṹ��ָ��
 �������    : ��
 ����ֵ      : ʧ�ܻ�ɹ�
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
mp_error_t ranap_pdu_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info)
{
    parse_ranap_t *pst_ranap   = NULL; 
    uint8_t       PDUcode      = 0;
    uint8_t       extension    = 0;
    mp_error_t    ret          = 0;

    LOG_PRINT(M_PARSE, LV_INFO, "--------->enter ranap_pdu_decode<--------\n");

    if((NULL == pst_Bp) || (NULL == pstIuPs_Info))
    {
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);
        return MP_NULL_POINT;
    }

    hydra_stat_inc(stat_business_ranap_pkts_all_packet);
    
    pst_ranap = &pstIuPs_Info->ranap_info;

    /*ranap�ṹ���ʼ������ֹĬ�ϵĲ�����������*/
    pst_ranap->isPacketValid = NO;
    pst_ranap->pduCode       = 0xff;
    pst_ranap->procecode     = 0xff;
    pst_ranap->mask          = 0;
    
    /************1.������չλ***********/
    extension = (uint8_t)PER_DecodeBoolean(pst_Bp);
    LOG_PRINT(M_PARSE, LV_INFO, "extension = %d\n", extension);
    if(extension)                               //����չʱ��������
    {
        hydra_stat_inc(stat_business_ranap_pkts_RANAPpdu_extbit);
        LOG_PRINT(M_PARSE, LV_INFO, "ranap_pdu has extbit\n");
        ret = MP_E_INVALID_PACKET;
        return ret;
    }
    
    /************2.����pducode***********/
    PDUcode = (uint8_t)ranap_decode_ConsInteger(pst_Bp, 
                            RANAP_TRIGGER_MSG_MIN, RANAP_TRIGGER_MSG_MAX);

    switch(PDUcode) 
    {
        case EN_RANAP_TRIGGER_INIT_MSG:          //initiatingMessage
            pst_ranap->pduCode = EN_RANAP_TRIGGER_INIT_MSG;
            ret = pdu_initiatingMsg_decode(pst_Bp, pstIuPs_Info);
            hydra_stat_inc(stat_business_ranap_pkts_initiating_packet);
            break;
            
        case EN_RANAP_TRIGGER_SUCC_OUT_COME:     //successfuleOutcome
            hydra_stat_inc(stat_business_ranap_pkts_succoutcome_packet);
            ret = MP_E_INVALID_PACKET;
            break;
            
        case EN_RANAP_TRIGGER_UNSUCC_OUT_COME:   //unsuccessfuleOutcome
            hydra_stat_inc(stat_business_ranap_pkts_unsuccoutcome_packet);
            ret = MP_E_INVALID_PACKET;
            break;
            
        case EN_RANAP_TRIGGER_OUT_COME:          //outcome
            pst_ranap->pduCode = EN_RANAP_TRIGGER_OUT_COME;
            ret = pdu_outcome_decode(pst_Bp, pstIuPs_Info);
            hydra_stat_inc(stat_business_ranap_pkts_outcome_packet);
            break;
            
        default:
            hydra_stat_inc(stat_business_ranap_pkts_Unknown_Packet);
            LOG_PRINT(M_PARSE, LV_ERROR, "Unknown Packet\n");
            ret = MP_E_INVALID_PACKET;
            break;
    }

    return ret;
}


