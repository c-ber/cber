#ifndef __LTE_RELATE_H
#define __LTE_RELATE_H

#include <stdlib.h>

#include "semp-errno.h"
#include "semp_hydra_lte.h"
#include "lte_hash.h"
#include "cvmx_common.h"
#include "hydra_stat.h"

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
#include "umts_relate_gn_c.h"
#include "umts_relate_iups.h"
#include "umts_relate.h"
#include "usr_info_pack.h"

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
#define S6A_TABLE_SIZE    (1*TABLE_MAGNITUDE*2) //因为是256
#define S6A_TABLE_START   (S6A_TABLE_OFFSET)
#define S6A_TABLE_END     (S6A_TABLE_OFFSET+ S6A_TABLE_SIZE) 


#define ENB_MME_HANDLE_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+ \
                        S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE+S1_MME_ENOB_TABLE_SIZE+ S1_STMSI_ENOB_TABLE_SIZE+S6A_TABLE_SIZE)
#define ENB_MME_HANDLE_TABLE_SIZE   (1*TABLE_MAGNITUDE)
#define ENB_MME_HANDLE_TABLE_START  (ENB_MME_HANDLE_TABLE_OFFSET)
#define ENB_MME_HANDLE_TABLE_END    (ENB_MME_HANDLE_TABLE_OFFSET+ ENB_MME_HANDLE_TABLE_SIZE) 

#define P_TMSI_IMSI_TABLE_OFFSET  (IMSI_TABLE_SIZE+S11_MME_TABLE_SIZE+ \
                        S11_SGW_TABLE_SIZE+S1_U_TABLE_SIZE+S1_MME_ENOB_TABLE_SIZE+ S1_STMSI_ENOB_TABLE_SIZE+S6A_TABLE_SIZE+ENB_MME_HANDLE_TABLE_SIZE)
                        
#define P_TMSI_IMSI_TABLE_SIZE   (1*TABLE_MAGNITUDE)
#define P_TMSI_IMSI_TABLE_START  (P_TMSI_IMSI_TABLE_OFFSET)
#define P_TMSI_IMSI_TABLE_END    (P_TMSI_IMSI_TABLE_OFFSET+ P_TMSI_IMSI_TABLE_SIZE) 




#define LTE_TABLE_SIZE_TOTAL  (S6A_TABLE_SIZE+IMSI_TABLE_SIZE+ \
                S11_MME_TABLE_SIZE+S11_SGW_TABLE_SIZE+\
                S1_U_TABLE_SIZE+ S1_MME_ENOB_TABLE_SIZE +S1_STMSI_ENOB_TABLE_SIZE+ENB_MME_HANDLE_TABLE_SIZE+P_TMSI_IMSI_TABLE_SIZE)

#define GET_HASH_TABLE_BUCKET(_offset) ((_offset <LTE_TABLE_SIZE_TOTAL) ? (&(lte_tables[_offset])): NULL) 

/*禁止同步*/
#define HASH_CELL_NEW(_pool)         (malloc(sizeof(hash_cell_t)))
#define HASH_CELL_NEW_256(_pool)     (malloc(sizeof(hash_cell_t)*2))

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


/*add by zhengwan for 3g,begin*/
/* P-TMSI_IMSI 表项 */
typedef struct
{
    p_tmsi_t     p_tmsi;     
    imsi_t       imsi;
}__attribute__((packed)) umts_table_p_tmsi_t ;

/*add by zhengwan for 3g,end*/

#define SET_TABLE_INDEX(_hash_indexs, _bindex, _node) do{\
     (_hash_indexs)->index= _bindex; \
     (_hash_indexs)->node = _node;  \
     (_hash_indexs)->en = ENABLE;  \
     }while(0)

