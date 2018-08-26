#pragma once
#include "UTslGunAnimInstance.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FAnimNode_Root.hpp"
#include "FAnimNode_Slot.hpp"
#include "FAnimNode_ModifyBone.hpp"
#include "FAnimNode_ConvertLocalToComponentSpace.hpp"
#include "FAnimNode_ConvertComponentToLocalSpace.hpp"
#include "FAnimNode_SequencePlayer.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UABP_Weapon_Kar98k_C // Size: 0x7E8
	: public UTslGunAnimInstance // Size: 0x458
{
private:
	typedef UABP_Weapon_Kar98k_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(101666); // id32("AnimBlueprintGeneratedClass ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.UberGraphFrame */
	FAnimNode_Root AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D; /* Ofs: 0x460 Size: 0x48 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D */
	FAnimNode_Slot AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40; /* Ofs: 0x4A8 Size: 0x60 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40 */
	FAnimNode_Slot AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299; /* Ofs: 0x508 Size: 0x60 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B; /* Ofs: 0x568 Size: 0xB8 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B */
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483; /* Ofs: 0x620 Size: 0x48 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483 */
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94; /* Ofs: 0x668 Size: 0x48 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94 */
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B; /* Ofs: 0x6B0 Size: 0xB8 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B */
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C; /* Ofs: 0x768 Size: 0x70 - StructProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C */
	float ClipShowAlpha; /* Ofs: 0x7D8 Size: 0x4 - FloatProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.ClipShowAlpha */
	float MagRootAlpha; /* Ofs: 0x7DC Size: 0x4 - FloatProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.MagRootAlpha */
	ExternalPtr<struct UTslWeapon_Gun> GunRef; /* Ofs: 0x7E0 Size: 0x8 - ObjectProperty ABP_Weapon_Kar98k.ABP_Weapon_Kar98k_C.GunRef */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
	inline bool SetAnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D(t_structHelper inst, FAnimNode_Root value) { inst.WriteOffset(0x460, value); }
	inline bool SetAnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299(t_structHelper inst, FAnimNode_Slot value) { inst.WriteOffset(0x508, value); }
	inline bool SetAnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x568, value); }
	inline bool SetAnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483(t_structHelper inst, FAnimNode_ConvertLocalToComponentSpace value) { inst.WriteOffset(0x620, value); }
	inline bool SetAnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94(t_structHelper inst, FAnimNode_ConvertComponentToLocalSpace value) { inst.WriteOffset(0x668, value); }
	inline bool SetAnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B(t_structHelper inst, FAnimNode_ModifyBone value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetAnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C(t_structHelper inst, FAnimNode_SequencePlayer value) { inst.WriteOffset(0x768, value); }
	inline bool SetClipShowAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x7D8, value); }
	inline bool SetMagRootAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x7DC, value); }
	inline bool SetGunRef(t_structHelper inst, ExternalPtr<struct UTslWeapon_Gun> value) { inst.WriteOffset(0x7E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUABP_Weapon_Kar98k_C = sizeof(UABP_Weapon_Kar98k_C); // 2024
    static_assert(sizeof(UABP_Weapon_Kar98k_C) == 0x7E8, "Size of UABP_Weapon_Kar98k_C is not correct.");
	auto constexpr UABP_Weapon_Kar98k_C_UberGraphFrame_Offset = offsetof(UABP_Weapon_Kar98k_C, UberGraphFrame);
	static_assert(UABP_Weapon_Kar98k_C_UberGraphFrame_Offset == 0x458, "UABP_Weapon_Kar98k_C::UberGraphFrame offset is not 458");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D_Offset == 0x460, "UABP_Weapon_Kar98k_C::AnimGraphNode_Root_54202F4D4356180788A09FB6755FC87D offset is not 460");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40_Offset == 0x4a8, "UABP_Weapon_Kar98k_C::AnimGraphNode_Slot_71D460D54075C36AA5C2019A71AA4D40 offset is not 4a8");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299_Offset == 0x508, "UABP_Weapon_Kar98k_C::AnimGraphNode_Slot_62AF327940874CF70C37908CEEB9A299 offset is not 508");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B_Offset == 0x568, "UABP_Weapon_Kar98k_C::AnimGraphNode_ModifyBone_535B35864D6D73BE83E3B0B9F7682E1B offset is not 568");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483_Offset == 0x620, "UABP_Weapon_Kar98k_C::AnimGraphNode_LocalToComponentSpace_3E2088744337103ED0574AB818B09483 offset is not 620");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94_Offset == 0x668, "UABP_Weapon_Kar98k_C::AnimGraphNode_ComponentToLocalSpace_51E3C84E43C0E8972AFE0B973181BE94 offset is not 668");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B_Offset == 0x6b0, "UABP_Weapon_Kar98k_C::AnimGraphNode_ModifyBone_F04618AC46C758D4557155A3D6C5281B offset is not 6b0");
	auto constexpr UABP_Weapon_Kar98k_C_AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C_Offset = offsetof(UABP_Weapon_Kar98k_C, AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C);
	static_assert(UABP_Weapon_Kar98k_C_AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C_Offset == 0x768, "UABP_Weapon_Kar98k_C::AnimGraphNode_SequencePlayer_21737C5C46F8C2B4D22D6AA0A7564D0C offset is not 768");
	auto constexpr UABP_Weapon_Kar98k_C_ClipShowAlpha_Offset = offsetof(UABP_Weapon_Kar98k_C, ClipShowAlpha);
	static_assert(UABP_Weapon_Kar98k_C_ClipShowAlpha_Offset == 0x7d8, "UABP_Weapon_Kar98k_C::ClipShowAlpha offset is not 7d8");
	auto constexpr UABP_Weapon_Kar98k_C_MagRootAlpha_Offset = offsetof(UABP_Weapon_Kar98k_C, MagRootAlpha);
	static_assert(UABP_Weapon_Kar98k_C_MagRootAlpha_Offset == 0x7dc, "UABP_Weapon_Kar98k_C::MagRootAlpha offset is not 7dc");
	auto constexpr UABP_Weapon_Kar98k_C_GunRef_Offset = offsetof(UABP_Weapon_Kar98k_C, GunRef);
	static_assert(UABP_Weapon_Kar98k_C_GunRef_Offset == 0x7e0, "UABP_Weapon_Kar98k_C::GunRef offset is not 7e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
