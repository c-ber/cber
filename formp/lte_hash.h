#ifndef __LTE_HASH_H
#define __LTE_HASH_H

#include <stdlib.h>
#include "cvmx_common.h"
#include "string.h"
#include "semp-errno.h"
#include <stdio.h>
#include "list.h"
#include "semp_hydra_relate.h"

#define AGING_INIT_TIME       10    /* ��������ʼֵ<��Χ:1 �� 65535> */
#define AGING_SCAN_INTE       5     /* �ϻ�����ɨ��Ĭ�ϼ��ʱ�� */


/*��ʱ����������*/
typedef enum
{
    TIMER_REPLACE,                  /* �����µ�ֵ */
    TIMER_REDUCE,                   /* ������ */
}timer_opera_t;


/* lte hash table cell */
#define ENTRY_CELL_DATA_SIZE 14
typedef struct hash_cell_s 
{
    struct list_head node;                 /* ˫������ָ�� 16�ֽ�*/
    uint64_t entry[ENTRY_CELL_DATA_SIZE];  /* Cell���� 14*8 = 112 �ֽ�*/
}__attribute__((packed)) hash_cell_t; /* 128�ֽ� */
#define HASH_ENTRY_VALID_SIZE_128  (128-16)
#define HASH_ENTRY_VALID_SIZE_256  (256-16)

typedef struct
{
#define MAX_HASH_DWORD 8
    uint64_t  data[MAX_HASH_DWORD];
    uint8_t   size;//sizeof(uint64_t)
}hash_key_t;




typedef struct{
    struct list_head head;          /* Ͱ�ӵ�˫������ָ�� */
    uint64_t bucket_depth;          /* Ͱ��ȣ���������cell���� */
    uint64_t total_cell;            /* δʹ�� */
    uint64_t del_cell;              /* δʹ�� */
    cvmx_spinlock_t lock;           /* ������ */
    uint32_t index;                 /* δʹ�� */
}hash_bucket_t;//32B


typedef enum
{
    HASH_CMP_DIFF,
    HASH_CMP_SAME,
}hash_cmp_em_t;

typedef struct
{
    char            name[64];               /* cavium�ڴ�ط���ı�ʶ��������������*/
    
    hash_bucket_t * first_bucket;           /* ָ���һ��Ͱ��ָ�� */
    uint32_t        max_bucket;             /* Ͱ�������ֵ��Ŀǰȡֵ��1ǧ��,2ǧ�� */
    
    int             pool;                   /*FPA POOL ID*/
    uint16_t        cell_size;              /* cell�ռ��С */
    mp_code_t (*hash)(hash_key_t *key, uint32_t *index);
    mp_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    mp_code_t (*update)(void *src, void*dst);
    mp_code_t (*get_bucket)(uint32_t *buck);
#ifdef RELATE_AGING
    uint8_t (*set_timer)(void *src, timer_opera_t opera, uint8_t value);
#endif
}hash_table_t;

#define GET_HASH_BUCKET_BY_INDEX(_table, _index)  (_index < _table->max_bucket)? (_table->first_bucket+_index):NULL;

/* ���ڶ����ĳ������Ĳ��� */
typedef struct
{
    hash_bucket_t    *bucket;               /* Ͱ���ݽṹ�壬����˫������ͷ�ڵ� */
    struct list_head *node;                 /* ˫������ǰ��ָ��ṹ�壺��ǰ��� */
    hash_key_t  key;                        /* ��ϣ������key��������imsi��������ip��teid�Ľ�� */
    hash_cmp_em_t search;                   /* ��ϣ��ѯ���*/
    int hash_enable;                        /* δʹ�ã�Ŀǰ��ѯֻ��ͨ��hash */
    int compare_enable;                     /* �Ƿ��ǹ�ϣ���ѯ���� */
    int update_enable;                      /* �Ƿ��ǹ�ϣ����²��� */
    int new_enable;                         /* �Ƿ��ǹ�ϣ����½����� */
    int (*action)(void *src, void*dst);     /* �ص�����ʵ�֣���ͬ��ϣ���Ӧ����ͬ����*/
    void            *d_compare;             /* ��ĳ������*/
    void            *d_update;              /* ��ĳ������*/
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


/*��������������Ӧ����uint32��Ϊ��ʡ�ռ䣬������λ�� */
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



