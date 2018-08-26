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

struct alignas(1) UABP_Weapon_Win94_C // Size: 0x601
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Win94_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131827); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Win94.ABP_Weapon_Win94_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D */
	FAnimNode_Slot AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3 */
	FAnimNode_Slot AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10 */
	FAnimNode_Slot AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880 */
	uint8_t boolField600;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_82B9648E48C03F180737198CB64D035F(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
	inline bool bShellInChamber()
	{
		return boolField600& 0x1;
	}
	inline bool SetbShellInChamber(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x600, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Win94_C = sizeof(UABP_Weapon_Win94_C); // 1537
    static_assert(sizeof(UABP_Weapon_Win94_C) == 0x601, "Size of UABP_Weapon_Win94_C is not correct.");
	auto constexpr UABP_Weapon_Win94_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Win94_C, UberGraphFrame);
	static_assert(UABP_Weapon_Win94_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Win94_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Win94_C_AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F_Offset = offsetof(UABP_Weapon_Win94_C, AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F);
	static_assert(UABP_Weapon_Win94_C_AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F_Offset == 0x460, "UABP_Weapon_Win94_C::AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F offset is not 460");
	auto constexpr UABP_Weapon_Win94_C_AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D_Offset = offsetof(UABP_Weapon_Win94_C, AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D);
	static_assert(UABP_Weapon_Win94_C_AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D_Offset == 0x4a8, "UABP_Weapon_Win94_C::AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D offset is not 4a8");
	auto constexpr UABP_Weapon_Win94_C_AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3_Offset = offsetof(UABP_Weapon_Win94_C, AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3);
	static_assert(UABP_Weapon_Win94_C_AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3_Offset == 0x4e0, "UABP_Weapon_Win94_C::AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3 offset is not 4e0");
	auto constexpr UABP_Weapon_Win94_C_AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10_Offset = offsetof(UABP_Weapon_Win94_C, AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10);
	static_assert(UABP_Weapon_Win94_C_AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10_Offset == 0x540, "UABP_Weapon_Win94_C::AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10 offset is not 540");
	auto constexpr UABP_Weapon_Win94_C_AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880_Offset = offsetof(UABP_Weapon_Win94_C, AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880);
	static_assert(UABP_Weapon_Win94_C_AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880_Offset == 0x5a0, "UABP_Weapon_Win94_C::AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880 offset is not 5a0");
	auto constexpr UABP_Weapon_Win94_C_boolField600_Offset = offsetof(UABP_Weapon_Win94_C, boolField600);
	static_assert(UABP_Weapon_Win94_C_boolField600_Offset == 0x600, "UABP_Weapon_Win94_C::boolField600 offset is not 600");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
