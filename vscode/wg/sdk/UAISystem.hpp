#pragma once
#include "UAISystemBase.hpp"
#include "FStringClassReference.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISystem // Size: 0x118
	: public UAISystemBase // Size: 0x50
{
private:
	typedef UAISystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(539); // id32("Class AIModule.AISystem")
		return ptr;
	}
	FStringClassReference PerceptionSystemClassName; /* Ofs: 0x50 Size: 0x10 - StructProperty AIModule.AISystem.PerceptionSystemClassName */
	FStringClassReference HotSpotManagerClassName; /* Ofs: 0x60 Size: 0x10 - StructProperty AIModule.AISystem.HotSpotManagerClassName */
	float AcceptanceRadius; /* Ofs: 0x70 Size: 0x4 - FloatProperty AIModule.AISystem.AcceptanceRadius */
	float PathfollowingRegularPathPointAcceptanceRadius; /* Ofs: 0x74 Size: 0x4 - FloatProperty AIModule.AISystem.PathfollowingRegularPathPointAcceptanceRadius */
	float PathfollowingNavLinkAcceptanceRadius; /* Ofs: 0x78 Size: 0x4 - FloatProperty AIModule.AISystem.PathfollowingNavLinkAcceptanceRadius */
	uint8_t boolField7C;
	uint8_t boolField7D;
	uint8_t boolField7E;
	uint8_t boolField7F;
	uint8_t boolField80;
	uint8_t boolField81;
	TEnumAsByte<enum ECollisionChannel> DefaultSightCollisionChannel; /* Ofs: 0x82 Size: 0x1 - ByteProperty AIModule.AISystem.DefaultSightCollisionChannel */
	uint8_t UnknownData83[0x5];
	ExternalPtr<struct UBehaviorTreeManager> BehaviorTreeManager; /* Ofs: 0x88 Size: 0x8 - ObjectProperty AIModule.AISystem.BehaviorTreeManager */
	ExternalPtr<struct UEnvQueryManager> EnvironmentQueryManager; /* Ofs: 0x90 Size: 0x8 - ObjectProperty AIModule.AISystem.EnvironmentQueryManager */
	ExternalPtr<struct UAIPerceptionSystem> PerceptionSystem; /* Ofs: 0x98 Size: 0x8 - ObjectProperty AIModule.AISystem.PerceptionSystem */
	TArray<ExternalPtr<struct UAIAsyncTaskBlueprintProxy>> AllProxyObjects; /* Ofs: 0xA0 Size: 0x10 - ArrayProperty AIModule.AISystem.AllProxyObjects */
	ExternalPtr<struct UAIHotSpotManager> HotSpotManager; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty AIModule.AISystem.HotSpotManager */
	ExternalPtr<struct UNavLocalGridManager> NavLocalGrids; /* Ofs: 0xB8 Size: 0x8 - ObjectProperty AIModule.AISystem.NavLocalGrids */
	uint8_t UnknownDataC0[0x58];


	inline bool SetPerceptionSystemClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x50, value); }
	inline bool SetHotSpotManagerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x60, value); }
	inline bool SetAcceptanceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetPathfollowingRegularPathPointAcceptanceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetPathfollowingNavLinkAcceptanceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool bFinishMoveOnGoalOverlap()
	{
		return boolField7C& 0x1;
	}
	inline bool SetbFinishMoveOnGoalOverlap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAcceptPartialPaths()
	{
		return boolField7D& 0x1;
	}
	inline bool SetbAcceptPartialPaths(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowStrafing()
	{
		return boolField7E& 0x1;
	}
	inline bool SetbAllowStrafing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableBTAITasks()
	{
		return boolField7F& 0x1;
	}
	inline bool SetbEnableBTAITasks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAllowControllersAsEQSQuerier()
	{
		return boolField80& 0x1;
	}
	inline bool SetbAllowControllersAsEQSQuerier(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableDebuggerPlugin()
	{
		return boolField81& 0x1;
	}
	inline bool SetbEnableDebuggerPlugin(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x81, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultSightCollisionChannel(t_structHelper inst, TEnumAsByte<enum ECollisionChannel> value) { inst.WriteOffset(0x82, value); }
	inline bool SetBehaviorTreeManager(t_structHelper inst, ExternalPtr<struct UBehaviorTreeManager> value) { inst.WriteOffset(0x88, value); }
	inline bool SetEnvironmentQueryManager(t_structHelper inst, ExternalPtr<struct UEnvQueryManager> value) { inst.WriteOffset(0x90, value); }
	inline bool SetPerceptionSystem(t_structHelper inst, ExternalPtr<struct UAIPerceptionSystem> value) { inst.WriteOffset(0x98, value); }
	inline bool SetAllProxyObjects(t_structHelper inst, TArray<ExternalPtr<struct UAIAsyncTaskBlueprintProxy>> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetHotSpotManager(t_structHelper inst, ExternalPtr<struct UAIHotSpotManager> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetNavLocalGrids(t_structHelper inst, ExternalPtr<struct UNavLocalGridManager> value) { inst.WriteOffset(0xB8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISystem = sizeof(UAISystem); // 280
    static_assert(sizeof(UAISystem) == 0x118, "Size of UAISystem is not correct.");
	auto constexpr UAISystem_PerceptionSystemClassName_Offset = offsetof(UAISystem, PerceptionSystemClassName);
	static_assert(UAISystem_PerceptionSystemClassName_Offset == 0x50, "UAISystem::PerceptionSystemClassName offset is not 50");
	auto constexpr UAISystem_HotSpotManagerClassName_Offset = offsetof(UAISystem, HotSpotManagerClassName);
	static_assert(UAISystem_HotSpotManagerClassName_Offset == 0x60, "UAISystem::HotSpotManagerClassName offset is not 60");
	auto constexpr UAISystem_AcceptanceRadius_Offset = offsetof(UAISystem, AcceptanceRadius);
	static_assert(UAISystem_AcceptanceRadius_Offset == 0x70, "UAISystem::AcceptanceRadius offset is not 70");
	auto constexpr UAISystem_PathfollowingRegularPathPointAcceptanceRadius_Offset = offsetof(UAISystem, PathfollowingRegularPathPointAcceptanceRadius);
	static_assert(UAISystem_PathfollowingRegularPathPointAcceptanceRadius_Offset == 0x74, "UAISystem::PathfollowingRegularPathPointAcceptanceRadius offset is not 74");
	auto constexpr UAISystem_PathfollowingNavLinkAcceptanceRadius_Offset = offsetof(UAISystem, PathfollowingNavLinkAcceptanceRadius);
	static_assert(UAISystem_PathfollowingNavLinkAcceptanceRadius_Offset == 0x78, "UAISystem::PathfollowingNavLinkAcceptanceRadius offset is not 78");
	auto constexpr UAISystem_boolField7C_Offset = offsetof(UAISystem, boolField7C);
	static_assert(UAISystem_boolField7C_Offset == 0x7c, "UAISystem::boolField7C offset is not 7c");
	auto constexpr UAISystem_boolField7D_Offset = offsetof(UAISystem, boolField7D);
	static_assert(UAISystem_boolField7D_Offset == 0x7d, "UAISystem::boolField7D offset is not 7d");
	auto constexpr UAISystem_boolField7E_Offset = offsetof(UAISystem, boolField7E);
	static_assert(UAISystem_boolField7E_Offset == 0x7e, "UAISystem::boolField7E offset is not 7e");
	auto constexpr UAISystem_boolField7F_Offset = offsetof(UAISystem, boolField7F);
	static_assert(UAISystem_boolField7F_Offset == 0x7f, "UAISystem::boolField7F offset is not 7f");
	auto constexpr UAISystem_boolField80_Offset = offsetof(UAISystem, boolField80);
	static_assert(UAISystem_boolField80_Offset == 0x80, "UAISystem::boolField80 offset is not 80");
	auto constexpr UAISystem_boolField81_Offset = offsetof(UAISystem, boolField81);
	static_assert(UAISystem_boolField81_Offset == 0x81, "UAISystem::boolField81 offset is not 81");
	auto constexpr UAISystem_DefaultSightCollisionChannel_Offset = offsetof(UAISystem, DefaultSightCollisionChannel);
	static_assert(UAISystem_DefaultSightCollisionChannel_Offset == 0x82, "UAISystem::DefaultSightCollisionChannel offset is not 82");
	auto constexpr UAISystem_BehaviorTreeManager_Offset = offsetof(UAISystem, BehaviorTreeManager);
	static_assert(UAISystem_BehaviorTreeManager_Offset == 0x88, "UAISystem::BehaviorTreeManager offset is not 88");
	auto constexpr UAISystem_EnvironmentQueryManager_Offset = offsetof(UAISystem, EnvironmentQueryManager);
	static_assert(UAISystem_EnvironmentQueryManager_Offset == 0x90, "UAISystem::EnvironmentQueryManager offset is not 90");
	auto constexpr UAISystem_PerceptionSystem_Offset = offsetof(UAISystem, PerceptionSystem);
	static_assert(UAISystem_PerceptionSystem_Offset == 0x98, "UAISystem::PerceptionSystem offset is not 98");
	auto constexpr UAISystem_AllProxyObjects_Offset = offsetof(UAISystem, AllProxyObjects);
	static_assert(UAISystem_AllProxyObjects_Offset == 0xa0, "UAISystem::AllProxyObjects offset is not a0");
	auto constexpr UAISystem_HotSpotManager_Offset = offsetof(UAISystem, HotSpotManager);
	static_assert(UAISystem_HotSpotManager_Offset == 0xb0, "UAISystem::HotSpotManager offset is not b0");
	auto constexpr UAISystem_NavLocalGrids_Offset = offsetof(UAISystem, NavLocalGrids);
	static_assert(UAISystem_NavLocalGrids_Offset == 0xb8, "UAISystem::NavLocalGrids offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
