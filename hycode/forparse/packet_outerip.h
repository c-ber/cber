#ifndef __PACKET_OUTERIP4_H
#define __PACKET_OUTERIP4_H

#include <sys/types.h>




struct ip4_hdr {
  /* version / header length / type of service */
  uint16_t _v_hl_tos;
  /* total length */
  uint16_t _len;
  /* identification */
  uint16_t _id;
  /* fragment offset field */
  uint16_t _offset;
#define IP_RF 0x8000U        /* reserved fragment flag */
#define IP_DF 0x4000U        /* dont fragment flag */
#define IP_MF 0x2000U        /* more fragments flag */
#define IP_OFFMASK 0x1fffU   /* mask for fragmenting bits */
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

#define IPV4_LEN   4
#define IPV6_LEN   16
struct ip6_hdr
{
    //version:4, tra_class:8, flowlabel:20;
    uint32_t ver_tc_fl;
    uint16_t pay_length; /*载荷长度*/
    uint8_t next_header; /*下一个头部类型*/
    uint8_t hop_limit;  /*跳数限制*/
    uint8_t s_ip[IPV6_LEN]; /*源IP*/
    uint8_t d_ip[IPV6_LEN]; /*目的IP*/
}__attribute__((packed));

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



#if BYTE_ORDER == BIG_ENDIAN
/** Set an IP address given by the four byte-parts */
#define IP4_ADDR(ipaddr, a,b,c,d) \
        (ipaddr)->addr = ((u32_t)((a) & 0xff) << 24) | \
                         ((u32_t)((b) & 0xff) << 16) | \
                         ((u32_t)((c) & 0xff) << 8)  | \
                          (u32_t)((d) & 0xff)
#else
/** Set an IP address given by the four byte-parts.
    Little-endian version that prevents the use of htonl. */
#define IP4_ADDR(ipaddr, a,b,c,d) \
        (ipaddr)->addr = ((u32_t)((d) & 0xff) << 24) | \
                         ((u32_t)((c) & 0xff) << 16) | \
                         ((u32_t)((b) & 0xff) << 8)  | \
                          (u32_t)((a) & 0xff)
#endif


#define IPV4_VERSION  (4)
#define IPV6_VERSION  (6)

#define IP_HD_LEN     (20)
#define IPV6_HD_LEN   (40)





#endif

