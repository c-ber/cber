/*-----------------------------------------------------------------------------
 文件名  : s1ap_asn1_decode.h
 作者    : ruansong
 版本    : v1.0
 完成日期: 2016-01-19
 文件描述: ASN.1－ASN特殊的编解码处理部分的头文件
 备注    : 特殊类型的编解码实现
 修改历史:
 1.修改者: ruansong
 时间    : 2016.01.19
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C" {
#endif
/*---------------------------------------------------------------------------*/
#ifndef _ASN_SPECODE_H__
#define _ASN_SPECODE_H__

#include "ASN_BitOpr.h"
#include "ASN_PrimCode.h"
#include "semp_hydra_relate.h"
#include "packet_s1ap.h"


#define DIGIT_IPV4  32  /*IPV4的位数*/
#define DIGIT_IPV6  128 /*IPV6的位数*/

/*=================================类型定义==================================*/
//ProcedureCode             ::= INTEGER (0..255)
typedef _U8     ProcedureCode;

//DataVolumeReference			::= INTEGER (0..255)
typedef _U8     DataVolumeReference;


/*=================================枚举定义==================================*/

//triggering_message
typedef enum tag_EN_S1AP_TRIGGER_MSG
{
    EN_S1AP_TRIGGER_INIT_MSG           = 0,    //initiatingMessage
    EN_S1AP_TRIGGER_SUCC_OUT_COME      = 1,    //successfulOutcome
    EN_S1AP_TRIGGER_UNSUCC_OUT_COME    = 2,    //unsuccessfulOutcome
    EN_S1AP_TRIGGER_OUT_COME           = 3,    //outcome
}EN_S1AP_TRIGGER_MSG;
#define LEN_S1AP_TRIGGER_MSG               4    



//criticality
typedef enum tag_EN_S1AP_CRITICALITY
{
    EN_S1AP_CRITICALITY_REJECT,    //reject
    EN_S1AP_CRITICALITY_IGNORE,    //ignore
    EN_S1AP_CRITICALITY_NOTIFY,    //notify
}EN_S1AP_CRITICALITY;
#define LEN_S1AP_PDU_CRITICALITY           3


typedef enum tag_EN_S1AP_ERRCODE
{
    EN_S1AP_OK                      = 0,            /* 成功返回 */
    EN_S1AP_CODE_OK                 = 0,            /* 成功编解码 */
    EN_S1APERR_ENCODE               = 1,            /* 通用的编码错误 */
    EN_S1APERR_DECODE               = 2,            /* 通用的解码错误 */
    EN_S1APERR_CHOICE_OVER          = 3,            /* CHOICE类型索引值越界 */
    EN_S1APERR_EXT                  = 4,            /* 扩展类型错误 */
    EN_S1APERR_PARAM                = 5,            /* 参数错误 */
    EN_S1APERR_MEM                  = 6,            /* 内存错误 */
    EN_S1APERR_MSG_IGNORE           = 7,            /* 不做处理的消息 */

    EN_S1APERR_BUTT
}EN_S1AP_ERRCODE;

