/******************************************************************************

 版权所有（C），2001-2015年，恒扬科技股份有限公司 
 
 ****************************************************************************** 
  文件名       : packet_entry.c 
  编码格式     ：ASCII
  版本         : Initial Draft 
  作者         : Joanthan
  创建         : 2015/9/6
  上次修改     :  
  描述         : 解析报文入口
  功能列表     : 
  历史         : 
  1.日期       : 2015/9/6
    作者       : Joanthan
    修改       : Created file 
 ********************************************************************/




#include "packet_entry.h"

ip5tuple_st __packet_fivetuple;

mp_error_t semp_packet_entry_parse(cvmx_wqe_t *work, mpp_control_st *mpp)
{
    struct pbuf packetp;
    mp_error_t rv = MP_E_NONE;


    packetp.ptr = mpp->packet;
    packetp.len = mpp->pkt_len;
    packetp.ptr_offset = 0;

    rv = semp_ethernet_parse(work, &packetp, mpp);
    
    return rv;
}

inline void MPP_CLEAR_PACKET_DATA(mpp_control_st *mpp)
{
    memset(mpp, 0, sizeof(mpp_control_st));
}

inline void mppUpdatePacketPtr(mpp_control_st *mpp, void *addr)
{
    mpp->packet = addr;
}

inline void *mppGetPacketPtrFromWork(mpp_control_st *mpp)
{
    return mpp->packet;
}

inline void mppUpdatePacketIngressInterface(mpp_control_st *mpp, uint8_t  inif)
{
    mpp->iif = inif;
}

inline uint8_t mppGetPacketIngressInterfaceFromWork(mpp_control_st *mpp)
{
    return mpp->iif;
}

inline void mppUpdatePacketIngressGroup(mpp_control_st *mpp, uint8_t iifgrp)
{
    mpp->iifgrp = iifgrp;
}

inline uint8_t mppGetPacketIngressGroupFromWork(mpp_control_st *mpp)
{
    return mpp->iifgrp;
}

inline void mppUpdatePacketStreamDirection(mpp_control_st *mpp, uint8_t direction)
{
    SEMP_TIME_RECORDER_TICK;
    mpp->stream_direction = direction;
}

inline uint8_t mppGetPacketStreamDirectionFromWork(mpp_control_st *mpp)
{
    return mpp->stream_direction;
}

inline void mppUpdatePacketEgressGroup(mpp_control_st *mpp, uint8_t *oifgrp)
{
    mpp->oifgrp[0] = oifgrp[0];
    mpp->oifgrp[1] = oifgrp[1];
    mpp->oifgrp[2] = oifgrp[2];
    mpp->oifgrp[3] = oifgrp[3];
}

inline uint8_t mppGetPacketEgressGroupFromWork(mpp_control_st *mpp, int i)
{
    return mpp->oifgrp[i];
}
inline uint8_t mppGetPacketEgressGroupNumFromWork(mpp_control_st *mpp)
{
    return mpp->fwd_oifgrp_num;
}

inline void mppSetPacketEgressGroupNumFromWork(mpp_control_st *mpp, uint32_t fwd_oifgrp_num)
{
    mpp->fwd_oifgrp_num = fwd_oifgrp_num;
}

inline void mppUpdateIphdrOffset(mpp_control_st *mpp,
                                                    uint8_t iphdr_offset)
{
    mpp->iphdr_offset = iphdr_offset;
}

inline uint8_t mppGetIphdrOffsetFromWork(mpp_control_st *mpp)
{
    return mpp->iphdr_offset;
}

inline void mppUpdatePacketType(mpp_control_st *mpp, uint8_t pkt_type)
{
    mpp->pkt_type = pkt_type;
}

inline uint8_t mppGetPacketTypeFromWork(mpp_control_st *mpp)
{
    return mpp->pkt_type;
}

inline void mppUpdateTuplePtr(mpp_control_st *mpp, void *tuple_ptr)
{
    mpp->tuple = tuple_ptr;
}

inline void *mppGetTuplePtrFromWork(mpp_control_st *mpp)
{
    return mpp->tuple;
}

inline int mppGetStreamDrection(mpp_control_st *mpp)
{
    return mpp->stream_direction;
}

inline void mppUpdatePacketAction(mpp_control_st *mpp, uint8_t action)
{
    mpp->action = action;
}

inline uint8_t mppGetPacketActionFromWork(mpp_control_st *mpp)
{
    return mpp->action;
}

inline void mppUpdatePacketApplProto(mpp_control_st *mpp,
                                                        uint16_t appl_proto)
{
    mpp->appl_proto = appl_proto;
}

inline uint16_t mppGetPacketApplProtoFromWork(mpp_control_st *mpp)
{
    return mpp->appl_proto;
}

inline void mppUpdatePacketL2ApplProto(mpp_control_st *mpp,
                                                          uint16_t appl_proto_l2)
{
    mpp->appl_proto_l2 = appl_proto_l2;
}

inline uint16_t mppGetPacketL2ApplProtoFromWork(mpp_control_st *mpp)
{
    return mpp->appl_proto_l2;
}


