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
#include "lte_relate_s1.h"
#include "lte_relate_s6a.h"
#include "lte_log.h"

#define LTE_GET_TABLE_PTR(_t)   (&(lte_tables_info[_t]))

#define TABLE_CELL_MAX_LEN 256       /* 目前表的cell最大长度 */

#define MAX_CIPHER_LEN 2048




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


//S1 MME ENODEB TABLE
#define S1_MME_ENOB_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE)
#define S1_MME_ENOB_TABLE_SIZE    (1*TABLE_MAGNITUDE)
#define S1_MME_ENOB_TABLE_START   (S1_MME_ENOB_TABLE_OFFSET)
#define S1_MME_ENOB_TABLE_END     (S1_MME_ENOB_TABLE_OFFSET+ S1_MME_ENOB_TABLE_SIZE)  

//S1 STMSI TABLE
#define S1_STMSI_TABLE_OFFSET    (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE+S1_MME_ENOB_TABLE_SIZE)
#define S1_STMSI_ENOB_TABLE_SIZE    (1*TABLE_MAGNITUDE)
#define S1_STMSI_ENOB_TABLE_START   (S1_STMSI_TABLE_OFFSET)
#define S1_STMSI_ENOB_TABLE_END     (S1_STMSI_TABLE_OFFSET+ S1_STMSI_ENOB_TABLE_SIZE)  


/*************************Size of 256B******************************************/
#define S6A_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+ \
                        S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE+S1_MME_ENOB_TABLE_SIZE+ S1_STMSI_ENOB_TABLE_SIZE )
#define S6A_TABLE_SIZE    (1*TABLE_MAGNITUDE)
#define S6A_TABLE_START   (S6A_TABLE_OFFSET)
#define S6A_TABLE_END     (S6A_TABLE_OFFSET+ S6A_TABLE_SIZE) 




#define LTE_HASH_TABLE_SIZE           (8*TABLE_MAGNITUDE)
#define LTE_HASH_CELL_SIZE            (1)

#define LTE_TABLE_SIZE_TOTAL  (S6A_TABLE_SIZE+IMSI_TABLE_SIZE+ \
                S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+\
                S1_U_TABLE_SIZE+ S1_MME_ENOB_TABLE_SIZE +S1_STMSI_ENOB_TABLE_SIZE)

#define GET_HASH_TABLE_BUCKET(_offset) ((_offset <LTE_TABLE_SIZE_TOTAL) ? (&(lte_tables[_offset])): NULL) 

/*禁止同步*/
#define HASH_CELL_NEW(_pool)         (malloc(sizeof(hash_cell_t)))
#define HASH_CELL_FREE(bucket, _pool, _ptr_)   do {\
        free(_ptr_ );\
        _ptr_ = NULL;\
        bucket->bucket_depth--;\
    }while(0)



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
    uint32_t updt_tim:1;           /* 计时器值更新标志 */
    uint32_t data_bak:3;
}__attribute__((packed)) extend_field_t;


#define SET_TABLE_INDEX(_hash_indexs, _bindex, _node) do{\
     (_hash_indexs)->index= _bindex; \
     (_hash_indexs)->node = _node;  \
     (_hash_indexs)->en = ENABLE;  \
     }while(0)

#define MAX_NUM_BEARER 2
typedef enum 
{
    BEAR_DEFAULT = 0,
    BEAR_DEDICATED
}LTE_BEAR_TYPE;

/* imsi 表项 */
typedef struct 
{
    // identity info
    lte_imsi_t                  imsi;
    lte_imei_t                  imei;
    lte_msisdn_t                msisdn;
    extend_field_t              ex_field;

    // location info
    lte_guti_t                  guti;
    lte_tai_t                   tai;

    lte_pdn_t                   pdn;

    // encryption info
    uint8_t                     alg_type;
    lte_kasme_t                 kasme;

    // sub-tables index
    hash_table_index_t          pos_s11_mme;
    hash_table_index_t          pos_s11_sgw;
    hash_table_index_t          pos_s1u_sgw[MAX_NUM_BEARER];    // uplink
    hash_table_index_t          pos_s1u_eNB[MAX_NUM_BEARER];    // downlink
    hash_table_index_t          pos_s6a; 
    hash_table_index_t          pos_s1_mme;      

    uint32_t                    mask;                           // indicate table entry field validity
    uint16_t                    aging;
}__attribute__((packed)) lte_table_imsi_t ;



