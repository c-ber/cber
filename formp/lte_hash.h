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

#define HASH_TAB_UPDTAE_NONE    0   //不更新hash表项的任何内容

/*imsi表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagImsiTableUpdateAction
{
    IMSIT_UPDATE_IMSI       = 0x0001,           //[[CN]] 更新imsi       [[CN]]
    IMSIT_UPDATE_IMEI       = 0x0002,           //[[CN]] 更新imei       [[CN]]
    IMSIT_UPDATE_MSISDN     = 0x0004,           //[[CN]] 更新msisdn     [[CN]]
    IMSIT_UPDATE_S11_POS    = 0x0008,           //[[CN]] 更新s11_pos    [[CN]]
    IMSIT_UPDATE_SGW_POS    = 0x0010,           //[[CN]] 更新sgw_pos    [[CN]]
    IMSIT_UPDATE_S6A_POS    = 0x0020,           //[[CN]] 更新s6a_pos    [[CN]]
    IMSIT_UPDATE_S1_POS     = 0x0040,           //[[CN]] 更新s1_pos     [[CN]]
    IMSIT_UPDATE_PDN        = 0x0080,           //[[CN]] 更新pdn        [[CN]]
    IMSIT_UPDATE_EX_FIELD   = 0x0100,           //[[CN]] 更新扩展字段   [[CN]]
    IMSIT_UPDATE_GUTI       = 0x0200,           //[[CN]] 更新GUTI       [[CN]]
    IMSIT_UPDATE_TAI        = 0x0400,           //[[CN]] 更新TAI        [[CN]]
    IMSIT_UPDATE_ALG        = 0x0800,           //[[CN]] 更新算法类型   [[CN]]
    IMSIT_UPDATE_KASME      = 0x1000,           //[[CN]] 更新kasme      [[CN]]
    IMSIT_UPDATE_AGING      = 0x2000,           //[[CN]] 更新老化时间      [[CN]]
 }ImsiTableUpdateActionEnum;

/*s1_mme表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS1_MMETableUpdateAction
{
    S1_MMET_UPDATE_ENODE_IP         = 0x0001,           //[[CN]] 更新enode ip       [[CN]]
    S1_MMET_UPDATE_ENODE_UE_ID      = 0x0002,           //[[CN]] 更新enode ue id    [[CN]]
    S1_MMET_UPDATE_IMSI             = 0x0004,           //[[CN]] 更新imsi           [[CN]]
    S1_MMET_UPDATE_MME_IP           = 0x0008,           //[[CN]] 更新mme ip         [[CN]]
    S1_MMET_UPDATE_MME_UE_ID        = 0x0010,           //[[CN]] 更新mme ue id      [[CN]]
    S1_MMET_UPDATE_RAND             = 0x0020,           //[[CN]] 更新rand           [[CN]]
    S1_MMET_UPDATE_OLD_GUTI         = 0x0040,           //[[CN]] 更新old_guti       [[CN]]
    S1_MMET_UPDATE_ALG_TYPE         = 0x0080,           //[[CN]] 更新算法类型       [[CN]]
    S1_MMET_UPDATE_GUTI_FLAG        = 0x0100,           //[[CN]] 更新guti flag      [[CN]]
 }S1_MMETableUpdateActionEnum;

/* s11-mme 表项的更新操作类型定义，每一位对应更新一个元素 */
typedef enum tagS11_MMETableUpdateAction
{
    S11_MMET_UPDATE_FTEID        = 0x0001,           //[[CN]] 更新fteid       [[CN]]
    S11_MMET_UPDATE_POS_SGW      = 0x0002,           //[[CN]] 更新pos_sgw     [[CN]]
    S11_MMET_UPDATE_POS_IMSI     = 0x0004,           //[[CN]] 更新pos_imsi    [[CN]]
    S11_MMET_UPDATE_POS_S1U      = 0x0008,           //[[CN]] 更新pos_s1u     [[CN]]
    S11_MMET_UPDATE_NEWEST_SEQ   = 0x0010,           //[[CN]] 更新newest_seq  [[CN]]
    S11_MMET_UPDATE_AGING        = 0x0020,           //[[CN]] 更新aging       [[CN]]
}S11_MMETableUpdateActionEnum;

