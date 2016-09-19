/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       sapl_dpi_sdk.h
�����ʽ:     ASCII
����:         chenbin
����:         May 20, 2016
��ʷ:
    1.����    :May 20, 2016
      ����    :cb
      �޸�    :Created file
******************************************************************************/
#ifndef MODULES_DPI_SAPL_DPI_SDK_H_
#define MODULES_DPI_SAPL_DPI_SDK_H_

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include "r2_list.h"
#include <stdint.h>

#ifdef old
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

//packet data
struct sk_buff
{
    struct sk_buff      *next;
    struct sk_buff      *prev;
    unsigned short       protocol;
    unsigned char        pktdir;  // request dir is DIR_REQUEST, reponse dir is DIR_ANSWER
    void *network_header;
    void *mac_header;
    void *tail;
    uint16_t network_header_len;
    struct flow_element  *ct;

    unsigned int        len;
    char            cb[48] /*__aligned(8) */;
};

#endif

//memory manage function type
typedef void* (*DPI_MALLOC)(unsigned int size);
typedef void (*DPI_FREE)(void *p);
/* dir */
#define DIR_REQUEST 0
#define DIR_ANSWER  1

#define DATA_LEN    64

extern int dp_debug_file_rsm;
extern int dp_debug_app;
extern int dp_debug_audit;
extern int dp_debug_app_load;
extern int dp_debug_ips_config;
extern int dp_debug_byod;
extern int dp_debug_app_audit;
extern int dp_debug_tcp_rsm;
extern int dp_debug_app_obj;
extern int dp_debug_lex;
extern int dp_debug_bison;
extern int dp_debug_decode;
extern int dp_debug_acbm;
extern int dp_debug_user;
extern int dp_debug_flow;
extern int dp_debug_console;



typedef   uint8_t    mac_t[6];
typedef   uint8_t    flag_t;
typedef struct _dpi_result_t
{
    flag_t      have_ident_log;         /* ��ʶ����־�ı�־*/
    flag_t      have_audit_log;         /* �������־�ı�־*/
    mac_t       src_mac;                /* Դmac��ַ*/
    uint32_t    src_ip;                 /* Դip*/
    uint32_t    dst_ip;                 /* Ŀ��ip*/
    uint32_t    user_ip;                /* �û�IP*/
    uint16_t    dst_port;               /* Ŀ�Ķ˿�*/

    uint32_t    app_id;                 /* Ӧ��id*/
    uint8_t     app_name[DATA_LEN];     /* app����*/
    uint16_t    app_name_len;

    uint8_t     app_cat_name[DATA_LEN]; /* Ӧ�÷���*/
    uint8_t     app_cat_name_len;

    uint8_t     account[DATA_LEN];      /* �����Ϊ�µ��û��� */
    uint16_t    account_len;

    uint32_t    action_id;              /* Ӧ����ΪID */
    uint8_t     action_name[DATA_LEN];  /* Ӧ����Ϊ */
    uint16_t    action_name_len;

    uint8_t     content[DATA_LEN];      /* ������� */
    uint32_t    content_len;

    uint8_t     send_addr[DATA_LEN];    /* ���ʼ� */
    uint32_t    send_addr_len;

    uint8_t     receive_addr[DATA_LEN]; /* ���ʼ� */
    uint32_t    receive_addr_len;
}dpi_result_t;

extern char         g_log[];
extern dpi_result_t g_dpi_result;


/* 1.   AIE�����ʼ������ */
extern int AIE_sdk_init(DPI_MALLOC malloc, DPI_FREE free);

/* 2.   AIE����ȥ��ʼ������ */
extern void AIE_sdk_uninit();

/* 3    ����sap_apps_sigs.conf�����ļ� */
extern int AIE_set_app_lib(char *filecontent);

/* 4    ����sap_category_behavior.conf�����ļ� */
extern int AIE_set_app_type(char *filecontent);

/* 5    ����webmail: webmail_cn.html�����ļ� */
extern int AIE_set_webmail(char *filecontent);

/* 6.   AIEʶ���� */
#ifdef old
extern int AIE_hook(struct sk_buff *skb, void **app_session, uint32_t *app_id, uint32_t *action_id);
#else
extern int AIE_hook(unsigned char vapId, const char *buf, int len);
#endif
/* 7.   AIE session�ڴ��ͷź��� */
//extern void AIE_session_delete(void *app_session);



#endif /* MODULES_DPI_SAPL_DPI_SDK_H_ */
