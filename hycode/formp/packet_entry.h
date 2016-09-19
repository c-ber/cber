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

typedef enum
{
    GTPV1_C_MSG_ECHO_REQ =1,
    GTPV1_C_MSG_ECHO_RSP=2,
    GTPV1_C_MSG_CREATE_PDP_CONTEXT_REQ=16,
    GTPV1_C_MSG_CREATE_PDP_CONTEXT_RSP=17,
    GTPV1_C_MSG_UPDATE_PDP_CONTEXT_REQ=18,
    GTPV1_C_MSG_UPDATE_PDP_CONTEXT_RSP=19,
    GTPV1_C_MSG_DELETE_PDP_CONTEXT_REQ=20,
    GTPV1_C_MSG_DELETE_PDP_CONTEXT_RSP=21,
    GTPV1_C_MSG_MAX=256
}gtpv1_c_msg_type_t;


enum _RANAP_ProcedureCode_enum {
   ranap_id_RAB_Assignment               = 0,
   ranap_id_Iu_Release                   = 1,
   ranap_id_RelocationPreparation        = 2,
   ranap_id_RelocationResourceAllocation = 3,
   ranap_id_RelocationCancel             = 4,
   ranap_id_SRNS_ContextTransfer         = 5,
   ranap_id_SecurityModeControl          = 6,
   ranap_id_DataVolumeReport             = 7,
   ranap_id_Reset                        = 9,
   ranap_id_RAB_ReleaseRequest           = 10,
   ranap_id_Iu_ReleaseRequest            = 11,
   ranap_id_RelocationDetect             = 12,
   ranap_id_RelocationComplete           = 13,
   ranap_id_Paging                       = 14,
   ranap_id_CommonID                     = 15,
   ranap_id_CN_InvokeTrace               = 16,
   ranap_id_LocationReportingControl     = 17,
   ranap_id_LocationReport               = 18,
   ranap_id_InitialUE_Message            = 19,
   ranap_id_DirectTransfer               = 20,
   ranap_id_OverloadControl              = 21,
   ranap_id_ErrorIndication              = 22,
   ranap_id_SRNS_DataForward             = 23,
   ranap_id_ForwardSRNS_Context          = 24,
   ranap_id_privateMessage               = 25,
   ranap_id_CN_DeactivateTrace           = 26,
   ranap_id_ResetResource                = 27,
   ranap_id_RANAP_Relocation             = 28,
   ranap_id_RAB_ModifyRequest            = 29,
   ranap_id_LocationRelatedData          = 30,
   ranap_id_InformationTransfer          = 31,
   ranap_id_UESpecificInformation        = 32,
   ranap_id_UplinkInformationExchange    = 33,
   ranap_id_DirectInformationTransfer    = 34,
   ranap_id_MBMSSessionStart             = 35,
   ranap_id_MBMSSessionUpdate            = 36,
   ranap_id_MBMSSessionStop              = 37,
   ranap_id_MBMSUELinking                = 38,
   ranap_id_MBMSRegistration             = 39,
   ranap_id_MBMSCNDe_Registration_Procedure    = 40,
   ranap_id_MBMSRABEstablishmentIndication     = 41,
   ranap_id_MBMSRABRelease                     = 42,
   ranap_id_enhancedRelocationComplete         = 43,
   ranap_id_enhancedRelocationCompleteConfirm  = 44,
   ranap_id_RANAPenhancedRelocation            = 45,
   ranap_id_SRVCCPreparation                   = 46,
   ranap_id_UeRadioCapabilityMatch             = 47,
};

