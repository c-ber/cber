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

#include "pub_header.h"
#include "dpi_npcp.h"
#include "shmem.h"

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
typedef struct flw_stat
{
    int64_t flow_num;/* ����Ŀ */
    int64_t packets; /* ����Ŀ */
    int64_t bytes;   /* �ֽ��� */
}flw_stat_t;       /* Э��������Ӧ������ͳ�ƽṹ�� */


typedef struct proc_flow_stat
{
    flw_stat_t fs[FSG_MAX]; /* ����ͳ�ƽṹ�� */
}proc_flow_stat_t;         /* �ֽ��̵�����ͳ�ƽṹ */


typedef struct sys_stat
{
    int64_t sys_s[SST_MAX];
}sys_stat_t;

typedef struct proc_stat
{
    proc_flow_stat_t proc_flow_stat[DPI_PID_MAX];
    sys_stat_t sys_stat[DPI_PID_MAX];
}proc_stat_t;


/**************************************************************************************************
                                        ��������
**************************************************************************************************/
dpi_code_t dpi_flow_stat_inc(int process_id, int flow_stat_group, int stat_type); /*ͳ������*/
dpi_code_t dpi_flow_stat_set(int process_id, int flow_stat_group, int stat_type, uint64_t num);/*ͳ������*/
dpi_code_t dpi_flow_stat_clear(int process_id, int flow_stat_group, int stat_type);/*ͳ����0*/
dpi_code_t dpi_flow_stat_get_group(int flow_stat_group, void *outbuf);    /*�����ȡ���н���ͳ������*/
dpi_code_t dpi_flow_stat_clear_group(int flow_stat_group);                /*����������н���ͳ��*/
dpi_code_t dpi_sys_stat_inc(int process_id, int sys_stat_type);             /*ͳ�Ƽ�1*/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, uint64_t num);/*ͳ����n*/
dpi_code_t dpi_sys_stat_clear(int process_id, int sys_stat_type);           /*ͳ����0*/
dpi_code_t dpi_sys_stat_get_all(int sys_stat_type, uint64_t *outbuf);       /*��ȡ���н���ͳ������*/
dpi_code_t dpi_sys_stat_clear_all(int sys_stat_type);                       /*������н���ͳ��*/

#endif /* DPI_STAT_API_H_ */



















