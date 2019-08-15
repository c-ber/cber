
#ifndef _MODULE_DPI_ENCAP_H_
#define _MODULE_DPI_ENCAP_H_

#include "pub_header.h"
#include "dpi_errno.h"
#include "sapl_dpi_sdk.h"
#include "../if/dpi_xmit.h"


/***********************临时定义********************/
typedef unsigned long   uint64_t;
typedef long            int64_t;
typedef unsigned int    uint32_t;
typedef int             int32_t;
typedef unsigned short  uint16_t;
typedef short           int16_t;
typedef unsigned char   uint8_t;

//#define OIFGRP_MAX_SIZE (4)

#define CPU_ENDIAN_LITTLE LITTLE_ENDIAN

//#define MAX_PKT_LEN             (2048)

/*
typedef enum
{
    ACTION_PERMIT   = (1 << 0),    
    ACTION_FORWARD  = (1 << 1),
    ACTION_DROP     = (1 << 2),
    ACTION_MIRROR   = (1 << 3),
    ACTION_COPYTO   = (1 << 4)
    
} action_en;
*/

/************************结构体***********************/


/*vlan头部结构体*/
typedef struct vlan_hdr_t 
{
   __be16               h_vlan_TCI;                /* Encapsulates priority and VLAN ID */
   __be16               h_vlan_encapsulated_proto; /* packet type ID field (or len) */
}__attribute__((packed))vlanhdr_t;


/**封装控制结构体**/
typedef struct _encap_ctr_t
{
    /*封装编码类型控制*/
    uint8_t encapType;  /*前四层封装类型(ENCAP_V4_UDP)*/
    uint8_t encodeType;  /*识别数据编码方式(ENCODE_TLV)*/

    /*封装数据*/
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct ip6_hdr    ipv6;
    struct udphdr     udp;
    struct tcphdr     tcp;
    
}dpi_encap_ctr_t;


/*payload分片标志，当fir-1，fin-1，不分片;
                     fir-1，fin-0，首片;
                     fin-0，fin-0，中间片;
                     fin-0，fin-1，尾片;*/
typedef struct _payload_flagment_t
{
#ifndef CPU_ENDIAN_LITTLE
    uint8_t fir:1;  /*首片标志*/
    uint8_t fin:1;  /*尾片标志*/
    uint8_t res:6;  /*保留*/
#else
    uint8_t res:6;
    uint8_t fin:1;
    uint8_t fir:1;
#endif
    uint8_t syn; /*分片报文顺序标志，从0开始*/
}__attribute__((packed))payload_flagment_t;


/*封装类型为ENCAP_V4_UDP的报文头*/
typedef struct _v4Udp_hdr_t
{
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct udphdr     udp;    
}__attribute__((packed))v4Udp_hdr_t;


/*payload头封装*/
typedef struct _encap_payload_hdr_t
{
    uint8_t encodeType;     /*详见DPI_DATA_ENCODE_TYPE_E*/
    payload_flagment_t flagment;  /*分片标志，详见payload_flagment_t*/
}__attribute__((packed))payload_hdr_t;


/*封装类型为ENCAP_V4_UDP的报文头*/
typedef struct _encap_v4Udp_hdr_t
{
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct udphdr     udp;
    payload_hdr_t     payhdr;
}__attribute__((packed))dpi_encap_v4Udp_hdr_t;



/*转发动作*/
typedef struct _dpi_transmmit_action_t
{
    action_en action;          /*转发动作*/
	uint8_t oifcnt;            /*出接口数量*/
    uint8_t oifgrpId[MAX_FWD_OIFGRP_NUM];  /*出接口id*/
} acl_t;


/*报文传输控制*/
typedef struct _dpi_pkt_transmmit_t
{
    uint8_t *ptr;      /*报文首地址*/
    uint16_t pkt_len;  /*报文长度*/

    acl_t acl;         /*转发动作*/
}trans_t;


/*tlv格式*/
typedef struct _tlv_head_t
{
    uint8_t type;  /*类型*/
    uint32_t len;  /*长度*/
}__attribute__((packed))tlvhdr_t;




/***********************宏定义************************/
#define PROTO_VLAN              (0x8100)
#define PROTO_IPV4              (0x0800)
#define PROTO_UDP               (17)


#define MAC_HEAD_LEN            (14)
#define VLAN_HEAD_LEN           (4)
#define IPV4_HEAD_LEN           (20)
#define UDP_HEAD_LEN            (8)
#define TLV_HEAD_LEN            (sizeof(tlvhdr_t))       /*tlv封装头:3*/
#define ENCAP_V4UDP_HDR_LEN     (sizeof(dpi_encap_v4Udp_hdr_t)) /*v4 udp payload的头长度:49*/
#define V4UDP_HDR_LEN           (sizeof(v4Udp_hdr_t))    /*v4 udp的头长度 :46*/
#define PAYLOAD_HDR_LEN         (sizeof(payload_hdr_t))  /*payload 头长度 :3*/

#define ENCODE_BUF_LEN           (10000)

