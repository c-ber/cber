#include "lte_hash.h"
#include "lte_relate.h"

extern CVMX_SHARED uint64_t g_aging_timer_max;

mp_code_t hash_table_flush(hash_table_t *table)
{
    int i =0;
    hash_bucket_t *bucket = NULL; 
    hash_cell_t *hash_cell = NULL;    
    struct list_head *pos = NULL, *next = NULL;

    if (cvmx_unlikely(NULL == table))
    {
        return MP_FUN_PARAM_ERR;
    }

    LTE_DEBUG_PRINTF("Flush Table:%s\n", table->name);
    for(i=0; i<table->max_bucket; i++)
    {
        bucket = table->first_bucket + i;
        if(cvmx_unlikely(NULL == bucket ))
        {
            return MP_NULL_POINT;
        }
        
        LTE_HASH_TABLE_LOCK(bucket);
        
        list_for_each_safe(pos, next, &(bucket->head))
        {
            hash_cell = list_entry(pos, hash_cell_t, node);
            __list_del( hash_cell->node.prev, hash_cell->node.next);
            memset(hash_cell, 0x0, sizeof(hash_cell_t));
            HASH_CELL_FREE(table->pool, hash_cell);            
        }

        bucket->bucket_depth = 0;
        LTE_HASH_TABLE_UNLOCK(bucket);     
    }
    return MP_OK;
}


mp_code_t hash_table_cell_delete(hash_table_t *table, uint32_t offset, struct list_head * cnode)
{
    hash_bucket_t *bucket = NULL;
    struct list_head * pos = NULL, *next = NULL;
    hash_cell_t *hash_cell = NULL;
    
    if (cvmx_unlikely( NULL == table || NULL == cnode ))
    {
        return MP_FUN_PARAM_ERR;
    }
    if(cvmx_unlikely( offset >= table->max_bucket ))
    {
        return MP_FUN_PARAM_ERR;
    }
    
    bucket = table->first_bucket + offset;
        
    
    LTE_HASH_TABLE_LOCK(bucket); 
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == cnode)
        {
            __list_del( cnode->prev, cnode->next);
            hash_cell = list_entry(cnode, hash_cell_t, node);
            memset(hash_cell, 0x0, sizeof(hash_cell_t));
            HASH_CELL_FREE( table->pool, hash_cell);
            bucket->bucket_depth--;
            break;        
        }
    }                     
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_OK;
}


mp_code_t hash_table_search_destroy(hash_table_t *table,
                                        hash_table_control_t *control)
{
    mp_code_t rv = MP_OK;

    uint32_t hash_v = 0, index = 0;
    hash_bucket_t *bucket = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    if (cvmx_unlikely(NULL == table || NULL == control))
    {
        return MP_FUN_PARAM_ERR;
    }

    rv = table->hash(&(control->key), &hash_v);
    if(MP_OK != rv)
    {
        return rv;
    }
    
    index  = hash_v % table->max_bucket;
    bucket = table->first_bucket + index;

    if(cvmx_unlikely(NULL == bucket ))
    {
        return MP_NULL_POINT;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {    
        hash_cell = list_entry(pos, hash_cell_t, node);
        /*check compare  same or diff(new)*/
        if (cvmx_likely(ENABLE == control->compare_enable ))
        {
            if(NULL == table->compare || NULL == control->d_compare)
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                return MP_NULL_POINT;
            }

            rv = table->compare((void *)hash_cell->entry, control->d_compare, &(control->search));
            if (cvmx_unlikely(MP_OK != rv))
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                return MP_NOT_FOUND;
            }

            if(HASH_CMP_SAME == control->search)
            {
                __list_del( hash_cell->node.prev, hash_cell->node.next);
                memset(hash_cell, 0x0, sizeof(hash_cell_t));
                HASH_CELL_FREE(table->pool, hash_cell);
                bucket->bucket_depth--;
                break;
            }
        }
        else
        {
            LTE_DEBUG_PRINTF("Error: Cannot Find The Table Cell, May caused by compare_enable != ENABLE\n");
            return MP_NOT_FOUND;
                
        }
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    return rv;
}


