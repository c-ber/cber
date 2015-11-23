/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       packet_entry.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 16, 2015
历史:
    1.日期    :Sep 16, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef RELATE_PACKET_ENTRY_H_
#define RELATE_PACKET_ENTRY_H_

#include "semp_hydra_relate.h"

typedef enum
{
    GTP_MSG_ECHO_REQ =1,
    GTP_MSG_ECHO_RSP=2,
    GTP_MSG_CREATE_SES_REQ=32,
    GTP_MSG_CREATE_SES_RSP=33,
    GTP_MSG_MODIFY_BEARER_REQ=34,
    GTP_MSG_MODIFY_BEARER_RSP=35,
    GTP_MSG_DELETE_SES_REQ=36,
    GTP_MSG_DELETE_SES_RSP=37,
    GTP_MSG_CHANGE_NOTIFICATION_REQ=38,
    GTP_MSG_CHANGE_NOTIFICATION_RSP=39,
    GTP_MSG_CREATE_BEARER_REQ=95,
    GTP_MSG_CREATE_BEARER_RSP=96,
    GTP_MSG_DELETE_BEARER_REQ=99,
    GTP_MSG_DELETE_BEARER_RSP=100,
    GTP_MSG_PDU=0xff,
    GTP_MSG_MAX=256,
}gtp_msg_type_t;

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
}prase_protocol_em;


typedef enum
{
    PARSE_SUCCESS =0,     /*protocol identify OK*/
    PARSE_HEADER_ERR,  /*protocol identify Header not Sync*/
    PARSE_UNKNOW_OR_NOSUPPORT, /*protocol identify Unknow*/
}parse_result_t;

typedef struct
{
    uint32_t srcip;
    uint32_t dstip;
    uint16_t srcport;
    uint16_t dstport;
    uint8_t  protocol;
}parse_ip4_t;

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

typedef union
{
    uint64_t        data64[5];
    tuple_v4        v4;
    tuple_v6        v6;

} ip5tuple_st;

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
    uint16_t port;  /* GTP port */
    uint16_t version;
    uint16_t proto;
    uint16_t sport;
    uint16_t dport;
    ip_v4_t  v4;
    ip_v6_t  v6;
}semp_gtp_result_t;

typedef  struct
{
    uint8_t     imsi[8]; /*IMSI*/
    uint64_t    mme_ue_s1ap_id;
    uint64_t    enode_ue_s1ap_id;
}parse_s1ap_t;

typedef struct
{
    lte_imsi_t    imsi; /*IMSI*/
    uint8_t    rand[16];
    uint8_t    autn[17];
    uint8_t    xres[16];
    uint8_t    kasme[32];
}parse_diameter_t;


typedef struct
{
    uint32_t    ot_srcip;
    uint32_t    ot_dstip;
    uint8_t     ot_protocol;

    uint16_t    ot_srcport;
    uint16_t    ot_dstport;

    uint32_t    in_srcip;
    uint32_t    in_dstip;
    uint8_t     in_protocol;
    uint16_t    in_srcport;

    uint16_t    in_dstport;
    uint32_t    teid;
    uint16_t    payload_offset;
    uint16_t    resv;

    lte_imsi_t      imsi;  /*IMSI*/
    lte_imei_t      imei;  /*IMEI*/
    lte_msisdn_t     msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;

    lte_tai_t   tai;
    lte_guti_t  guti;

    uint8_t     imsi_en;
    uint8_t     imei_en;
    uint8_t     msisdn_en;
    uint8_t     tai_en;
    uint8_t     guti_en;
}parse_gtpu_t;


typedef struct
{
    prase_protocol_em  protocol;
    parse_result_t result;
    union
    {
        parse_s1ap_t s1ap;
        parse_diameter_t diameter;
        parse_gtpc_t gtpc;
        parse_gtpu_t gtpu;
    };
    parse_ip4_t ip4;
}parse_pkt_info_t;

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

    /** WORD 4 */
    uint8_t oifgrp[4];
    uint8_t iif;        /** Packet input interface */
    uint8_t rsv[3];
} mpp_control_st;

#endif /* RELATE_PACKET_ENTRY_H_ */
