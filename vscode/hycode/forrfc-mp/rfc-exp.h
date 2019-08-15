#ifndef _RFCPHASE_H_
#define _RFCPHASE_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define _MDU_       1
#define ADDR_MDU_TO_MD(addr)    (addr)

#define MPP_GET_MDU_VAR(addr)           (addr##_mdu)
#define MPP_GET_MD_VAR(addr)            (addr##_md)

#ifdef _MDU_
#define MPP_GET_LOGIC_VAR(addr)         (addr##_mdu)
#endif

#ifdef _MD_
#define MPP_GET_LOGIC_VAR(addr)         (addr##_md)
#endif

#define MPP_ASSIGN_VAR(addr,type,var)   { \
        MPP_GET_MDU_VAR(addr) = (type)(var); \
        MPP_GET_MD_VAR(addr) = (type)ADDR_MDU_TO_MD(var); \
    }

#define MPP_ASSIGN_ARR(addr,arr,type,var)   { \
        MPP_GET_MDU_VAR(addr)##arr = (type)(var); \
        MPP_GET_MD_VAR(addr)##arr = (type)ADDR_MDU_TO_MD(var); \
    }

union unIP
{
    uint8_t ucIP[4];
    uint32_t uiIP;
};

#define MC_PRINT    printf

#define RFC4_DEBUG              1
#define _RFC_DEBUG_ 1
#define RFCTRUE                 1
#define RFCFALSE                0
#define SUCCESS                 1

#define LENGTH32                32              //length of unsigned int
#ifdef __WIN32__
#define LENGTH64                32              //length of DWORD
#else
#define LENGTH64                64
#endif


#define MPP_MAX_PHASE0_CELL (65536)

#define ACL_ENABLE      2
#define ACL_DISABLE     1
#define ACL_UNSET       0

#define ACL_ERROR       (XEACLERR)
#define ACL_LIST_ERROR  (XEACLLISTERR)
#define ACL_CES_ERROR   (XEACLCESERR)
#define ACL_CELL_ERROR  (XEACLCELLERR)
#define ACL_OK          (XSUCCESS)

#define ACL_SYNC        1
#define ACL_NOSYNC      0

#define ACL_CHANGED     1
#define ACL_NOT_CHANGED 0

#define ACL_NEW         1
#define ACL_NOT_NEW     0

#define ACL_MAX_CELL        100



#define IIF_GROUP_NUM       MAX_GROUP_NUMBER
#define VIRTUAL_GROUP_NUM   IIF_GROUP_NUM

typedef int rfcbool;


/************************ change by cber *******************************/
#define CHUNK_TOTAL_SZIE          7          /* chunk划分的数值*/
#define RULE_NUM_MAX_SIZE        10          /* 规则集合最大值 */


#define RFC_SIZE64   ((RULE_NUM_MAX_SIZE/LENGTH64)+((RULE_NUM_MAX_SIZE%LENGTH64)?1:0))

//////////////////////////////////////////////////////////////////////////
// datastructure defination

/*单条规则内容存放，预处理表需要用*/
typedef union _rule_t
{
    struct
    {

        uint16_t rule_item[CHUNK_TOTAL_SZIE][2];/*将规则按七个
                                                chunk分类的方法存起来*/

        uint16_t u_tagid;
        uint16_t u_ifgroup: 8,
                 u_state: 2,
                 b_newitem: 1,
                 resv: 5;
        uint64_t ud_statistics;
    };                                       /* 这里总共是14+2个uint16,4+1个u64 */
    uint64_t rule[5];                   /* 用于赋值 */
} rule_t;

#define RFC_FILTER_SIZE_64      (sizeof(rule_t)/sizeof(uint64_t))


/*已经配置的规则的集合*/
typedef struct _rule_set_t
{
    uint32_t        rule_num;                    /* 规则个数 */
    rule_t          rule[RULE_NUM_MAX_SIZE + 1]; /* 含1条默认规则 */
} rule_set_t;

/*commit时的判断，变更规则集时候，需要知道那几个规则变化了*/
typedef struct _rule_comit_t
{
    uint16_t        rule_num;    /* 规则个数 */
    uint16_t        changed;     /* 规则集是否变化: 1 变化 0 未变 */
    uint16_t        rule_status[RULE_NUM_MAX_SIZE];  /* 某个rule id修改情况 */
} rule_comit_t;


// only for phase0
/* 预处理表：存放已配置好的规则集合,单链表结构 */
typedef struct _rule_action_t
{
    uint16_t        rid;           /* rule id */
    uint16_t        action;           /* action: 1:set bit  0:clear bit */
    uint16_t        ck_index;      /* 1条规则中对应的chunk 的下标索引 0~65535 */
    uint16_t        reserve;       /* 预留，应该没用 */
    uint64_t        bitmask;
    struct _rule_action_t  *next;  /* 单链表指针 */
} rule_action_t;


#define MAX_EQID_TABLE  13

// structure for CES...
typedef struct CES
{
    uint32_t    ul_hash_index;       /* hash index*/
    uint32_t    ul_next;
    uint32_t    ul_eq_id: 24,                               // 3 byte, eqID;
                ul_table: 8;
    uint32_t    ul_cbm_index;                               // point to the cbm array, ud_cbm_data
} rfc_ces_s;