mp_code_t hash_table_search_update(hash_table_t *table, 
                            hash_table_control_t *control)
{
    mp_code_t rv = MP_OK;

    uint32_t hash_v = 0, index = 0;
    hash_bucket_t *bucket = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;
    
    if (cvmx_unlikely(NULL == table || NULL == control))
    {
        return MP_FUN_PARAM_ERR;
    }
    LTE_DEBUG_PRINTF("---------------------start:%s----------------\n", table->name);

    if( NULL == table->hash)
    {
        LTE_DEBUG_PRINTF("%s:table hash func is NULL!\n", table->name);
        return MP_FUN_PARAM_ERR;
    }

    rv = table->hash(&(control->key), &hash_v);
    if(MP_OK != rv)
    {
        return rv;
    }

    index  = hash_v % table->max_bucket;
    LTE_DEBUG_PRINTF("%s: offset=%d, Key=0x%lx \n", table->name, index, control->key.data[0]);
    bucket = table->first_bucket + index;

    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    
    list_for_each_safe(pos, next, &(bucket->head))
    {    
        hash_cell = list_entry(pos, hash_cell_t, node);
        /*check compare  same or diff(new)*/
        if (cvmx_likely(ENABLE == control->compare_enable ))
        {
            LTE_DEBUG_PRINTF("%s: compare Enable\n", table->name);
            if(NULL == table->compare || NULL == control->d_compare)
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                LTE_DEBUG_PRINTF("%s: table->compare==NULL || control->d_compare == NULL\n", table->name);
                return MP_NULL_POINT;
            }

            rv = table->compare((void *)hash_cell->entry, control->d_compare, &(control->search));
            if ( cvmx_unlikely( MP_OK != rv ) )
            {
                LTE_HASH_TABLE_UNLOCK(bucket); 
                LTE_DEBUG_PRINTF("%s: compare failed\n", table->name);
                return MP_FAIL;
            }
            if(HASH_CMP_SAME == control->search)
            {
                LTE_DEBUG_PRINTF("%s: compare: <FIND>\n", table->name);
                control->node =  pos;
                control->bucket = bucket;
                break;
            }
        }
        else
        {
            LTE_DEBUG_PRINTF("%s: compare Disable\n", table->name);
        }
    }

    if( HASH_CMP_DIFF == control->search)
    {
        if(ENABLE == control->new_enable)
        {
            /*new The cell*/
            hash_cell = (hash_cell_t *)HASH_CELL_NEW(table->pool);
            if( NULL  == hash_cell)
            {
                LTE_HASH_TABLE_UNLOCK(bucket);
                LTE_DEBUG_PRINTF("FPA Memory not available for CVMX_FPA_LTE_POOL %s.%d\n", __func__, __LINE__);
                return MP_NULL_POINT;
            }
            control->node =   &(hash_cell->node);
            control->bucket = bucket; 
            list_add( &(hash_cell->node),&bucket->head);
            bucket->bucket_depth++;
            LTE_DEBUG_PRINTF("%s: compare: <New>\n", table->name);
        }
        else
        {
            LTE_DEBUG_PRINTF("%s: compare: <IGNORE>\n", table->name);
        }
    }

    if(ENABLE == control->update_enable && NULL != hash_cell)
    {
        //chengshuan add for action callback
        if( NULL != control->action )
        {
            rv = control->action((void *)hash_cell->entry, control->d_update);
            if (cvmx_unlikely( MP_OK != rv))
            {
                LTE_HASH_TABLE_UNLOCK(bucket);
                LTE_DEBUG_PRINTF("%s: update: Failed\n", table->name);
                return rv;
            }
            LTE_DEBUG_PRINTF("%s: control->action: Success\n", table->name);
        }
        else
        {
            if(NULL == control->d_update  || NULL == table->update)
            {
                    LTE_HASH_TABLE_UNLOCK(bucket); 
                    LTE_DEBUG_PRINTF("%s: update: NULL == control->d_update  || NULL == table->update\n", table->name);
                    return MP_NULL_POINT;
            }
            rv = table->update((void *)hash_cell->entry, control->d_update);
            if (cvmx_unlikely( MP_OK != rv))
            {
                LTE_HASH_TABLE_UNLOCK(bucket);
                LTE_DEBUG_PRINTF("%s: update: Failed\n", table->name);
                return rv;
            }
            LTE_DEBUG_PRINTF("%s: update: Success\n", table->name);      
        }
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    LTE_DEBUG_PRINTF("==========================END==========================\n\n");    
    return rv;
}


