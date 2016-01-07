/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_log.h
编码格式:     ASCII
作者:         chenbin
创建:         Nov 30, 2015
历史:
    1.日期    :Nov 30, 2015
      作者    :cb
      修改    :Created file
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

/***************************** 扩展日志缓存功能 ********************************/
#define LTE_LOG_CACHE       "lte_log_cache"

#ifdef CAP_PACKET_VERSION
#define LTE_TOTAL_SIZE        (2*1024*1024)  //2G,分配的最小单元的单位为k
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

#define CAPTURE_PKT_MAX_SIZE     8192 /* 即使采用分帧，也要限制最大报文长度 */
/*本次设计，采用固定长度存放报文, 简单而稳定，鉴于内存够用
首帧标志FIR、末帧标志FIN，FIR：置“1”，报文的第一帧。FIN：置“1”，报文的最后一帧。
FIR、FIN组合状态所表示的含义见下表。
FIR    FIN    应用说明
  0      0    多帧：中间帧
  0      1    多帧：结束帧
  1      0    多帧：第1帧，有后续帧
  1      1    单帧
*/
typedef struct _log_pkt
{
    struct
    {
        uint32_t en:1;  /* 是否使用 */
        uint32_t len:15;/* 日志长度，不以\0为结束标志，以len为标准 */
    };
    log_data_t data;
}log_pkt_t;

typedef struct log_cache_kfifo
{
    log_pkt_t *buffer;  /* the buffer holding the data */
    unsigned int size;  /* the size of the allocated buffer */
    log_pkt_t* pwrite_cur;   /* 写日志的当前指针 */
    log_pkt_t* pread_cur;    /* 读日志的当前指针 */
    uint32_t   pkt_write_cur;/* 写报文的当前指针 */
    uint32_t   pkt_read_cur; /* 读报文的当前指针 */
    uint32_t   pkt_count;    /* 当前存储的报文总数 */
    uint32_t   pkt_total_bytes; /* 当前存储的总字节数 */
    cvmx_spinlock_t wlock;   /* protects concurrent modifications */
}kfifo_t;
/*********************************** END **************************************/




/**************************  模块定义  *******************************/
#define MID_BIT_NUM    24
#define VA_LEVEL ( ((lte_log_flag_read() & 0xFF000000) >> MID_BIT_NUM) & 0xff)
#define VA_MODULE   (lte_log_flag_read() & 0x00FFFFFF)


/**********************************************************************/


/************************  判断模块日志是否打开 ************************/
#define IS_LOG_OPEN(mid)  (  ((mid) & (VA_MODULE)) & 0xFFFFFFF )
/**********************************************************************/


/***************************  日志等级判断 ****************************/
#define LOG_LV_MATCH(lv)  (  ((lv) & (VA_LEVEL)) & 0xFF )
/**********************************************************************/


#ifdef LTE_LOG_INPUT_SERIAL
/* 模块ID， 日志等级， 日志内容*/
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
