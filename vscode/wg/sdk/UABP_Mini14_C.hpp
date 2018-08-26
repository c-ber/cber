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

struct alignas(1) UABP_Mini14_C // Size: 0x5A0
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Mini14_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132377); // id32("AnimBlueprintGeneratedClass ABP_Mini14.ABP_Mini14_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Mini14.ABP_Mini14_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Mini14.ABP_Mini14_C.AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Mini14.ABP_Mini14_C.AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2 */
	FAnimNode_Slot AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Mini14.ABP_Mini14_C.AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E */
	FAnimNode_Slot AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Mini14.ABP_Mini14_C.AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Mini14_C = sizeof(UABP_Mini14_C); // 1440
    static_assert(sizeof(UABP_Mini14_C) == 0x5A0, "Size of UABP_Mini14_C is not correct.");
	auto constexpr UABP_Mini14_C_UberGraphFrame_Offset = offsetof(UABP_Mini14_C, UberGraphFrame);
	static_assert(UABP_Mini14_C_UberGraphFrame_Offset == 0x458, "UABP_Mini14_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Mini14_C_AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD_Offset = offsetof(UABP_Mini14_C, AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD);
	static_assert(UABP_Mini14_C_AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD_Offset == 0x460, "UABP_Mini14_C::AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD offset is not 460");
	auto constexpr UABP_Mini14_C_AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2_Offset = offsetof(UABP_Mini14_C, AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2);
	static_assert(UABP_Mini14_C_AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2_Offset == 0x4a8, "UABP_Mini14_C::AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2 offset is not 4a8");
	auto constexpr UABP_Mini14_C_AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E_Offset = offsetof(UABP_Mini14_C, AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E);
	static_assert(UABP_Mini14_C_AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E_Offset == 0x4e0, "UABP_Mini14_C::AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E offset is not 4e0");
	auto constexpr UABP_Mini14_C_AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09_Offset = offsetof(UABP_Mini14_C, AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09);
	static_assert(UABP_Mini14_C_AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09_Offset == 0x540, "UABP_Mini14_C::AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09 offset is not 540");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
