#ifndef __LTE_HASH_H
#define __LTE_HASH_H

#include <stdlib.h>
#include "cvmx_common.h"
#include "string.h"
#include "semp-errno.h"
#include <stdio.h>
#include "list.h"
#include "semp_hydra_relate.h"

#define AGING_INIT_TIME       15    /* ��������ʼֵ<��Χ:1 �� 65535> */
#define AGING_SCAN_INTE       20     /* �ϻ�����ɨ��Ĭ�ϼ��ʱ�� */

#define HASH_TAB_UPDTAE_NONE    0   //������hash������κ�����

/*imsi����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagImsiTableUpdateAction
{
    IMSIT_UPDATE_IMSI               = 0x0001,           //[[CN]] ����imsi                  [[CN]]
    IMSIT_UPDATE_IMEI               = 0x0002,           //[[CN]] ����imei                  [[CN]]
    IMSIT_UPDATE_MSISDN             = 0x0004,           //[[CN]] ����msisdn                [[CN]]
    IMSIT_UPDATE_EX_FIELD           = 0x0008,           //[[CN]] ������չ�ֶ�              [[CN]]
    IMSIT_UPDATE_GUTI               = 0x0010,           //[[CN]] ����GUTI                  [[CN]]
    IMSIT_UPDATE_TAI                = 0x0020,           //[[CN]] ����TAI                   [[CN]]
    IMSIT_UPDATE_PDN                = 0x0040,           //[[CN]] ����PDN                   [[CN]]
    IMSIT_UPDATE_ALG                = 0x0080,           //[[CN]] ����algorithm type        [[CN]]
    IMSIT_UPDATE_KASME              = 0x0100,           //[[CN]] ����kasme                 [[CN]]
    IMSIT_UPDATE_POS_S11_MME        = 0x0200,           //[[CN]] ����s11_mme table index   [[CN]]
    IMSIT_UPDATE_POS_S11_SGW        = 0x0400,           //[[CN]] ����s11_sgw table index   [[CN]]
    IMSIT_UPDATE_POS_S1U_SGW        = 0x0800,           //[[CN]] ����s1u_sgw table index   [[CN]]
    IMSIT_UPDATE_POS_S1U_ENB        = 0x1000,           //[[CN]] ����s1u_eNB table index   [[CN]]
    IMSIT_UPDATE_POS_S6A            = 0x2000,           //[[CN]] ����s6a table table index [[CN]]
    IMSIT_UPDATE_POS_S1_MME         = 0x4000,           //[[CN]] ����s1_mme table index    [[CN]]
    IMSIT_UPDATE_MASK               = 0x8000,           //[[CN]] ����mask                  [[CN]]
    IMSIT_UPDATE_AGING              = 0x10000,          //[[CN]] �����ϻ�ʱ��              [[CN]]
}ImsiTableUpdateActionEnum;

typedef enum tagImsiTableContentValidMask
{
    IMSIT_IMSI_VALID           = 0x0001,           //[[CN]]  IMSI ��Ч         [[CN]]
    IMSIT_IMEI_VALID           = 0x0002,           //[[CN]] IMEI ��Ч          [[CN]]
    IMSIT_MSISDN_VALID         = 0x0004,           //[[CN]] MSISDN ��Ч        [[CN]]
    IMSIT_EX_FIELD_VALID       = 0x0008,           //[[CN]] EX_FIELD��Ч       [[CN]]
    IMSIT_GUTI_VALID           = 0x0010,           //[[CN]] GUTI��Ч           [[CN]]
    IMSIT_TAI_VALID            = 0x0020,           //[[CN]] TAI��Ч            [[CN]]
    IMSIT_PDN_VALID            = 0x0040,           //[[CN]] PDN��Ч            [[CN]]
    IMSIT_POS_S11_MME_VALID    = 0x0080,           //[[CN]] s11_mme index ��Ч [[CN]]
    IMSIT_POS_S11_SGW_VALID    = 0x0100,           //[[CN]] s11_sgw index ��Ч [[CN]]
    IMSIT_POS_S1U_SGW_VALID    = 0x0200,           //[[CN]] s1u_sgw index��Ч  [[CN]]
    IMSIT_POS_S1U_ENB_VALID    = 0x0400,           //[[CN]] s1u_eNB index��Ч  [[CN]]
    IMSIT_POS_S6A_VALID        = 0x0800,           //[[CN]] s6a  index��Ч     [[CN]]
    IMSIT_POS_S1_MME_VALID     = 0x1000,           //[[CN]] s1_mme index ��Ч  [[CN]]
}ImsiTableContentValidMaskEnum;

#define UPDATE_IMSIT_FIELD(field, action, dst, src, len) \
    memcpy(dst, src, len);\
    action |= IMSIT_UPDATE_##field;




/*s1_mme����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS1_MMETableUpdateAction
{
    S1_MMET_UPDATE_ENODE_IP         = 0x0001,           //[[CN]] ����enode ip       [[CN]]
    S1_MMET_UPDATE_ENODE_UE_ID      = 0x0002,           //[[CN]] ����enode ue id    [[CN]]
    S1_MMET_UPDATE_IMSI             = 0x0004,           //[[CN]] ����imsi           [[CN]]
    S1_MMET_UPDATE_MME_IP           = 0x0008,           //[[CN]] ����mme ip         [[CN]]
    S1_MMET_UPDATE_MME_UE_ID        = 0x0010,           //[[CN]] ����mme ue id      [[CN]]
    S1_MMET_UPDATE_RAND             = 0x0020,           //[[CN]] ����rand           [[CN]]
    S1_MMET_UPDATE_OLD_GUTI         = 0x0040,           //[[CN]] ����old_guti       [[CN]]
    S1_MMET_UPDATE_ALG_TYPE         = 0x0080,           //[[CN]] �����㷨����       [[CN]]
    S1_MMET_UPDATE_GUTI_FLAG        = 0x0100,           //[[CN]] ����guti flag      [[CN]]
    S1_MMET_UPDATE_TAI              = 0x0200,           //[[CN]] ����TAI            [[CN]]
    S1_MMET_UPDATE_MASK             = 0x0400,           //[[CN]] ����mask           [[CN]]
    S1_MMET_UPDATE_AGING            = 0x0800,           //[[CN]] ����aging          [[CN]]
    S1_MMET_UPDATE_TIMSI_FLAG       = 0X1000,           //[[CN]] ����timsi flag     [[CN]]
 }S1_MMETableUpdateActionEnum;
 
typedef enum tagS1MMETableContentValidMask
{
    S1_MMET_IMSI_VALID             = 0x0001,           //[[CN]] ��Ч�� imsi           [[CN]]
    S1_MMET_MME_IP_VALID           = 0x0002,           //[[CN]] ��Ч�� mme ip         [[CN]]
    S1_MMET_MME_UE_ID_VALID        = 0x0004,           //[[CN]] ��Ч�� mme ue id      [[CN]]
    S1_MMET_RAND_VALID             = 0x0008,           //[[CN]] ��Ч�� rand           [[CN]]
    S1_MMET_OLD_GUTI_VALID         = 0x0010,           //[[CN]] ��Ч�� old_guti       [[CN]]
    S1_MMET_ALG_TYPE_VALID         = 0x0020,           //[[CN]] ��Ч�� �㷨����       [[CN]]
    S1_MMET_GUTI_FLAG_VALID        = 0x0040,           //[[CN]] ��Ч�� guti flag      [[CN]]
    S1_MMET_TAI_VALID              = 0x0080,           //[[CN]] ��Ч�� TAI            [[CN]]
    S1_MMET_TIMSI_FLAG_VALID       = 0X0100,           //[[CN]] ��Ч�� TIMSI flag     [[CN]] 
}S1MMETableContentValidMaskEnum;

/* s11-mme ����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ�� */
typedef enum tagS11_MMETableUpdateAction
{
    S11_MMET_UPDATE_FTEID        = 0x0001,           //[[CN]] ����fteid       [[CN]]
    S11_MMET_UPDATE_IMSI         = 0x0002,           //[[CN]] ����imsi        [[CN]]
    S11_MMET_UPDATE_AGING        = 0x0004,           //[[CN]] ����aging       [[CN]]
}S11_MMETableUpdateActionEnum;

