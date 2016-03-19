/****************************************************************************** 

版权所有（C），2001-2015年，恒扬科技股份有限公司

******************************************************************************
文件名:       packet_entry.h
编码格式:     ASCII
作者:         chenbin
创建:         Sep 16, 2015
历史:
    1.日期    :Sep 16, 2015
      作者    :cb
      修改    :Created file
******************************************************************************/
#ifndef RELATE_PACKET_ENTRY_H_
#define RELATE_PACKET_ENTRY_H_

#include "semp_hydra_relate.h"
#include "packet_gtpv2c.h"

#define NAS_NOT_PROTECT         0
#define NAS_INTERAG_PROTECT     1
#define NAS_CIPHER_PROTECT      2
#define NAS_INTERAG_PROTECT_WITH_EPS    3
#define NAS_CIPHER_WITH_NEW_EPS  4
#define NAS_SECURITY_SERVICE_REQUEST    12


#define UP_LINK_DIRECTION       0
#define DOWN_LINK_DIRECTION     1


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

struct pbuf
{
    void *ptr;                     /*当前协议的头部指针*/
    uint16_t  len;                 /*this buffer len*/
    uint16_t  ptr_offset;          /**/
};

typedef struct
{
    lte_rand_t rand;
    lte_kasme_t kasme;
}kasme_info_t;
typedef struct
{
    dmt_type_em dmt_type;
    lte_imsi_t user_name;
    uint8_t valid_kasme_rand_pair_num;
    kasme_info_t kasme_info[MAX_KASME_RAND_PAIR];
    uint32_t hop_by_hop;
    uint64_t valid_mask;
    uint32_t hss_ip;
    uint32_t s6a_mme_ip;
}parse_diameter_t;
typedef struct
{
    uint32_t avp_code;
    uint32_t avp_flag:8;
    uint32_t avp_length:24;
}__attribute__((packed))avp_common_hdr_t;

typedef enum
{
    GTP_MSG_ECHO_REQ =1,
    GTP_MSG_ECHO_RSP=2,
    GTP_MSG_CREATE_SES_REQ=32,
    GTP_MSG_CREATE_SES_RSP=33,
    GTP_MSG_MODIFY_BEARER_REQ=34,
    GTP_MSG_MODIFY_BEARER_RSP=35,
    GTP_MSG_DELETE_SES_REQ=36,
    GTP_MSG_DELETE_SES_RSP=37,
    GTP_MSG_CHANGE_NOTIFICATION_REQ=38,
    GTP_MSG_CHANGE_NOTIFICATION_RSP=39,
    GTP_MSG_CREATE_BEARER_REQ=95,
    GTP_MSG_CREATE_BEARER_RSP=96,
    GTP_MSG_DELETE_BEARER_REQ=99,
    GTP_MSG_DELETE_BEARER_RSP=100,
    GTP_MSG_PDU=0xff,
    GTP_MSG_MAX=256,
}gtp_msg_type_t;

typedef enum
{
    PARSE_UNKNOW,
    PARSE_PROTOCO_IP4 ,
    PARSE_PROTOCO_IP6 ,
    PARSE_PROTOCOL_S1AP ,
    PARSE_PROTOCOL_NAS ,
    PARSE_PROTOCOL_GTPCV1 ,
    PARSE_PROTOCOL_GTPCV2 ,
    PARSE_PROTOCOL_DIAMETER,
    PARSE_PROTOCOL_GTPU,
}prase_protocol_em;


typedef enum
{
    PARSE_SUCCESS =0,     /*protocol identify OK*/
    PARSE_HEADER_ERR,  /*protocol identify Header not Sync*/
    PARSE_UNKNOW_OR_NOSUPPORT, /*protocol identify Unknow*/
}parse_result_t;

typedef struct
{
    uint32_t srcip;
    uint32_t dstip;
    uint16_t srcport;
    uint16_t dstport;
    uint8_t  protocol;
}parse_ip4_t;

typedef union
{
    uint16_t    data16;
    struct
    {
        uint16_t    type: 3;
        uint16_t    resv: 13;
    };
    struct
    {
        uint16_t    tos: 3;             /** For 7 tuple only */
        uint16_t    rsvd: 13;
    };
} session_type_st;

