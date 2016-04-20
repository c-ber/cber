/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       relate_aging.c
编码格式:     ASCII
作者:         chenbin
创建:         Oct 13, 2015
历史:
    1.日期    :Oct 13, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "relate_aging.h"


/* 老化功能扫描间隔时间        */
CVMX_SHARED uint64_t g_scan_interval       = AGING_SCAN_INTE;

/* 计数器初始值<限制:1～65535> */
CVMX_SHARED uint64_t g_aging_timer_max     = AGING_INIT_TIME;

/* 提供给用户配置的老化时间, 单位为秒 <限制:10s～100000s>       */
CVMX_SHARED uint64_t g_max_relate_lifetime = AGING_SCAN_INTE * AGING_INIT_TIME;


/******************************************************************************
 * 函数名称    : lte_aging_clear_relate_by_imsi
 * 功能        : 根据imsi，删除对应关联信息,
 * 备注        ：重要接口函数，删除某条关联整体的唯一函数
 *               专门加了删除锁
 * 参数        : 数组格式的imsi值
 * 返回        : MP_OK--删除成功, MP_FAIL--imsi对应的表项不存在
******************************************************************************/
mp_code_t lte_aging_clear_relate_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;

    hash_key_t       key       = {};
    lte_table_imsi_t imsi_cell = {};


    /* 调用哈希查询接口，查询imsi表 */
    update_imsi_hash_key(imsi, &(key));
    ret = hash_cell_get_by_hash( LTE_GET_TABLE_PTR(TABLE_IMSI),
                                 &(key), &imsi_cell, sizeof(lte_table_imsi_t) );
    if(MP_CELL_FOUND != ret)
    {
        return MP_FAIL;
    }

    // locate s1u table entry(include default/dedicated uplink/downlink) with imsi then delete them
    lte_delete_s1u_by_imsi(&imsi_cell, 0);


    /* 删除s11-sgw,s11-mme，删除其下s1u表 */
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_cell.pos_s11_sgw));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_cell.pos_s11_mme));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S6A), &(imsi_cell.pos_s6a));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME), &(imsi_cell.pos_s1_mme));

    /*采用哈希方式删除imsi总表*/
    hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&(key));

    return MP_OK;
}

#ifdef RELATE_AGING
/* 根据s1u更新imsi,sgw,s11-mme,s1-mme,s6a表计数器 ,
 * 解锁了imsi表，不会产生死锁，同时cell被删也没事 */
mp_code_t lte_aging_relate_update_timer_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;
    hash_key_t key = {};
    lte_table_imsi_t     tb_imsi    = {};

    CVMX_MP_POINT_CHECK(imsi, M_AGING, LV_ERROR);

    update_imsi_hash_key(imsi, &key);
    ret = hash_cell_get_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),
                                &key, &tb_imsi, sizeof(tb_imsi));
    if(MP_CELL_FOUND != ret)
    {
        return ret;
    }

    hash_cell_update_timer_by_hash (LTE_GET_TABLE_PTR(TABLE_IMSI),
                                    &key,                   g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                    &(tb_imsi.pos_s11_sgw), g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                    &(tb_imsi.pos_s11_mme), g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME),
                                    &(tb_imsi.pos_s1_mme),  g_aging_timer_max);

    hash_cell_update_timer_by_index(LTE_GET_TABLE_PTR(TABLE_S6A),
                                    &(tb_imsi.pos_s6a),     g_aging_timer_max);

    return ret;
}


/******************************************************************************
 * 函数名称    : lte_aging_search_s1u_table
 * 功能        : 扫描s1u表,如果更新标志变化，需要同步imsi，mme,sgw表的计数器,
 *               否则只更新s1u的计数器，删除s1u表
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
static mp_code_t lte_aging_search_s1u_table( hash_table_t *table )
{
    int i = 0;
    uint16_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*锁住s1u桶子，下面是遍历cell链表*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell, M_AGING, LV_ERROR);

            lte_table_s1u_t *s1u_cell = (lte_table_s1u_t *)(hash_cell->entry);
            CVMX_MP_POINT_CHECK_UNLOCK(s1u_cell, M_AGING, LV_ERROR);

            if ( true == s1u_cell->ex_field.updt_tim )
            {
                //通过imsi关联其他表项
                //更新关联表其他cell的计数器值
                lte_aging_relate_update_timer_by_imsi(s1u_cell->imsi);
                s1u_cell->ex_field.updt_tim = false;//必须要恢复更新计数器值的标志
            }

#ifdef RELATE_AGING
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT )
            {
                /* 删除cell,这里要用统一接口，待优化 */
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                HASH_CELL_FREE(bucket, table->pool, hash_cell);
            }
#endif
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}



/******************************************************************************
 * 函数名称    : lte_aging_search_table
 * 功能        : 通用的直接扫描方式, 更新计数器，老化删除表
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
static mp_code_t lte_aging_search_table( hash_table_t *table )
{
    int i = 0;
    uint16_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*锁住桶子，下面是遍历cell链表*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);

            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell,        M_AGING, LV_ERROR);
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//删除cell
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                HASH_CELL_FREE(bucket, table->pool, hash_cell);
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}
/******************************************************************************
 * 函数名称    : lte_full_table_update_timer
 * 功能        : 通用的直接扫描方式, 更新计数器
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_code_t lte_full_table_update_timer( hash_table_t *table,
                                       uint16_t      tm)
{
    int i = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    CVMX_MP_POINT_CHECK(table, M_AGING, LV_ERROR);
    CVMX_MP_POINT_CHECK(table->first_bucket, M_AGING, LV_ERROR);

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        CVMX_MP_POINT_CHECK(bucket, M_AGING, LV_ERROR);

        LTE_HASH_TABLE_LOCK(bucket); /*锁住桶子，下面是遍历cell链表*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            CVMX_MP_POINT_CHECK_UNLOCK(hash_cell,        M_AGING, LV_ERROR);
            CVMX_MP_POINT_CHECK_UNLOCK(table->set_timer, M_AGING, LV_ERROR);
            table->set_timer((void *)hash_cell->entry, TIMER_REPLACE, tm);
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * 函数名称    : lte_aging_process_check
 * 描述        : 老化处理检测，检测计数器值是否满足老化条件
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
mp_code_t lte_aging_process_check()
{
    /* 如果配置了老化时间为0， 则关闭老化功能 */
    if( 0 != g_max_relate_lifetime  &&  true == g_lte_start_flag )
    {
        /*遍历整个关联表*/
        lte_aging_search_s1u_table( LTE_GET_TABLE_PTR(TABLE_S1U) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_IMSI) );
        //lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_IMSI) );
        lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_SGW) );
        lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_MME) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_S1_ENODEB_MME) );
        lte_aging_search_table(LTE_GET_TABLE_PTR(TABLE_S6A));
    }
    return MP_OK;
}

/******************************************************************************
 * 函数名称    : npcp_update_cell_timer
 * 功能        : 用于轮询处理关联表项cell的计数器
 * 输入        : ilen-输入数据长度,idata-输入数据块
 * 输出        : olen-输出数据长度,odata-输出数据块
 * 返回        : 错误码，见错误码定义
******************************************************************************/
void *npcp_update_cell_timer(void *thread_data)
{
    int i = AGING_INIT_TIME;
    while(i--)
    {
        lte_aging_process_check();
    }
    return NULL;
}

#endif


