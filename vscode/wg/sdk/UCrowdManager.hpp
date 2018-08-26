#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCrowdManager // Size: 0xF0
	: public UObject // Size: 0x30
{
private:
	typedef UCrowdManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(613); // id32("Class AIModule.CrowdManager")
		return ptr;
	}
	ExternalPtr<struct UNavigationData> MyNavData; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AIModule.CrowdManager.MyNavData */
	TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; /* Ofs: 0x38 Size: 0x10 - ArrayProperty AIModule.CrowdManager.AvoidanceConfig */
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; /* Ofs: 0x48 Size: 0x10 - ArrayProperty AIModule.CrowdManager.SamplingPatterns */
	int32_t MaxAgents; /* Ofs: 0x58 Size: 0x4 - IntProperty AIModule.CrowdManager.MaxAgents */
	float MaxAgentRadius; /* Ofs: 0x5C Size: 0x4 - FloatProperty AIModule.CrowdManager.MaxAgentRadius */
	int32_t MaxAvoidedAgents; /* Ofs: 0x60 Size: 0x4 - IntProperty AIModule.CrowdManager.MaxAvoidedAgents */
	int32_t MaxAvoidedWalls; /* Ofs: 0x64 Size: 0x4 - IntProperty AIModule.CrowdManager.MaxAvoidedWalls */
	float NavmeshCheckInterval; /* Ofs: 0x68 Size: 0x4 - FloatProperty AIModule.CrowdManager.NavmeshCheckInterval */
	float PathOptimizationInterval; /* Ofs: 0x6C Size: 0x4 - FloatProperty AIModule.CrowdManager.PathOptimizationInterval */
	float SeparationDirClamp; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.CrowdManager.SeparationDirClamp */
	uint8_t boolField74;
	uint8_t UnknownData75[0x7B];


	inline bool SetMyNavData(t_structHelper inst, ExternalPtr<struct UNavigationData> value) { inst.WriteOffset(0x30, value); }
	inline bool SetAvoidanceConfig(t_structHelper inst, TArray<struct FCrowdAvoidanceConfig> value) { inst.WriteOffset(0x38, value); }
	inline bool SetSamplingPatterns(t_structHelper inst, TArray<struct FCrowdAvoidanceSamplingPattern> value) { inst.WriteOffset(0x48, value); }
	inline bool SetMaxAgents(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaxAgentRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetMaxAvoidedAgents(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetMaxAvoidedWalls(t_structHelper inst, int32_t value) { inst.WriteOffset(0x64, value); }
	inline bool SetNavmeshCheckInterval(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetPathOptimizationInterval(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetSeparationDirClamp(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool bResolveCollisions()
	{
		return boolField74& 0x10;
	}
	inline bool SetbResolveCollisions(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x74, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCrowdManager = sizeof(UCrowdManager); // 240
    static_assert(sizeof(UCrowdManager) == 0xF0, "Size of UCrowdManager is not correct.");
	auto constexpr UCrowdManager_MyNavData_Offset = offsetof(UCrowdManager, MyNavData);
	static_assert(UCrowdManager_MyNavData_Offset == 0x30, "UCrowdManager::MyNavData offset is not 30");
	auto constexpr UCrowdManager_AvoidanceConfig_Offset = offsetof(UCrowdManager, AvoidanceConfig);
	static_assert(UCrowdManager_AvoidanceConfig_Offset == 0x38, "UCrowdManager::AvoidanceConfig offset is not 38");
	auto constexpr UCrowdManager_SamplingPatterns_Offset = offsetof(UCrowdManager, SamplingPatterns);
	static_assert(UCrowdManager_SamplingPatterns_Offset == 0x48, "UCrowdManager::SamplingPatterns offset is not 48");
	auto constexpr UCrowdManager_MaxAgents_Offset = offsetof(UCrowdManager, MaxAgents);
	static_assert(UCrowdManager_MaxAgents_Offset == 0x58, "UCrowdManager::MaxAgents offset is not 58");
	auto constexpr UCrowdManager_MaxAgentRadius_Offset = offsetof(UCrowdManager, MaxAgentRadius);
	static_assert(UCrowdManager_MaxAgentRadius_Offset == 0x5c, "UCrowdManager::MaxAgentRadius offset is not 5c");
	auto constexpr UCrowdManager_MaxAvoidedAgents_Offset = offsetof(UCrowdManager, MaxAvoidedAgents);
	static_assert(UCrowdManager_MaxAvoidedAgents_Offset == 0x60, "UCrowdManager::MaxAvoidedAgents offset is not 60");
	auto constexpr UCrowdManager_MaxAvoidedWalls_Offset = offsetof(UCrowdManager, MaxAvoidedWalls);
	static_assert(UCrowdManager_MaxAvoidedWalls_Offset == 0x64, "UCrowdManager::MaxAvoidedWalls offset is not 64");
	auto constexpr UCrowdManager_NavmeshCheckInterval_Offset = offsetof(UCrowdManager, NavmeshCheckInterval);
	static_assert(UCrowdManager_NavmeshCheckInterval_Offset == 0x68, "UCrowdManager::NavmeshCheckInterval offset is not 68");
	auto constexpr UCrowdManager_PathOptimizationInterval_Offset = offsetof(UCrowdManager, PathOptimizationInterval);
	static_assert(UCrowdManager_PathOptimizationInterval_Offset == 0x6c, "UCrowdManager::PathOptimizationInterval offset is not 6c");
	auto constexpr UCrowdManager_SeparationDirClamp_Offset = offsetof(UCrowdManager, SeparationDirClamp);
	static_assert(UCrowdManager_SeparationDirClamp_Offset == 0x70, "UCrowdManager::SeparationDirClamp offset is not 70");
	auto constexpr UCrowdManager_boolField74_Offset = offsetof(UCrowdManager, boolField74);
	static_assert(UCrowdManager_boolField74_Offset == 0x74, "UCrowdManager::boolField74 offset is not 74");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
