#ifndef __PACKET_ENTRY_H
#define __PACKET_ENTRY_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>

#include "hydra_stat.h"
#include "cvmx_common.h"

#include "parse_common.h"
#include "semp_hydra_relate.h"

#define __LITTLE_ENDIAN_BITFIELD


#include "packet_ethernet.h"
#include "packet_outerip.h"
#include "packet_l4.h"
//#include "packet_sctp.h"
//#include "packet_tcp.h"
#include "packet_udp.h"
#include "packet_gre.h"
//#include "packet_s1ap.h"
//#include "packet_diameter.h"
//#include "packet_gtpv2c.h"
//#include "packet_gtpu.h"
//#include "packet_m3ua.h"
//#include "packet_sccp.h"
//#include "packet_gtpv1c.h"
//#include "packet_ranap.h"
//#include "gmm_nas_parse.h"


#ifndef DOWN
#define DOWN    0
#endif

#ifndef UP
#define UP      1
#endif

typedef struct
{
    ip_comm_t srcip;
    ip_comm_t dstip;
    uint16_t srcport;
    uint16_t dstport;
    uint8_t  protocol;
}parse_ip_t;



typedef enum
{
    PARSE_UNKNOW,
    PARSE_PROTOCO_IP4 ,
    PARSE_PROTOCO_IP6 ,        
    PARSE_PROTOCOL_S1AP ,
    PARSE_PROTOCOL_NAS ,
    PARSE_PROTOCOL_GTPCV1 ,
    PARSE_PROTOCOL_GTPCV2 ,
    PARSE_PROTOCOL_DIAMETER,
    PARSE_PROTOCOL_GTPU,
    PARSE_PROTOCOL_IUPS
}prase_protocol_em;



typedef enum
{
    PARSE_SUCCESS =0,     /*protocol identify OK*/
    PARSE_HEADER_ERR,  /*protocol identify Header not Sync*/
    PARSE_UNKNOW_OR_NOSUPPORT, /*protocol identify Unknow*/
}parse_result_t;

typedef struct
{
    uint16_t    bear_id;        /*bear id*/
    ip_comm_t   gTP_ip;         /*gtp-u ip*/
    uint32_t    gTP_id;         /*gtp-u teid*/
}TransportLayerMsg_t;

typedef  struct
{
    uint8_t              isPacketValid; /*对关联模块是否是有效的， YES有效 NO无效*/
    uint8_t              pduCode;       /*initiatingMessage successfulOutcome unsuccessfulOutcome outcome*/
    uint8_t              procecode;     /* Procedure Code */
    uint8_t              mask;          /*信息是否有效的标志位，详见 RANAP_IE_VALID_TYPE_EM*/
    TransportLayerMsg_t  transportMsg;  /*transport layer message*/
    rai_t                rai;           /*路由区标志*/
    imsi_t               imsi;          /*International Mobile Subscriber Identification Number*/
}parse_ranap_t;

typedef struct
{
    uint8_t             direction;  /* packet direction, 1: up direction from eNodeB to MME,
                                                          0: down direction, from MME to eNodeB */
    ip_comm_t           rncip;
    ip_comm_t           sgsnip;

//    parse_sccp_t        sccp_info;
    parse_ranap_t       ranap_info;/*RAI\teid\ip\procecode\protocolIE_id\bear_id\imsi\mask*/
//    parse_gmm_nas_t     gmm_info;/*RAI\msgtype\imsi\p-tmsi\imei\imsi\mask*/
}parse_IuPS_t;

typedef struct
{
    lte_imsi_t          imsi;  /*IMSI*/
    lte_imei_t          imei;  /*IMEI*/
    lte_msisdn_t        msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;
    uint8_t             message_type;
    uint8_t             gtp_version;
    uint8_t             cause;    /*check response*/
    uint8_t             nsapi;
    uint16_t            message_len;
    uint16_t            sequence_number;
    ip_comm_t           dstip;
    ip_comm_t           srcip;
    uint32_t            teid;       //CTPV1-C头部的TEID
    pdn_t               pdn;
    ip_comm_t           gtp_ip[GTP_MAX];
    uint32_t            gtp_teid[GTP_MAX];
    cell_id_t           cell_id;
    lac_t               lac;
    uint32_t            mask;       //用于标志那个参数有效，见gtpv1c_para_valid_t
}parse_gtpv1c_t;


