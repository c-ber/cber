#include "dpi_xmit.h"
#include "dpi_ifgrp.h"

int dpi_xmit_packet(work_entry_st *work, uint8_t oifgrp);
static  uint8_t   eport_calc(oifgrp_st *oifgrp_entry, work_entry_st *work);


static inline uint8_t EportGetByHashSourceIpAddress (uint8_t iport, oifgrp_st *oifgrp, 
                                                      ip5tuple_st *ipv45tuple, uint16_t protocol)
{
    uint32_t    hash_value  =   0;
    int64_t     index       =   0;
    uint32_t    up_port_number = 0;
    oif_grp_up_port_member_st *port = NULL;

    if(oifgrp->keepalive_en)
    {
        port = &oifgrp->up_port;
        up_port_number = oifgrp->up_port.up_port_num;
    }
    else
    {
        port = &oifgrp->all_port;
        up_port_number = oifgrp->all_port.up_port_num;
    }

    if (0 == up_port_number)
    {
        return INVALID_PORT_NUMBER;
    }
    if (ETHERTYPE_IP4 == protocol)
    {
        hash_value  =   semp_hash_data32(ipv45tuple->v4.src_ip, 0xFFFFFFFF);
    }
    else if (ETHERTYPE_IP6 == protocol)
    {
        hash_value  =   semp_hash_u64_data(ipv45tuple->v6.sip, 2, 0xFFFFFFFF);
    }
    index = hash_value % up_port_number;

    return port->up_port[index];    
}

static inline uint8_t EportGetByHashDestinationIpAddress (uint8_t iport, oifgrp_st *oifgrp, 
                                                          ip5tuple_st *ipv45tuple, uint16_t protocol)
{
    uint32_t    hash_value  =   0;
    int64_t     index       =   0;
    uint32_t    up_port_number = 0;
    oif_grp_up_port_member_st *port    = NULL;

    if(oifgrp->keepalive_en)
    {
        port = &oifgrp->up_port;
        up_port_number = oifgrp->up_port.up_port_num;
    }
    else
    {
        port = &oifgrp->all_port;
        up_port_number = oifgrp->all_port.up_port_num;
    }
    
    if (0 == up_port_number)
    {
        return INVALID_PORT_NUMBER;
    }
    if (ETHERTYPE_IP4 == protocol)
    {
        hash_value  =   semp_hash_data32 (ipv45tuple->v4.dst_ip, 0xFFFFFFFF);
    }
    else if (ETHERTYPE_IP6 == protocol)
    {
        hash_value  =   semp_hash_u64_data(ipv45tuple->v6.dip, 2, 0xFFFFFFFF);
    }
    /** Find out a confirm interface */
    index = hash_value % up_port_number;
    
    return port->up_port[index];
}

static inline uint8_t EportGetByHashSourceAndDestinationIpAddress (uint8_t iport, oifgrp_st *oifgrp, 
                                                                   ip5tuple_st *ipv45tuple, uint16_t protocol)
{
    uint32_t    hash_value  =   0;
    int64_t     index       =   0;
    uint32_t    up_port_number = 0;
    oif_grp_up_port_member_st *port    = NULL;

    if(oifgrp->keepalive_en)
    {
        port = &oifgrp->up_port;
        up_port_number = oifgrp->up_port.up_port_num;
    }
    else
    {
        port = &oifgrp->all_port;
        up_port_number = oifgrp->all_port.up_port_num;
    }
    
    if (0 == up_port_number)
    {
        return INVALID_PORT_NUMBER;
    }
    if (ETHERTYPE_IP4 == protocol)
    {
        hash_value  =   semp_hash_data64 (ipv45tuple->v4.data64[0], 0xFFFFFFFF);
    }
    else if (ETHERTYPE_IP6 == protocol)
    {
        hash_value  =   semp_hash_ipv6_dstsrc_ip(ipv45tuple->v6.dip, ipv45tuple->v6.sip, 0xFFFFFFFF);
    }
    
    /** Find out a confirm interface */
    index = hash_value % up_port_number;
    
    return port->up_port[index];
}