#define BUFFER_IN_USE 1
#define BUFFER_NO_USE 0


#define MAX_PDN 4
/* s11-mme Table and s11-sgw table */
typedef struct
{
    lte_fteid_t         fteid;
    lte_imsi_t          imsi;
    uint16_t            aging;
}__attribute__((packed)) lte_table_s11_mme_t, lte_table_s11_sgw_t ;




typedef enum
{
    RELATE_FULL_CREATE =  1<<0,
    RELATE_NEVER_CREATE = 1<<1
}S1U_TABLE_RELATE_TYPE;
/* s1u 表项  一共2,000,000 个，分上下行，分别1,000,000*/
typedef struct
{
    lte_fteid_t         fteid;              //8字节
    uint32_t            ue_ip;              //4字节
    lte_imsi_t          imsi;               //8字节
    lte_imei_t          imei;               //8字节
    lte_msisdn_t        msisdn;             //8字节
    extend_field_t      ex_field;           //1字节
    uint16_t            aging;              //2字节
    lte_tai_t           tai;                //5字节
    lte_guti_t          guti;               //12字节
    uint32_t            mask;               // 4 字节

#ifdef STAT_TEST
    uint8_t is_create_relate;     /* bit0:建立了完整关联表
                                     bit1:未建立过完整关联表 */
    uint64_t b0_relate_gtpu_num;  /* 建立了完整关联表  :关联的gtp-u报文个数 */
    uint64_t b1_relate_gtpu_num;  /* 未建立过完整关联表:关联的gtp-u报文个数 */
#endif

}__attribute__((packed)) lte_table_s1u_t, lte_table_s1u_sgw_t, lte_table_s1u_eNB_t;




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
    lte_tai_t       tai;
    uint32_t        mask;
    uint16_t        aging;
}__attribute__((packed)) lte_table_s1_mme_enodeb_t, lte_table_s1_mme_t ;


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
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s6a_t, HASH_ENTRY_VALID_SIZE_256)    
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_imsi_t, HASH_ENTRY_VALID_SIZE_256)
//SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_tunnel_t, HASH_ENTRY_VALID_SIZE)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s1_mme_enodeb_t, HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s1u_t,   HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s11_sgw_t, HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s11_mme_t, HASH_ENTRY_VALID_SIZE_128)




/**************************************************************************/
/*                              函数声明块                                 */
/**************************************************************************/
mp_code_t dataplane_lte_relate_init();
mp_code_t lte_relevance_process(cvmx_wqe_t *work, mpp_control_st *mpp);
inline mp_code_t update_fteid_hash_key(uint32_t ip, uint32_t teid, hash_key_t *key);
inline mp_code_t update_imsi_hash_key(lte_imsi_t imsi,  hash_key_t *key);
inline mp_code_t update_s1_mme_hash_key(uint32_t enodeip, uint32_t enode_ueid, hash_key_t *key);
inline mp_code_t update_s_tmsi_hash_key(lte_s_tmsi_t s_tmsi, hash_key_t *key);

inline mp_code_t lte_delete_s1u_by_imsi(lte_table_imsi_t *table_imsi_e, uint8_t bearerid);



// check imsi field valid
#define UPDATE_IMSIT_OF(field, dst, src, len, table, action)\
    memcpy(dst, src, len);\
    action |= IMSIT_UPDATE_##field

#define CHECK_UPDATE_IMSI_OF_IMSI(cell, table, value, action)\
    if (!(cell.mask & IMSIT_IMSI_VALID))\
    {\
        memcpy(table.imsi, value, sizeof(lte_imsi_t));\
        action |= IMSIT_UPDATE_IMSI;\
    }
    
#define CHECK_UPDATE_IMSI_OF_IMEI(cell, table, value, action)\
    if (!(cell.mask & IMSIT_IMEI_VALID))\
    {\
        memcpy(table.imei , value, sizeof(lte_imei_t));\
        action |= IMSIT_UPDATE_IMEI;\
    }

