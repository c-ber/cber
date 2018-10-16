#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_1911_C // Size: 0x54C
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_1911_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133981); // id32("AnimBlueprintGeneratedClass ABP_Weapon_1912.ABP_Weapon_1911_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_1912.ABP_Weapon_1911_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_1912.ABP_Weapon_1911_C.AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_1912.ABP_Weapon_1911_C.AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606 */
	FAnimNode_Slot AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_1912.ABP_Weapon_1911_C.AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60 */
	ExternalPtr<struct UTslWeapon_Gun> ActorRef; /* Ofs: 0x540 Size: 0x8 - ObjectProperty ABP_Weapon_1912.ABP_Weapon_1911_C.ActorRef */
	int32_t CurrentAmmo; /* Ofs: 0x548 Size: 0x4 - IntProperty ABP_Weapon_1912.ABP_Weapon_1911_C.CurrentAmmo */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetActorRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x540, value); }
	inline bool SetCurrentAmmo(t_structHelper inst, int32_t value) { inst.WriteOffset(0x548, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_1911_C = sizeof(UABP_Weapon_1911_C); // 1356
    static_assert(sizeof(UABP_Weapon_1911_C) == 0x54C, "Size of UABP_Weapon_1911_C is not correct.");
	auto constexpr UABP_Weapon_1911_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_1911_C, UberGraphFrame);
	static_assert(UABP_Weapon_1911_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_1911_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_1911_C_AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750_Offset = offsetof(UABP_Weapon_1911_C, AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750);
	static_assert(UABP_Weapon_1911_C_AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750_Offset == 0x460, "UABP_Weapon_1911_C::AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750 offset is not 460");
	auto constexpr UABP_Weapon_1911_C_AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606_Offset = offsetof(UABP_Weapon_1911_C, AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606);
	static_assert(UABP_Weapon_1911_C_AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606_Offset == 0x4a8, "UABP_Weapon_1911_C::AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606 offset is not 4a8");
	auto constexpr UABP_Weapon_1911_C_AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60_Offset = offsetof(UABP_Weapon_1911_C, AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60);
	static_assert(UABP_Weapon_1911_C_AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60_Offset == 0x4e0, "UABP_Weapon_1911_C::AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60 offset is not 4e0");
	auto constexpr UABP_Weapon_1911_C_ActorRef_Offset = offsetof(UABP_Weapon_1911_C, ActorRef);
	static_assert(UABP_Weapon_1911_C_ActorRef_Offset == 0x540, "UABP_Weapon_1911_C::ActorRef offset is not 540");
	auto constexpr UABP_Weapon_1911_C_CurrentAmmo_Offset = offsetof(UABP_Weapon_1911_C, CurrentAmmo);
	static_assert(UABP_Weapon_1911_C_CurrentAmmo_Offset == 0x548, "UABP_Weapon_1911_C::CurrentAmmo offset is not 548");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
