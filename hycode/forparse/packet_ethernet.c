/******************************************************************************

 ��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾ 
 
 ****************************************************************************** 
  �ļ���       : packet_ethernet.c
  �����ʽ     ��ASCII
  �汾         : Initial Draft 
  ����         : Joanthan
  ����         : 2015/9/6
  �ϴ��޸�     :  
  ����         : ������̫������Э��
  �����б�     : 
  ��ʷ         : 
  1.����       : 2015/9/6
    ����       : Joanthan
    �޸�       : Created file 
 ********************************************************************/




#include "packet_entry.h"
#define VLAN_TYPE_NUM       5//ʶ��5��vlan type
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
inline uint8_t if_ethertype_vlan(uint16_t type)
{
    uint16_t vlan_type[VLAN_TYPE_NUM] = {0x8100,0x88a8,0x9100,0x9200,0x9300};
    uint16_t i = 0;
    for(i = 0;i<VLAN_TYPE_NUM;i++)
    {
        if(type == htons(vlan_type[i]))
        {
            return 1;
        }
    }
    return 0;
    
}

mp_error_t semp_ethernet_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    uint16_t outer_vlan = 0;  /*���vlan*/
    uint16_t type = 0;        /*��̫��Э������*/
    uint16_t len = 0;     
    uint16_t vlan_layers = 0; /*vlan����*/
    
    struct eth_vlan_hdr *eth_v_header = NULL;/*vlanͷ��ָ��*/
    struct eth_hdr * eth_header = NULL;      /*��̫��ͷ��ָ��*/



    PBUF_CUR_FORMAT(struct eth_hdr *, eth_header, p);


    type = eth_header->ethertype;
    len += SIZEOF_ETH_HDR;

    if(cvmx_likely(type == htons(ETHERTYPE_VLAN))) /*�ж��Ƿ�Ϊ0x8100,����vlan�ǽ���оƬ����ȥ��type��0x8100*/
    {
        outer_vlan = *((uint16_t *)PBUF_PTR(p, len));
        HYDRA_STAT_INC(stat_business_vlan_pkt);
    }
    else/*�����˴���֮ǰ�����������һ��vlan�����ӿ�*/
    {
       HYDRA_STAT_INC(stat_business_not_vlan_pkt);
       return MP_E_NOT_VLAN_PKT;
    }

    len += 2;

    do
    {
        vlan_layers++;
        eth_v_header = (struct eth_vlan_hdr*)PBUF_PTR(p, len);
    }while(if_ethertype_vlan(eth_v_header->v_type) && (len += 4));

    type = eth_v_header->v_type;
    len += 2;
    LOG_PRINT(M_PARSE, LV_INFO, "vlan_layers = %d, out_vlan= %d.\n",vlan_layers,outer_vlan);

    if(1 == vlan_layers)//����оƬ������н����ı��Ĵ���һ��8100��vlan����������ֻͳ��ԭʼ���ĵ�vlan��־
    {
        INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_untag_pkts, 1);
    }
    else if(2 == vlan_layers) 
    {
        INC_STATS_PKTS(all_proto_statistic[g_corenum].single_vlan_pkts, 1);
        INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_tagged_pkts, 1);
    }
    else
    {
        INC_STATS_PKTS(all_proto_statistic[g_corenum].m_vlan_proto_pkts, 1);
        INC_STATS_PKTS(all_proto_statistic[g_corenum].vlan_tagged_pkts, 1);
    }

    
    UPDATE_PBUF_OFFSET(p, len);

    mpp->iphdr_offset  = len;
    mpp->appl_proto_l2 = type;
    /*
    outer_vlanֵ�ĸ�4λ��priolity(��3λ)��cfi(���λ),��12����vlan id(0~4095)
    */
    mpp->iif = VLAN2IF((outer_vlan&0x0fff));
    LOG_PRINT(M_PARSE, LV_INFO, "vlan id: outervlan = %x, iif = %d.\n", outer_vlan, mpp->iif);
    switch( ntohs(type) )/*Ŀǰֻ����ipv4����*/
    {
        case ETHERTYPE_IP4:
            HYDRA_STAT_INC(stat_ipv4_pkt);
            INC_STATS_PKTS(all_proto_statistic[g_corenum].v4_proto_pkts, 1);
            return semp_outerip4_parse(work, p, mpp);

        case ETHERTYPE_IP6:
            HYDRA_STAT_INC(stat_ipv6_pkt);
            INC_STATS_PKTS(all_proto_statistic[g_corenum].v6_proto_pkts, 1);
            return semp_outerip6_parse(work, p, mpp);
            break;

        default:
            LOG_PRINT(M_PARSE, LV_INFO, "unsupported type:%d.\n", type);
            HYDRA_STAT_INC(stat_unknown_pkt);
            break;
    }

    return MP_E_NONE;
}
