/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       pub_com.h
编码格式:     ASCII
作者:         chenbin
创建:         May 10, 2016
历史:
    1.日期    :May 10, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef PUB_COM_H_
#define PUB_COM_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "rfc-exp.h"

#define MAX_NUM_RULE_FIVETUPLE          MPP_MAX_FILTERS   /*五元组规则支持的最大个数*/
#define MAX_NUM_RULE_FIVETUPLE_DEFAULT  48
#define STREAM_INVALID_INDEX            65535
#define OFFSET_RULE_FIVETUPLE_DEFAULT   MAX_NUM_RULE_FIVETUPLE

extern rfc_acl_s      *g_ix_rfc_table_base;

typedef enum _MP_CODE
{
    MP_OK                   = 0,           /* 正常返回 */
    MP_PARSE_RLT            = 100,         /* 协议解析结果错误 */
    MP_TABLE_EMPTY          = 101,         /* 空表操作 */
    MP_TABLE_FULL           = 102,         /* 表项已满 */
    MP_NOT_FOUND            = 103,         /* 表项未找到 */
    MP_CELL_FOUND           = 104,         /* 表项已找到 */
    MP_FUN_PARAM_ERR        = 105,         /* 函数参数非法 */
    MP_NULL_POINT           = 106,         /* 空指针错误 */
    MP_SPACE_NOT_ENOUGH     = 107,         /* 指针指向的地址空间不够 */
    MP_NON_BCD_FORMAT       = 108,         /* 非BCD格式 */
    MP_NO_LOG_READ          = 109,         /* 当前没有可读日志 */
    MP_RELATE_SUCCESS       = 110,         /* gtpu关联成功 */
    MP_EXCEPTION_STAT       = 111,         /* 未建表的异常关联情况 */
    MP_FAIL                 = 255          /* 正常处理中的错误返回 */
}mp_code_t;


/*-----------------------------------------------------------------------*/
/*----------------------------rule.c的定义--------------------------------*/
/*-----------------------------------------------------------------------*/
typedef enum _RULE_ACTION_E
{
    ACT_NULL        = 0,
    ACT_PERMIT      = ACT_NULL,
    ACT_FORWARD,    /* action forwarding */
    ACT_DROP,       /* action droping */
    ACT_REDIRECT,   /* redirect action */
    ACT_SSN,        /* action session */
    ACT_TRUN,       /* action packet truncate */
    ACT_SAMP,       /* packet sample */
    ACT_SETLINK,    /* set link */
    ACT_LINKDIR,    /* set link direction */
    ACT_NUM
} RULE_ACTION_E;

typedef enum _RULE_PROTO_E
{
    PROTO_TCP,      /* protocol tcp */
    PROTO_UDP,      /* protocol udp */
    PROTO_ICMP,     /* protocol icmp */
    PROTO_IGMP,     /* protocol igmp */
    PROTO_SCTP,     /* protocol sctp */
    PROTO_ALL,      /* all protocols */
    PROTO_NONE,     /* any protocols */

    PROTO_NUM
} RULE_PROTO_E;

typedef enum
{
    TCPFLAG_FIN,     /* fin flag */
    TCPFLAG_SYN,     /* syn flag */
    TCPFLAG_RST,     /* rst flag */
    TCPFLAG_PSH,     /* psh flag */
    TCPFLAG_ACK,     /* ack flag */
    TCPFLAG_URG,     /* urg flag */
    TCPFLAG_ALL,     /* all flag */

    TCPFLAG_NUM
} RULE_TCPFLAG_E;

typedef enum _REAL_PROTO_E
{
    R_ICMP   = 1,
    R_IGMP   = 2,
    R_TCP    = 6,
    R_UDP    = 17,
    R_ICMPV6 = 58,
    R_SCTP   = 132,
} REAL_PROTO_E;

#define PROTO_RANGE_MAX    (1 << PROTO_NUM)
#define TCPFLAG_RANGE_MAX  (1<< TCPFLAG_NUM)

typedef enum _STR_OFFSET_E
{
    OFFSET_INVALID,
    OFFSET_HEAD,
    OFFSET_TAIL,
    OFFSET_NUM
} STR_OFFSET_E;

/*-----------------------------------------------------------------------*/
/*----------------------------六元组的定义--------------------------------*/
/*-----------------------------------------------------------------------*/
typedef struct v4_5tup_t
{
    unsigned int    sip;        /* source ip address */
    unsigned int    dip;        /* destination ip address */
    unsigned short  sp;         /* source port */
    unsigned short  dp;         /* destination port */
    unsigned char   proto;      /* protocol */
} V4_5TUP_T;