mp_code_t hash_table_get_bucket_depth_by_index(hash_table_t *table,
                                               uint32_t      index,
                                               uint32_t     *depth)
{
    hash_bucket_t * bucket = NULL;
    
    if (cvmx_unlikely(NULL == table))
    {
        return MP_FUN_PARAM_ERR;
    }

    if(index > table->max_bucket)
    {
        return MP_FUN_PARAM_ERR;
    }
    
     
    bucket = table->first_bucket + index;

    if(cvmx_unlikely(NULL == bucket ))
    {
        return MP_FUN_PARAM_ERR;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    *depth = bucket->bucket_depth;
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_OK;
}

/* 用于给命令行提供的根据行列索引查表 */
hash_cell_t *hash_table_search_by_index_and_offset(hash_table_t *table,
                                        uint32_t index, uint32_t  column) 
{
    hash_bucket_t * bucket = NULL;
    struct list_head *pos = NULL, *next = NULL;
    hash_cell_t * cell= NULL;
    int i= 0;

   
    if (cvmx_unlikely(NULL == table))
    {
        return NULL;
    }

    LTE_DEBUG_PRINTF("table=%s, index=%d, clomu=%d\n",table->name, index,  column);
    if(index > table->max_bucket)
    {
        return NULL;
    }
  
    bucket = table->first_bucket + index;

    if(cvmx_unlikely(NULL == bucket ))
    {
        return NULL;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {

        if(i ==  column)
        {
           cell =  list_entry(pos, hash_cell_t, node); 
           LTE_HASH_TABLE_UNLOCK(bucket);
           return cell;
            
        }
        i++;
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return cell;               
}




     
void *hash_table_index_to_entry(hash_table_t *table, hash_table_index_t *index)
{
   hash_bucket_t *bucket = NULL;
   struct list_head *pos = NULL, *next = NULL, *node = NULL; 
   int compare =0 ; 
   hash_cell_t *hash_cell = NULL;


    if(cvmx_likely(NULL == table || NULL == index)) 
    {
        return NULL ;    
    }

    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index); 
    node  =   index->node;

    
    if(bucket == NULL)                                                    
    {
        return NULL;
    }

    LTE_HASH_TABLE_LOCK(bucket);

    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            compare = 1;
            break;
        }
    }

    
    if(compare)
    {
        hash_cell = list_entry(pos, hash_cell_t, node);   
    }
    else
    {
         LTE_HASH_TABLE_UNLOCK(bucket);
         return NULL;
    }
    
    LTE_HASH_TABLE_UNLOCK(bucket);
    
    return  (hash_cell->entry);   
}


mp_code_t hash_table_remove_entry_by_index(hash_table_t *table, hash_table_index_t *index)
{
    hash_bucket_t *bucket = NULL;
    struct list_head *pos = NULL, *next = NULL, *node = NULL; 
    hash_cell_t *hash_cell = NULL;

    if(cvmx_likely(NULL == table || NULL == index)) 
    {
        return MP_FUN_PARAM_ERR;
    }

    if(ENABLE != index->en)
    {
        return MP_FUN_PARAM_ERR;
    }
    
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index); 
    node  =   index->node;
    if(bucket == NULL)
    {
        return MP_NULL_POINT;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            __list_del( node->prev, node->next);
            hash_cell = list_entry(node, hash_cell_t, node);
            memset(hash_cell, 0x0, sizeof(hash_cell_t));
            HASH_CELL_FREE( table->pool, hash_cell);
            bucket->bucket_depth--;    
            
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }

     LTE_HASH_TABLE_UNLOCK(bucket);
     return MP_NOT_FOUND;
}

