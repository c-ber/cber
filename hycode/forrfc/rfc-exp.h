#ifndef _RFCPHASE_H_
#define _RFCPHASE_H_

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


#define  FOREVER            for (; ;)
#ifndef INVALID_GROUP
#define  INVALID_GROUP      0          /** Invalid group number defined for ingress-group, egress-group and so on */
#endif

#ifndef DYNAMIC_TYPE
#define DYNAMIC_TYPE    1
#endif
#ifndef STATIC_TYPE
#define STATIC_TYPE 0
#endif

#ifndef INVALID_RULE
#define INVALID_RULE        0
#endif

#ifndef VALID
#define VALID           1                   /** Symbol of instance valid */
#define INVALID     0          /** Symbol of instance invalid */
#endif

#ifndef ENABLE
#define ENABLE      1                   /** Symbol of instance control */
#define DISABLE     0         /** Symbol of instance control */
#endif

#ifndef DOWN
#define DOWN    0
#endif

#ifndef UP
#define UP      1
#endif

#ifndef INVALID_PORT_NUMBER
#define INVALID_PORT_NUMBER (-1)
#endif

#ifndef INVALID_IPADDRESS
#define INVALID_IPADDRESS   0
#endif

#ifndef INVALID_SUBNET_MASK_LENGTH
#define INVALID_SUBNET_MASK_LENGTH  33
#endif

#ifndef  INVALID_PROTOCOL_NUMBER
#define INVALID_PROTOCOL_NUMBER 0
#endif

#ifndef MAX_VLAN_NUMBER
#define MAX_VLAN_NUMBER     4096
#endif

#ifndef INVALID_VLAN_NUMBER
#define INVALID_VLAN_NUMBER 0
#endif

#ifndef INVALID_HASH_ID
#define INVALID_HASH_ID         -1
#endif

#define IPV4    0x04
#define IPV6    0x06

#ifndef TRUE
#define FALSE   0
#define TRUE    1
#endif

#ifndef ADDRESS_SRC
#define ADDRESS_SRC     0
#define ADDRESS_DST     1
#endif

#define ANY_PROTOCOL            INVALID_PROTOCOL_NUMBER
#define ANY_IPADDRESS           INVALID_IPADDRESS
#define ANY_PORT_NUMBER         0

#define MAX_NAME_LENGTH                 31          /* application name, username, action name */
#define MAX_IPV4ADDR_LENGTH                         15

#define LOWORD(w)   ((unsigned short)(w))
#define HIWORD(w)   ((unsigned short)(((unsigned int) (w) >> 16) & 0xFFFF))

#define LODWORD(dw) LOWORD(((unsigned int)(dw)))
#define HIDWORD(dw) HIWORD(((unsigned int)(((unsigned long)(dw) >> 32) & 0xFFFFFFFF)))

#define SWAP16(x)   ((((x)&0xff00)>>8) \
                     | (((x)&0x00ff)<<8))

#define SWAP32(x)   ((((x)&0xff000000)>>24) \
                     | (((x)&0x00ff0000)>>8)  \
                     | (((x)&0x0000ff00)<<8)  \
                     | (((x)&0x000000ff)<<24))


#define SWAP64(x)   ((((x)&0xff00000000000000)>>56)  \
                     | (((x)&0x00ff000000000000)>>40)  \
                     | (((x)&0x0000ff0000000000)>>24)  \
                     | (((x)&0x000000ff00000000)>>8)   \
                     | (((x)&0x00000000ff000000)<<8)   \
                     | (((x)&0x0000000000ff0000)<<24)  \
                     | (((x)&0x000000000000ff00)<<40)  \
                     | (((x)&0x00000000000000ff)<<56))


#ifndef MIN
#define MIN(_x,_y)  ((_x)<(_y))?(_x):(_y)
#endif

#ifndef MAX
#define MAX(_x,_y)  ((_x)>(_y))?(_x):(_y)
#endif

#define _MDU_       1
#define ADDR_MDU_TO_MD(addr)    (addr)


#define MPP_GET_MDU_VAR(addr)           (addr##_mdu)
#define MPP_GET_MD_VAR(addr)            (addr##_md)

#ifdef _MDU_
#define MPP_GET_LOGIC_VAR(addr)         (addr##_mdu)
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
#define LENGTH64                64


#define RFC_SIZE32          ((MPP_MAX_FILTERS/LENGTH32)+((MPP_MAX_FILTERS%LENGTH32)?1:0))               // SIZE32 = ceiling ( rules / LENGTH32 )
#define RFC_SIZE64          ((MPP_MAX_FILTERS/LENGTH64)+((MPP_MAX_FILTERS%LENGTH64)?1:0))               // SIZE64 = ceiling ( rules / LENGTH64 )

#define MPP_MAX_PHASE0_CELL 65536

#define ACL_ENABLE      2
#define ACL_DISABLE     1
#define ACL_UNSET       0

#define XEACLERR        5
#define XEACLLISTERR    4
#define XEACLCESERR     3
#define XEACLCELLERR    2
#define XEINVAL         1
#define XSUCCESS        0

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

#define ACL_MAX_CELL        1000000

#define MAX_IPV4_DIM        7
#define MPP_MAX_FILTERS     (10)
#define IIF_GROUP_NUM       MAX_GROUP_NUMBER
#define VIRTUAL_GROUP_NUM   IIF_GROUP_NUM

typedef int rfcbool;
//////////////////////////////////////////////////////////////////////////
// datastructure defination

//  structures for filters... please add crosslink structure

