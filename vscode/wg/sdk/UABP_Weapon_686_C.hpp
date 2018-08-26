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

struct alignas(1) UABP_Weapon_686_C // Size: 0x540
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_686_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(129375); // id32("AnimBlueprintGeneratedClass ABP_Weapon_687.ABP_Weapon_686_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_687.ABP_Weapon_686_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_687.ABP_Weapon_686_C.AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_687.ABP_Weapon_686_C.AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD */
	FAnimNode_Slot AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_687.ABP_Weapon_686_C.AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_686_C = sizeof(UABP_Weapon_686_C); // 1344
    static_assert(sizeof(UABP_Weapon_686_C) == 0x540, "Size of UABP_Weapon_686_C is not correct.");
	auto constexpr UABP_Weapon_686_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_686_C, UberGraphFrame);
	static_assert(UABP_Weapon_686_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_686_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_686_C_AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F_Offset = offsetof(UABP_Weapon_686_C, AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F);
	static_assert(UABP_Weapon_686_C_AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F_Offset == 0x460, "UABP_Weapon_686_C::AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F offset is not 460");
	auto constexpr UABP_Weapon_686_C_AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD_Offset = offsetof(UABP_Weapon_686_C, AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD);
	static_assert(UABP_Weapon_686_C_AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD_Offset == 0x4a8, "UABP_Weapon_686_C::AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD offset is not 4a8");
	auto constexpr UABP_Weapon_686_C_AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42_Offset = offsetof(UABP_Weapon_686_C, AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42);
	static_assert(UABP_Weapon_686_C_AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42_Offset == 0x4e0, "UABP_Weapon_686_C::AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42 offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
