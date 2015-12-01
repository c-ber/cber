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


inline mp_code_t write_lte_log_flag(log_module_t mid, log_level_t lv, log_en_t en)
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

inline uint32_t read_lte_log_flag()
{
    return g_lte_log_swt;
}

#endif /* MODULES_LTE_LTE_LOG_C_ */
