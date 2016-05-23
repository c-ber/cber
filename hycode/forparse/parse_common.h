#ifndef __PRASE_COMMON_H
#define __PRASE_COMMON_H

#include "cvmx_common.h"



typedef enum {
    BCAST_MAC  = 0,
    MCAST_MAC,
    UCAST_MAC,
    SPANNING_TREE_MAC,
    L2_MAC_TYPE_MAX
}l2_mac_type_t;



typedef struct {
    uint16_t  vlan;
    uint16_t  vid;
} single_vlan_label;

typedef struct {
    uint16_t  outer_vlan; //TPID
    uint16_t  outer_vid;
    uint16_t  inner_vlan;
    uint16_t  inner_vid;
}qinq_info_t;

typedef struct {
    uint16_t  outer_vlan;
    uint16_t  outer_vid;
    uint16_t  mid_vlan;
    uint16_t  mid_vid;
    uint16_t  inner_vlan;
    uint16_t  inner_vid;
}multi_vlan_label;

#define MPLS_LABEL_MAX   3
typedef struct {
    uint16_t  label_num;
    uint16_t  label[MPLS_LABEL_MAX];
}l2_mpls_t;

typedef struct {
    uint16_t mac_type;
    uint16_t vlan_label;  //less than 3
    uint16_t ether_type;
    uint16_t  l2_offset;
    union {
        single_vlan_label  s_label;
        qinq_info_t            qinq;
        multi_vlan_label   m_label;
        char str[12];
        uint64_t u64[2];
    } vlan_t;

    union {
        l2_mpls_t  l2_mpls;
        char mp[MPLS_LABEL_MAX + 2];
        uint64_t u64;
    }mpls_t;
}semp_l2_t;

typedef struct {
    uint32_t src_ip;
    uint32_t dst_ip;
}ip_v4_t;

typedef struct {
    uint64_t sip_upper;
    uint64_t sip_lower;
    uint64_t dip_upper;
    uint64_t dip_lower;
}ip_v6_t;

typedef struct {
    uint32_t outer_source;
    uint32_t outer_dest;
    uint32_t inner_source;
    uint32_t inner_dest;
}v4_in_v4;

typedef struct {
    uint64_t  outer_source0;
    uint64_t  outer_source1;
    uint64_t  outer_dest_0;
    uint64_t  outer_dest_1;

    uint32_t  inner_source;
    uint32_t  inner_dest;
}v4_in_v6;

typedef struct {
    uint32_t outer_source;
    uint32_t outer_dest;

    uint64_t inner_source0;
    uint64_t inner_source1;
    uint64_t inner_dest_0;
    uint64_t inner_dest_1;
}v6_in_v4;

typedef struct {
    uint64_t outer_source0;
    uint64_t outer_source1;
    uint64_t outer_dest_0;
    uint64_t outer_dest_1;

    uint64_t inner_source0;
    uint64_t inner_source1;
    uint64_t inner_dest_0;
    uint64_t inner_dest_1;
}v6_in_v6;


typedef struct {
    uint16_t  l3_proto;  //v4,v6 ,v4_in_v4, v4_in_v6 v6_in_v4 v6_in_v6
    uint16_t  l3_offset;

    union { //v4 v6 or tunneling protocol
        ip_v4_t          v4;
    #if 000         //性能加速，屏蔽ipv6报文处理
        ip_v6_t          v6;
        v4_in_v4       v4_v4;
        v4_in_v6       v4_v6;
        v6_in_v4       ipv6_4;
        v6_in_v6       ipv6_6;
        uint64_t        data64[8];
    #endif
    }ip_t;
    //ipaddr_t ip_addr;
}semp_l3_t;

typedef struct {
    uint16_t l4_proto;
    uint16_t l4_offset;

    //uint16_t source;
    //uint16_t dest;
    uint16_t sport;
    uint16_t dport;
}semp_l4_t;

typedef struct {
    uint16_t port;  /* GTP port */
    uint16_t version;
    uint16_t proto;
    uint16_t sport;
    uint16_t dport;
    ip_v4_t  v4;
    ip_v6_t  v6;
}semp_gtp_result_t;

typedef struct {
    uint16_t port;  /* S1AP port */
    uint16_t version;
    uint16_t proto;
}semp_s1ap_result_t;


typedef struct {
    uint16_t l5_proto;
    uint16_t l5_offset;

    /*for future*/
    uint16_t isGtp;      /* 1: is GTP packet, 0: not GTP packet */
    semp_gtp_result_t gtp;
}semp_l5_t;

typedef struct {
   semp_l2_t l2;
   semp_l3_t l3;
   semp_l4_t l4;
   semp_l5_t l5;
}semp_ndpi_result_t;

typedef union
{
    semp_ndpi_result_t ndpi;
    uint64_t u64[15];       //屏蔽ipv6报文分析
}U_NDPI;

#define L5_GTP_U    1
#define L5_GTP_C    2





#endif

