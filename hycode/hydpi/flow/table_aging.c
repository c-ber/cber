
#include "pub_header.h"
#include <time.h>
#include "table_aging.h"
#include "session_mng_hash.h"


uint32_t update_time = 0;
uint32_t check_interval = 15;
uint16_t g_aging_timer_max=300;


#define DPI_AGING_TIMER_LOWER_LIMIT 1    /* 老化计数器值下限值 */

uint32_t MONO_TIME(void)
{
    struct timespec tp;
    clock_gettime(CLOCK_MONOTONIC, &tp);

    return tp.tv_sec;
}

void aging_scan_timer_init(void)
{
    update_time = MONO_TIME();
}


uint16_t session_mng_cell_set_timer(void *cell, timer_opera_t opera, uint16_t value)
{
    if(NULL == cell)
    {
        printf("null point exception\n");
        return DPI_NULL_POINT;
    }
    
    dpi_table_session_mng_t *entry =  (dpi_table_session_mng_t *)cell;

    switch( opera )
    {
        case TIMER_REPLACE:
            entry->aging = value;
            break;
        case TIMER_REDUCE:
            entry->aging = entry->aging?entry->aging - value:entry->aging;
            break;
        default:
            break;
    }
    return entry->aging;
}


/******************************************************************************
 * 函数名称    : dpi_aging_search_table
 * 功能        : 通用的直接扫描方式, 更新计数器，老化删除表
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
dpi_code_t dpi_aging_search_table( hash_table_t *table )
{
    uint32_t i = 0;
    uint16_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    if(NULL == table)
    {
        printf("null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == table->first_bucket)
    {
        printf("null point exception\n");
        return DPI_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(NULL == bucket)
        {
            printf("null point exception\n");
            return DPI_NULL_POINT;
        }
        
        /*锁住桶子，下面是遍历cell链表*/
        DPI_HASH_TABLE_LOCK(bucket);
        pos = (&(bucket->head))->next;
        if(NULL == pos)
        {
            DPI_HASH_TABLE_UNLOCK(bucket);
            printf("null point exception\n");
            return DPI_NULL_POINT;
        }

        for (next = pos->next; pos != (&(bucket->head)); next = pos->next)
        {
            hash_cell = list_entry(pos, hash_cell_t, node);

            if(NULL == hash_cell)
            {
                DPI_HASH_TABLE_UNLOCK(bucket);
                printf("【dpi_aging_search_table】:hash_cell is null point exception\n");
                return DPI_NULL_POINT;
            }

            if(NULL == table->set_timer)
            {
                DPI_HASH_TABLE_UNLOCK(bucket);
                printf("【dpi_aging_search_table】:table->set_timer is null point exception\n");
                return DPI_NULL_POINT;
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, check_interval);
            if( tim <= DPI_AGING_TIMER_LOWER_LIMIT)//删除cell
            {
                printf("【dpi_aging_search_table】:tim <= DPI_AGING_TIMER_LOWER_LIMIT\n");
                if(NULL == hash_cell->node.prev)
                {
                    DPI_HASH_TABLE_UNLOCK(bucket);
                    printf("null point exception\n");
                    return DPI_NULL_POINT;
                }

                if(NULL == hash_cell->node.next)
                {
                    DPI_HASH_TABLE_UNLOCK(bucket);
                    printf("null point exception\n");
                    return DPI_NULL_POINT;
                }
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                free(hash_cell);
                hash_cell = NULL;
                bucket->bucket_depth--;
             }
            pos = next;
            if(NULL == pos)
            {
                DPI_HASH_TABLE_UNLOCK(bucket);
                printf("null point exception\n");
                return DPI_NULL_POINT;
            }
        }

        DPI_HASH_TABLE_UNLOCK(bucket);
    }
    return DPI_OK;
}


dpi_code_t dpi_aging_process_check()
{

    dpi_aging_search_table(DPI_GET_TABLE_PTR(TABLE_SESSION));
    return DPI_OK;
}


void  app_aging_main_loop()
{
    while (1)
    {
        if( (update_time + check_interval) < MONO_TIME())
        {
            dpi_aging_process_check();

            update_time=MONO_TIME();
        }

        usleep(5000);
    }
}

/* system time defination */





