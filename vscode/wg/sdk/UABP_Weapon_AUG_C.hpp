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

struct alignas(1) UABP_Weapon_AUG_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_AUG_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133550); // id32("AnimBlueprintGeneratedClass ABP_Weapon_AUG.ABP_Weapon_AUG_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_AUG.ABP_Weapon_AUG_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_AUG.ABP_Weapon_AUG_C.AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_AUG.ABP_Weapon_AUG_C.AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF */
	FAnimNode_Slot AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_AUG.ABP_Weapon_AUG_C.AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE */
	FAnimNode_Slot AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_AUG.ABP_Weapon_AUG_C.AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_AUG_C = sizeof(UABP_Weapon_AUG_C); // 1440
    static_assert(sizeof(UABP_Weapon_AUG_C) == 0x5A0, "Size of UABP_Weapon_AUG_C is not correct.");
	auto constexpr UABP_Weapon_AUG_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_AUG_C, UberGraphFrame);
	static_assert(UABP_Weapon_AUG_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_AUG_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_AUG_C_AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11_Offset = offsetof(UABP_Weapon_AUG_C, AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11);
	static_assert(UABP_Weapon_AUG_C_AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11_Offset == 0x460, "UABP_Weapon_AUG_C::AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11 offset is not 460");
	auto constexpr UABP_Weapon_AUG_C_AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF_Offset = offsetof(UABP_Weapon_AUG_C, AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF);
	static_assert(UABP_Weapon_AUG_C_AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF_Offset == 0x4a8, "UABP_Weapon_AUG_C::AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF offset is not 4a8");
	auto constexpr UABP_Weapon_AUG_C_AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE_Offset = offsetof(UABP_Weapon_AUG_C, AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE);
	static_assert(UABP_Weapon_AUG_C_AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE_Offset == 0x4e0, "UABP_Weapon_AUG_C::AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE offset is not 4e0");
	auto constexpr UABP_Weapon_AUG_C_AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A_Offset = offsetof(UABP_Weapon_AUG_C, AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A);
	static_assert(UABP_Weapon_AUG_C_AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A_Offset == 0x540, "UABP_Weapon_AUG_C::AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
