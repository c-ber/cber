/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi.h
编码格式:     ASCII
作者:         chenbin
创建:         Apr 18, 2016
历史:
    1.日期    :Apr 18, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef MODULES_DPI_DPI_H_
#define MODULES_DPI_DPI_H_


#include "util.h"
#include "dpi_mm.h"
#include "r2_list.h"
#include "list.h"


mp_code_t dataplane_dpi_init();
mp_code_t dataplane_dpi_processs(dpi_skb_t *skb, five_tuple_t *ft);


struct flow_element
{
    struct cmb_list_head list;
    int create_type; // 1 flow crated by pkt,  2. by statistic report.

    unsigned int sip;
    unsigned sp;

    unsigned int dip;
    unsigned dp;

    unsigned char proto;
    unsigned char dir;

    unsigned int appid;

    int packet_cnt;     //first 20 pkts.
    int bytes;
    void *app_session;
    void *user_session;

    void *tcp_rsm;

    unsigned char athx;
};


#define FIVE_TUPLE_BUCKET_MAX_SIZE  10

typedef struct{
    struct list_head    head;                  /* 桶子的双向链表指针 */
    uint64_t            bucket_depth;          /* 桶深度，即包含的cell个数 */
    uint64_t            total_cell;            /* 已建立的五元组数 */
    uint64_t            del_cell;              /* 已老化的五元组数 */
    cvmx_spinlock_t     lock;                  /* 操作锁 */
    uint32_t            index;                 /* 当前bucket的索引 */
}hash_bucket_t;



#endif /* MODULES_DPI_DPI_H_ */