static inline uint8_t EportGetByHashFiveTuple (uint8_t iport, oifgrp_st *oifgrp, 
                                               ip5tuple_st *ipv45tuple, uint16_t protocol)
{
    uint32_t    hash_value  =   0;
    int64_t     index       =   0;
    uint32_t    up_port_number = 0;
    oif_grp_up_port_member_st *port    = NULL;

    if(oifgrp->keepalive_en)
    {
        port = &oifgrp->up_port;
        up_port_number = oifgrp->up_port.up_port_num;
    }
    else
    {
        port = &oifgrp->all_port;
        up_port_number = oifgrp->all_port.up_port_num;
    }
    
    if (0 == up_port_number)
    {
        return INVALID_PORT_NUMBER;
    }
    if (ETHERTYPE_IP4 == protocol)
    {
        hash_value  =   semp_hash_v4_five_tuple(&ipv45tuple->v4.data64, 0xFFFFFFFF);
    }
    else if (ETHERTYPE_IP6 == protocol)
    {
        //hash_value  =   semp_hash_v6_five_tuple(&ipv45tuple->v6.data64, 0xFFFFFFFF);
    }
    /** Find out a confirm interface */
    index = hash_value % up_port_number;
    
    return port->up_port[index];
}


char multi_ifgrp_pkt[MAX_MUTI_OIFGRP][MAX_PKT_LEN] = {};

typedef struct
{
    struct sockaddr_ll stTagAddr;
    int socket;
}send_tunnel_st;

static send_tunnel_st send_socket[BUSINESS_PORT_NUM];

int dpi_xmit_init(void)
{
    char *business_port_list[BUSINESS_PORT_NUM] = {"eth4", "eth5", "eth6", "eth7", "eth8", "eth9", 
                                                      "eth10", "eth11", "eth12", "eth13", "eth14", "eth15"};
    struct ifreq ifr = {};
    int i;
    int ret = -1;
    
    for (i = 0; i < BUSINESS_PORT_NUM; ++i)
    {
        ret = socket(PF_PACKET, SOCK_RAW, htons(ETH_P_ALL));
        if(ret < 0)
        {
            ifgrp_sprint("Socket Call error!\n");
            return ret;
        }

        send_socket[i].socket = ret;
        
        /* network card interface name */
        memcpy(ifr.ifr_name, business_port_list[i], IFNAMSIZ);
    
        /* get ethernet card index */
        if ((ret = ioctl(send_socket[i].socket, SIOCGIFINDEX, &ifr)) == -1)
        {
            ifgrp_sprint("ioctl() get ifindex");
            close(send_socket[i].socket);
            return ret;
        }   

        
        send_socket[i].stTagAddr.sll_ifindex = ifr.ifr_ifindex;
        send_socket[i].stTagAddr.sll_family = PF_PACKET;
        send_socket[i].stTagAddr.sll_protocol = htons(ETH_P_ALL);

    }

    dpi_shm_data_init(KEY_IFGRP, sizeof(ifgrp_global_var_t));
    

    return 0;
}

void dpi_xmit_uninitialize(void)
{
    int i;
    
    for (i = 0; i < BUSINESS_PORT_NUM; ++i)
    {
        close(send_socket[i].socket);
    }
}
    
int dpi_xmit(work_entry_st *work)
{
    int i;
    uint8_t fwd_oifgrp_num = 0;
    int  pkt_len = 0;
    
    void *ori_buf_ptr  = NULL;
    
    if (!check_work_valid)
    {
        return DPI_FAIL;
    }
    
    ori_buf_ptr = work->ptr;
    pkt_len = work->len;
    fwd_oifgrp_num =  work->fwd_oifgrp_num;

    /* 如果接口组数大于1，进行拷贝，不需要拷贝第一份 */
    if (fwd_oifgrp_num > 1)
    {
        for (i = 1; i < fwd_oifgrp_num; i++)
        {
            memcpy(&multi_ifgrp_pkt[i], ori_buf_ptr, MAX_PKT_LEN);
        }
    }

    for (i = 0; i < fwd_oifgrp_num; i++)
    {
        dpi_xmit_packet(work, work->oifgrp[i]);
    }

    return DPI_OK;
}


