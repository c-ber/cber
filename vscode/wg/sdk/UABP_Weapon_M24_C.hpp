#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_RefPose.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_M24_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_M24_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133837); // id32("AnimBlueprintGeneratedClass ABP_Weapon_M24.ABP_Weapon_M24_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_M24.ABP_Weapon_M24_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_M24.ABP_Weapon_M24_C.AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52 */
	FAnimNode_Slot AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_M24.ABP_Weapon_M24_C.AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7; /* Ofs: 0x508 Size: 0x38 - StructProperty ABP_Weapon_M24.ABP_Weapon_M24_C.AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7 */
	FAnimNode_Slot AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_M24.ABP_Weapon_M24_C.AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_M24_C = sizeof(UABP_Weapon_M24_C); // 1440
    static_assert(sizeof(UABP_Weapon_M24_C) == 0x5A0, "Size of UABP_Weapon_M24_C is not correct.");
	auto constexpr UABP_Weapon_M24_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_M24_C, UberGraphFrame);
	static_assert(UABP_Weapon_M24_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_M24_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_M24_C_AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52_Offset = offsetof(UABP_Weapon_M24_C, AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52);
	static_assert(UABP_Weapon_M24_C_AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52_Offset == 0x460, "UABP_Weapon_M24_C::AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52 offset is not 460");
	auto constexpr UABP_Weapon_M24_C_AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51_Offset = offsetof(UABP_Weapon_M24_C, AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51);
	static_assert(UABP_Weapon_M24_C_AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51_Offset == 0x4a8, "UABP_Weapon_M24_C::AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51 offset is not 4a8");
	auto constexpr UABP_Weapon_M24_C_AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7_Offset = offsetof(UABP_Weapon_M24_C, AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7);
	static_assert(UABP_Weapon_M24_C_AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7_Offset == 0x508, "UABP_Weapon_M24_C::AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7 offset is not 508");
	auto constexpr UABP_Weapon_M24_C_AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D_Offset = offsetof(UABP_Weapon_M24_C, AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D);
	static_assert(UABP_Weapon_M24_C_AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D_Offset == 0x540, "UABP_Weapon_M24_C::AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
