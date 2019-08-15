#ifndef __PACKET_PARSE_H
#define __PACKET_PARSE_H

#include "pub_header.h"
#include "list.h"
#include "session_mng_hash.h"


/**************************************************************************************************
                                        宏定义
**************************************************************************************************/

/**************L2层宏定义*************/
#ifndef __PACKET_ETHERNET_H
#define __PACKET_ETHERNET_H


#define ETHARP_HWADDR_LEN     (6)

#define ETHTYPE_LEN           (2)

#define SIZEOF_ETH_HDR        (14)
#define ETHERTYPE_PPPOE_DIS   (0x8863)      /*PPPoE Discovery*/
#define ETHERTYPE_PPPOE_SES   (0x8864)      /*PPPoE Session*/
#define ETHERTYPE_IP4         (0x0800)
#define ETHERTYPE_IP6         (0x86dd)
#define DPI_ETHERTYPE_VLAN    (0x8100)
#define ETHERTYPE_MPLS_UT     (0x8847)      /** MPLS Unicast traffic     */
#define ETHERTYPE_MPLS_MT     (0x8848)      /** MPLS Multicast traffic   */

#define MPLS_HEADER_SECTION    4
#define MPLS_LABEL_IPV4  0x0
#define MPLS_LABEL_IPV6  0x2
#endif

/**************结构体指针操作宏定义*************/
/*****PTR****/
#define PBUF_PTR(_p, _len)                      ((_len) + (char *)_p->ptr)
#define PBUF_VOID_CUR_PTR(_p)                  (( (_p)->ptr_offset) + ((_p)->ptr) )

/*****GET OFFSET****/
#define PBUF_CUR_OFFSET(_p)                     ((_p)->ptr_offset)
#define PBUF_OFF_OFFSET(_p, _len)               ((_p)->ptr_offset + (_len))

/*****GET LEFT LEN****/
#define PBUF_LEFT_LEN(_p)                       ((_p)->len - (_p)->ptr_offset)

/*update Offset*/
#define UPDATE_PBUF_OFFSET(_pbuf, _off)             ((_pbuf)->ptr_offset += (_off))
/*reverse Update Offset*/
#define UPDATE_PBUF_REVERSE_OFFSET(_pbuf, _off)    ((_pbuf)->ptr_offset -= (_off))

#define CHECK_PBUF_LEN(_p, _len) \
do{ \
    if (_p->ptr_offset + (_len) > _p->len) \
    {\
        printf("Prase : buffer not enough<%d|%d> ",(int)(_len), ((int)_p->len-(int)_p->ptr_offset));\
        return DPI_SPACE_NOT_ENOUGH;\
    }\
}while(0)

#define PBUF_CUR_FORMAT(_type, _ptr, _p) \
{\
    if (NULL == _p->ptr)\
    {\
        printf("null point exception\n");\
        return DPI_NULL_POINT;\
    }\
    _ptr = (_type)(_p->ptr_offset+(char *)_p->ptr);\
    if (NULL == _ptr)\
    {\
        printf("null point exception\n");\
        return DPI_NULL_POINT;\
    }\
}


/**************网络层宏定义*************/

#define IPV4_LEN   4
#define IPV6_LEN   16

#define IP_HD_LEN     (20)
#define IPV6_HD_LEN   (40)

#define IPH_V6(hdr)  (ntohs((hdr)->ver_tc_fl) >> 28)

#define IPH_V(hdr)  (ntohs((hdr)->_v_hl_tos) >> 12)
#define IPH_HL(hdr) ((ntohs((hdr)->_v_hl_tos) >> 8) & 0x0f)
#define IPH_TOS(hdr) (ntohs((hdr)->_v_hl_tos) & 0xff)
#define IPH_LEN(hdr) ((hdr)->_len)
#define IPH_ID(hdr) ((hdr)->_id)
#define IPH_OFFSET(hdr) ((hdr)->_offset)
#define IPH_TTL(hdr) ((hdr)->_ttl)
#define IPH_PROTO(hdr) ((hdr)->_proto)
#define IPH_CHKSUM(hdr) ((hdr)->_chksum)
#define IPH_SRCIP(hdr) ((hdr)->src)
#define IPH_DSTIP(hdr) ((hdr)->dest)

#define IPH_VHLTOS_SET(hdr, v, hl, tos) (hdr)->_v_hl_tos = (htons(((v) << 12) | ((hl) << 8) | (tos)))
#define IPH_LEN_SET(hdr, len) (hdr)->_len = (len)
#define IPH_ID_SET(hdr, id) (hdr)->_id = (id)
#define IPH_OFFSET_SET(hdr, off) (hdr)->_offset = (off)
#define IPH_TTL_SET(hdr, ttl) (hdr)->_ttl = (u8_t)(ttl)
#define IPH_PROTO_SET(hdr, proto) (hdr)->_proto = (u8_t)(proto)
#define IPH_CHKSUM_SET(hdr, chksum)  (hdr)->_chksum = (chksum)

