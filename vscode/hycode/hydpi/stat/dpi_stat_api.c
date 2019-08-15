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

    int rv = DPI_OK;

    dpi_shm_data_init(KEY_STAT, sizeof(proc_stat_t));
    
    return rv;
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
    int rv = DPI_OK;
       
    if(DPI_PID_MAX < process_id || FSG_MAX < flow_stat_group || FST_MAX < stat_type)
    {
        return DPI_PARAM_ERR;
    }
    
    switch(stat_type)
    {
        case FST_FLOW_NUM: 
        dpi_shm_data_inc(KEY_STAT, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].flow_num), sizeof(uint64_t), 1);        
        break;
        
        case FST_PACKETS:    
        dpi_shm_data_inc(KEY_STAT, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].packets), sizeof(uint64_t), 1);  
        break;
        
        case FST_BYTES:
        dpi_shm_data_inc(KEY_STAT, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].bytes), sizeof(uint64_t), 1);
        break;
        
        default:break;
    }
    
    return rv;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_set
 * ����        : �����̶�����ͳ������Ϊn����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_set(int process_id, int flow_stat_group, int stat_type, uint64_t num)
{   
    int rv = DPI_OK;
    uint64_t set_data = num;
    uint64_t *setdata_p = &set_data;

    if(DPI_PID_MAX < process_id || FSG_MAX < flow_stat_group || FST_MAX < stat_type)
    {
        return DPI_PARAM_ERR;
    }
    
    switch(stat_type)
    {
        case FST_FLOW_NUM:
        dpi_shm_data_set(KEY_STAT, (void *)setdata_p, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].flow_num), sizeof(uint64_t));          
        break;
        case FST_PACKETS:
        dpi_shm_data_set(KEY_STAT, (void *)setdata_p, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].packets), sizeof(uint64_t));
        break;
        case FST_BYTES:
        dpi_shm_data_set(KEY_STAT, (void *)setdata_p, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].bytes), sizeof(uint64_t));
        break;
        default:break;
    }
    
    return rv;
}


/******************************************************************************
 * ��������    : dpi_flow_stat_get
 * ����        : �����̻�ȡ����ͳ����
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_flow_stat_get(int process_id, int flow_stat_group, int stat_type, uint64_t* outdata)
{
    int rv = DPI_OK;

    if(NULL == outdata)
    {
        return DPI_NULL_POINT;
    } 

    if(DPI_PID_MAX < process_id || FSG_MAX < flow_stat_group || FST_MAX < stat_type)
    {
        return DPI_PARAM_ERR;
    }
    
    switch(stat_type)
    {
        case FST_FLOW_NUM:
        dpi_shm_data_get(KEY_STAT, (void *)outdata, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].flow_num), sizeof(uint64_t)); 
        break;
        
        case FST_PACKETS:
        dpi_shm_data_get(KEY_STAT, (void *)outdata, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].packets), sizeof(uint64_t));      
        break;
        
        case FST_BYTES:
        dpi_shm_data_get(KEY_STAT, (void *)outdata, DPI_OFFSET(proc_stat_t, 
        proc_flow_stat[process_id].fs[flow_stat_group].bytes), sizeof(uint64_t));
        break;
        
        default:break;
    }
    
    return rv;
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
    uint64_t temp_data  = 0;
    uint64_t outdata    = 0;
    uint64_t *outdata_p = NULL;
    
    if(NULL == outbuf)
    {
        return DPI_NULL_POINT; 
    }
    
    outdata_p = (uint64_t *)outbuf;
    
    for(i=0; i<FST_MAX; i++, outdata_p++)
    {
        for(j=0; j<DPI_PID_MAX; j++)
        {
            rv = dpi_flow_stat_get(j, flow_stat_group, i, &temp_data);
            if(DPI_OK !=rv)
            {
                return rv;
            }
            outdata+=temp_data;            
        }
        
        *outdata_p = outdata;
        outdata = 0;
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

    if(DPI_PID_MAX < process_id || SST_MAX < sys_stat_type)
    {
        return DPI_PARAM_ERR;
    }

    dpi_shm_data_inc(KEY_STAT, DPI_OFFSET(proc_stat_t, 
    sys_stat[process_id].sys_s[sys_stat_type]), sizeof(uint64_t), 1);
   
    
    return rv;
}

/******************************************************************************
 * ��������    : dpi_sys_stat_set
 * ����        : ��һ�����̵�ĳһ��ϵͳͳ��������Ϊn
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_set(int process_id, int sys_stat_type, uint64_t num)
{
    int rv = DPI_OK;
    uint64_t set_data = num;
    uint64_t *setdata_p = &set_data;
    
    if(DPI_PID_MAX < process_id || SST_MAX < sys_stat_type)
    {
        return DPI_PARAM_ERR;
    }
    
    dpi_shm_data_set(KEY_STAT, (void *)setdata_p, DPI_OFFSET(proc_stat_t, 
    sys_stat[process_id].sys_s[sys_stat_type]), sizeof(uint64_t));
    
    return rv;
}
/******************************************************************************
 * ��������    : dpi_sys_stat_get
 * ����        : ��ȡһ�����̵�ĳһ��ϵͳͳ������
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_sys_stat_get(int process_id, int sys_stat_type, uint64_t *outdata)
{
    int rv = DPI_OK;

    if(DPI_PID_MAX < process_id || SST_MAX < sys_stat_type)
    {
        return DPI_PARAM_ERR;
    }
    
    dpi_shm_data_get(KEY_STAT, (void *)outdata, DPI_OFFSET(proc_stat_t, 
    sys_stat[process_id].sys_s[sys_stat_type]), sizeof(uint64_t));
    
    return rv; 

    
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
dpi_code_t dpi_sys_stat_get_all(int sys_stat_type, uint64_t *outbuf)
{
    int i             = 0;
    uint64_t temp_data = 0;
    uint64_t outdata   = 0;

    
    if(NULL == outbuf)
    {
        return DPI_NULL_POINT;
    }
    
    for(i=0; i<DPI_PID_MAX; i++)
    {
        dpi_sys_stat_get(i, sys_stat_type, &temp_data);
        outdata += temp_data;
    }
    
    *outbuf = outdata;

    return DPI_OK;
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
    
    flw_stat_t *p_flow_stat = NULL;
    p_flow_stat = (flw_stat_t *)odata;
    
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
    
    flw_stat_t *p_flow_stat = NULL;
    p_flow_stat = (flw_stat_t *)odata;
    
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


/******************************************************************************
 * ��������    : dpi_stat_npcp_init
 * ����        : ͳ��ģ��npcp��ʼ��
 * ����        : 
 * ����        :
 * ����        :
 ******************************************************************************/
dpi_code_t dpi_stat_npcp_init(void)
{
    int rv = DPI_OK;

    NPCP_CMD_REGISTER(NPCP_CMD_DPI_SHOW_FLOW_STAT, npcp_cmd_show_stat_flow);
    NPCP_CMD_REGISTER(NPCP_CMD_DPI_CLEAR_FLOW_STAT, npcp_cmd_clear_stat_flow);
    NPCP_CMD_REGISTER(NPCP_CMD_DPI_SHOW_APP_STAT, npcp_cmd_show_stat_app);
    NPCP_CMD_REGISTER(NPCP_CMD_DPI_CLEAR_APP_STAT, npcp_cmd_clear_stat_app);
    
    return rv;
}


