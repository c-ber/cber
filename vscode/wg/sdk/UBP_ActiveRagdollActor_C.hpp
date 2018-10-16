#pragma once
#include "UActor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_ActiveRagdollActor_C // Size: 0x458
	: public UActor // Size: 0x410
{
private:
	typedef UBP_ActiveRagdollActor_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88246); // id32("BlueprintGeneratedClass BP_ActiveRagdollActor.BP_ActiveRagdollActor_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x410 Size: 0x8 - StructProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UberGraphFrame */
	ExternalPtr<struct UBillboardComponent> Billboard; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.Billboard */
	ExternalPtr<struct UPhysicsConstraintComponent> PhysicsConstraint; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.PhysicsConstraint */
	ExternalPtr<struct UArrowComponent> Arrow; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.Arrow */
	ExternalPtr<struct UCapsuleComponent> Capsule; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.Capsule */
	ExternalPtr<struct USceneComponent> Scene; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.Scene */
	FVector ServerPosition; /* Ofs: 0x440 Size: 0xC - StructProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ServerPosition */
	uint8_t boolField44C;
	uint8_t UnknownData44D[0x3];
	ExternalPtr<struct UPlayerPawn_v2_C> ParentRef; /* Ofs: 0x450 Size: 0x8 - ObjectProperty BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ParentRef */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x410, value); }
	inline bool SetBillboard(t_structHelper inst, ExternalPtr<struct UBillboardComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetPhysicsConstraint(t_structHelper inst, ExternalPtr<struct UPhysicsConstraintComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetArrow(t_structHelper inst, ExternalPtr<struct UArrowComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetCapsule(t_structHelper inst, ExternalPtr<struct UCapsuleComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetScene(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x438, value); }
	inline bool SetServerPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0x440, value); }
	inline bool ClientInitialized()
	{
		return boolField44C& 0x1;
	}
	inline bool SetClientInitialized(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetParentRef(t_structHelper inst, ExternalPtr<struct UPlayerPawn_v2_C> value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_ActiveRagdollActor_C = sizeof(UBP_ActiveRagdollActor_C); // 1112
    static_assert(sizeof(UBP_ActiveRagdollActor_C) == 0x458, "Size of UBP_ActiveRagdollActor_C is not correct.");
	auto constexpr UBP_ActiveRagdollActor_C_UberGraphFrame_Offset = offsetof(UBP_ActiveRagdollActor_C, UberGraphFrame);
	static_assert(UBP_ActiveRagdollActor_C_UberGraphFrame_Offset == 0x410, "UBP_ActiveRagdollActor_C::UberGraphFrame offset is not 410");
	auto constexpr UBP_ActiveRagdollActor_C_Billboard_Offset = offsetof(UBP_ActiveRagdollActor_C, Billboard);
	static_assert(UBP_ActiveRagdollActor_C_Billboard_Offset == 0x418, "UBP_ActiveRagdollActor_C::Billboard offset is not 418");
	auto constexpr UBP_ActiveRagdollActor_C_PhysicsConstraint_Offset = offsetof(UBP_ActiveRagdollActor_C, PhysicsConstraint);
	static_assert(UBP_ActiveRagdollActor_C_PhysicsConstraint_Offset == 0x420, "UBP_ActiveRagdollActor_C::PhysicsConstraint offset is not 420");
	auto constexpr UBP_ActiveRagdollActor_C_Arrow_Offset = offsetof(UBP_ActiveRagdollActor_C, Arrow);
	static_assert(UBP_ActiveRagdollActor_C_Arrow_Offset == 0x428, "UBP_ActiveRagdollActor_C::Arrow offset is not 428");
	auto constexpr UBP_ActiveRagdollActor_C_Capsule_Offset = offsetof(UBP_ActiveRagdollActor_C, Capsule);
	static_assert(UBP_ActiveRagdollActor_C_Capsule_Offset == 0x430, "UBP_ActiveRagdollActor_C::Capsule offset is not 430");
	auto constexpr UBP_ActiveRagdollActor_C_Scene_Offset = offsetof(UBP_ActiveRagdollActor_C, Scene);
	static_assert(UBP_ActiveRagdollActor_C_Scene_Offset == 0x438, "UBP_ActiveRagdollActor_C::Scene offset is not 438");
	auto constexpr UBP_ActiveRagdollActor_C_ServerPosition_Offset = offsetof(UBP_ActiveRagdollActor_C, ServerPosition);
	static_assert(UBP_ActiveRagdollActor_C_ServerPosition_Offset == 0x440, "UBP_ActiveRagdollActor_C::ServerPosition offset is not 440");
	auto constexpr UBP_ActiveRagdollActor_C_boolField44C_Offset = offsetof(UBP_ActiveRagdollActor_C, boolField44C);
	static_assert(UBP_ActiveRagdollActor_C_boolField44C_Offset == 0x44c, "UBP_ActiveRagdollActor_C::boolField44C offset is not 44c");
	auto constexpr UBP_ActiveRagdollActor_C_ParentRef_Offset = offsetof(UBP_ActiveRagdollActor_C, ParentRef);
	static_assert(UBP_ActiveRagdollActor_C_ParentRef_Offset == 0x450, "UBP_ActiveRagdollActor_C::ParentRef offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
