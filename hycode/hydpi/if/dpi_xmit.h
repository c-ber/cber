#ifndef _DPI_XMIT_H
#define _DPI_XMIT_H

#include <pub_header.h>


typedef struct 
{
    uint64_t upper_ip;
    uint64_t lower_ip;
}ipv6_t;


typedef union
{
    uint64_t        data64[5];
    struct
    {
        ipv6_t          sip;
        ipv6_t          dip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        uint16_t        resv;
    };
} tuple_v6;



typedef union
{
    uint64_t        data64[2];
    struct
    {
        uint32_t        src_ip;
        uint32_t        dst_ip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        uint16_t        resv;
    };
} tuple_v4;


typedef union
{
    tuple_v4        v4;
    tuple_v6        v6;
} ip5tuple_st;


#define MAX_FWD_OIFGRP_NUM 4
#define MAX_PKT_LEN 2048

typedef enum
{
    ACTION_FORWARD  = (1 << 0),
    ACTION_DROP     = (1 << 1),
} action_en;

typedef struct
{
    action_en   action; /* how to deal with the packet */
    void        *ptr;   /* packet first address */
    size_t      len;    /* packet length */
    uint32_t    fwd_oifgrp_num;  /* forward oifgrp number */
    uint8_t     oifgrp[MAX_FWD_OIFGRP_NUM];  /** output interface group */
    ip5tuple_st tuple; /* five tuple information */
    uint8_t     iif;        /** Packet input interface */
    uint16_t    protocol;   /* ip layer protocol */
}work_entry_st;


typedef struct {
    uint8_t     ether_dhost[6];
    uint8_t     ether_shost[6];
    uint16_t    h_vlan_proto;
    uint16_t    h_vlan_TCI;
    uint16_t    h_vlan_encapsulated_proto;
} vlan_ethhdr_st;

#define BUSINESS_PORT_NUM   12

#define IPV6_LEN    16

#define ETHERTYPE_IP4         (0x0800)
#define ETHERTYPE_IP6         (0x86dd)

#define MAX_MUTI_OIFGRP 4


static inline int check_work_valid(work_entry_st *work)
{
    if ((!work)
        || (work->len <= 0 || work->len > MAX_PKT_LEN)
        || (work->action != ACTION_FORWARD)
        )
    {
        return 0;
    }

    return 1;
}


extern  int dpi_xmit(work_entry_st *work);
extern int dpi_xmit_packet(work_entry_st *work, uint8_t oifgrp);
extern int dpi_xmit_init(void);
extern void dpi_xmit_uninitialize(void);


#endif /* _DPI_XMIT_H */