#define SEMP_PBMP_WORD_MAX  (((((64 + 32 - 1)/32)*32) + 32-1) / 32)   //就等于2
typedef struct semp_pbmp
{
    uint32_t pbits[SEMP_PBMP_WORD_MAX];
} semp_pbmp_t;

typedef struct v4_6tup_t
{
    V4_5TUP_T tup5;          /*ipv4 5-tuple*/
    semp_pbmp_t iifGrpId;    /*input port group*/
} V4_6TUP_T;

typedef struct acl_7k_t
{
    unsigned char action;       /* action type */
    /* oifgrp mask, every bit correspond one oifgrp */
    uint64_t oifgrpMask;
}ACL_7K_T;

typedef struct rule_v4_mask_6tup_t
{
    V4_6TUP_T data;            /* ipv4 5-tuple */
    V4_6TUP_T mask;            /* ipv4 mask 5-tuple */
    ACL_7K_T  acl;             /* rule acl */
} RULE_V4_MASK_6TUP_T;


/*-----------------------------------------------------------------------*/
/*----------------------------接口组的宏定义------------------------------*/
/*-----------------------------------------------------------------------*/

void semp_format_integer(char *buf, unsigned int n, int min_digits, int base);
int semp_pbmp_bmnull(semp_pbmp_t *bmp);
int semp_pbmp_is_allf(semp_pbmp_t *bmp);
int semp_pbmp_bmeq(semp_pbmp_t *bmp1, semp_pbmp_t *bmp2);
int semp_pbmp_bmeq_bit(semp_pbmp_t *bmp1, semp_pbmp_t *bmp2);
char * semp_pbmp_format(semp_pbmp_t bmp, char *buf);
int semp_pbmp_decode(char *s, semp_pbmp_t *bmp);
int semp_popcount(unsigned int n);
int semp_pbmp_get_num(semp_pbmp_t *bm);
int semp_bpmp_max_port(semp_pbmp_t *bm);
char *hexstr2binstr(char *hexbuf, char *binbuf, int size);


#define IIFGRP_MAX 32
#define IIFGRP_MEM_MAX 32 /* iifgrp member must <=32 in same iifgrp */

#define OIFGRP_MAX 32
#define OIFGRP_MEM_MAX 16 /* oifgrp member must <=16 in same oifgrp */

#define OIFGRP_II_MAX 50

#define IF_MAX 384

#define SEMP_PBMP_WIDTH     (((64 + 32 - 1)/32)*32)
#define SEMP_PBMP_WORD_WIDTH    32

#define SEMP_PBMP_WORD_GET(bm, word)        ((bm)->pbits[(word)])
#define SEMP_PBMP_WORD_SET(bm, word, val)   ((bm)->pbits[(word)] = (val))

#define SEMP_PBMP_PORT_MAX 64

#define SEMP_PBMP_WENT(port)        ((port)/SEMP_PBMP_WORD_WIDTH)
#define SEMP_PBMP_WBIT(port)        (1U<<((port) % SEMP_PBMP_WORD_WIDTH))

#define SEMP_PBMP_ENTRY(bm, port)   \
    (SEMP_PBMP_WORD_GET(bm,SEMP_PBMP_WENT(port)))
#define SEMP_PBMP_MEMBER(bm, port)  \
    ((SEMP_PBMP_ENTRY(bm, port) & SEMP_PBMP_WBIT(port)) != 0)

#define SEMP_PBMP_BMCLEAR(bm)       \
    (SEMP_PBMP_WORD_GET(bm, 0) = SEMP_PBMP_WORD_GET(bm, 1) = 0)

#define SEMP_PBMP_BMNULL(bm)        \
    (SEMP_PBMP_WORD_GET(bm, 0) == 0 && SEMP_PBMP_WORD_GET(bm, 1) == 0)

#define SEMP_PBMP_BMALLF(bm)        \
    (SEMP_PBMP_WORD_GET(bm, 0) == -1 && SEMP_PBMP_WORD_GET(bm, 1) == -1)

#define SEMP_PBMP_BMEQ(bma, bmb)    \
    ((SEMP_PBMP_WORD_GET(bma, 0) == SEMP_PBMP_WORD_GET(bmb, 0)) && \
     (SEMP_PBMP_WORD_GET(bma, 1) == SEMP_PBMP_WORD_GET(bmb, 1)))

#define SEMP_PBMP_BMEQ_BIT(bma, bmb)    (semp_pbmp_bmeq_bit(&bma, &bmb))