/*s11-sgw����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS11_SGWTableUpdateAction
{
    S11_SGWT_UPDATE_FTEID        = 0x0001,           //[[CN]] ����fteid       [[CN]]
    S11_SGWT_UPDATE_IMSI         = 0x0002,           //[[CN]] ����imsi        [[CN]]
    S11_SGWT_UPDATE_AGING        = 0x0004,           //[[CN]] ����aging       [[CN]]
}S11_SGWTableUpdateActionEnum;

/*s1u����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS1UTableUpdateAction
{
    S1UT_UPDATE_FTEID        = 0x0001,           //[[CN]] ����fteid       [[CN]]
    S1UT_UPDATE_UE_IP        = 0x0002,           //[[CN]] ����ue_ip       [[CN]]
    S1UT_UPDATE_IMSI         = 0x0004,           //[[CN]] ����imsi        [[CN]]
    S1UT_UPDATE_IMEI         = 0x0008,           //[[CN]] ����imei        [[CN]]
    S1UT_UPDATE_MSISDN       = 0x0010,           //[[CN]] ����msisdn      [[CN]]
    S1UT_UPDATE_EX_FIELD     = 0x0020,           //[[CN]] ����ex_field    [[CN]]
    S1UT_UPDATE_AGING        = 0x0040,           //[[CN]] ����aging       [[CN]]
    S1UT_UPDATE_TAI          = 0x0080,           //[[CN]] ����tai         [[CN]]
    S1UT_UPDATE_GUTI         = 0x0100,           //[[CN]] ����guti        [[CN]]
    S1UT_UPDATE_MASK         = 0x0200,
#ifdef STAT_TEST
    S1UT_UPDATE_CREATE_REALTE= 0x0400,
    S1UT_UPDATE_B0_NUM       = 0x0800,
    S1UT_UPDATE_B1_NUM       = 0x1000
#endif
}S1UTableUpdateActionEnum;



typedef enum tagS1uTableContentValidMask
{
    S1UT_IMSI_VALID            = 0x0001,           //[[CN]]  IMSI ��Ч         [[CN]]
    S1UT_IMEI_VALID            = 0x0002,           //[[CN]] IMEI ��Ч          [[CN]]
    S1UT_MSISDN_VALID          = 0x0004,           //[[CN]] MSISDN ��Ч        [[CN]]
    S1UT_EX_FIELD_VALID        = 0x0008,           //[[CN]] EX_FIELD��Ч       [[CN]]
    S1UT_GUTI_VALID            = 0x0010,           //[[CN]] GUTI��Ч           [[CN]]
    S1UT_TAI_VALID             = 0x0020,           //[[CN]] TAI��Ч            [[CN]]
}S1uTableContentValidMaskEnum;

/*s6a����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS6_ATableUpdateAction
{
    S6_AT_UPDATE_HSSIP        = 0x0001,           //[[CN]] ����hssip       [[CN]]
    S6_AT_UPDATE_MMEIP        = 0x0002,           //[[CN]] ����mmeip       [[CN]]
    S6_AT_UPDATE_HOP_BY_HOP   = 0x0004,           //[[CN]] ����hop_by_hop  [[CN]]
    S6_AT_UPDATE_IMSI         = 0x0008,           //[[CN]] ����imsi        [[CN]]
    S6_AT_UPDATE_AGING        = 0x0010,           //[[CN]] ����aging       [[CN]]
    S6_AT_UPDATE_NAS_KEY      = 0x0020,           //[[CN]] ����nas_key     [[CN]]
}S6_ATableUpdateActionEnum;

/*s_tmsi����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagS_TMSITableUpdateAction
{
    S_TMSIT_UPDATE_S_TMSI        = 0x0001,           //[[CN]] ����s_tmsi       [[CN]]
    S_TMSIT_UPDATE_IMSI          = 0x0002,           //[[CN]] ����imsi         [[CN]]
}S_TMSITableUpdateActionEnum;


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
    mp_code_t (*update)(void *src, void*dst, uint64_t action);
    mp_code_t (*get_bucket)(uint32_t *buck);
#ifdef RELATE_AGING
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
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
    uint64_t update_action;                 /* update�����Ŀ��أ�����λ������ѡ����µı������� */
    int (*action)(void *src, void*dst);     /* �ص�����ʵ�֣���ͬ��ϣ���Ӧ����ͬ����*/
    int (*action_up)(void *src, void*dst, uint64_t action);     /* �ص�����ʵ�֣���ͬ��ϣ���Ӧ����ͬ����*/
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
mp_code_t hash_table_search_by_index_and_offset(hash_table_t *table,
                                        uint32_t index, uint32_t  column, 
                                        void *odata, uint32_t olen);
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

