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




typedef enum {
    MP_OK                   = 0,           /* �������� */
    MP_PARSE_RLT            = 100,         /* Э������������ */
    MP_TABLE_EMPTY          = 101,         /* �ձ���� */
    MP_TABLE_FULL           = 102,         /* �������� */
    MP_NOT_FOUND            = 103,         /* ����δ�ҵ� */
    MP_CELL_FOUND           = 104,         /* �������ҵ� */
    MP_FUN_PARAM_ERR        = 105,         /* ���������Ƿ� */
    MP_NULL_POINT           = 106,         /* ��ָ����� */
    MP_SPACE_NOT_ENOUGH     = 107,         /* ָ��ָ��ĵ�ַ�ռ䲻�� */
    MP_NON_BCD_FORMAT       = 108,         /* ��BCD��ʽ */
    MP_NO_LOG_READ          = 109,         /* ��ǰû�пɶ���־ */
    MP_RELATE_SUCCESS       = 110,         /* gtpu�����ɹ� */
    MP_EXCEPTION_STAT       = 111,         /* δ������쳣������� */
    MP_MEMORY_FAIL          = 112,         /* �ڴ洦��ʧ�� */
    MP_WORK_NULL            = 113,         /* work����Ϊ�� */
    MP_SEND_PKT_SUCCESS     = 114,         /* ���ݰ����ͳɹ� */
    MP_FAIL                 = 255          /* ���������еĴ��󷵻� */
}mp_code_t;


/******************* �Զ����������� start ******************************/
typedef uint8_t flag_t;
/******************* �Զ����������� end   ******************************/


/*******************  �������÷��ش���ĺ�  ******************************/

#ifndef CVMX_DPI_POINT_CHECK_UNLOCK
#define CVMX_DPI_POINT_CHECK_UNLOCK(p, mid, lv)              \
   do {                                                     \
           ;\
      }                                                     \
   } while (0)
#endif

/******************* end  ***********************************************/

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

typedef struct
{
    uint8_t rlt; //
}app_session_t;



#define CONFIG_FILE_1    "sap_apps_sigs.conf"
#define CONFIG_FILE_2    "webmail_cn.html"
#define CONFIG_FILE_3    "sap_category_behavior.conf"


#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