typedef union
{
    uint64_t        data64[2];
    struct
    {
        uint32_t        src_ip;
        uint32_t        dst_ip;
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        session_type_st st;
    };
} tuple_v4;

typedef union
{
    uint64_t        data64[5];
    struct
    {
        /** Word 0 */
        uint64_t        sip_upper;
        /** Word 1 */
        uint64_t        sip_lower;
        /** Word 2 */
        uint64_t        dip_upper;
        /** Word 3 */
        uint64_t        dip_lower;
        /** Word 4 */
        uint16_t        src_port;
        uint16_t        dst_port;
        uint8_t         protocol;
        uint8_t         iifgrp;
        session_type_st st;
    };
} tuple_v6;

typedef union
{
    uint64_t        data64[5];
    tuple_v4        v4;
    tuple_v6        v6;

} ip5tuple_st;

typedef struct {
    uint32_t src_ip;
    uint32_t dst_ip;
}ip_v4_t;

typedef struct {
    uint64_t sip_upper;
    uint64_t sip_lower;
    uint64_t dip_upper;
    uint64_t dip_lower;
}ip_v6_t;

typedef struct {
    uint16_t port;  /* GTP port */
    uint16_t version;
    uint16_t proto;
    uint16_t sport;
    uint16_t dport;
    ip_v4_t  v4;
    ip_v6_t  v6;
}semp_gtp_result_t;

enum type_identity_em
{
    TYPE_INVALID = 0,
    TYPE_OLD_GUTI = 6,
    TYPE_IMSI = 1,
};
typedef struct
{
    uint16_t    EMM_message_type;   //NAS EPS Mobility Management Message Type
    uint16_t    cipher_alg_type;    //Type of ciphering algorithm
    uint16_t    nas_pkt_off;
    uint16_t    nas_pkt_len;
    //uint16_t    nas_cipher_off;     //offset to cipher data
    uint8_t *   nas_cipher_ptr;     //pointer to cipher data
    uint16_t    nas_cipher_len;     //length of the cipher data
    lte_rand_t  rand;               //rand value from the NAS PDU
    uint8_t     ciphered_flag;      //flag indicate if the message has been ciphered
    uint8_t     sequence_no;
    uint8_t     submit_flag;        //whether submit to contrl core
    lte_guti_t  guti;               //store guti in nas
    union{
        lte_guti_t  guti;
        lte_imsi_t  imsi;
    }init_identify;
    enum type_identity_em type_of_identity;  /* Indicating intialiaUEMessage packet has imsi or old_GUTI, 1: for imsi, 0: for old_guti */
}parse_nas_t;

typedef struct
{
    uint32_t    tip;
    uint32_t    teid;
}parse_rab_t;

typedef  struct
{
    uint8_t     direction;  /* packet direction, 0: up direction from eNodeB to MME, 1: down direction, from MME to eNodeB */
    uint8_t     procecode;  /* Procedure Code */
    uint32_t    protocolIE_id;  /**/
    uint16_t    bear_id;          /* NAS use */
    uint16_t    sequence_no;      /* NAS use */
    uint64_t    mme_ue_s1ap_id;
    uint32_t    enode_ue_s1ap_id;
    uint32_t    enode_ip;
    uint32_t    mme_ip;
    lte_tai_t   tai;
    parse_nas_t nas;
    uint8_t     nas_exist;
    parse_rab_t rab_info;
}parse_s1ap_t;



typedef struct
{
    uint32_t    ot_srcip;
    uint32_t    ot_dstip;
    uint8_t     ot_protocol;

    uint16_t    ot_srcport;
    uint16_t    ot_dstport;

    uint32_t    in_srcip;
    uint32_t    in_dstip;
    uint8_t     in_protocol;
    uint16_t    in_srcport;

    uint16_t    in_dstport;
    uint32_t    teid;
    uint16_t    payload_offset;
    uint16_t    resv;

    lte_imsi_t      imsi;  /*IMSI*/
    lte_imei_t      imei;  /*IMEI*/
    lte_msisdn_t     msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;

    lte_tai_t   tai;
    lte_guti_t  guti;

    uint8_t     imsi_en;
    uint8_t     imei_en;
    uint8_t     msisdn_en;
    uint8_t     tai_en;
    uint8_t     guti_en;
}parse_gtpu_t;


