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

    hash_key_t key={};
    uint64_t entry[ENTRY_CELL_DATA_SIZE] = {0};
    lte_table_imsi_t     imsi_cell = {};
    lte_table_ctrl_sgw_t sgw_cell  = {};
    lte_table_ctrl_mme_t mme_cell  = {};
    hash_table_index_t   imsi_pos  = {};

    LTE_DEBUG_PRINTF("Start to delete table according by imsi !\n");
    /* 调用哈希查询接口，查询imsi表 */
    memcpy(imsi_cell.imsi, imsi, sizeof(lte_table_imsi_t));
    update_imsi_hash_key(imsi, &(key));
    LTE_IMSI_TABLE_DELETE_LOCK;
    ret = hash_cell_get_by_hash( LTE_GET_TABLE_PTR(TABLE_IMSI),
                                 &(key), entry, sizeof(entry) );
    memcpy(&imsi_cell, entry, sizeof(lte_table_imsi_t));
    if(MP_CELL_FOUND != ret)
    {
        LTE_IMSI_TABLE_DELETE_UNLOCK;
        return MP_FAIL;
    }

    /* 调用索引查询接口，查询s11-sgw表，删除其下s1u表 */
    ret = hash_cell_get_by_index( LTE_GET_TABLE_PTR(TABLE_S11_SGW),
                                  &(imsi_cell.pos_sgw),entry, sizeof(entry));
    memcpy(&sgw_cell, entry, sizeof(lte_table_ctrl_sgw_t));
    if(MP_CELL_FOUND == ret)
    {
        lte_sgw_delete_s1u(&sgw_cell, 0);
    }

    /* 调用索引查询接口，查询s11-mme表，删除其下s1u表 */
    ret = hash_cell_get_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME),
                                  &(imsi_cell.pos_mme),entry, sizeof(entry));
    memcpy(&mme_cell, entry, sizeof(lte_table_ctrl_mme_t));
    if(MP_CELL_FOUND == ret)
    {
        lte_mme_delete_s1u(&mme_cell, 0);
    }

    /* 删除s11-sgw,s11-mme，删除其下s1u表 */
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_cell.pos_sgw));
    hash_table_remove_entry_by_index(LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_cell.pos_mme));

    /*采用哈希方式删除imsi总表*/
    hash_cell_delete_by_hash(LTE_GET_TABLE_PTR(TABLE_IMSI),&(key));
    LTE_IMSI_TABLE_DELETE_UNLOCK;
    LTE_DEBUG_PRINTF("Delete table according by imsi finish!!!!\n");
    return MP_OK;
}

#ifdef RELATE_AGING
/* 根据s1u更新imsi,sgw,mme表计数器 ,解锁了imsi表，不会产生死锁，同时cell被删也没事 */
mp_code_t lte_aging_relate_update_timer_by_imsi(lte_imsi_t imsi)
{
    mp_code_t ret = MP_OK;

    lte_table_imsi_t     *table_imsi_e= NULL;
    lte_table_ctrl_sgw_t *table_sgw_e = NULL;
    lte_table_ctrl_mme_t *table_mme_e = NULL;

    lte_table_imsi_t imsi_search_d = {};
    hash_table_control_t imsi_control = {};


    imsi_control.d_compare = (void *)&imsi_search_d;
    imsi_control.d_update  = (void *)&imsi_search_d;
    imsi_control.compare_enable = ENABLE;
    imsi_control.new_enable    =  DISABLE;
    imsi_control.update_enable =  DISABLE;

    memcpy(imsi_search_d.imsi, imsi, sizeof(lte_imsi_t));
    PRINTF_IMSI(imsi_search_d.imsi);
    LTE_DEBUG_PRINTF("Start to update aging according by imsi !\n");

    update_imsi_hash_key(imsi_search_d.imsi, &(imsi_control.key));

    ret = hash_table_search_update(LTE_GET_TABLE_PTR(TABLE_IMSI), &imsi_control);
    if(MP_OK != ret)
    {
       return ret;
    }

    if(HASH_CMP_DIFF  == imsi_control.search)
    {
       return MP_NOT_FOUND;
    }

    table_imsi_e = NODE2ENTRY(imsi_control.node, lte_table_imsi_t);
    table_imsi_e->aging = g_aging_timer_max;

    table_sgw_e = (lte_table_ctrl_sgw_t*)hash_table_index_to_entry
                   (LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(table_imsi_e->pos_sgw));
    if(NULL != table_sgw_e )
    {
       table_sgw_e->aging = g_aging_timer_max;
    }

    table_mme_e = (lte_table_ctrl_mme_t*)hash_table_index_to_entry
                   (LTE_GET_TABLE_PTR(TABLE_S11_MME), &(table_imsi_e->pos_mme));
    if(NULL != table_mme_e)
    {
       table_mme_e->aging = g_aging_timer_max;
    }
    LTE_DEBUG_PRINTF("Finish to update aging according by imsi !\n");
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
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        LTE_HASH_TABLE_LOCK(bucket); /*锁住s1u桶子，下面是遍历cell链表*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            lte_table_s1u_t *s1u_cell = (lte_table_s1u_t *)(hash_cell->entry);
            if(cvmx_unlikely(NULL == s1u_cell ))
            {
                return MP_NULL_POINT;
            }

            if ( true == s1u_cell->ex_field.updt_tim )
            {
                //通过imsi关联其他表项
                //更新关联表其他cell的计数器值
                lte_aging_relate_update_timer_by_imsi(s1u_cell->imsi);
                s1u_cell->ex_field.updt_tim = false;//必须要恢复更新计数器值的标志
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT )
            {
                /* 删除cell,这里要用统一接口，待优化 */
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                MP_MEMSET_P( hash_cell_t, hash_cell );
                HASH_CELL_FREE(table->pool, hash_cell);
                bucket->bucket_depth--;
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * 函数名称    : lte_aging_search_imsi_table
 * 功能        : 扫描imsi表,更新计数器，老化删除表
 * 参数        :
 * 返回        : 错误码，见错误码定义
******************************************************************************/
static mp_code_t lte_aging_search_imsi_table( hash_table_t *table )
{
    int i = 0;
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    lte_table_imsi_t  imsi_cell={};
//    lte_imsi_t imsi = {0x64,0x00,0x78,0x59,0x32,0x50,0x07,0xf6};

    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            memcpy(&imsi_cell, (hash_cell->entry), sizeof(lte_table_imsi_t));

            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//删除关联子表
            {
                lte_aging_clear_relate_by_imsi(imsi_cell.imsi);
            }
        }
    }
    LTE_DEBUG_PRINTF("End to  search imsi table!\n");
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
    uint8_t tim = 0;
    hash_bucket_t    *bucket    = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    LTE_DEBUG_PRINTF("LTE DEBUG LOG :" "Entry to [%s] search\n",table->name);
    if (cvmx_unlikely(NULL == table))
    {
        return MP_NULL_POINT;
    }

    for ( i = 0; i < table->max_bucket; i++ )
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }

        LTE_HASH_TABLE_LOCK(bucket); /*锁住桶子，下面是遍历cell链表*/
        list_for_each_safe( pos, next, &(bucket->head) )
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            tim = table->set_timer((void *)hash_cell->entry, TIMER_REDUCE, 1);
            if( tim <= LTE_AGING_TIMER_LOWER_LIMIT)//删除cell
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                MP_MEMSET_P( hash_cell_t, hash_cell );
                HASH_CELL_FREE(table->pool, hash_cell);
            }
        }

        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    return MP_OK;
}