#define IP_PROTO_ICMP    1
#define IP_PROTO_IGMP    2
#define IP_PROTO_UDP     17
#define IP_PROTO_UDPLITE 136
#define IP_PROTO_TCP     6
#define IP_PROTO_SCTP    132
#define IP_PROTO_GRE     47

#define UDP_HLEN 8

#define TCP_HLEN 20

/**************************************************************************************************
                                        枚举定义
**************************************************************************************************/
typedef enum
{
    TCP_FLAG_TYPE_FIRST_SYN,//第一次握手同步报文
    TCP_FLAG_TYPE_FIN,
    TCP_FLAG_TYPE_RST,

    TCP_FLAG_TYPE_OTHER
}tcp_flag_em;

typedef enum
{
    DOWN_LINK,
    UP_LINK
}flow_direction_em;



/**************************************************************************************************
                                        结构体定义
**************************************************************************************************/
struct eth_addr
{
    uint8_t addr[ETHARP_HWADDR_LEN];
};


struct eth_hdr
{
    struct eth_addr dest;
    struct eth_addr src;
    uint16_t ethertype;
};


struct eth_vlan_hdr
{
    uint16_t v_type;
    uint16_t v_val;
};

typedef struct
{
    uint32_t lable: 20; /*20bits的label*/
    uint32_t exp  : 3 ; /*3bit的experimental_bits*/
    uint32_t s    : 1 ; /*1bit的stack bit*/
    uint32_t ttl  : 8 ; /*8bit的ttl时间*/
} __attribute__((packed)) eth_mpls_hdr;


struct ip4_hdr {
  /* version / header length / type of service */
  uint16_t _v_hl_tos;
  /* total length */
  uint16_t _len;
  /* identification */
  uint16_t _id;
  /* fragment offset field */
  uint16_t _offset;
  /* time to live */
  uint8_t _ttl;
  /* protocol*/
  uint8_t _proto;
  /* checksum */
  uint16_t _chksum;
  /* source and destination IP addresses */
  uint32_t src;
  uint32_t dest;
}__attribute__((packed));



struct ip6_hdr_test
{
    //version:4, tra_class:8, flowlabel:20;
    uint32_t ver_tc_fl;
    uint16_t pay_length; /*载荷长度*/
    uint8_t next_header; /*下一个头部类型*/
    uint8_t hop_limit;  /*跳数限制*/
    uint8_t s_ip[IPV6_LEN]; /*源IP*/
    uint8_t d_ip[IPV6_LEN]; /*目的IP*/
}__attribute__((packed));


typedef struct
{
    void *ptr;                /* 报文的头部指针 */
    uint16_t len;             /* 报文长度       */

    uint16_t l4_total_len;    /* L3网络层字段，承载的上层协议（L4）的长度 */
    uint16_t l4_first_addr;   /* L4传输层在整个报文长度中的偏移 */

    uint16_t ptr_offset;      /* 整个协议的偏移 */
}pbuf;

typedef struct
{
    uint16_t        l2_proto;           /*报文类型， IPV4或者IPV6报文0x0800:IPV4，0x86DD:IPV6 */
    dpi_5tuple_t    ip;                 /*ip五元组*/
    uint8_t         pktdir;             /*request dir is DIR_REQUEST, reponse dir is DIR_ANSWER 目前没看到用处，默认为0 */
    uint16_t        pkt_len;            /*整个报文的长度 */
    void            *network_header;    /*网络层头部的数据指针 */
    uint16_t        network_header_len; /*含L2层及L2层以上的数据总长度 */
    uint8_t         tcp_flag;           /*tcp flag,详见枚举类型 tcp_flag_em*/
    bool            is_send_to_sdk;     /*报文是否需要发送给DPI SDK*/
    uint8_t         thread_id;          /*处理进程或线程ID*/
}parse_pkt_info_t;


struct udp_hdr {
  uint16_t src_port;
  uint16_t dest_port;  /* src/dest UDP ports */
  uint16_t len;
  uint16_t chksum;
};


struct tcp_hdr {
    uint16_t src_port;
    uint16_t dest_port;

    uint32_t seq;
    uint32_t ack_seq;
#ifdef LITTLE_ENDIAN
    uint16_t res1:4,
    doff:4,
    fin:1,
    syn:1,
    rst:1,
    psh:1,
    ack:1,
    urg:1,
    ece:1,
    cwr:1;
#else
     uint16_t doff:4,
      res1:4,
      cwr:1,
      ece:1,
      urg:1,
      ack:1,
      psh:1,
      rst:1,
      syn:1,
      fin:1;
#endif
 uint16_t window;
 uint16_t check;
 uint16_t urg_ptr;
};


/**************************************************************************************************
                                        函数声明
**************************************************************************************************/

dpi_code_t semp_ethernet_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info);
dpi_code_t semp_packet_entry_parse(pbuf *packet_buf, parse_pkt_info_t *pkt_info);

#endif