typedef struct
{
    prase_protocol_em  protocol;
    parse_result_t result;
    union
    {
        parse_s1ap_t s1ap;
        parse_diameter_t diameter;
        parse_gtpc_t gtpc;
        parse_gtpu_t gtpu;
    };
    parse_ip4_t ip4;
}parse_pkt_info_t;

typedef struct
{
    /** WORD 0 */
    void *packet;
    ip5tuple_st *tuple;
    semp_gtp_result_t *gtpInfo;     /* GTP packet infomation */
    //semp_s1ap_result_t *s1apInfo;   /* S1AP packet infomation */
    parse_pkt_info_t   pktinfo;       /**/
    /** WORD 3 */
    uint64_t iphdr_offset: 8; /** Ip Header Offset, actually the MAC header length */
    uint64_t pkt_type: 3;
    uint64_t fwd_oifgrp_num:    3;  /* forward oifgrp number */
    uint64_t stream_direction:  2;
    uint64_t iifgrp: 8; /** Packet input interface */
    uint64_t action: 8;
    uint64_t appl_proto: 16;
    uint64_t appl_proto_l2: 16;

    /** WORD 4 */
    uint8_t oifgrp[4];
    uint8_t iif;        /** Packet input interface */
    uint8_t rsv[3];
} mpp_control_st;


enum _ProcedureCode_enum {
  id_HandoverPreparation            =   0,
  id_HandoverResourceAllocation     =   1,
  id_HandoverNotification           =   2,
  id_PathSwitchRequest              =   3,
  id_HandoverCancel                 =   4,
  id_E_RABSetup                     =   5,
  id_E_RABModify                    =   6,
  id_E_RABRelease                   =   7,
  id_E_RABReleaseIndication         =   8,
  id_InitialContextSetup            =   9,
  id_Paging                         =  10,
  id_downlinkNASTransport           =  11,
  id_initialUEMessage               =  12,
  id_uplinkNASTransport             =  13,
  id_Reset                          =  14,
  id_ErrorIndication                =  15,
  id_NASNonDeliveryIndication       =  16,
  id_S1Setup                        =  17,
  id_UEContextReleaseRequest        =  18,
  id_DownlinkS1cdma2000tunneling    =  19,
  id_UplinkS1cdma2000tunneling      =  20,
  id_UEContextModification          =  21,
  id_UECapabilityInfoIndication     =  22,
  id_UEContextRelease               =  23,
  id_eNBStatusTransfer              =  24,
  id_MMEStatusTransfer              =  25,
  id_DeactivateTrace                 =  26,
  id_TraceStart                     =  27,
  id_TraceFailureIndication         =  28,
  id_ENBConfigurationUpdate         =  29,
  id_MMEConfigurationUpdate         =  30,
  id_LocationReportingControl       =  31,
  id_LocationReportingFailureIndication =  32,
  id_LocationReport                 =  33,
  id_OverloadStart                  =  34,
  id_OverloadStop                   =  35,
  id_WriteReplaceWarning            =  36,
  id_eNBDirectInformationTransfer   =  37,
  id_MMEDirectInformationTransfer   =  38,
  id_PrivateMessage                 =  39,
  id_eNBConfigurationTransfer       =  40,
  id_MMEConfigurationTransfer       =  41,
  id_CellTrafficTrace               =  42,
  id_Kill                           =  43,
  id_downlinkUEAssociatedLPPaTransport =  44,
  id_uplinkUEAssociatedLPPaTransport =  45,
  id_downlinkNonUEAssociatedLPPaTransport =  46,
  id_uplinkNonUEAssociatedLPPaTransport =  47,
  id_UERadioCapabilityMatch =  48
} ;