/******************************************************************************
 * 函数名称    : lte_aging_get_relate_num
 * 功能        : 获取成功关联总数
 * 参数        : relate_total_num，输出的总数值
 * 返回        : 错误码，见错误码定义
******************************************************************************/
static mp_code_t lte_aging_get_relate_num(uint32_t *relate_total_num)
{
    int i, j;
    bool flag = false;
    uint32_t relate_num = 0;

    hash_table_t *imsi_table= LTE_GET_TABLE_PTR(TABLE_IMSI);
    hash_bucket_t *bucket = NULL;
    struct list_head *pos = NULL, *next = NULL;

    hash_cell_t*hash_cell   = NULL;
    lte_table_imsi_t     *imsi_entry  = NULL;
    lte_table_ctrl_sgw_t *table_sgw_e = NULL;
    lte_table_ctrl_mme_t *table_mme_e = NULL;
    lte_table_s1u_t      *table_s1u   = NULL;

    for(i=0; i<imsi_table->max_bucket; i++)
    {
        bucket = imsi_table->first_bucket+i;
        LTE_HASH_TABLE_LOCK(bucket);

        list_for_each_safe(pos, next, &(bucket->head))
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            if(cvmx_unlikely(NULL == hash_cell ))
            {
                return MP_NULL_POINT;
            }

            /*check compare  same or diff(new)*/
            imsi_entry = (lte_table_imsi_t *)hash_cell->entry;
            if(cvmx_unlikely(NULL == imsi_entry ))
            {
                return MP_NULL_POINT;
            }

            uint64_t imsi_d = *((uint64_t *)(&imsi_entry->imsi[0]));
            if(imsi_d == 0){
                continue;
            }

            table_sgw_e = (lte_table_ctrl_sgw_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_SGW), &(imsi_entry->pos_sgw));

            table_mme_e = (lte_table_ctrl_mme_t*)hash_table_index_to_entry
                    (LTE_GET_TABLE_PTR(TABLE_S11_MME), &(imsi_entry->pos_mme));

            if(NULL  == table_sgw_e || NULL  == table_mme_e)
            {
                 continue;
            }

            flag = false;
            for(j=0;j<MAX_PDN;j++)
            {
                table_s1u= (lte_table_s1u_t*)hash_table_index_to_entry
                            (LTE_GET_TABLE_PTR(TABLE_S1), &(table_mme_e->pos_s1u[j]));
                if(NULL != table_s1u  )
                {
                    flag = true;
                    break;
                }
            }
            if(false == flag)
            {
                continue;
            }
            flag = false;
            for(j=0;j<MAX_PDN;j++)
            {
                table_s1u = (lte_table_s1u_t*)hash_table_index_to_entry
                        (LTE_GET_TABLE_PTR(TABLE_S1), &(table_sgw_e->pos_s1u[j]));
                if(NULL != table_s1u  )
                {
                    flag = true;
                    break;
                }
            }

            if(false == flag)
            {
                continue;
            }
            relate_num++;

        }
        LTE_HASH_TABLE_UNLOCK(bucket);
    }
    *relate_total_num = relate_num;

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
    LTE_DEBUG_PRINTF("LTE DEBUG LOG :" "Entry to aging process!\n");

    /*遍历整个关联表*/
    lte_aging_search_s1u_table( LTE_GET_TABLE_PTR(TABLE_S1) );
    lte_aging_search_imsi_table(LTE_GET_TABLE_PTR(TABLE_IMSI) );
    //lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_IMSI) );
    lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_SGW) );
    lte_aging_search_table( LTE_GET_TABLE_PTR(TABLE_S11_MME) );

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


