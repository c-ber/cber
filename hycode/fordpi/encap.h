/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       encap.h
编码格式:     ASCII
作者:         chenbin
创建:         May 25, 2016
历史:
    1.日期    :May 25, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_ENCAP_H_
#define MODULES_DPI_ENCAP_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"
#include "semp_comm_dpi.h"


//#define CPU_ENDIAN_BIG
#define CPU_ENDIAN_LITTLE

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


/****************   L2 链路层 start *************************/
#define ETHARP_HWADDR_LEN     (6)

#define SIZEOF_ETH_HDR        (14)
#define ETHERTYPE_IP4         (0x0800)
#define ETHERTYPE_IP6         (0x86dd)
#define ETHERTYPE_VLAN        (0x8100)
#define ETHERTYPE_MPLS_UT     (0x8847)      /** MPLS Unicast traffic     */
#define ETHERTYPE_MPLS_MT     (0x8848)      /** MPLS Multicast traffic   */

/* 以太网协议 */
typedef struct _eth_hdr_t
{
    mac_t mac_dst;
    mac_t mac_src;
    uint16_t next_type;
}__attribute__((packed)) eth_hdr_t;

/* VLAN协议 */
typedef struct _vlan_hdr_t
{
    uint16_t id;
    uint16_t type;
}__attribute__((packed)) vlan_hdr_t;
/****************   L2 链路层 end   *************************/



/****************   L3 网络层 start *************************/
#define IP_PROTO_ICMP    1
#define IP_PROTO_IGMP    2
#define IP_PROTO_UDP     17
#define IP_PROTO_UDPLITE 136
#define IP_PROTO_TCP     6
#define IP_PROTO_STCP    132


/* IPV4协议 */
typedef struct _ipv4_hdr_t
{
  uint8_t    ver_hdrlen;      /* 版本 / ip固定头长度20字节 / 第2个字节为tos */
  uint8_t    dsfield;
  uint16_t   total_len;       /* 从ip头首地址开始到整个报文末尾的总长度 */

  uint16_t   id;
  uint16_t    flags_frag_off;  /* 标志位 */
  uint8_t    ttl;             /* 生存期 */
  uint8_t    proto;           /* L4的协议号*/
  uint16_t   checksum;        /* 校验和 */

  uint32_t   src;             /* 源IP */
  uint32_t   dst;             /* 目的IP */
}__attribute__((packed)) ipv4_hdr_t;
/****************   L3 网络层 end   *************************/


/****************   L4 传输层 start *************************/
#define UDP_HLEN 8

/* UDP头部 */
typedef struct _udp_hdr_t
{
  uint16_t src;
  uint16_t dst;  /* src/dst UDP ports */
  uint16_t length;
  uint16_t chksum;  /*暂不处理*/
}udp_hdr_t;
/****************   L4 传输层 end   *************************/


/****************   L5 应用层 start *************************/
/****************   L5 应用层 end   *************************/



typedef struct _osi_encap_t
{
    eth_hdr_t    eth;
    vlan_hdr_t   vlan;
    ipv4_hdr_t   ip;
    udp_hdr_t    udp;

    uint8_t      payload[2048];       /* 自定义的数据 */
    uint8_t      payload_layer;       /* 携带的payload位于的层 */
    uint16_t     payload_len;         /* 自定义的数据长度 */

    uint8_t     *pbuf;                /* 报文首地址 */
    uint8_t      plen;                /* 报文总长度 */
}osi_encap_t;





/*---------------------函数声明------------------------------------*/
mp_code_t packet_identity_result_process(dpi_result_t * rlt);


extern unsigned short ip_fast_csum(char *iph, unsigned int ihl);


#endif /* MODULES_DPI_ENCAP_H_ */
