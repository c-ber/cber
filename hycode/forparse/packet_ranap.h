/*-----------------------------------------------------------------------------
 文件名  : packet_ranap.h
 作者    : ruanxiangwei
 版本    : v1.0
 完成日期: 2016-03-14
 文件描述: RANAP解析部分的头文件
 备注    : 
 修改历史:
 1.修改者: ruanxiangwei
 时间    : 2016.03.14
 版本    : v1.0
 修改原因: 创建此文件
 2...
-----------------------------------------------------------------------------*/
#ifndef __PARSE_RANAP_H
#define __PARSE_RANAP_H


/*=====================宏定义========================*/
#define LAI_LEN            5
#define RAC_LEN            1
#define RAI_LEN            6   //rai = lai+rac

#ifndef YES
#define YES                1
#endif  
#ifndef NO
#define NO                 0
#endif 

/*RANAP解析出来的信息是否存在*/
typedef enum
{
    RANAP_IE_IMSI_VALID             = (1<<0),
    RANAP_IE_RAI_VALID              = (1<<1),
    RANAP_IE_TRANS_BEARID_VALID     = (1<<2),
    RANAP_IE_TRANS_GTPIP_VALID      = (1<<3),
    RANAP_IE_TRANS_GTPID_VALID      = (1<<4),
}RANAP_IE_VALID_TYPE_EM;


/*=====================枚举定义========================*/
//triggering_message
typedef enum tag_EN_RANAP_TRIGGER_MSG
{
    EN_RANAP_TRIGGER_INIT_MSG           = 0,    //initiatingMessage
    EN_RANAP_TRIGGER_SUCC_OUT_COME      = 1,    //successfulOutcome
    EN_RANAP_TRIGGER_UNSUCC_OUT_COME    = 2,    //unsuccessfulOutcome
    EN_RANAP_TRIGGER_OUT_COME           = 3,    //outcome
}EN_RANAP_TRIGGER_MSG;

//criticality
typedef enum tag_EN_RANAP_CRITICALITY
{
    EN_RANAP_CRITICALITY_REJECT,    //reject
    EN_RANAP_CRITICALITY_IGNORE,    //ignore
    EN_RANAP_CRITICALITY_NOTIFY,    //notify
}EN_RANAP_CRITICALITY;

/*RANAP procedure code*/
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

