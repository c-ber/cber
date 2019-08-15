#ifndef __PACKET_ETHERNET_H
#define __PACKET_ETHERNET_H


#define ETHARP_HWADDR_LEN     (6)

#define SIZEOF_ETH_HDR        (14)
#define ETHERTYPE_IP4         (0x0800)
#define ETHERTYPE_IP6         (0x86dd)
#define ETHERTYPE_VLAN        (0x8100)
#define ETHERTYPE_MPLS_UT     (0x8847)      /** MPLS Unicast traffic     */
#define ETHERTYPE_MPLS_MT     (0x8848)      /** MPLS Multicast traffic   */

struct eth_addr
{
    uint8_t addr[ETHARP_HWADDR_LEN];
};


struct eth_hdr
{
    struct eth_addr dest;
    struct eth_addr src;
    uint16_t ethertype;
};


struct eth_vlan_hdr
{
    uint16_t v_type;
    uint16_t v_val;
};



#endif