typedef enum tag_EN_SCCP_MESSAGE_TYPE
{
    EN_SCCP_MESSAGE_CR     = 0x01,    /* Connection request */
    EN_SCCP_MESSAGE_CC     = 0x02,    /* Connection confirm */
    EN_SCCP_MESSAGE_CREF   = 0x03,    /* Connection refused */
    EN_SCCP_MESSAGE_RLSD   = 0x04,    /* Released */
    EN_SCCP_MESSAGE_RLC    = 0x05,    /* Release complete */
    EN_SCCP_MESSAGE_DT1    = 0x06,    /* Data form 1 */
    EN_SCCP_MESSAGE_DT2    = 0x07,    /* Data form 2 */
    EN_SCCP_MESSAGE_AK     = 0x08,    /* Data acknowledgement */
    EN_SCCP_MESSAGE_UDT    = 0x09,    /* Unitdata */
    EN_SCCP_MESSAGE_UDTS   = 0x0A,    /* Unitdata service */
    EN_SCCP_MESSAGE_ED     = 0x0B,    /* Expedited data  */
    EN_SCCP_MESSAGE_EA     = 0x0C,    /* Expedited data acknowledgement */
    EN_SCCP_MESSAGE_RSR    = 0x0D,    /* Reset request */
    EN_SCCP_MESSAGE_RSC    = 0x0E,    /* Reset confirmation */
    EN_SCCP_MESSAGE_ERR    = 0x0F,    /* Protocol data unit error */
    EN_SCCP_MESSAGE_IT     = 0x10,    /* Inactivity test  */
    EN_SCCP_MESSAGE_XUDT   = 0x11,    /* Extended unitdata */
    EN_SCCP_MESSAGE_XUDTS  = 0x12,    /* Extended unitdata service */
    EN_SCCP_MESSAGE_LUDT   = 0x13,    /* Long unitdata */
    EN_SCCP_MESSAGE_LUDTS  = 0x14,    /* Long unitdata service */
    EN_SCCP_MESSAGE_BUTT
}EN_SCCP_MESSAGE_TYPE;

/*RANAP解析出来的信息是否存在*/
typedef enum
{
    RANAP_IE_IMSI_VALID             = (1<<0),
    RANAP_IE_RAI_VALID              = (1<<1),
    RANAP_IE_TRANS_BEARID_VALID     = (1<<2),
    RANAP_IE_TRANS_GTPIP_VALID      = (1<<3),
    RANAP_IE_TRANS_GTPID_VALID      = (1<<4),
}RANAP_IE_VALID_TYPE_EM;


typedef enum
{
    GTPV1C_PARA_IMSI_VALID          = 1<<0,
    GTPV1C_PARA_IMEI_VALID          = 1<<1,
    GTPV1C_PARA_MSISDN_VALID        = 1<<2,
    GTPV1C_PARA_CAUSE_VALID         = 1<<3,
    GTPV1C_PARA_BEARID_VALID        = 1<<4,
    GTPV1C_PARA_SEQ_NUM_VALID       = 1<<5,
    GTPV1C_PARA_GTPIP_C_UL_VALID    = 1<<6,     //gn-c接口:gtpc_ggsn_gtpip
    GTPV1C_PARA_GTPIP_C_DL_VALID    = 1<<7,     //gn-c接口:gtpc_sgsn_gtpip
    GTPV1C_PARA_GTPIP_U_UL_VALID    = 1<<8,     //gn-u接口:gtpu_ggsn_gtpip
    GTPV1C_PARA_GTPIP_U_DL_VALID    = 1<<9,     //gn-u接口:gtpu_ms_gtpip
    GTPV1C_PARA_TEID_C_UL_VALID     = 1<<10,    //gn-c接口:gtpc_ggsn_teid
    GTPV1C_PARA_TEID_C_DL_VALID     = 1<<11,    //gn-c接口:gtpc_sgsn_teid
    GTPV1C_PARA_TEID_U_UL_VALID     = 1<<12,    //gn-u接口:gtpu_ggsn_teid
    GTPV1C_PARA_TEID_U_DL_VALID     = 1<<13,    //gn-u接口:gtpu_ms_teid
    GTPV1C_PARA_NSAPI_VALID         = 1<<14,
    GTPV1C_PARA_PDN_VALID           = 1<<15,
    GTPV1C_PARA_CELL_ID_VALID       = 1<<16,
    GTPV1C_PARA_LAC_VALID           = 1<<17,
}gtpv1c_para_valid_t;


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
    ip_comm_t hss_ip;
    ip_comm_t s6a_mme_ip;
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
    PARSE_PROTOCOL_IUPS
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
    ip_comm_t    tip;
    uint32_t    teid;
}parse_rab_t;

