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

struct alignas(1) UABP_Weapon_AWM_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_AWM_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133691); // id32("AnimBlueprintGeneratedClass ABP_Weapon_AWM.ABP_Weapon_AWM_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_AWM.ABP_Weapon_AWM_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_AWM.ABP_Weapon_AWM_C.AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_AWM.ABP_Weapon_AWM_C.AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A */
	FAnimNode_Slot AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_AWM.ABP_Weapon_AWM_C.AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291 */
	FAnimNode_Slot AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_AWM.ABP_Weapon_AWM_C.AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_AWM_C = sizeof(UABP_Weapon_AWM_C); // 1440
    static_assert(sizeof(UABP_Weapon_AWM_C) == 0x5A0, "Size of UABP_Weapon_AWM_C is not correct.");
	auto constexpr UABP_Weapon_AWM_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_AWM_C, UberGraphFrame);
	static_assert(UABP_Weapon_AWM_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_AWM_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_AWM_C_AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E_Offset = offsetof(UABP_Weapon_AWM_C, AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E);
	static_assert(UABP_Weapon_AWM_C_AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E_Offset == 0x460, "UABP_Weapon_AWM_C::AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E offset is not 460");
	auto constexpr UABP_Weapon_AWM_C_AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A_Offset = offsetof(UABP_Weapon_AWM_C, AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A);
	static_assert(UABP_Weapon_AWM_C_AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A_Offset == 0x4a8, "UABP_Weapon_AWM_C::AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A offset is not 4a8");
	auto constexpr UABP_Weapon_AWM_C_AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291_Offset = offsetof(UABP_Weapon_AWM_C, AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291);
	static_assert(UABP_Weapon_AWM_C_AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291_Offset == 0x4e0, "UABP_Weapon_AWM_C::AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291 offset is not 4e0");
	auto constexpr UABP_Weapon_AWM_C_AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1_Offset = offsetof(UABP_Weapon_AWM_C, AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1);
	static_assert(UABP_Weapon_AWM_C_AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1_Offset == 0x540, "UABP_Weapon_AWM_C::AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1 offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
