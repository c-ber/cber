#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UStreamingSettings // Size: 0x78
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UStreamingSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(727); // id32("Class Engine.StreamingSettings")
		return ptr;
	}
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	float TimeLimitExceededMultiplier; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.StreamingSettings.TimeLimitExceededMultiplier */
	float TimeLimitExceededMinTime; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.StreamingSettings.TimeLimitExceededMinTime */
	int32_t MinBulkDataSizeForAsyncLoading; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.StreamingSettings.MinBulkDataSizeForAsyncLoading */
	float AsyncIOBandwidthLimit; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.StreamingSettings.AsyncIOBandwidthLimit */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	float AsyncLoadingTimeLimit; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.StreamingSettings.AsyncLoadingTimeLimit */
	float PriorityAsyncLoadingExtraTime; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.StreamingSettings.PriorityAsyncLoadingExtraTime */
	float LevelStreamingActorsUpdateTimeLimit; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.StreamingSettings.LevelStreamingActorsUpdateTimeLimit */
	int32_t LevelStreamingComponentsRegistrationGranularity; /* Ofs: 0x64 Size: 0x4 - IntProperty Engine.StreamingSettings.LevelStreamingComponentsRegistrationGranularity */
	float LevelStreamingUnregisterComponentsTimeLimit; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.StreamingSettings.LevelStreamingUnregisterComponentsTimeLimit */
	int32_t LevelStreamingComponentsUnregistrationGranularity; /* Ofs: 0x6C Size: 0x4 - IntProperty Engine.StreamingSettings.LevelStreamingComponentsUnregistrationGranularity */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool AsyncLoadingThreadEnabled()
	{
		return boolField40& 0x1;
	}
	inline bool SetAsyncLoadingThreadEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool WarnIfTimeLimitExceeded()
	{
		return boolField40& 0x2;
	}
	inline bool SetWarnIfTimeLimitExceeded(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetTimeLimitExceededMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetTimeLimitExceededMinTime(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetMinBulkDataSizeForAsyncLoading(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool SetAsyncIOBandwidthLimit(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool UseBackgroundLevelStreaming()
	{
		return boolField54& 0x1;
	}
	inline bool SetUseBackgroundLevelStreaming(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AsyncLoadingUseFullTimeLimit()
	{
		return boolField54& 0x2;
	}
	inline bool SetAsyncLoadingUseFullTimeLimit(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool LoadAllStreamingLevels()
	{
		return boolField54& 0x4;
	}
	inline bool SetLoadAllStreamingLevels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetAsyncLoadingTimeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetPriorityAsyncLoadingExtraTime(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetLevelStreamingActorsUpdateTimeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetLevelStreamingComponentsRegistrationGranularity(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetLevelStreamingUnregisterComponentsTimeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetLevelStreamingComponentsUnregistrationGranularity(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
	inline bool EventDrivenLoaderEnabled()
	{
		return boolField70& 0x1;
	}
	inline bool SetEventDrivenLoaderEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUStreamingSettings = sizeof(UStreamingSettings); // 120
    static_assert(sizeof(UStreamingSettings) == 0x78, "Size of UStreamingSettings is not correct.");
	auto constexpr UStreamingSettings_boolField40_Offset = offsetof(UStreamingSettings, boolField40);
	static_assert(UStreamingSettings_boolField40_Offset == 0x40, "UStreamingSettings::boolField40 offset is not 40");
	auto constexpr UStreamingSettings_TimeLimitExceededMultiplier_Offset = offsetof(UStreamingSettings, TimeLimitExceededMultiplier);
	static_assert(UStreamingSettings_TimeLimitExceededMultiplier_Offset == 0x44, "UStreamingSettings::TimeLimitExceededMultiplier offset is not 44");
	auto constexpr UStreamingSettings_TimeLimitExceededMinTime_Offset = offsetof(UStreamingSettings, TimeLimitExceededMinTime);
	static_assert(UStreamingSettings_TimeLimitExceededMinTime_Offset == 0x48, "UStreamingSettings::TimeLimitExceededMinTime offset is not 48");
	auto constexpr UStreamingSettings_MinBulkDataSizeForAsyncLoading_Offset = offsetof(UStreamingSettings, MinBulkDataSizeForAsyncLoading);
	static_assert(UStreamingSettings_MinBulkDataSizeForAsyncLoading_Offset == 0x4c, "UStreamingSettings::MinBulkDataSizeForAsyncLoading offset is not 4c");
	auto constexpr UStreamingSettings_AsyncIOBandwidthLimit_Offset = offsetof(UStreamingSettings, AsyncIOBandwidthLimit);
	static_assert(UStreamingSettings_AsyncIOBandwidthLimit_Offset == 0x50, "UStreamingSettings::AsyncIOBandwidthLimit offset is not 50");
	auto constexpr UStreamingSettings_boolField54_Offset = offsetof(UStreamingSettings, boolField54);
	static_assert(UStreamingSettings_boolField54_Offset == 0x54, "UStreamingSettings::boolField54 offset is not 54");
	auto constexpr UStreamingSettings_AsyncLoadingTimeLimit_Offset = offsetof(UStreamingSettings, AsyncLoadingTimeLimit);
	static_assert(UStreamingSettings_AsyncLoadingTimeLimit_Offset == 0x58, "UStreamingSettings::AsyncLoadingTimeLimit offset is not 58");
	auto constexpr UStreamingSettings_PriorityAsyncLoadingExtraTime_Offset = offsetof(UStreamingSettings, PriorityAsyncLoadingExtraTime);
	static_assert(UStreamingSettings_PriorityAsyncLoadingExtraTime_Offset == 0x5c, "UStreamingSettings::PriorityAsyncLoadingExtraTime offset is not 5c");
	auto constexpr UStreamingSettings_LevelStreamingActorsUpdateTimeLimit_Offset = offsetof(UStreamingSettings, LevelStreamingActorsUpdateTimeLimit);
	static_assert(UStreamingSettings_LevelStreamingActorsUpdateTimeLimit_Offset == 0x60, "UStreamingSettings::LevelStreamingActorsUpdateTimeLimit offset is not 60");
	auto constexpr UStreamingSettings_LevelStreamingComponentsRegistrationGranularity_Offset = offsetof(UStreamingSettings, LevelStreamingComponentsRegistrationGranularity);
	static_assert(UStreamingSettings_LevelStreamingComponentsRegistrationGranularity_Offset == 0x64, "UStreamingSettings::LevelStreamingComponentsRegistrationGranularity offset is not 64");
	auto constexpr UStreamingSettings_LevelStreamingUnregisterComponentsTimeLimit_Offset = offsetof(UStreamingSettings, LevelStreamingUnregisterComponentsTimeLimit);
	static_assert(UStreamingSettings_LevelStreamingUnregisterComponentsTimeLimit_Offset == 0x68, "UStreamingSettings::LevelStreamingUnregisterComponentsTimeLimit offset is not 68");
	auto constexpr UStreamingSettings_LevelStreamingComponentsUnregistrationGranularity_Offset = offsetof(UStreamingSettings, LevelStreamingComponentsUnregistrationGranularity);
	static_assert(UStreamingSettings_LevelStreamingComponentsUnregistrationGranularity_Offset == 0x6c, "UStreamingSettings::LevelStreamingComponentsUnregistrationGranularity offset is not 6c");
	auto constexpr UStreamingSettings_boolField70_Offset = offsetof(UStreamingSettings, boolField70);
	static_assert(UStreamingSettings_boolField70_Offset == 0x70, "UStreamingSettings::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
