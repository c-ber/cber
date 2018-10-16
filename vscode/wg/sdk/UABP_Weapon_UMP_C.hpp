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

struct alignas(1) UABP_Weapon_UMP_C // Size: 0x600
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_UMP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132644); // id32("AnimBlueprintGeneratedClass ABP_Weapon_UMP.ABP_Weapon_UMP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5 */
	FAnimNode_Slot AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C */
	FAnimNode_Slot AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD */
	FAnimNode_Slot AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_UMP.ABP_Weapon_UMP_C.AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_3496550740F2794862FAF595CE63116C(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_UMP_C = sizeof(UABP_Weapon_UMP_C); // 1536
    static_assert(sizeof(UABP_Weapon_UMP_C) == 0x600, "Size of UABP_Weapon_UMP_C is not correct.");
	auto constexpr UABP_Weapon_UMP_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_UMP_C, UberGraphFrame);
	static_assert(UABP_Weapon_UMP_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_UMP_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_UMP_C_AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C_Offset = offsetof(UABP_Weapon_UMP_C, AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C);
	static_assert(UABP_Weapon_UMP_C_AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C_Offset == 0x460, "UABP_Weapon_UMP_C::AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C offset is not 460");
	auto constexpr UABP_Weapon_UMP_C_AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5_Offset = offsetof(UABP_Weapon_UMP_C, AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5);
	static_assert(UABP_Weapon_UMP_C_AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5_Offset == 0x4a8, "UABP_Weapon_UMP_C::AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5 offset is not 4a8");
	auto constexpr UABP_Weapon_UMP_C_AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C_Offset = offsetof(UABP_Weapon_UMP_C, AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C);
	static_assert(UABP_Weapon_UMP_C_AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C_Offset == 0x4e0, "UABP_Weapon_UMP_C::AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C offset is not 4e0");
	auto constexpr UABP_Weapon_UMP_C_AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD_Offset = offsetof(UABP_Weapon_UMP_C, AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD);
	static_assert(UABP_Weapon_UMP_C_AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD_Offset == 0x540, "UABP_Weapon_UMP_C::AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD offset is not 540");
	auto constexpr UABP_Weapon_UMP_C_AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E_Offset = offsetof(UABP_Weapon_UMP_C, AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E);
	static_assert(UABP_Weapon_UMP_C_AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E_Offset == 0x5a0, "UABP_Weapon_UMP_C::AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E offset is not 5a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
