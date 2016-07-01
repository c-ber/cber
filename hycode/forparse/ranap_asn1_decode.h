/*-----------------------------------------------------------------------------
 �ļ���  : s1ap_asn1_decode.h
 ����    : ruanxiangwei
 �汾    : v1.0
 �������: 2016-03-14
 �ļ�����: RANAP��ASN���봦���ֵ�ͷ�ļ�
 ��ע    : �������͵Ľ���ʵ��
 �޸���ʷ:
 1.�޸���: ruanxiangwei
 ʱ��    : 2016.03.14
 �汾    : v1.0
 �޸�ԭ��: �������ļ�
 2...
-----------------------------------------------------------------------------*/

#ifndef _RANAP_ASN1_DECODE_H__
#define _RANAP_ASN1_DECODE_H__

#include "ASN_BitOpr.h"
#include "ASN_PrimCode.h"
#include "semp_hydra_relate.h"
#include "packet_ranap.h"

/*=====================���Ͷ���========================*/
//ProcedureCode             ::= INTEGER (0..255)
typedef uint8_t     ranapProcedureCode;

/*=====================ö�ٶ���========================*/


/*=====================�궨��==========================*/
/*CS��PS���־*/
#define PS_DOMAIN                     1
#define CS_DOMAIN                     0 


/*pdu���ͷ�Χ*/
#define RANAP_TRIGGER_MSG_MAX           3
#define RANAP_TRIGGER_MSG_MIN           0

/*��Ҫ�Ա�־��Χ*/
#define RANAP_CRITICALITY_MAX           3
#define RANAP_CRITICALITY_MIN           0

/*peocedureCode��Χ*/
#define RANAP_PROCEDURECODE_MAX         255
#define RANAP_PROCEDURECODE_MIN         0

/*protocolIE������Χ*/
#define RANAP_PROTOCOLIE_NUM_MAX        65535
#define RANAP_PROTOCOLIE_NUM_MIN        0

/*CNDomain��ֵ��Χ,Ϊ1ʱ����ps��Ϊ��ʱ����cs��*/
#define RANAP_CNDomain_MAX              1  
#define RANAP_CNDomain_MIN              0

/*imsi�ַ����ĳ��ȷ�Χ*/
#define RANAP_IMSI_LEN_MAX              8
#define RANAP_IMSI_LEN_MIN              3

/*id_RAB_SetupOrModifiedList ������ie�������ķ�Χ*/
#define RAB_SETORMODLIST_IE_NUM_MAX     256
#define RAB_SETORMODLIST_IE_NUM_MIN     1

/*bearIDռ��bit��*/
#define BEARID_BIT_NUM                  8

/*transportLayerAddress ��ռ��bit���ȷ�Χ*/
#define TRANSPORTLAYERADDRESS_LEN_MAX   160
#define TRANSPORTLAYERADDRESS_LEN_MIN   1

/*IPV4��IPV6��ip��ַ����*/
#define IPV4_OCTET_LEN                  4
#define IPV4_BIT_LEN                    32

#define IPV6_OCTET_LEN                  16
#define IPV6_BIT_LEN                    128

/*TransportAssociation�����ͷ�Χ��Ϊ��ʱ��teid*/
#define TRANSPORTASSOCIATION_MAX        1
#define TRANSPORTASSOCIATION_MIN        0

/*nasSyncIndicator bitλ����*/
#define NASSYNCINDICATOR_BIT_LEN        4

/*trafficClass bitλ����*/
#define TRAFFICCLASS_BIT_LEN            2

/*rAB_AsymmetryIndicator bitλ����*/
#define RAB_ASYMMETRYINDICATOR_BIT_LEN  2

/*maxBitrate item ������Χ*/
#define MAXBITRATE_ITEM_NUM_MAX         2
#define MAXBITRATE_ITEM_NUM_MIN         1

/*maxBitrate ֵ�ķ�Χ*/
#define MAXBITRATE_MAX                  16000000
#define MAXBITRATE_MIN                  0

/*guaranteedBitRate item ������Χ*/
#define GUARANTEEDBITRATE_ITEM_NUM_MAX  2
#define GUARANTEEDBITRATE_ITEM_NUM_MIN  1

/*guaranteedBitRateֵ�ķ�Χ*/
#define GUARANTEEDBITRATE_MAX           16000000
#define GUARANTEEDBITRATE_MIN           0

/*deliveryOrder ��ռbit����*/
#define DELIVERYORDER_BIT_LEN           1

/*maxSDU_Size ��ռbit��*/
#define MAXSDU_BIT_LEN                  16