/*RANAP ProtocolIEs ID*/
enum _RANAP_ProtocolIEs_ID{
   ranap_id_AreaIdentity                        = 0,
   ranap_id_CN_DomainIndicator                  = 3,
   ranap_id_Cause                               = 4,
   ranap_id_ChosenEncryptionAlgorithm           = 5,
   ranap_id_ChosenIntegrityProtectionAlgorithm  = 6,
   ranap_id_ClassmarkInformation2               = 7,
   ranap_id_ClassmarkInformation3               = 8,
   ranap_id_CriticalityDiagnostics              = 9,
   ranap_id_DL_GTP_PDU_SequenceNumber           = 10,
   ranap_id_EncryptionInformation               = 11,
   ranap_id_IntegrityProtectionInformation      = 12,
   ranap_id_IuTransportAssociation              = 13,
   ranap_id_L3_Information                      = 14,
   ranap_id_LAI                                 = 15,
   ranap_id_NAS_PDU                             = 16,
   ranap_id_NonSearchingIndication              = 17,
   ranap_id_NumberOfSteps                       = 18,
   ranap_id_OMC_ID                              = 19,
   ranap_id_OldBSS_ToNewBSS_Information         = 20,
   ranap_id_PagingAreaID                        = 21,
   ranap_id_PagingCause                         = 22,
   ranap_id_PermanentNAS_UE_ID                  = 23,
   ranap_id_RAB_ContextItem                     = 24,
   ranap_id_RAB_ContextList                     = 25,
   ranap_id_RAB_DataForwardingItem              = 26,
   ranap_id_RAB_DataForwardingItem_SRNS_CtxReq  = 27,
   ranap_id_RAB_DataForwardingList              = 28,
   ranap_id_RAB_DataForwardingList_SRNS_CtxReq  = 29,
   ranap_id_RAB_DataVolumeReportItem            = 30,
   ranap_id_RAB_DataVolumeReportList            = 31,
   ranap_id_RAB_DataVolumeReportRequestItem     = 32,
   ranap_id_RAB_DataVolumeReportRequestList     = 33,
   ranap_id_RAB_FailedItem                      = 34,
   ranap_id_RAB_FailedList                      = 35,
   ranap_id_RAB_ID                              = 36,
   ranap_id_RAB_QueuedItem                      = 37,
   ranap_id_RAB_QueuedList                      = 38,
   ranap_id_RAB_ReleaseFailedList               = 39,
   ranap_id_RAB_ReleaseItem                     = 40,
   ranap_id_RAB_ReleaseList                     = 41,
   ranap_id_RAB_ReleasedItem                    = 42,
   ranap_id_RAB_ReleasedList                    = 43,
   ranap_id_RAB_ReleasedList_IuRelComp          = 44,
   ranap_id_RAB_RelocationReleaseItem           = 45,
   ranap_id_RAB_RelocationReleaseList           = 46,
   ranap_id_RAB_SetupItem_RelocReq              = 47,
   ranap_id_RAB_SetupItem_RelocReqAck           = 48,
   ranap_id_RAB_SetupList_RelocReq              = 49,
   ranap_id_RAB_SetupList_RelocReqAck           = 50,
   ranap_id_RAB_SetupOrModifiedItem             = 51,
   ranap_id_RAB_SetupOrModifiedList             = 52,
   ranap_id_RAB_SetupOrModifyItem               = 53,
   ranap_id_RAB_SetupOrModifyList               = 54,
   ranap_id_RAC                                 = 55,
   ranap_id_RelocationType                      = 56,
   ranap_id_RequestType                         = 57,
   ranap_id_SAI                                 = 58,
   ranap_id_SAPI                                = 59,
   ranap_id_SourceID                            = 60,
   ranap_id_Source_ToTarget_TransparentContainer    = 61,
   ranap_id_TargetID                                = 62,
   ranap_id_Target_ToSource_TransparentContainer    = 63,
   ranap_id_TemporaryUE_ID                          = 64,
   ranap_id_TraceReference                          = 65,
   ranap_id_TraceType                               = 66,
   ranap_id_TransportLayerAddress                   = 67,
   ranap_id_TriggerID                               = 68,
   ranap_id_UE_ID                                   = 69,
   ranap_id_UL_GTP_PDU_SequenceNumber               = 70,
   ranap_id_RAB_FailedtoReportItem                  = 71,
   ranap_id_RAB_FailedtoReportList                  = 72,
   ranap_id_KeyStatus                               = 75,
   ranap_id_DRX_CycleLengthCoefficient              = 76,
   ranap_id_IuSigConIdList                          = 77,
   ranap_id_IuSigConIdItem                          = 78,
   ranap_id_IuSigConId                              = 79,
   ranap_id_DirectTransferInformationItem_RANAP_RelocInf = 80,
   ranap_id_DirectTransferInformationList_RANAP_RelocInf = 81,
   ranap_id_RAB_ContextItem_RANAP_RelocInf               = 82,
   ranap_id_RAB_ContextList_RANAP_RelocInf               = 83,
   ranap_id_RAB_ContextFailedtoTransferItem              = 84,
   ranap_id_RAB_ContextFailedtoTransferList              = 85,
   ranap_id_GlobalRNC_ID                                 = 86,
   ranap_id_RAB_ReleasedItem_IuRelComp                   = 87,
   ranap_id_MessageStructure                             = 88,
   ranap_id_Alt_RAB_Parameters                           = 89,
   ranap_id_Ass_RAB_Parameters                           = 90,
   ranap_id_RAB_ModifyList                               = 91,
   ranap_id_RAB_ModifyItem                               = 92,
   ranap_id_TypeOfError                                  = 93,
   ranap_id_BroadcastAssistanceDataDecipheringKeys       = 94,
   ranap_id_LocationRelatedDataRequestType               = 95,
   ranap_id_GlobalCN_ID                                  = 96,
   ranap_id_LastKnownServiceArea                         = 97,
   ranap_id_SRB_TrCH_Mapping                             = 98,
   ranap_id_InterSystemInformation_TransparentContainer  = 99,
   ranap_id_NewBSS_To_OldBSS_Information                 = 100,
   ranap_id_SourceRNC_PDCP_context_info                  = 103,
   ranap_id_InformationTransferID                        = 104,
   ranap_id_SNA_Access_Information                       = 105,
   ranap_id_ProvidedData                                 = 106,
   ranap_id_GERAN_BSC_Container                          = 107,
   ranap_id_GERAN_Classmark                              = 108,
   ranap_id_GERAN_Iumode_RAB_Failed_RABAssgntResponse_Item      = 109,
   ranap_id_GERAN_Iumode_RAB_FailedList_RABAssgntResponse       = 110,
   ranap_id_VerticalAccuracyCode                                = 111,
   ranap_id_ResponseTime                                        = 112,
   ranap_id_PositioningPriority                                 = 113,
   ranap_id_ClientType                                          = 114,
   ranap_id_LocationRelatedDataRequestTypeSpecificToGERANIuMode = 115,
   ranap_id_SignallingIndication                     = 116,
   ranap_id_hS_DSCH_MAC_d_Flow_ID                    = 117,
   ranap_id_UESBI_Iu                                 = 118,
   ranap_id_PositionData                             = 119,
   ranap_id_PositionDataSpecificToGERANIuMode        = 120,
   ranap_id_CellLoadInformationGroup                 = 121,
   ranap_id_AccuracyFulfilmentIndicator              = 122,
   ranap_id_InformationTransferType                  = 123,
   ranap_id_TraceRecordingSessionInformation         = 124,
   ranap_id_TracePropagationParameters               = 125,
   ranap_id_InterSystemInformationTransferType       = 126,
   ranap_id_SelectedPLMN_ID                          = 127,
   ranap_id_RedirectionCompleted                     = 128,
   ranap_id_RedirectionIndication                    = 129,
   ranap_id_NAS_SequenceNumber                       = 130,
   ranap_id_RejectCauseValue                         = 131,
   ranap_id_APN                                      = 132,
   ranap_id_CNMBMSLinkingInformation                 = 133,
   ranap_id_DeltaRAListofIdleModeUEs                 = 134,
   ranap_id_FrequenceLayerConvergenceFlag            = 135,
   ranap_id_InformationExchangeID                    = 136,
   ranap_id_InformationExchangeType                  = 137,
   ranap_id_InformationRequested                     = 138,
   ranap_id_InformationRequestType                   = 139,
   ranap_id_IPMulticastAddress                       = 140,
   ranap_id_JoinedMBMSBearerServicesList             = 141,
   ranap_id_LeftMBMSBearerServicesList               = 142,
   ranap_id_MBMSBearerServiceType                    = 143,
   ranap_id_MBMSCNDe_Registration                    = 144,
   ranap_id_MBMSServiceArea                          = 145,
   ranap_id_MBMSSessionDuration                      = 146,
   ranap_id_MBMSSessionIdentity                      = 147,
   ranap_id_PDP_TypeInformation                      = 148,
   ranap_id_RAB_Parameters                           = 149,
   ranap_id_RAListofIdleModeUEs                      = 150,
   ranap_id_MBMSRegistrationRequestType              = 151,
   ranap_id_SessionUpdateID                          = 152,
   ranap_id_TMGI                                     = 153,
   ranap_id_TransportLayerInformation                = 154,
   ranap_id_UnsuccessfulLinkingList                  = 155,
   ranap_id_MBMSLinkingInformation                   = 156,
   ranap_id_MBMSSessionRepetitionNumber              = 157,
   ranap_id_AlternativeRABConfiguration              = 158,
   ranap_id_AlternativeRABConfigurationRequest       = 159,
   ranap_id_E_DCH_MAC_d_Flow_ID                      = 160,
   ranap_id_SourceBSS_ToTargetBSS_TransparentContainer      = 161,
   ranap_id_TargetBSS_ToSourceBSS_TransparentContainer      = 162,
   ranap_id_TimeToMBMSDataTransfer                          = 163,
   ranap_id_IncludeVelocity                                 = 164,
   ranap_id_VelocityEstimate                                = 165,
   ranap_id_RedirectAttemptFlag                             = 166,
   ranap_id_RAT_Type                                        = 167,
   ranap_id_PeriodicLocationInfo                            = 168,
   ranap_id_MBMSCountingInformation                         = 169,
   ranap_id_170_not_to_be_used_for_IE_ids                   = 170,
   ranap_id_ExtendedRNC_ID                                  = 171,
   ranap_id_Alt_RAB_Parameter_ExtendedGuaranteedBitrateInf  = 172,
   ranap_id_Alt_RAB_Parameter_ExtendedMaxBitrateInf         = 173,
   ranap_id_Ass_RAB_Parameter_ExtendedGuaranteedBitrateList = 174,
   ranap_id_Ass_RAB_Parameter_ExtendedMaxBitrateList        = 175,
   ranap_id_RAB_Parameter_ExtendedGuaranteedBitrateList     = 176,
   ranap_id_RAB_Parameter_ExtendedMaxBitrateList            = 177,
   ranap_id_Requested_RAB_Parameter_ExtendedMaxBitrateList  = 178,
   ranap_id_Requested_RAB_Parameter_ExtendedGuaranteedBitrateList = 179,
   ranap_id_LAofIdleModeUEs                                = 180,
   ranap_id_newLAListofIdleModeUEs                         = 181,
   ranap_id_LAListwithNoIdleModeUEsAnyMore                 = 182,
   ranap_id_183_not_to_be_used_for_IE_ids                  = 183,
   ranap_id_GANSS_PositioningDataSet                       = 184,
   ranap_id_RequestedGANSSAssistanceData                   = 185,
   ranap_id_BroadcastGANSSAssistanceDataDecipheringKeys    = 186,
   ranap_id_d_RNTI_for_NoIuCSUP                            = 187,
   ranap_id_RAB_SetupList_EnhancedRelocCompleteReq         = 188,
   ranap_id_RAB_SetupItem_EnhancedRelocCompleteReq         = 189,
   ranap_id_RAB_SetupList_EnhancedRelocCompleteRes         = 190,
   ranap_id_RAB_SetupItem_EnhancedRelocCompleteRes         = 191,
   ranap_id_RAB_SetupList_EnhRelocInfoReq                  = 192,
   ranap_id_RAB_SetupItem_EnhRelocInfoReq                  = 193,
   ranap_id_RAB_SetupList_EnhRelocInfoRes                  = 194,
   ranap_id_RAB_SetupItem_EnhRelocInfoRes                  = 195,
   ranap_id_OldIuSigConId                                  = 196,
   ranap_id_RAB_FailedList_EnhRelocInfoRes                 = 197,
   ranap_id_RAB_FailedItem_EnhRelocInfoRes                 = 198,
   ranap_id_Global_ENB_ID                                  = 199,
   ranap_id_UE_History_Information                         = 200,
   ranap_id_MBMSSynchronisationInformation                 = 201,
   ranap_id_SubscriberProfileIDforRFP                      = 202,
   ranap_id_CSG_Id                                         = 203,
   ranap_id_OldIuSigConIdCS                                = 204,
   ranap_id_OldIuSigConIdPS                                = 205,
   ranap_id_GlobalCN_IDCS                                  = 206,
   ranap_id_GlobalCN_IDPS                                  = 207,
   ranap_id_SourceExtendedRNC_ID                           = 208,
   ranap_id_RAB_ToBeReleasedItem_EnhancedRelocCompleteRes  = 209,
   ranap_id_RAB_ToBeReleasedList_EnhancedRelocCompleteRes  = 210,
   ranap_id_SourceRNC_ID                                   = 211,
   ranap_id_Relocation_TargetRNC_ID                        = 212,
   ranap_id_Relocation_TargetExtendedRNC_ID                = 213,
   ranap_id_Alt_RAB_Parameter_SupportedGuaranteedBitrateInf        = 214,
   ranap_id_Alt_RAB_Parameter_SupportedMaxBitrateInf               = 215,
   ranap_id_Ass_RAB_Parameter_SupportedGuaranteedBitrateList       = 216,
   ranap_id_Ass_RAB_Parameter_SupportedMaxBitrateList              = 217,
   ranap_id_RAB_Parameter_SupportedGuaranteedBitrateList           = 218,
   ranap_id_RAB_Parameter_SupportedMaxBitrateList                  = 219,
   ranap_id_Requested_RAB_Parameter_SupportedMaxBitrateList        = 220,
   ranap_id_Requested_RAB_Parameter_SupportedGuaranteedBitrateList = 221,
   ranap_id_Relocation_SourceRNC_ID                      = 222,
   ranap_id_Relocation_SourceExtendedRNC_ID              = 223,
   ranap_id_EncryptionKey                                = 224,
   ranap_id_IntegrityProtectionKey                       = 225,
   ranap_id_SRVCC_HO_Indication                          = 226,
   ranap_id_SRVCC_Information                            = 227,
   ranap_id_SRVCC_Operation_Possible                     = 228,
   ranap_id_CSG_id_List                                  = 229,
   ranap_id_PSRABtobeReplaced                            = 230,
   ranap_id_E_UTRAN_Service_Handover                     = 231,
   ranap_id_UE_AggregateMaximumBitRate                   = 233,
   ranap_id_CSG_Membership_Status                        = 234,
   ranap_id_Cell_Access_Mode                             = 235,
   ranap_id_IP_Source_Address                            = 236,
   ranap_id_CSFB_Information                             = 237,
   ranap_id_PDP_TypeInformation_extension                = 238,
   ranap_id_MSISDN                                       = 239,
   ranap_id_Offload_RAB_Parameters                       = 240,
   ranap_id_LGW_TransportLayerAddress                    = 241,
   ranap_id_Correlation_ID                               = 242,
   ranap_id_IRAT_Measurement_Configuration               = 243,
   ranap_id_MDT_Configuration                            = 244,
   ranap_id_Priority_Class_Indicator                     = 245,
   ranap_id_RNSAPRelocationParameters                    = 247,
   ranap_id_RABParametersList                            = 248,
   ranap_id_Management_Based_MDT_Allowed                 = 249,
   ranap_id_HigherBitratesThan16MbpsFlag                 = 250,
   ranap_id_Trace_Collection_Entity_IP_Addess            = 251,
   ranap_id_End_Of_CSFB                                  = 252,
   ranap_id_Time_UE_StayedInCell_EnhancedGranularity     = 253,
   ranap_id_Out_Of_UTRAN                                 = 254,
   ranap_id_TraceRecordingSessionReference               = 255,
   ranap_id_IMSI                                         = 256,
   ranap_id_HO_Cause                                     = 257,
   ranap_id_VoiceSupportMatchIndicator                   = 258,
   ranap_id_RSRVCC_HO_Indication                         = 259,
   ranap_id_RSRVCC_Information                           = 260,
   ranap_id_AnchorPLMN_ID                                = 261,
   ranap_id_Tunnel_Information_for_BBF                   = 262,
   ranap_id_Management_Based_MDT_PLMN_List               = 263,
   ranap_id_SignallingBasedMDTPLMNList                   = 264,
   ranap_id_M4Report                                     = 265,
   ranap_id_M5Report                                     = 266,
   ranap_id_M6Report                                     = 267,
   ranap_id_M7Report                                     = 268,
   ranap_id_TimingDifferenceULDL                         = 269,
   ranap_id_Serving_Cell_Identifier                      = 270,
   ranap_id_EARFCN_Extended                              = 271,
   ranap_id_RSRVCC_Operation_Possible                    = 272,
   ranap_id_SIPTO_LGW_TransportLayerAddres               = 273,
   ranap_id_SIPTO_Correlation_ID                         = 274,
   ranap_id_LHN_ID                                       = 275,
   ranap_id_Session_Re_establishment_Indicator           = 276,
   ranap_id_LastE_UTRANPLMNIdentity                      = 277,
   ranap_id_RSRQ_Type                                    = 278,
   ranap_id_RSRQ_Extension                               = 279,
};


/*=====================结构体定义======================*/




/*=====================函数定义========================*/


#endif
