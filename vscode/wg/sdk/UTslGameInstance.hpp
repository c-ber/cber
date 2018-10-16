#pragma once
#include "UGameInstance.hpp"
#include "FTslStartParameter.hpp"
#include "FTslReplaySummary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslGameInstance // Size: 0xBC0
	: public UGameInstance // Size: 0x110
{
private:
	typedef UTslGameInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1321); // id32("Class TslGame.TslGameInstance")
		return ptr;
	}
//	TArray<struct FString> PersistentUClassPaths; /* Ofs: 0x108 Size: 0x10 - ArrayProperty TslGame.TslGameInstance.PersistentUClassPaths */
	uint8_t UnknownData110[0x8];
	TArray<ExternalPtr<struct UClass>> PersistentUClasses; /* Ofs: 0x118 Size: 0x10 - ArrayProperty TslGame.TslGameInstance.PersistentUClasses */
	FString WelcomeScreenMap; /* Ofs: 0x128 Size: 0x10 - StrProperty TslGame.TslGameInstance.WelcomeScreenMap */
	uint8_t boolField138;
	uint8_t UnknownData139[0x3];
	int32_t LobbyWidgetZOrder; /* Ofs: 0x13C Size: 0x4 - IntProperty TslGame.TslGameInstance.LobbyWidgetZOrder */
	ExternalPtr<struct ULobbyLink> LobbyLink; /* Ofs: 0x140 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.LobbyLink */
	ExternalPtr<struct UVivoxManager> VivoxManager; /* Ofs: 0x148 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.VivoxManager */
	ExternalPtr<struct UReporterManager> ReporterManager; /* Ofs: 0x150 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.ReporterManager */
	FTslStartParameter StartParamter; /* Ofs: 0x158 Size: 0x80 - StructProperty TslGame.TslGameInstance.StartParamter */
	uint8_t UnknownData1D8[0x158];
	ExternalPtr<struct UClass> LobbyWidgetClass; /* Ofs: 0x330 Size: 0x8 - ClassProperty TslGame.TslGameInstance.LobbyWidgetClass */
	uint8_t UnknownData338[0x148];
	ExternalPtr<struct ULobbyWidget> LobbyWidget; /* Ofs: 0x480 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.LobbyWidget */
	uint8_t UnknownData488[0xA8];
	TArray<struct FReplayKillEventItem> ReplayKillEventItems; /* Ofs: 0x530 Size: 0x10 - ArrayProperty TslGame.TslGameInstance.ReplayKillEventItems */
	FScriptMulticastDelegate OnEnumerateReplayKillEventsDone; /* Ofs: 0x540 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnEnumerateReplayKillEventsDone */
	uint8_t UnknownData550[0xA0];
	TArray<struct FReplayGroggyEventItem> ReplayGroggyEventItems; /* Ofs: 0x5F0 Size: 0x10 - ArrayProperty TslGame.TslGameInstance.ReplayGroggyEventItems */
	FScriptMulticastDelegate OnEnumerateReplayGroggyEventsDone; /* Ofs: 0x600 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnEnumerateReplayGroggyEventsDone */
	uint8_t UnknownData610[0x10];
	TArray<struct FReplayItem> ReplayItemList; /* Ofs: 0x620 Size: 0x10 - ArrayProperty TslGame.TslGameInstance.ReplayItemList */
	uint8_t UnknownData630[0x38];
	FScriptMulticastDelegate OnGetReplayListDone; /* Ofs: 0x668 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnGetReplayListDone */
	FScriptMulticastDelegate OnGotoTimelineDone; /* Ofs: 0x678 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnGotoTimelineDone */
	FScriptMulticastDelegate OnRecordStarted; /* Ofs: 0x688 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnRecordStarted */
	FScriptMulticastDelegate OnReplayProblem; /* Ofs: 0x698 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnReplayProblem */
	FScriptMulticastDelegate OnDownloadZippedReplayProgressDelegate; /* Ofs: 0x6A8 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnDownloadZippedReplayProgressDelegate */
	FScriptMulticastDelegate OnDownloadZippedReplayCompleteDelegate; /* Ofs: 0x6B8 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnDownloadZippedReplayCompleteDelegate */
	uint8_t UnknownData6C8[0x28];
	int32_t MaxReplaysForNullStreamer; /* Ofs: 0x6F0 Size: 0x4 - IntProperty TslGame.TslGameInstance.MaxReplaysForNullStreamer */
	int32_t NumReplaysForNullStreamer; /* Ofs: 0x6F4 Size: 0x4 - IntProperty TslGame.TslGameInstance.NumReplaysForNullStreamer */
	int32_t NumReplaysToKeepForNullStreamer; /* Ofs: 0x6F8 Size: 0x4 - IntProperty TslGame.TslGameInstance.NumReplaysToKeepForNullStreamer */
	uint8_t UnknownData6FC[0x4];
	FScriptMulticastDelegate OnKeepAndDeleteOldestReplaysDoneDelegate; /* Ofs: 0x700 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnKeepAndDeleteOldestReplaysDoneDelegate */
	uint8_t UnknownData710[0x10];
	ExternalPtr<struct UGameEventObserver> GameEventObserver; /* Ofs: 0x720 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.GameEventObserver */
	uint8_t UnknownData728[0xB8];
	FTslReplaySummary ReplaySummaryForPlayback; /* Ofs: 0x7E0 Size: 0x90 - StructProperty TslGame.TslGameInstance.ReplaySummaryForPlayback */
	FScriptMulticastDelegate OnGetReplaySummaryDone; /* Ofs: 0x870 Size: 0x10 - MulticastDelegateProperty TslGame.TslGameInstance.OnGetReplaySummaryDone */
	uint8_t boolField880;
	uint8_t UnknownData881[0x7];
	ExternalPtr<struct UTslPlayerState> CachedDemoPlayerState; /* Ofs: 0x888 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.CachedDemoPlayerState */
	uint8_t UnknownData890[0x148];
	ExternalPtr<struct UHighlightSession> HighlightSession; /* Ofs: 0x9D8 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.HighlightSession */
	uint8_t UnknownData9E0[0x108];
	ExternalPtr<struct UKakaoSessionClientChecker> KakaoSessionClientProcessChecker; /* Ofs: 0xAE8 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.KakaoSessionClientProcessChecker */
	ExternalPtr<struct UUnderFpsCountStatistics> UnderFpsCountStatstics; /* Ofs: 0xAF0 Size: 0x8 - ObjectProperty TslGame.TslGameInstance.UnderFpsCountStatstics */
	uint8_t UnknownDataAF8[0x28];
	TMap<int32_t, struct FTeamInfo> TeamInfoMap; /* Ofs: 0xB20 Size: 0x50 - MapProperty TslGame.TslGameInstance.TeamInfoMap */
	uint8_t UnknownDataB70[0x50];


