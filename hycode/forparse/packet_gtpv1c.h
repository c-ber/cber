#ifndef __GTPCV1_H
#define __GTPCV1_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <packet_entry.h>

typedef enum
{
    GTPV1C_PARA_IMSI_VALID          = 1<<0,
    GTPV1C_PARA_IMEI_VALID          = 1<<1,   
    GTPV1C_PARA_MSISDN_VALID        = 1<<2,   
    GTPV1C_PARA_CAUSE_VALID         = 1<<3,
    GTPV1C_PARA_BEARID_VALID        = 1<<4,
    GTPV1C_PARA_SEQ_NUM_VALID       = 1<<5,
    GTPV1C_PARA_GTPIP_C_UL_VALID    = 1<<6,     //gn-c�ӿ�:gtpc_ggsn_gtpip
    GTPV1C_PARA_GTPIP_C_DL_VALID    = 1<<7,     //gn-c�ӿ�:gtpc_sgsn_gtpip
    GTPV1C_PARA_GTPIP_U_UL_VALID    = 1<<8,     //gn-u�ӿ�:gtpu_ggsn_gtpip
    GTPV1C_PARA_GTPIP_U_DL_VALID    = 1<<9,     //gn-u�ӿ�:gtpu_ms_gtpip
    GTPV1C_PARA_TEID_C_UL_VALID     = 1<<10,    //gn-c�ӿ�:gtpc_ggsn_teid
    GTPV1C_PARA_TEID_C_DL_VALID     = 1<<11,    //gn-c�ӿ�:gtpc_sgsn_teid    
    GTPV1C_PARA_TEID_U_UL_VALID     = 1<<12,    //gn-u�ӿ�:gtpu_ggsn_teid
    GTPV1C_PARA_TEID_U_DL_VALID     = 1<<13,    //gn-u�ӿ�:gtpu_ms_teid    
    GTPV1C_PARA_NSAPI_VALID         = 1<<14,
    GTPV1C_PARA_PDN_VALID           = 1<<15,    
    GTPV1C_PARA_CELL_ID_VALID       = 1<<16,
    GTPV1C_PARA_LAC_VALID           = 1<<17,
}gtpv1c_para_valid_t;

typedef enum
{
    IE_TYPE_IS_GTPV1C_CAUSE=1,
    IE_TYPE_IS_GTPV1C_IMSI=2,
    IE_TYPE_IS_RAI=3,
    IE_TYPE_IS_GTPV1C_RECORDING=8,
    IE_TYPE_IS_GTPV1C_RECOVERY=14,
    IE_TYPE_IS_Selection_Mode=15,
    IE_TYPE_IS_GTPV1C_TEID_DATA=16,
    IE_TYPE_IS_GTPV1C_TEID_CONTROL_PLANE=17,
    IE_TYPE_IS_TEARDOWN=19,
    IE_TYPE_IS_GTPV1C_NSAPI=20,
    IE_TYPE_IS_CHARGING=26,
    IE_TYPE_IS_TRACE_REFERENCE=27,
    IE_TYPE_IS_TRACE_TYPE=28,
    IE_TYPE_IS_END_USER_ADDR=128,
    IE_TYPE_IS_ACCESS_POINT_NAME=131,
    IE_TYPE_IS_PROTOCOL_CONFIGURATION=132,
    IE_TYPE_IS_GTPV1C_GSN_ADDR=133,
    IE_TYPE_IS_GTPV1C_MSISDN=134,
    IE_TYPE_IS_QOS=135,
    IE_TYPE_IS_TFT=137,
    IE_TYPE_IS_TRIGGER_ID=142,
    IE_TYPE_IS_OMC_IDENTIFY=143,
    IE_TYPE_IS_COMMON_FLAG=148,
    IE_TYPE_IS_APN_RESTRICTION=149,
    IE_TYPE_IS_RAT=151,
    IE_TYPE_IS_USER_INFO=152,
    IE_TYPE_IS_MS_TIME=153,
    IE_TYPE_IS_GTPV1C_IMEI=154,
    IE_TYPE_IS_PRI_EXTENSION=255,

} gtpv1c_ie_type_t;
typedef enum
{
    GTPV1C_LOC_TYPE_CGI = 0,
    GTPV1C_LOC_TYPE_SAI = 1,    
    GTPV1C_LOC_TYPE_RAI = 2
}gtpv1c_location_type_em;