/******************************************************************************
 * 函数名称    : hash_cell_update_timer_by_index
 * 功能        : 根据索引来更新表项的计数器内容
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定行号
 *               hti  :含cell的结点指针，比较指针 即确定列号
 *               tm: 要设置的计数器值
 * 返回        : 返回码，更新成功返回MP_OK,失败返回其他错误码
******************************************************************************/
mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm)
{
    mp_code_t ret = MP_OK;
   hash_bucket_t *bucket = NULL;
   struct list_head *pos = NULL, *next = NULL, *node = NULL;
   int compare =0 ;
   hash_cell_t *hash_cell = NULL;


    if(cvmx_likely(NULL == table || NULL == index))
    {
        return MP_FUN_PARAM_ERR;
    }

    bucket =  GET_HASH_BUCKET_BY_INDEX(table, index->index);
    node  =   index->node;
    if(bucket == NULL)
    {
        return MP_NULL_POINT;
    }

    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node)
        {
            compare = 1;
            break;
        }
    }

    if(compare)
    {
        hash_cell = list_entry(pos, hash_cell_t, node);
    }
    else
    {
         LTE_HASH_TABLE_UNLOCK(bucket);
         return MP_NOT_FOUND;
    }
    table->set_timer((void *)hash_cell->entry, TIMER_REPLACE, tm);

    LTE_HASH_TABLE_UNLOCK(bucket);

    return ret;
}

/******************************************************************************
 * 函数名称    : hash_cell_get_by_index
 * 功能        : 根据行列索引读取cell值
 * 参数        : table:哈希表结构体，带了表头基址，带上hti中偏移index即确定行号
 *               hti  :含cell的结点指针，比较指针 即确定列号
 *               dst_data :由调用者分配空间，将查询的值填进去
 *                         目的地址分配空间必须为128(imsi表为256),否则产生越界
 *               dst_len: 目的地址空间长度
 * 返回        : 错误码，查找成功返回MP_OK,失败返回MP_NOT_FOUND
******************************************************************************/
mp_code_t hash_cell_get_by_index( hash_table_t        *table,
                                  hash_table_index_t  *hti,
                                  void    *dst_data,
                                  uint32_t dst_len )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    struct list_head *node = NULL;
    hash_bucket_t *bucket   = NULL;
    hash_cell_t   *src_cell = NULL;
    bool isfind = false;

    if(cvmx_likely(NULL == table || NULL == hti || NULL == dst_data))
    {
        LTE_DEBUG_PRINTF("Null pointer exception\n");
        return MP_FUN_PARAM_ERR ;
    }

    /*根据基址和偏移，计算桶子地址*/
    LTE_DEBUG_PRINTF("hit->index = %d\n", hti->index);
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, hti->index);
    if(bucket == NULL)
    {
        LTE_DEBUG_PRINTF("Index argument out of range\n");
        return MP_NULL_POINT;
    }

    /* 遍历双向链表，查找cell */
    LTE_HASH_TABLE_LOCK(bucket);
    node = hti->node;
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node){
            isfind = true;
            break;
        }
    }

    /* 将结果填充给调用者的数据，否则返回错误 */
    if(isfind)
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);
        memcpy( dst_data, src_cell->entry, MP_MIN(dst_len, table->cell_size));
        ret = MP_CELL_FOUND;
    }
    else
    {
         ret = MP_NOT_FOUND;
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;
}

/******************************************************************************
 * 函数名称    : hash_cell_get_by_hash
 * 功能        : 根据哈希获取cell值
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 *               dst_data :由调用者分配空间，将查询的值填进去
 * 说明        : key限定为表项结构中第一个字段
 * 返回        : 错误码，查找成功返回MP_OK,失败返回MP_NOT_FOUND
******************************************************************************/
mp_code_t hash_cell_get_by_hash( hash_table_t *table,
                                 hash_key_t   *key,
                                 void    *dst_data,
                                 uint32_t dst_len )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    if (cvmx_unlikely(NULL == table || NULL == key || NULL == dst_data))
    {
        return MP_FUN_PARAM_ERR;
    }

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */

    if(NULL == table->hash)
    {
        return MP_FUN_PARAM_ERR;
    }
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);

        if(NULL == table->compare)
        {
            ret = MP_NULL_POINT;
            break;
        }
        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            ret = MP_CELL_FOUND;
            memcpy( dst_data, src_cell->entry, MP_MIN(dst_len, table->cell_size));
            break;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;

}
/******************************************************************************
 * 函数名称    : hash_cell_delete_by_hash
 * 功能        : 根据哈希删除cell值
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 * 说明        : key限定为表项结构中第一个字段
 * 返回        : 错误码，删除成功返回MP_OK,失败返回MP_FAIL
******************************************************************************/
mp_code_t hash_cell_delete_by_hash( hash_table_t *table,
                                    hash_key_t   *key )
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    if (cvmx_unlikely(NULL == table || NULL == key ))
    {
        return MP_FUN_PARAM_ERR;
    }

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return MP_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */

    if(NULL == table->hash)
    {
        return MP_FUN_PARAM_ERR;
    }
    MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);

        if(NULL == table->compare)
        {
            ret = MP_NULL_POINT;
            break;
        }
        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != MP_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            __list_del( pos->prev, pos->next);
            memset(src_cell, 0x0, sizeof(hash_cell_t));
            HASH_CELL_FREE( table->pool, src_cell);
            bucket->bucket_depth--;
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_FAIL;
}