enum _ProtocolIE_ID_enum {
  id_MME_UE_S1AP_ID =   0,
  id_HandoverType =   1,
  id_Cause     =   2,
  id_SourceID  =   3,
  id_TargetID  =   4,
  id_Unknown_5 =   5,
  id_Unknown_6 =   6,
  id_Unknown_7 =   7,
  id_eNB_UE_S1AP_ID =   8,
  id_Unknown_9 =   9,
  id_Unknown_10 =  10,
  id_Unknown_11 =  11,
  id_E_RABSubjecttoDataForwardingList =  12,
  id_E_RABtoReleaseListHOCmd =  13,
  id_E_RABDataForwardingItem =  14,
  id_E_RABReleaseItemBearerRelComp =  15,
  id_E_RABToBeSetupListBearerSUReq =  16,
  id_E_RABToBeSetupItemBearerSUReq =  17,
  id_E_RABAdmittedList =  18,
  id_E_RABFailedToSetupListHOReqAck =  19,
  id_E_RABAdmittedItem =  20,
  id_E_RABFailedtoSetupItemHOReqAck =  21,
  id_E_RABToBeSwitchedDLList =  22,
  id_E_RABToBeSwitchedDLItem =  23,
  id_E_RABToBeSetupListCtxtSUReq =  24,
  id_TraceActivation =  25,
  id_NAS_PDU   =  26,
  id_E_RABToBeSetupItemHOReq =  27,
  id_E_RABSetupListBearerSURes =  28,
  id_E_RABFailedToSetupListBearerSURes =  29,
  id_E_RABToBeModifiedListBearerModReq =  30,
  id_E_RABModifyListBearerModRes =  31,
  id_E_RABFailedToModifyList =  32,
  id_E_RABToBeReleasedList =  33,
  id_E_RABFailedToReleaseList =  34,
  id_E_RABItem =  35,
  id_E_RABToBeModifiedItemBearerModReq =  36,
  id_E_RABModifyItemBearerModRes =  37,
  id_E_RABReleaseItem =  38,
  id_E_RABSetupItemBearerSURes =  39,
  id_SecurityContext =  40,
  id_HandoverRestrictionList =  41,
  id_Unknown_42 =  42,
  id_UEPagingID =  43,
  id_pagingDRX =  44,
  id_Unknown_45 =  45,
  id_TAIList   =  46,
  id_TAIItem   =  47,
  id_E_RABFailedToSetupListCtxtSURes =  48,
  id_E_RABReleaseItemHOCmd =  49,
  id_E_RABSetupItemCtxtSURes =  50,
  id_E_RABSetupListCtxtSURes =  51,
  id_E_RABToBeSetupItemCtxtSUReq =  52,
  id_E_RABToBeSetupListHOReq =  53,
  id_Unknown_54 =  54,
  id_GERANtoLTEHOInformationRes =  55,
  id_Unknown_56 =  56,
  id_UTRANtoLTEHOInformationRes =  57,
  id_CriticalityDiagnostics =  58,
  id_Global_ENB_ID =  59,
  id_eNBname   =  60,
  id_MMEname   =  61,
  id_Unknown_62 =  62,
  id_ServedPLMNs =  63,
  id_SupportedTAs =  64,
  id_TimeToWait =  65,
  id_uEaggregateMaximumBitrate =  66,
  id_TAI       =  67,
  id_Unknown_68 =  68,
  id_E_RABReleaseListBearerRelComp =  69,
  id_cdma2000PDU =  70,
  id_cdma2000RATType =  71,
  id_cdma2000SectorID =  72,
  id_SecurityKey =  73,
  id_UERadioCapability =  74,
  id_GUMMEI_ID =  75,
  id_Unknown_76 =  76,
  id_Unknown_77 =  77,
  id_E_RABInformationListItem =  78,
  id_Direct_Forwarding_Path_Availability =  79,
  id_UEIdentityIndexValue =  80,
  id_Unknown_81 =  81,
  id_Unknown_82 =  82,
  id_cdma2000HOStatus =  83,
  id_cdma2000HORequiredIndication =  84,
  id_Unknown_85 =  85,
  id_E_UTRAN_Trace_ID =  86,
  id_RelativeMMECapacity =  87,
  id_SourceMME_UE_S1AP_ID =  88,
  id_Bearers_SubjectToStatusTransfer_Item =  89,
  id_eNB_StatusTransfer_TransparentContainer =  90,
  id_UE_associatedLogicalS1_ConnectionItem =  91,
  id_ResetType =  92,
  id_UE_associatedLogicalS1_ConnectionListResAck =  93,
  id_E_RABToBeSwitchedULItem =  94,
  id_E_RABToBeSwitchedULList =  95,
  id_S_TMSI    =  96,
  id_cdma2000OneXRAND =  97,
  id_RequestType =  98,
  id_UE_S1AP_IDs =  99,
  id_EUTRAN_CGI = 100,
  id_OverloadResponse = 101,
  id_cdma2000OneXSRVCCInfo = 102,
  id_E_RABFailedToBeReleasedList = 103,
  id_Source_ToTarget_TransparentContainer = 104,
  id_ServedGUMMEIs = 105,
  id_SubscriberProfileIDforRFP = 106,
  id_UESecurityCapabilities = 107,
  id_CSFallbackIndicator = 108,
  id_CNDomain  = 109,
  id_E_RABReleasedList = 110,
  id_MessageIdentifier = 111,
  id_SerialNumber = 112,
  id_WarningAreaList = 113,
  id_RepetitionPeriod = 114,
  id_NumberofBroadcastRequest = 115,
  id_WarningType = 116,
  id_WarningSecurityInfo = 117,
  id_DataCodingScheme = 118,
  id_WarningMessageContents = 119,
  id_BroadcastCompletedAreaList = 120,
  id_Inter_SystemInformationTransferTypeEDT = 121,
  id_Inter_SystemInformationTransferTypeMDT = 122,
  id_Target_ToSource_TransparentContainer = 123,
  id_SRVCCOperationPossible = 124,
  id_SRVCCHOIndication = 125,
  id_NAS_DownlinkCount = 126,
  id_CSG_Id    = 127,
  id_CSG_IdList = 128,
  id_SONConfigurationTransferECT = 129,
  id_SONConfigurationTransferMCT = 130,
  id_TraceCollectionEntityIPAddress = 131,
  id_MSClassmark2 = 132,
  id_MSClassmark3 = 133,
  id_RRC_Establishment_Cause = 134,
  id_NASSecurityParametersfromE_UTRAN = 135,
  id_NASSecurityParameterstoE_UTRAN = 136,
  id_DefaultPagingDRX = 137,
  id_Source_ToTarget_TransparentContainer_Secondary = 138,
  id_Target_ToSource_TransparentContainer_Secondary = 139,
  id_EUTRANRoundTripDelayEstimationInfo = 140,
  id_BroadcastCancelledAreaList = 141,
  id_ConcurrentWarningMessageIndicator = 142,
  id_Data_Forwarding_Not_Possible = 143,
  id_ExtendedRepetitionPeriod = 144,
  id_CellAccessMode = 145,
  id_CSGMembershipStatus = 146,
  id_LPPa_PDU  = 147,
  id_Routing_ID = 148,
  id_Time_Synchronization_Info = 149,
  id_PS_ServiceNotAvailable = 150,
  id_PagingPriority = 151,
  id_x2TNLConfigurationInfo = 152,
  id_eNBX2ExtendedTransportLayerAddresses = 153,
  id_GUMMEIList = 154,
  id_GW_TransportLayerAddress = 155,
  id_Correlation_ID = 156,
  id_SourceMME_GUMMEI = 157,
  id_MME_UE_S1AP_ID_2 = 158,
  id_RegisteredLAI = 159,
  id_RelayNode_Indicator = 160,
  id_TrafficLoadReductionIndication = 161,
  id_MDTConfiguration = 162,
  id_MMERelaySupportIndicator = 163,
  id_GWContextReleaseIndication = 164,
  id_ManagementBasedMDTAllowed = 165,
  id_PrivacyIndicator = 166,
  id_Time_UE_StayedInCell_EnhancedGranularity = 167,
  id_HO_Cause  = 168,
  id_VoiceSupportMatchIndicator = 169,
  id_GUMMEIType = 170,
  id_M3Configuration = 171,
  id_M4Configuration = 172,
  id_M5Configuration = 173,
  id_MDT_Location_Info = 174,
  id_MobilityInformation = 175,
  id_Tunnel_Information_for_BBF = 176,
  id_ManagementBasedMDTPLMNList = 177,
  id_SignallingBasedMDTPLMNList = 178,
  id_ULCOUNTValueExtended = 179,
  id_DLCOUNTValueExtended = 180,
  id_ReceiveStatusOfULPDCPSDUsExtended = 181
};


