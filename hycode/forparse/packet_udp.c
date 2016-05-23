/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司

 ******************************************************************************
  文件名       : packet_udp.c
  编码格式     ：ASCII
  版本         : Initial Draft
  作者         :Jonathan
  创建         : 2015/9/6
  上次修改     :
  描述         : 解析udp协议
  功能列表     :
  历史         :
  1.日期       : 2015/9/6
    作者       : Jonathan
    修改       : Created file
 ******************************************************************************/



#include "packet_entry.h"


mp_error_t semp_udp_parse(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp, int inner_outer)
{
    uint16_t outer_srcport = 0;
    uint16_t outer_dstport = 0;
    struct udp_hdr *udphdr = NULL;   /*udp 头部*/
    struct gtp_c_version  *gtpc_vers;

    MASTER_PARAM_CHECK(work, p, mpp);

    CHECK_PBUF_LEN(p, UDP_HLEN);
    INC_STATS_PKTS(all_proto_statistic[g_corenum].udp_proto_pkts, 1);

    PBUF_CUR_FORMAT(struct udp_hdr *, udphdr, p);

    if (HEADER_OUTER == inner_outer)
    {
        /* convert src and dest ports to host byte order */
        outer_srcport = ntohs(udphdr->src);
        outer_dstport = ntohs(udphdr->dest);
        mpp->pktinfo.ip.srcport = outer_srcport;
        mpp->pktinfo.ip.dstport = outer_dstport;
        LOG_PRINT(M_PARSE, LV_INFO, "osp:%d, odp:%d.\n", outer_srcport, outer_dstport);
        HYDRA_STAT_INC(stat_outerudp_pkt);
    }
    else
    {
        HYDRA_STAT_INC(stat_innerudp_pkt);
    }

    mpp->tuple->v4.src_port = outer_srcport;
    mpp->tuple->v4.dst_port = outer_dstport;
    
    mpp->tuple->v.src_port = outer_srcport;
    mpp->tuple->v.dst_port = outer_dstport;

    UPDATE_PBUF_OFFSET(p, UDP_HLEN);
    LOG_PRINT(M_PARSE, LV_INFO, "outer_srcport = %d, outer_dstport = %d.\n",
                               outer_srcport, outer_dstport);

    if ( (GTP_C_PORT_M == outer_srcport)
      || (GTP_C_PORT_M == outer_dstport) )
    {  
        CHECK_PBUF_LEN(p, 4);
        PBUF_CUR_FORMAT(struct gtp_c_version *, gtpc_vers, p);
        if(GTPv1_VERSION_IN_HDR == gtpc_vers->version)
        {
            LOG_PRINT(M_PARSE, LV_INFO, "Enter gtpv1c:\n");
            HYDRA_STAT_INC(stat_pkts_gtpv1c_match_port);
            SET_MPP_PARSE_PRO(mpp, PARSE_PROTOCOL_GTPCV1);
            return semp_gtpv1c_parse(work, p, mpp);
        }
        else
            return MP_E_NONE;    
    }
    else
    {
        HYDRA_STAT_INC(stat_pkts_not_gtp);
        return MP_E_NONE;
    }
}


