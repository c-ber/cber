/****************************************************************************** 

��Ȩ���У�C����2016-2031�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       encap.c
�����ʽ:     ASCII
����:         ruanxiangwei
����:         Sep 7, 2016
��ʷ:
    1.����    :Sep 7, 2016
      ����    :ruanxiangwie
      �޸�    :Created file
******************************************************************************/
#include "api_encap.h"

#ifdef SAVE_PKT_TO_FILE
#include "pcap.h"
#endif
static uint8_t g_pkt_data[MAX_PKT_LEN] = {0};     /*2048�ֽڵ�����洢������������ת��*/
static dpi_encap_ctr_t g_encap_ctr_t = {0};       /*���ķ�װ����*/
static acl_t g_acl_t = {0};                       /*����ת������*/
static uint32_t g_enable_member_bit_mask = 0;     /*��װ��Աʹ��λ����*/
static uint8_t g_encode_buf[ENCODE_BUF_LEN] = {0};/*payload���ݱ�����ʱ�洢*/


/****************************************************************************
 ����������  : pkt_encap_v4udp_hdr_fill
 ��������    : ��������������ö�����ͷ���������
 �������    : pPktData-------Ŀ�������׵�ַ
               PktDataLen-----Ŀ��������Ч����
               pEncapCtr_t----������ݵ�����
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_encap_v4udp_hdr_fill(uint8_t *pPktData, uint16_t PktDataLen, dpi_encap_ctr_t *pEncapCtr_t)
{
    dpi_code_t ret                          = DPI_OK;
    dpi_encap_v4Udp_hdr_t *pHdr_t           = NULL;

    if((NULL == pEncapCtr_t) || (NULL == pPktData))
    {
        return DPI_NULL_POINT;
    }

    if(PktDataLen < sizeof(dpi_encap_v4Udp_hdr_t))
    {
        return DPI_SPACE_NOT_ENOUGH;
    }
    
    pHdr_t = (dpi_encap_v4Udp_hdr_t *)pPktData;

    memcpy(&pHdr_t->eth, &pEncapCtr_t->eth, sizeof(pHdr_t->eth));
    memcpy(&pHdr_t->vlan, &pEncapCtr_t->vlan, sizeof(pHdr_t->vlan));
    memcpy(&pHdr_t->ipv4, &pEncapCtr_t->ipv4, sizeof(pHdr_t->ipv4));
    memcpy(&pHdr_t->udp, &pEncapCtr_t->udp, sizeof(pHdr_t->udp));

    pHdr_t->payhdr.encodeType = pEncapCtr_t->encodeType;
    
    return ret;
}


/****************************************************************************
 ����������  : pkt_encap_hdr_fill
 ��������    : ��������������õķ�װ����ѡ����Ӧ�������з�װ
 �������    : pPktData-------Ŀ�������׵�ַ
               PktDataLen-----Ŀ��������Ч����
               pEncapCtr_t----������ݵ�����
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_encap_hdr_fill(uint8_t *pPktData, uint16_t PktDataLen, dpi_encap_ctr_t *pEncapCtr_t)
{
    dpi_code_t ret                   = DPI_OK;

    if((NULL == pEncapCtr_t) || (NULL == pPktData))
    {
        return DPI_NULL_POINT;
    }
    
    switch(pEncapCtr_t->encapType)
    {
        case ENCAP_V4_UDP:
            ret = pkt_encap_v4udp_hdr_fill(pPktData, PktDataLen, pEncapCtr_t);
            break;

        default:
            ret = DPI_UNSUPPORT;
            break;
    }

    return ret;    
}

/****************************************************************************
 ����������  : identity_result_transmit
 ��������    : ���������ݺͱ�ͷ��ɱ��Ĳ�����
 �������    : rlt----------------dpi������ʶ����
               pResultData--------��������ͷ��ַ
               MaxResultDataLen---֧�ֵ�������ݳ���
               pResultDataLen-----�������ݳ��ȵ�ַ
               DataEnableMask-----Я������ʹ�ܱ�־
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_encode_identity_result_tlv(dpi_result_t *rlt, 
                                               uint8_t *pResultData, 
                                               uint32_t MaxResultDataLen, 
                                               uint32_t *pResultDataLen,
                                               uint32_t DataEnableMask)
{
    dpi_code_t ret              = DPI_OK;
    uint16_t TlvLen             = 0;
    uint32_t offset             = 0;

    if((NULL == rlt) || (NULL == pResultData) || (NULL == pResultDataLen))
    {
        return DPI_NULL_POINT;
    }

    /*���Ӧ��ID�Ƿ�Ϸ�*/
    if(0 == rlt->app_id)
    {
        return DPI_FAIL;
    }

    /*1:��ȡ�����ܳ���*/
    if(0 != rlt->user_ip)
    {
        TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_USER_IP,   sizeof(rlt->user_ip), TlvLen);   /*�û�IP*/
    }
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_ID,        sizeof(rlt->app_id),  TlvLen); /*Ӧ��ID*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_NAME,      rlt->app_name_len,    TlvLen); /*Ӧ������*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_ACT,       rlt->action_name_len, TlvLen); /*Ӧ����Ϊ����*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_AUDIT_ACCOUNT, rlt->account_len,     TlvLen); /*����ʺ�*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_AUDIT_CONTENT, rlt->content_len,     TlvLen); /*�������*/
    printf("sizeof(tlvhdr_t)=%ld\n",sizeof(tlvhdr_t));

    /*2:������ݳ����Ƿ񳬹���󳤶�*/
    if(TlvLen > MaxResultDataLen)
    {
        printf("TLV encode data len is too long(len[%d] > max_len[%d]!\n", TlvLen, MaxResultDataLen);
        return DPI_SPACE_NOT_ENOUGH;
    }

    /*3:tlv��ʽ��� */
    TLV_DATE_INT_32_SET(DataEnableMask, ENCODE_APP_ID,        sizeof(rlt->app_id),  rlt->app_id);   /*Ӧ��ID*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_APP_NAME,      rlt->app_name_len,    rlt->app_name);    /*Ӧ������*/
    if(rlt->user_ip != 0 )
    {
        TLV_DATE_INT_32_SET(DataEnableMask, ENCODE_USER_IP,   sizeof(rlt->user_ip), rlt->user_ip);  /*�û�IP*/
    } 
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_APP_ACT,       rlt->action_name_len, rlt->action_name); /*Ӧ����Ϊ����*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_AUDIT_ACCOUNT, rlt->account_len,     rlt->account);     /*����ʺ�*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_AUDIT_CONTENT, rlt->content_len,     rlt->content);     /*�������*/

    /*4:���ƫ�ƺͷ���ռ��Ƿ����,����򷵻�����������ݳ���*/
    if(offset != TlvLen)
    {
        return DPI_FAIL;
    }

    *pResultDataLen = TlvLen;
    
    printf("packet ok \n");
    return ret;
}


