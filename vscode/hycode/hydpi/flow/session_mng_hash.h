#ifndef __SESSION_MNG_HASH_H
#define __SESSION_MNG_HASH_H

#include "pub_header.h"
#include "list.h"
#include "table_aging.h"

/**************************************************************************************************
                                        宏定义
**************************************************************************************************/

#define AGING_INIT_TIME       15    /* 计数器初始值<范围:1 到 65535> */
#define AGING_SCAN_INTE       20     /* 老化功能扫描默认间隔时间 */

#define SESSION_TABLE_SIZE      1000000

#define HASH_TAB_UPDTAE_NONE    0   //不更新hash表项的任何内容
#define TABLE_CELL_MAX_LEN 128       /* 目前表的cell最大长度 */


#define FLOW_PROCE_THREAD_MAX_NUM 48

#define DPI_MIN(a, b) ( ( (a) > (b) ) ? (b) : (a) )
#define DPI_MAX(a, b) ( ( (a) < (b) ) ? (b) : (a) )

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif

/*******************  数据处理相关的宏  **********************************/

#define BYTE_GET_UINT64(n) (sizeof(uint64_t)*(n))   /* 获取以uint64为单位的长度值的字节数 */

#define BIT_GET_LOW_ASCII_4(src)    ( (src) &  0x0f ) + 0x30 )
#define BIT_GET_HIGH_ASCII_4(src)   ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_ASCII_4(dst, src)    ( (dst) = ( (src) &  0x0f ) + 0x30 )
#define BIT_HIGH_ASCII_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) + 0x30 )

#define BIT_LOW_4(dst, src)    ( (dst) = ( (src) &  0x0f ) )
#define BIT_HIGH_4(dst, src)   ( (dst) = ( (src) >> 0x04 ) )

#define COMBINE_BYTE(low4bit, high4bit,dst) (dst = ((low4bit)&0x0f)|((high4bit)<<4))
#define S_BIT_LOW_4(src)   ( (src) &  0x0f  )
#define S_BIT_HIGH_4(src)   ( (src) >> 0x04  )

/*获取一个值在存储地址中的第n个字节[1~4]*/
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


/* 将通用ip结构转为key值 */
#define IP_TRASNFER_TO_KEY(ptr, comm_ip)  \
do{                 \
    *ptr = comm_ip.version; \
    ptr++; \
    memcpy(ptr,  comm_ip.ip.u64, sizeof(comm_ip.ip.u64)); \
    ptr += 16;\
}while(0)


/******************* end  ***********************************************/
/**************************************************************************************************
                                        枚举定义
**************************************************************************************************/

/*更新表项内容的操作类型*/
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

/* 表名 */
typedef enum
{
    TABLE_SESSION = 0,
    TABLE_MAX
}table_name_t;


/*s1u表项的更新操作类型定义，每一位对应更新一个元素*/
typedef enum tagSessionTableUpdateAction
{
    SESSION_T_UPDATE_5TUPLE     = 0x0001,           //[[CN]] 更新5tuple                 [[CN]]
    SESSION_T_UPDATE_COUNT      = 0x0002,           //[[CN]] 更新count                  [[CN]]
    SESSION_T_UPDATE_APP_ID     = 0x0004,           //[[CN]] 更新app id                 [[CN]]
    SESSION_T_UPDATE_MASK       = 0x0008,          //[[CN]] 更新mask                   [[CN]]
    SESSION_T_UPDATE_AGING      = 0x0010,          //[[CN]] 更新aging                  [[CN]]
    SESSION_T_UPDATE_THREAD_ID  = 0x0020          //[[CN]] 更新thread id                [[CN]]
}SessionTableUpdateActionEnum;



typedef enum tagSessionTableContentValidMask
{
    SESSION_T_5TUPLE_VALID                  = 0x0001,           //[[CN]] 5tuple有效         [[CN]]
    SESSION_T_COUNT_VALID                   = 0x0002,           //[[CN]] count有效           [[CN]]
    SESSION_T_APP_ID_VALID                  = 0x0004,           //[[CN]] app id 有效        [[CN]]
    SESSION_T_AGING_VALID                   = 0x0008,           //[[CN]] aging有效        [[CN]]
    SESSION_T_THREAD_ID_VALID               = 0x0010           //[[CN]] thread id有效        [[CN]]
}SessionTableContentValidMaskEnum;
/**************************************************************************************************
                                        结构体定义
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
    pthread_mutex_t lock;           /* 操作锁 */
    uint32_t index;                 /* 未使用 */
}hash_bucket_t;//32B

typedef struct
{
    char            name[64];               /* 按表名来命名*/
    
    hash_bucket_t * first_bucket;           /* 指向第一个桶的指针 */
    uint32_t        max_bucket;             /* 桶子数最大值，目前取值有1千万,2千万 */
    
    uint16_t        cell_size;              /* cell空间大小 */
    dpi_code_t (*hash)(hash_key_t *key, uint32_t *index);
    dpi_code_t (*compare)(void *src, void*dst, hash_cmp_em_t *cmp); /*0:equals 1:not equals*/
    dpi_code_t (*update)(void *src, void*dst, uint64_t action);
    dpi_code_t (*get_bucket)(uint32_t *buck);
    uint16_t (*set_timer)(void *src, timer_opera_t opera, uint16_t value);
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
    dpi_code_t (*update)(void *src, void*dst); 
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

typedef struct
{
    dpi_5tuple_t        ip_5tuple;     /*ip五元组*/
    uint8_t             count;        /*收到同一个流报文的计数器*/
    uint16_t            app_id;       /*应用ID*/
    uint16_t            mask;         /*参数有效掩码*/    
    uint16_t            aging;
    uint8_t             thread_id;     /*流处理进程或线程ID*/
}__attribute__((packed))dpi_table_session_mng_t;


/**************************************************************************************************
                                        全局变量声明
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
                                        函数声明
**************************************************************************************************/
dpi_code_t create_update_table_by_hash(
        table_name_t table_type,             /* [in] 需要更新的表的类型 */
        UpdateTypeEnum opType,               /* [in] 操作类型，指定需要更新的表项内容 */
        uint64_t actionType,               /* [in] 操作类型，指定需要更新的表项内容 */
        void* data,                          /* [in] 表项内容 */
        uint8_t len,                         /* [in] 表项长度，校验类型用 */
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
