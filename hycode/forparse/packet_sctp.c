
/******************************************************************************

 ��Ȩ���У�C����2001-2015�꣬����Ƽ��ɷ����޹�˾ 
 
 ****************************************************************************** 
  �ļ���       : packet_sctp.c
  �����ʽ     ��ASCII
  �汾         : Initial Draft 
  ����         : Zhengwan
  ����         : 2015/9/6
  �ϴ��޸�     :  
  ����         : sctpЭ��Ľ���
  �����б�     : 
  ��ʷ         : 
  1.����       : 2015/9/6
    ����       : Zhengwan
    �޸�       : Created file 
 ******************************************************************************/ 

#include "packet_entry.h"
#include "packet_sctp.h"

CVMX_SHARED uint16_t  g_s1ap_port = S1AP_PORT_M;
CVMX_SHARED uint16_t  g_dmt_cust_port = DMT_ST_PORT;

/******************************************************************************
 * ��������    : semp_sctp_parse
 * ����        : ����sctp����
 * ����        : wqeָ��:work,���ľ���ָ��:p,mppָ��:mpp
 * ���        : ��
 * ����        : �ɹ�����MP_E_NONE��
 *               ʧ�ܷ��ش�����
******************************************************************************/
mp_error_t semp_sctp_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    uint8_t  iups_msg_num  = 0;
    uint16_t sport         = 0;
    uint16_t dport         = 0;
    uint16_t ppid          = 0;
    uint32_t sctp_data_chunk_stat = 0;
    uint8_t  is_ranap_count       = 0;   //�ж�ranap�����Ƿ��Ѿ���ͳ�ƣ�Ϊ��ʱû��ͳ��
    uint8_t  is_sccp_count        = 0;   //�ж�sccp�����Ƿ��Ѿ���ͳ�ƣ�Ϊ��ʱû��ͳ��
    sctp_common_hdr_t       *sctp_common_hdr        = NULL;
    sctp_common_chunk_hdr_t *sctp_chunk_common_hdr  = NULL;
    data_chunk_hdr_t        *data_chunk_hdr         = NULL;
    parse_IuPS_t            *pstIuPs_Info           = NULL;
    uint8_t                 *pm3uaData              = NULL;

    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, SCTP_COMMON_HDR_LEN);
    INC_STATS_PKTS(all_proto_statistic[g_corenum].sctp_proto_pkts, 1);
    PBUF_CUR_FORMAT(sctp_common_hdr_t *, sctp_common_hdr, p);

    sport = semp_ntohs(sctp_common_hdr->source);//��ȡԴ�˿ں�
    dport = semp_ntohs(sctp_common_hdr->dest);//��ȡĿ�Ķ˿ں�
 
    mpp->pktinfo.ip.srcport = sport;
    mpp->pktinfo.ip.dstport = dport;

    /*yzr ����ʶ��֮��ͳһ����Ԫ�鸳һ������ip+port+protocol*/
    mpp->tuple->v4.src_port = sport;
    mpp->tuple->v4.dst_port = dport;
    
    mpp->tuple->v.src_port = sport;
    mpp->tuple->v.dst_port = dport;

    UPDATE_PBUF_OFFSET(p, SCTP_COMMON_HDR_LEN);
    do
    {
        CHECK_PBUF_LEN(p, sizeof(sctp_common_chunk_hdr_t));
        PBUF_CUR_FORMAT(sctp_common_chunk_hdr_t *, sctp_chunk_common_hdr, p);
        sctp_chunk_common_hdr->chunk_len = ntohs(sctp_chunk_common_hdr->chunk_len);
         /* �˴���Ҫ�� chunk length�����жϣ���ֹchunk lenΪ0ʱ��������ѭ�� */
        if (sctp_chunk_common_hdr->chunk_len < sizeof(sctp_common_chunk_hdr_t))
        {
            return MP_E_FAIL;
        }

        CHECK_PBUF_LEN(p, sctp_chunk_common_hdr->chunk_len);
        if (CHUNK_TYPE_DATA == sctp_chunk_common_hdr->chunk_type)
        {
            sctp_data_chunk_stat ++;
            if (sctp_data_chunk_stat == 2)
            {
                hydra_stat_inc(stat_business_multi_data_chunk_sctp);
            }

            CHECK_PBUF_LEN(p, sizeof(data_chunk_hdr_t));
            PBUF_CUR_FORMAT(data_chunk_hdr_t  *, data_chunk_hdr, p);

            if (data_chunk_hdr->chunk_len < sizeof(data_chunk_hdr_t))
            {
                LOG_PRINT(M_PARSE, LV_ERROR, "data chunk len is invalid.\n");
                return MP_E_EXCEED;
            }
            data_chunk_hdr->ppid = ntohl(data_chunk_hdr->ppid);
            ppid = data_chunk_hdr->ppid;

            /* ����׼�˿� */
            /* Դ�˿ڻ�Ŀ�Ķ˿�Ϊdiameter��׼�˿� */
            if ((DMT_ST_PORT == sport) || (DMT_ST_PORT == dport))
            {
                LOG_PRINT(M_PARSE, LV_INFO, "SCTP-DIAMETER(port match), sport=%d, dport=%d.\n", sport, dport);
                hydra_stat_inc(stat_business_dmt_standard_port_pkts);
                SET_LTE_IDENTIFY_RESULT(mpp, PARSE_SUCCESS);
                SET_LTE_IDENTIFY_PROTOCOL(mpp,PARSE_PROTOCOL_DIAMETER);
                UPDATE_PBUF_OFFSET(p,DATA_CHUNK_HDR_LEN);
                //parse_dmt_pkt(work,p,mpp);
                return MP_E_NONE;
            }

            /* Դ�˿ڻ�Ŀ�Ķ˿�Ϊs1ap��׼�˿� */
            else if ((S1AP_PORT_M == sport) || (S1AP_PORT_M == dport))/*�ж�Դ�˿ں�Ŀ�Ķ˿��Ƿ�ΪĬ�϶˿�*/
            {
                LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(port match), sport=%d, dport=%d.\n", sport, dport);
                /* �ж�sctp��Payload protocol identifier�Ƿ�Ϊ18(s1ap) */
                if (SCTP_DATA_PPI_S1AP == ppid)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_match_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_SUCCESS);  /*���ý��Ϊ�ɹ�*/
                    SET_LTE_IDENTIFY_PROTOCOL(mpp, PARSE_PROTOCOL_S1AP);  /*����Э������Ϊs1apЭ��*/
                    UPDATE_PBUF_OFFSET(p, DATA_CHUNK_HDR_LEN);
                    semp_s1ap_parse(work, p, mpp);
                    INC_STATS_PKTS(all_proto_statistic[g_corenum].s1ap, 1);
                    return MP_E_NONE;
                }
                else
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid not match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_not_match_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_UNKNOW_OR_NOSUPPORT);
                    return MP_E_NONE;
                }
            }

            /* �ж�Դ�˿ں�Ŀ�Ķ˿��Ƿ��Ϊ����˿� */
            else if ((S1AP_PORT_V == sport) || (S1AP_PORT_V == dport))
            {
                LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(port match), sport=%d, dport=%d.\n", sport, dport);

                /* �ж�sctp��Payload protocol identifier�Ƿ�Ϊ18(s1ap) */
                if (SCTP_DATA_PPI_S1AP == ppid)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_custom_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_SUCCESS);  /*���ý��Ϊ�ɹ�*/
                    SET_LTE_IDENTIFY_PROTOCOL(mpp, PARSE_PROTOCOL_S1AP);  /*����Э������Ϊs1apЭ��*/
                    UPDATE_PBUF_OFFSET(p, DATA_CHUNK_HDR_LEN);
                    semp_s1ap_parse(work, p, mpp);
                    INC_STATS_PKTS(all_proto_statistic[g_corenum].s1ap, 1);
                    return MP_E_NONE;
                }
                else
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid not match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_not_custom_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_UNKNOW_OR_NOSUPPORT);
                    return MP_E_NONE;
                }
            }
        }

        /*���ĳЩ����vlan�ڱ���ĩβ����ĸ��ֽڣ����½���trunk data ����Ϊ0�����ѭ��*/
        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            /*IP����L4�㼰������Ӧ�ò���ֽ��Ѿ�ȫ���������*/
            break;
        }
        UPDATE_PBUF_OFFSET(p,sctp_chunk_common_hdr->chunk_len);
        
    }while( PBUF_LEFT_LEN(p) > 0);

    return MP_E_NONE;
}

