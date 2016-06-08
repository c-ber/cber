/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       pub_com.h
�����ʽ:     ASCII
����:         chenbin
����:         Jun 6, 2016
��ʷ:
    1.����    :Jun 6, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef PUB_COM_H_
#define PUB_COM_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>
#include "rfc-exp.h"


#ifndef TRUE
#define FALSE   0
#define TRUE    1
#endif

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif
#define cvmx_likely
#define cvmx_unlikely

#define CVMX_SHARED

#define cvmx_spinlock_lock(t)   pthread_mutex_lock(t)
#define cvmx_spinlock_unlock(t) pthread_mutex_unlock(t)
#define cvmx_spinlock_init(t)   pthread_mutex_init(t,NULL)

#define semp_named_shared_memblock_get(t) ((void*)NULL)
#define cvmx_get_core_num() 2
typedef pthread_mutex_t cvmx_spinlock_t;


typedef struct
{
    uint8_t packet_data[96];
}cvmx_wqe_t;


/*-----------------------------------------------------------------------*/
/*----------------------------��Ԫ��Ķ���--------------------------------*/
/*-----------------------------------------------------------------------*/
typedef struct v4_5tup_t
{
    unsigned int    sip;        /* source ip address */
    unsigned int    dip;        /* destination ip address */
    unsigned short  sp;         /* source port */
    unsigned short  dp;         /* destination port */
    unsigned char   proto;      /* protocol */
} V4_5TUP_T;


typedef struct
{
    int64_t bytes;
    int64_t pkts;
} stat64_st;


#define MAX_FWD_OIFGRP_NUM 4
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


/*add����󣬴��䵽mp�Ľṹ��*/
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


typedef enum
{
    R_ICMP   = 1,
    R_IGMP   = 2,
    R_TCP    = 6,
    R_UDP    = 17,
    R_ICMPV6 = 58,
    R_SCTP   = 132,

} semp_proto_en;

#define R_OTHER_DECODE 3
#define R_ICMP_DECODE R_OTHER_DECODE /*other*/
#define R_IGMP_DECODE R_OTHER_DECODE/*other*/
#define R_TCP_DECODE  0
#define R_UDP_DECODE  1
#define R_ICMPV6_DECODE  R_OTHER_DECODE
#define R_SCTP_DECODE  2





typedef enum {
    XSUCCESS = 0,   /** Successfully */
    XFAILURE,       /** Normal failure */
    XENOENT,        /** No such element */
    XEINVAL,        /** Invalid argument */
    XEACCES,        /** Permission denied */
    XENOMEM = 5,        /** Out of memory */
    XERANGE,        /** Out of range */
    XETIME,     /** Timer expired */
    XENOSPC,        /** No space left on device */
    XEHDERR,        /** Hardware error */
    XEMEM = 10,     /** Memory error */
    XEQUEF,     /** Queue full*/
    XEQUEE,     /** Queue empty */
    XEINIT,     /** Uninit*/
    XENOTFOUND,     /** NotFound*/
    XEUNMATCH = 15,     /** UNMATCH */
    XEEXIST,        /** Exist */
    XEOVERTIME,     /** copy to over times  */
    XETIMEOUT,      /** Timeout*/
    XECHECKERR ,     /* Check error */
    XEWQEALLOCFAIL = 20,      /* Wqe alloc fail */
    XEPKTALLOCFAIL,      /* Packet data buff alloc fail */
    XEACLERR,        /* RFC error */
    XEACLLISTERR,        /* RFC list error */
    XEACLCESERR,        /* RFC ces error */
    XEACLCELLERR = 25,        /* RFC cell error */
    SE_UNSUPPORT,
    XEPKTTOOLONG=30,
    XEADDIMSIFAIL,
    XEADDIMEIFAIL,
    XEADDMSISDNFAIL,
    XE_ADDTAI_FAIL,
    XE_ADDGUTI_FAIL,
    XEADDTIMESTAMPFAIL,
    XEUNKOWN,

    MP_OK                   = 0,           /* �������� */
    MP_PARSE_RLT            = 100,         /* Э������������ */
    MP_TABLE_EMPTY          = 101,         /* �ձ���� */
    MP_TABLE_FULL           = 102,         /* �������� */
    MP_NOT_FOUND            = 103,         /* ����δ�ҵ� */
    MP_CELL_FOUND           = 104,         /* �������ҵ� */
    MP_FUN_PARAM_ERR        = 105,         /* ���������Ƿ� */
    MP_NULL_POINT           = 106,         /* ��ָ����� */
    MP_SPACE_NOT_ENOUGH     = 107,         /* ָ��ָ��ĵ�ַ�ռ䲻�� */
    MP_NON_BCD_FORMAT       = 108,         /* ��BCD��ʽ */
    MP_NO_LOG_READ          = 109,         /* ��ǰû�пɶ���־ */
    MP_RELATE_SUCCESS       = 110,         /* gtpu�����ɹ� */
    MP_EXCEPTION_STAT       = 111,         /* δ������쳣������� */
    MP_FAIL                 = 255          /* ���������еĴ��󷵻� */
}mp_code_t;


#ifndef INVALID_RULE
#define INVALID_RULE        0
#endif

#ifndef VALID
#define VALID           1                   /** Symbol of instance valid */
#define INVALID     0          /** Symbol of instance invalid */
#endif

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif

#ifndef DOWN
#define DOWN    0
#endif

#ifndef UP
#define UP      1
#endif


#define  STREAM_SET_HIT_STAT(_A, _B, _C)
#define  RULE_STRING_GET_HIT_STAT(_A, _B, _C)

#define hydra_stat_inc(t) do{}while(0)
#define HYDRA_STAT_INC(t) do{}while(0)

#define  INVALID_GROUP      0


typedef enum
{
    ACTION_PERMIT   = (1 << 0),
    ACTION_FORWARD  = (1 << 1),
    ACTION_DROP     = (1 << 2),
    ACTION_MIRROR   = (1 << 3),
    ACTION_COPYTO   = (1 << 4)

} action_en;

#endif /* PUB_COM_H_ */
