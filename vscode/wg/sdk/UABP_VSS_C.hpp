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

struct alignas(1) UABP_VSS_C // Size: 0x600
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_VSS_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57175); // id32("AnimBlueprintGeneratedClass ABP_VSS.ABP_VSS_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_VSS.ABP_VSS_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_VSS.ABP_VSS_C.AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_VSS.ABP_VSS_C.AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B */
	FAnimNode_Slot AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_VSS.ABP_VSS_C.AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A */
	FAnimNode_Slot AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_VSS.ABP_VSS_C.AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34 */
	FAnimNode_Slot AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047; /* Ofs: 0x5A0 Size: 0x60 - StructProperty ABP_VSS.ABP_VSS_C.AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x5A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_VSS_C = sizeof(UABP_VSS_C); // 1536
    static_assert(sizeof(UABP_VSS_C) == 0x600, "Size of UABP_VSS_C is not correct.");
	auto constexpr UABP_VSS_C_UberGraphFrame_Offset = offsetof(UABP_VSS_C, UberGraphFrame);
	static_assert(UABP_VSS_C_UberGraphFrame_Offset == 0x458, "UABP_VSS_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_VSS_C_AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967_Offset = offsetof(UABP_VSS_C, AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967);
	static_assert(UABP_VSS_C_AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967_Offset == 0x460, "UABP_VSS_C::AnimGraphNode_Root_C8B0685147A263F4A5215DBBFD57A967 offset is not 460");
	auto constexpr UABP_VSS_C_AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B_Offset = offsetof(UABP_VSS_C, AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B);
	static_assert(UABP_VSS_C_AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B_Offset == 0x4a8, "UABP_VSS_C::AnimGraphNode_LocalRefPose_226780A0402D75AB09F031B1EDDEE61B offset is not 4a8");
	auto constexpr UABP_VSS_C_AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A_Offset = offsetof(UABP_VSS_C, AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A);
	static_assert(UABP_VSS_C_AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A_Offset == 0x4e0, "UABP_VSS_C::AnimGraphNode_Slot_3C0F8E34484B65C62A620CA3D326C99A offset is not 4e0");
	auto constexpr UABP_VSS_C_AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34_Offset = offsetof(UABP_VSS_C, AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34);
	static_assert(UABP_VSS_C_AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34_Offset == 0x540, "UABP_VSS_C::AnimGraphNode_Slot_EC31424B4D7DF1B6741334AF329C0B34 offset is not 540");
	auto constexpr UABP_VSS_C_AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047_Offset = offsetof(UABP_VSS_C, AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047);
	static_assert(UABP_VSS_C_AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047_Offset == 0x5a0, "UABP_VSS_C::AnimGraphNode_Slot_B7CE6D78403DB3F2B1070793C7963047 offset is not 5a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
