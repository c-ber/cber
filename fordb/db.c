/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       db.c
编码格式:     ASCII
作者:         chenbin
创建:         Dec 15, 2015
历史:
    1.日期    :Dec 15, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/

#include "db.h"




inline mp_code_t hash_cell_new(hash_table_t *table,
                               hash_bucket_t *bucket,
                               void * cell)
{
    mp_code_t ret = MP_OK;
    hash_cell_t *hash_cell = NULL;
    /*new The cell*/
    hash_cell = (hash_cell_t *)HASH_CELL_NEW(table->pool);
    if( NULL  == hash_cell)
    {
        LTE_DEBUG_PRINTF("FPA Memory not available for CVMX_FPA_LTE_POOL %s.%d\n", __func__, __LINE__);
        return MP_NULL_POINT;
    }
    list_add( &(hash_cell->node),&bucket->head);
    bucket->bucket_depth++;

    memcpy(hash_cell->entry, cell, table->cell_size);
    return ret;
}


mp_code_t db_delete_common(void *src, void *dst, item_mask_t mask)
{

}

/* 遍历散列表，对单个结点执行相关操作  */
mp_code_t hash_cell_traverse( hash_table_t *table,
                              hash_key_t   *key,
                              void * cell)
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

    /* 遍历双向链表，比较cell中key是否一致 */
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
            table->update(src_cell->entry, cell);
            LTE_HASH_TABLE_UNLOCK(bucket);
            return MP_OK;
        }
    }

    LTE_HASH_TABLE_UNLOCK(bucket);
    return MP_FAIL;
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

