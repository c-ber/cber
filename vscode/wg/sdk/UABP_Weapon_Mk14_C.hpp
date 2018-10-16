#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Mk14_C // Size: 0x7B4
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Mk14_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135171); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Mk14.ABP_Weapon_Mk14_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215 */
	FAnimNode_Slot AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6 */
	FAnimNode_Slot AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A; /* Ofs: 0x508 Size: 0x60 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8; /* Ofs: 0x568 Size: 0x38 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5; /* Ofs: 0x5A0 Size: 0xB8 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962; /* Ofs: 0x658 Size: 0xB8 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28; /* Ofs: 0x710 Size: 0x48 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1; /* Ofs: 0x758 Size: 0x48 - StructProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1 */
	ExternalPtr<struct UTslWeapon_Gun> GunRef; /* Ofs: 0x7A0 Size: 0x8 - ObjectProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.GunRef */
	ExternalPtr<struct UTslCharacter> CharRef; /* Ofs: 0x7A8 Size: 0x8 - ObjectProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.CharRef */
	float BipodAlpha; /* Ofs: 0x7B0 Size: 0x4 - FloatProperty ABP_Weapon_Mk14.ABP_Weapon_Mk14_C.BipodAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x568, value); }
	inline bool SetAnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x658, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x710, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x758, value); }
	inline bool SetGunRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetCharRef(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetBipodAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x7B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Mk14_C = sizeof(UABP_Weapon_Mk14_C); // 1972
    static_assert(sizeof(UABP_Weapon_Mk14_C) == 0x7B4, "Size of UABP_Weapon_Mk14_C is not correct.");
	auto constexpr UABP_Weapon_Mk14_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Mk14_C, UberGraphFrame);
	static_assert(UABP_Weapon_Mk14_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Mk14_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215_Offset == 0x460, "UABP_Weapon_Mk14_C::AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215 offset is not 460");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6_Offset == 0x4a8, "UABP_Weapon_Mk14_C::AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6 offset is not 4a8");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A_Offset == 0x508, "UABP_Weapon_Mk14_C::AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A offset is not 508");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8_Offset == 0x568, "UABP_Weapon_Mk14_C::AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8 offset is not 568");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5_Offset == 0x5a0, "UABP_Weapon_Mk14_C::AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5 offset is not 5a0");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962_Offset == 0x658, "UABP_Weapon_Mk14_C::AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962 offset is not 658");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28_Offset == 0x710, "UABP_Weapon_Mk14_C::AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28 offset is not 710");
	auto constexpr UABP_Weapon_Mk14_C_AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1_Offset = offsetof(UABP_Weapon_Mk14_C, AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1);
	static_assert(UABP_Weapon_Mk14_C_AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1_Offset == 0x758, "UABP_Weapon_Mk14_C::AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1 offset is not 758");
	auto constexpr UABP_Weapon_Mk14_C_GunRef_Offset = offsetof(UABP_Weapon_Mk14_C, GunRef);
	static_assert(UABP_Weapon_Mk14_C_GunRef_Offset == 0x7a0, "UABP_Weapon_Mk14_C::GunRef offset is not 7a0");
	auto constexpr UABP_Weapon_Mk14_C_CharRef_Offset = offsetof(UABP_Weapon_Mk14_C, CharRef);
	static_assert(UABP_Weapon_Mk14_C_CharRef_Offset == 0x7a8, "UABP_Weapon_Mk14_C::CharRef offset is not 7a8");
	auto constexpr UABP_Weapon_Mk14_C_BipodAlpha_Offset = offsetof(UABP_Weapon_Mk14_C, BipodAlpha);
	static_assert(UABP_Weapon_Mk14_C_BipodAlpha_Offset == 0x7b0, "UABP_Weapon_Mk14_C::BipodAlpha offset is not 7b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
