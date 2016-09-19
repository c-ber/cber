
#include "packet_parse.h"

#define VLAN_TYPE_NUM       5//ʶ��5��vlan type
#define MPLS_TYPE_NUM       2//ʶ��2��mpls type


/*****************************************************************************
  ��������      : if_ethertype_mpls
  ����          : �ж϶���Э�������Ƿ���mpls
  ����          : 
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : Э���
  ���          : ��
  ����          : TRUE��mpls FALSE����mpls
  ����          : 
*****************************************************************************/
bool if_ethertype_mpls(uint16_t type)
{
    uint16_t vlan_type[MPLS_TYPE_NUM] = {0x8847,0x8848};
    uint16_t i = 0;
    for(i = 0;i<MPLS_TYPE_NUM;i++)
    {
        if(type == htons(vlan_type[i]))
        {
            return true;
        }
    }
    return false;
    
}

/*****************************************************************************
  ��������      : if_ethertype_vlan
  ����          : �ж϶���Э�������Ƿ���vlan
  ����          : 
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : Э���
  ���          : ��
  ����          : TRUE��VLAN FALSE����vlan
  ����          : 
*****************************************************************************/
bool if_ethertype_vlan(uint16_t type)
{
    uint16_t vlan_type[VLAN_TYPE_NUM] = {0x8100,0x88a8,0x9100,0x9200,0x9300};
    uint16_t i = 0;
    for(i = 0;i<VLAN_TYPE_NUM;i++)
    {
        if(type == htons(vlan_type[i]))
        {
            return true;
        }
    }
    return false;
    
}


