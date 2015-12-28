/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       lte_log.c
编码格式:     ASCII
作者:         chenbin
创建:         Nov 30, 2015
历史:
    1.日期    :Nov 30, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_LTE_LTE_LOG_C_
#define MODULES_LTE_LTE_LOG_C_

#include "lte_log.h"

/* 配置了读写锁，不对外开放，初始值为0 */
volatile CVMX_SHARED uint32_t g_lte_log_swt = 0;
CVMX_SHARED cvmx_spinlock_t   g_lte_log_spinlock;


CVMX_SHARED kfifo_t fifo = {}; /* 环形队列数据结构，用于日志缓冲区*/

inline void lte_log_destory()
{
    if(fifo.buffer != NULL)
        free(fifo.buffer);
}

inline int lte_log_init()
{
    fifo.buffer = (log_pkt_t*)malloc(LTE_TOTAL_SIZE * sizeof(log_pkt_t));
    fifo.size = LTE_TOTAL_SIZE;
    fifo.pwrite_cur = fifo.buffer;
    fifo.pread_cur =  fifo.buffer;
    printf("log cache addr = %p\n", fifo.buffer);
    cvmx_spinlock_init(&(g_lte_log_spinlock));
    cvmx_spinlock_init(&(fifo.wlock));

    fifo.pkt_read_cur = 0;
    fifo.pkt_write_cur = 0;
    fifo.pkt_count = 0;
    fifo.pkt_total_bytes = 0;

    return 0;
}


inline mp_code_t lte_log_write(const char *format, ...)
{
    va_list ap;
    va_start( ap, format);

    if( NULL == fifo.pwrite_cur)
    {
        return MP_NULL_POINT;
    }

    /*lock the data which pwrite_cur point to*/
    cvmx_spinlock_lock(&(fifo.wlock));

    vsprintf((char*)(fifo.pwrite_cur->data),format, ap);
    printf("log num = %d\n", (int)(fifo.pwrite_cur-fifo.buffer) );
    fifo.pwrite_cur->data[LTE_LOG_DATA_SIZE-1] = '\0';
    fifo.pwrite_cur->len = strnlen((char*)(fifo.pwrite_cur->data), LTE_LOG_DATA_SIZE);
    fifo.pwrite_cur->en = STATUS_LOG_NEW;

    /*adjust new currut point*/
    if( IS_LIST_TAIL(fifo.pwrite_cur) )
    {
        fifo.pwrite_cur = fifo.buffer;
    }
    else
    {
        fifo.pwrite_cur++;
    }
    cvmx_spinlock_unlock(&(fifo.wlock));

    va_end( ap );
    return MP_OK;
}

inline mp_code_t lte_log_read(uint8_t *dst_data, uint16_t dst_len, int* read_acl_len)
{
    if( NULL == dst_data || (dst_len < LTE_LOG_DATA_SIZE))
    {
        return MP_FUN_PARAM_ERR;
    }

    if( STATUS_LOG_NEW != fifo.pread_cur->en)
    {
        return MP_NO_LOG_READ;
    }
    memcpy(dst_data, fifo.pread_cur->data, fifo.pread_cur->len);
    *(dst_data + fifo.pread_cur->len) = '\0';
    fifo.pread_cur->en = STATUS_LOG_NONE;
    *read_acl_len =  fifo.pread_cur->len;
    /*adjust new currut point*/
    if( IS_LIST_TAIL(fifo.pread_cur) )
    {
        fifo.pread_cur = fifo.buffer;
    }
    else
    {
        fifo.pread_cur++;
    }
    return MP_OK;
}

inline mp_code_t lte_log_flag_write(log_module_t mid, log_level_t lv, log_en_t en)
{
    mp_code_t ret = MP_OK;
    LTE_LOG_SWT_LOCK(g_lte_log_spinlock);

    if( LTE_LOG_OFF == en )
    {
        g_lte_log_swt = g_lte_log_swt & ((~((uint32_t)lv)) << MID_BIT_NUM);
    }
    else
    {
        g_lte_log_swt = g_lte_log_swt | (((uint32_t)lv) << MID_BIT_NUM);
    }

    if(LTE_LOG_OFF == en && (0x00 == VA_LEVEL) )
    {
        g_lte_log_swt = g_lte_log_swt & (~((uint32_t)mid));//关闭条件:off,level位全为0
    }
    else
    {
        g_lte_log_swt = g_lte_log_swt | ((uint32_t)mid);// 与,置1启动
    }

    LTE_LOG_SWT_UNLOCK(g_lte_log_spinlock);
    return ret;
}

