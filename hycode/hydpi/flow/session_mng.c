#include "session_mng.h"


uint8_t MAX_FLOW_SES_PACKET_NUM = 20;


uint8_t flow_get_process_tread_id(void)
{
    uint8_t     thread_id;
    pthread_mutex_lock(&g_get_thread_id_lock);
    thread_id = flow_process_thread_id;
    flow_process_thread_id = (flow_process_thread_id+1)%FLOW_PROCE_THREAD_MAX_NUM;
    pthread_mutex_unlock(&g_get_thread_id_lock);

    return thread_id;
}

dpi_code_t flow_session_mng_process(pbuf *packet_buf, parse_pkt_info_t *pkt_info)
{
    dpi_code_t                  ret = DPI_OK;
    dpi_table_session_mng_t     session_search_d = {};
    dpi_5tuple_t                opposite_dirt_5tuple = {};/*反向五元组*/
    bool                        is_find_flow_ses = false;     //用于标识是否在哈希表中找到对应的流会话
    hash_key_t                  hash_key ={};
    uint8_t                     thread_id=0xff;

    if(NULL == packet_buf)
    {
        printf("[flow_session_mng_process]:packet_buf is null point exception\n");
        return DPI_NULL_POINT;
    }

    if(NULL == pkt_info)
    {
        printf("[flow_session_mng_process]:pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }

    pkt_info->is_send_to_sdk = false;

    /* 获取哈希key */
    (void)update_session_hash_key(pkt_info->ip, &hash_key);
    /* 先以报文携带的五元组查找哈希表 */
    ret = hash_cell_get_by_hash(DPI_GET_TABLE_PTR(TABLE_SESSION), &hash_key, 
        &session_search_d, sizeof(dpi_table_session_mng_t));

    if( DPI_CELL_FOUND != ret )
    {
        /*如果以报文携带的五元组查找不到哈希表，则以报文反向的五元组再进行哈希查找*/
        opposite_dirt_5tuple.sip      = pkt_info->ip.dip;
        opposite_dirt_5tuple.dip      = pkt_info->ip.sip;
        opposite_dirt_5tuple.src_port = pkt_info->ip.dst_port;
        opposite_dirt_5tuple.dst_port = pkt_info->ip.src_port;
        opposite_dirt_5tuple.protocol = pkt_info->ip.protocol;
        (void)update_session_hash_key(opposite_dirt_5tuple, &hash_key);
        ret = hash_cell_get_by_hash(DPI_GET_TABLE_PTR(TABLE_SESSION), &hash_key, 
            &session_search_d, sizeof(dpi_table_session_mng_t));

        if( DPI_CELL_FOUND == ret )
        {
            is_find_flow_ses = true;
            pkt_info->pktdir = DOWN_LINK;
        }
        else
        {
            pkt_info->pktdir = UP_LINK;
        }
    }
    else
    {
        is_find_flow_ses = true;
        pkt_info->pktdir = UP_LINK;
    }

    /*************************************UDP流程处理***************************************/
    dpi_table_session_mng_t     session_cell   = {};
    hash_table_index_t          session_index  = {};
    uint64_t                    action_session = 0;

    if(IP_PROTO_UDP == pkt_info->ip.protocol)
    {
        if(is_find_flow_ses)
        {
            if(session_search_d.count<MAX_FLOW_SES_PACKET_NUM)
            {
                memcpy(&session_cell.ip_5tuple,&session_search_d.ip_5tuple,sizeof(dpi_5tuple_t));
                session_cell.count = session_search_d.count+1;
                action_session|=SESSION_T_UPDATE_COUNT;
                session_cell.aging = g_aging_timer_max;
                action_session|=SESSION_T_UPDATE_AGING;

                pkt_info->thread_id = session_search_d.thread_id;
                ret = create_update_table_by_hash(TABLE_SESSION, UPDATE_TABLE, action_session, (void*)&session_cell, sizeof(dpi_table_session_mng_t), &session_index);
                if(DPI_OK != ret)
                {
                    //
                    return DPI_FAIL;
                }
                //send to dpi sdk
                pkt_info->is_send_to_sdk = true;
            }
        }
        else
        {
            memcpy(&session_cell.ip_5tuple,&pkt_info->ip,sizeof(dpi_5tuple_t));
            action_session|=SESSION_T_UPDATE_5TUPLE;
            session_cell.count = 1;
            action_session|=SESSION_T_UPDATE_COUNT;
            session_cell.aging = g_aging_timer_max;
            action_session|=SESSION_T_UPDATE_AGING;
            
            thread_id = flow_get_process_tread_id();
            
            session_cell.thread_id = thread_id;
            action_session|=SESSION_T_UPDATE_THREAD_ID;
            
            ret = create_update_table_by_hash(TABLE_SESSION, CREATE_TABLE, action_session, (void*)&session_cell, sizeof(dpi_table_session_mng_t), &session_index);
            if(DPI_OK != ret)
            {
                //
                return DPI_FAIL;
            }
            //send to dpi sdk
            pkt_info->is_send_to_sdk = true;
            pkt_info->thread_id = thread_id;
        }
    }
    /*************************************TCP流程处理***************************************/
    else if(IP_PROTO_TCP == pkt_info->ip.protocol)
    {
        if(is_find_flow_ses)
        {
            if(session_search_d.count<MAX_FLOW_SES_PACKET_NUM)
            {
                switch(pkt_info->tcp_flag)
                {
                    case TCP_FLAG_TYPE_FIRST_SYN:
                        memcpy(&session_cell.ip_5tuple,&session_search_d.ip_5tuple,sizeof(dpi_5tuple_t));
                        session_cell.count = 1;
                        action_session|=SESSION_T_UPDATE_COUNT;
                        session_cell.aging = g_aging_timer_max;
                        action_session|=SESSION_T_UPDATE_AGING;

                        thread_id = flow_get_process_tread_id();
            
                        session_cell.thread_id = thread_id;
                        action_session|=SESSION_T_UPDATE_THREAD_ID;
                        
                        ret = create_update_table_by_hash(TABLE_SESSION, UPDATE_TABLE, action_session, (void*)&session_cell, sizeof(dpi_table_session_mng_t), &session_index);
                        if(DPI_OK != ret)
                        {
                            //
                            return DPI_FAIL;
                        }
                        //send to dpi sdk
                        pkt_info->is_send_to_sdk = true;
                        pkt_info->thread_id = thread_id;
                        break;

                    case TCP_FLAG_TYPE_FIN:
                    case TCP_FLAG_TYPE_RST:
                        //send to dpi sdk
                        pkt_info->thread_id = session_search_d.thread_id;
                        pkt_info->is_send_to_sdk = true;
                        //老化表项
                        break;

                    default:
                        memcpy(&session_cell.ip_5tuple,&session_search_d.ip_5tuple,sizeof(dpi_5tuple_t));
                        session_cell.count = session_search_d.count+1;
                        action_session|=SESSION_T_UPDATE_COUNT;
                        session_cell.aging = g_aging_timer_max;
                        action_session|=SESSION_T_UPDATE_AGING;

                        ret = create_update_table_by_hash(TABLE_SESSION, UPDATE_TABLE, action_session, (void*)&session_cell, sizeof(dpi_table_session_mng_t), &session_index);
                        if(DPI_OK != ret)
                        {
                            //
                            printf("【flow_session_mng_process】: UPDATE TABLE FAIL!!!ret = %d\n",ret);
                            return DPI_FAIL;
                        }
                        //send to dpi sdk
                        pkt_info->is_send_to_sdk = true;
                        pkt_info->thread_id = session_search_d.thread_id;
                        break;  
                        
                }
            }
           
        }
        else
        {
            if(TCP_FLAG_TYPE_FIRST_SYN == pkt_info->tcp_flag)
            {
                memcpy(&session_cell.ip_5tuple,&pkt_info->ip,sizeof(dpi_5tuple_t));
                action_session|=SESSION_T_UPDATE_5TUPLE;
                session_cell.count = 1;
                action_session|=SESSION_T_UPDATE_COUNT;
                session_cell.aging = g_aging_timer_max;
                action_session|=SESSION_T_UPDATE_AGING;

                thread_id = flow_get_process_tread_id();
            
                session_cell.thread_id = thread_id;
                action_session|=SESSION_T_UPDATE_THREAD_ID;
                
                ret = create_update_table_by_hash(TABLE_SESSION, CREATE_TABLE, action_session, (void*)&session_cell, sizeof(dpi_table_session_mng_t), &session_index);
                if(DPI_OK != ret)
                {
                    //
                    return DPI_FAIL;
                }
                else
                {
                    printf("[flow_session_mng_process]:create_update_table_by_hash success!\n");
                    //send to dpi sdk
                    pkt_info->is_send_to_sdk = true;
                    pkt_info->thread_id = thread_id;
                }
            }
        }
    }

    return DPI_OK;
}

dpi_code_t flow_process(pbuf *packet_buf,parse_pkt_info_t *packet_info)
{
    dpi_code_t          ret = DPI_OK;

    if(NULL == packet_buf || NULL == packet_info)
    {
        printf("[flow_process]:packet_buf&pkt_info is null point exception\n");
        return DPI_NULL_POINT;
    }

    memset(packet_info,0,sizeof(parse_pkt_info_t));

    /*对报文进行解析*/
    ret = semp_packet_entry_parse(packet_buf, packet_info);
    if(DPI_OK !=  ret)
    {
        printf("parse packet info fail.\n");
        return ret;
    }

    ret = flow_session_mng_process(packet_buf, packet_info);
    if(DPI_OK !=  ret)
    {
        printf("flow session manage process fail.\n");
        return ret;
    }

    return DPI_OK;
}