#define HEADER_OUTER  0
#define HEADER_INNER  1


#define MAX_VLAN_ID  4096

#define PARSE_DEBUG 0

/*update Offset*/
#define UPDATE_PBUF_OFFSET(_pbuf, _off)          ((_pbuf)->ptr_offset+=(_off))
/*reverse Update Offset*/
#define UPDATE_PBUF_REVERSE_OFFSET(_pbuf, _off)          ((_pbuf)->ptr_offset -=(_off))

/*****Format****/
/*Cur's Format*/
#define PBUF_CUR_FORMAT(_type, _ptr, _p)         (_ptr = (_type)(_p->ptr_offset+(char *)_p->ptr))
/*offset of Cur's  Format*/
#define PBUF_CUR_OFFSET_FORMAT(_type, _ptr, _p,_len)         (_ptr = (_type)((_p)->ptr_offset + _len +(char *)_p->ptr))
/*offset of start's Format*/
#define PBUF_OFF_FORMAT(_type, _ptr, _p,_len)    (_ptr = (_type)( (_len)+(char *)_p->ptr))

/*****PTR****/
#define PBUF_PTR(_p, _len)                       ( (_len)+(char *)_p->ptr)
#define PBUF_VOID_CUR_PTR(_p)                   (( (_p)->ptr_offset) + ((_p)->ptr) )

