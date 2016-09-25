/****************************************************************************** 

版权所有（C），2016-2031年，恒扬科技股份有限公司

******************************************************************************
文件名:       encap.c
编码格式:     ASCII
作者:         ruanxiangwei
创建:         Sep 7, 2016
历史:
    1.日期    :Sep 7, 2016
      作者    :ruanxiangwie
      修改    :Created file
******************************************************************************/
#include "api_encap.h"

#ifdef SAVE_PKT_TO_FILE
#include "pcap.h"
#endif
static uint8_t g_pkt_data[MAX_PKT_LEN] = {0};     /*2048字节的数组存储报文数据用于转发*/
static dpi_encap_ctr_t g_encap_ctr_t = {0};       /*报文封装控制*/
static acl_t g_acl_t = {0};                       /*报文转发动作*/
static uint32_t g_enable_member_bit_mask = 0;     /*封装成员使能位掩码*/
static uint8_t g_encode_buf[ENCODE_BUF_LEN] = {0};/*payload数据编码零时存储*/


/****************************************************************************
 函数名名称  : pkt_encap_v4udp_hdr_fill
 函数功能    : 根据填充数据配置对数据头部进行填充
 输入参数    : pPktData-------目的数据首地址
               PktDataLen-----目的数据有效长度
               pEncapCtr_t----填充数据的配置
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
 函数名名称  : pkt_encap_hdr_fill
 函数功能    : 根据填充数据配置的封装类型选择相应函数进行封装
 输入参数    : pPktData-------目的数据首地址
               PktDataLen-----目的数据有效长度
               pEncapCtr_t----填充数据的配置
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
 函数名名称  : identity_result_transmit
 函数功能    : 将编码数据和报头组成报文并发送
 输入参数    : rlt----------------dpi特征库识别结果
               pResultData--------编码数据头地址
               MaxResultDataLen---支持的最大数据长度
               pResultDataLen-----编码数据长度地址
               DataEnableMask-----携带数据使能标志
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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

    /*检查应用ID是否合法*/
    if(0 == rlt->app_id)
    {
        return DPI_FAIL;
    }

    /*1:获取数据总长度*/
    if(0 != rlt->user_ip)
    {
        TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_USER_IP,   sizeof(rlt->user_ip), TlvLen);   /*用户IP*/
    }
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_ID,        sizeof(rlt->app_id),  TlvLen); /*应用ID*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_NAME,      rlt->app_name_len,    TlvLen); /*应用名称*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_APP_ACT,       rlt->action_name_len, TlvLen); /*应用行为名称*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_AUDIT_ACCOUNT, rlt->account_len,     TlvLen); /*审计帐号*/
    TLV_DATA_LEN_ADD(DataEnableMask, ENCODE_AUDIT_CONTENT, rlt->content_len,     TlvLen); /*审计内容*/
    printf("sizeof(tlvhdr_t)=%ld\n",sizeof(tlvhdr_t));

    /*2:检查数据长度是否超过最大长度*/
    if(TlvLen > MaxResultDataLen)
    {
        printf("TLV encode data len is too long(len[%d] > max_len[%d]!\n", TlvLen, MaxResultDataLen);
        return DPI_SPACE_NOT_ENOUGH;
    }

    /*3:tlv格式封包 */
    TLV_DATE_INT_32_SET(DataEnableMask, ENCODE_APP_ID,        sizeof(rlt->app_id),  rlt->app_id);   /*应用ID*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_APP_NAME,      rlt->app_name_len,    rlt->app_name);    /*应用名称*/
    if(rlt->user_ip != 0 )
    {
        TLV_DATE_INT_32_SET(DataEnableMask, ENCODE_USER_IP,   sizeof(rlt->user_ip), rlt->user_ip);  /*用户IP*/
    } 
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_APP_ACT,       rlt->action_name_len, rlt->action_name); /*应用行为名称*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_AUDIT_ACCOUNT, rlt->account_len,     rlt->account);     /*审计帐号*/
    TLV_DATE_STRING_SET(DataEnableMask, ENCODE_AUDIT_CONTENT, rlt->content_len,     rlt->content);     /*审计内容*/

    /*4:检查偏移和分配空间是否相等,相等则返回数据填充数据长度*/
    if(offset != TlvLen)
    {
        return DPI_FAIL;
    }

    *pResultDataLen = TlvLen;
    
    printf("packet ok \n");
    return ret;
}


