#ifndef __LTE_HASH_H
#define __LTE_HASH_H

#include <stdlib.h>
#include "cvmx_common.h"
#include "string.h"
#include "semp-errno.h"
#include <stdio.h>
#include "list.h"
#include "semp_hydra_relate.h"

#define AGING_INIT_TIME       10    /* 计数器初始值<范围:1 到 65535> */
#define AGING_SCAN_INTE       5     /* 老化功能扫描默认间隔时间 */


/*计时器操作处理*/
typedef enum
{
    TIMER_REPLACE,                  /* 设置新的值 */
    TIMER_REDUCE,                   /* 减操作 */
}timer_opera_t;


/* lte hash table cell */
#define ENTRY_CELL_DATA_SIZE 14
typedef struct hash_cell_s 
{
    struct list_head node;                 /* 双向链表指针 16字节*/
    uint64_t entry[ENTRY_CELL_DATA_SIZE];  /* Cell数据 14*8 = 112 字节*/
}__attribute__((packed)) hash_cell_t; /* 128字节 */
#define HASH_ENTRY_VALID_SIZE_128  (128-16)
#define HASH_ENTRY_VALID_SIZE_256  (256-16)

typedef struct
{
#define MAX_HASH_DWORD 8
    uint64_t  data[MAX_HASH_DWORD];
    uint8_t   size;//sizeof(uint64_t)
}hash_key_t;




typedef struct{
    struct list_head head;          /* 桶子的双向链表指针 */
    uint64_t bucket_depth;          /* 桶深度，即包含的cell个数 */
    uint64_t total_cell;            /* 未使用 */
    uint64_t del_cell;              /* 未使用 */
    cvmx_spinlock_t lock;           /* 操作锁 */
    uint32_t index;                 /* 未使用 */
}hash_bucket_t;//32B


typedef enum
{
    HASH_CMP_DIFF,
    HASH_CMP_SAME,
}hash_cmp_em_t;

typedef struct
{
    char            name[64];               /* cavium内存池分配的标识，按表名来命名*/
    
    hash_bucket_t * first_bucket;           /* 指向第一个桶的指针 */
    uint32_t        max_bucket;             /* 桶子数最大值，目前取值有1千万,2千万 */
    
    int             pool;                   /*FPA POOL ID*/
    uint16_t        cell_size;              /* cell空间大小 */
    mp_code_t (*hash)(hash_key_t *key, uint32_t *index);
    mp_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    mp_code_t (*update)(void *src, void*dst);
    mp_code_t (*get_bucket)(uint32_t *buck);
#ifdef RELATE_AGING
    uint8_t (*set_timer)(void *src, timer_opera_t opera, uint8_t value);
#endif
}hash_table_t;

#define GET_HASH_BUCKET_BY_INDEX(_table, _index)  (_index < _table->max_bucket)? (_table->first_bucket+_index):NULL;

/* 用于定义对某个表项的操作 */
typedef struct
{
    hash_bucket_t    *bucket;               /* 桶数据结构体，包含双向链表头节点 */
    struct list_head *node;                 /* 双向链表前后指针结构体：当前结点 */
    hash_key_t  key;                        /* 哈希函数的key，可以是imsi，或者是ip和teid的结合 */
    hash_cmp_em_t search;                   /* 哈希查询结果*/
    int hash_enable;                        /* 未使用，目前查询只能通过hash */
    int compare_enable;                     /* 是否是哈希表查询操作 */
    int update_enable;                      /* 是否是哈希表更新操作 */
    int new_enable;                         /* 是否是哈希结点新建操作 */
    int (*action)(void *src, void*dst);     /* 回调函数实现：不同哈希表对应的相同操作*/
    void            *d_compare;             /* 绑定某个表项*/
    void            *d_update;              /* 绑定某个表项*/
}hash_table_control_t;


typedef struct
{           
    hash_bucket_t    *bucket; /*cur*/      
    struct list_head *node;
    int search;
    void *cell_compare;     /*when the entry use*/
    void *cell_update;
    int (*compare)(void *src, void*dst); /*0:equals 1:not equals*/
    mp_error_t (*update)(void *src, void*dst); 
}lte_search_info_t;


/*表项索引，本来应该用uint32，为节省空间，采用了位域 */
typedef struct
{
    uint32_t en:1;
    uint32_t bearerid:4;
    uint32_t resv:2;
    uint32_t index:25;
#define MAX_INDEX_V 0x1ffffff    
    struct list_head    *node;        
}__attribute__((packed)) hash_table_index_t;



#define GET_BUCKET_OFFSET(_hasht, _bucket)  ((_bucket-_hasht->first_bucket)/(sizeof(hash_bucket_t)))

#define NODE2ENTRY(_node, _type)    ( (_type*) (((lte_hash_cell_t *)list_entry(_node, lte_hash_cell_t, node))->entry))
        



#define LTE_HASH_TABLE_LOCK(_hash_table)  do{ \
    cvmx_spinlock_lock(&((_hash_table)->lock));  \
    }while(0)
    
#define LTE_HASH_TABLE_UNLOCK(_hash_table)  do{\
    cvmx_spinlock_unlock(&((_hash_table)->lock));  \
}while(0)

#define LTE_IMSI_TABLE_DELETE_LOCK  do{ \
    cvmx_spinlock_lock(&(imsi_delete_lock));  \
    }while(0)

#define LTE_IMSI_TABLE_DELETE_UNLOCK  do{\
    cvmx_spinlock_unlock(&(imsi_delete_lock));  \
}while(0)




mp_code_t hash_table_search_update(hash_table_t *table, hash_table_control_t *control);
mp_code_t hash_table_search_destroy(hash_table_t *table, hash_table_control_t *control);
hash_cell_t *hash_table_search_by_index_and_offset(hash_table_t *table, uint32_t index, uint32_t offset); 
mp_code_t hash_table_get_bucket_depth_by_index(hash_table_t *table, uint32_t index, uint32_t *depth);
mp_code_t hash_table_flush(hash_table_t *table);
mp_code_t hash_table_cell_delete(hash_table_t *table, uint32_t offset,
                                                struct list_head * cnode);

void *hash_table_index_to_entry(hash_table_t *table, hash_table_index_t *index);
mp_code_t hash_table_remove_entry_by_index(hash_table_t *table, hash_table_index_t *index);

mp_code_t hash_cell_get_by_index( hash_table_t *table, hash_table_index_t *hti,
                                  void *dst_data, uint32_t dst_len );

mp_code_t hash_cell_get_by_hash( hash_table_t *table, hash_key_t *key,
                                 void *dst_data, uint32_t dst_len );

mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm);

//inline mp_code_t hash_table_get_s1u_info(parse_gtpu_t *gtpu);

#endif