dpi_code_t semp_outerip4_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info)
{
    struct ip4_hdr *iphdr = NULL;
    uint16_t  iphdr_hlen = 0;// iphdr_len
    struct udp_hdr *udphdr = NULL;   /*udp ͷ��*/
    struct tcp_hdr *tcphdr = NULL;   /*tcp ͷ��*/

    if(NULL == packet_buf)
    {
        printf("[semp_outerip4_parse]:packet_buf is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == pkt_info)
    {
        printf("[semp_outerip4_parse]:pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }


    CHECK_PBUF_LEN(packet_buf, IP_HD_LEN);
    PBUF_CUR_FORMAT(struct ip4_hdr *, iphdr, packet_buf);

#if 0
    /*DF��־λ��1ʱ�����Ĳ��ܷ�Ƭ��*/
    /*MF��־�Ƿ��к����ķ�Ƭ����*/
    /*offset��ʾ��ǰ��Ƭ�ڱ����е�ƫ��*/
    /*��DFΪ0����ֻҪMF��offest����һ��������0����Ϊ��Ƭ����*/
    if((!(iphdr->_offset & IP_DF))
        && (((iphdr->_offset & IP_MF) != 0) || ((iphdr->_offset & IP_OFFMASK) != 0)))
    {
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].ip_fragment_pkts, 1);
        //mpp->is_ip_fragment= true;
    }
#endif    

    if (IPH_V(iphdr) != IPV4_VERSION)
    {
        //LOG_PRINT(M_PARSE, LV_ERROR, "ip head version err: %d.\n", IPH_V(iphdr));
        //HYDRA_STAT_INC(stat_ipv4_pkt_hd);
        return DPI_FAIL;
    }

    /* obtain IP header length in number of 32-bit words */
    iphdr_hlen = IPH_HL(iphdr);

    /* calculate IP header length in bytes */
    iphdr_hlen *= 4;

    pkt_info->ip.protocol = IPH_PROTO(iphdr);
    pkt_info->ip.sip.version  = IPV4_VERSION;
    pkt_info->ip.sip.ip.v4    = IPH_SRCIP(iphdr);
    pkt_info->ip.dip.version  = IPV4_VERSION;
    pkt_info->ip.dip.ip.v4    = IPH_DSTIP(iphdr);

    UPDATE_PBUF_OFFSET(packet_buf, iphdr_hlen);

    switch(pkt_info->ip.protocol)
    {
        case IP_PROTO_UDP:
            CHECK_PBUF_LEN(packet_buf, UDP_HLEN);
            PBUF_CUR_FORMAT(struct udp_hdr *, udphdr, packet_buf);
            pkt_info->ip.src_port = ntohs(udphdr->src_port);
            pkt_info->ip.dst_port = ntohs(udphdr->dest_port);
            
            UPDATE_PBUF_OFFSET(packet_buf, UDP_HLEN);
            break;

         case IP_PROTO_TCP:
            CHECK_PBUF_LEN(packet_buf, TCP_HLEN);
            PBUF_CUR_FORMAT(struct tcp_hdr *, tcphdr, packet_buf);
            pkt_info->ip.src_port = ntohs(tcphdr->src_port);
            pkt_info->ip.dst_port = ntohs(tcphdr->dest_port);
            
            pkt_info->tcp_flag = TCP_FLAG_TYPE_OTHER;
            if(tcphdr->syn)
            {
                if(tcphdr->ack)
                {
                    pkt_info->tcp_flag = TCP_FLAG_TYPE_OTHER;
                }
                else
                {
                    pkt_info->tcp_flag = TCP_FLAG_TYPE_FIRST_SYN;
                }
            }
            else if(tcphdr->fin)
            {
                pkt_info->tcp_flag = TCP_FLAG_TYPE_FIN;
            }
            else if(tcphdr->rst)
            {
                pkt_info->tcp_flag = TCP_FLAG_TYPE_RST;
            }

            UPDATE_PBUF_OFFSET(packet_buf, TCP_HLEN);
            break;

         default:
            //LOG_PRINT(M_PARSE, LV_INFO, "Unsupported protocol: %d.\n", protocol);
            return DPI_FAIL; 
    }

    return DPI_OK;
}

dpi_code_t semp_outerip6_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info)
{
    struct ip6_hdr_test *iphdr = NULL;
    uint8_t protocol = 0;  /*outer ipv6��Э����*/
    uint64_t srcip[2] = {}, dstip[2] = {}; /*ԴĿ��ip*/
    struct udp_hdr *udphdr = NULL;   /*udp ͷ��*/
    struct tcp_hdr *tcphdr = NULL;   /*tcp ͷ��*/

    if(NULL == packet_buf)
    {
        printf("[semp_outerip6_parse]:packet_buf is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == pkt_info)
    {
        printf("[semp_outerip6_parse]:pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }


    CHECK_PBUF_LEN(packet_buf, IPV6_HD_LEN);
    PBUF_CUR_FORMAT(struct ip6_hdr *, iphdr, packet_buf);

    if (IPH_V6(iphdr) != IPV6_VERSION)
    {
        //PARSE_DEBUG_PRINT("ip head version err: %d\n", IPH_V6(iphdr));
        //HYDRA_STAT_INC(stat_ipv6_pkt_hd);
        return DPI_FAIL;
    }

    protocol = iphdr->next_header;
    memcpy(srcip, (uint64_t *)iphdr->s_ip, IPV6_LEN);
    memcpy(dstip, (uint64_t *)iphdr->d_ip, IPV6_LEN);

    memcpy(pkt_info->ip.sip.ip.v6, srcip, IPV6_LEN);
    memcpy(pkt_info->ip.dip.ip.v6, dstip, IPV6_LEN);
    pkt_info->ip.protocol = protocol;
    pkt_info->ip.sip.version = IPV6_VERSION;
    pkt_info->ip.dip.version = IPV6_VERSION;

    UPDATE_PBUF_OFFSET(packet_buf, IPV6_HD_LEN);

    switch(pkt_info->ip.protocol)
    {
        case IP_PROTO_UDP:
            CHECK_PBUF_LEN(packet_buf, UDP_HLEN);
            PBUF_CUR_FORMAT(struct udp_hdr *, udphdr, packet_buf);
            pkt_info->ip.src_port = ntohs(udphdr->src_port);
            pkt_info->ip.dst_port = ntohs(udphdr->dest_port);
            
            UPDATE_PBUF_OFFSET(packet_buf, UDP_HLEN);
            break;

         case IP_PROTO_TCP:
            CHECK_PBUF_LEN(packet_buf, TCP_HLEN);
            PBUF_CUR_FORMAT(struct tcp_hdr *, tcphdr, packet_buf);
            pkt_info->ip.src_port = ntohs(tcphdr->src_port);
            pkt_info->ip.dst_port = ntohs(tcphdr->dest_port);

            if(tcphdr->syn)
            {
                pkt_info->tcp_flag = TCP_FLAG_TYPE_FIRST_SYN;
            }
            else if(tcphdr->fin)
            {
                pkt_info->tcp_flag = TCP_FLAG_TYPE_FIN;
            }
            else
            {
                pkt_info->tcp_flag = TCP_FLAG_TYPE_OTHER;
            }
            
            UPDATE_PBUF_OFFSET(packet_buf, TCP_HLEN);
            break;

         default:
            //LOG_PRINT(M_PARSE, LV_INFO, "Unsupported protocol: %d.\n", protocol);
            return DPI_FAIL; 
    }

    return DPI_OK;
}


dpi_code_t semp_ethernet_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info)
{
    dpi_code_t rv = DPI_OK;
    uint16_t outer_vlan = 0;  /*���vlan*/
    uint16_t type = 0;        /*��̫��Э������*/
    uint16_t len = 0;     
    uint16_t vlan_layers = 0; /*vlan����*/
    
    struct eth_vlan_hdr *eth_v_header = NULL;/*vlanͷ��ָ��*/
    eth_mpls_hdr *eth_m_header = NULL;/*mplsָ��*/
    struct eth_hdr * eth_header = NULL;      /*��̫��ͷ��ָ��*/

    if(NULL == packet_buf)
    {
        printf("[semp_ethernet_parse]:packet_buf is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == pkt_info)
    {
        printf("[semp_ethernet_parse]:pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }

    CHECK_PBUF_LEN(packet_buf, SIZEOF_ETH_HDR);

    PBUF_CUR_FORMAT(struct eth_hdr *, eth_header, packet_buf);


    type = eth_header->ethertype;
    len += SIZEOF_ETH_HDR;
#ifdef VLAN_VALID
    if(type == htons(DPI_ETHERTYPE_VLAN)) /*�ж��Ƿ�Ϊ0x8100,����vlan�ǽ���оƬ����ȥ��type��0x8100*/
    {
        outer_vlan = *((uint16_t *)PBUF_PTR(packet_buf, len));
        //HYDRA_STAT_INC(stat_business_vlan_pkt);

        len += 2;
    }
    else/*���봦��֮ǰ�����������һ��vlan�����ӿ�*/
    {
       //LOG_PRINT(M_PARSE, LV_INFO, "vlan not identified: type = 0x%x.\n", type);
       //HYDRA_STAT_INC(stat_business_not_vlan_pkt);
       //INC_STATS_PKTS(all_proto_statistic[g_corenum].non_ip_pkts, 1);
       //print_not_vlan(mpp);
       return DPI_E_NOT_VLAN_PKT;
    }

    do
    {
        vlan_layers++;
        eth_v_header = (struct eth_vlan_hdr*)PBUF_PTR(packet_buf, len);
        //LOG_PRINT(M_PARSE, LV_INFO, "vlan = 0x%04x.\n",eth_v_header->v_val);
    }while(if_ethertype_vlan(eth_v_header->v_type) && (len += 4));

    type = eth_v_header->v_type;
    len += 2;
    //LOG_PRINT(M_PARSE, LV_INFO, "vlan_layers = %d, out_vlan= %d.\n",vlan_layers,outer_vlan);

    if(1 == vlan_layers)//����оƬ������н����ı��Ĵ���һ��8100��vlan����������ֻͳ��ԭʼ���ĵ�vlan��־
    {
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_untag_pkts, 1);
    }
    else if(2 == vlan_layers) 
    {
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].single_vlan_pkts, 1);
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_tagged_pkts, 1);
    }
    else
    {
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].m_vlan_proto_pkts, 1);
        //INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_tagged_pkts, 1);
    }
#endif
    /************����mpls************/
    if(if_ethertype_mpls(type))
    {
        //mpp->mplshdr_offset  = len;
        do
        {
            eth_m_header = (eth_mpls_hdr *)PBUF_PTR(packet_buf, len);
        }while((len += MPLS_HEADER_SECTION) && (!eth_m_header->s));

        if(MPLS_LABEL_IPV4 == eth_m_header->lable)
        {
            //HYDRA_STAT_INC(stat_business_mpls_ipv4_pkt);
            //INC_STATS_PKTS(all_proto_statistic[g_corenum].mpls_ipv4_pkts, 1);
            type = htons(ETHERTYPE_IP4);
        }
        else if(MPLS_LABEL_IPV6 == eth_m_header->lable)
        {
            //HYDRA_STAT_INC(stat_business_mpls_ipv6_pkt);
            //INC_STATS_PKTS(all_proto_statistic[g_corenum].mpls_ipv6_pkts, 1);
            type = htons(ETHERTYPE_IP6);
        }
        else
        {
            //HYDRA_STAT_INC(stat_business_mpls_not_ipv4andv6_pkt);
            //INC_STATS_PKTS(all_proto_statistic[g_corenum].mpls_not_ipv4v6_pkts, 1);
            return DPI_INVALID_PACKET;
        }
    }

    
    UPDATE_PBUF_OFFSET(packet_buf, len);

    pkt_info->network_header     = (void*)(packet_buf->ptr+len);
    pkt_info->network_header_len = (packet_buf->len - packet_buf->ptr_offset);
    pkt_info->l2_proto           = type;

    if(pkt_info->l2_proto == ETHERTYPE_IP4)
    {
        pkt_info->ip.protocol = IPV4_VERSION;
    }
    else if(pkt_info->l2_proto == ETHERTYPE_IP6)
    {
        pkt_info->ip.protocol = IPV6_VERSION;
    }


    switch( ntohs(type) )/*Ŀǰֻ����ipv4����*/
    {
        case ETHERTYPE_IP4:
            //HYDRA_STAT_INC(stat_ipv4_pkt);
            //INC_STATS_PKTS(all_proto_statistic[g_corenum].v4_proto_pkts, 1);
            rv = semp_outerip4_parse(packet_buf, pkt_info);
            break;

        case ETHERTYPE_IP6:
            //HYDRA_STAT_INC(stat_ipv6_pkt);
            //INC_STATS_PKTS(all_proto_statistic[g_corenum].v6_proto_pkts, 1);
            rv = semp_outerip6_parse(packet_buf, pkt_info);
            break;
        
        default:
            //LOG_PRINT(M_PARSE, LV_WARN, "unsupported type:0x%04x.\n", type);
            //HYDRA_STAT_INC(stat_unknown_pkt);
            return DPI_FAIL;
    }

    return rv;
}


dpi_code_t semp_packet_entry_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info)
{    
    dpi_code_t rv = DPI_OK;

    if(NULL == packet_buf)
    {        
        printf("[semp_packet_entry_parse]:packet_buf is null point exception\n");
        return DPI_NULL_POINT;
    }
    
    if(NULL == pkt_info)
    {
        printf("[semp_packet_entry_parse]:pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }

    rv = semp_ethernet_parse(packet_buf,pkt_info);
    if(DPI_OK != rv)
    {
        return rv;
    }
    
    return DPI_OK;
}

