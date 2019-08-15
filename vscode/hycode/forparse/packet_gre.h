#ifndef __PACKET_GRE_H_
#define __PACKET_GRE_H_

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
    GTPV1_C_MSG_ECHO_REQ =1,
    GTPV1_C_MSG_ECHO_RSP=2,
    GTPV1_C_MSG_CREATE_PDP_CONTEXT_REQ=16,
    GTPV1_C_MSG_CREATE_PDP_CONTEXT_RSP=17,
    GTPV1_C_MSG_UPDATE_PDP_CONTEXT_REQ=18,
    GTPV1_C_MSG_UPDATE_PDP_CONTEXT_RSP=19,
    GTPV1_C_MSG_DELETE_PDP_CONTEXT_REQ=20,
    GTPV1_C_MSG_DELETE_PDP_CONTEXT_RSP=21,
    GTPV1_C_MSG_MAX=256
}gtpv1_c_msg_type_t;

struct gre_hdr
{
//#if defined(__BIG_ENDIAN_BITFIELD)
#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t npdu:1;
    uint8_t sequence_num:1;
    uint8_t next_header:1;
    uint8_t reserv:1;
    uint8_t protype:1;    
    uint8_t vesion:3;
//#elif defined(__LITTLE_ENDIAN_BITFIELD)
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t vesion:3;
    uint8_t protype:1;
    uint8_t reserv:1;
    uint8_t next_header:1;
    uint8_t sequence_num:1;
    uint8_t npdu:1;
#endif
    uint8_t message_type;
    uint16_t length;
    uint32_t teid;
};

struct gtpv2_c_hdr
{

#if defined(__LITTLE_ENDIAN_BITFIELD)
    uint8_t resv:3;
    uint8_t Teid:1;
    uint8_t pigpack:1;
    uint8_t vesion:3;
#elif defined(__BIG_ENDIAN_BITFIELD)
    uint8_t vesion:3;
    uint8_t pigpack:1;
    uint8_t Teid:1;
    uint8_t resv:3;
#endif
    uint8_t message_type;
    uint16_t length;
    uint32_t teid;
};



#define GRE_VERSION(grehdr) (grehdr->vesion)
#define GRE_PRO(grehdr) 	(grehdr->protype)
#define GRE_NEXT_HDR_FG(grehdr) (grehdr->next_header)
#define GRE_SEQ_NUM_FG(grehdr)  (grehdr->sequence_num)
#define GRE_NPDU_FG(grehdr)     		(grehdr->npdu)



#define GRE_HEAD_LEN  8



#define  GREV1  1
#define  GREV2  2
#define  GRE_GTP 1


//#define UDP_PORT_GTP_U    2152
//#define UDP_PORT_GTPV2_C    2123

#define GTP_U_PORT_M        2152
#define GTP_U_PORT_V            (g_gtpu_port)
#define SET_GTP_U_PORT_V(port)  (g_gtpu_port = port)
#define GET_GTP_U_PORT()        (g_gtpu_port)
#define RESET_GTP_U_PORT()      (g_gtpu_port = GTP_U_PORT_M)



#define GTP_C_PORT_M       2123
#define GTP_C_PORT_V            (g_gtpv2c_port)
#define SET_GTPV2_C_PORT_V(port)  (g_gtpv2c_port = port)
#define GET_GTPV2_C_PORT()        (g_gtpv2c_port)
#define RESET_GTPV2_C_PORT()      (g_gtpv2c_port = GTP_C_PORT_M)







#endif