struct gtpv1c_hdr
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t npdu_num_flag:1; //N-PDU Number flag
    uint8_t seq_flag:1;  //Sequence number flag
    uint8_t ex_head_flag:1; //Extension Header flag 
    uint8_t resv:1;
    uint8_t protocol_type:1;
    uint8_t version:3;
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t version:3;
    uint8_t protocol_type:1;
    uint8_t resv:1;
    uint8_t ex_head_flag:1; //Extension Header flag 
    uint8_t seq_flag:1;  //Sequence number flag
    uint8_t npdu_num_flag:1; //N-PDU Number flag
#endif
    uint8_t  message_type;
    uint16_t length;
    uint32_t teid;
    uint16_t sequence_no;//seq noֻռ�����ֽ�
    uint16_t spare;//��PN��E��ʶΪ0ʱ����ռһ�ֽڣ����������
};




#define IPV4_TYPE                             (0x21)//�����ж�pdn�Ƿ�Ϊipv4������
#define IPV6_TYPE                             (0x57)//�����ж�pdn�Ƿ�Ϊipv6������
#define GTPV1_C_IE_TYPE_LEN                   (1)
#define GTPV1_C_IE_TLV_LEN                    (2)
#define CAUSE_LEN                             (1)
#define SELECTION_MODE_LEN                    (1)
#define RECORDING_LEN                         (1)
#define RECOVERY_LEN                          (1)
#define CHARGING_LEN                          (2)
#define REFERENCE_LEN                         (2)
#define TRACE_TYPE_LEN                        (2)
#define NSAPI_LEN                             (1)
#define TEARDOWN_LEN                          (1)
#define GTPV1_C_IE_TEID_LEN                   (4)
#define GTPV1_C_SEQ_NO_LEN                    (4)
#define GTPV1_C_COMMON_HDR_LEN                (8)//gtpͷ������С����Ϊ8�ֽ�
#define GSN_NUM_ZERO                          (0)
#define GSN_NUM_ONE                           (1)
#define GSN_NUM_TWO                           (2)
//��gtp�е�PN��S��E��־����һ����Ϊ1ʱ����������Ϊ12�ֽڣ��������ֻ���עseq no�ı�ʶ�Ƿ�Ϊ1����Ϊ1����12���ֽ�
#define GTPV1C_HDR_WITH_SEQ_NO_LEN            (12)

#define GTPv1C_VERSION(gtpv1c_hdr)  (gtpv1c_hdr->version)
#define GTPv1C_MESG_TYPE(gtpv1c_hdr)  (gtpv1c_hdr->message_type)
#define GTPv1C_LENGTH(gtpv1c_hdr)  (gtpv1c_hdr->length)
#define GTPv1C_TEID(gtpv1c_hdr)  (gtpv1c_hdr->teid)
#define PBUF_PTR_IP(_type, _ptr, _p, offset) (_ptr = (_type)(_p->ptr_offset+(char *)_p->ptr)+offset)
#define GTPC_IE_COMMON_HDR_LEN            (4)


/*typedef struct
{
    uint8_t spare:2;
    uint8_t cause:6;
} ie_cause_t;*/

typedef struct
{
    uint8_t spare:4;
    uint8_t nsapi:4;
}ie_nsapi_t;

#pragma pack(1)
typedef struct
{
    uint8_t  pdn_type_org;      /*�����ж���IP��ַ����PPPЭ�飬��ֵΪ1ʱ����ΪIP��ֵΪ0ʱ��ΪPPPЭ��*/
    uint8_t  pdn_type;          /*IP����: 0x01:IPV4,0x02:IPV6*/
} pdn_data_t;
#pragma pack()
#endif
