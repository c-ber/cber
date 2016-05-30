/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
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
    struct list_head    head;                  /* Ͱ�ӵ�˫������ָ�� */
    uint64_t            bucket_depth;          /* Ͱ��ȣ���������cell���� */
    uint64_t            total_cell;            /* �ѽ�������Ԫ���� */
    uint64_t            del_cell;              /* ���ϻ�����Ԫ���� */
    cvmx_spinlock_t     lock;                  /* ������ */
    uint32_t            index;                 /* ��ǰbucket������ */
}dpi_hash_bucket_t;


/*five tuple hash table*/
typedef struct
{
    five_tuple_t        ft;
    cvmx_spinlock_t     lock;
}__attribute__((packed)) five_tuple_table_t;





#define DPI_TABLE_CELL_MAX_LEN 128       /* Ŀǰ���cell��󳤶� */

/* dpi five-tuple hash table cell */
#define DPI_ENTRY_CELL_DATA_SIZE 14
typedef struct dpi_hash_cell_s
{
    struct list_head node;                 /* ˫������ָ�� 16�ֽ�*/
    uint64_t entry[DPI_ENTRY_CELL_DATA_SIZE];  /* Cell���� 14*8 = 112 �ֽ�*/
}__attribute__((packed)) dpi_hash_cell_t; /* 128�ֽ� */
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


/*��ֹͬ��*/
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


/*�����ļ��ڴ�λ��*/
typedef struct _config_info_t
{
    uint8_t  *pstr;               /* ָ���ļ��ڴ���׵�ַ */
    uint32_t  cur_wirte_index;    /* ��ǰ��д���ֽ��� */
    flag_t    is_complete_file;   /* �Ƿ�Ϊ�������ļ� */
    uint32_t  file_size;          /* �ļ���С */
}config_info_t;


#endif /* MODULES_DPI_DPI_H_ */
