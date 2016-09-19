/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       encap.c
编码格式:     ASCII
作者:         chenbin
创建:         May 25, 2016
历史:
    1.日期    :May 25, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "encap.h"




mp_code_t packet_identity_result_send(uint8_t oifgrp_id,
                                      uint8_t * snd_data, uint16_t snd_len)
{
    return MP_SEND_PKT_SUCCESS;
}


/*要同时兼容tcp和udp的封包，还可以考虑ip层的*/
mp_code_t packet_layered_protocol_encap(osi_encap_t *osi)
{
    mp_code_t ret = MP_OK;

    osi->plen = 0;

    /* 根据协议结果来计算所有长度 */
    osi->ip.total_len = sizeof(ipv4_hdr_t) + sizeof(vlan_hdr_t) +
                        sizeof(udp_hdr_t) + osi->payload_len;

    osi->udp.length   = sizeof(udp_hdr_t) + osi->payload_len;


    NETWORK_ORDER_UINT16(osi->ip.total_len, osi->ip.total_len);
    NETWORK_ORDER_UINT16(osi->udp.length, osi->udp.length);

//    osi->ip.checksum = ip_checksum((uint8_t*)&(osi->ip), 5);
//    NETWORK_ORDER_UINT16(osi->ip.checksum, osi->ip.checksum);

    memcpy(osi->pbuf + osi->plen, &(osi->eth), sizeof(eth_hdr_t));
    osi->plen += sizeof(eth_hdr_t);

    memcpy(osi->pbuf + osi->plen, &(osi->vlan), sizeof(vlan_hdr_t));
    osi->plen += sizeof(vlan_hdr_t);

    memcpy(osi->pbuf + osi->plen, &(osi->ip), sizeof(ipv4_hdr_t));
    osi->plen += sizeof(ipv4_hdr_t);

    //if(ip.proto == UDP){
    memcpy(osi->pbuf + osi->plen, &(osi->udp), sizeof(udp_hdr_t));
    osi->plen += sizeof(udp_hdr_t);

    memcpy(osi->pbuf + osi->plen, osi->payload, osi->payload_len);
    osi->plen = osi->plen + osi->payload_len;

    return ret;
}
#define OIFGRP_BROADCAST_PORT (-2)
uint16_t set_oif_vlan_flag(uint8_t oif)
{
    uint16_t oif_vlan = 0;
    uint8_t oifgrp_id = 1; //出口组1


    if(oif == (uint8_t)OIFGRP_BROADCAST_PORT)
    {
        oif_vlan = 200 + oifgrp_id -1 ;
    }
    else
    {
        oif_vlan = 100 + oif -1;
    }
    return oif_vlan;
}

#define MAC_SET(va, v0, v1, v2 ,v3 ,v4 ,v5) \
    do{\
        va[0] = v0;\
        va[1] = v1;\
        va[2] = v2;\
        va[3] = v3;\
        va[4] = v4;\
        va[5] = v5;\
    }while(0)

typedef enum _tlv_type_t
{
    TLV_APP_ID = 0x01,
    TLV_APP_NAME,
    TLV_USER_IP,
    TLV_APP_ACT,
    TLV_AUDIT_ACCOUNT,
    TLV_AUDIT_CONTENT,
}tlv_type_t;

#define SELF_DEFINE_HEADER_LEN 3

#define TLV_DATE_SET(type, len, data) \
    do{ \
        if( len > 0 && len < 0xffffff) \
        {\
            *((uint8_t *)(osi->payload + offset)) = (type);\
            offset += sizeof(uint8_t);\
            memcpy(osi->payload + offset, &(len), sizeof(len));\
            offset += sizeof(len);\
            memcpy(osi->payload + offset, (data), (len));\
            offset += (len);\
        }\
    }while(0)

mp_code_t packet_identity_result_encap(dpi_result_t *rlt,
                                       osi_encap_t  *osi)
{
    mp_code_t ret = MP_OK;

    uint16_t tlv_len = 0;
    uint32_t offset  = 0;
    /* 自定义数据头0x64 70 69 dpi assci码*/
    uint8_t self_def_hdr[SELF_DEFINE_HEADER_LEN] = {0x64, 0x70, 0x69};
    memcpy(osi->payload + offset, self_def_hdr, sizeof(self_def_hdr));
    offset += sizeof(self_def_hdr);

    offset += sizeof(osi->payload_len); //总长度最后在填充

    /* tlv格式封包 */

    //用户IP
    if(rlt->user_ip != 0 )
    {
        tlv_len = sizeof(rlt->user_ip);
        TLV_DATE_SET(TLV_USER_IP, tlv_len, &(rlt->user_ip));
    }

    //应用ID
    if(rlt->app_id == 0)
    {
        return MP_FAIL;
    }
    tlv_len = sizeof(rlt->app_id);
    TLV_DATE_SET(TLV_APP_ID, tlv_len, &(rlt->app_id));
    TLV_DATE_SET(TLV_APP_NAME,      rlt->app_name_len,    rlt->app_name);

    //应用行为名称
    TLV_DATE_SET(TLV_APP_ACT,       rlt->action_name_len, rlt->action_name);

    //审计帐号
    TLV_DATE_SET(TLV_AUDIT_ACCOUNT, rlt->account_len,     rlt->account);

    //审计帐号
    TLV_DATE_SET(TLV_AUDIT_CONTENT, rlt->content_len,     rlt->content);

    osi->payload_len   = offset;
    *((uint16_t *)(osi->payload + SELF_DEFINE_HEADER_LEN)) = offset;
    osi->payload_layer = 5;

    printf("packet ok \n");
    return ret;
}
mp_code_t packet_identity_result_process(dpi_result_t * rlt,
        char * sbuf, uint16_t *slen)
{
    mp_code_t ret = MP_OK;

    osi_encap_t osi = {};
    osi.pbuf = sbuf;


    MAC_SET(osi.eth.mac_dst, 0x00, 0x21, 0x45, 0x00, 0x01, 0x98);
    memset(osi.eth.mac_src, 2, sizeof(osi.eth.mac_src));

    NETWORK_ORDER_UINT16(osi.eth.next_type, 0x8100);


    osi.ip.ver_hdrlen = 0x45;
    osi.ip.dsfield    = 0x00;

    NETWORK_ORDER_UINT16(osi.ip.id, 0xdcce);

    osi.ip.flags_frag_off = 0x0000;
    osi.ip.ttl = 0xfe;
    osi.ip.proto = IP_PROTO_UDP;
    NETWORK_ORDER_UINT32(osi.ip.src, 0xc0a80564);//192.168.5.100
    NETWORK_ORDER_UINT32(osi.ip.dst, 0xc0a80523);//192.168.5.35


    osi.vlan.id = set_oif_vlan_flag(12);
    NETWORK_ORDER_UINT16(osi.vlan.id, 0x0064); //默认为出口组1，端口0
    NETWORK_ORDER_UINT16(osi.vlan.type, 0x0800);

    NETWORK_ORDER_UINT16(osi.udp.dst, 8005);
    NETWORK_ORDER_UINT16(osi.udp.src, 6001);

    //封装下识别结果，尤其是里面有字符串，可能需要分帧发送
    packet_identity_result_encap(rlt, &osi);

    //封装报文
    //printf("packet_layered_protocol_encap \n");
    packet_layered_protocol_encap(&osi);

    //发送报文
    *slen = osi.plen;

    return ret;
}
