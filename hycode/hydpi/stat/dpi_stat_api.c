/****************************************************************************** 

��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       dpi_stat_api.c
�����ʽ:     ASCII
����:         zengweixiu
����:         2016-9-6
��ʷ:
    1.����    :2016-9-6
      ����    :zwx
      �޸�    :Created file
******************************************************************************/

#include <pthread.h> 
#include <stdio.h>
#include <stdlib.h>
#include "dpi_stat_api.h"


/******************************************************************************
 * ��������    : dpi_stat_init
 * ����        : ��ʼ��DPIͳ��ģ�飬������ȡͳ��ģ��ȫ�ֱ���ָ��,����������ָ���ͳ����ָ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_stat_init()
{  
    p_g_flow_stat     = g_proc_flow_stat; 
    p_proc_stat_mutex = proc_stat_mutex;
    p_g_sys_stat      = g_sys_stat;
    
    return DPI_OK;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_inc
 * ����        : �����̶�����ͳ��������1�������������1��TCPЭ�������Ŀ
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_inc(int process_id, int flow_stat_group, int stat_type)
{
    switch(stat_type)
    {
        case FST_FLOW_NUM:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);   
        p_g_flow_stat[process_id].fs[flow_stat_group].flow_num++;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_PACKETS:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        p_g_flow_stat[process_id].fs[flow_stat_group].packets++;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_BYTES:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        p_g_flow_stat[process_id].fs[flow_stat_group].bytes++;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        default:break;
    }
    
    return DPI_OK;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_set
 * ����        : �����̶�����ͳ������Ϊn����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_set(int process_id, int flow_stat_group, int stat_type, int64_t num)
{   
    switch(stat_type)
    {
        case FST_FLOW_NUM:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        p_g_flow_stat[process_id].fs[flow_stat_group].flow_num = num;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_PACKETS:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        p_g_flow_stat[process_id].fs[flow_stat_group].packets = num;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_BYTES:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        p_g_flow_stat[process_id].fs[flow_stat_group].bytes = num;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        default:break;
    }
    
    return DPI_OK;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_get
 * ����        : �����̻�ȡ����ͳ����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
int64_t dpi_flow_stat_get(int process_id, int flow_stat_group, int stat_type)
{
    int64_t outdata = 0;
    
    switch(stat_type)
    {
        case FST_FLOW_NUM:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        outdata = p_g_flow_stat[process_id].fs[flow_stat_group].flow_num;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_PACKETS:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        outdata = p_g_flow_stat[process_id].fs[flow_stat_group].packets;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        case FST_BYTES:
        pthread_mutex_lock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        outdata = p_g_flow_stat[process_id].fs[flow_stat_group].bytes;
        pthread_mutex_unlock(&p_proc_stat_mutex[process_id].stat_mutex[flow_stat_group]);
        break;
        default:break;
    }
    
    return outdata;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_clear
 * ����        : �����̶�flow_stat_t�������ĳ��ͳ��������0����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_clear(int process_id, int flow_stat_group, int stat_type)
{
    int rv = DPI_OK;
    
    rv = dpi_flow_stat_set(process_id, flow_stat_group, stat_type, 0);
    
    return rv;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_dump
 * ����        : �����н���flow_stat_t����ͳ�ư���һ������ȫ����ȡ
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_get_group(int flow_stat_group, void *outbuf)
{
    int rv = DPI_OK;
    int i  = 0;
    int j  = 0;
    
    int64_t *outdata = NULL;
    
    if(NULL == outbuf)
    {
        return DPI_NULL_POINT;
    }
     
    outdata = (int64_t *)outbuf;
    
    for(i=0; i<FST_MAX; i++, outdata++)
    {
        for(j=0; j<DPI_PID_MAX; j++)
        {
            *outdata += dpi_flow_stat_get(j, flow_stat_group, i);
        }
    }
    return rv;
}
/******************************************************************************
 * ��������    : dpi_flow_stat_clear_group
 * ����        : �����н��̵�ĳһ������ͳ������ȫ�����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_clear_group(int flow_stat_group)
{
    int rv = DPI_OK;
    int i  = 0;
    int j  = 0;
    
    for(i=0; i<FST_MAX; i++)
    {
        for(j=0; j<DPI_PID_MAX; j++)
        {
            rv = dpi_flow_stat_set(j, flow_stat_group, i, 0);
        }
    }
    
    return rv;
}

/******************************************************************************
 * ��������    : dpi_sys_stat_inc
 * ����        : ��һ�����̵�ĳһ��ϵͳͳ�����ݼ�1
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_inc(int process_id, int sys_stat_type)
{
    int rv = DPI_OK;
    
    p_g_sys_stat[process_id].sys_stat[sys_stat_type]++;
    
    return rv;
}

/******************************************************************************
 * ��������    : dpi_sys_stat_set
 * ����        : ��һ�����̵�ĳһ��ϵͳͳ��������Ϊn
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, int64_t num)
{
    int rv = DPI_OK;
    
    p_g_sys_stat[process_id].sys_stat[sys_stat_type] = num;
    
    return rv;
}
/******************************************************************************
 * ��������    : dpi_sys_stat_get
 * ����        : ��ȡһ�����̵�ĳһ��ϵͳͳ������
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
int64_t dpi_sys_stat_get(int process_id, int sys_stat_type)
{
    int64_t outdata = 0;
    
    outdata = p_g_sys_stat[process_id].sys_stat[sys_stat_type];
    
    return outdata; 

    
}

/******************************************************************************
 * ��������    : dpi_sys_stat_clear
 * ����        : ��һ�����̵�ĳһ��ͳ��ϵͳ������0
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_clear(int process_id, int sys_stat_type)
{
    int rv = DPI_OK;

    rv = dpi_sys_stat_set(process_id, sys_stat_type, 0);
    
    return rv;
}


/******************************************************************************
 * ��������    : dpi_sys_stat_get
 * ����        : ��ȡ���н��̵�ĳһ��ϵͳͳ�������ܺ�
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
int64_t dpi_sys_stat_get_all(int sys_stat_type)
{
    int rv      = DPI_OK;
    int i       = 0;
    int outdata = 0;

    for(i=0; i<DPI_PID_MAX; i++)
    {
        outdata += dpi_sys_stat_get(i, sys_stat_type);
    }

    return outdata;
}

/******************************************************************************
 * ��������    : dpi_sys_stat_clear
 * ����        : �����н��̵�ĳһ��ϵͳͳ��������0
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_clear_all(int sys_stat_type)
{
    int rv = DPI_OK;
    int i  = 0;

    for(i=0; i<DPI_PID_MAX; i++)
    {
        rv = dpi_sys_stat_clear(i, sys_stat_type);
    }

    return rv;
}
/******************************************************************************
 * ��������    : npcp_cmd_show_stat_flow
 * ����        : ��ȡЭ������ͳ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t npcp_cmd_show_stat_flow(int16_t ilen, void *idata, int16_t *olen, void *odata)
{
    int i = 0;
    int rv = DPI_OK;
    
    flow_stat_t *p_flow_stat = NULL;
    p_flow_stat = (flow_stat_t *)odata;
    
    if((NULL == odata) || (NULL == idata) || (NULL == olen))
    {
        return DPI_NULL_POINT;
    }

    for(i=0; i<FSG_PRO_MAX; i++, p_flow_stat++)
    {
        rv = dpi_flow_stat_get_group(i, p_flow_stat);
    }
    
    return rv;    
}


/******************************************************************************
 * ��������    : npcp_cmd_clear_stat_flow
 * ����        : ���Э������ͳ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t npcp_cmd_clear_stat_flow(int16_t ilen, void *idata, int16_t *olen, void *odata)
{
    int i = 0;
    int rv = DPI_OK;
      
    if((NULL == odata) || (NULL == idata) || (NULL == olen))
    {
        return DPI_NULL_POINT;
    }

    for(i=0; i<FSG_PRO_MAX; i++)
    {   
        rv = dpi_flow_stat_clear_group(i);
    }
    
    return rv; 
}


/******************************************************************************
 * ��������    : npcp_cmd_show_stat_app
 * ����        : ��ȡӦ������ͳ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t npcp_cmd_show_stat_app(int16_t ilen, void *idata, int16_t *olen, void *odata)
{
    int i = 0;
    int rv = DPI_OK;
    
    flow_stat_t *p_flow_stat = NULL;
    p_flow_stat = (flow_stat_t *)odata;
    
    if((NULL == odata) || (NULL == idata) || (NULL == olen))
    {
        return DPI_NULL_POINT;
    }

    for(i=FSG_P2P; i<FSG_MAX; i++, p_flow_stat++)
    {   
        rv = dpi_flow_stat_get_group(i, p_flow_stat);     
    }
    
    return rv;  
}


/******************************************************************************
 * ��������    : npcp_cmd_clear_stat_app
 * ����        : ���Ӧ������ͳ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t npcp_cmd_clear_stat_app(int16_t ilen, void *idata, int16_t *olen, void *odata)
{
    int i = 0;
    int rv = DPI_OK;

    if((NULL == odata) || (NULL == idata) || (NULL == olen))
    {
        return DPI_NULL_POINT;
    }

    for(i=FSG_P2P; i<FSG_MAX; i++)
    {   
        rv = dpi_flow_stat_clear_group(i);
    }

    return rv; 
}