inline uint32_t lte_log_flag_read()
{
    return g_lte_log_swt;
}

/**********************************************************************
 * lte_packet_write
 * 函数说明：捕捉报文并存入cache中，抓满就停止
 **********************************************************************/
inline mp_code_t lte_packet_write(uint8_t* buf, uint16_t len)
{
    uint8_t *pkt_base = (uint8_t *)(fifo.buffer);

    if( len >= LTE_LOG_DATA_SIZE)
    {
        return MP_FAIL;
    }
    /*必须要少一个，否则最后一条报文不全*/
    if( fifo.pkt_write_cur <  sizeof(log_pkt_t)* (LTE_TOTAL_SIZE-1) )
    {
//        if(fifo.pkt_write_cur > sizeof(log_pkt_t)* (LTE_TOTAL_SIZE-3) ||
//           fifo.pkt_write_cur < sizeof(log_pkt_t)* (3)    )
//        {
//            printf("write packet, pkt_write_cur = %d [%lu],",
//                fifo.pkt_write_cur,sizeof(log_pkt_t)* LTE_TOTAL_SIZE );
//        }
        memcpy(pkt_base+fifo.pkt_write_cur, &len, sizeof(uint16_t));
        fifo.pkt_write_cur += 2;
        memcpy(pkt_base+fifo.pkt_write_cur, buf, len);
        fifo.pkt_write_cur += len;
        fifo.pkt_count++;
        fifo.pkt_total_bytes = fifo.pkt_total_bytes + len;
//        if(fifo.pkt_write_cur > sizeof(log_pkt_t)* (LTE_TOTAL_SIZE-3) ||
//           fifo.pkt_write_cur < sizeof(log_pkt_t)* (3)    )
//        {
//            printf("len = %d , pkt_write_cur = %d\n", len,  fifo.pkt_write_cur);
//        }
    }
    return MP_OK;
}

inline mp_code_t lte_packet_read(uint8_t* buf, uint16_t *len)
{
    uint8_t *pkt_base = (uint8_t *)(fifo.buffer);
//    int i = 0;
    if( fifo.pkt_read_cur <  sizeof(log_pkt_t)* (LTE_TOTAL_SIZE-1) )
    {
//        printf("read packet, pkt_read_cur = %d [%lu]\n", fifo.pkt_read_cur,sizeof(log_pkt_t)* LTE_TOTAL_SIZE );
        memcpy(len, pkt_base+fifo.pkt_read_cur, sizeof(uint16_t));
        fifo.pkt_read_cur += 2;
        memcpy(buf, pkt_base+fifo.pkt_read_cur, *len);
        fifo.pkt_read_cur += (*len);
        fifo.pkt_count--;
        fifo.pkt_total_bytes = fifo.pkt_total_bytes - (*len);
//        printf("lte_packet_write: len = %d\n",*len);
//        for(i = 0 ; i < *len ; i++)
//        {
//            if(i % 8 == 0 && i > 0)
//                printf("\n");
//            printf("%02x ", buf[i]);
//        }
//        printf("\n");
    }
    else
    {
        *len = 1;//代表数据取完了
    }
    return MP_OK;
}

int lte_packet_is_full()
{
    //return fifo.pkt_write_cur > 0 ? 1:0;//先拿一条试下
    return ( fifo.pkt_write_cur <  sizeof(log_pkt_t)* (LTE_TOTAL_SIZE-1) )? 0:1;
}

int lte_packet_have_data_to_read()
{
    return ( fifo.pkt_read_cur < fifo.pkt_write_cur )? 1: 0;
}

int lte_packet_count_get()
{
    return fifo.pkt_count;
}
int lte_packet_total_size_get()
{
    return fifo.pkt_total_bytes;
}
mp_code_t lte_packet_reset()
{
    fifo.pkt_read_cur = 0;
    fifo.pkt_write_cur = 0;
    fifo.pkt_count = 0;
    fifo.pkt_total_bytes = 0;
    return MP_OK;
}

#endif /* MODULES_LTE_LTE_LOG_C_ */