/*bitmap结构*/
typedef union
{
    struct
    {
        uint16_t    ua_dim[MAX_IPV4_DIM][2];/*六元组位图*/
        // the bytes needed in practice, totally
        uint16_t    u_tagid;
        uint16_t    u_ifgroup: 8,
                    u_state: 2, /*规则状态:enable 设置可用，
                                  diable，不可用，unset未设置*/
                    b_newitem: 1,
                    resv: 5;
        uint64_t    ud_statistics;
    };
    uint64_t ud_filter[32 * 8 / 32];
} rfc_filter_s;

#define RFC_FILTER_SIZE_64      (sizeof(rfc_filter_s)/sizeof(uint64_t))

/*规则集合，内含六元组的bitmap*/
typedef struct FILTERSET
{
    uint32_t        ul_filter_num;/*新增规则数:新设置一个就加1*/
    rfc_filter_s    st_filter[MPP_MAX_FILTERS + 1]; /*N个规则数
                              include default rule, so +1*/
} rfc_filter_set_s;

/*commit提交要用*/
typedef struct FILTINDEX
{
    uint16_t        u_filter_num; /*应该是提交的个数*/
    uint16_t        u_changed; /*修改一条后就要置上*/
    uint16_t        ua_index[MPP_MAX_FILTERS];
} rfc_filter_index_s;


// only for phase0
typedef struct FILTERACTION
{
    uint16_t u_rule_id;         // the ruleid index in DWORD
    uint16_t u_action;          // Operation: 1 set bit 0 clear bit
    uint16_t u_index;
    uint16_t u_reserve;
    uint64_t ud_bitmask;        // bit in a DWORD
    struct FILTERACTION *pst_next;
} rfc_filter_action_s;

#ifdef RFC4_DEBUG
#define MAX_EQID_TABLE  13
#endif


// structure for CES...
typedef struct CES
{
    uint32_t    ul_hash_index;
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

    uint32_t *pul_cell_mdu;     // cell pointer for mdu
    uint32_t *pul_cell_md;          // cell pointer for md
    uint32_t ul_eq_id;              // number of CES
    uint32_t ul_ces_index;          // pointer of the first CES of this table
} rfc_pnoder_s;

#define MPP_MAX_ACL_CELLS_NUM   500000

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
#define MPP_MAX_ACL_CES_NUM     30
#define MPP_MAX_ACL_CBM_NUM     (1<<4)// 256M bytes, the number when as int64
#define MPP_MAX_ACL_HASH_SIZE   20

typedef struct rfc_phase_data
{
    uint16_t    u_real_size;                    // eqm id length in 64 bit
    uint16_t    u_last_pos;                     // the rule pos in last dword
    uint16_t    u_real_size32;                  // eqm id length in 32 bit
    uint16_t    u_last_pos32;                   // the rule pos in last word
    uint32_t    ul_ces_index;                   // free index of ces
    uint32_t    ul_cbm_index;                   // free index of cmb
    //  rfc_CBM_ARR     st_cbm_arr;
    uint64_t    ud_cbm_data[MPP_MAX_ACL_CBM_NUM];   // only need one cbm array,because cbm will not use
    rfc_ces_s   st_ces[MPP_MAX_ACL_CES_NUM];        // ces structure
    uint32_t    ul_ces_hash[MPP_MAX_ACL_HASH_SIZE]; // ces hash table
} rfc_phase_data_s;

typedef struct rfc_acl
{
    rfc_filter_set_s   st_filter_set[2];/* 规则集合：Array 0 is main,
                                                    Array 1 is backup */
    rfc_filter_set_s   *pst_main_set;   /* 指向st_filter_set[0] */
    rfc_filter_set_s   *pst_backup_set; /* 指向st_filter_set[1] */
    rfc_filter_set_s   *pst_set_md[MPP_MAX_ACL_NUM];/* there is an
                                        independent pointer to point
                                        to the filterset in every acl group */
    rfc_filter_index_s st_filter_index[MPP_MAX_ACL_NUM];/* store the
                                        diffrent acl group index when commit */
    rfc_phase_set_s    st_phase[MPP_MAX_ACL_NUM];/* phase struct for rfc */
    rfc_phase_set_s    *pst_acl_ptr_md[MPP_MAX_ACL_NUM];/* pointer of
                                        the phase structure in md */
    rfc_phase_set_s    *pst_acl_ptr_mdu[MPP_MAX_ACL_NUM];/* pointer of
                                        the phase structure in md */
    rfc_phase_set_s    *pst_acl_commit;    /*commit时通过npcp传输给mp*/
    rfc_phase_data_s   st_acl_phase_data;  /* phase temporary data */
} rfc_acl_s;


extern int rfc_phase0(rfc_phase_set_s *pst_acl_commit, rfc_filter_set_s *pst_filter_set, rfc_filter_index_s *pst_filter_index);
extern int rfc_phase1(rfc_pnoder_s *pst_prev_phase_nodes, rfc_pnoder_s *pst_phase_nodes, uint32_t ul_len, uint32_t ul_table);
extern int rfc_phase2(rfc_pnoder_s *pst_prev_phase_nodes, rfc_pnoder_s *pst_phase_nodes, uint32_t ul_table);
extern int rfc_phase3(rfc_pnoder_s *pst_prev_phase_nodes, rfc_pnoder_s *pst_phase_nodes, uint16_t u_ifgroup);
extern int rfc_phase_commit(void);
extern int rfc_phase_commit_not_submit(void);



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
