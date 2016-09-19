#ifndef __SESSION_MNG_HASH_H
#define __SESSION_MNG_HASH_H

#include "pub_header.h"
#include "list.h"
#include "table_aging.h"

/**************************************************************************************************
                                        �궨��
**************************************************************************************************/

#define AGING_INIT_TIME       15    /* ��������ʼֵ<��Χ:1 �� 65535> */
#define AGING_SCAN_INTE       20     /* �ϻ�����ɨ��Ĭ�ϼ��ʱ�� */

#define SESSION_TABLE_SIZE      1000000

#define HASH_TAB_UPDTAE_NONE    0   //������hash������κ�����
#define TABLE_CELL_MAX_LEN 128       /* Ŀǰ���cell��󳤶� */


#define FLOW_PROCE_THREAD_MAX_NUM 48

#define DPI_MIN(a, b) ( ( (a) > (b) ) ? (b) : (a) )
#define DPI_MAX(a, b) ( ( (a) < (b) ) ? (b) : (a) )

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif

/*******************  ���ݴ�����صĺ�  **********************************/

#define BYTE_GET_UINT64(n) (sizeof(uint64_t)*(n))   /* ��ȡ��uint64Ϊ��λ�ĳ���ֵ���ֽ��� */

#define BIT_GET_LOW_ASCII_4(src)    ( (src) &  0x0f ) + 0x30 )
#define BIT_GET_HIGH_ASCII_4(src)   ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_ASCII_4(dst, src)    ( (dst) = ( (src) &  0x0f ) + 0x30 )
#define BIT_HIGH_ASCII_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_4(dst, src)    ( (dst) = ( (src) &  0x0f ) )
#define BIT_HIGH_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

/*��ȡһ��ֵ�ڴ洢��ַ�еĵ�n���ֽ�[1~4]*/
#define BYTE_GET(dst, src, n)  ((dst) = ((src) >> (((n)-1)*8) ) & 0xff )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )


#define GET_BUCKET_OFFSET(_hasht, _bucket)  ((_bucket-_hasht->first_bucket)/(sizeof(hash_bucket_t)))

#define NODE2ENTRY(_node, _type)    ( (_type*) (((lte_hash_cell_t *)list_entry(_node, lte_hash_cell_t, node))->entry))
        

#define DPI_HASH_TABLE_LOCK(_hash_table)  do{ \
    pthread_mutex_lock(&((_hash_table)->lock));  \
    }while(0)
    
#define DPI_HASH_TABLE_UNLOCK(_hash_table)  do{\
    pthread_mutex_unlock(&((_hash_table)->lock));  \
}while(0)


/* ��ͨ��ip�ṹתΪkeyֵ */
#define IP_TRASNFER_TO_KEY(ptr, comm_ip)  \
do{                 \
    *ptr = comm_ip.version; \
    ptr++; \
    memcpy(ptr,  comm_ip.ip.u64, sizeof(comm_ip.ip.u64)); \
    ptr += 16;\
}while(0)


/******************* end  ***********************************************/
/**************************************************************************************************
                                        ö�ٶ���
**************************************************************************************************/

/*���±������ݵĲ�������*/
typedef enum
{
    CREATE_TABLE,
    UPDATE_TABLE
}UpdateTypeEnum;

typedef enum
{
    HASH_CMP_DIFF,
    HASH_CMP_SAME,
}hash_cmp_em_t;

/* ���� */
typedef enum
{
    TABLE_SESSION = 0,
    TABLE_MAX
}table_name_t;


/*s1u����ĸ��²������Ͷ��壬ÿһλ��Ӧ����һ��Ԫ��*/
typedef enum tagSessionTableUpdateAction
{
    SESSION_T_UPDATE_5TUPLE     = 0x0001,           //[[CN]] ����5tuple                 [[CN]]
    SESSION_T_UPDATE_COUNT      = 0x0002,           //[[CN]] ����count                  [[CN]]
    SESSION_T_UPDATE_APP_ID     = 0x0004,           //[[CN]] ����app id                 [[CN]]
    SESSION_T_UPDATE_MASK       = 0x0008,          //[[CN]] ����mask                   [[CN]]
    SESSION_T_UPDATE_AGING      = 0x0010,          //[[CN]] ����aging                  [[CN]]
    SESSION_T_UPDATE_THREAD_ID  = 0x0020          //[[CN]] ����thread id                [[CN]]
}SessionTableUpdateActionEnum;



typedef enum tagSessionTableContentValidMask
{
    SESSION_T_5TUPLE_VALID                  = 0x0001,           //[[CN]] 5tuple��Ч         [[CN]]
    SESSION_T_COUNT_VALID                   = 0x0002,           //[[CN]] count��Ч           [[CN]]
    SESSION_T_APP_ID_VALID                  = 0x0004,           //[[CN]] app id ��Ч        [[CN]]
    SESSION_T_AGING_VALID                   = 0x0008,           //[[CN]] aging��Ч        [[CN]]
    SESSION_T_THREAD_ID_VALID               = 0x0010           //[[CN]] thread id��Ч        [[CN]]
}SessionTableContentValidMaskEnum;
/**************************************************************************************************
                                        �ṹ�嶨��
**************************************************************************************************/

typedef struct
{     
    ip_comm_t       sip;
    ip_comm_t       dip;
    uint16_t        src_port;
    uint16_t        dst_port;
    uint8_t         protocol;
}__attribute__((packed)) dpi_5tuple_t;

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
    pthread_mutex_t lock;           /* ������ */
    uint32_t index;                 /* δʹ�� */
}hash_bucket_t;//32B