#define SEMP_PBMP_BMOP(bma, bmb, op)    do { \
    SEMP_PBMP_WORD_GET(bma, 0) op SEMP_PBMP_WORD_GET(bmb, 0); \
    SEMP_PBMP_WORD_GET(bma, 1) op SEMP_PBMP_WORD_GET(bmb, 1); \
    } while (0)

#define SEMP_PBMP_COUNT(bm, count)  \
    (count = semp_popcount(SEMP_PBMP_WORD_GET(bm, 0)) + \
         semp_popcount(SEMP_PBMP_WORD_GET(bm, 1)))


#define SEMP_PBMP_CLEAR(bm)     SEMP_PBMP_BMCLEAR(bm)

#define SEMP_PBMP_SET_ALLF(bm)  do{  \
    memset(&bm, 0xff, sizeof(bm));  \
}while(0)

#define SEMP_PBMP_ITER(bm, port)    \
    for ((port) = 0; (port) < SEMP_PBMP_PORT_MAX; (port)++) \
        if (SEMP_PBMP_MEMBER((bm), (port)))

#define SEMP_PBMP_IS_NULL(bm)       (SEMP_PBMP_BMNULL(bm))
#define SEMP_PBMP_NOT_NULL(bm)      (!SEMP_PBMP_BMNULL(bm))
#define SEMP_PBMP_IS_ALLF(bm)       (SEMP_PBMP_BMALLF(bm))
#define SEMP_PBMP_NOT_ALLF(bm)      (!SEMP_PBMP_BMALLF(bm))
#define SEMP_PBMP_EQ(bma, bmb)      (SEMP_PBMP_BMEQ(bma, bmb))
#define SEMP_PBMP_EQ_BIT(bma, bmb)  (SEMP_PBMP_BMEQ_BIT(bma, bmb))
#define SEMP_PBMP_NEQ(bma, bmb)     (!SEMP_PBMP_BMEQ(bma, bmb))

#define SEMP_PBMP_ASSIGN(dst, src)  (dst) = (src)

#define SEMP_PBMP_PORT_ADD(bm, port)    \
    (SEMP_PBMP_ENTRY(bm, port) |= SEMP_PBMP_WBIT(port))
/*-----------------------------------------------------------------------*/
/*----------------------------semp_fs.h----------------------------------*/
/*-----------------------------------------------------------------------*/

#define FAL_SLP_HWPORT_MAX 64
#define FAL_SLP_MAX 64
#define FAL_SLP_UNREACHABLE_LPORT_NO        (FAL_SLP_HWPORT_MAX * 4)
typedef struct
{
    uint64_t    attr;
    uint8_t     lp_num;
    uint64_t    lpno[FAL_SLP_HWPORT_MAX];
} fs_lp_t;

typedef uint16_t    uint128_t[8];  //ip address type
typedef uint8_t     semp_mac_t[6];
typedef uint16_t    semp_vid_t;
typedef uint32_t    semp_ip_t;
typedef uint8_t     semp_ip6_t[16];
typedef uint16_t    semp_l4_port_t;
typedef uint8_t     semp_ip_proto_t;
typedef uint8_t     semp_tcpflag_t;
typedef uint8_t     semp_range_t;
typedef uint64_t    semp_inport_t;
typedef uint32_t    semp_time_t;

typedef struct
{
    semp_ip_t       sip;
    semp_ip_t       dip;
    semp_l4_port_t  sp;
    semp_l4_port_t  dp;
    semp_ip_proto_t proto;
} fs_v4_tup5_t;


typedef struct
{
    int slot;
    fs_lp_t          lport;
    semp_pbmp_t      port;
} fs_ifid_bpmp_t;

typedef struct
{
    fs_v4_tup5_t    tup5;
    fs_ifid_bpmp_t  iif;
    uint32_t        rangid;
    uint8_t         tcpflag;
    uint16_t        ethertype;
    uint16_t        outtervlan;
} fs_v4_tupx_t;

typedef struct acl_multi_t
{
#define ACL_MAX_OIFGRP 4
    uint8_t action;
    uint8_t oifgrp[ACL_MAX_OIFGRP];
    uint8_t oifgrp_num;
}ACL_MULTI_T;/*muti action*/

typedef struct
{
    uint32_t        index;  // index,id of the rule. It is the address for TCAM.
    fs_v4_tupx_t    data;
    fs_v4_tupx_t    mask;
    ACL_MULTI_T     acl;
    semp_pbmp_t     portmask;
} fs_v4_mask_rule_7k_t;

