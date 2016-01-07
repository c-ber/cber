/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       lte_log.h
�����ʽ:     ASCII
����:         chenbin
����:         Nov 30, 2015
��ʷ:
    1.����    :Nov 30, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_LTE_LTE_LOG_H_
#define MODULES_LTE_LTE_LOG_H_

//#include "share-table.h"
#include    <stdio.h>
#include    <stdlib.h>
#include    <stdarg.h>
#include    <string.h>

#include    "cvmx_common.h"
#include    "semp-errno.h"
#include    "semp_hydra_relate.h"


//#define LTE_LOG_INPUT_SERIAL
#define LTE_LOG_INPUT_MEMERY
//#define LTE_LOG_INPUT_NONE

/***************************** ��չ��־���湦�� ********************************/
#define LTE_LOG_CACHE       "lte_log_cache"

#ifdef CAP_PACKET_VERSION
#define LTE_TOTAL_SIZE        (2*1024*1024)  //2G,�������С��Ԫ�ĵ�λΪk
#else
#define LTE_TOTAL_SIZE        (1024 * 1024)
#define LTE_LOG_CACHE_SIZE    (LTE_LOG_DATA_SIZE * LTE_TOTAL_SIZE)//256M
#endif
#define STATUS_LOG_NEW     1
#define STATUS_LOG_NONE    0


#define FIFO_HEAD (fifo.buffer)
#define FIFO_TAIL (FIFO_HEAD + fifo.size - 1)

#define IS_LIST_HEAD(cur) ( ((cur) == FIFO_HEAD)? 1 : 0 )
#define IS_LIST_TAIL(cur) ( ((cur) == FIFO_TAIL)? 1 : 0 )



typedef uint8_t log_data_t[LTE_LOG_DATA_SIZE];

#define CAPTURE_PKT_MAX_SIZE     8192 /* ��ʹ���÷�֡��ҲҪ��������ĳ��� */
/*������ƣ����ù̶����ȴ�ű���, �򵥶��ȶ��������ڴ湻��
��֡��־FIR��ĩ֡��־FIN��FIR���á�1�������ĵĵ�һ֡��FIN���á�1�������ĵ����һ֡��
FIR��FIN���״̬����ʾ�ĺ�����±�
FIR    FIN    Ӧ��˵��
  0      0    ��֡���м�֡
  0      1    ��֡������֡
  1      0    ��֡����1֡���к���֡
  1      1    ��֡
*/
typedef struct _log_pkt
{
    struct
    {
        uint32_t en:1;  /* �Ƿ�ʹ�� */
        uint32_t len:15;/* ��־���ȣ�����\0Ϊ������־����lenΪ��׼ */
    };
    log_data_t data;
}log_pkt_t;

typedef struct log_cache_kfifo
{
    log_pkt_t *buffer;  /* the buffer holding the data */
    unsigned int size;  /* the size of the allocated buffer */
    log_pkt_t* pwrite_cur;   /* д��־�ĵ�ǰָ�� */
    log_pkt_t* pread_cur;    /* ����־�ĵ�ǰָ�� */
    uint32_t   pkt_write_cur;/* д���ĵĵ�ǰָ�� */
    uint32_t   pkt_read_cur; /* �����ĵĵ�ǰָ�� */
    uint32_t   pkt_count;    /* ��ǰ�洢�ı������� */
    uint32_t   pkt_total_bytes; /* ��ǰ�洢�����ֽ��� */
    cvmx_spinlock_t wlock;   /* protects concurrent modifications */
}kfifo_t;
/*********************************** END **************************************/




/**************************  ģ�鶨��  *******************************/
#define MID_BIT_NUM    24
#define VA_LEVEL ( ((lte_log_flag_read() & 0xFF000000) >> MID_BIT_NUM) & 0xff)
#define VA_MODULE   (lte_log_flag_read() & 0x00FFFFFF)


/**********************************************************************/


/************************  �ж�ģ����־�Ƿ�� ************************/
#define IS_LOG_OPEN(mid)  (  ((mid) & (VA_MODULE)) & 0xFFFFFFF )
/**********************************************************************/


/***************************  ��־�ȼ��ж� ****************************/
#define LOG_LV_MATCH(lv)  (  ((lv) & (VA_LEVEL)) & 0xFF )
/**********************************************************************/


#ifdef LTE_LOG_INPUT_SERIAL
/* ģ��ID�� ��־�ȼ��� ��־����*/
#define LOG_PRINT(mid, level, fmt, ...) \
    do{\
        if(IS_LOG_OPEN(mid))\
        {\
            if( LOG_LV_MATCH(level) )\
            {\
                printf("[%s, %s]%s:%d  "fmt,\
                #mid,#level,__FILE__, __LINE__, ##__VA_ARGS__);\
            }\
        }\
}while(0)
#endif

#ifdef LTE_LOG_INPUT_MEMERY
#define LOG_PRINT(mid, level, fmt, ...)\
do{\
    if(IS_LOG_OPEN(mid))\
    {\
        if( LOG_LV_MATCH(level) )\
        {\
            lte_log_write("[%s, %s]%s:%d  "fmt,\
            #mid,#level,__FILE__, __LINE__, ##__VA_ARGS__);\
        }\
    }\
}while(0)
#endif

#ifdef LTE_LOG_INPUT_NONE
#define LOG_PRINT(mid, level, fmt, ...)
#endif


#define LTE_LOG_SWT_LOCK(lock)  do{ \
    cvmx_spinlock_lock(&(lock));  \
    }while(0)

#define LTE_LOG_SWT_UNLOCK(lock)  do{\
    cvmx_spinlock_unlock(&(lock));  \
}while(0)


inline mp_code_t lte_log_flag_write(log_module_t mid, log_level_t lv, log_en_t en);
inline uint32_t  lte_log_flag_read();
inline int lte_log_init();
inline mp_code_t lte_log_write(const char *format, ...);
inline mp_code_t lte_log_read(uint8_t *dst_data, uint16_t dst_len, int* read_acl_len);

inline mp_code_t _lte_packet_write(uint8_t* buf, pkt_head_t *head);

int lte_packet_is_full();
int lte_packet_have_data_to_read();
int lte_packet_count_get();
int lte_packet_total_size_get();
mp_code_t lte_packet_reset();
inline mp_code_t lte_packet_split_write(uint8_t* buf, uint16_t len);
inline mp_code_t lte_packet_read(uint8_t* buf, pkt_head_t *head);
#endif /* MODULES_LTE_LTE_LOG_H_ */
