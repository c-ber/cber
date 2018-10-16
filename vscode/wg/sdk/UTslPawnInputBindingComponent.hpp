#pragma once
#include "UActorComponent.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPawnInputBindingComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslPawnInputBindingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1473); // id32("Class TslGame.TslPawnInputBindingComponent")
		return ptr;
	}
//	FTimerHandle MoveVehicleSeatTimer_Gamepad; /* Ofs: 0x1E8 Size: 0x8 - StructProperty TslGame.TslPawnInputBindingComponent.MoveVehicleSeatTimer_Gamepad */
	FScriptMulticastDelegate OnOwnerPossessed; /* Ofs: 0x1F0 Size: 0x10 - MulticastDelegateProperty TslGame.TslPawnInputBindingComponent.OnOwnerPossessed */
	FScriptMulticastDelegate OnOwnerUnPossessed; /* Ofs: 0x200 Size: 0x10 - MulticastDelegateProperty TslGame.TslPawnInputBindingComponent.OnOwnerUnPossessed */


//	inline bool SetMoveVehicleSeatTimer_Gamepad(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetOnOwnerPossessed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetOnOwnerUnPossessed(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x200, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPawnInputBindingComponent = sizeof(UTslPawnInputBindingComponent); // 528
    static_assert(sizeof(UTslPawnInputBindingComponent) == 0x210, "Size of UTslPawnInputBindingComponent is not correct.");
//	auto constexpr UTslPawnInputBindingComponent_MoveVehicleSeatTimer_Gamepad_Offset = offsetof(UTslPawnInputBindingComponent, MoveVehicleSeatTimer_Gamepad);
//	static_assert(UTslPawnInputBindingComponent_MoveVehicleSeatTimer_Gamepad_Offset == 0x1e8, "UTslPawnInputBindingComponent::MoveVehicleSeatTimer_Gamepad offset is not 1e8");
	auto constexpr UTslPawnInputBindingComponent_OnOwnerPossessed_Offset = offsetof(UTslPawnInputBindingComponent, OnOwnerPossessed);
	static_assert(UTslPawnInputBindingComponent_OnOwnerPossessed_Offset == 0x1f0, "UTslPawnInputBindingComponent::OnOwnerPossessed offset is not 1f0");
	auto constexpr UTslPawnInputBindingComponent_OnOwnerUnPossessed_Offset = offsetof(UTslPawnInputBindingComponent, OnOwnerUnPossessed);
	static_assert(UTslPawnInputBindingComponent_OnOwnerUnPossessed_Offset == 0x200, "UTslPawnInputBindingComponent::OnOwnerUnPossessed offset is not 200");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
