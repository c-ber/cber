#ifndef _DPI_IFGRP_H
#define _DPI_IFGRP_H

#include <dpi_errno.h>
#include <pub_header.h>
#include "../libipc/shmem.h"

#define if_debug    1

#define USE_SHM

#if if_debug
#define ifgrp_uprint(fmt, args...) fprintf(stderr, fmt, ##args)
#define ifgrp_uprintv(fmt, args...) fprintf(stderr, "[%s-%d]: "fmt, __func__, __LINE__, ##args)
#define ifgrp_sprint(fmt, args...) fprintf(stderr, "[%d-%s]\t"fmt, errno, strerror(errno), ##args);
#else
#define ifgrp_uprint(fmt, args...)
#define ifgrp_uprintv(fmt, args...)
#define ifgrp_sprint(fmt, args...)
#endif


/******************************************macros**************************************************/
typedef uint32_t  IF_MASK_T;
#define UINT64_BIT_NUM 32
#define     MAX_SLOT_PORT_NUMBER            48
#define     MAX_IIF_GROUP_NUMBER            48
#define     MAX_OIF_GROUP_NUMBER            64


#if (MAX_SLOT_PORT_NUMBER % UINT64_BIT_NUM)
#define IF_MASK_NUM (MAX_SLOT_PORT_NUMBER / UINT64_BIT_NUM + 1)
#else
#define IF_MASK_NUM (MAX_SLOT_PORT_NUMBER / UINT64_BIT_NUM )
#endif

#define SEMP_PBMP_WIDTH     (((128 + 32 - 1)/32)*32)

#define SEMP_PBMP_WORD_WIDTH    32
#define SEMP_PBMP_WORD_MAX      \
    ((SEMP_PBMP_WIDTH + SEMP_PBMP_WORD_WIDTH-1) / SEMP_PBMP_WORD_WIDTH)

#define OIF_GRP_UP_PORT_MEMBER_MAX  (640)


#define OIF_GRP_LOAD_BALANCE_DEFAULT_MODE         OIF_GRP_MODE_HASH_SDIP 
#define OIF_GRP_LOAD_BALANCE_DEFAULT_HASH_MODE    OIF_GRP_HASH_SDIP

#ifndef INVALID_PORT_NUMBER
#define INVALID_PORT_NUMBER ((uint8_t)(-1))
#endif

#define MAX_LEN_IF_NAME 32

#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */

#ifndef INVALID_GROUP
#define  INVALID_GROUP      0          /** Invalid group number defined for ingress-group, egress-group and so on */
#endif


#define IF2VLAN(intf)           (intf+100-1/*5685x cpu:0*/)
#define MAX_VLAN_NUMBER     4096
#define BROADCAST_PORT (-2)


/******************************************struct,enum**************************************************/

typedef union
{
    struct
    {
        int64_t         rx_pkts;        /* the number of received pakcets now */
        int64_t         rx_bytes;       /* the size of received pakcets in bytes now*/
        int64_t         tx_pkts;
        int64_t         tx_bytes;
    };
    uint64_t        data_64[4];
} if_stat_st;

