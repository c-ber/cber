
#ifndef _MODULE_DPI_ENCAP_H_
#define _MODULE_DPI_ENCAP_H_

#include "pub_header.h"
#include "dpi_errno.h"
#include "sapl_dpi_sdk.h"
#include "../if/dpi_xmit.h"


/***********************��ʱ����********************/
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

/************************�ṹ��***********************/


/*vlanͷ���ṹ��*/
typedef struct vlan_hdr_t 
{
   __be16               h_vlan_TCI;                /* Encapsulates priority and VLAN ID */
   __be16               h_vlan_encapsulated_proto; /* packet type ID field (or len) */
}__attribute__((packed))vlanhdr_t;


/**��װ���ƽṹ��**/
typedef struct _encap_ctr_t
{
    /*��װ�������Ϳ���*/
    uint8_t encapType;  /*ǰ�Ĳ��װ����(ENCAP_V4_UDP)*/
    uint8_t encodeType;  /*ʶ�����ݱ��뷽ʽ(ENCODE_TLV)*/

    /*��װ����*/
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct ip6_hdr    ipv6;
    struct udphdr     udp;
    struct tcphdr     tcp;
    
}dpi_encap_ctr_t;


/*payload��Ƭ��־����fir-1��fin-1������Ƭ;
                     fir-1��fin-0����Ƭ;
                     fin-0��fin-0���м�Ƭ;
                     fin-0��fin-1��βƬ;*/
typedef struct _payload_flagment_t
{
#ifndef CPU_ENDIAN_LITTLE
    uint8_t fir:1;  /*��Ƭ��־*/
    uint8_t fin:1;  /*βƬ��־*/
    uint8_t res:6;  /*����*/
#else
    uint8_t res:6;
    uint8_t fin:1;
    uint8_t fir:1;
#endif
    uint8_t syn; /*��Ƭ����˳���־����0��ʼ*/
}__attribute__((packed))payload_flagment_t;


/*��װ����ΪENCAP_V4_UDP�ı���ͷ*/
typedef struct _v4Udp_hdr_t
{
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct udphdr     udp;    
}__attribute__((packed))v4Udp_hdr_t;


/*payloadͷ��װ*/
typedef struct _encap_payload_hdr_t
{
    uint8_t encodeType;     /*���DPI_DATA_ENCODE_TYPE_E*/
    payload_flagment_t flagment;  /*��Ƭ��־�����payload_flagment_t*/
}__attribute__((packed))payload_hdr_t;


/*��װ����ΪENCAP_V4_UDP�ı���ͷ*/
typedef struct _encap_v4Udp_hdr_t
{
    struct ethhdr     eth;
    vlanhdr_t         vlan;
    struct iphdr      ipv4;
    struct udphdr     udp;
    payload_hdr_t     payhdr;
}__attribute__((packed))dpi_encap_v4Udp_hdr_t;



/*ת������*/
typedef struct _dpi_transmmit_action_t
{
    action_en action;          /*ת������*/
	uint8_t oifcnt;            /*���ӿ�����*/
    uint8_t oifgrpId[MAX_FWD_OIFGRP_NUM];  /*���ӿ�id*/
} acl_t;


/*���Ĵ������*/
typedef struct _dpi_pkt_transmmit_t
{
    uint8_t *ptr;      /*�����׵�ַ*/
    uint16_t pkt_len;  /*���ĳ���*/

    acl_t acl;         /*ת������*/
}trans_t;


/*tlv��ʽ*/
typedef struct _tlv_head_t
{
    uint8_t type;  /*����*/
    uint32_t len;  /*����*/
}__attribute__((packed))tlvhdr_t;




/***********************�궨��************************/
#define PROTO_VLAN              (0x8100)
#define PROTO_IPV4              (0x0800)
#define PROTO_UDP               (17)


#define MAC_HEAD_LEN            (14)
#define VLAN_HEAD_LEN           (4)
#define IPV4_HEAD_LEN           (20)
#define UDP_HEAD_LEN            (8)
#define TLV_HEAD_LEN            (sizeof(tlvhdr_t))       /*tlv��װͷ:3*/
#define ENCAP_V4UDP_HDR_LEN     (sizeof(dpi_encap_v4Udp_hdr_t)) /*v4 udp payload��ͷ����:49*/
#define V4UDP_HDR_LEN           (sizeof(v4Udp_hdr_t))    /*v4 udp��ͷ���� :46*/
#define PAYLOAD_HDR_LEN         (sizeof(payload_hdr_t))  /*payload ͷ���� :3*/

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


/*typeΪҪ��ֵ���ֶ�,va���ֽ�Ϊ����˳��*/
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

/*tlv��ʽ�ַ������ݱ���*/
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

/*tlv��ʽint_32���ݱ���*/
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

/*��ȡtlv�������ݵ��ܳ���*/
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

/************************ö��*************************/

/*������װ����*/
typedef enum 
{
    ENCAP_L3_V4 = 0,
    ENCAP_L3_V6 = 1
}DPI_ENCAP_L3_TYPE_E;


/*������װ����*/
typedef enum 
{
    ENCAP_L4_UDP = 0,
    ENCAP_L4_TCP = 1
}DPI_ENCAP_L4_TYPE_E;


/*����ǰ4���װ���ͣ�Ŀǰֻ֧��IPV4 UDP*/
typedef enum 
{
    ENCAP_V4_UDP = 0,   /*L3--IPV4; L4--UDP*/
    ENCAP_V4_TCP = 1,   /*L3--IPV4; L4--TCP*/
    ENCAP_V6_UDP = 2,   /*L3--IPV6; L4--UDP*/
    ENCAP_V6_TCP = 3    /*L3--IPV6; L4--TCP*/
}DPI_ENCAP_TYPE_E;


/*DPIʶ�����ݱ��뷽ʽ,Ŀǰֻ֧��TLV*/
typedef enum 
{
    ENCODE_TLV = 1      /*TLV*/
}DPI_DATA_ENCODE_TYPE_E;


typedef enum _data_type_t
{
    ENCODE_APP_ID    = 0x01,       /*Ӧ��ID*/
    ENCODE_APP_NAME  = 0x02,       /*Ӧ����*/
    ENCODE_USER_IP   = 0x03,       /*�û�IP*/
    ENCODE_APP_ACT   = 0x04,       /*Ӧ����Ϊ*/
    ENCODE_AUDIT_ACCOUNT = 0x05,   /*����˻�*/
    ENCODE_AUDIT_CONTENT = 0x06    /*�������*/
}data_type_t;






/*************************��������*********************/



#endif /*_MODULE_DPI_ENCAP_H_*/
