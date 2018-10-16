#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryManager // Size: 0x140
	: public UObject // Size: 0x30
{
private:
	typedef UEnvQueryManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(626); // id32("Class AIModule.EnvQueryManager")
		return ptr;
	}
	uint8_t UnknownData30[0x78];
	TArray<struct FEnvQueryInstanceCache> InstanceCache; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty AIModule.EnvQueryManager.InstanceCache */
	TArray<ExternalPtr<struct UEnvQueryContext>> LocalContexts; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty AIModule.EnvQueryManager.LocalContexts */
	TArray<ExternalPtr<struct UEnvQueryInstanceBlueprintWrapper>> GCShieldedWrappers; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty AIModule.EnvQueryManager.GCShieldedWrappers */
	uint8_t UnknownDataD8[0x54];
	float MaxAllowedTestingTime; /* Ofs: 0x12C Size: 0x4 - FloatProperty AIModule.EnvQueryManager.MaxAllowedTestingTime */
	uint8_t boolField130;
	uint8_t UnknownData131[0x3];
	int32_t QueryCountWarningThreshold; /* Ofs: 0x134 Size: 0x4 - IntProperty AIModule.EnvQueryManager.QueryCountWarningThreshold */
	double QueryCountWarningInterval; /* Ofs: 0x138 Size: 0x8 - DoubleProperty AIModule.EnvQueryManager.QueryCountWarningInterval */


	inline bool SetInstanceCache(t_structHelper inst, TArray<struct FEnvQueryInstanceCache> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetLocalContexts(t_structHelper inst, TArray<ExternalPtr<struct UEnvQueryContext>> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetGCShieldedWrappers(t_structHelper inst, TArray<ExternalPtr<struct UEnvQueryInstanceBlueprintWrapper>> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetMaxAllowedTestingTime(t_structHelper inst, float value) { inst.WriteOffset(0x12C, value); }
	inline bool bTestQueriesUsingBreadth()
	{
		return boolField130& 0x1;
	}
	inline bool SetbTestQueriesUsingBreadth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetQueryCountWarningThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x134, value); }
	inline bool SetQueryCountWarningInterval(t_structHelper inst, double value) { inst.WriteOffset(0x138, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryManager = sizeof(UEnvQueryManager); // 320
    static_assert(sizeof(UEnvQueryManager) == 0x140, "Size of UEnvQueryManager is not correct.");
	auto constexpr UEnvQueryManager_InstanceCache_Offset = offsetof(UEnvQueryManager, InstanceCache);
	static_assert(UEnvQueryManager_InstanceCache_Offset == 0xa8, "UEnvQueryManager::InstanceCache offset is not a8");
	auto constexpr UEnvQueryManager_LocalContexts_Offset = offsetof(UEnvQueryManager, LocalContexts);
	static_assert(UEnvQueryManager_LocalContexts_Offset == 0xb8, "UEnvQueryManager::LocalContexts offset is not b8");
	auto constexpr UEnvQueryManager_GCShieldedWrappers_Offset = offsetof(UEnvQueryManager, GCShieldedWrappers);
	static_assert(UEnvQueryManager_GCShieldedWrappers_Offset == 0xc8, "UEnvQueryManager::GCShieldedWrappers offset is not c8");
	auto constexpr UEnvQueryManager_MaxAllowedTestingTime_Offset = offsetof(UEnvQueryManager, MaxAllowedTestingTime);
	static_assert(UEnvQueryManager_MaxAllowedTestingTime_Offset == 0x12c, "UEnvQueryManager::MaxAllowedTestingTime offset is not 12c");
	auto constexpr UEnvQueryManager_boolField130_Offset = offsetof(UEnvQueryManager, boolField130);
	static_assert(UEnvQueryManager_boolField130_Offset == 0x130, "UEnvQueryManager::boolField130 offset is not 130");
	auto constexpr UEnvQueryManager_QueryCountWarningThreshold_Offset = offsetof(UEnvQueryManager, QueryCountWarningThreshold);
	static_assert(UEnvQueryManager_QueryCountWarningThreshold_Offset == 0x134, "UEnvQueryManager::QueryCountWarningThreshold offset is not 134");
	auto constexpr UEnvQueryManager_QueryCountWarningInterval_Offset = offsetof(UEnvQueryManager, QueryCountWarningInterval);
	static_assert(UEnvQueryManager_QueryCountWarningInterval_Offset == 0x138, "UEnvQueryManager::QueryCountWarningInterval offset is not 138");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