typedef enum
{
    FS_ACT_NULL,
    FS_ACT_FORWARD,
    FS_ACT_DROP,
    FS_ACT_REDIRECT,
    FS_ACT_MORROR,
    FS_ACT_SSN,
    FS_ACT_CUT,
    FS_ACT_PKTSAMP,
    FS_ACT_DEBUG,
    FS_ACT_DUPLICATE,
    FS_ACT_CPU,
    FS_ACT_FORWARD_BACKPLANE,
    FS_ACT_FORWARD_AND_STRIP_OUTERVLAN,
    FS_ACT_REDIRECTBPMP,
    FS_ACT_REDIRECTBPMP_WITH_BPMP,
    FS_ACT_OUTERVLANNEW,
    FS_ACT_MAX
} fs_action_e;

/*-----------------------------------------------------------------------*/
/*----------------------------接口组的宏----------------------------------*/
/*-----------------------------------------------------------------------*/

#define OIFGRP_BPLAN_TAG_INVALID    0

typedef enum
{
    WORK_MODE_STANDALONE = 0,    /* standalone work mode */
    WORK_MODE_SWAPPED    = 1,    /* swapped work mode */
    WORK_MODE_NUM                /* work mode number */
}WORK_MODE_E;




/*-----------------------------------------------------------------------*/
/*----------------------------hydra层------------------------------------*/
/*-----------------------------------------------------------------------*/
typedef enum
{
    ACTION_PERMIT   = (1 << 0),
    ACTION_FORWARD  = (1 << 1),
    ACTION_DROP     = (1 << 2),
    ACTION_MIRROR   = (1 << 3),
    ACTION_COPYTO   = (1 << 4)
} action_en;

#define  MULTI_OIFGRP 1
#define MAX_FWD_OIFGRP_NUM 4

typedef struct
{
    uint16_t    ul_tag_id;
    uint16_t    us_iifgrp;
    uint32_t    ul_src_ip_start;
    uint32_t    ul_src_ip_end;
    uint32_t    ul_dst_ip_start;
    uint32_t    ul_dst_ip_end;
    uint16_t    us_src_port_start;
    uint16_t    us_src_port_end;
    uint16_t    us_dst_port_start;
    uint16_t    us_dst_port_end;
    uint8_t     uc_protocol_start;
    uint8_t     uc_protocol_end;
    uint8_t     uc_iifgrp_start;
    uint8_t     uc_iifgrp_end;
    uint8_t     mirror_en;
    uint8_t     copy_en;
    action_en   action;
    uint16_t    ul_rule_id;
    uint8_t     uc_iifgrp_type;
    uint32_t    ul_iif_grp;
    uint32_t    ul_oif_grp_num;
    uint32_t    ul_oif_grp[MAX_FWD_OIFGRP_NUM];
    uint32_t    ul_mif_grp;
    uint32_t    ul_vif_grp;
    uint32_t    ul_out_port;
    uint32_t    ul_payload;
    uint32_t    ul_string;
}rule_mask_t;



typedef union
{
    uint64_t    data64;
    struct
    {
        uint32_t    valid:             1;  /** valid control, vaule in VALID and INVALID */
        uint32_t    action:            8;  /** forward, permit, drop, and so on */
        uint32_t    fwd_oifgrp_num:    3;  /* forward oifgrp number */
        uint32_t    iifgrp:            6;  /** input interface group */
        uint32_t    out_port:          8;  /** single output port */
        uint32_t    rsvd:              6; /* reserved */
        uint8_t     oifgrp[MAX_FWD_OIFGRP_NUM];  /** output interface group */
    };

} transimit_entry;

typedef struct
{
    int64_t bytes;
    int64_t pkts;
} stat64_st;

/*add命令后，传输到mp的结构体*/
typedef union
{
    uint64_t    data64[6];
    struct
    {
        uint64_t    valid: 1;       /** Validate control bit of current slot, value in VALID and INVALID */
        uint64_t    enabled: 1;     /** Enable control bit of current rule, value in ENABLE and DISABLE */
        uint64_t    rule_id: 16;    /** Rule id */
        uint64_t    iifgrp_type: 1; /** input interface type  (0 : input interface group;  1 : virtual interfacegroup) */
        uint64_t    tcp_flag: 8;
        uint64_t    payload_id: 8;
        uint64_t    string_id: 8;
        uint64_t    addr_ver: 3;    /** addr type (0x4 : ipv4;  0x6 : ipv6 ) */
        uint64_t    resv0:  18;

        stat64_st   hit;
        stat64_st   miss;

        transimit_entry transimit;
    };
} rule_stream_st;


#endif /* PUB_COM_H_ */


