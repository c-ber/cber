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

struct alignas(1) UABP_Weapon_Vector_C // Size: 0x540
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Vector_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(133357); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Vector.ABP_Weapon_Vector_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Vector.ABP_Weapon_Vector_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Vector.ABP_Weapon_Vector_C.AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Vector.ABP_Weapon_Vector_C.AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED */
	FAnimNode_Slot AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Vector.ABP_Weapon_Vector_C.AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Vector_C = sizeof(UABP_Weapon_Vector_C); // 1344
    static_assert(sizeof(UABP_Weapon_Vector_C) == 0x540, "Size of UABP_Weapon_Vector_C is not correct.");
	auto constexpr UABP_Weapon_Vector_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Vector_C, UberGraphFrame);
	static_assert(UABP_Weapon_Vector_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Vector_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Vector_C_AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA_Offset = offsetof(UABP_Weapon_Vector_C, AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA);
	static_assert(UABP_Weapon_Vector_C_AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA_Offset == 0x460, "UABP_Weapon_Vector_C::AnimGraphNode_Root_98C7A344460FDE075E400EB28D4544FA offset is not 460");
	auto constexpr UABP_Weapon_Vector_C_AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED_Offset = offsetof(UABP_Weapon_Vector_C, AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED);
	static_assert(UABP_Weapon_Vector_C_AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED_Offset == 0x4a8, "UABP_Weapon_Vector_C::AnimGraphNode_LocalRefPose_114AEB214281FB5156E3FD8767C271ED offset is not 4a8");
	auto constexpr UABP_Weapon_Vector_C_AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B_Offset = offsetof(UABP_Weapon_Vector_C, AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B);
	static_assert(UABP_Weapon_Vector_C_AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B_Offset == 0x4e0, "UABP_Weapon_Vector_C::AnimGraphNode_Slot_D07B38A14E3F6FAEB9E92897AA81319B offset is not 4e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