mp_code_t hash_cell_update_timer_by_hash(hash_table_t *table,
                                         hash_key_t   *key,
                                         uint16_t      tm);

mp_code_t hash_cell_update_timer_by_index(hash_table_t       *table,
                                          hash_table_index_t *index,
                                          uint16_t            tm);

mp_code_t update_imsi_table(void *dst, void *src, uint64_t action);
mp_code_t update_s1_mme_table(void *dst, void *src, uint64_t action);
mp_code_t update_s11_mme_table(void *dst, void *src, uint64_t action);
mp_code_t update_s11_sgw_table(void *dst, void *src, uint64_t action);
mp_code_t update_s1u_table(void *dst, void *src, uint64_t action);
mp_code_t update_s6a_table(void *dst, void *src, uint64_t action);
mp_code_t update_s_tmsi_table(void *dst, void *src, uint64_t action);



#ifdef STAT_TEST
inline mp_code_t hash_cell_new(hash_table_t *table, hash_bucket_t *bucket, void * cell);
#endif
/* chengshuan Add for table operation */

/*���±������ݵĲ�������*/
typedef enum
{
    CREATE_TABLE,
    UPDATE_TABLE
}UpdateTypeEnum;

mp_error_t search_table_by_index(
                            table_name_t table_type,             /* [in] ��Ҫ���ҵı������ */
                            hash_table_index_t index,            /* [in] index */
                            void* compare_d,                     /* [in] compare_d for table control*/
                            void* data,                         /* [out] �������� */
                            uint8_t* len,                        /* [out] ����ȣ�У�������� */
                            uint8_t* result                      /* [out] ���ҽ�����Ƿ��ҵ���Ӧkey�ı��� */
                            );

mp_error_t create_update_table_by_hash(
                            table_name_t table_type,             /* [in] ��Ҫ���µı������ */
                            UpdateTypeEnum opType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
                            uint64_t actionType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
                            void* data,                          /* [in] �������� */
                            uint8_t len,                         /* [in] ����ȣ�У�������� */
                            hash_table_index_t* index           /* [out] index*/
                            );

/* chengshuan Add for table operation -end- */



#endif
