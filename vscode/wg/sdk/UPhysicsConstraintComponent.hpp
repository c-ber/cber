#pragma once
#include "USceneComponent.hpp"
#include "FConstrainComponentPropName.hpp"
#include "FConstraintInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsConstraintComponent // Size: 0x6D0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UPhysicsConstraintComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194); // id32("Class Engine.PhysicsConstraintComponent")
		return ptr;
	}
	ExternalPtr<struct UActor> ConstraintActor1; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintComponent.ConstraintActor1 */
	FConstrainComponentPropName ComponentName1; /* Ofs: 0x498 Size: 0x8 - StructProperty Engine.PhysicsConstraintComponent.ComponentName1 */
	ExternalPtr<struct UActor> ConstraintActor2; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintComponent.ConstraintActor2 */
	FConstrainComponentPropName ComponentName2; /* Ofs: 0x4A8 Size: 0x8 - StructProperty Engine.PhysicsConstraintComponent.ComponentName2 */
	uint8_t UnknownData4B0[0x10];
	ExternalPtr<struct UPhysicsConstraintTemplate> ConstraintSetup; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty Engine.PhysicsConstraintComponent.ConstraintSetup */
	FScriptMulticastDelegate OnConstraintBroken; /* Ofs: 0x4C8 Size: 0x10 - MulticastDelegateProperty Engine.PhysicsConstraintComponent.OnConstraintBroken */
	uint8_t UnknownData4D8[0x8];
	FConstraintInstance ConstraintInstance; /* Ofs: 0x4E0 Size: 0x1F0 - StructProperty Engine.PhysicsConstraintComponent.ConstraintInstance */


	inline bool SetConstraintActor1(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x490, value); }
	inline bool SetComponentName1(t_structHelper inst, FConstrainComponentPropName value) { inst.WriteOffset(0x498, value); }
	inline bool SetConstraintActor2(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetComponentName2(t_structHelper inst, FConstrainComponentPropName value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetConstraintSetup(t_structHelper inst, ExternalPtr<struct UPhysicsConstraintTemplate> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetOnConstraintBroken(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetConstraintInstance(t_structHelper inst, FConstraintInstance value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsConstraintComponent = sizeof(UPhysicsConstraintComponent); // 1744
    static_assert(sizeof(UPhysicsConstraintComponent) == 0x6D0, "Size of UPhysicsConstraintComponent is not correct.");
	auto constexpr UPhysicsConstraintComponent_ConstraintActor1_Offset = offsetof(UPhysicsConstraintComponent, ConstraintActor1);
	static_assert(UPhysicsConstraintComponent_ConstraintActor1_Offset == 0x490, "UPhysicsConstraintComponent::ConstraintActor1 offset is not 490");
	auto constexpr UPhysicsConstraintComponent_ComponentName1_Offset = offsetof(UPhysicsConstraintComponent, ComponentName1);
	static_assert(UPhysicsConstraintComponent_ComponentName1_Offset == 0x498, "UPhysicsConstraintComponent::ComponentName1 offset is not 498");
	auto constexpr UPhysicsConstraintComponent_ConstraintActor2_Offset = offsetof(UPhysicsConstraintComponent, ConstraintActor2);
	static_assert(UPhysicsConstraintComponent_ConstraintActor2_Offset == 0x4a0, "UPhysicsConstraintComponent::ConstraintActor2 offset is not 4a0");
	auto constexpr UPhysicsConstraintComponent_ComponentName2_Offset = offsetof(UPhysicsConstraintComponent, ComponentName2);
	static_assert(UPhysicsConstraintComponent_ComponentName2_Offset == 0x4a8, "UPhysicsConstraintComponent::ComponentName2 offset is not 4a8");
	auto constexpr UPhysicsConstraintComponent_ConstraintSetup_Offset = offsetof(UPhysicsConstraintComponent, ConstraintSetup);
	static_assert(UPhysicsConstraintComponent_ConstraintSetup_Offset == 0x4c0, "UPhysicsConstraintComponent::ConstraintSetup offset is not 4c0");
	auto constexpr UPhysicsConstraintComponent_OnConstraintBroken_Offset = offsetof(UPhysicsConstraintComponent, OnConstraintBroken);
	static_assert(UPhysicsConstraintComponent_OnConstraintBroken_Offset == 0x4c8, "UPhysicsConstraintComponent::OnConstraintBroken offset is not 4c8");
	auto constexpr UPhysicsConstraintComponent_ConstraintInstance_Offset = offsetof(UPhysicsConstraintComponent, ConstraintInstance);
	static_assert(UPhysicsConstraintComponent_ConstraintInstance_Offset == 0x4e0, "UPhysicsConstraintComponent::ConstraintInstance offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
