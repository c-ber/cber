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
#include <stdint.h>


//memory manage function type
typedef void* (*DPI_MALLOC)(unsigned int size);
typedef void (*DPI_FREE)(void *p);
/* dir */
#define DIR_REQUEST 0
#define DIR_ANSWER  1

#define DATA_LEN    3000

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




#endif /* MODULES_DPI_SAPL_DPI_SDK_H_ */
