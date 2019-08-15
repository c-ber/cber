
/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司 
 
 ****************************************************************************** 
  文件名       : packet_sctp.c
  编码格式     ：ASCII
  版本         : Initial Draft 
  作者         : Zhengwan
  创建         : 2015/9/6
  上次修改     :  
  描述         : sctp协议的解析
  功能列表     : 
  历史         : 
  1.日期       : 2015/9/6
    作者       : Zhengwan
    修改       : Created file 
 ******************************************************************************/ 

#include "packet_entry.h"
#include "packet_sctp.h"

CVMX_SHARED uint16_t  g_s1ap_port = S1AP_PORT_M;
CVMX_SHARED uint16_t  g_dmt_cust_port = DMT_ST_PORT;

/******************************************************************************
 * 函数名称    : semp_sctp_parse
 * 描述        : 解析sctp报文
 * 输入        : wqe指针:work,报文净荷指针:p,mpp指针:mpp
 * 输出        : 无
 * 返回        : 成功返回MP_E_NONE，
 *               失败返回错误码
******************************************************************************/
mp_error_t semp_sctp_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp)
{
    uint8_t  iups_msg_num  = 0;
    uint16_t sport         = 0;
    uint16_t dport         = 0;
    uint16_t ppid          = 0;
    uint32_t sctp_data_chunk_stat = 0;
    uint8_t  is_ranap_count       = 0;   //判断ranap报文是否已经被统计，为零时没有统计
    uint8_t  is_sccp_count        = 0;   //判断sccp报文是否已经被统计，为零时没有统计
    sctp_common_hdr_t       *sctp_common_hdr        = NULL;
    sctp_common_chunk_hdr_t *sctp_chunk_common_hdr  = NULL;
    data_chunk_hdr_t        *data_chunk_hdr         = NULL;
    parse_IuPS_t            *pstIuPs_Info           = NULL;
    uint8_t                 *pm3uaData              = NULL;

    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, SCTP_COMMON_HDR_LEN);
    INC_STATS_PKTS(all_proto_statistic[g_corenum].sctp_proto_pkts, 1);
    PBUF_CUR_FORMAT(sctp_common_hdr_t *, sctp_common_hdr, p);

    sport = semp_ntohs(sctp_common_hdr->source);//获取源端口号
    dport = semp_ntohs(sctp_common_hdr->dest);//获取目的端口号
 
    mpp->pktinfo.ip.srcport = sport;
    mpp->pktinfo.ip.dstport = dport;

    /*yzr 报文识别之后统一对五元组赋一个外层的ip+port+protocol*/
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
         /* 此处需要对 chunk length进行判断，防止chunk len为0时进入了死循环 */
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

            /* 检查标准端口 */
            /* 源端口或目的端口为diameter标准端口 */
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

            /* 源端口或目的端口为s1ap标准端口 */
            else if ((S1AP_PORT_M == sport) || (S1AP_PORT_M == dport))/*判断源端口和目的端口是否为默认端口*/
            {
                LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(port match), sport=%d, dport=%d.\n", sport, dport);
                /* 判断sctp的Payload protocol identifier是否为18(s1ap) */
                if (SCTP_DATA_PPI_S1AP == ppid)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_match_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_SUCCESS);  /*设置结果为成功*/
                    SET_LTE_IDENTIFY_PROTOCOL(mpp, PARSE_PROTOCOL_S1AP);  /*设置协议类型为s1ap协议*/
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

            /* 判断源端口和目的端口是否均为可配端口 */
            else if ((S1AP_PORT_V == sport) || (S1AP_PORT_V == dport))
            {
                LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(port match), sport=%d, dport=%d.\n", sport, dport);

                /* 判断sctp的Payload protocol identifier是否为18(s1ap) */
                if (SCTP_DATA_PPI_S1AP == ppid)
                {
                    LOG_PRINT(M_PARSE, LV_INFO, "SCTP-S1AP(ppid match), ppid=%d.\n", ppid);
                    hydra_stat_inc(stat_business_s1ap_custom_port_pkt);
                    SET_LTE_IDENTIFY_RESULT(mpp, PARSE_SUCCESS);  /*设置结果为成功*/
                    SET_LTE_IDENTIFY_PROTOCOL(mpp, PARSE_PROTOCOL_S1AP);  /*设置协议类型为s1ap协议*/
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

        /*解决某些报文vlan在报文末尾多带四个字节，导致解析trunk data 长度为0变成死循环*/
        if(p->ptr_offset - p->l4_first_addr >= p->l4_total_len)
        {
            /*IP内容L4层及其以上应用层的字节已经全部解析完毕*/
            break;
        }
        UPDATE_PBUF_OFFSET(p,sctp_chunk_common_hdr->chunk_len);
        
    }while( PBUF_LEFT_LEN(p) > 0);

    return MP_E_NONE;
}