/****************************************************************************
 ����������  : identity_result_transmit
 ��������    : ���������ݺͱ�ͷ��ɱ��Ĳ�����
 �������    : rlt----------------dpi������ʶ����
               pResultData--------��������ͷ��ַ
               MaxResultDataLen---���֧�ֵ����ݳ���
               ResultDataLen------�������ݳ���
               encodeType---------���뷽ʽ
               DataEnableMask-----Я������ʹ�ܱ�־
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_encode_identity_result(dpi_result_t *rlt, 
                                           uint8_t *pResultData, 
                                           uint32_t MaxResultDataLen,
                                           uint32_t *pResultDataLen, 
                                           DPI_DATA_ENCODE_TYPE_E encodeType,
                                           uint32_t DataEnableMask)
{
    dpi_code_t ret                   = DPI_OK;

    if((NULL == rlt) || (NULL == pResultData) || (NULL == pResultDataLen))
    {
        return DPI_NULL_POINT;
    }

    switch(encodeType)
    {
        case ENCODE_TLV:
            ret = pkt_encode_identity_result_tlv(rlt, pResultData, MaxResultDataLen, pResultDataLen, DataEnableMask);
            break;

        default:
            ret = DPI_UNSUPPORT;
            break;
    }

    return ret;
}

int xmit()
{
    printf("xmit packet ok!\n");
    return 0;
}


/****************************************************************************
 ����������  : identity_result_transmit
 ��������    : ���������ݺͱ�ͷ��ɱ��Ĳ�����
 �������    : pPktData----------Ŀ�������׵�ַ������ͷ
               pResultData-------��������ͷ
               ResultDataLen-----�������ݳ���
               pEncapCtr_t-------������ݵ�����
               pAcl--------------ת������
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t identity_result_transmit(uint8_t * pPktData, uint8_t *pResultData, 
                                        uint32_t ResultDataLen, dpi_encap_ctr_t *pEncapCtr_t, acl_t *pAcl)
{
    dpi_code_t ret                  = DPI_OK;
    uint32_t ResultOff              = 0;    /*��pResultDataΪ�׵�ַ*/
    uint8_t syn                     = 0;    /*���ڷ�Ƭ*/
    uint8_t max_syn                 = 0;    /*����Ƭ����*/
    uint32_t payLoad_off            = 0;    /*payloadͷƫ��*/
    payload_hdr_t *pPayload         = NULL; /*ָ��payloadͷ*/
    uint32_t SendDataLen            = 0;    /*һ�η��͵����ݳ���*/
    uint8_t *pData                  = NULL; /*ָ��payload�������ݲ���*/
    uint32_t MaxDataLenPerPkt       = 0;    /*��ͷǰ�Ĳ��payload��ͷʣ���ܴ������ݵ���󳤶�*/
    uint16_t PktLen                 = 0;    /*ÿ�η��͵ı��ĳ���*/
    work_entry_st work              = {0};

    if((NULL == pAcl) || (NULL == pPktData) ||
          (NULL == pResultData) || (NULL == pEncapCtr_t))
    {
        return DPI_NULL_POINT;
    }

    if(0 == ResultDataLen)
    {
        printf("len of result data is 0!\n");
        return DPI_ERROR;
    }

    /*���ݱ������ͻ�ȡ��payload��ƫ��*/
    switch(pEncapCtr_t->encapType)
    {
        case ENCAP_V4_UDP:
            payLoad_off = V4UDP_HDR_LEN;
            pPayload = (payload_hdr_t *)(pPktData + payLoad_off);
            break;

        default:
            return DPI_UNSUPPORT;
            break;
    }

    /*����ĳ��ȼ�ȥǰ�Ĳ��payload��ͷ*/
    MaxDataLenPerPkt = MAX_PKT_LEN - payLoad_off - PAYLOAD_HDR_LEN;
    pData = pPktData + payLoad_off + PAYLOAD_HDR_LEN;

    /*��ȡ��Ҫ���η������*/
    max_syn = ResultDataLen/(MaxDataLenPerPkt+1) + 1;


    /*������ݺ�l3,l4��payloadʣ����Ҫ�����ֶβ�����*/
    do
    {
        /*������ݲ���*/
        memset(pData, 0, MaxDataLenPerPkt);
        SendDataLen = ((ResultDataLen-ResultOff)>MaxDataLenPerPkt ? MaxDataLenPerPkt:(ResultDataLen-ResultOff));
        memcpy(pData, pResultData+ResultOff, SendDataLen);
        ResultOff += SendDataLen;

        /*���payloadͷ*/
        memset(&pPayload->flagment, 0, sizeof(payload_flagment_t));
        if(0 == syn)
        {
            pPayload->flagment.fir = 1;
        }

        if(max_syn-1 == syn)
        {
            pPayload->flagment.fin = 1;
        }
        
        pPayload->flagment.syn = syn;

        /*���ǰ�Ĳ���Ҫ������ֶ�*/
        switch(pEncapCtr_t->encapType)
        {
            case ENCAP_V4_UDP:
                NETWORK_ORDER_UINT16(((v4Udp_hdr_t *)pPktData)->ipv4.tot_len
                                        , IPV4_HEAD_LEN+UDP_HEAD_LEN+PAYLOAD_HDR_LEN+SendDataLen);
                NETWORK_ORDER_UINT16(((v4Udp_hdr_t *)pPktData)->udp.len
                                        , UDP_HEAD_LEN+PAYLOAD_HDR_LEN+SendDataLen);
                PktLen = MAC_HEAD_LEN + VLAN_HEAD_LEN + IPV4_HEAD_LEN+UDP_HEAD_LEN+PAYLOAD_HDR_LEN+SendDataLen;
                work.tuple.v4.src_ip = pEncapCtr_t->ipv4.saddr;
                work.tuple.v4.dst_ip = pEncapCtr_t->ipv4.daddr;
                work.tuple.v4.dst_port = pEncapCtr_t->udp.dest;
                work.tuple.v4.src_port = pEncapCtr_t->udp.source;
                work.tuple.v4.protocol = PROTO_UDP;
                work.tuple.v4.iifgrp = 0;
                work.protocol = PROTO_IPV4;
                break;

            default:
                return DPI_UNSUPPORT;
                break;
        }

        /*���ͱ���*/
        ret = xmit();
        if(ret)
        {
            printf("transmit packet fail!\n");
            return ret;
        }
        
        work.action = pAcl->action;
        work.ptr = (void *)pPktData;
        work.len = PktLen;
        memcpy(work.oifgrp, pAcl->oifgrpId, sizeof(work.oifgrp));
        work.fwd_oifgrp_num = pAcl->oifcnt;
        work.iif = 0;
 
        dpi_xmit(&work);
        
#ifdef SAVE_PKT_TO_FILE
        char name[20] = {0};
        sprintf(name, "test_%d.pcap", syn);
        ret = pcap_package_write_to_file(pPktData, PktLen, name);
        if(ret)
        {
            printf("pcap package fail!\n");
            return ret;
        }
#endif      
        syn++;
    }while(syn < max_syn);

    return ret;
}