typedef struct
{
    uint32_t sequence_no;  /*sequence count*/
    uint8_t bear_id;      /*EPS bearer identity*/
    uint8_t dir;         /*direction*/
    uint32_t data_len;      /*ciphered message length*/
    uint8_t *data;             /* pointer to ciphered message*/
    lte_kasme_t kasme;      /*key*/
    uint8_t type;           /*algorithm type*/
} nas_info_t;


typedef struct
{
    uint8_t *data;         /*output plain code*/
    uint32_t len;          /*output plaine code length*/
} nas_plain_t;

typedef enum
{
    NAS_MSG_TYPE_ATTACH_ACCEPT    = 0x42,
    NAS_MSG_TYPE_TAU_ACCEPT       = 0x49,
    NAS_MSG_GUTI_REALLOCATION_CMD = 0x50,
    NAS_MSG_TYPE_MAX
}NAS_MSG_TYPE_E;

typedef struct
{
    ip_comm_t   tip;
    uint32_t    teid;
}parse_rab_t;

enum type_identity_em
{
    TYPE_INVALID = 0,
    TYPE_OLD_GUTI = 6,
    TYPE_IMSI = 1,
};

typedef struct
{
    uint16_t    EMM_message_type;   //NAS EPS Mobility Management Message Type
    uint16_t    cipher_alg_type;    //Type of ciphering algorithm
    uint16_t    nas_pkt_off;
    uint16_t    nas_pkt_len;
    //uint16_t    nas_cipher_off;     //offset to cipher data
    uint8_t *   nas_cipher_ptr;     //pointer to cipher data
    uint16_t    nas_cipher_len;     //length of the cipher data
    lte_rand_t  rand;               //rand value from the NAS PDU
    uint8_t     ciphered_flag;      //flag indicate if the message has been ciphered
    uint8_t     sequence_no;
    uint8_t     submit_flag;        //whether submit to contrl core
    lte_guti_t  guti;               //store guti in nas
    union{
        lte_guti_t  guti;
        lte_imsi_t  imsi;
    }init_identify;
    enum type_identity_em type_of_identity;  /* Indicating intialiaUEMessage packet has imsi or old_GUTI, 1: for imsi, 0: for old_guti */
}parse_nas_t;



typedef  struct
{
    uint8_t     direction;  /* packet direction, 0: up direction from eNodeB to MME, 1: down direction, from MME to eNodeB */
    uint8_t     procecode;  /* Procedure Code */
    uint32_t    protocolIE_id;  /**/
    uint16_t    bear_id;          /* NAS use */
    uint16_t    sequence_no;      /* NAS use */
    uint32_t    cn_id;
    uint32_t    access_node_id;
    ip_comm_t   access_node_ip;
    ip_comm_t   cn_ip;
    lte_tai_t   tai;
    parse_nas_t nas;
    uint8_t     nas_exist;
    parse_rab_t rab_info;
    parse_rab_t s1u_dl_fteid;
    lte_ecgi_t  ecgi;
    uint8_t     ecgi_exist;
    uint8_t     is_enb_path_switch_suc;/*if the ENodeB path switch process success*/
}parse_s1ap_t;

typedef struct
{
    prase_protocol_em  protocol;
    parse_result_t     result;
    uint8_t            IuPS_msg_num;
    uint8_t            is_sccp_pkt;
    union
    {
        parse_s1ap_t s1ap;
        parse_gtpv1c_t gtpv1c;
    };
    uint8_t  version;
    parse_ip_t ip;
}parse_pkt_info_t;



struct pbuf
{
    void *ptr;                /* 报文的头部指针 */
    uint16_t len;             /* 报文长度       */

    uint16_t l4_total_len;    /* L3网络层字段，承载的上层协议（L4）的长度 */
    uint16_t l4_first_addr;   /* L4传输层在整个报文长度中的偏移 */

    uint16_t ptr_offset;      /* 整个协议的偏移 */
};


#define WORK_PORT         (work->ipprt)
#define WORK_LEN          (work->len)
#define WORK_QOS          (work->qos)
#define WORK_TAGTYPE      (work->tag_type)
#define WORK_TAG          (work->tag)
#define WORK_GRP          (work->grp)
#define WORK_UNUSED       (work->unused)
#define WORK_NEXTPTR      (work->next_ptr)
#define WORK_HWCHKSUM     (work->hw_chksum)

