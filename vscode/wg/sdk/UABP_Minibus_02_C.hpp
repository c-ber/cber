#pragma once
#include "UTslVehicleAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_LookAt.hpp"
#include "FAnimNode_CopyBone.hpp"
#include "FAnimNode_RotationMultiplier.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_BoneDrivenController.hpp"
#include "FAnimNode_MeshSpaceRefPose.hpp"
#include "FAnimNode_WheelHandler.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_Root.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Minibus_02_C // Size: 0x22F8
	: public UTslVehicleAnimInstance // Size: 0x9A0
{
private:
	typedef UABP_Minibus_02_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117181); // id32("AnimBlueprintGeneratedClass ABP_Minibus_02.ABP_Minibus_02_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x9A0 Size: 0x8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.UberGraphFrame */
	uint8_t UnknownData9A8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9; /* Ofs: 0x9B0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9 */
	FAnimNode_LookAt AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163; /* Ofs: 0xB30 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163 */
	FAnimNode_LookAt AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6; /* Ofs: 0xCB0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6 */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4; /* Ofs: 0xE30 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4 */
	uint8_t UnknownDataED8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0; /* Ofs: 0xEE0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0 */
	FAnimNode_LookAt AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE; /* Ofs: 0x1060 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE */
	FAnimNode_LookAt AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4; /* Ofs: 0x11E0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4 */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC; /* Ofs: 0x1360 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F; /* Ofs: 0x1408 Size: 0x48 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9; /* Ofs: 0x1450 Size: 0xE8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7; /* Ofs: 0x1538 Size: 0xE8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7 */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB; /* Ofs: 0x1620 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686; /* Ofs: 0x16C8 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686 */
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF; /* Ofs: 0x1770 Size: 0x30 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF */
	FAnimNode_WheelHandler AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4; /* Ofs: 0x17A0 Size: 0x88 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D; /* Ofs: 0x1828 Size: 0xE8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876; /* Ofs: 0x1910 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876 */
	uint8_t UnknownData19B8[0x8];
	FAnimNode_LookAt AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144; /* Ofs: 0x19C0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF; /* Ofs: 0x1B40 Size: 0xE8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF */
	FAnimNode_CopyBone AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9; /* Ofs: 0x1C28 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9 */
	FAnimNode_LookAt AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F; /* Ofs: 0x1CD0 Size: 0x180 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4; /* Ofs: 0x1E50 Size: 0xB8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4 */
	FAnimNode_BoneDrivenController AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0; /* Ofs: 0x1F08 Size: 0xE8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A; /* Ofs: 0x1FF0 Size: 0xB8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A */
	FAnimNode_Root AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE; /* Ofs: 0x20A8 Size: 0x48 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2; /* Ofs: 0x20F0 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A; /* Ofs: 0x2198 Size: 0xB8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A */
	FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9; /* Ofs: 0x2250 Size: 0xA8 - StructProperty ABP_Minibus_02.ABP_Minibus_02_C.AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x9A0, value); }
	inline bool SetAnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x9B0, value); }
	inline bool SetAnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xB30, value); }
	inline bool SetAnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xCB0, value); }
	inline bool SetAnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0xE30, value); }
	inline bool SetAnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0xEE0, value); }
	inline bool SetAnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1060, value); }
	inline bool SetAnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x11E0, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x1360, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x1408, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1450, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1538, value); }
	inline bool SetAnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1620, value); }
	inline bool SetAnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x16C8, value); }
	inline bool SetAnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF(t_structHelper inst, FAnimNode_MeshSpaceRefPose value) { inst.WriteOffset(0x1770, value); }
	inline bool SetAnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4(t_structHelper inst, FAnimNode_WheelHandler value) { inst.WriteOffset(0x17A0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1828, value); }
	inline bool SetAnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1910, value); }
	inline bool SetAnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x19C0, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1B40, value); }
	inline bool SetAnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9(t_structHelper inst, FAnimNode_CopyBone value) { inst.WriteOffset(0x1C28, value); }
	inline bool SetAnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F(t_structHelper inst, FAnimNode_LookAt value) { inst.WriteOffset(0x1CD0, value); }
	inline bool SetAnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1E50, value); }
	inline bool SetAnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0(t_structHelper inst, FAnimNode_BoneDrivenController value) { inst.WriteOffset(0x1F08, value); }
	inline bool SetAnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1FF0, value); }
	inline bool SetAnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x20A8, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x20F0, value); }
	inline bool SetAnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x2198, value); }
	inline bool SetAnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9(t_structHelper inst, FAnimNode_RotationMultiplier value) { inst.WriteOffset(0x2250, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Minibus_02_C = sizeof(UABP_Minibus_02_C); // 8952
    static_assert(sizeof(UABP_Minibus_02_C) == 0x22F8, "Size of UABP_Minibus_02_C is not correct.");
	auto constexpr UABP_Minibus_02_C_UberGraphFrame_Offset = offsetof(UABP_Minibus_02_C, UberGraphFrame);
	static_assert(UABP_Minibus_02_C_UberGraphFrame_Offset == 0x9a0, "UABP_Minibus_02_C::UberGraphFrame offset is not 9a0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9_Offset == 0x9b0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_8D2C07ED42956E32BD480B9D5929A5C9 offset is not 9b0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163_Offset == 0xb30, "UABP_Minibus_02_C::AnimGraphNode_LookAt_D8555C8B43854AB020A903956C740163 offset is not b30");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6_Offset == 0xcb0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_FEA181334FF69DF22D11C68C249A32B6 offset is not cb0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4_Offset == 0xe30, "UABP_Minibus_02_C::AnimGraphNode_CopyBone_875D26424C3D08978285ECB4651169B4 offset is not e30");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0_Offset == 0xee0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_B07E860F44194B55ADBE44BBC8C5A1B0 offset is not ee0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE_Offset == 0x1060, "UABP_Minibus_02_C::AnimGraphNode_LookAt_8A7F0C334959C4290D6070A97CEB99FE offset is not 1060");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4_Offset == 0x11e0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_A63299B744D6C855E27EB48E349B5EF4 offset is not 11e0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC_Offset == 0x1360, "UABP_Minibus_02_C::AnimGraphNode_RotationMultiplier_D0A533F04C8C2E6C0DD5369469E2FBDC offset is not 1360");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F_Offset == 0x1408, "UABP_Minibus_02_C::AnimGraphNode_ComponentToLocalSpace_E066DDC945ECBD62B0C28E990434216F offset is not 1408");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9_Offset == 0x1450, "UABP_Minibus_02_C::AnimGraphNode_BoneDrivenController_06ED9B474D60FFF9DC9A7F940E0D9BE9 offset is not 1450");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7_Offset == 0x1538, "UABP_Minibus_02_C::AnimGraphNode_BoneDrivenController_5C8F9810481FF05C2DCAE4ADD241C4B7 offset is not 1538");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB_Offset == 0x1620, "UABP_Minibus_02_C::AnimGraphNode_CopyBone_8B2228E043E9FC462066978E8A8EE4BB offset is not 1620");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686_Offset == 0x16c8, "UABP_Minibus_02_C::AnimGraphNode_CopyBone_1276E0DC4015C97C5D3F37844B8D1686 offset is not 16c8");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF_Offset == 0x1770, "UABP_Minibus_02_C::AnimGraphNode_MeshRefPose_69EE3D894F4C4C8FFD6388B43BE483EF offset is not 1770");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4_Offset == 0x17a0, "UABP_Minibus_02_C::AnimGraphNode_WheelHandler_A6DA635A491B1C06D3DE65AC04D3D5D4 offset is not 17a0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D_Offset == 0x1828, "UABP_Minibus_02_C::AnimGraphNode_BoneDrivenController_34CAB707440925E71468C39AAA3AA94D offset is not 1828");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876_Offset == 0x1910, "UABP_Minibus_02_C::AnimGraphNode_CopyBone_BD31D84042E55E476EEDFC90835CE876 offset is not 1910");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144_Offset == 0x19c0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_E14179114E31ED6A032541BC4E17E144 offset is not 19c0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF_Offset == 0x1b40, "UABP_Minibus_02_C::AnimGraphNode_BoneDrivenController_EF50B88D4257550FFBB8ACBDA37BAABF offset is not 1b40");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9_Offset == 0x1c28, "UABP_Minibus_02_C::AnimGraphNode_CopyBone_97154BC34D6E19330AF0DB9BBA080AF9 offset is not 1c28");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F_Offset == 0x1cd0, "UABP_Minibus_02_C::AnimGraphNode_LookAt_A99EC0614BFC1FB69AFA7BA63B678A6F offset is not 1cd0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4_Offset == 0x1e50, "UABP_Minibus_02_C::AnimGraphNode_ModifyBone_812E868147765E776F34208AEED20FA4 offset is not 1e50");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0_Offset == 0x1f08, "UABP_Minibus_02_C::AnimGraphNode_BoneDrivenController_B2CE7FFA4D6F01489C403A98E75050B0 offset is not 1f08");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A_Offset == 0x1ff0, "UABP_Minibus_02_C::AnimGraphNode_ModifyBone_FB4A2A984175B060C0CF3187169DD26A offset is not 1ff0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE_Offset == 0x20a8, "UABP_Minibus_02_C::AnimGraphNode_Root_79ABEBC2457C1B36C057E39DE6BE85EE offset is not 20a8");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2_Offset == 0x20f0, "UABP_Minibus_02_C::AnimGraphNode_RotationMultiplier_763FA2D0498911D9FE851F818869AFE2 offset is not 20f0");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A_Offset == 0x2198, "UABP_Minibus_02_C::AnimGraphNode_ModifyBone_AD8AF71748884FB07160F4B6BDCE347A offset is not 2198");
	auto constexpr UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9_Offset = offsetof(UABP_Minibus_02_C, AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9);
	static_assert(UABP_Minibus_02_C_AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9_Offset == 0x2250, "UABP_Minibus_02_C::AnimGraphNode_RotationMultiplier_87FBC4E745D7881E58FC7AA36C5B7BE9 offset is not 2250");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
