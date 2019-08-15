/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi_sdk.h
�����ʽ:     ASCII
����:         chenbin
����:         Sep 9, 2016
��ʷ:
    1.����    :Sep 9, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef COMMON_DPI_SDK_H_
#define COMMON_DPI_SDK_H_

#include <stdint.h>

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


#define IPV4_VERSION  (4)
#define IPV6_VERSION  (6)

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
typedef struct _dpi_skb_t
{
    care_pkt_t   care_pkt;             /* �Ƿ�Ϊdpi��Ҫ����ı���*/
    uint8_t      pktdir;               /* ���� request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
                                          Ŀǰû�����ô���Ĭ��Ϊ0 */

    uint16_t     l2_proto;             /* ���� �������ͣ� IPV4����IPV6����
                                          0x0800:IPV4��0x86DD:IPV6 */
    uint8_t      l3_proto;             /* ���� �������ͣ� UDP����TCP*/

    uint16_t     pkt_len;              /* ���� �������ĵĳ��� */
    void        *pkt_tail;             /* ����βָ��*/
    void        *network_header;       /* ���� �����ͷ��������ָ�� */
    uint16_t     network_header_len;   /* ���� ��L2�㼰L2�����ϵ������ܳ��� */
    void        *mac_header;           /* ��·��ͷ��������ָ�� */

    void        *fe;                   /* struct flow_element  *ָ��,��Щ���������*/
}dpi_skb_t;



#define CONFIG_FILE_1    "sap_apps_sigs.conf"
#define CONFIG_FILE_2    "webmail_cn.html"
#define CONFIG_FILE_3    "sap_category_behavior.conf"



/***************����̹���Ľṹ�嶨��***********************/

#define RECV_BUF_MAX_SIZE  1500    //�շ����ĵĻ�������С

typedef enum
{
    WORK_INIT_DEFAULT  = 0,     /*��ʼ��Ĭ��ֵ*/
    WORK_STATUS_ARRIVE = 1,     /*���µ����ݵ���*/
    WORK_STATUS_USED   = 2,     /*�����Ѿ�������ȡ��ʹ��*/
}work_status_t;

typedef struct _pkt_buff
{
    work_status_t ws;          /*�Ƿ������ݵ���*/
    int           thread_id;   /*�߳����0-17*/
    int           proc_id;     /*����������0-35*/
    uint16_t      len;         /*���ĳ���*/
    uint8_t       buf[RECV_BUF_MAX_SIZE];   /*���汨��*/
}pkt_buff_t;



#endif /* COMMON_DPI_SDK_H_ */
