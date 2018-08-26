#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnActionsComponent // Size: 0x220
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPawnActionsComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(665); // id32("Class AIModule.PawnActionsComponent")
		return ptr;
	}
//	ExternalPtr<struct UPawn> ControlledPawn; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty AIModule.PawnActionsComponent.ControlledPawn */
	TArray<struct FPawnActionStack> ActionStacks; /* Ofs: 0x1F0 Size: 0x10 - ArrayProperty AIModule.PawnActionsComponent.ActionStacks */
	TArray<struct FPawnActionEvent> ActionEvents; /* Ofs: 0x200 Size: 0x10 - ArrayProperty AIModule.PawnActionsComponent.ActionEvents */
	ExternalPtr<struct UPawnAction> CurrentAction; /* Ofs: 0x210 Size: 0x8 - ObjectProperty AIModule.PawnActionsComponent.CurrentAction */
	uint8_t UnknownData218[0x8];


//	inline bool SetControlledPawn(t_structHelper inst, ExternalPtr<struct UPawn> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetActionStacks(t_structHelper inst, TArray<struct FPawnActionStack> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetActionEvents(t_structHelper inst, TArray<struct FPawnActionEvent> value) { inst.WriteOffset(0x200, value); }
	inline bool SetCurrentAction(t_structHelper inst, ExternalPtr<struct UPawnAction> value) { inst.WriteOffset(0x210, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnActionsComponent = sizeof(UPawnActionsComponent); // 544
    static_assert(sizeof(UPawnActionsComponent) == 0x220, "Size of UPawnActionsComponent is not correct.");
//	auto constexpr UPawnActionsComponent_ControlledPawn_Offset = offsetof(UPawnActionsComponent, ControlledPawn);
//	static_assert(UPawnActionsComponent_ControlledPawn_Offset == 0x1e8, "UPawnActionsComponent::ControlledPawn offset is not 1e8");
	auto constexpr UPawnActionsComponent_ActionStacks_Offset = offsetof(UPawnActionsComponent, ActionStacks);
	static_assert(UPawnActionsComponent_ActionStacks_Offset == 0x1f0, "UPawnActionsComponent::ActionStacks offset is not 1f0");
	auto constexpr UPawnActionsComponent_ActionEvents_Offset = offsetof(UPawnActionsComponent, ActionEvents);
	static_assert(UPawnActionsComponent_ActionEvents_Offset == 0x200, "UPawnActionsComponent::ActionEvents offset is not 200");
	auto constexpr UPawnActionsComponent_CurrentAction_Offset = offsetof(UPawnActionsComponent, CurrentAction);
	static_assert(UPawnActionsComponent_CurrentAction_Offset == 0x210, "UPawnActionsComponent::CurrentAction offset is not 210");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
