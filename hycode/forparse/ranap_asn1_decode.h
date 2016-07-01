/*-----------------------------------------------------------------------------
 文件名  : s1ap_asn1_decode.h
 作者    : ruanxiangwei
 版本    : v1.0
 完成日期: 2016-03-14
 文件描述: RANAP－ASN解码处理部分的头文件
 备注    : 特殊类型的解码实现
 修改历史:
 1.修改者: ruanxiangwei
 时间    : 2016.03.14
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/

#ifndef _RANAP_ASN1_DECODE_H__
#define _RANAP_ASN1_DECODE_H__

#include "ASN_BitOpr.h"
#include "ASN_PrimCode.h"
#include "semp_hydra_relate.h"
#include "packet_ranap.h"

/*=====================类型定义========================*/
//ProcedureCode             ::= INTEGER (0..255)
typedef uint8_t     ranapProcedureCode;

/*=====================枚举定义========================*/


/*=====================宏定义==========================*/
/*CS、PS域标志*/
#define PS_DOMAIN                     1
#define CS_DOMAIN                     0 


/*pdu类型范围*/
#define RANAP_TRIGGER_MSG_MAX           3
#define RANAP_TRIGGER_MSG_MIN           0

/*重要性标志范围*/
#define RANAP_CRITICALITY_MAX           3
#define RANAP_CRITICALITY_MIN           0

/*peocedureCode范围*/
#define RANAP_PROCEDURECODE_MAX         255
#define RANAP_PROCEDURECODE_MIN         0

/*protocolIE数量范围*/
#define RANAP_PROTOCOLIE_NUM_MAX        65535
#define RANAP_PROTOCOLIE_NUM_MIN        0

/*CNDomain数值范围,为1时，是ps域，为零时，是cs域*/
#define RANAP_CNDomain_MAX              1  
#define RANAP_CNDomain_MIN              0

/*imsi字符串的长度范围*/
#define RANAP_IMSI_LEN_MAX              8
#define RANAP_IMSI_LEN_MIN              3

/*id_RAB_SetupOrModifiedList 包含的ie的数量的范围*/
#define RAB_SETORMODLIST_IE_NUM_MAX     256
#define RAB_SETORMODLIST_IE_NUM_MIN     1

/*bearID占的bit数*/
#define BEARID_BIT_NUM                  8

/*transportLayerAddress 所占的bit长度范围*/
#define TRANSPORTLAYERADDRESS_LEN_MAX   160
#define TRANSPORTLAYERADDRESS_LEN_MIN   1

/*IPV4和IPV6的ip地址长度*/
#define IPV4_OCTET_LEN                  4
#define IPV4_BIT_LEN                    32

#define IPV6_OCTET_LEN                  16
#define IPV6_BIT_LEN                    128

/*TransportAssociation的类型范围，为零时是teid*/
#define TRANSPORTASSOCIATION_MAX        1
#define TRANSPORTASSOCIATION_MIN        0

/*nasSyncIndicator bit位长度*/
#define NASSYNCINDICATOR_BIT_LEN        4

/*trafficClass bit位长度*/
#define TRAFFICCLASS_BIT_LEN            2

/*rAB_AsymmetryIndicator bit位长度*/
#define RAB_ASYMMETRYINDICATOR_BIT_LEN  2

/*maxBitrate item 数量范围*/
#define MAXBITRATE_ITEM_NUM_MAX         2
#define MAXBITRATE_ITEM_NUM_MIN         1

/*maxBitrate 值的范围*/
#define MAXBITRATE_MAX                  16000000
#define MAXBITRATE_MIN                  0

/*guaranteedBitRate item 数量范围*/
#define GUARANTEEDBITRATE_ITEM_NUM_MAX  2
#define GUARANTEEDBITRATE_ITEM_NUM_MIN  1

/*guaranteedBitRate值的范围*/
#define GUARANTEEDBITRATE_MAX           16000000
#define GUARANTEEDBITRATE_MIN           0

/*deliveryOrder 所占bit长度*/
#define DELIVERYORDER_BIT_LEN           1

/*maxSDU_Size 所占bit数*/
#define MAXSDU_BIT_LEN                  16

/*sDU_Parameters item 数量范围*/
#define SDU_PARAMETERS_ITEM_NUM_MAX     7
#define SDU_PARAMETERS_ITEM_NUM_MIN     1

/*sDU_ErrorRatio 内容bit长度*/
#define SDU_ERRORRATIO_CONTENT_BIT_LEN  7

/*deliveryOfErroneousSDU bit长度*/
#define DELIVERYOFERRONEOUSSDU_BIT_LEN  2

/*FormatInformation item 的范围*/
#define FORMATIONINFORMATION_ITEM_MAX   64
#define FORMATIONINFORMATION_ITEM_MIN   1