typedef union
{
    struct
    {
        /* word 0 */
        uint64_t    valid                      : 1;  /* valid, if interface exist */
        uint64_t    logic_index                : 8;  /* logical interface number on the whole slot. */
        uint64_t    slot                       : 4;  /* slot number , like slot/card/index */
        uint64_t    card                       : 2;  /* card number, like slot/card/index */
        uint64_t    index                      : 5;  /* index number, like slot/card/index */
        uint64_t    ipd_port                   : 16; /* packet port */
        uint64_t    if_type                    : 2;  /* interface physical attribute, such as GE, XE and so on. */
        uint64_t    mode                       : 3;  /* interface mode,such as inline, inline_server, sniffer,user integrality and so on*/
        uint64_t    speed                      : 3;  /* interface speed */
        uint64_t    mtu                        : 16;
        uint64_t    link_status                : 1;  /* Read only, interface link status, 1 for link up, 0 for link down */
        uint64_t    phy_status                 : 1;  /** RW, update by interface vary */
        uint64_t    shutdown                   : 1;  /* interface shutdown, 1 for shutdown; 0 for not shutdown */
        uint64_t    monitor_en                 : 1;  /* interface status loop enable flag */
        
        /* word 1 */
		uint64_t	resv1:46;
        uint8_t     iifgrp                    ;  /*interface bind to input interface group */
        uint64_t    stream_direction           : 2;  /* interface upstream or downstream flag */
        uint64_t    flowctr_en                 : 1; 
        uint64_t    physical_mode              : 4;
        uint64_t    resv11                      : 3;  
        uint64_t    vlan                       : 16; /*default vlan */
		uint64_t	resv12:9;
        uint64_t    linkforced_en              : 1; /* 1 for link-forced, also called single fiber mode */
		
        uint64_t     resv2                      : 38;
        uint64_t    tx_en                      : 1;  /* flag tx statistics enable/disable */
        uint64_t    rx_en                      : 1;  /* flag rx statistics enable/disable */
        uint64_t    card_type                  : 3;  /* card type index */
        uint64_t    have_vlan                  : 1;  /* packet from this interface have vlan ? */
        uint64_t    eport                      : 8;  /* physical port */
        uint64_t     resv3                      : 50; /* reserved */
        
        /* word 2 -- word 5 */
        char        if_name[8];                       /* interface name */
        
        /* word 6 -- word 9 */
        if_stat_st  if_stat[32]; 
        
    };
    
    uint64_t    data[517];
} interface_entry_st;


typedef union
{
    struct
    {
        /* word 0 */
        uint64_t    valid                      : 1;  /* valid, if interface exist */
        uint64_t    logic_index                : 8;  /* logical interface number on the whole slot. */
        uint64_t    slot                       : 4;  /* slot number , like slot/card/index */
        uint64_t    card                       : 2;  /* card number, like slot/card/index */
        uint64_t    index                      : 5;  /* index number, like slot/card/index */
        uint64_t    ipd_port                   : 16; /* packet port */
        uint64_t    if_type                    : 2;  /* interface physical attribute, such as GE, XE and so on. */
        uint64_t    mode                       : 3;  /* interface mode,such as inline, inline_server, sniffer,user integrality and so on*/
        uint64_t    speed                      : 3;  /* interface speed */
        uint64_t    mtu                        : 16;
        uint64_t    link_status                : 1;  /* Read only, interface link status, 1 for link up, 0 for link down */
        uint64_t    phy_status                 : 1;  /** RW, update by interface vary */
        uint64_t    shutdown                   : 1;  /* interface shutdown, 1 for shutdown; 0 for not shutdown */
        uint64_t    monitor_en                 : 1;  /* interface status loop enable flag */
        
        /* word 1 */
        uint64_t    timestamp_en               : 1;  /* time stamp enable flag, write time stamp to dmac */
        uint64_t    mod_dmac_en                : 1;  /* modify dmac enable flag */
        uint64_t    mod_dmac_mask_en           : 1;  /* modify dmac mask enable flag */
        uint64_t    mac_mask                   : 16;
        uint64_t    big_syn_en                 : 1;  /* flag that length of tcp sync header >= 32bytes */
        uint64_t    only_syn_en                : 1;  /* tcp sync packet statistics enable flag */
        uint64_t    qos_en                     : 1;  /* reserved */
        uint64_t    qos_id                     : 16; /* reserved */
        uint64_t    weight                     : 8;
        uint64_t    iifgrp                     : 8;  /*interface bind to input interface group */
        uint64_t    stream_direction           : 2;  /* interface upstream or downstream flag */
        uint64_t    flowctr_en                 : 1; 
        uint64_t    physical_mode              : 4;
        uint64_t    resv1                      : 3;  
        
        /* word 2 */
        uint64_t     vlan                       : 16; /*default vlan */
        uint64_t     audit_group_id             : 4;  /* Maxinum 16 audit group(s) */
        uint64_t     pppoe_with_vlan_en         : 1;
        uint64_t     clear_mpls_en              : 1;
        uint64_t     clear_vlan_en              : 1;
        uint64_t     gn_en                      : 1;
        uint64_t     gb_en                      : 1;
        uint64_t     linkforced_en              : 1; /* 1 for link-forced, also called single fiber mode */
        uint64_t     session_en                 : 1;
        uint64_t     resv2                      : 37;

        
        /* word 3 */
        uint64_t     tx_en                      : 1;  /* flag tx statistics enable/disable */
        uint64_t     rx_en                      : 1;  /* flag rx statistics enable/disable */
        uint64_t     card_type                  : 3;  /* card type index */
        uint64_t     have_vlan                  : 1;  /* packet from this interface have vlan ? */
        uint64_t     eport                      : 8;  /* physical port */
        uint64_t     resv3                      : 50; /* reserved */
        
        /* word 3 */
        char        if_name[8];                       /* interface name */

    	uint64_t    if_tx_pkt;
    	uint64_t    if_tx_byte;
    	uint64_t    if_rx_pkt;
    	uint64_t    if_rx_byte;
    };
    
    uint64_t    data[4];
} npcp_interface_entry_st;


