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

#define LTE_LOG_INPUT_SERIAL

#ifdef LTE_LOG_INPUT_SERIAL
#define LOG_PRINT(mid, level, fmt, ...) \
    do{\
                printf("[%s, %s]%s:%d  "fmt,\
                #mid,#level,__FILE__, __LINE__, ##__VA_ARGS__);\
}while(0)
#endif


/******************* �Զ����������� start ******************************/
typedef uint8_t flag_t;
/******************* �Զ����������� end   ******************************/


/*******************  �������÷��ش���ĺ�  ******************************/
#define LOG_CONTENT_NULL_POINT          "null point exception\n"
#define LOG_CONTENT_ALLOC_FAIL          "alloc memory fail\n"
#define LOG_CONTENT_FREE_MEMORY_FAIL    "free memory fail\n"

#ifndef MP_ERR_PRT
#define MP_ERR_PRT(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (MP_OK != ret) {                                   \
         printf("%s:%d error[%d]\n",__func__,__LINE__,ret); \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR_RET
#define MP_ERR_RET(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (MP_OK != ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR
#define MP_ERR(f)                                           \
   do {                                                     \
      mp_code_t ret = f;                                    \
      if (MP_OK != ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif

#ifndef MP_ERR_RET_CMD
#define MP_ERR_RET_CMD(f)                                   \
   do {                                                     \
      mp_code_t ret = f;                                    \
      if (MP_OK != ret) {                                   \
         return MDL_ERR(E_FAIL);                            \
      }                                                     \
   } while (0)
#endif

#ifndef MP_POINT_CHECK
#define MP_POINT_CHECK(p)                                   \
   do {                                                     \
      if (NULL == p){                                       \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

#ifndef PRINT_DATA_CONSL
#define PRINT_DATA_CONSL(p)                                 \
   do {                                                     \
      if (MP_OK == p){                                      \
          vty_printf(vty, "%s", show_str);                  \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK
#define CVMX_MP_POINT_CHECK(p, mid, lv)                     \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK_RET_P
#define CVMX_MP_POINT_CHECK_RET_P(p, mid, lv)               \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return NULL;                                       \
      }                                                     \
   } while (0)
#endif

#ifndef CVMX_MP_POINT_CHECK_UNLOCK
#define CVMX_MP_POINT_CHECK_UNLOCK(p, mid, lv)              \
   do {                                                     \
      if ( cvmx_unlikely(NULL == (p)) ){                    \
         HASH_TABLE_BUCKET_UNLOCK(bucket);                     \
         LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);        \
         return MP_NULL_POINT;                              \
      }                                                     \
   } while (0)
#endif

/******************* end  ***********************************************/

/* ����valueΪ����*/
#define MP_MEMSET(type, value) do {\
                                    memset(&(value), 0, sizeof(type));\
                                  }while(0)
/* ����valueΪָ��*/
#define MP_MEMSET_P(type, value) do {\
                                    memset((value), 0, sizeof(type));\
                                  }while(0)

#define MIN_EXCHANGE(a, b)     ( (a) = ( (a) < (b) ? (a) : (b) ) )
#define MP_MIN(a, b) ( ( (a) > (b) ) ? (b) : (a) )
#define MP_MAX(a, b) ( ( (a) < (b) ) ? (b) : (a) )



/*******************  ���ݴ�����صĺ�  **********************************/

#define BYTE_GET_UINT64(n) (sizeof(uint64_t)*(n))   /* ��ȡ��uint64Ϊ��λ�ĳ���ֵ���ֽ��� */

#define BIT_GET_LOW_ASCII_4(src)    ( (src) &  0x0f ) + 0x30 )
#define BIT_GET_HIGH_ASCII_4(src)   ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_ASCII_4(dst, src)    ( (dst) = ( (src) &  0x0f ) + 0x30 )
#define BIT_HIGH_ASCII_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_4(dst, src)    ( (dst) = ( (src) &  0x0f ) )
#define BIT_HIGH_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

/*��ȡһ��ֵ�ڴ洢��ַ�еĵ�n���ֽ�[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

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


/*sdk ʶ�����ṹ��*/

//src_mac=00:50:56:c0:00:08;src_ip=0.0.0.0;dst_ip=192.168.80.1;dst_port=5355;
//app_name=��Ѷ��Դ;app_cat_name=P2P���;handle_action=0;account=;action_name=����;content=;msg=

typedef   uint8_t    mac_t[6];

typedef struct _dpi_result_t
{
    uint32_t    app_id;             /* Ӧ��id*/
    flag_t      have_audit_log;     /* �������־�ı�־*/
    mac_t       src_mac;            /* Դmac��ַ*/
    ip_comm_t   src_ip;             /* Դip*/
    ip_comm_t   dst_ip;             /* Ŀ��ip*/
    uint32_t    user_ip;            /* �û�IP*/
    uint16_t    dst_port;           /* Ŀ�Ķ˿�*/

    uint8_t    *app_name;           /* app����*/
    uint16_t    app_name_len;

    uint8_t    *app_cat_name;       /* Ӧ�÷���*/
    uint8_t     app_cat_name_len;

    uint32_t    handle_action;      /* δ�õ�ѡ����ڷ������е��ֶ� */

    uint8_t    *account;            /* �����Ϊ�µ��û��� */
    uint16_t    account_len;

    uint8_t    *action_name;        /* Ӧ����Ϊ*/
    uint16_t    action_name_len;

    uint8_t    *content;            /* ������� */
    uint32_t    content_len;
    uint8_t    *msg;                /* Ԥ���ֶ� */
}dpi_result_t;


/*-----------------------------��־�ṹ-------------------------------------*/
/* ��־�ȼ� */
typedef enum
{
    LV_DBG  = (1 << 0), /* ���ڵ�����ģ�鹦�ܣ�������С�������������Ĳ��� */
    LV_INFO = (1 << 1), /* �����͹����е����̴�ӡ����������������� */
    LV_WARN = (1 << 2), /* ������Ϣ��������bcd��ʽ�ı���ʲô��
                         * ����һЩ�쳣���ص���ʾ��Ϣ */
    LV_ERROR= (1 << 3), /* �������⣬����������ָ���ˣ�
                         * �����ҵ���cell�Ҳ����˵����ص��߼������ϵͳ���� */
}log_level_t;


/* ����ʹ�� */
#define MODULE_DPI_SESSION          0x0000001
#define MODULE_DPI_DATA             0x0000002

/* ģ��ID */
typedef enum
{
    M_SE = MODULE_DPI_SESSION,      /* �Ự���� */
    M_DT = MODULE_DPI_DATA,         /* ʶ�������ݴ��� */
}log_module_t;

#endif /* INCLUDE_SEMP_COMMON_DPI_H_ */
