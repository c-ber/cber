/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司 
 
 ****************************************************************************** 
  文件名       : packet_ethernet.c
  编码格式     ：ASCII
  版本         : Initial Draft 
  作者         : Joanthan
  创建         : 2015/9/6
  上次修改     :  
  描述         : 解析以太网报文协议
  功能列表     : 
  历史         : 
  1.日期       : 2015/9/6
    作者       : Joanthan
    修改       : Created file 
 ********************************************************************/




#include "packet_entry.h"
#define VLAN_TYPE_NUM       5//识别5种vlan type
/*****************************************************************************
  函数名称      : if_ethertype_vlan
  描述          : 判断二层协议类型是否是vlan
  调用          : 
  被调用        : 
  被访问的表    : 
  被修改的表    : 
  输入          : 协议号
  输出          : 无
  返回          : TRUE是VLAN FALSE不是vlan
  其他          : 
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
    uint16_t outer_vlan = 0;  /*外层vlan*/
    uint16_t type = 0;        /*以太网协议类型*/
    uint16_t len = 0;     
    uint16_t vlan_layers = 0; /*vlan层数*/
    
    struct eth_vlan_hdr *eth_v_header = NULL;/*vlan头部指针*/
    struct eth_hdr * eth_header = NULL;      /*以太网头部指针*/



    PBUF_CUR_FORMAT(struct eth_hdr *, eth_header, p);


    type = eth_header->ethertype;
    len += SIZEOF_ETH_HDR;

    if(cvmx_likely(type == htons(ETHERTYPE_VLAN))) /*判断是否为0x8100,外层的vlan是交换芯片加上去的type是0x8100*/
    {
        outer_vlan = *((uint16_t *)PBUF_PTR(p, len));
        HYDRA_STAT_INC(stat_business_vlan_pkt);
    }
    else/*进入多核处理之前交换都会打上一层vlan标记入接口*/
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

    if(1 == vlan_layers)//交换芯片会给所有进来的报文打上一个8100的vlan，我们现在只统计原始报文的vlan标志
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
    outer_vlan值的高4位是priolity(高3位)和cfi(最低位),低12才是vlan id(0~4095)
    */
    mpp->iif = VLAN2IF((outer_vlan&0x0fff));
    LOG_PRINT(M_PARSE, LV_INFO, "vlan id: outervlan = %x, iif = %d.\n", outer_vlan, mpp->iif);
    switch( ntohs(type) )/*目前只处理ipv4报文*/
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
