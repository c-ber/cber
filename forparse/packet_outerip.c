/******************************************************************************

 ��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾ 
 
 ****************************************************************************** 
  �ļ���       : packet_outerip4.c 
  �����ʽ     ��ASCII
  �汾         : Initial Draft 
  ����         : Jonathan
  ����         : 2015/9/6
  �ϴ��޸�     :  
  ����         : ����ipv4Э��
  �����б�     : 
  ��ʷ         : 
  1.����       : 2015/9/6
    ����       : Jonathan
    �޸�       : Created file 
 ******************************************************************************/ 




#include "packet_entry.h"


mp_error_t semp_outerip4_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    struct ip4_hdr *iphdr = NULL;
    uint16_t  iphdr_hlen = 0;// iphdr_len
    uint8_t protocol = 0;  /*outer ipv4��Э����*/
    uint32_t srcip = 0, dstip = 0; /*ԴĿ��ip*/

    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, IP_HD_LEN);
    PBUF_CUR_FORMAT(struct ip4_hdr *, iphdr, p);

    if (IPH_V(iphdr) != IPV4_VERSION)
    {
        LOG_PRINT(M_PARSE, LV_ERROR, "ip head version err: %d.\n", IPH_V(iphdr));
        HYDRA_STAT_INC(stat_ipv4_pkt_hd);
        return MP_E_FAIL;
    }

    /* obtain IP header length in number of 32-bit words */
    iphdr_hlen = IPH_HL(iphdr);

    /* calculate IP header length in bytes */
    iphdr_hlen *= 4;

    protocol = IPH_PROTO(iphdr);
    srcip    = IPH_SRCIP(iphdr);
    dstip    = IPH_DSTIP(iphdr);

    mpp->pktinfo.ip.srcip.ip.v4 = srcip;
    mpp->pktinfo.ip.dstip.ip.v4 = dstip;
    mpp->pktinfo.ip.srcip.version = IP_V4;
    mpp->pktinfo.ip.dstip.version = IP_V4;
    mpp->pktinfo.ip.protocol = protocol;
    mpp->pktinfo.version = IP_V4;
    
    mpp->tuple->v4.src_ip = srcip;
    mpp->tuple->v4.dst_ip = dstip;
    
    mpp->tuple->v.sip.ip.v4 = srcip;
    mpp->tuple->v.dip.ip.v4 = dstip;
    mpp->tuple->v.sip.version = IP_V4;
    mpp->tuple->v.dip.version = IP_V4;

    UPDATE_PBUF_OFFSET(p, iphdr_hlen);
    LOG_PRINT(M_PARSE, LV_INFO, "ip info: pro %d, len %d, sip %x, dip %x.\n",
                       protocol, iphdr_hlen, srcip, dstip);

    p->l4_first_addr = p->ptr_offset;
    p->l4_total_len  = htons(IPH_LEN(iphdr)) - (iphdr_hlen); /*ip���ĳ��� - ipͷ����= ip���ݳ���*/
    return semp_L4_parse(work, p, mpp, protocol, HEADER_OUTER);

}

mp_error_t semp_outerip6_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    struct ip6_hdr *iphdr = NULL;
    uint8_t protocol = 0;  /*outer ipv6��Э����*/
    uint64_t srcip[2] = {}, dstip[2] = {}; /*ԴĿ��ip*/

    MASTER_PARAM_CHECK(work, p, mpp);


    CHECK_PBUF_LEN(p, IPV6_HD_LEN);
    PBUF_CUR_FORMAT(struct ip6_hdr *, iphdr, p);

    PARSE_DEBUG_PRINT("%d \n", IPH_V6(iphdr));
    if (IPH_V6(iphdr) != IPV6_VERSION)
    {
        PARSE_DEBUG_PRINT("ip head version err: %d\n", IPH_V6(iphdr));
        HYDRA_STAT_INC(stat_ipv6_pkt_hd);
        return MP_E_FAIL;
    }

    protocol = iphdr->next_header;
    memcpy(srcip, (uint64_t *)iphdr->s_ip, IPV6_LEN);
    memcpy(dstip, (uint64_t *)iphdr->d_ip, IPV6_LEN);

    memcpy(mpp->pktinfo.ip.srcip.ip.v6, srcip, IPV6_LEN);
    memcpy(mpp->pktinfo.ip.dstip.ip.v6, dstip, IPV6_LEN);
    mpp->pktinfo.ip.protocol = protocol;
    mpp->pktinfo.ip.srcip.version = IP_V6;
    mpp->pktinfo.ip.dstip.version = IP_V6;
    mpp->pktinfo.version  = IP_V6;

    /*yzr ����ʶ��֮��ͳһ����Ԫ�鸳һ������ip+port+protocol*/
    memcpy(mpp->tuple->v.sip.ip.v6, srcip, IPV6_LEN);
    memcpy(mpp->tuple->v.dip.ip.v6, dstip, IPV6_LEN);
    mpp->tuple->v.sip.version = IP_V6;
    mpp->tuple->v.dip.version = IP_V6;



    UPDATE_PBUF_OFFSET(p, IPV6_HD_LEN);
    PARSE_DEBUG_PRINT("ip info: pro %d, sip %lx %lx, dip %lx %lx \n", 
                       protocol, srcip[0], srcip[1], dstip[0], dstip[1]);

    p->l4_first_addr   = p->ptr_offset;
    p->l4_total_len    = iphdr->pay_length; /*ipv6���غɳ���=L3������ֶγ��ص��ϲ�Э��(L4)�ĳ���*/

    return semp_L4_parse(work, p, mpp, protocol, HEADER_OUTER);

}