typedef struct
{
    interface_entry_st    epif_data[MAX_SLOT_PORT_NUMBER];
} interface_set_st;


typedef struct 
{
	uint32_t epif_index;
	npcp_interface_entry_st    epif_data;
}npcp_interface_entry_data_st;



typedef struct
{
    uint8_t  if_id;    /* interface id  */
    uint8_t  iifgrp;   /* input interface group id */
} npcp_interface_set_iifgrp_st;

typedef struct{
    uint8_t en;
    uint32_t oifgrp_index;
}oifgrp_keepalive_config_t; 

typedef struct
{
    uint32_t                 if_grp_port_num;       /* port number in a interface group */
    uint32_t                 resv;                  /* reserved for align */
    IF_MASK_T                ifmask[IF_MASK_NUM];   /* interface mask*/
} if_grp_member_st;

typedef struct
{
    uint32_t                up_port_num;                         /* link up port number, add the weight, port number of up_port[] array */
    uint32_t                resv;                                /* reserved for align */
    uint8_t                 up_port[OIF_GRP_UP_PORT_MEMBER_MAX]; /* link up port logic number */
} oif_grp_up_port_member_st;


typedef struct
{
    uint32_t                if_grp_id;      /* interface group index */
    uint32_t                resv;           /* reserved for align */
    if_grp_member_st        grp_member;     /* interface group member */
    uint8_t                resv1[48];
} iifgrp_st;


typedef struct
{
        uint32_t                    if_grp_id;               /* interface group index */
        uint32_t                    port_num;                /* port number in a interface group */
        uint32_t                    dn_port_num;             /* link down port number */
        uint32_t                    mode;                    /** Balance mode */
        uint32_t                    hash;                    /** Hash type */
        uint32_t                    logic_record;            /** For balance */
        IF_MASK_T                   ifmask[SEMP_PBMP_WORD_MAX];     /* interface mask  */
        IF_MASK_T                   up_ifmask[SEMP_PBMP_WORD_MAX];  /* up interface mask */
        oif_grp_up_port_member_st   up_port;              /* up port array, used for tarnsmit the packet */
        oif_grp_up_port_member_st   all_port;                /* all port array, used for tarnsmit the packet */

        uint64_t extra_msg_mask;                            /*包括了时间戳,lte关联信息,umts关联信息*/
        int fit_cell_net;                        /*假如配置的是携带关联信息，则指明这个配置适用于umts还是lte*/
        uint32_t lte_check_mask_en:1;                       /*if oifgrp take lte info check mask*/ 
        uint32_t clear_gre_en:1;                               /*判断是否要剥离gre隧道协议*/
        uint32_t clear_gtpu_en:1;                              /*判断是否要剥离gtpu隧道协议*/
        uint32_t keepalive_en:1;                               /*出接口组保活标志*/
        uint32_t clear_mpls_en:1;                               /*出接口组剥离mpls标志*/
        uint32_t reserve:27;                               //保留字段
        #if EXTRA_MSG_DEBUG
        int32_t dbg_en_mask;
        uint32_t dbg_valid_msg_mask;
        char dbg_imsi[LTE_IMSI_LEN];
        char dbg_imei[LTE_IMEI_LEN];
        char dbg_msisdn[LTE_MSISDN_LEN];
        #endif        
} oifgrp_st;



