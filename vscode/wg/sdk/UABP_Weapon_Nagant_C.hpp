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

struct alignas(1) UABP_Weapon_Nagant_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Nagant_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135377); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Nagant.ABP_Weapon_Nagant_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7 */
	FAnimNode_Slot AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20 */
	FAnimNode_Slot AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_118E696B4DD1317C7E383D883432820A(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Nagant_C = sizeof(UABP_Weapon_Nagant_C); // 1440
    static_assert(sizeof(UABP_Weapon_Nagant_C) == 0x5A0, "Size of UABP_Weapon_Nagant_C is not correct.");
	auto constexpr UABP_Weapon_Nagant_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Nagant_C, UberGraphFrame);
	static_assert(UABP_Weapon_Nagant_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Nagant_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Nagant_C_AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A_Offset = offsetof(UABP_Weapon_Nagant_C, AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A);
	static_assert(UABP_Weapon_Nagant_C_AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A_Offset == 0x460, "UABP_Weapon_Nagant_C::AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A offset is not 460");
	auto constexpr UABP_Weapon_Nagant_C_AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7_Offset = offsetof(UABP_Weapon_Nagant_C, AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7);
	static_assert(UABP_Weapon_Nagant_C_AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7_Offset == 0x4a8, "UABP_Weapon_Nagant_C::AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7 offset is not 4a8");
	auto constexpr UABP_Weapon_Nagant_C_AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20_Offset = offsetof(UABP_Weapon_Nagant_C, AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20);
	static_assert(UABP_Weapon_Nagant_C_AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20_Offset == 0x4e0, "UABP_Weapon_Nagant_C::AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20 offset is not 4e0");
	auto constexpr UABP_Weapon_Nagant_C_AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57_Offset = offsetof(UABP_Weapon_Nagant_C, AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57);
	static_assert(UABP_Weapon_Nagant_C_AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57_Offset == 0x540, "UABP_Weapon_Nagant_C::AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57 offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
