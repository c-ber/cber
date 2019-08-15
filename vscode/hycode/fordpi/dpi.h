/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_DPI_H_
#define MODULES_DPI_DPI_H_

#include "cvmx_common.h"
#include "encap.h"
#include "util.h"
#include "r2_list.h"
#include "list.h"
#include "semp_comm_dpi.h"
#include "hash_alg.h"
#include "sapl_dpi_sdk.h"


mp_code_t dataplane_dpi_init();
mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft);



#define DPI_BUCKET_MAX_SIZE  10

typedef struct{
    struct list_head    head;                  /* 桶子的双向链表指针 */
    uint64_t            bucket_depth;          /* 桶深度，即包含的cell个数 */
    uint64_t            total_cell;            /* 已建立的五元组数 */
    uint64_t            del_cell;              /* 已老化的五元组数 */
    cvmx_spinlock_t     lock;                  /* 操作锁 */
    uint32_t            index;                 /* 当前bucket的索引 */
}dpi_hash_bucket_t;


/*five tuple hash table*/
typedef struct
{
    five_tuple_t        ft;
    cvmx_spinlock_t     lock;
}__attribute__((packed)) five_tuple_table_t;





#define DPI_TABLE_CELL_MAX_LEN 128       /* 目前表的cell最大长度 */

/* dpi five-tuple hash table cell */
#define DPI_ENTRY_CELL_DATA_SIZE 14
typedef struct dpi_hash_cell_s
{
    struct list_head node;                 /* 双向链表指针 16字节*/
    uint64_t entry[DPI_ENTRY_CELL_DATA_SIZE];  /* Cell数据 14*8 = 112 字节*/
}__attribute__((packed)) dpi_hash_cell_t; /* 128字节 */
#define DPI_HASH_ENTRY_VALID_SIZE_128  (128-16)


/*cell compare result*/
typedef enum
{
    DPI_HASH_CMP_DIFF,
    DPI_HASH_CMP_SAME,
}dpi_hash_cmp_em_t;

/* search key */
typedef struct
{
#define MAX_HASH_DWORD 8
    uint64_t  data[MAX_HASH_DWORD];
    uint8_t   size;//sizeof(uint64_t)
}dpi_hash_key_t;


/*禁止同步*/
#define DPI_HASH_CELL_NEW(_pool)     \
        (malloc(sizeof(dpi_hash_cell_t)))

#define DPI_HASH_CELL_FREE(bucket, _pool, _ptr_)   do {\
        free(_ptr_ );\
        _ptr_ = NULL;\
        bucket->bucket_depth--;\
    }while(0)

#define HASH_TABLE_BUCKET_LOCK(_hash_table)  do{ \
    cvmx_spinlock_lock(&((_hash_table)->lock));  \
    }while(0)

#define HASH_TABLE_BUCKET_UNLOCK(_hash_table)  do{\
    cvmx_spinlock_unlock(&((_hash_table)->lock));  \
}while(0)


#define FIVE_TUPLE_LOCK(lock)  do{ \
    cvmx_spinlock_lock(&(lock));  \
    }while(0)

#define FIVE_TUPLE_UNLOCK(lock)  do{\
    cvmx_spinlock_unlock(&(lock));  \
}while(0)


/*配置文件内存位置*/
typedef struct _config_info_t
{
    uint8_t  *pstr;               /* 指向文件内存的首地址 */
    uint32_t  cur_wirte_index;    /* 当前已写的字节数 */
    flag_t    is_complete_file;   /* 是否为完整的文件 */
    uint32_t  file_size;          /* 文件大小 */
}config_info_t;


#endif /* MODULES_DPI_DPI_H_ */
