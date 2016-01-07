/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       db.c
�����ʽ:     ASCII
����:         chenbin
����:         Dec 15, 2015
��ʷ:
    1.����    :Dec 15, 2015
      ����    :cb
      �޸�    :Created file
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

/* ����ɢ�б��Ե������ִ����ز���  */
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

    /* ��ϣ�����ȡͰƫ��ֵ */
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

    /* ����˫�������Ƚ�cell��key�Ƿ�һ�� */
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
 * ��������    : hash_cell_get_by_index
 * ����        : ��������������ȡcellֵ
 * ����        : table:��ϣ��ṹ�壬���˱�ͷ��ַ������hti��ƫ��index��ȷ���к�
 *               hti  :��cell�Ľ��ָ�룬�Ƚ�ָ�� ��ȷ���к�
 *               dst_data :�ɵ����߷���ռ䣬����ѯ��ֵ���ȥ
 *                         Ŀ�ĵ�ַ����ռ����Ϊ128(imsi��Ϊ256),�������Խ��
 *               dst_len: Ŀ�ĵ�ַ�ռ䳤��
 * ����        : �����룬���ҳɹ�����MP_OK,ʧ�ܷ���MP_NOT_FOUND
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

    /*���ݻ�ַ��ƫ�ƣ�����Ͱ�ӵ�ַ*/
    LTE_DEBUG_PRINTF("hit->index = %d\n", hti->index);
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, hti->index);
    if(bucket == NULL)
    {
        LTE_DEBUG_PRINTF("Index argument out of range\n");
        return MP_NULL_POINT;
    }

    /* ����˫����������cell */
    LTE_HASH_TABLE_LOCK(bucket);
    node = hti->node;
    list_for_each_safe(pos, next, &(bucket->head))
    {
        if(pos == node){
            isfind = true;
            break;
        }
    }

    /* ��������������ߵ����ݣ����򷵻ش��� */
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

