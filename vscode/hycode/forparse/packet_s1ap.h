#ifndef __PARSE_S1AP_H
#define __PARSE_S1AP_H


#define NAS_NOT_PROTECT         0
#define NAS_INTERAG_PROTECT     1
#define NAS_CIPHER_PROTECT      2 
#define NAS_INTERAG_PROTECT_WITH_EPS    3
#define NAS_CIPHER_WITH_NEW_EPS  4 
#define NAS_SECURITY_SERVICE_REQUEST    12



typedef struct
{
    uint8_t  direction;
    uint8_t  procecode;
    uint8_t  citicle;
    uint32_t length:8;
    uint32_t nitem:24;
}__attribute__((packed)) s1ap_head_t;


typedef struct
{
    uint8_t  direction;
    uint8_t  procecode;
    uint8_t  citicle;
    uint8_t  length;
    uint8_t  length2;
}__attribute__((packed)) s1ap_head_v_t;



typedef struct
{
    uint8_t  direction;
    uint8_t  procecode;
    uint8_t  citicle;
    uint8_t  flag;
    uint32_t length:8;
    uint32_t nitem:24;
}__attribute__((packed)) s1ap_head_sp_t;






typedef struct
{
    uint16_t ie_type;
    uint8_t  citicle;
    uint8_t  length;
}__attribute__((packed)) s1ap_ie_t;

typedef struct
{
    uint16_t ie_type;
    uint8_t  citicle;
    uint8_t  flag;
    uint8_t  length;
}__attribute__((packed)) s1ap_ie_sp_t;


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



#endif
