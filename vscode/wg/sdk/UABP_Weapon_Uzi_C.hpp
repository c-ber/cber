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

struct alignas(1) UABP_Weapon_Uzi_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Uzi_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131303); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Uzi.ABP_Weapon_Uzi_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D */
	FAnimNode_Slot AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC */
	FAnimNode_Slot AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Uzi_C = sizeof(UABP_Weapon_Uzi_C); // 1440
    static_assert(sizeof(UABP_Weapon_Uzi_C) == 0x5A0, "Size of UABP_Weapon_Uzi_C is not correct.");
	auto constexpr UABP_Weapon_Uzi_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Uzi_C, UberGraphFrame);
	static_assert(UABP_Weapon_Uzi_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Uzi_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Uzi_C_AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A_Offset = offsetof(UABP_Weapon_Uzi_C, AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A);
	static_assert(UABP_Weapon_Uzi_C_AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A_Offset == 0x460, "UABP_Weapon_Uzi_C::AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A offset is not 460");
	auto constexpr UABP_Weapon_Uzi_C_AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D_Offset = offsetof(UABP_Weapon_Uzi_C, AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D);
	static_assert(UABP_Weapon_Uzi_C_AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D_Offset == 0x4a8, "UABP_Weapon_Uzi_C::AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D offset is not 4a8");
	auto constexpr UABP_Weapon_Uzi_C_AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC_Offset = offsetof(UABP_Weapon_Uzi_C, AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC);
	static_assert(UABP_Weapon_Uzi_C_AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC_Offset == 0x4e0, "UABP_Weapon_Uzi_C::AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC offset is not 4e0");
	auto constexpr UABP_Weapon_Uzi_C_AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4_Offset = offsetof(UABP_Weapon_Uzi_C, AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4);
	static_assert(UABP_Weapon_Uzi_C_AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4_Offset == 0x540, "UABP_Weapon_Uzi_C::AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4 offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
