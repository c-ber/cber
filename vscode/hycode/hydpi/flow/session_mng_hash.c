
#include "session_mng_hash.h"

hash_bucket_t       *session_tables = NULL;
hash_table_t        DPI_tables_info[TABLE_MAX] = {};

hash_table_t        *g_dpi_table_info = NULL;
pthread_mutex_t     *g_p_ses_bucket_lock = NULL;

uint8_t             flow_process_thread_id=0;   /*一条流报文处理的进程ID号*/
pthread_mutex_t     g_get_thread_id_lock;       /*进程ID号的互斥锁*/

#if 1/*留着在非mips架构下的平台调试*/
unsigned int RSHash(void * str, unsigned int len)
{
    unsigned int b    = 378551;
    unsigned int a    = 63689;    
    unsigned int hash = 0;    
    unsigned int i    = 0;    
    char * data = (char *)str;    
    for(i = 0; i < len; data++, i++)    
    {        
        hash = hash * a + (*data);       
        a = a * b;    
    }    
    return hash;
}

unsigned int semp_hash_u64_data(uint64_t *data,uint32_t n,uint32_t mask)
{   
    mask = mask;
    n=n;
    return RSHash((char *)data, 8);
}
#else

unsigned int semp_hash_u64_data(uint64_t *data,uint32_t n,uint32_t mask)
{
    unsigned int index = 0;
    uint32_t count = 0;
    uint64_t *data64 = (uint64_t *)data;
    CVMX_MT_CRC_POLYNOMIAL(0x1edc6f41);
    CVMX_MT_CRC_IV(0);
    for(count = 0;count<n;count++)
    {
        CVMX_MT_CRC_DWORD(data64[count]);
    }
    CVMX_MF_CRC_IV(index);
    return (index &mask);
    
}
#endif
/******************************************************************************
 * 函数名称    : update_session_hash_key
 * 功能        : 填充session table的hash key
 * 参数        : ip_5tuple、key
 * 返回        : 返回值为DPI_NULL_POINT或DPI_OK
 ******************************************************************************/
dpi_code_t update_session_hash_key(dpi_5tuple_t ip_5tuple,  hash_key_t *key)
{
    if(NULL == key)
    {
        printf("[update_session_hash_key]: key is null point exception\n");
        return DPI_NULL_POINT;
    }
    
    key->size = 5;
    memcpy((uint8_t*)key,(uint8_t*)(&ip_5tuple),sizeof(dpi_5tuple_t));
    return DPI_OK;
}

/******************************************************************************
 * 函数名称    : session_table_compare
 * 功能        : 比较session table的哈希值
 * 参数        : dst、src、cmp
 * 返回        : 返回值为DPI_NULL_POINT或DPI_OK
 ******************************************************************************/
