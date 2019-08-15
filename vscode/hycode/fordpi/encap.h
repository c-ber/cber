/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       encap.h
�����ʽ:     ASCII
����:         chenbin
����:         May 25, 2016
��ʷ:
    1.����    :May 25, 2016
      ����    :cb
      �޸�    :Created file
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


/****************   L2 ��·�� start *************************/
#define ETHARP_HWADDR_LEN     (6)

#define SIZEOF_ETH_HDR        (14)
#define ETHERTYPE_IP4         (0x0800)
#define ETHERTYPE_IP6         (0x86dd)
#define ETHERTYPE_VLAN        (0x8100)
#define ETHERTYPE_MPLS_UT     (0x8847)      /** MPLS Unicast traffic     */
#define ETHERTYPE_MPLS_MT     (0x8848)      /** MPLS Multicast traffic   */

/* ��̫��Э�� */
typedef struct _eth_hdr_t
{
    mac_t mac_dst;
    mac_t mac_src;
    uint16_t next_type;
}__attribute__((packed)) eth_hdr_t;

/* VLANЭ�� */
typedef struct _vlan_hdr_t
{
    uint16_t id;
    uint16_t type;
}__attribute__((packed)) vlan_hdr_t;
/****************   L2 ��·�� end   *************************/



/****************   L3 ����� start *************************/
#define IP_PROTO_ICMP    1
#define IP_PROTO_IGMP    2
#define IP_PROTO_UDP     17
#define IP_PROTO_UDPLITE 136
#define IP_PROTO_TCP     6
#define IP_PROTO_STCP    132


/* IPV4Э�� */
typedef struct _ipv4_hdr_t
{
  uint8_t    ver_hdrlen;      /* �汾 / ip�̶�ͷ����20�ֽ� / ��2���ֽ�Ϊtos */
  uint8_t    dsfield;
  uint16_t   total_len;       /* ��ipͷ�׵�ַ��ʼ����������ĩβ���ܳ��� */

  uint16_t   id;
  uint16_t    flags_frag_off;  /* ��־λ */
  uint8_t    ttl;             /* ������ */
  uint8_t    proto;           /* L4��Э���*/
  uint16_t   checksum;        /* У��� */

  uint32_t   src;             /* ԴIP */
  uint32_t   dst;             /* Ŀ��IP */
}__attribute__((packed)) ipv4_hdr_t;
/****************   L3 ����� end   *************************/


/****************   L4 ����� start *************************/
#define UDP_HLEN 8

/* UDPͷ�� */
typedef struct _udp_hdr_t
{
  uint16_t src;
  uint16_t dst;  /* src/dst UDP ports */
  uint16_t length;
  uint16_t chksum;  /*�ݲ�����*/
}udp_hdr_t;
/****************   L4 ����� end   *************************/


/****************   L5 Ӧ�ò� start *************************/
/****************   L5 Ӧ�ò� end   *************************/



typedef struct _osi_encap_t
{
    eth_hdr_t    eth;
    vlan_hdr_t   vlan;
    ipv4_hdr_t   ip;
    udp_hdr_t    udp;

    uint8_t      payload[2048];       /* �Զ�������� */
    uint8_t      payload_layer;       /* Я����payloadλ�ڵĲ� */
    uint16_t     payload_len;         /* �Զ�������ݳ��� */

    uint8_t     *pbuf;                /* �����׵�ַ */
    uint8_t      plen;                /* �����ܳ��� */
}osi_encap_t;





/*---------------------��������------------------------------------*/
mp_code_t packet_identity_result_process(dpi_result_t * rlt);


extern unsigned short ip_fast_csum(char *iph, unsigned int ihl);


#endif /* MODULES_DPI_ENCAP_H_ */