/*****GET OFFSET****/
#define PBUF_CUR_OFFSET(_p)                       ((_p)->ptr_offset)
#define PBUF_OFF_OFFSET(_p, _len)                 ((_p)->ptr_offset+ (_len))

/*****GET LEFT LEN****/
#define PBUF_LEFT_LEN(_p)      ( (_p)->len- (_p)->ptr_offset)


#define CHECK_PBUF_LEN(_p, _len) \
do{ \
    if(_p->ptr_offset + (_len) > _p->len) \
    {\
        LTE_DEBUG_PRINTF("Prase : buffer not enough<%d|%d> %s.%d\n", (int)(_len), (int)_p->len-(int)_p->ptr_offset, __func__, __LINE__); \
        return MP_E_EXCEED;\
    }\
}while(0)


#define PBUF_LENGTH_ASSURE(_p)     (_p->ptr_offset < _p->len)






#if PARSE_DEBUG

#define PARSE_DEBUG_PRINT(fmt, _arg...)  \
     printf("%s.%d: " fmt, __func__, __LINE__, ##_arg)

#define  PARSE_PRINTF_IMSI(_imsi)  do {\
        printf("IMSI=%02x-%02x-%02x-%02x-%02x-%02x-%02x-%02x, (%s) +%d\n",\
        (int)_imsi[0],_imsi[1],(int)_imsi[2],(int)_imsi[3],\
        (int)_imsi[4],(int)_imsi[5],(int)_imsi[6],(int)_imsi[7],__func__, __LINE__);\
        }while(0)


#define PBUF_DUMP(_p, _len) \
do{\
    int i = 0;\
    uint8_t *ot = NULL;\
    CHECK_PBUF_LEN(_p, _len);\
    PBUF_CUR_FORMAT(uint8_t *, ot, _p);\
    printf("ptr= %p, offset = %d\n", _p->ptr, _p->ptr_offset);\
    for(i = 0; i < _len; i++) \
    {\
        if (i % 15 == 0)\
            printf("\n");\
        printf("%.2x ", ot[i]);\
    }\
    printf("\n");\
}while(0)



#else
    #define  PARSE_PRINTF_IMSI(_imsi)
    #define PARSE_DEBUG_PRINT(_arg...)
    #define PBUF_DUMP(_p, _len)

#endif



#define MASTER_PARAM_CHECK(_W, _P, _M)\
do {\
    if (cvmx_unlikely((NULL == _W) || (NULL == _P) || (NULL == _M)))  \
    {\
        return MP_E_PARAM;\
    }\
}while(0);





//_packet_entry_parse(cvmx_wqe_t *work, mpp_control_st *mpp);


#define SET_LTE_IDENTIFY_RESULT(_mpp, _v) (_mpp->pktinfo.result = (_v))
#define SET_LTE_TEID(_mpp, _v) (_mpp->pktinfo.gtpu.teid = (_v))

enum
{
    UP_LINK     = 1,
    DOWN_LINK   = 0,
};

#endif /* RELATE_PACKET_ENTRY_H_ */
