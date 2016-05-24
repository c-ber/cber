/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi.h
�����ʽ:     ASCII
����:         chenbin
����:         Apr 18, 2016
��ʷ:
    1.����    :Apr 18, 2016
      ����    :cb
      �޸�    :Created file
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
    struct list_head    head;                  /* Ͱ�ӵ�˫������ָ�� */
    uint64_t            bucket_depth;          /* Ͱ��ȣ���������cell���� */
    uint64_t            total_cell;            /* �ѽ�������Ԫ���� */
    uint64_t            del_cell;              /* ���ϻ�����Ԫ���� */
    cvmx_spinlock_t     lock;                  /* ������ */
    uint32_t            index;                 /* ��ǰbucket������ */
}hash_bucket_t;



#endif /* MODULES_DPI_DPI_H_ */
