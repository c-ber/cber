/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       semp_comm_dpi.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef INCLUDE_SEMP_COMM_DPI_H_
#define INCLUDE_SEMP_COMM_DPI_H_

#include <stdio.h>
#include <stdint.h>

#include "cvmx_common.h"
//#include "semp-config.h"
//#include "executive-common.h"
//#include "semp-ctypes.h"
#include "semp-errno.h"


/*����֧��IPV4��IPV6*/
typedef union
{
    uint64_t u64[2];
    uint32_t v4;
    uint64_t v6[2];
}mp_ip_t;

typedef struct
{
    uint8_t version;
    mp_ip_t ip;
}__attribute__((packed)) ip_comm_t;

/* ��Ԫ��ṹ�� */
typedef union _five_tuple_t
{
    uint64_t        data64[5];
    struct
    {
        ip_comm_t       sip;
        ip_comm_t       dip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
    };
}five_tuple_t;

/* ʶ��״̬ */
typedef enum _id_status_t
{
    ID_STATUS_SUCC   = 0,  //�ɹ�
    ID_STATUS_FAIL   = 1,  //δʶ��
    ID_STATUS_UNDONE = 2   //����ʶ����
}id_status_t;

/* ���������DPI���ĵı���*/
typedef enum
{
    PKT_NOT_CARE,    /* ������ʶ�� */
    PKT_CARE         /* ����ʶ�� */
}care_pkt_t;

/* ������Ϣ�ṹ��, ��Ҫ���汨����ص�����*/
typedef struct sk_buff
{
    care_pkt_t   care_pkt;             /* �Ƿ�Ϊdpi��Ҫ����ı���*/
    uint8_t      pktdir;               /* request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
                                          Ŀǰû�����ô���Ĭ��Ϊ0 */

    uint16_t     l2_proto;             /* �������ͣ� IPV4����IPV6����
                                          0x0800:IPV4��0x86DD:IPV6 */
    uint8_t      l3_proto;             /* �������ͣ� UDP����TCP*/

    uint16_t     pkt_len;              /* �������ĵĳ��� */
    void        *pkt_tail;             /* ����βָ��*/
    void        *network_header;       /* �����ͷ��������ָ�� */
    uint16_t     network_header_len;   /* ��L2�㼰L2�����ϵ������ܳ��� */
    void        *mac_header;           /* ��·��ͷ��������ָ�� */

    void        *fe;                   /* struct flow_element  *ָ��,��Щ���������*/
}dpi_skb_t;

typedef struct
{
    uint8_t rlt; //
}app_session_t;
#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