/****************************************************************************
 ����������  : packet_identity_result_process
 ��������    : ��������������õķ�װ����ѡ����Ӧ�������з�װ
 �������    : rlt-----dpi������ʶ����
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t dpi_identity_result_process(dpi_result_t * rlt)
{
    dpi_code_t ret                   = DPI_OK;
    acl_t *pAcl                      = NULL;
    uint8_t *pPktData                = NULL;
    uint8_t *pResultData             = NULL;
    uint32_t DataEnableMask          = 0;
    uint32_t ResultDataLen           = 0;
    uint32_t MaxResultDataLen        = 0;
    dpi_encap_ctr_t *pEncapCtr_t     = NULL;

    if(NULL == rlt)
    {
        return DPI_NULL_POINT;
    }

    pAcl = &g_acl_t;
    pPktData = g_pkt_data;
    pEncapCtr_t = &g_encap_ctr_t;
    pResultData = g_encode_buf;
    MaxResultDataLen = sizeof(g_encode_buf);
    DataEnableMask = g_enable_member_bit_mask;
    
    /*1:��ʶ�����ݽ��б���*/
    ret = pkt_encode_identity_result(rlt, pResultData, MaxResultDataLen, &ResultDataLen, pEncapCtr_t->encodeType, DataEnableMask);
    if(ret)
    {
        printf("encode identity result fail,ret[%d]\n", ret);
        return ret;
    }

    /*2:���ͣ��漰����Ƭ*/
    ret = identity_result_transmit(pPktData, pResultData, ResultDataLen, pEncapCtr_t, pAcl);
    if(ret)
    {
        printf("packet identity result transmit fail,ret[%d]\n", ret);
        return ret;
    }

    return ret;
}


