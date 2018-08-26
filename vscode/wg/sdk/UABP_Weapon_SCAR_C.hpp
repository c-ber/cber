#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_RefPose.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_Slot.hpp"
#include "FWeaponAttachmentAssetData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_SCAR_C // Size: 0x848
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_SCAR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(132490); // id32("AnimBlueprintGeneratedClass ABP_Weapon_SCAR.ABP_Weapon_SCAR_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF */
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969; /* Ofs: 0x4A8 Size: 0x38 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969 */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77; /* Ofs: 0x4E0 Size: 0x48 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092; /* Ofs: 0x528 Size: 0xB8 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372; /* Ofs: 0x5E0 Size: 0xB8 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202; /* Ofs: 0x698 Size: 0x48 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202 */
	FAnimNode_Slot AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB; /* Ofs: 0x6E0 Size: 0x60 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB */
	FAnimNode_Slot AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D; /* Ofs: 0x740 Size: 0x60 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D */
	FAnimNode_Slot AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4; /* Ofs: 0x7A0 Size: 0x60 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4 */
	ExternalPtr<struct UTslWeapon_Gun> ActorRef; /* Ofs: 0x800 Size: 0x8 - ObjectProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.ActorRef */
	float SightAlpha; /* Ofs: 0x808 Size: 0x4 - FloatProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.SightAlpha */
	uint8_t UnknownData80C[0x4];
	FWeaponAttachmentAssetData SightSlot; /* Ofs: 0x810 Size: 0x38 - StructProperty ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.SightSlot */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969(t_structHelper inst, FAnimNode_RefPose value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetAnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x528, value); }
	inline bool SetAnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x698, value); }
	inline bool SetAnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetAnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x740, value); }
	inline bool SetAnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetActorRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x800, value); }
	inline bool SetSightAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x808, value); }
	inline bool SetSightSlot(t_structHelper inst, FWeaponAttachmentAssetData value) { inst.WriteOffset(0x810, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_SCAR_C = sizeof(UABP_Weapon_SCAR_C); // 2120
    static_assert(sizeof(UABP_Weapon_SCAR_C) == 0x848, "Size of UABP_Weapon_SCAR_C is not correct.");
	auto constexpr UABP_Weapon_SCAR_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_SCAR_C, UberGraphFrame);
	static_assert(UABP_Weapon_SCAR_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_SCAR_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF_Offset == 0x460, "UABP_Weapon_SCAR_C::AnimGraphNode_Root_4AD12C7B4569D13FDBABE5B1B4FC97BF offset is not 460");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969_Offset == 0x4a8, "UABP_Weapon_SCAR_C::AnimGraphNode_LocalRefPose_1A8610904952530A3A9840A210AA3969 offset is not 4a8");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77_Offset == 0x4e0, "UABP_Weapon_SCAR_C::AnimGraphNode_LocalToComponentSpace_D3ED925D405286BADE50B2A00548AB77 offset is not 4e0");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092_Offset == 0x528, "UABP_Weapon_SCAR_C::AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092 offset is not 528");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372_Offset == 0x5e0, "UABP_Weapon_SCAR_C::AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372 offset is not 5e0");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202_Offset == 0x698, "UABP_Weapon_SCAR_C::AnimGraphNode_ComponentToLocalSpace_279025EC4221705779C73A9DB0475202 offset is not 698");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB_Offset == 0x6e0, "UABP_Weapon_SCAR_C::AnimGraphNode_Slot_D5CE792943A6E2265BCD3688C44B93EB offset is not 6e0");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D_Offset == 0x740, "UABP_Weapon_SCAR_C::AnimGraphNode_Slot_0350688442D5C010D9B123B442F6FF7D offset is not 740");
	auto constexpr UABP_Weapon_SCAR_C_AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4_Offset = offsetof(UABP_Weapon_SCAR_C, AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4);
	static_assert(UABP_Weapon_SCAR_C_AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4_Offset == 0x7a0, "UABP_Weapon_SCAR_C::AnimGraphNode_Slot_A094B8004B7F040A4AD36F9850DC51A4 offset is not 7a0");
	auto constexpr UABP_Weapon_SCAR_C_ActorRef_Offset = offsetof(UABP_Weapon_SCAR_C, ActorRef);
	static_assert(UABP_Weapon_SCAR_C_ActorRef_Offset == 0x800, "UABP_Weapon_SCAR_C::ActorRef offset is not 800");
	auto constexpr UABP_Weapon_SCAR_C_SightAlpha_Offset = offsetof(UABP_Weapon_SCAR_C, SightAlpha);
	static_assert(UABP_Weapon_SCAR_C_SightAlpha_Offset == 0x808, "UABP_Weapon_SCAR_C::SightAlpha offset is not 808");
	auto constexpr UABP_Weapon_SCAR_C_SightSlot_Offset = offsetof(UABP_Weapon_SCAR_C, SightSlot);
	static_assert(UABP_Weapon_SCAR_C_SightSlot_Offset == 0x810, "UABP_Weapon_SCAR_C::SightSlot offset is not 810");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