/*sDU_Parameters item ������Χ*/
#define SDU_PARAMETERS_ITEM_NUM_MAX     7
#define SDU_PARAMETERS_ITEM_NUM_MIN     1

/*sDU_ErrorRatio ����bit����*/
#define SDU_ERRORRATIO_CONTENT_BIT_LEN  7

/*deliveryOfErroneousSDU bit����*/
#define DELIVERYOFERRONEOUSSDU_BIT_LEN  2

/*FormatInformation item �ķ�Χ*/
#define FORMATIONINFORMATION_ITEM_MAX   64
#define FORMATIONINFORMATION_ITEM_MIN   1

/*subflowSDU_Size bit����*/
#define SUBFLOWSDU_SIZE_BIT_LEN         16

/*BitRate�ķ�Χ*/
#define BIT_RATE_MAX                    16000000
#define BIT_RATE_MIN                    0

/*TransferDelay��bitλ��*/
#define TRANSFERDELAY_BIT_LEN           16

/*TrafficHandlingPriority��bitλ��*/
#define TRAFFICHASNLINGPRIORITY_BIT_LEN 4

/*AorPriority��bitλ��*/
#define AORPRIORITY_BIT_LEN             7

/*SsDescriptor��bitλ��*/
#define SSDESCRIPTOR_BIT_LEN            1

/*relocationRequirement��bitλ��*/
#define RELOCAREQ_BIT_LEN               1

/*userPlaneMode ��bitλ��*/
#define USERPLANEMODE_BIT_LEN           1

/*uP_ModeVersions ��bitλ��*/
#define UP_MODEVERSION_BIT_LEN          16

/*����pdu��ͷ������procedureCode��criticality��length���������Ϊ���������*/
#define PARSE_PDU_COMMON_HEAD(head, pst_Bp)\
{\
             head.ucProcedureCode = (uint8_t)ranap_decode_ConsInteger\
                    (pst_Bp, RANAP_PROCEDURECODE_MIN, RANAP_PROCEDURECODE_MAX);\
             head.enCriticality = (EN_RANAP_CRITICALITY)ranap_decode_ConsInteger\
                    (pst_Bp, RANAP_CRITICALITY_MIN, RANAP_CRITICALITY_MAX);\
             head.value_lenth = (uint32_t)PER_DecodeLengthDeterminant(pst_Bp);\
             if(!head.value_lenth) return MP_FAIL;\
}

/*����IE��ͨ�ø�ʽ��ͷ������IE��ID��criticality��length*/
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


/*RAI��ӡ*/
#define RAI_PRINTF(rai)\
    LOG_PRINT(M_PARSE, LV_INFO, "initialUEMsg_RAI = %02x %02x %02x %02x %02x %02x\n",\
                                                rai[0],rai[1],rai[2],rai[3],rai[4],rai[5]);

/*�ж��ǲ���PS�򣬲��Ǿͷ���*/
#define IS_PS_DOMAIN(CNDomain)\
    if(PS_DOMAIN != CNDomain)\
    {\
        hydra_stat_inc(stat_business_ranap_pkts_not_PSdomain);\
        LOG_PRINT(M_PARSE, LV_ERROR, "CNDomain is not PSDomain\n");\
        return MP_E_INVALID_PACKET;\
    }

/*=====================�ṹ�嶨��======================*/
typedef struct tag_ranap_PDU_hd
{
    ranapProcedureCode           ucProcedureCode;            //���������룬INTEGER (0-255)�������_RANAP_ProcedureCode_enum
    EN_RANAP_CRITICALITY         enCriticality;              //(0-2)������� EN_RANAP_CRITICALITY
    uint32_t                     value_lenth;                //���ݵĳ��� (0-65535)
}RANAP_INIT_MSG_HD_t, RANAP_SUCC_OUTCOME_HD_t, RANAP_UNSUCC_OUTCOME_HD_t, RANAP_OUTCOME_HD_t;

typedef struct tag_ranap_protocolIE_hd
{
    uint16_t                    IE_id;                      //Information Element��id(0-65535)�������_ProtocolIE_ID_enum
    EN_RANAP_CRITICALITY        enCriticality;              //(0-2)������� EN_RANAP_CRITICALITY
    uint                        value_lenth;                //���ݵĳ��� (0-65535)
}ST_RANAP_IE_COMMON_hd;

/*=====================��������========================*/

mp_error_t ranap_pdu_decode(ST_BITPOINTER *pst_Bp, parse_IuPS_t *pstIuPs_Info);



#endif