int dpi_xmit_packet(work_entry_st *work, uint8_t oifgrp)
{
    uint16_t   oif_vlan = 0;
    uint32_t    interfaces = 0;
    oifgrp_st  oifgrp_entry = {};
    uint8_t    oif = 0xFF;
    int rv = 0;
    struct sockaddr_ll saddr_ll = {};
    static int poll_cnt = 0;
    send_tunnel_st  *out_tunnel = NULL;

#ifndef USE_SHM
    oifgrp_entry    =   *ifgrp_get_oifgrp(oifgrp);
#else
    SHM_GET_DATA(&oifgrp_entry, OFFSET_OIF(oifgrp-1), sizeof(oifgrp_st));
#endif
    interfaces      =   oifgrp_entry.up_port.up_port_num;

    oif = eport_calc(&oifgrp_entry, work);

    if (interfaces && (oif !=  INVALID_PORT_NUMBER))
    {
        if(oif == (uint8_t)BROADCAST_PORT)
        {
            oif_vlan = 200+oifgrp-1 ;
        }
        else
        {
            oif_vlan = IF2VLAN(oif);
        }
        if (oif_vlan < MAX_VLAN_NUMBER)
        {
            ((vlan_ethhdr_st *)work->ptr)->h_vlan_TCI = oif_vlan;
        }

        while (NULL == (out_tunnel = &send_socket[poll_cnt++ % BUSINESS_PORT_NUM]))
        {;}
        
        rv = sendto(out_tunnel->socket, work->ptr, work->len, 0, (struct sockaddr *)&out_tunnel->stTagAddr, sizeof(struct sockaddr_ll));
        if (rv != work->len)
        {
            ifgrp_sprint("send fail!\n");
            return rv;
        }
    }
    
    return rv;
}

static  uint8_t   eport_calc(oifgrp_st *oifgrp_entry, work_entry_st *work)
{
    uint16_t protocol = 0xFFFF;

    oifgrp_st *oifgrp =   oifgrp_entry;
    uint8_t port =   INVALID_PORT_NUMBER;
    uint8_t iport =  work->iif;
    ip5tuple_st *ipv45tuple = &work->tuple;


    protocol = ntohs(work->protocol);
        
    if (ETHERTYPE_IP4 == protocol)
    {
        if(ipv45tuple->v4.src_ip <  ipv45tuple->v4.dst_ip)
        {
            ipv45tuple->v4.src_ip ^= ipv45tuple->v4.dst_ip;
            ipv45tuple->v4.dst_ip ^= ipv45tuple->v4.src_ip;
            ipv45tuple->v4.src_ip ^= ipv45tuple->v4.dst_ip;

            ipv45tuple->v4.src_port ^= ipv45tuple->v4.dst_port;
            ipv45tuple->v4.dst_port ^= ipv45tuple->v4.src_port;
            ipv45tuple->v4.src_port ^= ipv45tuple->v4.dst_port;
        }
    }
    else if (ETHERTYPE_IP6 == protocol)
    {
        if (memcmp(&ipv45tuple->v6.sip, &ipv45tuple->v6.dip, IPV6_LEN) < 0)
        {
            uint64_t tmp[2] = {};
            memcpy(tmp, &ipv45tuple->v6.sip, IPV6_LEN);
            memcpy(&ipv45tuple->v6.sip, &ipv45tuple->v6.dip, IPV6_LEN);
            memcpy(&ipv45tuple->v6.dip, tmp, IPV6_LEN);

            ipv45tuple->v6.src_port ^= ipv45tuple->v6.dst_port;
            ipv45tuple->v6.dst_port ^= ipv45tuple->v6.src_port;
            ipv45tuple->v6.src_port ^= ipv45tuple->v6.dst_port;
        }
    }

    switch (oifgrp->mode)
    {
        case    OIF_GRP_MODE_HASH_SIP:
            port    =   EportGetByHashSourceIpAddress (iport, oifgrp, ipv45tuple, protocol);
            break;
        case    OIF_GRP_MODE_HASH_DIP:
            port    =   EportGetByHashDestinationIpAddress (iport, oifgrp, ipv45tuple, protocol);
            break;
        case    OIF_GRP_MODE_HASH_SDIP:
            port    =   EportGetByHashSourceAndDestinationIpAddress (iport, oifgrp, ipv45tuple, protocol);
            break;
        case    OIF_GRP_MODE_HASH_FIVE_TUPLE:
            port    =   EportGetByHashFiveTuple (iport, oifgrp, ipv45tuple, protocol);
            break;
        case  OIF_GRP_MODE_BROADCAST:
            port = (uint8_t)BROADCAST_PORT;
            break;
        default:
            port    =   EportGetByHashSourceIpAddress (iport, oifgrp, ipv45tuple, protocol);
            break;
    }
    
    return port;
}




