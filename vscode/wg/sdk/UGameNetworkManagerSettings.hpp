#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameNetworkManagerSettings // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UGameNetworkManagerSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1275); // id32("Class EngineSettings.GameNetworkManagerSettings")
		return ptr;
	}
	int32_t MinDynamicBandwidth; /* Ofs: 0x30 Size: 0x4 - IntProperty EngineSettings.GameNetworkManagerSettings.MinDynamicBandwidth */
	int32_t MaxDynamicBandwidth; /* Ofs: 0x34 Size: 0x4 - IntProperty EngineSettings.GameNetworkManagerSettings.MaxDynamicBandwidth */
	int32_t TotalNetBandwidth; /* Ofs: 0x38 Size: 0x4 - IntProperty EngineSettings.GameNetworkManagerSettings.TotalNetBandwidth */
	int32_t BadPingThreshold; /* Ofs: 0x3C Size: 0x4 - IntProperty EngineSettings.GameNetworkManagerSettings.BadPingThreshold */
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	float StandbyRxCheatTime; /* Ofs: 0x44 Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.StandbyRxCheatTime */
	float StandbyTxCheatTime; /* Ofs: 0x48 Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.StandbyTxCheatTime */
	float PercentMissingForRxStandby; /* Ofs: 0x4C Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.PercentMissingForRxStandby */
	float PercentMissingForTxStandby; /* Ofs: 0x50 Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.PercentMissingForTxStandby */
	float PercentForBadPing; /* Ofs: 0x54 Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.PercentForBadPing */
	float JoinInProgressStandbyWaitTime; /* Ofs: 0x58 Size: 0x4 - FloatProperty EngineSettings.GameNetworkManagerSettings.JoinInProgressStandbyWaitTime */
	uint8_t UnknownData5C[0x4];


	inline bool SetMinDynamicBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x30, value); }
	inline bool SetMaxDynamicBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
	inline bool SetTotalNetBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetBadPingThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool bIsStandbyCheckingEnabled()
	{
		return boolField40& 0x1;
	}
	inline bool SetbIsStandbyCheckingEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStandbyRxCheatTime(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetStandbyTxCheatTime(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetPercentMissingForRxStandby(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetPercentMissingForTxStandby(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetPercentForBadPing(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetJoinInProgressStandbyWaitTime(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameNetworkManagerSettings = sizeof(UGameNetworkManagerSettings); // 96
    static_assert(sizeof(UGameNetworkManagerSettings) == 0x60, "Size of UGameNetworkManagerSettings is not correct.");
	auto constexpr UGameNetworkManagerSettings_MinDynamicBandwidth_Offset = offsetof(UGameNetworkManagerSettings, MinDynamicBandwidth);
	static_assert(UGameNetworkManagerSettings_MinDynamicBandwidth_Offset == 0x30, "UGameNetworkManagerSettings::MinDynamicBandwidth offset is not 30");
	auto constexpr UGameNetworkManagerSettings_MaxDynamicBandwidth_Offset = offsetof(UGameNetworkManagerSettings, MaxDynamicBandwidth);
	static_assert(UGameNetworkManagerSettings_MaxDynamicBandwidth_Offset == 0x34, "UGameNetworkManagerSettings::MaxDynamicBandwidth offset is not 34");
	auto constexpr UGameNetworkManagerSettings_TotalNetBandwidth_Offset = offsetof(UGameNetworkManagerSettings, TotalNetBandwidth);
	static_assert(UGameNetworkManagerSettings_TotalNetBandwidth_Offset == 0x38, "UGameNetworkManagerSettings::TotalNetBandwidth offset is not 38");
	auto constexpr UGameNetworkManagerSettings_BadPingThreshold_Offset = offsetof(UGameNetworkManagerSettings, BadPingThreshold);
	static_assert(UGameNetworkManagerSettings_BadPingThreshold_Offset == 0x3c, "UGameNetworkManagerSettings::BadPingThreshold offset is not 3c");
	auto constexpr UGameNetworkManagerSettings_boolField40_Offset = offsetof(UGameNetworkManagerSettings, boolField40);
	static_assert(UGameNetworkManagerSettings_boolField40_Offset == 0x40, "UGameNetworkManagerSettings::boolField40 offset is not 40");
	auto constexpr UGameNetworkManagerSettings_StandbyRxCheatTime_Offset = offsetof(UGameNetworkManagerSettings, StandbyRxCheatTime);
	static_assert(UGameNetworkManagerSettings_StandbyRxCheatTime_Offset == 0x44, "UGameNetworkManagerSettings::StandbyRxCheatTime offset is not 44");
	auto constexpr UGameNetworkManagerSettings_StandbyTxCheatTime_Offset = offsetof(UGameNetworkManagerSettings, StandbyTxCheatTime);
	static_assert(UGameNetworkManagerSettings_StandbyTxCheatTime_Offset == 0x48, "UGameNetworkManagerSettings::StandbyTxCheatTime offset is not 48");
	auto constexpr UGameNetworkManagerSettings_PercentMissingForRxStandby_Offset = offsetof(UGameNetworkManagerSettings, PercentMissingForRxStandby);
	static_assert(UGameNetworkManagerSettings_PercentMissingForRxStandby_Offset == 0x4c, "UGameNetworkManagerSettings::PercentMissingForRxStandby offset is not 4c");
	auto constexpr UGameNetworkManagerSettings_PercentMissingForTxStandby_Offset = offsetof(UGameNetworkManagerSettings, PercentMissingForTxStandby);
	static_assert(UGameNetworkManagerSettings_PercentMissingForTxStandby_Offset == 0x50, "UGameNetworkManagerSettings::PercentMissingForTxStandby offset is not 50");
	auto constexpr UGameNetworkManagerSettings_PercentForBadPing_Offset = offsetof(UGameNetworkManagerSettings, PercentForBadPing);
	static_assert(UGameNetworkManagerSettings_PercentForBadPing_Offset == 0x54, "UGameNetworkManagerSettings::PercentForBadPing offset is not 54");
	auto constexpr UGameNetworkManagerSettings_JoinInProgressStandbyWaitTime_Offset = offsetof(UGameNetworkManagerSettings, JoinInProgressStandbyWaitTime);
	static_assert(UGameNetworkManagerSettings_JoinInProgressStandbyWaitTime_Offset == 0x58, "UGameNetworkManagerSettings::JoinInProgressStandbyWaitTime offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