#define SET_MPP_PARSE_PRO(_mpp, _type) (_mpp->pktinfo.protocol = (_type))
#define SET_MPP_PARSE_RESULT(_mpp, _result) (_mpp->pktinfo.result = (_result))


//inline void MPP_CLEAR_PACKET_DATA(mpp_control_st *mpp);
//
//inline void mppUpdatePacketPtr(mpp_control_st *mpp, void *addr);
//
//inline void *mppGetPacketPtrFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketIngressInterface(mpp_control_st *mpp, uint8_t  inif);
//
//inline uint8_t mppGetPacketIngressInterfaceFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketIngressGroup(mpp_control_st *mpp, uint8_t iifgrp);
//
//inline uint8_t mppGetPacketIngressGroupFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketStreamDirection(mpp_control_st *mpp, uint8_t direction);
//
//inline uint8_t mppGetPacketStreamDirectionFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketEgressGroup(mpp_control_st *mpp, uint8_t *oifgrp);
//
//inline uint8_t mppGetPacketEgressGroupFromWork(mpp_control_st *mpp, int i);
//
//inline uint8_t mppGetPacketEgressGroupNumFromWork(mpp_control_st *mpp);
//
//inline void mppSetPacketEgressGroupNumFromWork(mpp_control_st *mpp, uint32_t fwd_oifgrp_num);
//
//inline void mppUpdateIphdrOffset(mpp_control_st *mpp, uint8_t iphdr_offset);
//
//inline uint8_t mppGetIphdrOffsetFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketType(mpp_control_st *mpp, uint8_t pkt_type);
//
//inline uint8_t mppGetPacketTypeFromWork(mpp_control_st *mpp);
//
//
//inline void mppUpdateTuplePtr(mpp_control_st *mpp, void *tuple_ptr);
//
//
//inline void *mppGetTuplePtrFromWork(mpp_control_st *mpp);
//
//inline int mppGetStreamDrection(mpp_control_st *mpp);
//
//inline void mppUpdatePacketAction(mpp_control_st *mpp, uint8_t action);
//
//inline uint8_t mppGetPacketActionFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketApplProto(mpp_control_st *mpp, uint16_t appl_proto);
//
//inline uint16_t mppGetPacketApplProtoFromWork(mpp_control_st *mpp);
//
//inline void mppUpdatePacketL2ApplProto(mpp_control_st *mpp, uint16_t appl_proto_l2);
//
//inline uint16_t mppGetPacketL2ApplProtoFromWork(mpp_control_st *mpp);
//
//mp_error_t semp_packet_entry_parse(cvmx_wqe_t *work, mpp_control_st *mpp);


#define HEADER_OUTER  (0)
#define HEADER_INNER  (1)


#define MAX_VLAN_ID  (4096)

#define PARSE_DEBUG  (0)

/*update Offset*/
#define UPDATE_PBUF_OFFSET(_pbuf, _off)             ((_pbuf)->ptr_offset += (_off))
/*reverse Update Offset*/
#define UPDATE_PBUF_REVERSE_OFFSET(_pbuf, _off)    ((_pbuf)->ptr_offset -= (_off))

/*****Format****/
/*Cur's Format*/
#define PBUF_CUR_FORMAT(_type, _ptr, _p) \
{\
    if (cvmx_unlikely(NULL == _p->ptr))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
    _ptr = (_type)(_p->ptr_offset+(char *)_p->ptr); \
    if (cvmx_unlikely(NULL == _ptr))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
}

/*offset of Cur's  Format*/
#define PBUF_CUR_OFFSET_FORMAT(_type, _ptr, _p,_len) \
{\
    if (cvmx_unlikely(NULL == _p->ptr)) \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
    _ptr = (_type)((_p)->ptr_offset + _len +(char *)_p->ptr);\
    if (cvmx_unlikely(NULL == _ptr))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
}

/*offset of start's Format*/
#define PBUF_OFF_FORMAT(_type, _ptr, _p,_len) \
{\
    if (cvmx_unlikely(NULL == _p->ptr))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
    _ptr = (_type)((_len) + (char *)_p->ptr);\
    if (cvmx_unlikely(NULL == _ptr))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
}

/*****PTR****/
#define PBUF_PTR(_p, _len)                      ((_len) + (char *)_p->ptr)
#define PBUF_VOID_CUR_PTR(_p)                  (( (_p)->ptr_offset) + ((_p)->ptr) )

