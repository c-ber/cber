/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       cvmx_common.h
编码格式:     ASCII
作者:         chenbin
创建:         Oct 20, 2015
历史:
    1.日期    :Oct 20, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef CVMX_COMMON_H_
#define CVMX_COMMON_H_
#include <stdint.h>
#include <pthread.h>

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



typedef enum mp_error_e{
	MP_E_NONE                 = 0,          /* OK */
	MP_E_INTERNAL             = -1,         /* Internal error */ 
	MP_E_MEMORY               = -2,         /* Out of memory */
	MP_E_UNIT                 = -3,         /* Invalid unit */
	MP_E_PARAM                = -4,         /* Invalid parameter */
	MP_E_EMPTY                = -5,         /* Table empty */
	MP_E_FULL                 = -6,         /* Table full */
	MP_E_NOT_FOUND            = -7,         /* Entry not found */
	MP_E_EXISTS               = -8,         /* Entry exists */
	MP_E_TIMEOUT              = -9,         /* Operation timed out */
	MP_E_BUSY                 = -10,        /* Operation still running */
	MP_E_FAIL                 = -11,        /* Operation failed */
	MP_E_DISABLED             = -12,        /* Operation disabled */
	MP_E_BADID                = -13,        /* Invalid identifier */
	MP_E_RESOURCE             = -14,        /* No resources for operation */
	MP_E_CONFIG               = -15,        /* Invalid configuration */
	MP_E_UNAVAIL              = -16,        /* Feature unavailable */
	MP_E_INIT                 = -17,        /* Feature not initialized */
	MP_E_PORT                 = -18,        /* Invalid port */
	MP_E_EXCEED               = -19,        /* exceed range */
	MP_E_EINVAL               = -20,        /* Invalid argument */
	MP_E_AVP_EINVAL           = -21,        /*invalid avp*/
	MP_E_RAND_EINVAL          = -22,        /*invalid rand */
	MP_E_KASME_EINVAL         = -23,        /*invalid kasme */
	MP_E_NOT_VLAN_PKT         = -24,        /*in packet without vlan tag*/
	MP_E_LIMIT                = -25 ,       /* Unknown error, Must come last */ 
	MP_E_INVALID_PACKET       = -26,        /*The packet we don't care*/
} mp_error_t;



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

} semp_tcpflag_en;


typedef union
{
    uint64_t    value[2];

    struct
    {
        uint32_t    reserved;
        uint32_t    addr_v4;
    };
    struct
    {
        uint64_t    addr_v6_upper;
        uint64_t    addr_v6_lower;
    };

} ip_addr_t;

typedef union
{
    uint8_t  val[6];
    struct
    {
        uint32_t val32;
        uint16_t val16;
    };

} mac_addr_t;

typedef union
{
    uint16_t    data16;
    struct
    {
        uint16_t    type: 3;
        uint16_t    resv: 13;
    };
    struct
    {
        uint16_t    tos: 3;             /** For 7 tuple only */
        uint16_t    rsvd: 13;
    };
} session_type_st;


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
        session_type_st st;
    };
} tuple_v4;


/*用于支持IPV4和IPV6*/
typedef union
{
    uint64_t u64[2];
    uint32_t v4;
    uint64_t v6[2];
}mp_ip_t;

typedef struct
{
    uint8_t version;
    mp_ip_t ip;
}__attribute__((packed)) ip_comm_t;


typedef union
{
    uint64_t        data64[5];
    struct
    {

        ip_comm_t       sip;
        ip_comm_t       dip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        session_type_st st;
    };
} tuple_v;

typedef union
{
    uint64_t        data64[5];
    struct
    {
        /** Word 0 */
        uint64_t        sip_upper;
        /** Word 1 */
        uint64_t        sip_lower;
        /** Word 2 */
        uint64_t        dip_upper;
        /** Word 3 */
        uint64_t        dip_lower;
        /** Word 4 */
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        session_type_st st;
    };
} tuple_v6;

typedef struct
{
    tuple_v4        v4;
    tuple_v         v;
} ip5tuple_st;

#define LOG_PRINT(mid, level, fmt, ...)
#define SEMP_TIME_RECORDER_TICK

#endif /* CVMX_COMMON_H_ */