//ProtocolIE_ID
typedef enum tag_EN_S1_PROTOCOL_IE_ID
{
    EN_ID_MME_UE_S1AP_ID = 0,
    EN_ID_HANDOVERTYPE = 1,
    EN_ID_CAUSE = 2,
    EN_ID_SOURCEID = 3,
    EN_ID_TARGETID = 4,
    EN_ID_ENB_UE_S1AP_ID = 8,
    EN_ID_E_RABSUBJECTTODATAFORWARDINGLIST = 12,
    EN_ID_E_RABTORELEASELISTHOCMD = 13,
    EN_ID_E_RABDATAFORWARDINGITEM = 14,
    EN_ID_E_RABRELEASEITEMBEARERRELCOMP = 15,
    EN_ID_E_RABTOBESETUPLISTBEARERSUREQ = 16,
    EN_ID_E_RABTOBESETUPITEMBEARERSUREQ = 17,
    EN_ID_E_RABADMITTEDLIST = 18,
    EN_ID_E_RABFAILEDTOSETUPLISTHOREQACK = 19,
    EN_ID_E_RABADMITTEDITEM = 20,
    EN_ID_E_RABFAILEDTOSETUPITEMHOREQACK = 21,
    EN_ID_E_RABTOBESWITCHEDDLLIST = 22,
    EN_ID_E_RABTOBESWITCHEDDLITEM = 23,
    EN_ID_E_RABTOBESETUPLISTCTXTSUREQ = 24,
    EN_ID_TRACEACTIVATION = 25,
    EN_ID_NAS_PDU = 26,
    EN_ID_E_RABTOBESETUPITEMHOREQ = 27,
    EN_ID_E_RABSETUPLISTBEARERSURES = 28,
    EN_ID_E_RABFAILEDTOSETUPLISTBEARERSURES = 29,
    EN_ID_E_RABTOBEMODIFIEDLISTBEARERMODREQ = 30,
    EN_ID_E_RABMODIFYLISTBEARERMODRES = 31,
    EN_ID_E_RABFAILEDTOMODIFYLIST = 32,
    EN_ID_E_RABTOBERELEASEDLIST = 33,
    EN_ID_E_RABFAILEDTORELEASELIST = 34,
    EN_ID_E_RABITEM = 35,
    EN_ID_E_RABTOBEMODIFIEDITEMBEARERMODREQ = 36,
    EN_ID_E_RABMODIFYITEMBEARERMODRES = 37,
    EN_ID_E_RABRELEASEITEM = 38,
    EN_ID_E_RABSETUPITEMBEARERSURES = 39,
    EN_ID_SECURITYCONTEXT = 40,
    EN_ID_HANDOVERRESTRICTIONLIST = 41,
    EN_ID_UEPAGINGID = 43,
    EN_ID_PAGINGDRX = 44,
    EN_ID_TAILIST = 46,
    EN_ID_TAIITEM = 47,
    EN_ID_E_RABFAILEDTOSETUPLISTCTXTSURES = 48,
    EN_ID_E_RABRELEASEITEMHOCMD = 49,
    EN_ID_E_RABSETUPITEMCTXTSURES = 50,
    EN_ID_E_RABSETUPLISTCTXTSURES = 51,
    EN_ID_E_RABTOBESETUPITEMCTXTSUREQ = 52,
    EN_ID_E_RABTOBESETUPLISTHOREQ = 53,
    EN_ID_GERANTOLTEHOINFORMATIONRES = 55,
    EN_ID_UTRANTOLTEHOINFORMATIONRES = 57,
    EN_ID_CRITICALITYDIAGNOSTICS = 58,
    EN_ID_GLOBAL_ENB_ID = 59,
    EN_ID_ENBNAME = 60,
    EN_ID_MMENAME = 61,
    EN_ID_SERVEDPLMNS = 63,
    EN_ID_SUPPORTEDTAS = 64,
    EN_ID_TIMETOWAIT = 65,
    EN_ID_UEAGGREGATEMAXIMUMBITRATE = 66,
    EN_ID_TAI = 67,
    EN_ID_E_RABRELEASELISTBEARERRELCOMP = 69,
    EN_ID_CDMA2000PDU = 70,
    EN_ID_CDMA2000RATTYPE = 71,
    EN_ID_CDMA2000SECTORID = 72,
    EN_ID_SECURITYKEY = 73,
    EN_ID_UERADIOCAPABILITY = 74,
    EN_ID_GUMMEI_ID = 75,
    EN_ID_E_RABINFORMATIONLISTITEM = 78,
    EN_ID_DIRECT_FORWARDING_PATH_AVAILABILITY = 79,
    EN_ID_UEIDENTITYINDEXVALUE = 80,
    EN_ID_CDMA2000HOSTATUS = 83,
    EN_ID_CDMA2000HOREQUIREDINDICATION = 84,
    EN_ID_E_UTRAN_TRACE_ID = 86,
    EN_ID_RELATIVEMMECAPACITY = 87,
    EN_ID_SOURCEMME_UE_S1AP_ID = 88,
    EN_ID_BEARERS_SUBJECTTOSTATUSTRANSFER_ITEM = 89,
    EN_ID_ENB_STATUSTRANSFER_TRANSPARENTCONTAINER = 90,
    EN_ID_UE_ASSOCIATEDLOGICALS1_CONNECTIONITEM = 91,
    EN_ID_RESETTYPE = 92,
    EN_ID_UE_ASSOCIATEDLOGICALS1_CONNECTIONLISTRESACK = 93,
    EN_ID_E_RABTOBESWITCHEDULITEM = 94,
    EN_ID_E_RABTOBESWITCHEDULLIST = 95,
    EN_ID_S_TMSI = 96,
    EN_ID_CDMA2000ONEXRAND = 97,
    EN_ID_REQUESTTYPE = 98,
    EN_ID_UE_S1AP_IDS = 99,
    EN_ID_EUTRAN_CGI = 100,
    EN_ID_OVERLOADRESPONSE = 101,
    EN_ID_CDMA2000ONEXSRVCCINFO = 102,
    EN_ID_E_RABFAILEDTOBERELEASEDLIST = 103,
    EN_ID_SOURCE_TOTARGET_TRANSPARENTCONTAINER = 104,
    EN_ID_SERVEDGUMMEIS = 105,
    EN_ID_SUBSCRIBERPROFILEIDFORRFP = 106,
    EN_ID_UESECURITYCAPABILITIES = 107,
    EN_ID_CSFALLBACKINDICATOR = 108,
    EN_ID_CNDOMAIN = 109,
    EN_ID_E_RABRELEASEDLIST = 110,
    EN_ID_MESSAGEIDENTIFIER = 111,
    EN_ID_SERIALNUMBER = 112,
    EN_ID_WARNINGAREALIST = 113,
    EN_ID_REPETITIONPERIOD = 114,
    EN_ID_NUMBEROFBROADCASTREQUEST = 115,
    EN_ID_WARNINGTYPE = 116,
    EN_ID_WARNINGSECURITYINFO = 117,
    EN_ID_DATACODINGSCHEME = 118,
    EN_ID_WARNINGMESSAGECONTENTS = 119,
    EN_ID_BROADCASTCOMPLETEDAREALIST = 120,
    EN_ID_INTER_SYSTEMINFORMATIONTRANSFERTYPEEDT = 121,
    EN_ID_INTER_SYSTEMINFORMATIONTRANSFERTYPEMDT = 122,
    EN_ID_TARGET_TOSOURCE_TRANSPARENTCONTAINER = 123,
    EN_ID_SRVCCOPERATIONPOSSIBLE = 124,
    EN_ID_SRVCCHOINDICATION = 125,
    EN_ID_NAS_DOWNLINKCOUNT = 126,
    EN_ID_CSG_ID = 127,
    EN_ID_CSG_IDLIST = 128,
    EN_ID_SONCONFIGURATIONTRANSFERECT = 129,
    EN_ID_SONCONFIGURATIONTRANSFERMCT = 130,
    EN_ID_TRACECOLLECTIONENTITYIPADDRESS = 131,
    EN_ID_MSCLASSMARK2 = 132,
    EN_ID_MSCLASSMARK3 = 133,
    EN_ID_RRC_ESTABLISHMENT_CAUSE = 134,
    EN_ID_NASSECURITYPARAMETERSFROME_UTRAN = 135,
    EN_ID_NASSECURITYPARAMETERSTOE_UTRAN = 136,
    EN_ID_DEFAULTPAGINGDRX = 137,
    EN_ID_SOURCE_TOTARGET_TRANSPARENTCONTAINER_SECONDARY = 138,
    EN_ID_TARGET_TOSOURCE_TRANSPARENTCONTAINER_SECONDARY = 139,
    EN_ID_EUTRANROUNDTRIPDELAYESTIMATIONINFO = 140,
    EN_ID_BROADCASTCANCELLEDAREALIST = 141,
    EN_ID_CONCURRENTWARNINGMESSAGEINDICATOR = 142,
    EN_ID_DATA_FORWARDING_NOT_POSSIBLE = 143,
    EN_ID_EXTENDEDREPETITIONPERIOD = 144,
    EN_ID_CELLACCESSMODE = 145,
    EN_ID_CSGMEMBERSHIPSTATUS = 146,
    EN_ID_LPPA_PDU = 147,
    EN_ID_ROUTING_ID = 148,
    EN_ID_TIME_SYNCHRONIZATION_INFO = 149,
    EN_ID_PS_SERVICENOTAVAILABLE = 150,
    EN_ID_PAGINGPRIORITY = 151,
    EN_ID_X2TNLCONFIGURATIONINFO = 152,
    EN_ID_ENBX2EXTENDEDTRANSPORTLAYERADDRESSES = 153,
    EN_ID_GUMMEILIST = 154,
    EN_ID_GW_TRANSPORTLAYERADDRESS = 155,
    EN_ID_CORRELATION_ID = 156,
    EN_ID_SOURCEMME_GUMMEI = 157,
    EN_ID_MME_UE_S1AP_ID_2 = 158,
    EN_ID_REGISTEREDLAI = 159,
    EN_ID_RELAYNODE_INDICATOR = 160,
    EN_ID_TRAFFICLOADREDUCTIONINDICATION = 161,
    EN_ID_MDTCONFIGURATION = 162,
    EN_ID_MMERELAYSUPPORTINDICATOR = 163,
    EN_ID_GWCONTEXTRELEASEINDICATION = 164,
    EN_ID_MANAGEMENTBASEDMDTALLOWED = 165,
    EN_ID_PRIVACYINDICATOR = 166,
    EN_ID_TIME_UE_STAYEDINCELL_ENHANCEDGRANULARITY = 167,
    EN_ID_HO_CAUSE = 168,
    EN_ID_VOICESUPPORTMATCHINDICATOR = 169,
    EN_ID_GUMMEITYPE = 170,
    EN_ID_M3CONFIGURATION = 171,
    EN_ID_M4CONFIGURATION = 172,
    EN_ID_M5CONFIGURATION = 173,
    EN_ID_MDT_LOCATION_INFO = 174,
    EN_ID_MOBILITYINFORMATION = 175,
    EN_ID_TUNNEL_INFORMATION_FOR_BBF = 176,
    EN_ID_MANAGEMENTBASEDMDTPLMNLIST = 177,
    EN_ID_SIGNALLINGBASEDMDTPLMNLIST = 178,
    EN_ID_ULCOUNTVALUEEXTENDED = 179,
    EN_ID_DLCOUNTVALUEEXTENDED = 180,
    EN_ID_RECEIVESTATUSOFULPDCPSDUSEXTENDED = 181,
    EN_S1_PROTOCOL_IE_ID_BUTT,
}EN_S1_PROTOCOL_IE_ID;


