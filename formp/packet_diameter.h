/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       packet_diameter.h
编码格式:     ASCII
作者:         chenbin
创建:         Jan 29, 2016
历史:
    1.日期    :Jan 29, 2016
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef PACKET_DIAMETER_H_
#define PACKET_DIAMETER_H_

#include <stdio.h>
#include "semp_hydra_lte.h"
#include "packet_entry.h"
#include "semp-errno.h"
#include "hydra_stat.h"
#include "cvmx_common.h"

#define DMT_DEBUG 0
#if DMT_DEBUG
    #define dmt_print(fmt,arg...)   printf("%s.%d: "fmt,__FUNCTION__,__LINE__,##arg)
#else
    #define dmt_print(fmt,arg...)
#endif
#define MAX_KEY_NUM                 (4)
#define DMT_HDR_LEN                 (20)
#define AVP_COMMON_HDR_LEN          (sizeof(avp_common_hdr_t))
#define VALID_DMT_VERSION           (0x01)
#define DMT_AUTH_CMD                (318)
#define DMT_3GPP_APP_ID             (16777251)
#define DMT_REQUEST_PKTS            (0x80)
#define DMT_RESPONSE_PKTS           (0x0)
#define DMT_TYPE_VALID              (0x01)
#define DMT_USER_NAME_VALID         (0x02)
#define DMT_KASME_RAND_PAIR_VALID   (0x04)
#define DMT_HOP_BY_HOP_VALID        (0x08)
#define AVP_VENDOR_SEG_LEN          (4)
#define AVP_CODE_USER               (1)
#define AVP_CODE_AUTH_INFO          (1413)
#define AVP_CODE_EUTRAN_VEC         (1414)
#define AVP_CODE_RAND               (1447)
#define AVP_CODE_KASME              (1450)
#define AVP_V_FLAG_SET              (0x80)


mp_error_t parse_dmt_pkt(cvmx_wqe_t *work, struct pbuf *p, mpp_control_st *mpp);




#endif /* PACKET_DIAMETER_H_ */
