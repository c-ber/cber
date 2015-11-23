#ifndef __LTE_RELATE_H
#define __LTE_RELATE_H

#include <stdlib.h>

#include "semp-errno.h"
#include "semp_hydra_lte.h"
#include "lte_hash.h"
#include "cvmx_common.h"
#include "hydra_stat.h"
#include "packet_gtpv2c.h"
#include "packet_entry.h"
#include "hash_alg.h"
#include "string.h"

#include <arpa/inet.h>
#include "semp_hydra_lte.h"
#include "lte_hash.h"
#include "relate_aging.h"
#include "lte_relate_s11.h"


#define LTE_GET_TABLE_PTR(_t)   (&(lte_tables_info[_t]))

#define TABLE_CELL_MAX_LEN 256       /* 目前表的cell最大长度 */

/*************************Size of 256B******************************************/
#define S6A_TABLE_OFFSET  0
#define S6A_TABLE_SIZE    1000000
#define S6A_TABLE_START   (S6A_TABLE_OFFSET)
#define S6A_TABLE_END     (S6A_TABLE_OFFSET+ S6A_TABLE_SIZE) 


//#define IMSI_TABLE  0
#define IMSI_TABLE_OFFSET   0
#define IMSI_TABLE_START   (IMSI_TABLE_OFFSET)
#define IMSI_TABLE_END     (IMSI_TABLE_OFFSET+IMSI_TABLE_SIZE)  



/*******************************************************************/

//#define S11_MME_TABLE  1
#define S11_MME_TABLE_OFFSET  (IMSI_TABLE_SIZE)
#define S11_MME_TABLE_START   (S11_MME_TABLE_OFFSET)
#define S11_MME_TABLE_END     (S11_MME_TABLE_OFFSET+S11_MME_TABLE_SIZE)  


//#define S11_SGW_TABLE  2
#define S11_SGW_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE)
#define S11_SGW_TABLE_START   (S11_SGW_TABLE_OFFSET)
#define S11_SGW_TABLE_END     (S11_SGW_TABLE_OFFSET+ S11_SGW_TABLE_SIZE)  


//#define S1_U_TABLE  3
#define S1_U_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE)

#define S1_U_TABLE_START   (S1_U_TABLE_OFFSET)
#define S1_U_TABLE_END     (S1_U_TABLE_OFFSET+ S1_U_TABLE_SIZE)  


#define S1_MME_ENOB_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE)
#define S1_MME_ENOB_TABLE_SIZE    10000000
#define S1_MME_ENOB_TABLE_START   (S1_MME_ENOB_TABLE_OFFSET)
#define S1_MME_ENOB_TABLE_END     (S1_MME_ENOB_TABLE_OFFSET+ S1_MME_ENOB_TABLE_SIZE)  

#define LTE_HASH_TABLE_SIZE           (5*TABLE_MAGNITUDE)
#define LTE_HASH_CELL_NUMBER          (5*TABLE_MAGNITUDE)
#define LTE_HASH_CELL_SIZE            (1)

#define LTE_TABLE_SIZE_TOTAL  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE)

#define GET_HASH_TABLE_BUCKET(_offset) ((_offset <LTE_TABLE_SIZE_TOTAL) ? (&(lte_tables[_offset])): NULL) 


#define HASH_CELL_NEW(_pool)         (malloc(sizeof(hash_cell_t)))
#define HASH_CELL_FREE(_pool, _ptr_)   do {free(_ptr_ ); _ptr_ = NULL;}while(0)



#define CHECK_PTR_NULL(_ptr)  do{ \
    if( cvmx_unlikely(NULL == _ptr) )\
    {\
        printf("ALERT: <F.%s L.%d> %s unexpect NULL\n", __func__, __LINE__ , #_ptr);\
        return MP_E_MEMORY;\
    }\
}while(0)


#define SET_MSG_SWITCH(_msg, _sw) \
    do{ \
        if (cvmx_likely( (_msg >= 0)  && (_msg < (int)GTP_MSG_MAX))) \
            g_msg_module_switch[_msg] = _sw; \
    }while(0)

#define GET_MSG_SWITCH_RETURN(_msg) \
do{ \
    if (cvmx_likely( ( _msg >= 0) && (_msg < GTP_MSG_MAX))) \
    {\
        if(g_msg_module_switch[_msg] == GTPC_DISABLE)\
        {\
            return MP_OK;\
        }\
    }\
}while(0)

extern CVMX_SHARED gtpc_switch_t g_msg_module_switch[GTP_MSG_MAX];

typedef union
{
    uint32_t  bucket_index;
    struct
    {
        uint32_t en:1;
        uint32_t bearid:4;
        uint32_t resv:3;
        uint32_t index:24;
    };
}hash_bucket_idx_t;

/* 用于位域扩展字段 */
typedef struct
{
    uint32_t msisdn_len:4;
    uint32_t updt_tim:1;           //计时器值更新标志
    uint32_t data_bak:3;
}__attribute__((packed)) extend_field_t;


#define SET_TABLE_INDEX(_hash_indexs, _bindex, _node) do{\
     (_hash_indexs)->index= _bindex; \
     (_hash_indexs)->node = _node;  \
     (_hash_indexs)->en = ENABLE;  \
     }while(0)