/*s11-sgw表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS11_SGWTableUpdateAction
{
    S11_SGWT_UPDATE_FTEID        = 0x0001,           //[[CN]] 更新fteid       [[CN]]
    S11_SGWT_UPDATE_POS_MME      = 0x0002,           //[[CN]] 更新pos_mme     [[CN]]
    S11_SGWT_UPDATE_POS_IMSI     = 0x0004,           //[[CN]] 更新pos_imsi    [[CN]]
    S11_SGWT_UPDATE_POS_S1U      = 0x0008,           //[[CN]] 更新pos_s1u     [[CN]]
    S11_SGWT_UPDATE_NEWEST_SEQ   = 0x0010,           //[[CN]] 更新newest_seq  [[CN]]
    S11_SGWT_UPDATE_AGING        = 0x0020,           //[[CN]] 更新aging       [[CN]]
}S11_SGWTableUpdateActionEnum;

/*s1u表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS1UTableUpdateAction
{
    S1UT_UPDATE_FTEID        = 0x0001,           //[[CN]] 更新fteid       [[CN]]
    S1UT_UPDATE_UE_IP        = 0x0002,           //[[CN]] 更新ue_ip       [[CN]]
    S1UT_UPDATE_BEARERID     = 0x0004,           //[[CN]] 更新bearerid    [[CN]]
    S1UT_UPDATE_IMSI         = 0x0008,           //[[CN]] 更新imsi        [[CN]]
    S1UT_UPDATE_IMEI         = 0x0010,           //[[CN]] 更新imei        [[CN]]
    S1UT_UPDATE_MSISDN       = 0x0020,           //[[CN]] 更新msisdn      [[CN]]
    S1UT_UPDATE_EX_FIELD     = 0x0040,           //[[CN]] 更新ex_field    [[CN]]
    S1UT_UPDATE_AGING        = 0x0080,           //[[CN]] 更新aging       [[CN]]
    S1UT_UPDATE_TAI          = 0x0100,           //[[CN]] 更新tai         [[CN]]
    S1UT_UPDATE_GUTI         = 0x0200,           //[[CN]] 更新guti        [[CN]]
    S1UT_UPDATE_CREATE_REALTE= 0x0400,
    S1UT_UPDATE_B0_NUM       = 0x0800,
    S1UT_UPDATE_B1_NUM       = 0x1000
}S1UTableUpdateActionEnum;

/*s6a表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS6_ATableUpdateAction
{
    S6_AT_UPDATE_HSSIP        = 0x0001,           //[[CN]] 更新hssip       [[CN]]
    S6_AT_UPDATE_MMEIP        = 0x0002,           //[[CN]] 更新mmeip       [[CN]]
    S6_AT_UPDATE_HOP_BY_HOP   = 0x0004,           //[[CN]] 更新hop_by_hop  [[CN]]
    S6_AT_UPDATE_IMSI         = 0x0008,           //[[CN]] 更新imsi        [[CN]]
    S6_AT_UPDATE_AGING        = 0x0010,           //[[CN]] 更新aging       [[CN]]
    S6_AT_UPDATE_NAS_KEY      = 0x0020,           //[[CN]] 更新nas_key     [[CN]]
}S6_ATableUpdateActionEnum;

/*s_tmsi表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagS_TMSITableUpdateAction
{
    S_TMSIT_UPDATE_S_TMSI        = 0x0001,           //[[CN]] 更新s_tmsi       [[CN]]
    S_TMSIT_UPDATE_IMSI          = 0x0002,           //[[CN]] 更新imsi         [[CN]]
}S_TMSITableUpdateActionEnum;


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
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
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
    uint64_t update_action;                 /* update操作的开关，按照位操作来选择更新的表项内容 */
    int (*action)(void *src, void*dst);     /* 回调函数实现：不同哈希表对应的相同操作*/
    int (*action_up)(void *src, void*dst, uint64_t action);     /* 回调函数实现：不同哈希表对应的相同操作*/
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
mp_code_t hash_cell_delete_by_hash( hash_table_t *table,
                                    hash_key_t   *key );

mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm);

inline mp_code_t hash_cell_new(hash_table_t *table, hash_bucket_t *bucket, void * cell);

/* chengshuan Add for table operation */

/*更新表项内容的操作类型*/
typedef enum
{
    CREATE_TABLE,
    UPDATE_IMSIT_GUTI,
    UPDATE_IMSIT_KASME,
    UPDATE_S1_MMET_CIPHER_ALG_TYPE,
    UPDATE_S1_MMET_RAND,
    UPDATE_S1_MMET_IMSI,
}UpdateTypeEnum;

mp_error_t search_table_by_hash(
                            table_name_t table_type,             /* [in] 需要查找的表的类型 */
                            hash_key_t key,                      /* [in] hash key */
                            void* compare_d,                     /* [in] compare_d for table control*/
                            void* data,                         /* [out] 表项内容 */
                            uint8_t* len,                        /* [out] 表项长度，校验类型用 */
                            uint8_t* result,                      /* [out] 查找结果，是否找到对应key的表项 */
                            hash_table_index_t* index            /* [out] index of the table if found */
                            );

mp_error_t search_table_by_index(
                            table_name_t table_type,             /* [in] 需要查找的表的类型 */
                            hash_table_index_t index,            /* [in] index */
                            void* compare_d,                     /* [in] compare_d for table control*/
                            void* data,                         /* [out] 表项内容 */
                            uint8_t* len,                        /* [out] 表项长度，校验类型用 */
                            uint8_t* result                      /* [out] 查找结果，是否找到对应key的表项 */
                            );

mp_error_t create_update_table_by_hash(
                            table_name_t table_type,             /* [in] 需要更新的表的类型 */
                            UpdateTypeEnum opType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            uint64_t actionType,               /* [in] 操作类型，指定需要更新的表项内容 */
                            void* data,                          /* [in] 表项内容 */
                            uint8_t len,                         /* [in] 表项长度，校验类型用 */
                            hash_table_index_t* index           /* [out] index*/
                            );

/* chengshuan Add for table operation -end- */



#endif