/******************************************************************************
 * 函数名称    : hash_table_get_s1u_info
 * 功能        : gtpu报文进入后从s1u表获取关联信息
 * 参数        : gtpu: gtpu字段的结构体
 * 说明        : gtpu自带key，查到后需要将关联字段填充进去
 * 返回        : 错误码，关联成功返回MP_OK,其他错误见错误码说明
******************************************************************************/
inline mp_code_t hash_table_get_s1u_info(parse_gtpu_t *gtpu)
{
    mp_code_t ret = MP_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_table_t    *table      = LTE_GET_TABLE_PTR(TABLE_S1);
    hash_bucket_t   *bucket     = NULL;
    hash_cell_t     *src_cell   = NULL;       /* 链表返回的cell节点，需要转为s1u cell*/
    hash_cmp_em_t   cmp_rlt     = HASH_CMP_DIFF;
    uint32_t        hash_result = 0;
    lte_table_s1u_t s1u_cell    = {};         /* 用于cell间哈希比较的临时值 */
    lte_table_s1u_t *s1u_src_cell = NULL;     /* 指向查询到的cell */
    hash_key_t  key = {};

    if (cvmx_unlikely( NULL == gtpu ))
    {
        return MP_FUN_PARAM_ERR;
    }

    s1u_cell.fteid.ip   =  gtpu->ot_dstip ;
    s1u_cell.fteid.teid =  gtpu->teid;

    /* 哈希运算获取桶偏移值 */
    update_fteid_hash_key( gtpu->ot_dstip, gtpu->teid, &key );
    MP_ERR_PRT(table->hash( &key, &hash_result ));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(cvmx_unlikely(NULL == bucket ))
    {
        LTE_DEBUG_PRINTF("%s: bucket=NULL\n", table->name);
        return MP_NULL_POINT;
    }

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    LTE_HASH_TABLE_LOCK(bucket);
    list_for_each_safe(pos, next, &(bucket->head))
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        MP_POINT_CHECK(src_cell);

        if(NULL == table->compare)
        {
            ret = MP_NULL_POINT;
            break;
        }
        ret = table->compare((void *)src_cell->entry, (void*)&s1u_cell, &cmp_rlt);
        if (ret != MP_OK)
        {
            ret = MP_NOT_FOUND;
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            s1u_src_cell = (lte_table_s1u_t *)(src_cell->entry);
            /* 给报文打上关联信息，imsi, imei, msisdn */
            memcpy(gtpu->imsi , s1u_src_cell->imsi, sizeof(lte_imsi_t));
            gtpu->imsi_en = ENABLE;

            memcpy(gtpu->imei , s1u_src_cell->imei, sizeof(lte_imei_t));
            gtpu->imei_en = ENABLE;

            memcpy(gtpu->msisdn, s1u_src_cell->msisdn, sizeof(lte_msisdn_t));
            gtpu->msisdn_en= ENABLE;

            memcpy(gtpu->guti, s1u_src_cell->guti, sizeof(lte_guti_t));
            gtpu->guti_en= ENABLE;

            memcpy(gtpu->tai,  s1u_src_cell->tai,  sizeof(lte_tai_t));
            gtpu->tai_en= ENABLE;

            gtpu->msisdn_len = s1u_src_cell->ex_field.msisdn_len;

#ifdef RELATE_AGING
           /* 对于关联上的gtp-u报文,需要更新关联表项计数器值 */
            s1u_src_cell->aging = g_aging_timer_max;
            s1u_src_cell->ex_field.updt_tim = true;
#endif
            break;
        }
    }
    LTE_HASH_TABLE_UNLOCK(bucket);
    return ret;
}

