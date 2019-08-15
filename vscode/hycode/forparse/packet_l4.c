/******************************************************************************

 ��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾ 
 
 ****************************************************************************** 
  �ļ���       : packet_l4.c 
  �����ʽ     ��ASCII
  �汾         : Initial Draft 
  ����         : Jonathan
  ����         : 2015/9/6
  �ϴ��޸�     :  
  ����         : ����l4Э��
  �����б�     : 
  ��ʷ         : 
  1.����       : 2015/9/6
    ����       : Jonathan
    �޸�       : Created file 
 ******************************************************************************/ 


#include "packet_entry.h"



mp_error_t semp_L4_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp,  uint8_t protocol, int outer_inner)
{
    MASTER_PARAM_CHECK(work, p, mpp);
    mpp->tuple->v4.protocol = protocol;
    
    mpp->tuple->v.protocol = protocol;

    switch(protocol)
    {
        case IP_PROTO_UDP:
            if (HEADER_OUTER == outer_inner)
            {
                LOG_PRINT(M_PARSE, LV_INFO, "Enter UDP:\n");
                hydra_stat_inc(stat_business_outerl4_udp);
#define DEBUG_S11_CLOSE 0
#if DEBUG_S11_CLOSE
        return MP_E_NONE;
#else
                return semp_udp_parse(work, p, mpp, outer_inner);
#endif
            }
            else
            {
                hydra_stat_inc(stat_business_innerl4_udp);
                break;
            }
        case IP_PROTO_STCP:
            if (HEADER_OUTER == outer_inner)
            {
               hydra_stat_inc(stat_business_outerl4_sctp);
               LOG_PRINT(M_PARSE, LV_INFO, "Enter SCTP:\n");
#define DEBUG_S11_ONLY 0
#if DEBUG_S11_ONLY
               return MP_E_NONE;
#else
               return semp_sctp_parse(work, p, mpp);
#endif
            }
            else
            {
                hydra_stat_inc(stat_business_innerl4_sctp);
                break;
            }
         default:
            LOG_PRINT(M_PARSE, LV_INFO, "Unsupported protocol: %d.\n", protocol);
            mpp->tuple->v4.protocol = 0;
            mpp->tuple->v.protocol = 0;
            if (HEADER_OUTER == outer_inner)
            {
                HYDRA_STAT_INC(stat_outerother_pkt);
            }
            else
            {
                HYDRA_STAT_INC(stat_innerother_pkt);
            }
            break;
    }

    return MP_E_NONE;
}