#define CHECK_UPDATE_IMSI_OF_MSISDN(cell, table, value, action)\
    if (!(cell.mask & IMSIT_MSISDN_VALID))\
    {\
        memcpy(table.msisdn , value, sizeof(lte_msisdn_t));\
        action |= IMSIT_UPDATE_MSISDN;\
    }

#define CHECK_UPDATE_IMSI_OF_GUTI(cell, table, value, action)\
    if (!(cell.mask & IMSIT_GUTI_VALID))\
    {\
        memcpy(table.guti, value, sizeof(lte_guti_t));\
        action |= IMSIT_UPDATE_GUTI;\
    }

#define CHECK_UPDATE_IMSI_OF_TAI(cell, table, value, action)\
    if (!(cell.mask & IMSIT_TAI_VALID))\
    {\
        memcpy(table.tai,  value,  sizeof(lte_tai_t));\
        action |= IMSIT_UPDATE_TAI;\
    }
    
#define CHECK_UPDATE_IMSI_OF_EX_FIELD(cell, table, value, action)\
    if (!(cell.mask & IMSIT_EX_FIELD_VALID))\
    {\
        table.ex_field.msisdn_len = value;\
        action |= IMSIT_UPDATE_EX_FIELD;\
    }

#define CHECK_UPDATE_IMSI_OF_POS_S6A(cell, table, value, action)\
    if (!(cell.mask & IMSIT_POS_S6A_VALID))\
    {\
        table.pos_s6a = value;\
        action |= IMSIT_UPDATE_POS_S6A;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S1_MME(cell, table, value, action)\
    if (!(cell.mask & IMSIT_POS_S1_MME_VALID))\
    {\
        table.pos_s1_mme = value;\
        action |= IMSIT_UPDATE_POS_S1_MME;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S11_MME(cell, table, value, action)\
    if (!(cell.mask & IMSIT_POS_S11_MME_VALID))\
    {\
        table.pos_s11_mme = value;\
        action |= IMSIT_UPDATE_POS_S11_MME;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S11_SGW(cell, table, value, action)\
        if (!(cell.mask & IMSIT_POS_S11_SGW_VALID))\
        {\
            table.pos_s11_sgw = value;\
            action |= IMSIT_UPDATE_POS_S11_SGW;\
        }


// check S1U field valid
#define CHECK_UPDATE_S1U_OF_IMSI(cell, table, value, action)\
    if (!(cell.mask & S1UT_IMSI_VALID))\
    {\
        memcpy(table.imsi, value, sizeof(lte_imsi_t));\
        action |= S1UT_UPDATE_IMSI;\
    }
    
#define CHECK_UPDATE_S1U_OF_IMEI(cell, table, value, action)\
    if (!(cell.mask & S1UT_IMEI_VALID))\
    {\
        memcpy(table.imei , value, sizeof(lte_imei_t));\
        action |= S1UT_UPDATE_IMEI;\
    }

#define CHECK_UPDATE_S1U_OF_MSISDN(cell, table, value, action)\
    if (!(cell.mask & S1UT_MSISDN_VALID))\
    {\
        memcpy(table.msisdn , value, sizeof(lte_msisdn_t));\
        action |= S1UT_UPDATE_MSISDN;\
    }

#define CHECK_UPDATE_S1U_OF_GUTI(cell, table, value, action)\
    if (!(cell.mask & S1UT_GUTI_VALID))\
    {\
        memcpy(table.guti, value, sizeof(lte_guti_t));\
        action |= S1UT_UPDATE_GUTI;\
    }

#define CHECK_UPDATE_S1U_OF_TAI(cell, table, value, action)\
    if (!(cell.mask & S1UT_TAI_VALID))\
    {\
        memcpy(table.tai,  value,  sizeof(lte_tai_t));\
        action |= S1UT_UPDATE_TAI;\
    }
    
#define CHECK_UPDATE_S1U_OF_EX_FIELD(cell, table, value, action)\
    if (!(cell.mask & S1UT_EX_FIELD_VALID))\
    {\
        table.ex_field.msisdn_len = value;\
        action |= S1UT_UPDATE_EX_FIELD;\
    }
    
#endif

