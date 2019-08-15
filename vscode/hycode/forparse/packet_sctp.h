#ifndef __PACKET_SCTP_H
#define __PACKET_SCTP_H

struct sctp_hdr
{
    uint16_t src;
    uint16_t dest;  /* src/dest UDP ports */
    uint32_t veri_tag;
    uint32_t chksum;
};

/******************************************
 *      单个报文携带的IUPS消息最大数量
 ******************************************/
#define MAX_IUPS_MSG_NUM         (12)
#define CHUNK_TYPE_DATA          0x00

#define S1AP_PORT_M   36412
#define S1AP_PORT_V            (g_s1ap_port)
#define SET_S1AP_PORT(_port) (g_s1ap_port = _port)
#define SET_DMT_PORT(_port) (pdmt_attr->port = _port)
#define GET_S1AP_PORT() (g_s1ap_port)
#define RESET_S1AP_PORT() (g_s1ap_port = S1AP_PORT_M)
#define DMT_ST_PORT    (3868) 
#define GET_DMT_PORT()  (pdmt_attr->port)
#define RESET_DMT_PORT()    (pdmt_attr->port = DMT_ST_PORT)
#define SCTP_COMMON_HDR_LEN (12)

/* 当diameter为应用协议时，使用的端口号为非标准端口号，
   此时应该根据SCTP的data_payload_proto_id为46来判断是否为diameter */
#define SCTP_DATA_PPI_DIAMETER (46)
#define SCTP_DATA_PPI_S1AP     (18) //s1ap的PPI
#define SCTP_DATA_PPI_M3UA     (3) //m3ua的PPI


#define DATA_CHUNK_HDR_LEN  (sizeof(data_chunk_hdr_t))
typedef struct
{
    uint8_t chunk_type;
    uint8_t chunk_flag;
    uint16_t chunk_len;
    uint32_t tsn;
    uint16_t si;
    uint16_t ssn;
    uint32_t ppid;
}__attribute__((packed))data_chunk_hdr_t;

typedef struct
{
    uint8_t chunk_type;
    uint8_t chunk_flag;
    uint16_t chunk_len;
}__attribute__((packed))sctp_common_chunk_hdr_t;

typedef struct
{
     uint16_t source;
     uint16_t dest;
     uint32_t vt;
     uint32_t check;
}__attribute__((packed))sctp_common_hdr_t;

#endif