// structure for Phase1 & Phase2 node
typedef struct PNODER
{
    //  uint32_t nTable;
    uint32_t ul_cell_num;
    uint32_t ul_cell_index;
    //  unsigned short cell[1000000];
    //  uint32_t cell[ACL_MAX_CELL];

    uint32_t *pul_cell_mdu;         // cell pointer for mdu
    uint32_t *pul_cell_md;          // cell pointer for md
    uint32_t ul_eq_id;              // number of CES
    uint32_t ul_ces_index;          // pointer of the first CES of this table
} rfc_pnoder_s;

#define TABLE_0_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_1_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_2_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_3_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_4_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_5_PHASE0 MPP_MAX_PHASE0_CELL
#define TABLE_6_PHASE0 MPP_MAX_PHASE0_CELL

#define TABLE_7_PHASE1 4
#define TABLE_8_PHASE1 4

#define TABLE_9_PHASE1  4
#define TABLE_10_PHASE1 4
#define TABLE_11_PHASE1 4
#define TABLE_12_PHASE2 4




#define MPP_MAX_ACL_CELLS_NUM   \
    (TABLE_0_PHASE0 + \
     TABLE_1_PHASE0 + \
     TABLE_2_PHASE0 + \
     TABLE_3_PHASE0 + \
     TABLE_4_PHASE0 + \
     TABLE_5_PHASE0 + \
     TABLE_6_PHASE0 + \
     TABLE_7_PHASE1 + \
     TABLE_8_PHASE1 + \
     TABLE_9_PHASE1 + \
     TABLE_10_PHASE1 +\
     TABLE_11_PHASE1 +\
     TABLE_12_PHASE2)

typedef struct rfc_phase_set_s
{
#ifdef RFC4_DEBUG
    rfc_pnoder_s st_phase_nodes[MAX_EQID_TABLE];   // structure for Phase 1
    //  Pnoder phase2_Nodes[2];   // structure for Phase 2
    //  Pnoder phase3_Node;   // structure for Phase 3
#endif
    uint32_t    ul_enabled;
    uint32_t    ul_free_cell_num;
    uint32_t    ul_cells[MPP_MAX_ACL_CELLS_NUM];
    
} rfc_phase_set_s;

#define ACL_END_LINK            0xffffffff

//#define MPP_MAX_ACL_NUM         (IIF_GROUP_NUM+VIRTUAL_GROUP_NUM)
#define MPP_MAX_ACL_NUM         1
#define MPP_MAX_ACL_CES_NUM     30  //chunk equivalence set 的内存分配总数
#define MPP_MAX_ACL_CBM_NUM     (1<<4)// 掩码规则分类位图(class bitmp)各个阶段的总内存分配
#define MPP_MAX_ACL_HASH_SIZE   20     //哈希求模的模值

typedef struct rfc_phase_data
{
    uint16_t    u_real_size;                    // eqm id length in 64 bit
    uint16_t    u_last_pos;                     // the rule pos in last dword
    uint16_t    u_real_size32;                  // eqm id length in 32 bit
    uint16_t    u_last_pos32;                   // the rule pos in last word
    uint32_t    ul_ces_index;                   // free index of ces
    uint32_t    ul_cbm_index;                   // free index of cmb

    uint64_t    ud_cbm_data[MPP_MAX_ACL_CBM_NUM];   // only need one cbm array,because cbm will not use
    rfc_ces_s   st_ces[MPP_MAX_ACL_CES_NUM];        // ces structure
    uint32_t    ul_ces_hash[MPP_MAX_ACL_HASH_SIZE]; // ces hash table
} rfc_phase_data_s;

typedef struct rfc_acl
{
    rule_set_t        rule_set[2];                           /**  filter set, array 0 is main, array 1 is backup */
    rule_set_t        *main_rs;                              /** Point to st_filter_st[0] */
    rule_set_t        *bak_rs;                            /** Point to st_filter_st[1] */
    rule_set_t        *md_rs;               /** there is an independent pointer to point to the filterset in every acl group */
    rule_comit_t            commit;           /** store the diffrent acl group index when commit */
    rfc_phase_set_s         st_phase;              /** phase struct for rfc */
    rfc_phase_set_s         *pst_acl_ptr_md;           /** pointer of the phase structure in md */
    rfc_phase_set_s         *pst_acl_ptr_mdu;          /** pointer of the phase structure in md */
    rfc_phase_set_s         *pst_acl_commit;                            /** pointer of the commit */
    rfc_phase_data_s        st_acl_phase_data;                          /** phase temporary data */
} rfc_acl_s;


typedef struct rfc_gsdata
{
    rfc_acl_s    *pst_acl;
    //  rfc_timer_set * timer_set;
} rfc_gsdata;




extern int rfc_init ();
extern int rfc_ptr_init();

#define SINGLE_SEND_LEN   1400
/* npcp struct for commit fct to dataplane */
typedef union
{
    struct
    {
        /* word 0 */
        uint64_t total_len      :32; /* buffer total length */
        uint64_t offset         :32; /* data offset in total buffer */

        /* word 1 */
        uint64_t over           :1 ; /* transfer over flag, 1 for voer, 0 for not over  */
        uint64_t iifgrp         :7 ; /* input interfae group, value from 1 to 16 */
        uint64_t crc            :8 ; /* crc check, for over flag set to 1 */
        uint64_t len            :16; /* data length for transfer */
        uint64_t num            :32; /* transfer times for debug */

        /* word 2 to word 176 */
        uint8_t buff[SINGLE_SEND_LEN];              /* data buffer for transfer */
    };

    uint64_t data[SINGLE_SEND_LEN / 8 + 2];
} npcp_fct_commit_st;

extern int mask_rule_fct_commit(uint8_t *fct, uint32_t size, uint8_t iifgrp);

#endif
