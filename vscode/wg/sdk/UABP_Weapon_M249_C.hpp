#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_AnimDynamics.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FVector.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_M249_C // Size: 0x1644
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_M249_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(134396); // id32("AnimBlueprintGeneratedClass ABP_Weapon_M249.ABP_Weapon_M249_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.UberGraphFrame */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B; /* Ofs: 0x4A8 Size: 0x48 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B */
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426; /* Ofs: 0x4F0 Size: 0x280 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426 */
	FAnimNode_Slot AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4; /* Ofs: 0x770 Size: 0x60 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4 */
	FAnimNode_Slot AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947; /* Ofs: 0x7D0 Size: 0x60 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947 */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F; /* Ofs: 0x830 Size: 0x38 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F */
	FAnimNode_Root AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF; /* Ofs: 0x868 Size: 0x48 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3; /* Ofs: 0x8B0 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F; /* Ofs: 0x968 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8; /* Ofs: 0xA20 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9; /* Ofs: 0xAD8 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F; /* Ofs: 0xB90 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8; /* Ofs: 0xC48 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796; /* Ofs: 0xD00 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7; /* Ofs: 0xDB8 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E; /* Ofs: 0xE70 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4; /* Ofs: 0xF28 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161; /* Ofs: 0xFE0 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF; /* Ofs: 0x1098 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1; /* Ofs: 0x1150 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B; /* Ofs: 0x1208 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3; /* Ofs: 0x12C0 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578; /* Ofs: 0x1378 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A; /* Ofs: 0x1430 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563; /* Ofs: 0x14E8 Size: 0xB8 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563 */
	FVector EF; /* Ofs: 0x15A0 Size: 0xC - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.EF */
	float Alpha; /* Ofs: 0x15AC Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha */
	float Alpha_B_2; /* Ofs: 0x15B0 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_2 */
	float Alpha_B_3; /* Ofs: 0x15B4 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_3 */
	float Alpha_B_4; /* Ofs: 0x15B8 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_4 */
	float Alpha_B_5; /* Ofs: 0x15BC Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_5 */
	float Alpha_B_6; /* Ofs: 0x15C0 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_6 */
	float Alpha_B_7; /* Ofs: 0x15C4 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_7 */
	float Alpha_B_8; /* Ofs: 0x15C8 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_8 */
	float Alpha_B_9; /* Ofs: 0x15CC Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_9 */
	float Alpha_B_10; /* Ofs: 0x15D0 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_10 */
	float Alpha_B_11; /* Ofs: 0x15D4 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_11 */
	float Alpha_B_12; /* Ofs: 0x15D8 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_12 */
	float Alpha_B_13; /* Ofs: 0x15DC Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_13 */
	float Alpha_B_14; /* Ofs: 0x15E0 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_14 */
	float Alpha_B_15; /* Ofs: 0x15E4 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_15 */
	float Alpha_B_16; /* Ofs: 0x15E8 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.Alpha_B_16 */
	int32_t CurrentBulletCount; /* Ofs: 0x15EC Size: 0x4 - IntProperty ABP_Weapon_M249.ABP_Weapon_M249_C.CurrentBulletCount */
	ExternalPtr<struct UTslWeapon_Gun> GunRef; /* Ofs: 0x15F0 Size: 0x8 - ObjectProperty ABP_Weapon_M249.ABP_Weapon_M249_C.GunRef */
	ExternalPtr<struct UTslCharacter> CharRef; /* Ofs: 0x15F8 Size: 0x8 - ObjectProperty ABP_Weapon_M249.ABP_Weapon_M249_C.CharRef */
	float FollowLHandAlpha; /* Ofs: 0x1600 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.FollowLHandAlpha */
	uint8_t UnknownData1604[0xC];
	FTransform ItemLPosition; /* Ofs: 0x1610 Size: 0x30 - StructProperty ABP_Weapon_M249.ABP_Weapon_M249_C.ItemLPosition */
	float BipodAlpha; /* Ofs: 0x1640 Size: 0x4 - FloatProperty ABP_Weapon_M249.ABP_Weapon_M249_C.BipodAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426(t_structHelper inst, FAnimNode_AnimDynamics value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x770, value); }
	inline bool SetAnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x7D0, value); }
	inline bool SetAnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x830, value); }
	inline bool SetAnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x868, value); }
	inline bool SetAnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetAnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x968, value); }
	inline bool SetAnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xA20, value); }
	inline bool SetAnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xAD8, value); }
	inline bool SetAnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xB90, value); }
	inline bool SetAnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xC48, value); }
	inline bool SetAnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xD00, value); }
	inline bool SetAnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xDB8, value); }
	inline bool SetAnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xE70, value); }
	inline bool SetAnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xF28, value); }
	inline bool SetAnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0xFE0, value); }
	inline bool SetAnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1098, value); }
	inline bool SetAnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1150, value); }
	inline bool SetAnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1208, value); }
	inline bool SetAnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x12C0, value); }
	inline bool SetAnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1378, value); }
	inline bool SetAnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x1430, value); }
	inline bool SetAnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x14E8, value); }
	inline bool SetEF(t_structHelper inst, FVector value) { inst.WriteOffset(0x15A0, value); }
	inline bool SetAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x15AC, value); }
	inline bool SetAlpha_B_2(t_structHelper inst, float value) { inst.WriteOffset(0x15B0, value); }
	inline bool SetAlpha_B_3(t_structHelper inst, float value) { inst.WriteOffset(0x15B4, value); }
	inline bool SetAlpha_B_4(t_structHelper inst, float value) { inst.WriteOffset(0x15B8, value); }
	inline bool SetAlpha_B_5(t_structHelper inst, float value) { inst.WriteOffset(0x15BC, value); }
	inline bool SetAlpha_B_6(t_structHelper inst, float value) { inst.WriteOffset(0x15C0, value); }
	inline bool SetAlpha_B_7(t_structHelper inst, float value) { inst.WriteOffset(0x15C4, value); }
	inline bool SetAlpha_B_8(t_structHelper inst, float value) { inst.WriteOffset(0x15C8, value); }
	inline bool SetAlpha_B_9(t_structHelper inst, float value) { inst.WriteOffset(0x15CC, value); }
	inline bool SetAlpha_B_10(t_structHelper inst, float value) { inst.WriteOffset(0x15D0, value); }
	inline bool SetAlpha_B_11(t_structHelper inst, float value) { inst.WriteOffset(0x15D4, value); }
	inline bool SetAlpha_B_12(t_structHelper inst, float value) { inst.WriteOffset(0x15D8, value); }
	inline bool SetAlpha_B_13(t_structHelper inst, float value) { inst.WriteOffset(0x15DC, value); }
	inline bool SetAlpha_B_14(t_structHelper inst, float value) { inst.WriteOffset(0x15E0, value); }
	inline bool SetAlpha_B_15(t_structHelper inst, float value) { inst.WriteOffset(0x15E4, value); }
	inline bool SetAlpha_B_16(t_structHelper inst, float value) { inst.WriteOffset(0x15E8, value); }
	inline bool SetCurrentBulletCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x15EC, value); }
	inline bool SetGunRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x15F0, value); }
	inline bool SetCharRef(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x15F8, value); }
	inline bool SetFollowLHandAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x1600, value); }
	inline bool SetItemLPosition(t_structHelper inst, FTransform value) { inst.WriteOffset(0x1610, value); }
	inline bool SetBipodAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x1640, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_M249_C = sizeof(UABP_Weapon_M249_C); // 5700
    static_assert(sizeof(UABP_Weapon_M249_C) == 0x1644, "Size of UABP_Weapon_M249_C is not correct.");
	auto constexpr UABP_Weapon_M249_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_M249_C, UberGraphFrame);
	static_assert(UABP_Weapon_M249_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_M249_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7_Offset == 0x460, "UABP_Weapon_M249_C::AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7 offset is not 460");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B_Offset == 0x4a8, "UABP_Weapon_M249_C::AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B offset is not 4a8");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426_Offset == 0x4f0, "UABP_Weapon_M249_C::AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426 offset is not 4f0");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4_Offset == 0x770, "UABP_Weapon_M249_C::AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4 offset is not 770");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947_Offset == 0x7d0, "UABP_Weapon_M249_C::AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947 offset is not 7d0");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F_Offset == 0x830, "UABP_Weapon_M249_C::AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F offset is not 830");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF_Offset == 0x868, "UABP_Weapon_M249_C::AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF offset is not 868");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3_Offset == 0x8b0, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3 offset is not 8b0");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F_Offset == 0x968, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F offset is not 968");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8_Offset == 0xa20, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8 offset is not a20");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9_Offset == 0xad8, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9 offset is not ad8");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F_Offset == 0xb90, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F offset is not b90");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8_Offset == 0xc48, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8 offset is not c48");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796_Offset == 0xd00, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796 offset is not d00");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7_Offset == 0xdb8, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7 offset is not db8");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E_Offset == 0xe70, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E offset is not e70");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4_Offset == 0xf28, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4 offset is not f28");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161_Offset == 0xfe0, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161 offset is not fe0");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF_Offset == 0x1098, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF offset is not 1098");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1_Offset == 0x1150, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1 offset is not 1150");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B_Offset == 0x1208, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B offset is not 1208");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3_Offset == 0x12c0, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3 offset is not 12c0");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578_Offset == 0x1378, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578 offset is not 1378");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A_Offset == 0x1430, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A offset is not 1430");
	auto constexpr UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563_Offset = offsetof(UABP_Weapon_M249_C, AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563);
	static_assert(UABP_Weapon_M249_C_AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563_Offset == 0x14e8, "UABP_Weapon_M249_C::AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563 offset is not 14e8");
	auto constexpr UABP_Weapon_M249_C_EF_Offset = offsetof(UABP_Weapon_M249_C, EF);
	static_assert(UABP_Weapon_M249_C_EF_Offset == 0x15a0, "UABP_Weapon_M249_C::EF offset is not 15a0");
	auto constexpr UABP_Weapon_M249_C_Alpha_Offset = offsetof(UABP_Weapon_M249_C, Alpha);
	static_assert(UABP_Weapon_M249_C_Alpha_Offset == 0x15ac, "UABP_Weapon_M249_C::Alpha offset is not 15ac");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_2_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_2);
	static_assert(UABP_Weapon_M249_C_Alpha_B_2_Offset == 0x15b0, "UABP_Weapon_M249_C::Alpha_B_2 offset is not 15b0");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_3_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_3);
	static_assert(UABP_Weapon_M249_C_Alpha_B_3_Offset == 0x15b4, "UABP_Weapon_M249_C::Alpha_B_3 offset is not 15b4");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_4_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_4);
	static_assert(UABP_Weapon_M249_C_Alpha_B_4_Offset == 0x15b8, "UABP_Weapon_M249_C::Alpha_B_4 offset is not 15b8");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_5_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_5);
	static_assert(UABP_Weapon_M249_C_Alpha_B_5_Offset == 0x15bc, "UABP_Weapon_M249_C::Alpha_B_5 offset is not 15bc");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_6_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_6);
	static_assert(UABP_Weapon_M249_C_Alpha_B_6_Offset == 0x15c0, "UABP_Weapon_M249_C::Alpha_B_6 offset is not 15c0");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_7_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_7);
	static_assert(UABP_Weapon_M249_C_Alpha_B_7_Offset == 0x15c4, "UABP_Weapon_M249_C::Alpha_B_7 offset is not 15c4");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_8_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_8);
	static_assert(UABP_Weapon_M249_C_Alpha_B_8_Offset == 0x15c8, "UABP_Weapon_M249_C::Alpha_B_8 offset is not 15c8");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_9_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_9);
	static_assert(UABP_Weapon_M249_C_Alpha_B_9_Offset == 0x15cc, "UABP_Weapon_M249_C::Alpha_B_9 offset is not 15cc");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_10_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_10);
	static_assert(UABP_Weapon_M249_C_Alpha_B_10_Offset == 0x15d0, "UABP_Weapon_M249_C::Alpha_B_10 offset is not 15d0");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_11_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_11);
	static_assert(UABP_Weapon_M249_C_Alpha_B_11_Offset == 0x15d4, "UABP_Weapon_M249_C::Alpha_B_11 offset is not 15d4");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_12_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_12);
	static_assert(UABP_Weapon_M249_C_Alpha_B_12_Offset == 0x15d8, "UABP_Weapon_M249_C::Alpha_B_12 offset is not 15d8");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_13_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_13);
	static_assert(UABP_Weapon_M249_C_Alpha_B_13_Offset == 0x15dc, "UABP_Weapon_M249_C::Alpha_B_13 offset is not 15dc");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_14_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_14);
	static_assert(UABP_Weapon_M249_C_Alpha_B_14_Offset == 0x15e0, "UABP_Weapon_M249_C::Alpha_B_14 offset is not 15e0");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_15_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_15);
	static_assert(UABP_Weapon_M249_C_Alpha_B_15_Offset == 0x15e4, "UABP_Weapon_M249_C::Alpha_B_15 offset is not 15e4");
	auto constexpr UABP_Weapon_M249_C_Alpha_B_16_Offset = offsetof(UABP_Weapon_M249_C, Alpha_B_16);
	static_assert(UABP_Weapon_M249_C_Alpha_B_16_Offset == 0x15e8, "UABP_Weapon_M249_C::Alpha_B_16 offset is not 15e8");
	auto constexpr UABP_Weapon_M249_C_CurrentBulletCount_Offset = offsetof(UABP_Weapon_M249_C, CurrentBulletCount);
	static_assert(UABP_Weapon_M249_C_CurrentBulletCount_Offset == 0x15ec, "UABP_Weapon_M249_C::CurrentBulletCount offset is not 15ec");
	auto constexpr UABP_Weapon_M249_C_GunRef_Offset = offsetof(UABP_Weapon_M249_C, GunRef);
	static_assert(UABP_Weapon_M249_C_GunRef_Offset == 0x15f0, "UABP_Weapon_M249_C::GunRef offset is not 15f0");
	auto constexpr UABP_Weapon_M249_C_CharRef_Offset = offsetof(UABP_Weapon_M249_C, CharRef);
	static_assert(UABP_Weapon_M249_C_CharRef_Offset == 0x15f8, "UABP_Weapon_M249_C::CharRef offset is not 15f8");
	auto constexpr UABP_Weapon_M249_C_FollowLHandAlpha_Offset = offsetof(UABP_Weapon_M249_C, FollowLHandAlpha);
	static_assert(UABP_Weapon_M249_C_FollowLHandAlpha_Offset == 0x1600, "UABP_Weapon_M249_C::FollowLHandAlpha offset is not 1600");
	auto constexpr UABP_Weapon_M249_C_ItemLPosition_Offset = offsetof(UABP_Weapon_M249_C, ItemLPosition);
	static_assert(UABP_Weapon_M249_C_ItemLPosition_Offset == 0x1610, "UABP_Weapon_M249_C::ItemLPosition offset is not 1610");
	auto constexpr UABP_Weapon_M249_C_BipodAlpha_Offset = offsetof(UABP_Weapon_M249_C, BipodAlpha);
	static_assert(UABP_Weapon_M249_C_BipodAlpha_Offset == 0x1640, "UABP_Weapon_M249_C::BipodAlpha offset is not 1640");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