/****************************************************************************
 ����������  : pkt_encap_control_init
 ��������    : ���ķ�װ���Ƴ�ʼ����������ʼ��ip�ȣ�����������䵽g_pkt_data
 �������    : ��
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_encap_control_init()
{
    dpi_code_t ret                 = DPI_OK;
    uint8_t *pPktData              = NULL;
    uint16_t PktDataLen            = 0;
    dpi_encap_ctr_t *pEncapCtr_t   = NULL;
    
    memset(&g_pkt_data, 0,sizeof(g_pkt_data));
    memset(&g_encap_ctr_t, 0,sizeof(g_encap_ctr_t));

    pEncapCtr_t = &g_encap_ctr_t;
    pPktData = g_pkt_data;
    PktDataLen = sizeof(g_pkt_data);
        
    /*1:��ʼ��g_encap_ctr_tΪĬ��ֵ,�����ķ�װ��������*/
    pEncapCtr_t->encapType  = ENCAP_V4_UDP;
    pEncapCtr_t->encodeType = ENCODE_TLV;

    /*mac��ʼ��*/
    MAC_SET(pEncapCtr_t->eth.h_dest, 0x00, 0x21, 0x45, 0x00, 0x01, 0x98);
    MAC_SET(pEncapCtr_t->eth.h_source, 0x00, 0x21, 0x45, 0x00, 0x01, 0x99);
    NETWORK_ORDER_UINT16(pEncapCtr_t->eth.h_proto, PROTO_VLAN);

    /*vlan��ʼ��*/
    NETWORK_ORDER_UINT16(pEncapCtr_t->vlan.h_vlan_encapsulated_proto, PROTO_IPV4);

    /*ipv4��ʼ��*/
    pEncapCtr_t->ipv4.version = 0x4;
    pEncapCtr_t->ipv4.ihl = 0x5;
    NETWORK_ORDER_UINT16(pEncapCtr_t->ipv4.id, 0xdcce);
    NETWORK_ORDER_UINT16(pEncapCtr_t->ipv4.frag_off, 0x4000);
    pEncapCtr_t->ipv4.ttl = 0xfe;
    pEncapCtr_t->ipv4.protocol = PROTO_UDP;
    NETWORK_ORDER_UINT32(pEncapCtr_t->ipv4.saddr, 0xc0a80564);/*192.168.5.100*/
    NETWORK_ORDER_UINT32(pEncapCtr_t->ipv4.daddr, 0xc0a80523);/*192.168.5.35*/

    /*UDP��ʼ��*/
    NETWORK_ORDER_UINT16(pEncapCtr_t->udp.dest, 8005);
    NETWORK_ORDER_UINT16(pEncapCtr_t->udp.source, 6001);

    /*����Ĭ���������g_pkt_data��ͷ*/
    ret = pkt_encap_hdr_fill(pPktData, PktDataLen, pEncapCtr_t);
    if(ret)
    {
        printf("packet encap header fill fail\n");
        return ret;
    }

    return ret;
}