typedef  struct
{
    uint8_t     direction;  /* packet direction, 0: up direction from eNodeB to MME, 1: down direction, from MME to eNodeB */
    uint8_t     procecode;  /* Procedure Code */
    uint32_t    protocolIE_id;  /**/
    uint16_t    bear_id;          /* NAS use */
    uint16_t    sequence_no;      /* NAS use */
    uint32_t    cn_id;
    uint32_t    access_node_id;
    ip_comm_t   access_node_ip;
    ip_comm_t   cn_ip;
    lte_tai_t   tai;
    parse_nas_t nas;
    uint8_t     nas_exist;
    parse_rab_t rab_info;
    lte_ecgi_t  ecgi;
    uint8_t     ecgi_exist;
    uint8_t     is_enb_path_switch_suc;/*if the ENodeB path switch process success*/
}parse_s1ap_t;

typedef enum {
    PACKET_TYPE_IPV4_UDP,
    PACKET_TYPE_IPV6_UDP,
    PACKET_TYPE_IPV4_TCP,
    PACKET_TYPE_IPV6_TCP,
    PACKET_TYPE_802_3_PAUSE,
    PACKET_TYPE_CBFC_PAUSE,
    PACKET_TYPE_CJPAT,
    PACKET_TYPE_HELP    /* best to keep this last */
} packet_type_t;


typedef struct
{
    packet_type_t           output_packet_type;
    uint64_t                src_mac;
    uint64_t                dest_mac;
    ip_comm_t               src_ip;
    ip_comm_t               dest_ip;
    uint32_t                ip_tos;
    uint16_t                src_port;
    uint16_t                dest_port;
    void (*tx_cb)(void);
}pkt_setup_t;

typedef struct
{
    ip_comm_t           ot_srcip;
    ip_comm_t           ot_dstip;
    uint8_t             ot_protocol;

    uint16_t            ot_srcport;
    uint16_t            ot_dstport;

    ip_comm_t           in_srcip;
    ip_comm_t           in_dstip;
    uint8_t             in_protocol;
    uint16_t            in_srcport;

    uint16_t            in_dstport;
    uint32_t            teid;
    uint16_t            payload_offset;
    uint16_t            resv;

    lte_imsi_t          imsi;  /*IMSI*/
    lte_imei_t          imei;  /*IMEI*/
    lte_msisdn_t        msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;
    mobile_comm_sys_t   mobile_type;//用于指明是3g还是4g的gtpu报文
    lte_tai_t           tai;
    lte_guti_t          guti;
    lte_ecgi_t          ecgi;
    rai_t               rai;
    cell_id_t           cell_id;
    union
    {
        struct {
            uint32_t imsi_en:1;
            uint32_t imei_en:1;
            uint32_t msisdn_en:1;
            uint32_t tai_en:1;
            uint32_t guti_en:1;
            uint32_t ecgi_en:1;
            uint32_t rai_en:1;
         };
         uint32_t lte_info_valid_mask;
    };
    /*
    uint8_t     imsi_en;
    uint8_t     imei_en;
    uint8_t     msisdn_en;
    uint8_t     tai_en;
    uint8_t     guti_en;
    */

}parse_gtpu_t;





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

/************************gtpv2c ************************************/

typedef struct
{
    lte_tai_t   tai;
    lte_ecgi_t  ecgi;
}gtp_uli_t;

typedef struct
{
    lte_imsi_t          imsi;  /*IMSI*/
    lte_imei_t          imei;  /*IMEI*/
    lte_msisdn_t        msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;
    uint8_t     message_type;
    uint8_t     gtp_version;
    uint8_t     cause;    /*check response*/
    uint8_t     bearerid;
    uint16_t    message_len;
    uint32_t    sequence_number;
    ip_comm_t    dstip;
    ip_comm_t    srcip;
    uint32_t    teid;
    pdn_t       pdn;
    lte_fteid_t fteid[S_MAX];
    gtp_uli_t   uli;
}parse_gtpc_t;


/************************gtpv1c ************************************/

