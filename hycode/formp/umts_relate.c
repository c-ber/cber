/****************************************************************************** 

��Ȩ���У�C����2001-2016�꣬����Ƽ��ɷ����޹�˾

******************************************************************************
�ļ���:       umts_relate.c
�����ʽ:     ASCII
����:         ruansong
����:         Mar 17, 2016
��ʷ:
    1.����    :Mar 17, 2016
      ����    :ruansong
      �޸�    :Created file
******************************************************************************/

#include "umts_relate.h"


/*add by zhengwan, ��ȡ��������ʱ��ͳ��,begin*/
mp_code_t get_umts_table_create_statistics(table_name_t table_type)
{    
    switch(table_type)
    {
        case TABLE_IMSI:
            hydra_stat_inc(stat_pkts_create_imsiT);
            break;
        case TABLE_GTP_C:
            hydra_stat_inc(stat_pkts_create_gtpcT);
            break;
        case TABLE_GTP_U:
            hydra_stat_inc(stat_pkts_create_gtpuT);
            break;
        case TABLE_AN_INFO:
            hydra_stat_inc(stat_pkts_create_an_infoT);
            break;
        case TABLE_CN_INFO:
            hydra_stat_inc(stat_pkts_create_cn_infoT);
            break;
        case TABLE_P_TMSI:
            hydra_stat_inc(stat_pkts_create_p_tmsiT);
            break;
        default:
            break;
    }
    
    return MP_OK;
}
/*add by zhengwan, end*/

/**********************************************************************************************
  ��������      : umts_gn_c_relate_msg
  ����          : GN�ӿ�����GTPV1C����Ϣ�����Ĺ����������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : packet_ptr
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/
mp_error_t lte_gtpv1c_process(parse_gtpv1c_t *gtpv1c)
{
    CVMX_MP_POINT_CHECK(gtpv1c, M_S1, LV_ERROR);

    mp_error_t rv = MP_E_NONE; 
    switch(gtpv1c->message_type)
    {
        case GTPV1_C_MSG_CREATE_PDP_CONTEXT_REQ:
            rv = umts_gn_c_create_pdp_context_requset(gtpv1c);
            LTE_DEBUG_PRINTF("Enter create pdp context request \n");
            break;
            
        case GTPV1_C_MSG_CREATE_PDP_CONTEXT_RSP:
            rv = umts_gn_c_create_pdp_context_responese(gtpv1c);
            LTE_DEBUG_PRINTF("Enter create pdp context response \n");
            break;
            
        case GTPV1_C_MSG_UPDATE_PDP_CONTEXT_REQ:
            rv = umts_gn_c_update_pdp_context_request(gtpv1c);
            LTE_DEBUG_PRINTF("Enter update pdp context request \n");
            break;
            
        case GTPV1_C_MSG_UPDATE_PDP_CONTEXT_RSP:
            break;
            
        case GTPV1_C_MSG_DELETE_PDP_CONTEXT_REQ:
            break;
            
        case GTPV1_C_MSG_DELETE_PDP_CONTEXT_RSP:
            rv = umts_gn_c_delete_pdp_context_responese(gtpv1c);
            LTE_DEBUG_PRINTF("Enter delete pdp context response \n");
            break;
            
        default:
            break;          
    }
    
    if(MP_E_NONE != rv)
    {
        hydra_stat_inc(stat_pkts_lte_relate_failed);
    }
    
    return MP_OK;
}

/**********************************************************************************************
  ��������      : umts_IuPS_relate_init_ue_msg
  ����          : IuPS�ӿ�����RANAP����Ϣ�����Ĺ����������  
  ����          : 
  
  ������        : 
  �����ʵı�    : 
  ���޸ĵı�    : 
  ����          : packet_ptr
  ���          : ��
  ����          : ����ֵMP_OK/����mp_error_tö��ֵ
  ����          : 
**********************************************************************************************/

mp_error_t umts_IuPS_relevance_process(parse_IuPS_t *IuPS)
{
    CVMX_MP_POINT_CHECK(IuPS, M_S1, LV_ERROR);

    mp_error_t rv = MP_E_NONE; 

    switch(IuPS->ranap_info.procecode)
    {
        case  ranap_id_RAB_Assignment:
            if(IuPS->direction == EN_DIRECTION_DOWN_LINK)
            {
                rv = umts_IuPS_relate_rab_assigment_req(IuPS); //parse imsi or old_guti, create imsiT and S1-MME table
            }
            else
            {
                rv = umts_IuPS_relate_rab_assigment_rsp(IuPS);
            }
            break;
            
        case  ranap_id_InitialUE_Message:
            rv =  umts_IuPS_relate_init_ue_msg(IuPS);//parse GUTI , put into imsi table
            break;
            
        case  ranap_id_CommonID:
            rv = umts_IuPS_relate_command_id(IuPS); //parse identity response packet, 
            break;
            
        case  ranap_id_DirectTransfer:
            rv = umts_IuPS_relate_direct_transfer(IuPS); //parse imsi or old_guti, create imsiT or S1-MME table
            break;
            
        case  ranap_id_Iu_Release:
            if(IuPS->direction == EN_DIRECTION_DOWN_LINK)
            {
                rv = umts_IuPS_relate_Iu_release(IuPS); //delete imsi table and related tables
            }
            break;
        
        default:
            if(EN_SCCP_MESSAGE_CR == IuPS->sccp_info.message_type)
            {
                umts_IuPS_sccp_cr_msg_without_ranap(IuPS);
            }
            else if(EN_SCCP_MESSAGE_CC == IuPS->sccp_info.message_type)
            {
                umts_IuPS_sccp_cc_msg_without_ranap(IuPS);
            }
            break;
    }

    if(MP_E_NONE != rv)
    {
        hydra_stat_inc(stat_pkts_lte_relate_failed);        /*s1ap relate failed*/
    }

    return MP_E_NONE;
}