dpi_code_t  session_table_compare(void *src, void* dst, hash_cmp_em_t *cmp)
{
    int rv= 0;
    
    if(NULL == src)
    {
        printf("[session_table_compare]: src is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == dst)
    {
        printf("[session_table_compare]: dst is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == cmp)
    {
        printf("[session_table_compare]: cmp is null point exception\n");
        return DPI_NULL_POINT;
    }

    dpi_table_session_mng_t * sentry = (dpi_table_session_mng_t *)src;
    dpi_table_session_mng_t * dentry = (dpi_table_session_mng_t *)dst;
     

    rv = memcmp(&(sentry->ip_5tuple),&(dentry->ip_5tuple), sizeof(dpi_5tuple_t));

    if(0 == rv)
    {
        *cmp = HASH_CMP_SAME;
    }
    else
    {
        *cmp = HASH_CMP_DIFF;
    }
    
    return DPI_OK;
}

/**********************************************************************************************
  函数名称      : session_table_hash
  描述          : session table 表项的hash 函数
  调用          :
  被调用        : dataplane_session_mng_init
                  hash_table_search_update
  被访问的表    :
  被修改的表    :
  输入          : hash_key_t *key,hash 的key值 uint32_t *hash_result hash的结果
  输出          : 无
  返回          : 返回值为DPI_NULL_POINT或DPI_OK
  其他          :
**********************************************************************************************/
dpi_code_t session_table_hash(hash_key_t *key, uint32_t *hash_result)
{
    if(NULL == key)
    {
        printf("[session_table_hash]: key is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == hash_result)
    {
        printf("[session_table_hash]: hash_result is null point exception\n");
        return DPI_NULL_POINT;
    }

    uint32_t index = 0;
    
    index = semp_hash_u64_data(key->data, key->size, 0xFFFFFFFF);
    *hash_result = index;
    return DPI_OK;
}

/******************************************************************************
 * 函数名称    : update_session_table
 * 功能        : 更新session table的cell值
 * 参数        : dst、src、action
 * 返回        : 返回值为DPI_NULL_POINT或DPI_OK
 ******************************************************************************/
dpi_code_t update_session_table(void *dst, void *src, uint64_t action)
{    
    if((NULL == dst) || (NULL == src))
    {
        printf("[update_session_table]: dst&src is null point exception\n");
        return DPI_NULL_POINT;
    }

    dpi_table_session_mng_t *src_cell = (dpi_table_session_mng_t*)src;
    dpi_table_session_mng_t *dst_cell = (dpi_table_session_mng_t*)dst;

    if( SESSION_T_UPDATE_5TUPLE & action )
    {
        //LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        memcpy(&(dst_cell->ip_5tuple), &(src_cell->ip_5tuple), sizeof(dpi_5tuple_t));
        dst_cell->mask |= SESSION_T_5TUPLE_VALID;
    }

    if( SESSION_T_UPDATE_COUNT & action )
    {
        //LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        dst_cell->count = src_cell->count;
        dst_cell->mask |= SESSION_T_COUNT_VALID;
    }

    if( SESSION_T_UPDATE_APP_ID & action )
    {
        //LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        dst_cell->app_id = src_cell->app_id;
        dst_cell->mask |= SESSION_T_APP_ID_VALID;
    }

    if( SESSION_T_UPDATE_THREAD_ID & action )
    {
        //LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        dst_cell->thread_id = src_cell->thread_id;
        dst_cell->mask |= SESSION_T_THREAD_ID_VALID;
    }

    if( SESSION_T_UPDATE_AGING & action )
    {
        //LTE_DEBUG_PRINTF("update_s1u_fteid !\n");
        dst_cell->aging = src_cell->aging;
        dst_cell->mask |= SESSION_T_AGING_VALID;
    }

    if (SESSION_T_UPDATE_MASK & action)
    {
        //LTE_DEBUG_PRINTF("update_s1u_mask !\n");
        dst_cell->mask = src_cell->mask;
    }
    
    return DPI_OK;
}

/******************************************************************************
 * 函数名称    : dataplane_session_mng_init
 * 功能        : 系统启动时，DPI建立哈希表所用的内存初始化
 * 参数        : 无
 * 返回        : 无
 ******************************************************************************/
dpi_code_t dataplane_session_mng_init(void)
{
    int i = 0;
    hash_bucket_t *bucket = NULL; /*hash table ptr*/

    session_tables = (hash_bucket_t*)malloc((sizeof(hash_bucket_t))*SESSION_TABLE_SIZE);

    if(NULL == session_tables)
    {
        printf("Session tables memery alloc failed\n");
        return DPI_TABLE_FULL;
    }

    g_p_ses_bucket_lock = (pthread_mutex_t*)malloc((sizeof(pthread_mutex_t))*SESSION_TABLE_SIZE);
    if(NULL == g_p_ses_bucket_lock)
    {
        printf("Session bucket lock memery alloc failed\n");
        return DPI_TABLE_FULL;
    }

    g_dpi_table_info = &DPI_tables_info[0];

    memset(session_tables, 0x00, sizeof(hash_bucket_t)*SESSION_TABLE_SIZE);

    for(i=0; i<SESSION_TABLE_SIZE; i++)
    {
        bucket = session_tables + i;
        if(0 != pthread_mutex_init((g_p_ses_bucket_lock+i),NULL))
        {
            printf("Init the send socket lock failed\n ");
            return DPI_FAIL;
        }

        bucket->lock = *(g_p_ses_bucket_lock+i);
        bucket->index = i;
        INIT_LIST_HEAD(&bucket->head);
    }

    DPI_tables_info[TABLE_SESSION].first_bucket = session_tables + 0;
    DPI_tables_info[TABLE_SESSION].max_bucket   = SESSION_TABLE_SIZE;
    DPI_tables_info[TABLE_SESSION].compare      = session_table_compare;
    DPI_tables_info[TABLE_SESSION].hash         = session_table_hash;
    DPI_tables_info[TABLE_SESSION].update       = update_session_table;
    DPI_tables_info[TABLE_SESSION].cell_size    = HASH_ENTRY_VALID_SIZE_128;
    strcpy(DPI_tables_info[TABLE_SESSION].name, "TABLE_SESSION");

    DPI_tables_info[TABLE_SESSION].set_timer    = session_mng_cell_set_timer;

    if(0 != pthread_mutex_init((&g_get_thread_id_lock),NULL))
    {
        printf("Init the get thread id lock failed\n ");
        return DPI_FAIL;
    }
    

    return DPI_OK;
}




/******************************************************************************
 * 函数名称    : encrypt_hash_index
 * 功能        : 加密index里面的node值，防止意外使用该表项地址
 * 参数        : 表项原地址
 * 返回        : 经过加密后的表项地址，使用该地址会引起core dump
 ******************************************************************************/
static struct list_head * encrypt_hash_index(struct list_head * src)
{
    return ((struct list_head *)src);
}

/******************************************************************************
 * 函数名称    : decrypt_hash_index
 * 功能        : 解密index里面的node值，还原正确的表项地址
 * 参数        : 经过加密后的表项地址，使用该地址会引起core dump
 * 返回        : 表项原地址
 ******************************************************************************/
static struct list_head * decrypt_hash_index(struct list_head * src)
{
    return ((struct list_head *)src);
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
dpi_code_t hash_cell_get_by_index( hash_table_t        *table,
        hash_table_index_t  *hti,
        void    *dst_data,
        uint32_t dst_len )
{
    dpi_code_t ret = DPI_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;
    struct list_head *cnode = NULL;
    hash_bucket_t *bucket   = NULL;
    hash_cell_t   *src_cell = NULL;
    bool isfind = false;

    if(NULL == table)
    {
        printf("[hash_cell_get_by_index]: dst&table is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == hti)
    {
        printf("[hash_cell_get_by_index]: hti is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == dst_data)
    {
        printf("[hash_cell_get_by_index]: dst_data is null point exception\n");
        return DPI_NULL_POINT;
    }

    /*根据基址和偏移，计算桶子地址*/
    //LTE_DEBUG_PRINTF("hit->index = %d\n", hti->index);
    bucket =  GET_HASH_BUCKET_BY_INDEX(table, hti->index);
    if(NULL == bucket)
    {
        printf("[hash_cell_get_by_index]: bucket is null point exception\n");
        return DPI_NULL_POINT;
    }

    /* 遍历双向链表，查找cell */
    cnode = hti->node;

    DPI_HASH_TABLE_LOCK(bucket);
    pos = (&(bucket->head))->next;
    if(NULL == pos)
    {
        printf("[hash_cell_get_by_index]: pos is pos point exception 11111\n");
        return DPI_NULL_POINT;
    }

    for (next = pos->next; pos != (&(bucket->head)); next = pos->next)
    {
        if(pos == decrypt_hash_index(cnode)){
            isfind = true;
            break;
        }
        pos = next;
        if(NULL == pos)
        {
            printf("[hash_cell_get_by_index]: pos is null point exception 222222\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }
    }

    /* 将结果填充给调用者的数据，否则返回错误 */
    if(isfind)
    {
        src_cell = list_entry(pos, hash_cell_t, node);
        if(NULL == src_cell)
        {
            printf("[hash_cell_get_by_index]: src_cell is null point exception\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }
        memcpy( dst_data, src_cell->entry, DPI_MIN(dst_len, table->cell_size));
        ret = DPI_CELL_FOUND;
    }
    else
    {
        ret = DPI_NOT_FOUND;
    }
    DPI_HASH_TABLE_UNLOCK(bucket);
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
 * 返回        : 错误码，查找成功返回 MP_CELL_FOUND
 ******************************************************************************/
dpi_code_t hash_cell_get_by_hash( hash_table_t *table,
        hash_key_t   *key,
        void         *dst_data,
        uint32_t      dst_len )
{
    dpi_code_t ret = DPI_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    if(NULL == table)
    {
        printf("[hash_cell_get_by_hash]: table is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == key)
    {
        printf("[hash_cell_get_by_hash]: key is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == dst_data)
    {
        printf("[hash_cell_get_by_hash]: dst_data is null point exception\n");
        return DPI_NULL_POINT;
    }

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        //LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return DPI_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    if(NULL == table->hash)
    {
        printf("[hash_cell_get_by_hash]: table->hash is null point exception\n");
        return DPI_NULL_POINT;
    }

    ret = table->hash(key, &hash_result);
    if(DPI_OK != ret)
    {
        return ret;
    }
    //MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(NULL == bucket)
    {
        printf("[hash_cell_get_by_hash]: bucket is null point exception\n");
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    DPI_HASH_TABLE_LOCK(bucket);
    pos = (&(bucket->head))->next;
    if(NULL == pos)
    {
        printf("[hash_cell_get_by_hash]: pos is null point exception111111\n");
        DPI_HASH_TABLE_UNLOCK(bucket);
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK_UNLOCK(pos, M_SYS, LV_ERROR);

    for (next = pos->next; pos != (&(bucket->head)); next = pos->next)
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        if(NULL == src_cell)
        {
            printf("[hash_cell_get_by_hash]: src_cell is null point exception\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }

        if(NULL == table->compare)
        {
            printf("[hash_cell_get_by_hash]: table->compare is null point exception\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }
        //CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        //CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != DPI_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            ret = DPI_CELL_FOUND;
            memcpy( dst_data, src_cell->entry, DPI_MIN(dst_len, table->cell_size));
            break;
        }
        pos = next;
        if(NULL == pos)
        {
            printf("[hash_cell_get_by_hash]: pos is null point exception222222\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }
        //CVMX_MP_POINT_CHECK_UNLOCK(pos, M_SYS, LV_ERROR);
    }
    DPI_HASH_TABLE_UNLOCK(bucket);
    return ret;

}


/******************************************************************************
 * 函数名称    : hash_get_cell_and_index_by_hash
 * 功能        : 根据哈希获取cell值以及该cell的索引
 * 参数        : table:哈希表结构体，带了表头基址
 *               key  :哈希关键字,可定位到桶子偏移,即行号
 *                     遍历双向链表，比较cell中key是否一致,即确定列
 *               dst_data :由调用者分配空间，将查询的值填进去
 *               index :获取的哈希表cell的索引
 * 说明        : key限定为表项结构中头几个字段
 * 返回        : 错误码，查找成功返回 MP_CELL_FOUND
 ******************************************************************************/
dpi_code_t hash_get_cell_and_index_by_hash( hash_table_t *table,
        hash_key_t   *key,
        void         *dst_data,
        uint32_t      dst_len,
        hash_table_index_t *index)
{
    dpi_code_t ret = DPI_OK;
    struct list_head *pos  = NULL;
    struct list_head *next = NULL;

    hash_bucket_t  *bucket     = NULL;
    hash_cell_t    *src_cell   = NULL;
    hash_cmp_em_t  cmp_rlt     = HASH_CMP_DIFF;
    uint32_t       hash_result = 0;
    uint8_t        entry[TABLE_CELL_MAX_LEN] = {0};

    if(NULL == table)
    {
        printf("[hash_get_cell_and_index_by_hash]: table is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == key)
    {
        printf("[hash_get_cell_and_index_by_hash]: key is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == dst_data)
    {
        printf("[hash_get_cell_and_index_by_hash]: dst_data is null point exception\n");
        return DPI_NULL_POINT;
    }
    
    if(NULL == index)
    {
        printf("[hash_get_cell_and_index_by_hash]: index is null point exception\n");
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK(table,    M_S11, LV_ERROR);
    //CVMX_MP_POINT_CHECK(key,      M_S11, LV_ERROR);
    //CVMX_MP_POINT_CHECK(dst_data, M_S11, LV_ERROR);
    //CVMX_MP_POINT_CHECK(index, M_S11, LV_ERROR);

    if( BYTE_GET_UINT64(key->size) > sizeof(entry) )
    {
        //LTE_DEBUG_PRINTF("Error: The key size exceeds the entry size.\n");
        return DPI_SPACE_NOT_ENOUGH;
    }
    memcpy(entry, key, BYTE_GET_UINT64(key->size) );

    /* 哈希运算获取桶偏移值 */
    if(NULL == table->hash)
    {
        printf("[hash_get_cell_and_index_by_hash]: table->hash is null point exception\n");
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK(table->hash, M_S11, LV_ERROR);
    ret = table->hash(key, &hash_result);
    if(DPI_OK != ret)
    {
        return ret;
    }
    //MP_ERR_PRT(table->hash(key, &hash_result));
    hash_result = hash_result % table->max_bucket;

    bucket = table->first_bucket + hash_result;
    if(NULL == bucket)
    {
        printf("[hash_get_cell_and_index_by_hash]: bucket is null point exception\n");
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK(bucket, M_S11, LV_ERROR);

    /*遍历双向链表，比较cell中key是否一致,即确定列*/
    DPI_HASH_TABLE_LOCK(bucket);
    pos = (&(bucket->head))->next;
    if(NULL == pos)
    {
        printf("[hash_get_cell_and_index_by_hash]: pos is null point exception11111\n");
        DPI_HASH_TABLE_UNLOCK(bucket);
        return DPI_NULL_POINT;
    }
    //CVMX_MP_POINT_CHECK_UNLOCK(pos, M_SYS, LV_ERROR);

    for (next = pos->next; pos != (&(bucket->head)); next = pos->next)
    {
        src_cell = list_entry(pos, hash_cell_t, node);

        //CVMX_MP_POINT_CHECK_UNLOCK(src_cell, M_S11, LV_ERROR);
        //CVMX_MP_POINT_CHECK_UNLOCK(table->compare, M_S11, LV_ERROR);
        if(NULL == src_cell)
        {
            printf("[hash_get_cell_and_index_by_hash]: src_cell is null point exception\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }

        if(NULL == table->compare)
        {
            printf("[hash_get_cell_and_index_by_hash]: table->compare is null point exception\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }

        ret = table->compare((void *)src_cell->entry, entry, &cmp_rlt);
        if (ret != DPI_OK)
        {
            break;
        }
        if(HASH_CMP_SAME == cmp_rlt)
        {
            index->node     = encrypt_hash_index(pos);
            index->en       = ENABLE;
            index->index    = bucket->index;
            index->bearerid = 0;
            ret = DPI_CELL_FOUND;
            memcpy( dst_data, src_cell->entry, DPI_MIN(dst_len, table->cell_size));
            break;
        }
        pos = next;
        if(NULL == pos)
        {
            printf("[hash_get_cell_and_index_by_hash]: pos is null point exception222222\n");
            DPI_HASH_TABLE_UNLOCK(bucket);
            return DPI_NULL_POINT;
        }
        //CVMX_MP_POINT_CHECK_UNLOCK(pos, M_SYS, LV_ERROR);
    }
    DPI_HASH_TABLE_UNLOCK(bucket);
    return ret;

}

dpi_code_t hash_table_search_update(hash_table_t *table, 
        hash_table_control_t *control)
{
    dpi_code_t rv = DPI_OK;

    uint32_t hash_v = 0, index = 0;
    hash_bucket_t *bucket = NULL;
    hash_cell_t *hash_cell = NULL;
    struct list_head *pos = NULL, *next = NULL;

    if(NULL == table)
    {
        printf("[hash_table_search_update]: table is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == control)
    {
        printf("[hash_table_search_update]: control is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == table->hash)
    {
        printf("[hash_table_search_update]: table->hash is null point exception\n");
        return DPI_NULL_POINT;
    }

    rv = table->hash(&(control->key), &hash_v);
    if(DPI_OK != rv)
    {
        return rv;
    }

    index  = hash_v % table->max_bucket;

    bucket = table->first_bucket + index;

    if(NULL == bucket)
    {
        printf("[hash_table_search_update]: bucket is null point exception\n");
        return DPI_NULL_POINT;
    }
    
    DPI_HASH_TABLE_LOCK(bucket);
    pos = (&(bucket->head))->next;
    if(NULL == pos)
    {
        printf("[hash_table_search_update]: pos is null point exception\n");
        return DPI_NULL_POINT;
    }

    for (next = pos->next; pos != (&(bucket->head)); next = pos->next)
    {    
        hash_cell = list_entry(pos, hash_cell_t, node);
        if(NULL == hash_cell)
        {
            printf("[hash_table_search_update]: hash_cell is null point exception\n");
            return DPI_NULL_POINT;
        }

        /*check compare  same or diff(new)*/
        if (ENABLE == control->compare_enable)
        {
            //LTE_DEBUG_PRINTF("%s: compare Enable\n", table->name);
            if(NULL == table->compare || NULL == control->d_compare)
            {
                DPI_HASH_TABLE_UNLOCK(bucket); 
                //LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
                //LTE_DEBUG_PRINTF("%s: table->compare==NULL || control->d_compare == NULL\n", table->name);
                return DPI_NULL_POINT;
            }

            rv = table->compare((void *)hash_cell->entry, control->d_compare, &(control->search));
            if ( DPI_OK != rv)
            {
                DPI_HASH_TABLE_UNLOCK(bucket); 
                //LTE_DEBUG_PRINTF("%s: compare failed\n", table->name);
                return DPI_FAIL;
            }
            if(HASH_CMP_SAME == control->search)
            {
                //LTE_DEBUG_PRINTF("%s: compare: <FIND>\n", table->name);
                control->node = encrypt_hash_index(pos);
                control->bucket = bucket;
                break;
            }
        }
        else
        {
            //LTE_DEBUG_PRINTF("%s: compare Disable\n", table->name);
        }
        pos = next;
        if (NULL == pos)
        {
            DPI_HASH_TABLE_UNLOCK(bucket); 
            //LOG_PRINT(mid, lv, LOG_CONTENT_NULL_POINT);
            return DPI_NULL_POINT;  
        }
    }

    if( HASH_CMP_DIFF == control->search)
    {
        if(ENABLE == control->new_enable)
        {
            /*new The cell*/
            hash_cell = (hash_cell_t *)malloc(sizeof(hash_cell_t));
            if( NULL  == hash_cell)
            {
                DPI_HASH_TABLE_UNLOCK(bucket);
                //LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_ALLOC_FAIL);

                if( DPI_GET_TABLE_PTR(TABLE_SESSION) == table )
                {
                    //hydra_stat_inc(stat_pkts_s1u_new_cell_fail);
                }
              
                return DPI_NULL_POINT;
            }
            
            if( HASH_ENTRY_VALID_SIZE_128 == table->cell_size )
            {
                memset( hash_cell, 0, sizeof(hash_cell_t));
            }

            control->bucket = bucket; 
            control->node = encrypt_hash_index(&(hash_cell->node));
            list_add( &(hash_cell->node),&bucket->head);
            bucket->bucket_depth++;
            //LTE_DEBUG_PRINTF("%s: compare: <New>\n", table->name);
        }
        else
        {
            //LTE_DEBUG_PRINTF("%s: compare: <IGNORE>\n", table->name);
        }
    }

    if(ENABLE == control->update_enable && NULL != hash_cell)
    {
        if(NULL == control->d_update  || NULL == table->update)
        {
            DPI_HASH_TABLE_UNLOCK(bucket);
            //LOG_PRINT(M_S11, LV_ERROR, LOG_CONTENT_NULL_POINT);
            //LTE_DEBUG_PRINTF("%s: update: NULL == control->d_update  || NULL == table->update\n", table->name);
            return DPI_NULL_POINT;
        }
        rv = table->update((void *)hash_cell->entry, control->d_update, control->update_action);

        if (DPI_OK != rv)
        {
            DPI_HASH_TABLE_UNLOCK(bucket);
            //LTE_DEBUG_PRINTF("%s: update: Failed\n", table->name);
            return rv;
        }
        //LTE_DEBUG_PRINTF("%s: update: Success\n", table->name);      
    }

    DPI_HASH_TABLE_UNLOCK(bucket);
    //LTE_DEBUG_PRINTF("==========================END==========================\n\n");    
    return rv;
}

/******************************************************************************
 * 函数名称    : create_update_table_by_hash
 * 功能        : 根据传入的hash key来更新表项，如果未查询到相关表项，会创建
 * 参数        : table_name:需要创建的表的类型
 *               data      :表项内容
 *               len       :内容长度,用于校验
 * 返回        : 错误码，创建成功返回MP_OK,失败返回XFAILURE
 ******************************************************************************/
dpi_code_t create_update_table_by_hash(
        table_name_t table_type,             /* [in] 需要更新的表的类型 */
        UpdateTypeEnum opType,               /* [in] 操作类型，指定需要更新的表项内容 */
        uint64_t actionType,               /* [in] 操作类型，指定需要更新的表项内容 */
        void* data,                          /* [in] 表项内容 */
        uint8_t len,                         /* [in] 表项长度，校验类型用 */
        hash_table_index_t* index          /* [out] index*/
        )
{
    dpi_code_t ret = DPI_OK;

    if((NULL == data)||(NULL == index))
    {
        printf("[create_update_table_by_hash]: data&index is null point exception\n");
        return DPI_NULL_POINT;
    }

    dpi_table_session_mng_t session_search_d    = {};

    hash_table_control_t table_control  = {};

    table_control.compare_enable   = ENABLE;
    table_control.new_enable       = ENABLE;
    table_control.update_enable    = ENABLE;    
    table_control.update_action = actionType;   // 操作类型

    table_control.d_compare        = data;
    table_control.d_update         = data;

    if(CREATE_TABLE != opType)
    {
        table_control.new_enable = DISABLE;
    }

    if( TABLE_SESSION == table_type )
    {
        if( sizeof(dpi_table_session_mng_t) != len )//lint !e650
        {
            return DPI_E_PARAM;
        }
        memcpy(&session_search_d, data, sizeof(dpi_table_session_mng_t));

        update_session_hash_key(session_search_d.ip_5tuple, &(table_control.key));
    }
    else
    {
        /* Invalid table type */
        return DPI_E_PARAM;
    }

    ret = hash_table_search_update(DPI_GET_TABLE_PTR(table_type), &table_control);
    if(DPI_OK != ret)
    {   
        printf("Create or Update Table : <Failed>\n");
        return ret;
    }

    
    /*************************************end***************************************************/
    if(NULL != table_control.bucket)
    {
        index->en       = ENABLE;
        index->index    = (table_control.bucket)->index;
        index->bearerid = 0;
        index->node     = table_control.node;
    }

    return ret;
}