#define DEFAULT_BEARER_ID 5
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

    pdn_t                       pdn;

    // encryption info
    uint8_t                     alg_type;
    lte_kasme_t                 kasme;

    // sub-tables index
    hash_table_index_t          pos_dl_gtp_c;//downlink,s11-mme
    hash_table_index_t          pos_ul_gtp_c;//uplink,s11-sgw
    hash_table_index_t          pos_ul_gtp_u[MAX_NUM_BEARER];    // uplink,s1u_sgw
    hash_table_index_t          pos_dl_gtp_u[MAX_NUM_BEARER];    // downlink,s1u_enodeb
    hash_table_index_t          pos_s6a; 
    hash_table_index_t          pos_an_info; //接入点(an-access node)控制信息表项index: 相当于原LTE系统设计的s1_mme表项index(3g表示rnc_Iu表项index) 
    hash_table_index_t          pos_cn_info; //核心网控制信息表项index: 相当于原LTE系统设计的lte_table_enodeb_mme_handle表项index(3g表示sgsn_Iu表项index)

    /*add by zhengwan for 3g, begin*/
    hash_table_index_t          pos_ptmsi_imsi_map; //ptmsi_imsi映射表项index:
    rai_t                       rai;
    /*add by zhengwan for 3g, end */
    
    uint32_t                    mask;                           // indicate table entry field validity
    uint16_t                    aging;
    lte_ecgi_t                  ecgi;
    cell_id_t                   cell_id;              //3g-gn接口消息当中的IE(User Location Information)中得到
    mobile_comm_sys_t           mobile_type;//用于区分是3g还是4g
}__attribute__((packed)) lte_table_imsi_t, umts_table_imsi_t ;



#define BUFFER_IN_USE 1
#define BUFFER_NO_USE 0


#define MAX_PDN 4
/* s11-mme Table and s11-sgw table */
typedef struct
{
    ip_comm_t           control_plane_ip;/*3G:sgsn_ip或者ggsn_ip  4G:MME_ip或者sgw_ip*/
    uint32_t            teid;/*3G:sgsn或ggsn控制面teid  4G:MME或SGW控制面teid*/
    lte_imsi_t          imsi;
    uint16_t            aging;
}__attribute__((packed)) lte_table_gtpc_t, lte_table_s11_mme_t, lte_table_s11_sgw_t, umts_table_Gn_ggsn_t, umts_table_Gn_sgsn_t;
 



typedef enum
{
    RELATE_FULL_CREATE =  1<<0,
    RELATE_NEVER_CREATE = 1<<1
}S1U_TABLE_RELATE_TYPE;
/* s1u 表项  一共2,000,000 个，分上下行，分别1,000,000*/
typedef struct
{
    ip_comm_t           trans_layer_ip;     /*上行或者下行用户面隧道传输层IP*/
    uint32_t            teid; 
    ip_comm_t           user_ip;              //16字节
    lte_imsi_t          imsi;               //8字节
    lte_imei_t          imei;               //8字节
    lte_msisdn_t        msisdn;             //8字节
    extend_field_t      ex_field;           //1字节
    uint16_t            aging;              //2字节
    lte_tai_t           tai;                //5字节
    lte_guti_t          guti;               //12字节
    uint32_t            mask;               // 4 字节
    lte_ecgi_t          ecgi;               //7字节
    /*add by zhengwan for 3g,begin*/
    rai_t               rai;
    uint8_t             bearId;              //3g:naspi  4g:bearid
    cell_id_t           cell_id;           //3g-gn接口消息当中的IE(User Location Information)中得到
    /*add by zhengwan for 3g,end*/
#ifdef STAT_TEST
    uint8_t is_create_relate;     /* bit0:建立了完整关联表
                                     bit1:未建立过完整关联表 */
    uint64_t b0_relate_gtpu_num;  /* 建立了完整关联表  :关联的gtp-u报文个数 */
    uint64_t b1_relate_gtpu_num;  /* 未建立过完整关联表:关联的gtp-u报文个数 */
#endif
    mobile_comm_sys_t  mobile_type; //用于区分是3g还是4g
}__attribute__((packed)) lte_table_gtpu_t, lte_table_s1u_sgw_t, lte_table_s1u_eNB_t,umts_table_gtpu_ul_t, umts_table_gtpu_dl_t;




typedef struct
{
    uint8_t valid_key_num;//FIXME 
    rand_kasme_pair_t key[MAX_KASME_RAND_PAIR];
}lte_kasme_info_t;

typedef struct
{
    ip_comm_t hssip;
    ip_comm_t mmeip;        
    uint32_t hop_by_hop;
    lte_imsi_t  imsi; 
    uint16_t aging;
    lte_kasme_info_t nas_key;
}__attribute__((packed)) lte_table_s6a_t ;


