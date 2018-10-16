#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_DP28_C // Size: 0x1170
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_DP28_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130567); // id32("AnimBlueprintGeneratedClass ABP_DP28.ABP_DP28_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_DP28.ABP_DP28_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293 */
	FAnimNode_Slot AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B */
	FAnimNode_Slot AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8; /* Ofs: 0x5A0 Size: 0xB8 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845; /* Ofs: 0x658 Size: 0x48 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48; /* Ofs: 0x6A0 Size: 0x48 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312; /* Ofs: 0x6E8 Size: 0xB8 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6; /* Ofs: 0x7A0 Size: 0xB8 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0; /* Ofs: 0x858 Size: 0xB8 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84; /* Ofs: 0x910 Size: 0xB8 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3; /* Ofs: 0x9C8 Size: 0x280 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5; /* Ofs: 0xC48 Size: 0x280 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5 */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B; /* Ofs: 0xEC8 Size: 0x280 - StructProperty ABP_DP28.ABP_DP28_C.AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B */
	ExternalPtr<struct UTslCharacter> CharRef; /* Ofs: 0x1148 Size: 0x8 - ObjectProperty ABP_DP28.ABP_DP28_C.CharRef */
	ExternalPtr<struct UTslWeapon_Gun> GunRef; /* Ofs: 0x1150 Size: 0x8 - ObjectProperty ABP_DP28.ABP_DP28_C.GunRef */
	FRotator MagRot; /* Ofs: 0x1158 Size: 0xC - StructProperty ABP_DP28.ABP_DP28_C.MagRot */
	float MagCurrent; /* Ofs: 0x1164 Size: 0x4 - FloatProperty ABP_DP28.ABP_DP28_C.MagCurrent */
	float MagTarget; /* Ofs: 0x1168 Size: 0x4 - FloatProperty ABP_DP28.ABP_DP28_C.MagTarget */
	float BipodAlpha; /* Ofs: 0x116C Size: 0x4 - FloatProperty ABP_DP28.ABP_DP28_C.BipodAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x658, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x6E8, value); }
	inline bool SetAnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x858, value); }
	inline bool SetAnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x910, value); }
	inline bool SetAnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x9C8, value); }
	inline bool SetAnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0xC48, value); }
	inline bool SetAnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0xEC8, value); }
	inline bool SetCharRef(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x1148, value); }
	inline bool SetGunRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x1150, value); }
	inline bool SetMagRot(t_structHelper inst, FRotator value) { inst.WriteOffset(0x1158, value); }
	inline bool SetMagCurrent(t_structHelper inst, float value) { inst.WriteOffset(0x1164, value); }
	inline bool SetMagTarget(t_structHelper inst, float value) { inst.WriteOffset(0x1168, value); }
	inline bool SetBipodAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x116C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_DP28_C = sizeof(UABP_DP28_C); // 4464
    static_assert(sizeof(UABP_DP28_C) == 0x1170, "Size of UABP_DP28_C is not correct.");
	auto constexpr UABP_DP28_C_UberGraphFrame_Offset = offsetof(UABP_DP28_C, UberGraphFrame);
	static_assert(UABP_DP28_C_UberGraphFrame_Offset == 0x458, "UABP_DP28_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_DP28_C_AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5_Offset = offsetof(UABP_DP28_C, AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5);
	static_assert(UABP_DP28_C_AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5_Offset == 0x460, "UABP_DP28_C::AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5 offset is not 460");
	auto constexpr UABP_DP28_C_AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293_Offset = offsetof(UABP_DP28_C, AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293);
	static_assert(UABP_DP28_C_AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293_Offset == 0x4a8, "UABP_DP28_C::AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293 offset is not 4a8");
	auto constexpr UABP_DP28_C_AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B_Offset = offsetof(UABP_DP28_C, AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B);
	static_assert(UABP_DP28_C_AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B_Offset == 0x4e0, "UABP_DP28_C::AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B offset is not 4e0");
	auto constexpr UABP_DP28_C_AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120_Offset = offsetof(UABP_DP28_C, AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120);
	static_assert(UABP_DP28_C_AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120_Offset == 0x540, "UABP_DP28_C::AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120 offset is not 540");
	auto constexpr UABP_DP28_C_AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8);
	static_assert(UABP_DP28_C_AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8_Offset == 0x5a0, "UABP_DP28_C::AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8 offset is not 5a0");
	auto constexpr UABP_DP28_C_AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845_Offset = offsetof(UABP_DP28_C, AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845);
	static_assert(UABP_DP28_C_AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845_Offset == 0x658, "UABP_DP28_C::AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845 offset is not 658");
	auto constexpr UABP_DP28_C_AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48);
	static_assert(UABP_DP28_C_AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48_Offset == 0x6a0, "UABP_DP28_C::AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48 offset is not 6a0");
	auto constexpr UABP_DP28_C_AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312);
	static_assert(UABP_DP28_C_AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312_Offset == 0x6e8, "UABP_DP28_C::AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312 offset is not 6e8");
	auto constexpr UABP_DP28_C_AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6);
	static_assert(UABP_DP28_C_AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6_Offset == 0x7a0, "UABP_DP28_C::AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6 offset is not 7a0");
	auto constexpr UABP_DP28_C_AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0);
	static_assert(UABP_DP28_C_AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0_Offset == 0x858, "UABP_DP28_C::AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0 offset is not 858");
	auto constexpr UABP_DP28_C_AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84_Offset = offsetof(UABP_DP28_C, AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84);
	static_assert(UABP_DP28_C_AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84_Offset == 0x910, "UABP_DP28_C::AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84 offset is not 910");
	auto constexpr UABP_DP28_C_AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3_Offset = offsetof(UABP_DP28_C, AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3);
	static_assert(UABP_DP28_C_AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3_Offset == 0x9c8, "UABP_DP28_C::AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3 offset is not 9c8");
	auto constexpr UABP_DP28_C_AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5_Offset = offsetof(UABP_DP28_C, AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5);
	static_assert(UABP_DP28_C_AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5_Offset == 0xc48, "UABP_DP28_C::AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5 offset is not c48");
	auto constexpr UABP_DP28_C_AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B_Offset = offsetof(UABP_DP28_C, AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B);
	static_assert(UABP_DP28_C_AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B_Offset == 0xec8, "UABP_DP28_C::AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B offset is not ec8");
	auto constexpr UABP_DP28_C_CharRef_Offset = offsetof(UABP_DP28_C, CharRef);
	static_assert(UABP_DP28_C_CharRef_Offset == 0x1148, "UABP_DP28_C::CharRef offset is not 1148");
	auto constexpr UABP_DP28_C_GunRef_Offset = offsetof(UABP_DP28_C, GunRef);
	static_assert(UABP_DP28_C_GunRef_Offset == 0x1150, "UABP_DP28_C::GunRef offset is not 1150");
	auto constexpr UABP_DP28_C_MagRot_Offset = offsetof(UABP_DP28_C, MagRot);
	static_assert(UABP_DP28_C_MagRot_Offset == 0x1158, "UABP_DP28_C::MagRot offset is not 1158");
	auto constexpr UABP_DP28_C_MagCurrent_Offset = offsetof(UABP_DP28_C, MagCurrent);
	static_assert(UABP_DP28_C_MagCurrent_Offset == 0x1164, "UABP_DP28_C::MagCurrent offset is not 1164");
	auto constexpr UABP_DP28_C_MagTarget_Offset = offsetof(UABP_DP28_C, MagTarget);
	static_assert(UABP_DP28_C_MagTarget_Offset == 0x1168, "UABP_DP28_C::MagTarget offset is not 1168");
	auto constexpr UABP_DP28_C_BipodAlpha_Offset = offsetof(UABP_DP28_C, BipodAlpha);
	static_assert(UABP_DP28_C_BipodAlpha_Offset == 0x116c, "UABP_DP28_C::BipodAlpha offset is not 116c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
