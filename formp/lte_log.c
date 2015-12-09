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
volatile CVMX_SHARED uint32_t g_lte_log_swt      = 0;
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

    cvmx_spinlock_init(&(g_lte_log_spinlock));
    cvmx_spinlock_init(&(fifo.wlock));

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

inline mp_code_t lte_log_read(uint8_t *dst_data, uint8_t dst_len, int* read_acl_len)
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




#endif /* MODULES_LTE_LTE_LOG_C_ */