/*s1_mme/rnc_iu表项 */
//chengshuan added 2015.10.28
typedef struct
{
    union
    {
        lte_an_info_hash_para       lte_hash_para;
        umts_an_info_hash_para      umts_hash_para;
    };
    lte_imsi_t      imsi;
    lte_rand_t      rand;
    lte_guti_t      old_guti;
    uint32_t        cipher_alg_type;    //Type of ciphering algorithm
    uint32_t        guti_flag:1;        //Indicate the table has old_guti or not
    uint32_t        timsi_flag:1;       // indicate timsi table exist or not
    uint32_t        updt_tim_flag:1;
    uint32_t        reserved:30;
    lte_tai_t       tai;
    lte_ecgi_t      ecgi;//新增的用于存放ecgi的成员
    uint32_t        mask;
    uint16_t        aging;
    /*add by zhengwan for 3g, begin*/
    p_tmsi_t        cache_ptmsi;
    rai_t           rai;
    /*add by zhengwan for 3g, end*/
    mobile_comm_sys_t       mobile_type; //用于区分是3g还是4g
}__attribute__((packed)) lte_table_s1_mme_enodeb_t, lte_table_s1_mme_t, umts_table_rnc_iu_info_t;

typedef enum
{
    USR_ENB_HANDOVER_NOT_START,
    PATH_SWITCH_REQ,
    PATH_SWITCH_REQ_ACK,
    HANDOVER_REQUIRED,
    HANDOVER_REQ,
    HANDOVER_REQ_ACK,
    HANDONER_CMD,
    HANDOVER_NOTIFY,
    HAND_SWITCH_FINISH,
}usr_eNB_handover_stat_e;


typedef struct
{
    int8_t      valid;
    ip_comm_t   enodeb_ip;
    int32_t     enodeb_ue_s1ap_id;
    lte_ecgi_t  ecgi;
    lte_tai_t   tai;
}handover_cache_info_t ;
/* 核心网控制信息 表项 (lte_table_enodeb_mme_handle/sgsn_iu)*/
typedef struct
{
    union
    {
        lte_cn_info_hash_para       lte_hash_para;
        umts_cn_info_hash_para      umts_hash_para;
    };
    imsi_t                  imsi;

    /*stat和handover_cache_info用于信令日志切换流程*/
    usr_eNB_handover_stat_e stat;//暂时放在这里扩展用
    handover_cache_info_t   handover_cache_info;//基站切换时缓存之前的信息如果失败可以恢复之前的数据
    mobile_comm_sys_t       mobile_type; //用于区分是3g还是4g
    uint16_t                aging;
    uint32_t                mask;                           // indicate table entry field validity
}__attribute__((packed)) lte_table_enodeb_mme_handle_node_t,umts_table_sgsn_Iu_info_t;

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
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s1_mme_enodeb_t, HASH_ENTRY_VALID_SIZE_256)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_gtpu_t,   HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s11_sgw_t, HASH_ENTRY_VALID_SIZE_128)
SIZE_OF_TYPE_NOT_LARGER_THAN(lte_table_s11_mme_t, HASH_ENTRY_VALID_SIZE_128)




/**************************************************************************/
/*                              函数声明块                                 */
/**************************************************************************/
mp_code_t dataplane_lte_relate_init();
mp_code_t lte_relevance_process(cvmx_wqe_t *work, mpp_control_st *mpp);
inline mp_code_t update_fteid_hash_key(ip_comm_t ip, uint32_t teid, hash_key_t *key);
inline mp_code_t update_imsi_hash_key(lte_imsi_t imsi,  hash_key_t *key);
inline mp_code_t update_s1_mme_hash_key(ip_comm_t enodeip, uint32_t enode_ueid, hash_key_t *key);
inline mp_code_t update_s_tmsi_hash_key(lte_s_tmsi_t s_tmsi, hash_key_t *key);

inline mp_code_t lte_delete_s1u_by_imsi(lte_table_imsi_t *table_imsi_e, uint8_t bearerid);

/* REF: 3GPP TS 29.060 sub-clause 7.7.53 */
#define IMEI_VALID(imei) (0xF != ((imei)[0] & 0x0F))

/* REF: 3GPP TS 29.274 sub-clause 8.3 */
#define IMSI_VALID(imsi) (0xF != ((imsi[0]) & 0x0F))

/* REF: 3GPP TS 29.274 sub-clause 8.11 */
#define MSISDN_VALID(msisdn) (0xF != ((msisdn)[0] & 0x0F))

/* REF: 3GPP TS 29.274 sub-clause 8.47 PLMN is encoded by BCD */
#define GUTI_VALID(guti) (0xF != ((guti)[0] & 0x0F))

/* REF: 3GPP TS 29.274 sub-clause 8.21.4 PLMN is encoded by BCD */
#define TAI_VALID(tai) (0xF != ((tai)[0] & 0x0F))

/* REF: 3GPP TS 29.274 sub-clause 8.21.5 PLMN is encoded by BCD */
#define ECGI_VALID(ecgi) (0xF != ((ecgi).lte_plmn[0] & 0x0F))

