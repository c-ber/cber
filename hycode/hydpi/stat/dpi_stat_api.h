/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi_stat_api.h
�����ʽ:     ASCII
����:         zengweixiu
����:         2016-9-6
��ʷ:
    1.����    :2016-9-6
      ����    :zwx
      �޸�    :Created file
******************************************************************************/
#ifndef DPI_STAT_API_H_
#define DPI_STAT_API_H_

#include <stdio.h>
#include <stdlib.h>
#include <dpi_errno.h>

/**************************************************************************************************
                                        �궨��
**************************************************************************************************/
#define DPI_PID_MAX 48


/**************************************************************************************************
                                        ö�ٶ���
**************************************************************************************************/
enum flow_stat_group
{
    FSG_TCP     = 0,        /* TCPЭ������ͳ���� */
    FSG_UDP     = 1,            /* UDPЭ������ͳ���� */    
    FSG_SMTP    = 2,           /* SMTPЭ������ͳ���� */
    FSG_FTP     = 3,            /* FTPЭ������ͳ���� */
    FSG_HTTP    = 4,           /* HTTPЭ������ͳ���� */
    FSG_PRO_MAX,
   
    FSG_P2P     = 5,            /* P2P_SoftwareӦ������ͳ���� */
    FSG_NETGAME = 6,        /* network_gameӦ������ͳ���� */
    FSG_EMAIL   = 7,          /* emailӦ������ͳ���� */
    FSG_IM      = 8,             /* instant_messageӦ������ͳ���� */
    FSG_SM      = 9,             /* ��ý��Ӧ������ͳ���� */
    FSG_MAX,
};
enum flow_stat_type
{
    FST_FLOW_NUM = 0, /* ����Ŀ */
    FST_PACKETS  = 1, /* ����Ŀ */
    FST_BYTES    = 2, /* �ֽ��� */
    FST_MAX,
};

enum sys_stat_type
{
    SYS_NPCP_ERR_PKT = 0,
    SST_MAX,
};


/**************************************************************************************************
                                        �ṹ�嶨��
**************************************************************************************************/
typedef struct flow_stat
{
    int64_t flow_num;/* ����Ŀ */
    int64_t packets; /* ����Ŀ */
    int64_t bytes;   /* �ֽ��� */
}flow_stat_t;       /* Э��������Ӧ������ͳ�ƽṹ�� */


typedef struct proc_flow_stat
{
    flow_stat_t fs[FSG_MAX]; /* ����ͳ�ƽṹ�� */
}proc_flow_stat_t;         /* �ֽ��̵�����ͳ�ƽṹ */


typedef struct proc_pthread_mtex_t
{
    pthread_mutex_t stat_mutex[FSG_MAX];   /* ����ͳ�ƻ����� */ 
}proc_pthread_mtex_t;                    /* �ֽ��̵�����ͳ�ƻ����� */

typedef struct sys_stat_t
{
    int64_t sys_stat[SST_MAX];
}sys_stat_t;


/**************************************************************************************************
                                        ȫ�ֱ�������
**************************************************************************************************/
proc_flow_stat_t g_proc_flow_stat[DPI_PID_MAX] = {};
proc_flow_stat_t *p_g_flow_stat = NULL;

proc_pthread_mtex_t proc_stat_mutex[DPI_PID_MAX] = {};
proc_pthread_mtex_t *p_proc_stat_mutex = NULL;

sys_stat_t g_sys_stat[DPI_PID_MAX] = {};
sys_stat_t *p_g_sys_stat = NULL;

/**************************************************************************************************
                                        ��������
**************************************************************************************************/
dpi_code_t dpi_flow_stat_inc(int process_id, int flow_stat_group, int stat_type); /*ͳ������*/
dpi_code_t dpi_flow_stat_set(int process_id, int flow_stat_group, int stat_type, int64_t num);/*ͳ������*/
dpi_code_t dpi_flow_stat_clear(int process_id, int flow_stat_group, int stat_type);/*ͳ����0*/
dpi_code_t dpi_flow_stat_get_group(int flow_stat_group, void *outbuf);    /*�����ȡ���н���ͳ������*/
dpi_code_t dpi_flow_stat_clear_group(int flow_stat_group);                /*����������н���ͳ��*/
dpi_code_t dpi_sys_stat_inc(int process_id, int sys_stat_type);             /*ͳ�Ƽ�1*/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, int64_t num);/*ͳ����n*/
int64_t dpi_sys_stat_get(int process_id, int sys_stat_type);                /*��ȡ��������ͳ��*/
dpi_code_t dpi_sys_stat_clear(int process_id, int sys_stat_type);           /*ͳ����0*/
int64_t dpi_sys_stat_get_all(int sys_stat_type);                            /*��ȡ���н���ͳ������*/
dpi_code_t dpi_sys_stat_clear_all(int sys_stat_type);                       /*������н���ͳ��*/

#endif /* DPI_STAT_API_H_ */



