typedef struct
{
    iifgrp_st               iif_group[MAX_IIF_GROUP_NUMBER];
    oifgrp_st               oif_group[MAX_OIF_GROUP_NUMBER];
} ifgrp_st;

typedef struct
{
    uint64_t    index;
    char        name[MAX_LEN_IF_NAME];
    uint32_t    len;
}intf_name_t;


typedef enum
{
    OIF_GRP_MODE_HASH_SDIP,
    OIF_GRP_MODE_ROUND_ROBIN,
    OIF_GRP_MODE_HASH_SIP,
    OIF_GRP_MODE_HASH_DIP,
    OIF_GRP_MODE_HASH_FIVE_TUPLE,
    OIF_GRP_MODE_HASH_USER_INTEGRITY,
    OIF_GRP_MODE_HASH_VLAN,
    OIF_GRP_MODE_BROADCAST,
    OIF_GRP_MODE_MAX,
} oif_grp_mode_un;

typedef enum
{
    OIF_GRP_HASH_SIP,
    OIF_GRP_HASH_DIP,
    OIF_GRP_HASH_SDIP,
    OIF_GRP_HASH_FIVE_TUPLE,
    OIF_GRP_HASH_USER_INTEGRITY,
    OIF_GRP_HASH_VLAN,

    OIF_GRP_HASH_MAX,
} oif_grp_hash_un;


enum interface_type
{
    INTERFACE_TYPE_UNKNOWN,
    INTERFACE_TYPE_GE,
    INTERFACE_TYPE_XE,
    INTERFACE_TYPE_MAX
};

typedef enum
{
    MODE_WAN,
    MODE_LAN,
    MODE_POS
} CARD_MODE;

typedef enum
{
    LINKDOWN    =   0,
    LINKUP      =   1,   
} ilk_ctrl_st;


typedef enum{
    LTE_CHECK_MASK_DISABLE,
    LTE_CHECK_MASK_ENABLE,
}oifgrp_lte_check_mask_en_t;

typedef struct{
    oifgrp_lte_check_mask_en_t lte_mask_en;
    uint32_t oifgrp_index;
}oifgrp_lte_check_mask_config_t; 



/******************************************inline function**************************************************/
#ifndef USE_SHM
extern interface_set_st *gpst_epif_base;
extern ifgrp_st *gpst_if_grp_base;

static inline interface_entry_st *PortEntry(uint8_t __port)
{
    if (!gpst_epif_base)
    {
        return NULL;
    }
    
    return &gpst_epif_base->epif_data[__port];
}

static inline oifgrp_st *ifgrp_get_oifgrp(uint8_t __group_id)
{
    if (!gpst_if_grp_base)
    {
        return NULL;
    }
    
    return &gpst_if_grp_base->oif_group[__group_id-1];
}
#else
typedef struct {
    ifgrp_st gpst_if_grp_base;    
    interface_set_st gpst_epif_base;
    uint32_t max_pkt_len;
}ifgrp_global_var_t;
#define OFFSET_IFGRP    offsetof(ifgrp_global_var_t, gpst_if_grp_base)
#define OFFSET_OIFGRP   (OFFSET_IFGRP + offsetof(ifgrp_st, oif_group))
#define OFFSET_OIF(num) (OFFSET_OIFGRP+sizeof(oifgrp_st)*(num))
#define OFFSET_IIFGRP   (OFFSET_IFGRP + offsetof(ifgrp_st, iif_group))
#define OFFSET_IIF(num) (OFFSET_IFGRP+sizeof(iifgrp_st)*(num))
#define OFFSET_INTFS    offsetof(ifgrp_global_var_t, gpst_epif_base)
#define OFFSET_INTF(num) (OFFSET_INTFS+offsetof(interface_set_st, epif_data)+sizeof(interface_entry_st)*(num))
#define OFFSET_MTU    offsetof(ifgrp_global_var_t, max_pkt_len)
#define SHM_SET_DATA(dst_offset, src, len)  \
    dpi_shm_data_set(KEY_IFGRP, src, dst_offset, len)
#define SHM_GET_DATA(dst, offset, len) \
    dpi_shm_data_get(KEY_IFGRP, dst, offset, len)
#endif


#endif /* _DPI_IFGRP_H */