// check imsi field valid
#define UPDATE_IMSIT_OF(field, dst, src, len, table, action)\
    memcpy(dst, src, len);\
    action |= IMSI_T_UPDATE_##field

#define CHECK_UPDATE_IMSI_OF_IMSI(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_IMSI_VALID))\
    {\
        memcpy(table.imsi, value, sizeof(lte_imsi_t));\
        action |= IMSI_T_UPDATE_IMSI;\
    }
    
#define CHECK_UPDATE_IMSI_OF_IMEI(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_IMEI_VALID))\
    {\
        memcpy(table.imei , value, sizeof(lte_imei_t));\
        action |= IMSI_T_UPDATE_IMEI;\
    }

#define CHECK_UPDATE_IMSI_OF_MSISDN(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_MSISDN_VALID))\
    {\
        memcpy(table.msisdn , value, sizeof(lte_msisdn_t));\
        action |= IMSI_T_UPDATE_MSISDN;\
    }

#define CHECK_UPDATE_IMSI_OF_GUTI(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_GUTI_VALID))\
    {\
        memcpy(table.guti, value, sizeof(lte_guti_t));\
        action |= IMSI_T_UPDATE_GUTI;\
    }

#define CHECK_UPDATE_IMSI_OF_TAI(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_TAI_VALID))\
    {\
        memcpy(table.tai,  value,  sizeof(lte_tai_t));\
        action |= IMSI_T_UPDATE_TAI;\
    }
    
#define CHECK_UPDATE_IMSI_OF_EX_FIELD(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_EX_FIELD_VALID))\
    {\
        table.ex_field.msisdn_len = value;\
        action |= IMSI_T_UPDATE_EX_FIELD;\
    }

#define CHECK_UPDATE_IMSI_OF_POS_S6A(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_POS_S6A_VALID))\
    {\
        table.pos_s6a = value;\
        action |= IMSI_T_UPDATE_POS_S6A;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S1_MME(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_POS_AN_INFO_VALID))\
    {\
        table.pos_an_info = value;\
        action |= IMSI_T_UPDATE_POS_AN_INFO;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S11_MME(cell, table, value, action)\
    if (!(cell.mask & IMSI_T_POS_DL_GTP_C_VALID))\
    {\
        table.pos_dl_gtp_c = value;\
        action |= IMSI_T_UPDATE_POS_DL_GTP_C;\
    }
#define CHECK_UPDATE_IMSI_OF_POS_S11_SGW(cell, table, value, action)\
        if (!(cell.mask & IMSI_T_POS_UL_GTP_C_VALID))\
        {\
            table.pos_ul_gtp_c = value;\
            action |= IMSI_T_UPDATE_POS_UL_GTP_C;\
        }


// check S1U field valid
#define CHECK_UPDATE_S1U_OF_IMSI(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_IMSI_VALID))\
    {\
        memcpy(table.imsi, value, sizeof(lte_imsi_t));\
        action |= GTP_U_T_UPDATE_IMSI;\
    }
    
#define CHECK_UPDATE_S1U_OF_IMEI(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_IMEI_VALID))\
    {\
        memcpy(table.imei , value, sizeof(lte_imei_t));\
        action |= GTP_U_T_UPDATE_IMEI;\
    }

#define CHECK_UPDATE_S1U_OF_MSISDN(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_MSISDN_VALID))\
    {\
        memcpy(table.msisdn , value, sizeof(lte_msisdn_t));\
        action |= GTP_U_T_UPDATE_MSISDN;\
    }

#define CHECK_UPDATE_S1U_OF_GUTI(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_GUTI_VALID))\
    {\
        memcpy(table.guti, value, sizeof(lte_guti_t));\
        action |= GTP_U_T_UPDATE_GUTI;\
    }

#define CHECK_UPDATE_S1U_OF_TAI(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_TAI_VALID))\
    {\
        memcpy(table.tai,  value,  sizeof(lte_tai_t));\
        action |= GTP_U_T_UPDATE_TAI;\
    }
    
#define CHECK_UPDATE_S1U_OF_EX_FIELD(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_EX_FIELD_VALID))\
    {\
        table.ex_field.msisdn_len = value;\
        action |= GTP_U_T_UPDATE_EX_FIELD;\
    }

#define CHECK_UPDATE_S1U_OF_ECGI(cell, table, value, action)\
    if (!(cell.mask & GTP_U_T_ECGI_VALID))\
    {\
        memcpy(&table.ecgi,  &value,  sizeof(lte_ecgi_t));\
        action |= GTP_U_T_UPDATE_ECGI;\
    }
    

#endif

