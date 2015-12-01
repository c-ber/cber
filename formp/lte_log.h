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

#include "cvmx_common.h"
#include "semp-errno.h"
#include "semp_hydra_relate.h"

#define LTE_LOG

/**************************  ģ�鶨��  *******************************/
#define MID_BIT_NUM    24
#define VA_LEVEL ( ((read_lte_log_flag() & 0xFF000000) >> MID_BIT_NUM) & 0xff)
#define VA_MODULE   (read_lte_log_flag() & 0x00FFFFFF)


/**********************************************************************/


/************************  �ж�ģ����־�Ƿ�� ************************/
#define IS_LOG_OPEN(mid)  (  ((mid) & (VA_MODULE)) & 0xFFFFFFF )
/**********************************************************************/


/***************************  ��־�ȼ��ж� ****************************/
#define LOG_LV_MATCH(lv)  (  ((lv) & (VA_LEVEL)) & 0xFF )
/**********************************************************************/

#ifdef LTE_LOG
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
#else
#define LOG_PRINT(mid, level, fmt, ...)
#endif

#define LTE_LOG_SWT_LOCK(lock)  do{ \
    cvmx_spinlock_lock(&(lock));  \
    }while(0)

#define LTE_LOG_SWT_UNLOCK(lock)  do{\
    cvmx_spinlock_unlock(&(lock));  \
}while(0)


inline mp_code_t write_lte_log_flag(log_module_t mid, log_level_t lv, log_en_t en);
inline uint32_t read_lte_log_flag();

#endif /* MODULES_LTE_LTE_LOG_H_ */