/*=================================结构体定义==================================*/

typedef struct tag_S1AP_PBUF
{
    void *ptr;                     /*当前协议的头部指针*/
    _U16  len;                 /*this buffer len*/
    _U16  ptr_offset;          /**/
}S1AP_PBUF;

/* S1AP协议数据单元 */
typedef struct tag_S1AP_EP_PDU
{
    ProcedureCode               ucProcedureCode;            //基本过程码，INTEGER (0..255)
    EN_S1AP_CRITICALITY         enCriticality;
    _U32                        ulValueLen;                 //按长度决定类型编码
    _U8                         pValue[1];                  //S1AP-PDU-Contents
}ST_S1AP_EP_PDU, ST_S1AP_INIT_MSG, ST_S1AP_SUCC_OUTCOME, ST_S1AP_UNSUCC_OUTCOME, ST_S1AP_OUTCOME;


/* S1AP基本过程 */
typedef struct tag_S1AP_EP
{
    _BOOL                       bExtension;                 /* 扩展标记 */
    _U8                         ucID;                       //INTEGER (0..3),类型详见EN_S1AP_TRIGGER_MSG
    union
    {
        ST_S1AP_INIT_MSG           stInitiatingMessage;
        ST_S1AP_SUCC_OUTCOME       stSuccessfulOutcome;
        ST_S1AP_UNSUCC_OUTCOME     stUnsuccessfulOutcome;
        ST_S1AP_OUTCOME            stOutcome;
        /* ... */
    }content;
}ST_S1AP_EP, *PST_S1AP_EP;