/*subflowSDU_Size bit长度*/
#define SUBFLOWSDU_SIZE_BIT_LEN         16

/*BitRate的范围*/
#define BIT_RATE_MAX                    16000000
#define BIT_RATE_MIN                    0

/*TransferDelay的bit位数*/
#define TRANSFERDELAY_BIT_LEN           16

/*TrafficHandlingPriority的bit位数*/
#define TRAFFICHASNLINGPRIORITY_BIT_LEN 4

/*AorPriority的bit位数*/
#define AORPRIORITY_BIT_LEN             7

/*SsDescriptor的bit位数*/
#define SSDESCRIPTOR_BIT_LEN            1

/*relocationRequirement的bit位数*/
#define RELOCAREQ_BIT_LEN               1

/*userPlaneMode 的bit位数*/
#define USERPLANEMODE_BIT_LEN           1

/*uP_ModeVersions 的bit位数*/
#define UP_MODEVERSION_BIT_LEN          16

/*解析pdu的头，包括procedureCode、criticality、length。如果长度为零则出错返回*/
#define PARSE_PDU_COMMON_HEAD(head, pst_Bp)\
{\
             head.ucProcedureCode = (uint8_t)ranap_decode_ConsInteger\
                    (pst_Bp, RANAP_PROCEDURECODE_MIN, RANAP_PROCEDURECODE_MAX);\
             head.enCriticality = (EN_RANAP_CRITICALITY)ranap_decode_ConsInteger\
                    (pst_Bp, RANAP_CRITICALITY_MIN, RANAP_CRITICALITY_MAX);\
             head.value_lenth = (uint32_t)PER_DecodeLengthDeterminant(pst_Bp);\
             if(!head.value_lenth) return MP_FAIL;\
}

/*解析IE的通用格式的头，包括IE的ID，criticality，length*/
#define PARSE_IE_COMMON_HEAD(pst_Bp, st_IE_Common_hd)\
{\
    st_IE_Common_hd.IE_id = \
                    (uint16_t)ranap_decode_ConsInteger(pst_Bp, \
                               RANAP_PROTOCOLIE_NUM_MIN, RANAP_PROTOCOLIE_NUM_MAX);\
    st_IE_Common_hd.enCriticality = \
                    (EN_RANAP_CRITICALITY)ranap_decode_ConsInteger(pst_Bp, \
                               RANAP_CRITICALITY_MIN, RANAP_CRITICALITY_MAX);\
    st_IE_Common_hd.value_lenth = (uint32_t)PER_DecodeLengthDeterminant(pst_Bp);\
}

#ifndef RANAP_ERR_RET
#define RANAP_ERR_RET(f)                                       \
   do {                                                     \
      ret = f;                                              \
      if (MP_E_NONE!= ret) {                                   \
         return ret;                                        \
      }                                                     \
   } while (0)
#endif


/*RAI打印*/
#define RAI_PRINTF(rai)\
    LOG_PRINT(M_PARSE, LV_INFO, "initialUEMsg_RAI = %02x %02x %02x %02x %02x %02x\n",\
                                                rai[0],rai[1],rai[2],rai[3],rai[4],rai[5]);

/*判断是不是PS域，不是就返回*/
#define IS_PS_DOMAIN(CNDomain)\
    if(PS_DOMAIN != CNDomain)\
    {\
        hydra_stat_inc(stat_business_ranap_pkts_not_PSdomain);\
        LOG_PRINT(M_PARSE, LV_ERROR, "CNDomain is not PSDomain\n");\
        return MP_E_INVALID_PACKET;\
    }

/*=====================结构体定义======================*/
typedef struct tag_ranap_PDU_hd
{
    ranapProcedureCode           ucProcedureCode;            //基本过程码，INTEGER (0-255)详见类型_RANAP_ProcedureCode_enum
    EN_RANAP_CRITICALITY         enCriticality;              //(0-2)详见类型 EN_RANAP_CRITICALITY
    uint32_t                     value_lenth;                //内容的长度 (0-65535)
}RANAP_INIT_MSG_HD_t, RANAP_SUCC_OUTCOME_HD_t, RANAP_UNSUCC_OUTCOME_HD_t, RANAP_OUTCOME_HD_t;

typedef struct tag_ranap_protocolIE_hd
{
    uint16_t                    IE_id;                      //Information Element的id(0-65535)详见类型_ProtocolIE_ID_enum
    EN_RANAP_CRITICALITY        enCriticality;              //(0-2)详见类型 EN_RANAP_CRITICALITY
    uint                        value_lenth;                //内容的长度 (0-65535)
}ST_RANAP_IE_COMMON_hd;

/*=====================函数定义========================*/

mp_error_t ranap_pdu_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info);



#endif
