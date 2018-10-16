#pragma once
#include "UController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIController // Size: 0x520
	: public UController // Size: 0x490
{
private:
	typedef UAIController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1331); // id32("Class AIModule.AIController")
		return ptr;
	}
	uint8_t UnknownData490[0x30];
	uint8_t boolField4C0;
	uint8_t UnknownData4C1[0x7];
	ExternalPtr<struct UPathFollowingComponent> PathFollowingComponent; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty AIModule.AIController.PathFollowingComponent */
	ExternalPtr<struct UBrainComponent> BrainComponent; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty AIModule.AIController.BrainComponent */
	ExternalPtr<struct UAIPerceptionComponent> PerceptionComponent; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty AIModule.AIController.PerceptionComponent */
	ExternalPtr<struct UPawnActionsComponent> ActionsComp; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty AIModule.AIController.ActionsComp */
	ExternalPtr<struct UBlackboardComponent> Blackboard; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty AIModule.AIController.Blackboard */
	ExternalPtr<struct UGameplayTasksComponent> CachedGameplayTasksComponent; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty AIModule.AIController.CachedGameplayTasksComponent */
	ExternalPtr<struct UClass> DefaultNavigationFilterClass; /* Ofs: 0x4F8 Size: 0x8 - ClassProperty AIModule.AIController.DefaultNavigationFilterClass */
	FScriptMulticastDelegate ReceiveMoveCompleted; /* Ofs: 0x500 Size: 0x10 - MulticastDelegateProperty AIModule.AIController.ReceiveMoveCompleted */
	uint8_t UnknownData510[0x10];


	inline bool bStopAILogicOnUnposses()
	{
		return boolField4C0& 0x1;
	}
	inline bool SetbStopAILogicOnUnposses(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLOSflag()
	{
		return boolField4C0& 0x2;
	}
	inline bool SetbLOSflag(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSkipExtraLOSChecks()
	{
		return boolField4C0& 0x4;
	}
	inline bool SetbSkipExtraLOSChecks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAllowStrafe()
	{
		return boolField4C0& 0x8;
	}
	inline bool SetbAllowStrafe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bWantsPlayerState()
	{
		return boolField4C0& 0x10;
	}
	inline bool SetbWantsPlayerState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSetControlRotationFromPawnOrientation()
	{
		return boolField4C0& 0x20;
	}
	inline bool SetbSetControlRotationFromPawnOrientation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C0, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetPathFollowingComponent(t_structHelper inst, ExternalPtr<struct UPathFollowingComponent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetBrainComponent(t_structHelper inst, ExternalPtr<struct UBrainComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetPerceptionComponent(t_structHelper inst, ExternalPtr<struct UAIPerceptionComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetActionsComp(t_structHelper inst, ExternalPtr<struct UPawnActionsComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetBlackboard(t_structHelper inst, ExternalPtr<struct UBlackboardComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetCachedGameplayTasksComponent(t_structHelper inst, ExternalPtr<struct UGameplayTasksComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetDefaultNavigationFilterClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetReceiveMoveCompleted(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x500, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIController = sizeof(UAIController); // 1312
    static_assert(sizeof(UAIController) == 0x520, "Size of UAIController is not correct.");
	auto constexpr UAIController_boolField4C0_Offset = offsetof(UAIController, boolField4C0);
	static_assert(UAIController_boolField4C0_Offset == 0x4c0, "UAIController::boolField4C0 offset is not 4c0");
	auto constexpr UAIController_PathFollowingComponent_Offset = offsetof(UAIController, PathFollowingComponent);
	static_assert(UAIController_PathFollowingComponent_Offset == 0x4c8, "UAIController::PathFollowingComponent offset is not 4c8");
	auto constexpr UAIController_BrainComponent_Offset = offsetof(UAIController, BrainComponent);
	static_assert(UAIController_BrainComponent_Offset == 0x4d0, "UAIController::BrainComponent offset is not 4d0");
	auto constexpr UAIController_PerceptionComponent_Offset = offsetof(UAIController, PerceptionComponent);
	static_assert(UAIController_PerceptionComponent_Offset == 0x4d8, "UAIController::PerceptionComponent offset is not 4d8");
	auto constexpr UAIController_ActionsComp_Offset = offsetof(UAIController, ActionsComp);
	static_assert(UAIController_ActionsComp_Offset == 0x4e0, "UAIController::ActionsComp offset is not 4e0");
	auto constexpr UAIController_Blackboard_Offset = offsetof(UAIController, Blackboard);
	static_assert(UAIController_Blackboard_Offset == 0x4e8, "UAIController::Blackboard offset is not 4e8");
	auto constexpr UAIController_CachedGameplayTasksComponent_Offset = offsetof(UAIController, CachedGameplayTasksComponent);
	static_assert(UAIController_CachedGameplayTasksComponent_Offset == 0x4f0, "UAIController::CachedGameplayTasksComponent offset is not 4f0");
	auto constexpr UAIController_DefaultNavigationFilterClass_Offset = offsetof(UAIController, DefaultNavigationFilterClass);
	static_assert(UAIController_DefaultNavigationFilterClass_Offset == 0x4f8, "UAIController::DefaultNavigationFilterClass offset is not 4f8");
	auto constexpr UAIController_ReceiveMoveCompleted_Offset = offsetof(UAIController, ReceiveMoveCompleted);
	static_assert(UAIController_ReceiveMoveCompleted_Offset == 0x500, "UAIController::ReceiveMoveCompleted offset is not 500");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