//	inline bool SetPersistentUClassPaths(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x108, value); }
	inline bool SetPersistentUClasses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x118, value); }
	inline bool SetWelcomeScreenMap(t_structHelper inst, FString value) { inst.WriteOffset(0x128, value); }
	inline bool bUseLobbyWidget()
	{
		return boolField138& 0x1;
	}
	inline bool SetbUseLobbyWidget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x138, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLobbyWidgetZOrder(t_structHelper inst, int32_t value) { inst.WriteOffset(0x13C, value); }
	inline bool SetLobbyLink(t_structHelper inst, ExternalPtr<struct ULobbyLink> value) { inst.WriteOffset(0x140, value); }
	inline bool SetVivoxManager(t_structHelper inst, ExternalPtr<struct UVivoxManager> value) { inst.WriteOffset(0x148, value); }
	inline bool SetReporterManager(t_structHelper inst, ExternalPtr<struct UReporterManager> value) { inst.WriteOffset(0x150, value); }
	inline bool SetStartParamter(t_structHelper inst, FTslStartParameter value) { inst.WriteOffset(0x158, value); }
	inline bool SetLobbyWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x330, value); }
	inline bool SetLobbyWidget(t_structHelper inst, ExternalPtr<struct ULobbyWidget> value) { inst.WriteOffset(0x480, value); }
	inline bool SetReplayKillEventItems(t_structHelper inst, TArray<struct FReplayKillEventItem> value) { inst.WriteOffset(0x530, value); }
	inline bool SetOnEnumerateReplayKillEventsDone(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x540, value); }
	inline bool SetReplayGroggyEventItems(t_structHelper inst, TArray<struct FReplayGroggyEventItem> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetOnEnumerateReplayGroggyEventsDone(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x600, value); }
	inline bool SetReplayItemList(t_structHelper inst, TArray<struct FReplayItem> value) { inst.WriteOffset(0x620, value); }
	inline bool SetOnGetReplayListDone(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x668, value); }
	inline bool SetOnGotoTimelineDone(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x678, value); }
	inline bool SetOnRecordStarted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x688, value); }
	inline bool SetOnReplayProblem(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x698, value); }
	inline bool SetOnDownloadZippedReplayProgressDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetOnDownloadZippedReplayCompleteDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetMaxReplaysForNullStreamer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetNumReplaysForNullStreamer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6F4, value); }
	inline bool SetNumReplaysToKeepForNullStreamer(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6F8, value); }
	inline bool SetOnKeepAndDeleteOldestReplaysDoneDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x700, value); }
	inline bool SetGameEventObserver(t_structHelper inst, ExternalPtr<struct UGameEventObserver> value) { inst.WriteOffset(0x720, value); }
	inline bool SetReplaySummaryForPlayback(t_structHelper inst, FTslReplaySummary value) { inst.WriteOffset(0x7E0, value); }
	inline bool SetOnGetReplaySummaryDone(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x870, value); }
	inline bool bIsStartedFromReplayListMap()
	{
		return boolField880& 0x1;
	}
	inline bool SetbIsStartedFromReplayListMap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x880, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCachedDemoPlayerState(t_structHelper inst, ExternalPtr<struct UTslPlayerState> value) { inst.WriteOffset(0x888, value); }
	inline bool SetHighlightSession(t_structHelper inst, ExternalPtr<struct UHighlightSession> value) { inst.WriteOffset(0x9D8, value); }
	inline bool SetKakaoSessionClientProcessChecker(t_structHelper inst, ExternalPtr<struct UKakaoSessionClientChecker> value) { inst.WriteOffset(0xAE8, value); }
	inline bool SetUnderFpsCountStatstics(t_structHelper inst, ExternalPtr<struct UUnderFpsCountStatistics> value) { inst.WriteOffset(0xAF0, value); }
	inline bool SetTeamInfoMap(t_structHelper inst, TMap<int32_t, struct FTeamInfo> value) { inst.WriteOffset(0xB20, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslGameInstance = sizeof(UTslGameInstance); // 3008
    static_assert(sizeof(UTslGameInstance) == 0xBC0, "Size of UTslGameInstance is not correct.");
//	auto constexpr UTslGameInstance_PersistentUClassPaths_Offset = offsetof(UTslGameInstance, PersistentUClassPaths);
//	static_assert(UTslGameInstance_PersistentUClassPaths_Offset == 0x108, "UTslGameInstance::PersistentUClassPaths offset is not 108");
	auto constexpr UTslGameInstance_PersistentUClasses_Offset = offsetof(UTslGameInstance, PersistentUClasses);
	static_assert(UTslGameInstance_PersistentUClasses_Offset == 0x118, "UTslGameInstance::PersistentUClasses offset is not 118");
	auto constexpr UTslGameInstance_WelcomeScreenMap_Offset = offsetof(UTslGameInstance, WelcomeScreenMap);
	static_assert(UTslGameInstance_WelcomeScreenMap_Offset == 0x128, "UTslGameInstance::WelcomeScreenMap offset is not 128");
	auto constexpr UTslGameInstance_boolField138_Offset = offsetof(UTslGameInstance, boolField138);
	static_assert(UTslGameInstance_boolField138_Offset == 0x138, "UTslGameInstance::boolField138 offset is not 138");
	auto constexpr UTslGameInstance_LobbyWidgetZOrder_Offset = offsetof(UTslGameInstance, LobbyWidgetZOrder);
	static_assert(UTslGameInstance_LobbyWidgetZOrder_Offset == 0x13c, "UTslGameInstance::LobbyWidgetZOrder offset is not 13c");
	auto constexpr UTslGameInstance_LobbyLink_Offset = offsetof(UTslGameInstance, LobbyLink);
	static_assert(UTslGameInstance_LobbyLink_Offset == 0x140, "UTslGameInstance::LobbyLink offset is not 140");
	auto constexpr UTslGameInstance_VivoxManager_Offset = offsetof(UTslGameInstance, VivoxManager);
	static_assert(UTslGameInstance_VivoxManager_Offset == 0x148, "UTslGameInstance::VivoxManager offset is not 148");
	auto constexpr UTslGameInstance_ReporterManager_Offset = offsetof(UTslGameInstance, ReporterManager);
	static_assert(UTslGameInstance_ReporterManager_Offset == 0x150, "UTslGameInstance::ReporterManager offset is not 150");
	auto constexpr UTslGameInstance_StartParamter_Offset = offsetof(UTslGameInstance, StartParamter);
	static_assert(UTslGameInstance_StartParamter_Offset == 0x158, "UTslGameInstance::StartParamter offset is not 158");
	auto constexpr UTslGameInstance_LobbyWidgetClass_Offset = offsetof(UTslGameInstance, LobbyWidgetClass);
	static_assert(UTslGameInstance_LobbyWidgetClass_Offset == 0x330, "UTslGameInstance::LobbyWidgetClass offset is not 330");
	auto constexpr UTslGameInstance_LobbyWidget_Offset = offsetof(UTslGameInstance, LobbyWidget);
	static_assert(UTslGameInstance_LobbyWidget_Offset == 0x480, "UTslGameInstance::LobbyWidget offset is not 480");
	auto constexpr UTslGameInstance_ReplayKillEventItems_Offset = offsetof(UTslGameInstance, ReplayKillEventItems);
	static_assert(UTslGameInstance_ReplayKillEventItems_Offset == 0x530, "UTslGameInstance::ReplayKillEventItems offset is not 530");
	auto constexpr UTslGameInstance_OnEnumerateReplayKillEventsDone_Offset = offsetof(UTslGameInstance, OnEnumerateReplayKillEventsDone);
	static_assert(UTslGameInstance_OnEnumerateReplayKillEventsDone_Offset == 0x540, "UTslGameInstance::OnEnumerateReplayKillEventsDone offset is not 540");
	auto constexpr UTslGameInstance_ReplayGroggyEventItems_Offset = offsetof(UTslGameInstance, ReplayGroggyEventItems);
	static_assert(UTslGameInstance_ReplayGroggyEventItems_Offset == 0x5f0, "UTslGameInstance::ReplayGroggyEventItems offset is not 5f0");
	auto constexpr UTslGameInstance_OnEnumerateReplayGroggyEventsDone_Offset = offsetof(UTslGameInstance, OnEnumerateReplayGroggyEventsDone);
	static_assert(UTslGameInstance_OnEnumerateReplayGroggyEventsDone_Offset == 0x600, "UTslGameInstance::OnEnumerateReplayGroggyEventsDone offset is not 600");
	auto constexpr UTslGameInstance_ReplayItemList_Offset = offsetof(UTslGameInstance, ReplayItemList);
	static_assert(UTslGameInstance_ReplayItemList_Offset == 0x620, "UTslGameInstance::ReplayItemList offset is not 620");
	auto constexpr UTslGameInstance_OnGetReplayListDone_Offset = offsetof(UTslGameInstance, OnGetReplayListDone);
	static_assert(UTslGameInstance_OnGetReplayListDone_Offset == 0x668, "UTslGameInstance::OnGetReplayListDone offset is not 668");
	auto constexpr UTslGameInstance_OnGotoTimelineDone_Offset = offsetof(UTslGameInstance, OnGotoTimelineDone);
	static_assert(UTslGameInstance_OnGotoTimelineDone_Offset == 0x678, "UTslGameInstance::OnGotoTimelineDone offset is not 678");
	auto constexpr UTslGameInstance_OnRecordStarted_Offset = offsetof(UTslGameInstance, OnRecordStarted);
	static_assert(UTslGameInstance_OnRecordStarted_Offset == 0x688, "UTslGameInstance::OnRecordStarted offset is not 688");
	auto constexpr UTslGameInstance_OnReplayProblem_Offset = offsetof(UTslGameInstance, OnReplayProblem);
	static_assert(UTslGameInstance_OnReplayProblem_Offset == 0x698, "UTslGameInstance::OnReplayProblem offset is not 698");
	auto constexpr UTslGameInstance_OnDownloadZippedReplayProgressDelegate_Offset = offsetof(UTslGameInstance, OnDownloadZippedReplayProgressDelegate);
	static_assert(UTslGameInstance_OnDownloadZippedReplayProgressDelegate_Offset == 0x6a8, "UTslGameInstance::OnDownloadZippedReplayProgressDelegate offset is not 6a8");
	auto constexpr UTslGameInstance_OnDownloadZippedReplayCompleteDelegate_Offset = offsetof(UTslGameInstance, OnDownloadZippedReplayCompleteDelegate);
	static_assert(UTslGameInstance_OnDownloadZippedReplayCompleteDelegate_Offset == 0x6b8, "UTslGameInstance::OnDownloadZippedReplayCompleteDelegate offset is not 6b8");
	auto constexpr UTslGameInstance_MaxReplaysForNullStreamer_Offset = offsetof(UTslGameInstance, MaxReplaysForNullStreamer);
	static_assert(UTslGameInstance_MaxReplaysForNullStreamer_Offset == 0x6f0, "UTslGameInstance::MaxReplaysForNullStreamer offset is not 6f0");
	auto constexpr UTslGameInstance_NumReplaysForNullStreamer_Offset = offsetof(UTslGameInstance, NumReplaysForNullStreamer);
	static_assert(UTslGameInstance_NumReplaysForNullStreamer_Offset == 0x6f4, "UTslGameInstance::NumReplaysForNullStreamer offset is not 6f4");
	auto constexpr UTslGameInstance_NumReplaysToKeepForNullStreamer_Offset = offsetof(UTslGameInstance, NumReplaysToKeepForNullStreamer);
	static_assert(UTslGameInstance_NumReplaysToKeepForNullStreamer_Offset == 0x6f8, "UTslGameInstance::NumReplaysToKeepForNullStreamer offset is not 6f8");
	auto constexpr UTslGameInstance_OnKeepAndDeleteOldestReplaysDoneDelegate_Offset = offsetof(UTslGameInstance, OnKeepAndDeleteOldestReplaysDoneDelegate);
	static_assert(UTslGameInstance_OnKeepAndDeleteOldestReplaysDoneDelegate_Offset == 0x700, "UTslGameInstance::OnKeepAndDeleteOldestReplaysDoneDelegate offset is not 700");
	auto constexpr UTslGameInstance_GameEventObserver_Offset = offsetof(UTslGameInstance, GameEventObserver);
	static_assert(UTslGameInstance_GameEventObserver_Offset == 0x720, "UTslGameInstance::GameEventObserver offset is not 720");
	auto constexpr UTslGameInstance_ReplaySummaryForPlayback_Offset = offsetof(UTslGameInstance, ReplaySummaryForPlayback);
	static_assert(UTslGameInstance_ReplaySummaryForPlayback_Offset == 0x7e0, "UTslGameInstance::ReplaySummaryForPlayback offset is not 7e0");
	auto constexpr UTslGameInstance_OnGetReplaySummaryDone_Offset = offsetof(UTslGameInstance, OnGetReplaySummaryDone);
	static_assert(UTslGameInstance_OnGetReplaySummaryDone_Offset == 0x870, "UTslGameInstance::OnGetReplaySummaryDone offset is not 870");
	auto constexpr UTslGameInstance_boolField880_Offset = offsetof(UTslGameInstance, boolField880);
	static_assert(UTslGameInstance_boolField880_Offset == 0x880, "UTslGameInstance::boolField880 offset is not 880");
	auto constexpr UTslGameInstance_CachedDemoPlayerState_Offset = offsetof(UTslGameInstance, CachedDemoPlayerState);
	static_assert(UTslGameInstance_CachedDemoPlayerState_Offset == 0x888, "UTslGameInstance::CachedDemoPlayerState offset is not 888");
	auto constexpr UTslGameInstance_HighlightSession_Offset = offsetof(UTslGameInstance, HighlightSession);
	static_assert(UTslGameInstance_HighlightSession_Offset == 0x9d8, "UTslGameInstance::HighlightSession offset is not 9d8");
	auto constexpr UTslGameInstance_KakaoSessionClientProcessChecker_Offset = offsetof(UTslGameInstance, KakaoSessionClientProcessChecker);
	static_assert(UTslGameInstance_KakaoSessionClientProcessChecker_Offset == 0xae8, "UTslGameInstance::KakaoSessionClientProcessChecker offset is not ae8");
	auto constexpr UTslGameInstance_UnderFpsCountStatstics_Offset = offsetof(UTslGameInstance, UnderFpsCountStatstics);
	static_assert(UTslGameInstance_UnderFpsCountStatstics_Offset == 0xaf0, "UTslGameInstance::UnderFpsCountStatstics offset is not af0");
	auto constexpr UTslGameInstance_TeamInfoMap_Offset = offsetof(UTslGameInstance, TeamInfoMap);
	static_assert(UTslGameInstance_TeamInfoMap_Offset == 0xb20, "UTslGameInstance::TeamInfoMap offset is not b20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