typedef struct  tag_ST_IE_COMMON
{
   EN_S1_PROTOCOL_IE_ID     id;
   EN_S1AP_CRITICALITY      criticality;
   _U32                     ie_length;
} ST_IE_COMMON;

typedef struct
{
    uint32_t resv1:4;
    uint32_t bearer:4;
    uint32_t param:24;
    uint16_t resv2;
    uint32_t tip;    
    uint32_t teid;
}__attribute__((packed)) s1ap_rablist_t;


typedef struct  tag_ST_IE_MME_UE_S1AP_ID
{
   EN_S1_PROTOCOL_IE_ID     id;
   EN_S1AP_CRITICALITY      criticality;
   _U32                     ie_length;
   _U32                     mme_ue_s1ap_id;
} ST_IE_MME_UE_S1AP_ID;

typedef struct  tag_ST_IE_ENB_UE_S1AP_ID
{
   EN_S1_PROTOCOL_IE_ID     id;
   EN_S1AP_CRITICALITY      criticality;
   _U32                     ie_length;
   _U32                     enb_ue_s1ap_id;
} ST_IE_ENB_UE_S1AP_ID;

/* NAS-PDU */
typedef struct  tag_ST_S1AP_IE_NAS_PDU
{
    EN_S1_PROTOCOL_IE_ID     id;
    EN_S1AP_CRITICALITY      criticality;
    _U32                     ie_length;
    struct
    {
        OctetString             stNasPdu;
    }stValue;
} ST_S1AP_IE_NAS_PDU;

