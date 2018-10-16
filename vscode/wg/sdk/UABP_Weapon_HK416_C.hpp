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

struct alignas(1) UABP_Weapon_HK416_C // Size: 0x600
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_HK416_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132252); // id32("AnimBlueprintGeneratedClass ABP_Weapon_HK416.ABP_Weapon_HK416_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF */
	FAnimNode_Slot AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA */
	FAnimNode_Slot AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC */
	FAnimNode_Slot AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_Weapon_HK416.ABP_Weapon_HK416_C.AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_HK416_C = sizeof(UABP_Weapon_HK416_C); // 1536
    static_assert(sizeof(UABP_Weapon_HK416_C) == 0x600, "Size of UABP_Weapon_HK416_C is not correct.");
	auto constexpr UABP_Weapon_HK416_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_HK416_C, UberGraphFrame);
	static_assert(UABP_Weapon_HK416_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_HK416_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_HK416_C_AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874_Offset = offsetof(UABP_Weapon_HK416_C, AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874);
	static_assert(UABP_Weapon_HK416_C_AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874_Offset == 0x460, "UABP_Weapon_HK416_C::AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874 offset is not 460");
	auto constexpr UABP_Weapon_HK416_C_AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF_Offset = offsetof(UABP_Weapon_HK416_C, AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF);
	static_assert(UABP_Weapon_HK416_C_AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF_Offset == 0x4a8, "UABP_Weapon_HK416_C::AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF offset is not 4a8");
	auto constexpr UABP_Weapon_HK416_C_AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA_Offset = offsetof(UABP_Weapon_HK416_C, AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA);
	static_assert(UABP_Weapon_HK416_C_AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA_Offset == 0x4e0, "UABP_Weapon_HK416_C::AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA offset is not 4e0");
	auto constexpr UABP_Weapon_HK416_C_AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC_Offset = offsetof(UABP_Weapon_HK416_C, AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC);
	static_assert(UABP_Weapon_HK416_C_AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC_Offset == 0x540, "UABP_Weapon_HK416_C::AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC offset is not 540");
	auto constexpr UABP_Weapon_HK416_C_AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73_Offset = offsetof(UABP_Weapon_HK416_C, AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73);
	static_assert(UABP_Weapon_HK416_C_AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73_Offset == 0x5a0, "UABP_Weapon_HK416_C::AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73 offset is not 5a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