/* imsi 表项 */
typedef struct 
{
    lte_imsi_t      imsi;
    lte_imei_t      imei;
    lte_msisdn_t    msisdn;
    
    hash_table_index_t         pos_mme;
    hash_table_index_t         pos_sgw;
    hash_table_index_t         pos_s6a; 
    hash_table_index_t         s1_mme;      //s1_mme table index, chengshuan added 2015.10.28

    lte_pdn_t       pdn;
    uint16_t        aging;
    extend_field_t  ex_field;
    lte_guti_t      guti;                   //GUTI value, chengshuan added 2015.10.28
    lte_tai_t       tai;                    //TAI value, chengshuan added 2015.10.28
}__attribute__((packed)) lte_table_imsi_t ;



#define BUFFER_IN_USE 1
#define BUFFER_NO_USE 0


#define MAX_PDN 4
/* s11-mme 表项 */
typedef struct
{
    lte_fteid_t         fteid;
    hash_table_index_t  pos_sgw;
    hash_table_index_t  pos_imsi;
    hash_table_index_t  pos_s1u[MAX_PDN];
    uint32_t            newest_seq;
    uint16_t            aging;
}__attribute__((packed)) lte_table_ctrl_mme_t ;


/* s11-sgw 表项 */
typedef struct
{
    lte_fteid_t         fteid;              //16字节
    hash_table_index_t  pos_mme;            //12字节
    hash_table_index_t  pos_imsi;           //12字节
    hash_table_index_t  pos_s1u[MAX_PDN];   //12*4 =48字节
    uint32_t            newest_seq;         //4字节
    uint16_t            aging;              //1字节      累计93字节
}__attribute__((packed)) lte_table_ctrl_sgw_t ;


/* s1u 表项  一共2,000,000 个，分上下行，分别1,000,000*/
typedef struct
{
    lte_fteid_t         fteid;              //16字节
    uint32_t            ue_ip;              //4字节
    uint8_t             bearerid;           //1字节
    lte_imsi_t          imsi;               //8字节
    lte_imei_t          imei;               //8字节
    lte_msisdn_t        msisdn;             //8字节
    extend_field_t      ex_field;           //1字节
    uint16_t            aging;              //1字节
    lte_tai_t           tai;                //5字节
    lte_guti_t          guti;               //12字节  累计64字节
}__attribute__((packed)) lte_table_s1u_t ;




typedef struct
{
    uint8_t valid_key_num;//FIXME 
    rand_kasme_pair_t key[MAX_KASME_RAND_PAIR];
}lte_kasme_info_t;

typedef struct
{
    uint32_t hssip;
    uint32_t mmeip;        
    uint32_t hop_by_hop;
    lte_imsi_t  imsi; 
    uint16_t aging;
    lte_kasme_info_t nas_key;
}__attribute__((packed)) lte_table_s6a_t ;


/* s1 mme 表项 */
//chengshuan added 2015.10.28
typedef struct
{
    uint32_t        enode_ip;
    uint32_t        enode_ue_s1ap_id;
    lte_imsi_t      imsi;
    uint32_t        mme_ip;
    uint64_t        mme_ue_s1ap_id;
    lte_rand_t      rand;
    lte_guti_t      old_guti;
    uint32_t        cipher_alg_type;    //Type of ciphering algorithm
    uint32_t        guti_flag:1;        //Indicate the table has old_guti or not
    uint32_t        reserved:31;
}__attribute__((packed)) lte_table_s1_mme_enodeb_t ;


/* s_tmsi 表项 */
typedef struct
{
    lte_s_tmsi_t     s_tmsi;       //GUTI总共11个字节，MME code是倒数第五个字节，GUTI中的最后4个字节为M_TMSI，MME code和GUTI一起组成S-TMSI
    lte_imsi_t      imsi;
}__attribute__((packed)) lte_table_s_tmsi_t ;


typedef hash_cell_t lte_hash_cell_t; 


/****************************Check struct Size******************************/
#define    SIZE_OF_TYPE_NOT_LARGER_THAN(type, size) \
static inline char size_of_##type##_not_larger_than_##size() \
{ \
    char __dummy1[size - sizeof(type)]; \
    return __dummy1[-1]; \
}


//check The entry if large Then size
//SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s6a_t, HASH_ENTRY_VALID_SIZE_256)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_imsi_t, HASH_ENTRY_VALID_SIZE_256)
//SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_tunnel_t, HASH_ENTRY_VALID_SIZE)
//SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s1_mme_enodeb_t, HASH_ENTRY_VALID_SIZE_256)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s1u_t,   HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_ctrl_sgw_t, HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_ctrl_mme_t, HASH_ENTRY_VALID_SIZE_128)




/**************************************************************************/
/*                              函数声明块                                 */
/**************************************************************************/
mp_code_t dataplane_lte_relate_init();
mp_code_t lte_relevance_process(cvmx_wqe_t *work, mpp_control_st *mpp);
inline void update_fteid_hash_key(uint32_t ip, uint32_t teid, hash_key_t *key);
inline void update_imsi_hash_key(lte_imsi_t imsi,  hash_key_t *key);
inline mp_code_t lte_mme_delete_s1u(lte_table_ctrl_mme_t*table_mme_e, uint8_t bearerid);
inline mp_code_t lte_sgw_delete_s1u(lte_table_ctrl_sgw_t*table_sgw_e, uint8_t bearerid);

#endif