typedef struct
{
    lte_imsi_t          imsi;  /*IMSI*/
    lte_imei_t          imei;  /*IMEI*/
    lte_msisdn_t        msisdn;/*phone number*/
    uint16_t            imsi_len;
    uint16_t            imei_len;
    uint16_t            msisdn_len;
    uint8_t             message_type;
    uint8_t             gtp_version;
    uint8_t             cause;    /*check response*/
    uint8_t             nsapi;
    uint16_t            message_len;
    uint16_t            sequence_number;
    ip_comm_t           dstip;
    ip_comm_t           srcip;
    uint32_t            teid;       //CTPV1-C头部的TEID
    pdn_t               pdn;
    ip_comm_t           gtp_ip[GTP_MAX];
    uint32_t            gtp_teid[GTP_MAX];
    cell_id_t           cell_id;
    lac_t               lac;
    uint32_t            mask;       //用于标志那个参数有效，见gtpv1c_para_valid_t
}parse_gtpv1c_t;






/*****************************************************
 *           sccp报文解析出来的数据
 *****************************************************/
typedef struct tag_ST_PARSE_SCCP_OUT
{
    uint8_t   message_type;             /* 消息类型 */
    struct
    {
        uint8_t slr_indic  : 1;         /* 是否存在slr */
        uint8_t dlr_indic  : 1;         /* 是否存在dlr */
        uint8_t data_indic : 1;         /* 是否携带数据 */
        uint8_t reserverd  : 5;         /* 保留字段 */
    };
    uint8_t   ssn;                       /* 子系统编号，如RANAP */
    uint8_t   reserv;
    uint32_t  slr;                       /* slr值 */
    uint32_t  dlr;                       /* dlr值 */
    uint32_t  opc;                       /* opc值 */
    uint32_t  dpc;                       /* dpc值 */
}parse_sccp_t;

typedef struct
{
    uint16_t    bear_id;        /*bear id*/
    ip_comm_t   gTP_ip;         /*gtp-u ip*/
    uint32_t    gTP_id;         /*gtp-u teid*/
}TransportLayerMsg_t;

typedef  struct
{
    uint8_t              isPacketValid; /*对关联模块是否是有效的， YES有效 NO无效*/
    uint8_t              pduCode;       /*initiatingMessage successfulOutcome unsuccessfulOutcome outcome*/
    uint8_t              procecode;     /* Procedure Code */
    uint8_t              mask;          /*信息是否有效的标志位，详见 RANAP_IE_VALID_TYPE_EM*/
    TransportLayerMsg_t  transportMsg;  /*transport layer message*/
    rai_t                rai;           /*路由区标志*/
    imsi_t               imsi;          /*International Mobile Subscriber Identification Number*/
}parse_ranap_t;


typedef struct
{
    uint8_t pd;                 //指示这个报文的NAS是GMM还是其他的报文
    uint8_t message_type;       //指示是什么消息类型
    uint16_t valid_ie_mask;     //指示NAS消息里面的哪些IE是有效的
    uint8_t identity_type;
    p_tmsi_t p_tmsi;
    imsi_t imsi;
    rai_t rai;
    imei_t imei;
}parse_gmm_nas_t;

typedef struct
{
    uint8_t             direction;  /* packet direction, 1: up direction from eNodeB to MME,
                                                          0: down direction, from MME to eNodeB */
    ip_comm_t           rncip;
    ip_comm_t           sgsnip;

    parse_sccp_t        sccp_info;
    parse_ranap_t       ranap_info;/*RAI\teid\ip\procecode\protocolIE_id\bear_id\imsi\mask*/
    parse_gmm_nas_t     gmm_info;/*RAI\msgtype\imsi\p-tmsi\imei\imsi\mask*/
}parse_IuPS_t;

typedef struct
{
    ip_comm_t srcip;
    ip_comm_t dstip;
    uint16_t srcport;
    uint16_t dstport;
    uint8_t  protocol;
}parse_ip_t;

typedef struct
{
    prase_protocol_em  protocol;
    parse_result_t     result;
    uint8_t            IuPS_msg_num;
    uint8_t            is_sccp_pkt;  //是否是sccp报文的标志，用于sccp报文转发
    union
    {
        parse_s1ap_t s1ap;
        parse_diameter_t diameter;
        parse_gtpc_t gtpc;
        parse_gtpv1c_t gtpv1c;
        parse_gtpu_t gtpu;
        parse_IuPS_t IuPS_info[2];
    };
    uint8_t  version;
    parse_ip_t ip;
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


typedef enum
{
    REUQEST_ACCEPT = 16
}ie_cause_em_t;

#endif /* RELATE_PACKET_ENTRY_H_ */
