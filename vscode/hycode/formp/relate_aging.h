/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       relate_aging.h
�����ʽ:     ASCII
����:         chenbin
����:         Oct 13, 2015
��ʷ:
    1.����    :Oct 13, 2015
      ����    :cb
      �޸�    :Created file
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

#define LTE_AGING_TIMER_LOWER_LIMIT     1    /* �ϻ�������ֵ����ֵ */

#ifdef RELATE_AGING


/**************************************************************************/
/*                              �ṹ���ö�ٶ����                         */
/**************************************************************************/

/* �ϻ��ṹ�� (relate table  ==> rt )*/
typedef struct
{
    uint8_t  rt_min_time;     /*������ֵ�������ֵ����Ҫ�����ϻ�ɾ��
                                ��ֹ����Ϊ0(���Է�ֹ�ڼ������쳣��������Ч�����쳣)*/

}lte_aging_t;

/**************************************************************************/
/*                              ����������                                 */
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


