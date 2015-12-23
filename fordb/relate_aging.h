/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       relate_aging.h
编码格式:     ASCII
作者:         chenbin
创建:         Oct 13, 2015
历史:
    1.日期    :Oct 13, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_LTE_RELATE_AGING_H_
#define MODULES_LTE_RELATE_AGING_H_

#ifndef bool
#define bool uint8_t
#endif
#ifndef true
#define true  1
#endif
#ifndef false
#define false 0
#endif

#include "lte_relate.h"
#include "lte_hash.h"
#include "lte_relate_s11.h"

extern CVMX_SHARED hash_bucket_t  *lte_tables;
extern CVMX_SHARED hash_table_t    lte_tables_info[TABLE_MAX];
extern CVMX_SHARED cvmx_spinlock_t imsi_delete_lock;
extern volatile CVMX_SHARED  bool g_lte_start_flag;

#define LTE_AGING_TIMER_LOWER_LIMIT     1    /* 老化计数器值下限值 */

#ifdef RELATE_AGING


/**************************************************************************/
/*                              结构体和枚举定义块                         */
/**************************************************************************/

/* 老化结构体 (relate table  ==> rt )*/
typedef struct
{
    uint8_t  rt_min_time;     /*计数器值等于这个值后，需要进行老化删除
                                禁止设置为0(可以防止在计数器异常后仍能有效处理异常)*/

}lte_aging_t;

/**************************************************************************/
/*                              函数声明块                                 */
/**************************************************************************/
mp_code_t lte_aging_relate_update_timer_by_imsi(lte_imsi_t imsi);

static mp_code_t lte_aging_relate_by_imsi(lte_imsi_t imsi);

static mp_code_t lte_aging_search_s1u_table(hash_table_t *table);

static mp_code_t lte_aging_search_imsi_table( hash_table_t *table );

static mp_code_t lte_aging_search_table(hash_table_t *table);

static mp_code_t lte_aging_get_relate_num(uint32_t *relate_total_num);

static mp_code_t lte_aging_process_delete();

mp_code_t lte_full_table_update_timer( hash_table_t *table, uint16_t tm);

mp_code_t lte_aging_process_check();

void * npcp_update_cell_timer(void *thread_data);

#endif
mp_code_t lte_aging_clear_relate_by_imsi(lte_imsi_t imsi);

#endif /* MODULES_LTE_RELATE_AGING_H_ */


