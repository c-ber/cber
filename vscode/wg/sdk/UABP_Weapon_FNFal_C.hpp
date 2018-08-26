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

struct alignas(1) UABP_Weapon_FNFal_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_FNFal_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130739); // id32("AnimBlueprintGeneratedClass ABP_Weapon_FNFal.ABP_Weapon_FNFal_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_FNFal.ABP_Weapon_FNFal_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_FNFal.ABP_Weapon_FNFal_C.AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134 */
	FAnimNode_Slot AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_FNFal.ABP_Weapon_FNFal_C.AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858; /* Ofs: 0x508 Size: 0x38 - StructProperty ABP_Weapon_FNFal.ABP_Weapon_FNFal_C.AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858 */
	FAnimNode_Slot AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_FNFal.ABP_Weapon_FNFal_C.AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_FNFal_C = sizeof(UABP_Weapon_FNFal_C); // 1440
    static_assert(sizeof(UABP_Weapon_FNFal_C) == 0x5A0, "Size of UABP_Weapon_FNFal_C is not correct.");
	auto constexpr UABP_Weapon_FNFal_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_FNFal_C, UberGraphFrame);
	static_assert(UABP_Weapon_FNFal_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_FNFal_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_FNFal_C_AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134_Offset = offsetof(UABP_Weapon_FNFal_C, AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134);
	static_assert(UABP_Weapon_FNFal_C_AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134_Offset == 0x460, "UABP_Weapon_FNFal_C::AnimGraphNode_Root_DEA6F1F54F454215AB425D8401D5F134 offset is not 460");
	auto constexpr UABP_Weapon_FNFal_C_AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0_Offset = offsetof(UABP_Weapon_FNFal_C, AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0);
	static_assert(UABP_Weapon_FNFal_C_AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0_Offset == 0x4a8, "UABP_Weapon_FNFal_C::AnimGraphNode_Slot_DC49693444E2EED827371E8436A48BC0 offset is not 4a8");
	auto constexpr UABP_Weapon_FNFal_C_AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858_Offset = offsetof(UABP_Weapon_FNFal_C, AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858);
	static_assert(UABP_Weapon_FNFal_C_AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858_Offset == 0x508, "UABP_Weapon_FNFal_C::AnimGraphNode_LocalRefPose_A40E810249DF9858275E378B379D6858 offset is not 508");
	auto constexpr UABP_Weapon_FNFal_C_AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98_Offset = offsetof(UABP_Weapon_FNFal_C, AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98);
	static_assert(UABP_Weapon_FNFal_C_AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98_Offset == 0x540, "UABP_Weapon_FNFal_C::AnimGraphNode_Slot_8A4D1436492606057FEFC0AEC0809B98 offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