/* TAI */
typedef struct  tag_ST_S1AP_IE_TAI
{
    EN_S1_PROTOCOL_IE_ID     id;
    EN_S1AP_CRITICALITY      criticality;
    _U32                     ie_length;
    _BOOL                    is_has_extension;
    _U8                      PLMN_identity[3];
    _U8                      TAC[2];
} ST_S1AP_IE_TAI;

/* ECGI */
typedef struct  tag_ST_S1AP_IE_ECGI
{
    EN_S1_PROTOCOL_IE_ID     id;
    EN_S1AP_CRITICALITY      criticality;
    _U32                     ie_length;
    _BOOL                    is_has_extension;
    _U8                      PLMN_identity[3];
    _U8                      cell_id[4];/*实际是28位，3个半字节*/
} ST_S1AP_IE_ECGI;


/*==================================宏定义===================================*/
/*---------------------------------------------------------------------------*/
#define S1AP_MAX_NUM_PROTOCOL_IES 65535
#define S1AP_MIN_NUM_PROTOCOL_IES 0
#define S1AP_MAX_ENODEB_UE_S1AP_ID 16777215
#define S1AP_MIN_ENODEB_UE_S1AP_ID 0
#define S1AP_MAX_MME_UE_S1AP_ID 4294967295
#define S1AP_MIN_MME_UE_S1AP_ID 0
#define NAS_PDU_MAX_LEN 4096
#define S1AP_MAX_RABLIST_IES_NUMBER 256
#define S1AP_MIN_RABLIST_IES_NUMBER 1
#define S1AP_MAX_TIP 4294967295
#define S1AP_MIN_TIP 0
#define S1AP_MAX_TEID 4294967295
#define S1AP_MIN_TEID 0
#define S1AP_SIZE_GAP 1 // use to calculate range: format: max - min + 1

/* Macros associated with  E-RAB to Be Setup Item IEs, refer to 3GPP TS 36.413 for detail*/
#define ERAB_ID_RANGE 16
#define QCI_RANGE 256
#define ARP_RANGE 16
#define TRANSPORT_IP_RANGE 4294967296
#define TEID_RANGE 4294967296
#define TIP_LEN_RANGE 160

#define S1AP_DECODE_MSG_HEAD_NOID(pb, pst)                                                  \
    {                                                                                       \
        pst->enCriticality = s1ap_decode_enum(pb, LEN_S1AP_PDU_CRITICALITY);               \
        pst->ulValueLen = PER_DecodeLengthDeterminant(pb);                                  \
        if(0 == pst->ulValueLen)                                                            \
        {                                                                                   \
            return EN_S1APERR_PARAM;                                                         \
        }                                                                                   \
    }

#define S1AP_DECODE_IE_HEAD_NOID(pb, pst)                                                  \
    {                                                                                       \
        pst->criticality = s1ap_decode_enum(pb, LEN_S1AP_PDU_CRITICALITY);               \
        pst->ie_length = PER_DecodeLengthDeterminant(pb);                                  \
        if(0 == pst->ie_length)                                                            \
        {                                                                                   \
            return EN_S1APERR_PARAM;                                                         \
        }                                                                                   \
    }





/*---------------------------------------------------------------------------*/
#endif  /* _ASN_SPECODE_H__ */
/*---------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif
/*---------------------------------------------------------------------------*/