/*****GET OFFSET****/
#define PBUF_CUR_OFFSET(_p)                     ((_p)->ptr_offset)
#define PBUF_OFF_OFFSET(_p, _len)               ((_p)->ptr_offset + (_len))

/*****GET LEFT LEN****/
#define PBUF_LEFT_LEN(_p)                       ((_p)->len - (_p)->ptr_offset)


#define CHECK_PBUF_LEN(_p, _len) \
do{ \
    if (_p->ptr_offset + (_len) > _p->len) \
    {\
        LOG_PRINT(M_PARSE, LV_WARN, "Prase : buffer not enough<%d|%d> %s.%d\n", \
                     (int)(_len), (int)_p->len-(int)_p->ptr_offset, __func__, __LINE__); \
        return MP_E_EXCEED;\
    }\
}while(0)


#define PBUF_LENGTH_ASSURE(_p)     (_p->ptr_offset < _p->len)






#if PARSE_DEBUG

#define PARSE_DEBUG_PRINT(fmt, _arg...)  \
     printf("%s.%d: " fmt, __func__, __LINE__, ##_arg)

#define  PARSE_PRINTF_IMSI(_imsi)  do {\
        printf("IMSI=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_imsi[0],_imsi[1],(int)_imsi[2],(int)_imsi[3],\
        (int)_imsi[4],(int)_imsi[5],(int)_imsi[6],(int)_imsi[7],__func__, __LINE__);\
        }while(0)


#define PBUF_DUMP(_p, _len) \
do{\
    int i = 0;\
    uint8_t *ot = NULL;\
    CHECK_PBUF_LEN(_p, _len);\
    PBUF_CUR_FORMAT(uint8_t *, ot, _p);\
    printf("ptr= %p, offset = %d\n", _p->ptr, _p->ptr_offset);\
    for(i = 0; i < _len; i++) \
    {\
        if (i % 15 == 0)\
            printf("\n");\
        printf("%.2x ", ot[i]);\
    }\
    printf("\n");\
}while(0)

#else

#define  PARSE_PRINTF_IMSI(_imsi)
#define PARSE_DEBUG_PRINT(_arg...)
#define PBUF_DUMP(_p, _len)

#endif


/* This marco define is only for packet parse, so just add here. */
#define MASTER_PARAM_CHECK(_W, _P, _M)\
do {\
    if (cvmx_unlikely((NULL == _W) || (NULL == _P) || (NULL == _M)))  \
    {\
        LOG_PRINT(M_PARSE, LV_ERROR, LOG_CONTENT_NULL_POINT);\
        return MP_E_PARAM;\
    }\
}while(0);


#define SET_LTE_IDENTIFY_RESULT(_mpp, _v) (_mpp->pktinfo.result = (_v))
#define SET_LTE_TEID(_mpp, _v) (_mpp->pktinfo.gtpu.teid = (_v))

typedef struct
{
    /** WORD 0 */
    void *packet;
    ip5tuple_st *tuple;
    semp_gtp_result_t *gtpInfo;     /* GTP packet infomation */
    //semp_s1ap_result_t *s1apInfo;   /* S1AP packet infomation */
    parse_pkt_info_t   pktinfo;       /**/
    /** WORD 3 */
    uint64_t iphdr_offset: 8; /** Ip Header Offset, actually the MAC header length */
    uint64_t pkt_type: 3;
    uint64_t fwd_oifgrp_num:    3;  /* forward oifgrp number */
    uint64_t stream_direction:  2;
    uint64_t iifgrp: 8; /** Packet input interface */
    uint64_t action: 8;
    uint64_t appl_proto: 16;
    uint64_t appl_proto_l2: 16;
    /*WORD 4*/
    uint64_t pkt_len;     /*total packet length*/

    /** WORD 5 */
    uint8_t oifgrp[4];
    uint8_t iif;        /** Packet input interface */
    uint8_t rsv[3];

} mpp_control_st;


#define GTPv1_VERSION_IN_HDR  1
#define GTPv2_VERSION_IN_HDR  2

struct gtp_c_version
{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t octet_resv:5;
    uint8_t version:3;
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t version:3;
    uint8_t octet_resv:5;
#endif
    uint8_t reserve[3];
};

#define VLAN2IF(vlan)                  (vlan%100)  /*端口号就是该端口所属的Vlan*/
#define IF2VLAN(interface)           (interface+100-1/*5685x cpu:0*/)
#define EPORT2IF(eport)               (eport)

#endif
