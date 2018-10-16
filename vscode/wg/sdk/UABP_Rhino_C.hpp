#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Rhino_C // Size: 0xBF8
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Rhino_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130951); // id32("AnimBlueprintGeneratedClass ABP_Rhino.ABP_Rhino_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Rhino.ABP_Rhino_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316 */
	FAnimNode_Slot AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F; /* Ofs: 0x4E0 Size: 0x60 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F */
	FAnimNode_Slot AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D; /* Ofs: 0x540 Size: 0x60 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2; /* Ofs: 0x5A0 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06; /* Ofs: 0x658 Size: 0x48 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5; /* Ofs: 0x6A0 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723; /* Ofs: 0x758 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A; /* Ofs: 0x810 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33; /* Ofs: 0x8C8 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069; /* Ofs: 0x980 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271; /* Ofs: 0xA38 Size: 0x48 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270; /* Ofs: 0xA80 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13; /* Ofs: 0xB38 Size: 0xB8 - StructProperty ABP_Rhino.ABP_Rhino_C.AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13 */
	float HideBulletAlpha; /* Ofs: 0xBF0 Size: 0x4 - FloatProperty ABP_Rhino.ABP_Rhino_C.HideBulletAlpha */
	float HideSpeedloaderAlpha; /* Ofs: 0xBF4 Size: 0x4 - FloatProperty ABP_Rhino.ABP_Rhino_C.HideSpeedloaderAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x540, value); }
	inline bool SetAnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x658, value); }
	inline bool SetAnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetAnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x758, value); }
	inline bool SetAnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x810, value); }
	inline bool SetAnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetAnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x980, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0xA38, value); }
	inline bool SetAnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xA80, value); }
	inline bool SetAnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xB38, value); }
	inline bool SetHideBulletAlpha(t_structHelper inst, float value) { inst.WriteOffset(0xBF0, value); }
	inline bool SetHideSpeedloaderAlpha(t_structHelper inst, float value) { inst.WriteOffset(0xBF4, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Rhino_C = sizeof(UABP_Rhino_C); // 3064
    static_assert(sizeof(UABP_Rhino_C) == 0xBF8, "Size of UABP_Rhino_C is not correct.");
	auto constexpr UABP_Rhino_C_UberGraphFrame_Offset = offsetof(UABP_Rhino_C, UberGraphFrame);
	static_assert(UABP_Rhino_C_UberGraphFrame_Offset == 0x458, "UABP_Rhino_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Rhino_C_AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E);
	static_assert(UABP_Rhino_C_AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E_Offset == 0x460, "UABP_Rhino_C::AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E offset is not 460");
	auto constexpr UABP_Rhino_C_AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316);
	static_assert(UABP_Rhino_C_AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316_Offset == 0x4a8, "UABP_Rhino_C::AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316 offset is not 4a8");
	auto constexpr UABP_Rhino_C_AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F);
	static_assert(UABP_Rhino_C_AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F_Offset == 0x4e0, "UABP_Rhino_C::AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F offset is not 4e0");
	auto constexpr UABP_Rhino_C_AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D);
	static_assert(UABP_Rhino_C_AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D_Offset == 0x540, "UABP_Rhino_C::AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D offset is not 540");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2_Offset == 0x5a0, "UABP_Rhino_C::AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2 offset is not 5a0");
	auto constexpr UABP_Rhino_C_AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06);
	static_assert(UABP_Rhino_C_AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06_Offset == 0x658, "UABP_Rhino_C::AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06 offset is not 658");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5_Offset == 0x6a0, "UABP_Rhino_C::AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5 offset is not 6a0");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723_Offset == 0x758, "UABP_Rhino_C::AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723 offset is not 758");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A_Offset == 0x810, "UABP_Rhino_C::AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A offset is not 810");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33_Offset == 0x8c8, "UABP_Rhino_C::AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33 offset is not 8c8");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069_Offset == 0x980, "UABP_Rhino_C::AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069 offset is not 980");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271);
	static_assert(UABP_Rhino_C_AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271_Offset == 0xa38, "UABP_Rhino_C::AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271 offset is not a38");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270_Offset == 0xa80, "UABP_Rhino_C::AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270 offset is not a80");
	auto constexpr UABP_Rhino_C_AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13_Offset = offsetof(UABP_Rhino_C, AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13);
	static_assert(UABP_Rhino_C_AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13_Offset == 0xb38, "UABP_Rhino_C::AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13 offset is not b38");
	auto constexpr UABP_Rhino_C_HideBulletAlpha_Offset = offsetof(UABP_Rhino_C, HideBulletAlpha);
	static_assert(UABP_Rhino_C_HideBulletAlpha_Offset == 0xbf0, "UABP_Rhino_C::HideBulletAlpha offset is not bf0");
	auto constexpr UABP_Rhino_C_HideSpeedloaderAlpha_Offset = offsetof(UABP_Rhino_C, HideSpeedloaderAlpha);
	static_assert(UABP_Rhino_C_HideSpeedloaderAlpha_Offset == 0xbf4, "UABP_Rhino_C::HideSpeedloaderAlpha offset is not bf4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