#define MAC_SET(va, v0, v1, v2 ,v3 ,v4 ,v5) \
    do{\
        va[0] = v0;\
        va[1] = v1;\
        va[2] = v2;\
        va[3] = v3;\
        va[4] = v4;\
        va[5] = v5;\
    }while(0)


/*type为要赋值的字段,va中字节为报文顺序*/
#ifdef CPU_ENDIAN_LITTLE
#define NETWORK_ORDER_UINT16(type, va) (type) = htons(va);
#else
#define NETWORK_ORDER_UINT16(type, va) (type)= va;
#endif

#ifdef CPU_ENDIAN_LITTLE
#define NETWORK_ORDER_UINT32(type, va) (type) = htonl(va);
#else
#define NETWORK_ORDER_UINT32(type, va) (type)= va;
#endif


#define DATA_ENABLE_MASK_CLEAR(mask)             ((mask) = 0)
#define DATA_ENABLE_MASK_ADD(mask, DATA_TYPE)    ((mask) |= (1U << DATA_TYPE))
#define DATA_ENABLE_MASK_REMOVE(mask, DATA_TYPE) ((mask) &= ~(1U << DATA_TYPE))
#define DATA_ENABLE_MASK_IS_SET(mask, DATA_TYPE) ((mask) & (1U << DATA_TYPE))

/*tlv格式字符串数据编码*/
#define TLV_DATE_STRING_SET(mask,type, len, data) \
    do{ \
        if(( len > 0 && len < 0xffffff) \
            && ((len+offset+TLV_HEAD_LEN) <= TlvLen))\
        {\
            if(DATA_ENABLE_MASK_IS_SET((mask), (type)))\
            {\
                *(pResultData + offset) = (type);\
                offset += sizeof(uint8_t);\
                NETWORK_ORDER_UINT32(*((uint32_t *)(pResultData + offset)), (len));\
                offset += sizeof(uint32_t);\
                memcpy(pResultData + offset, (data), (len));\
                offset += (len);\
            }\
        }\
        else\
        {\
            return DPI_SPACE_NOT_ENOUGH;\
        }\
    }while(0)

/*tlv格式int_32数据编码*/
#define TLV_DATE_INT_32_SET(mask,type, len, data) \
    do{ \
        if(( len > 0 && len < 0xffffff) \
            && ((len+offset+TLV_HEAD_LEN) <= TlvLen))\
        {\
            if(DATA_ENABLE_MASK_IS_SET((mask), (type)))\
            {\
                *(pResultData + offset) = (type);\
                offset += sizeof(uint8_t);\
                NETWORK_ORDER_UINT32(*((uint32_t *)(pResultData + offset)), (len));\
                offset += sizeof(uint32_t);\
                NETWORK_ORDER_UINT32(*((uint32_t *)(pResultData + offset)), (data));\
                offset += (len);\
            }\
        }\
        else\
        {\
            return DPI_SPACE_NOT_ENOUGH;\
        }\
    }while(0)

/*获取tlv编码数据的总长度*/
#define TLV_DATA_LEN_ADD(mask, type, len, total_len)\
    do{\
        if(len > 0 && len < 0xffff)\
        {\
            if(DATA_ENABLE_MASK_IS_SET((mask), (type)))\
            {\
                total_len += TLV_HEAD_LEN + len;\
            }\
        }\
    }while(0)

/************************枚举*************************/

/*网络层封装类型*/
typedef enum 
{
    ENCAP_L3_V4 = 0,
    ENCAP_L3_V6 = 1
}DPI_ENCAP_L3_TYPE_E;


/*传输层封装类型*/
typedef enum 
{
    ENCAP_L4_UDP = 0,
    ENCAP_L4_TCP = 1
}DPI_ENCAP_L4_TYPE_E;


/*报文前4层封装类型，目前只支持IPV4 UDP*/
typedef enum 
{
    ENCAP_V4_UDP = 0,   /*L3--IPV4; L4--UDP*/
    ENCAP_V4_TCP = 1,   /*L3--IPV4; L4--TCP*/
    ENCAP_V6_UDP = 2,   /*L3--IPV6; L4--UDP*/
    ENCAP_V6_TCP = 3    /*L3--IPV6; L4--TCP*/
}DPI_ENCAP_TYPE_E;


/*DPI识别数据编码方式,目前只支持TLV*/
typedef enum 
{
    ENCODE_TLV = 1      /*TLV*/
}DPI_DATA_ENCODE_TYPE_E;


typedef enum _data_type_t
{
    ENCODE_APP_ID    = 0x01,       /*应用ID*/
    ENCODE_APP_NAME  = 0x02,       /*应用名*/
    ENCODE_USER_IP   = 0x03,       /*用户IP*/
    ENCODE_APP_ACT   = 0x04,       /*应用行为*/
    ENCODE_AUDIT_ACCOUNT = 0x05,   /*审计账户*/
    ENCODE_AUDIT_CONTENT = 0x06    /*审计内容*/
}data_type_t;






/*************************函数声明*********************/



#endif /*_MODULE_DPI_ENCAP_H_*/
