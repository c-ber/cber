/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       dpi_stat_api.c
编码格式:     ASCII
作者:         zengweixiu
创建:         2016-9-6
历史:
    1.日期    :2016-9-6
      作者    :zwx
      修改    :Created file
******************************************************************************/

#include <pthread.h> 
#include <stdio.h>
#include <stdlib.h>
#include "dpi_stat_api.h"


/******************************************************************************
 * 函数名称    : dpi_stat_init
 * 功能        : 初始化DPI统计模块，包括获取统计模块全局变量指针,包括互斥锁指针和统计量指针
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
dpi_code_t dpi_stat_init()
{  
    p_g_flow_stat     = g_proc_flow_stat; 
    p_proc_stat_mutex = proc_stat_mutex;
    p_g_sys_stat      = g_sys_stat;
    
    return DPI_OK;
}


/******************************************************************************
 * 函数名称    : dpi_flow_stat_inc
 * 功能        : 按进程对流量统计项做加1操作，例如进程1，TCP协议的流数目
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_flow_stat_set
 * 功能        : 按进程对流量统计项置为n操作
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_flow_stat_get
 * 功能        : 按进程获取流量统计项
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_flow_stat_clear
 * 功能        : 按进程对flow_stat_t类型里的某个统计项做清0操作
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_clear(int process_id, int flow_stat_group, int stat_type)
{
    int rv = DPI_OK;
    
    rv = dpi_flow_stat_set(process_id, flow_stat_group, stat_type, 0);
    
    return rv;
}


/******************************************************************************
 * 函数名称    : dpi_flow_stat_dump
 * 功能        : 对所有进程flow_stat_t类型统计按组一组数据全部获取
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_flow_stat_clear_group
 * 功能        : 对所有进程的某一组流量统计数据全部清除
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_sys_stat_inc
 * 功能        : 对一个进程的某一项系统统计数据加1
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_inc(int process_id, int sys_stat_type)
{
    int rv = DPI_OK;
    
    p_g_sys_stat[process_id].sys_stat[sys_stat_type]++;
    
    return rv;
}

/******************************************************************************
 * 函数名称    : dpi_sys_stat_set
 * 功能        : 对一个进程的某一项系统统计数据置为n
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, int64_t num)
{
    int rv = DPI_OK;
    
    p_g_sys_stat[process_id].sys_stat[sys_stat_type] = num;
    
    return rv;
}
/******************************************************************************
 * 函数名称    : dpi_sys_stat_get
 * 功能        : 获取一个进程的某一项系统统计数据
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
int64_t dpi_sys_stat_get(int process_id, int sys_stat_type)
{
    int64_t outdata = 0;
    
    outdata = p_g_sys_stat[process_id].sys_stat[sys_stat_type];
    
    return outdata; 

    
}

/******************************************************************************
 * 函数名称    : dpi_sys_stat_clear
 * 功能        : 对一个进程的某一项统计系统数据清0
 * 参数        : 
 * 返回        :
 * 日期        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_clear(int process_id, int sys_stat_type)
{
    int rv = DPI_OK;

    rv = dpi_sys_stat_set(process_id, sys_stat_type, 0);
    
    return rv;
}


/******************************************************************************
 * 函数名称    : dpi_sys_stat_get
 * 功能        : 获取所有进程的某一项系统统计数据总和
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : dpi_sys_stat_clear
 * 功能        : 对所有进程的某一项系统统计数据清0
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : npcp_cmd_show_stat_flow
 * 功能        : 获取协议流量统计
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : npcp_cmd_clear_stat_flow
 * 功能        : 清除协议流量统计
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : npcp_cmd_show_stat_app
 * 功能        : 获取应用流量统计
 * 参数        : 
 * 返回        :
 * 日期        :
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
 * 函数名称    : npcp_cmd_clear_stat_app
 * 功能        : 清除应用流量统计
 * 参数        : 
 * 返回        :
 * 日期        :
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




