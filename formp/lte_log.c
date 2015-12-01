/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       lte_log.c
�����ʽ:     ASCII
����:         chenbin
����:         Nov 30, 2015
��ʷ:
    1.����    :Nov 30, 2015
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_LTE_LTE_LOG_C_
#define MODULES_LTE_LTE_LOG_C_

#include "lte_log.h"

/* �����˶�д���������⿪�ţ���ʼֵΪ0 */
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
        g_lte_log_swt = g_lte_log_swt & (~((uint32_t)mid));//�ر�����:off,levelλȫΪ0
    }
    else
    {
        g_lte_log_swt = g_lte_log_swt | ((uint32_t)mid);// ��,��1����
    }

    LTE_LOG_SWT_UNLOCK(g_lte_log_spinlock);
    return ret;
}

inline uint32_t read_lte_log_flag()
{
    return g_lte_log_swt;
}

#endif /* MODULES_LTE_LTE_LOG_C_ */