/****************************************************************************
 函数名名称  : identity_result_transmit
 函数功能    : 将编码数据和报头组成报文并发送
 输入参数    : rlt----------------dpi特征库识别结果
               pResultData--------编码数据头地址
               MaxResultDataLen---最大支持的数据长度
               ResultDataLen------编码数据长度
               encodeType---------编码方式
               DataEnableMask-----携带数据使能标志
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
 函数名名称  : identity_result_transmit
 函数功能    : 将编码数据和报头组成报文并发送
 输入参数    : pPktData----------目的数据首地址即报文头
               pResultData-------编码数据头
               ResultDataLen-----编码数据长度
               pEncapCtr_t-------填充数据的配置
               pAcl--------------转发动作
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
dpi_code_t identity_result_transmit(uint8_t * pPktData, uint8_t *pResultData, 
                                        uint32_t ResultDataLen, dpi_encap_ctr_t *pEncapCtr_t, acl_t *pAcl)
{
    dpi_code_t ret                  = DPI_OK;
    uint32_t ResultOff              = 0;    /*以pResultData为首地址*/
    uint8_t syn                     = 0;    /*用于分片*/
    uint8_t max_syn                 = 0;    /*最大分片计数*/
    uint32_t payLoad_off            = 0;    /*payload头偏移*/
    payload_hdr_t *pPayload         = NULL; /*指向payload头*/
    uint32_t SendDataLen            = 0;    /*一次发送的数据长度*/
    uint8_t *pData                  = NULL; /*指向payload层后的数据部分*/
    uint32_t MaxDataLenPerPkt       = 0;    /*出头前四层和payload的头剩余能传输数据的最大长度*/
    uint16_t PktLen                 = 0;    /*每次发送的报文长度*/
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

    /*根据编码类型获取到payload的偏移*/
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

    /*最大报文长度减去前四层和payload层头*/
    MaxDataLenPerPkt = MAX_PKT_LEN - payLoad_off - PAYLOAD_HDR_LEN;
    pData = pPktData + payLoad_off + PAYLOAD_HDR_LEN;

    /*获取需要几次发送完成*/
    max_syn = ResultDataLen/(MaxDataLenPerPkt+1) + 1;


    /*填充数据和l3,l4和payload剩余需要填充的字段并发送*/
    do
    {
        /*填充数据部分*/
        memset(pData, 0, MaxDataLenPerPkt);
        SendDataLen = ((ResultDataLen-ResultOff)>MaxDataLenPerPkt ? MaxDataLenPerPkt:(ResultDataLen-ResultOff));
        memcpy(pData, pResultData+ResultOff, SendDataLen);
        ResultOff += SendDataLen;

        /*填充payload头*/
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

        /*填充前四层需要回填的字段*/
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

        /*发送报文*/
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
 函数名名称  : packet_identity_result_process
 函数功能    : 根据填充数据配置的封装类型选择相应函数进行封装
 输入参数    : rlt-----dpi特征库识别结果
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
    
    /*1:对识别数据进行编码*/
    ret = pkt_encode_identity_result(rlt, pResultData, MaxResultDataLen, &ResultDataLen, pEncapCtr_t->encodeType, DataEnableMask);
    if(ret)
    {
        printf("encode identity result fail,ret[%d]\n", ret);
        return ret;
    }

    /*2:发送，涉及到分片*/
    ret = identity_result_transmit(pPktData, pResultData, ResultDataLen, pEncapCtr_t, pAcl);
    if(ret)
    {
        printf("packet identity result transmit fail,ret[%d]\n", ret);
        return ret;
    }

    return ret;
}


/****************************************************************************
 函数名名称  : pkt_encap_control_init
 函数功能    : 报文封装控制初始化，包括初始化ip等，并将数据填充到g_pkt_data
 输入参数    : 无
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
        
    /*1:初始化g_encap_ctr_t为默认值,即报文封装编码配置*/
    pEncapCtr_t->encapType  = ENCAP_V4_UDP;
    pEncapCtr_t->encodeType = ENCODE_TLV;

    /*mac初始化*/
    MAC_SET(pEncapCtr_t->eth.h_dest, 0x00, 0x21, 0x45, 0x00, 0x01, 0x98);
    MAC_SET(pEncapCtr_t->eth.h_source, 0x00, 0x21, 0x45, 0x00, 0x01, 0x99);
    NETWORK_ORDER_UINT16(pEncapCtr_t->eth.h_proto, PROTO_VLAN);

    /*vlan初始化*/
    NETWORK_ORDER_UINT16(pEncapCtr_t->vlan.h_vlan_encapsulated_proto, PROTO_IPV4);

    /*ipv4初始化*/
    pEncapCtr_t->ipv4.version = 0x4;
    pEncapCtr_t->ipv4.ihl = 0x5;
    NETWORK_ORDER_UINT16(pEncapCtr_t->ipv4.id, 0xdcce);
    NETWORK_ORDER_UINT16(pEncapCtr_t->ipv4.frag_off, 0x4000);
    pEncapCtr_t->ipv4.ttl = 0xfe;
    pEncapCtr_t->ipv4.protocol = PROTO_UDP;
    NETWORK_ORDER_UINT32(pEncapCtr_t->ipv4.saddr, 0xc0a80564);/*192.168.5.100*/
    NETWORK_ORDER_UINT32(pEncapCtr_t->ipv4.daddr, 0xc0a80523);/*192.168.5.35*/

    /*UDP初始化*/
    NETWORK_ORDER_UINT16(pEncapCtr_t->udp.dest, 8005);
    NETWORK_ORDER_UINT16(pEncapCtr_t->udp.source, 6001);

    /*根据默认配置填充g_pkt_data的头*/
    ret = pkt_encap_hdr_fill(pPktData, PktDataLen, pEncapCtr_t);
    if(ret)
    {
        printf("packet encap header fill fail\n");
        return ret;
    }

    return ret;
}


/****************************************************************************
 函数名名称  : pkt_encap_control_init
 函数功能    : 报文封装控制初始化，包括初始化ip等，并将数据填充到g_pkt_data
 输入参数    : 无
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
 函数名名称  : data_enable_mask_init
 函数功能    : 携带数据使能掩码初始化
 输入参数    : 无
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
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
 函数名名称  : dpi_encap_init
 函数功能    : DPI识别日志模块初始化
 输入参数    : 无
 输出参数    : 无
 返回值      : 操作的结果
 备注        : 
 单元测试记录:
****************************************************************************/
dpi_code_t dpi_encap_init(void)
{
    dpi_code_t ret                 = DPI_OK;

    /*日志封装控制初始化，包括封装类型，数据编码方式等*/
    ret = pkt_encap_control_init();
    if(ret)
    {
        printf("packet encap control init fail!\n");
        return ret;
    }

    /*日志报文转发初始化*/
    ret = pkt_transmmit_init();
    if(ret)
    {
        printf("packet encap control init fail!\n");
        return ret;
    }

    /*日志数据携带使能初始化*/
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