typedef struct
{
    char            name[64];               /* ������������*/
    
    hash_bucket_t * first_bucket;           /* ָ���һ��Ͱ��ָ�� */
    uint32_t        max_bucket;             /* Ͱ�������ֵ��Ŀǰȡֵ��1ǧ��,2ǧ�� */
    
    uint16_t        cell_size;              /* cell�ռ��С */
    dpi_code_t (*hash)(hash_key_t *key, uint32_t *index);
    dpi_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    dpi_code_t (*update)(void *src, void*dst, uint64_t action);
    dpi_code_t (*get_bucket)(uint32_t *buck);
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
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
    dpi_code_t (*update)(void *src, void*dst); 
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

typedef struct
{
    dpi_5tuple_t        ip_5tuple;     /*ip��Ԫ��*/
    uint8_t             count;        /*�յ�ͬһ�������ĵļ�����*/
    uint16_t            app_id;       /*Ӧ��ID*/
    uint16_t            mask;         /*������Ч����*/    
    uint16_t            aging;
    uint8_t             thread_id;     /*��������̻��߳�ID*/
}__attribute__((packed))dpi_table_session_mng_t;


/**************************************************************************************************
                                        ȫ�ֱ�������
**************************************************************************************************/
extern hash_table_t             DPI_tables_info[TABLE_MAX];
extern hash_table_t             *g_dpi_table_info;
#define DPI_GET_TABLE_PTR(_t)   (g_dpi_table_info+_t)

extern uint8_t             flow_process_thread_id;
extern pthread_mutex_t     g_get_thread_id_lock;

#if 1
/* CRC */

#define CVMX_MT_CRC_POLYNOMIAL(val)         asm volatile ("dmtc2 %[rt],0x4200" : : [rt] "d" (val))
#define CVMX_MT_CRC_IV(val)                 asm volatile ("dmtc2 %[rt],0x0201" : : [rt] "d" (val))
#define CVMX_MT_CRC_LEN(val)                asm volatile ("dmtc2 %[rt],0x1202" : : [rt] "d" (val))
#define CVMX_MT_CRC_BYTE(val)               asm volatile ("dmtc2 %[rt],0x0204" : : [rt] "d" (val))
#define CVMX_MT_CRC_HALF(val)               asm volatile ("dmtc2 %[rt],0x0205" : : [rt] "d" (val))
#define CVMX_MT_CRC_WORD(val)               asm volatile ("dmtc2 %[rt],0x0206" : : [rt] "d" (val))
#define CVMX_MT_CRC_DWORD(val)              asm volatile ("dmtc2 %[rt],0x1207" : : [rt] "d" (val))
#define CVMX_MT_CRC_VAR(val)                asm volatile ("dmtc2 %[rt],0x1208" : : [rt] "d" (val))
#define CVMX_MT_CRC_POLYNOMIAL_REFLECT(val) asm volatile ("dmtc2 %[rt],0x4210" : : [rt] "d" (val))
#define CVMX_MT_CRC_IV_REFLECT(val)         asm volatile ("dmtc2 %[rt],0x0211" : : [rt] "d" (val))
#define CVMX_MT_CRC_BYTE_REFLECT(val)       asm volatile ("dmtc2 %[rt],0x0214" : : [rt] "d" (val))
#define CVMX_MT_CRC_HALF_REFLECT(val)       asm volatile ("dmtc2 %[rt],0x0215" : : [rt] "d" (val))
#define CVMX_MT_CRC_WORD_REFLECT(val)       asm volatile ("dmtc2 %[rt],0x0216" : : [rt] "d" (val))
#define CVMX_MT_CRC_DWORD_REFLECT(val)      asm volatile ("dmtc2 %[rt],0x1217" : : [rt] "d" (val))
#define CVMX_MT_CRC_VAR_REFLECT(val)        asm volatile ("dmtc2 %[rt],0x1218" : : [rt] "d" (val))

#define CVMX_MF_CRC_POLYNOMIAL(val)         asm volatile ("dmfc2 %[rt],0x0200" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_IV(val)                 asm volatile ("dmfc2 %[rt],0x0201" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_IV_REFLECT(val)         asm volatile ("dmfc2 %[rt],0x0203" : [rt] "=d" (val) : )
#define CVMX_MF_CRC_LEN(val)                asm volatile ("dmfc2 %[rt],0x0202" : [rt] "=d" (val) : )

#endif


/**************************************************************************************************
                                        ��������
**************************************************************************************************/
dpi_code_t create_update_table_by_hash(
        table_name_t table_type,             /* [in] ��Ҫ���µı������ */
        UpdateTypeEnum opType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
        uint64_t actionType,               /* [in] �������ͣ�ָ����Ҫ���µı������� */
        void* data,                          /* [in] �������� */
        uint8_t len,                         /* [in] ����ȣ�У�������� */
        hash_table_index_t* index          /* [out] index*/
        );

dpi_code_t hash_cell_get_by_hash( hash_table_t *table,
        hash_key_t   *key,
        void         *dst_data,
        uint32_t      dst_len );

unsigned int semp_hash_u64_data(uint64_t *data,uint32_t n,uint32_t mask);
dpi_code_t update_session_hash_key(dpi_5tuple_t ip_5tuple,  hash_key_t *key);

dpi_code_t dataplane_session_mng_init(void);

#endif