/****************************************************************************
 ����������  : pkt_encap_control_init
 ��������    : ���ķ�װ���Ƴ�ʼ����������ʼ��ip�ȣ�����������䵽g_pkt_data
 �������    : ��
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t pkt_transmmit_init()
{
    dpi_code_t ret           = DPI_OK;

    memset(&g_acl_t, 0, sizeof(g_acl_t));

    g_acl_t.action = ACTION_FORWARD;
    g_acl_t.oifcnt = 4;
    g_acl_t.oifgrpId[0] = 1;
    g_acl_t.oifgrpId[1] = 2;
    g_acl_t.oifgrpId[2] = 3;
    g_acl_t.oifgrpId[3] = 4;

    return ret;
}

/****************************************************************************
 ����������  : data_enable_mask_init
 ��������    : Я������ʹ�������ʼ��
 �������    : ��
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t data_enable_mask_init()
{
    dpi_code_t ret           = DPI_OK;

    DATA_ENABLE_MASK_CLEAR(g_enable_member_bit_mask);

    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_APP_ID);
    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_APP_NAME);
    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_USER_IP);
    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_APP_ACT);
    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_AUDIT_ACCOUNT);
    DATA_ENABLE_MASK_ADD(g_enable_member_bit_mask, ENCODE_AUDIT_CONTENT);

    return ret;
}


/****************************************************************************
 ����������  : dpi_encap_init
 ��������    : DPIʶ����־ģ���ʼ��
 �������    : ��
 �������    : ��
 ����ֵ      : �����Ľ��
 ��ע        : 
 ��Ԫ���Լ�¼:
****************************************************************************/
dpi_code_t dpi_encap_init(void)
{
    dpi_code_t ret                 = DPI_OK;

    /*��־��װ���Ƴ�ʼ����������װ���ͣ����ݱ��뷽ʽ��*/
    ret = pkt_encap_control_init();
    if(ret)
    {
        printf("packet encap control init fail!\n");
        return ret;
    }

    /*��־����ת����ʼ��*/
    ret = pkt_transmmit_init();
    if(ret)
    {
        printf("packet encap control init fail!\n");
        return ret;
    }

    /*��־����Я��ʹ�ܳ�ʼ��*/
    ret = data_enable_mask_init();
    if(ret)
    {
        printf("data enable mask init fail!\n");
        return ret;
    }

    memset(&g_encode_buf, 0, sizeof(g_encode_buf));

    dpi_xmit_init();
    
    return ret;
}


