#pragma once
#include "UItem.hpp"
#include "EEquipSlotID.hpp"
#include "EDurabilityConsumeType.hpp"
#include "FCustomizableObjectIdentifier.hpp"
#include "FCustomizableObjectIdPair.hpp"
#include "EEquipableItemSoundGroup.hpp"
#include "EEquipableItemSoundType.hpp"
#include "ESlotOffsetType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEquipableItem // Size: 0x2A8
	: public UItem // Size: 0x1C8
{
private:
	typedef UEquipableItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1907); // id32("Class TslGame.EquipableItem")
		return ptr;
	}
	TEnumAsByte<enum EEquipSlotID> EquipSlotID; /* Ofs: 0x1C8 Size: 0x1 - EnumProperty TslGame.EquipableItem.EquipSlotID */
	uint8_t UnknownData1C9[0x3];
	float SpaceExtension; /* Ofs: 0x1CC Size: 0x4 - FloatProperty TslGame.EquipableItem.SpaceExtension */
	float DamageReductionRate; /* Ofs: 0x1D0 Size: 0x4 - FloatProperty TslGame.EquipableItem.DamageReductionRate */
	float DurabilityMax; /* Ofs: 0x1D4 Size: 0x4 - FloatProperty TslGame.EquipableItem.DurabilityMax */
	uint8_t boolField1D8;
	uint8_t UnknownData1D9[0x3];
	float Durability; /* Ofs: 0x1DC Size: 0x4 - FloatProperty TslGame.EquipableItem.Durability */
	TEnumAsByte<enum EDurabilityConsumeType> DurabilityConsumeType; /* Ofs: 0x1E0 Size: 0x1 - EnumProperty TslGame.EquipableItem.DurabilityConsumeType */
	uint8_t UnknownData1E1[0x7];
	FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; /* Ofs: 0x1E8 Size: 0x30 - StructProperty TslGame.EquipableItem.CustomizableObjectIdentifierForMale */
	FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; /* Ofs: 0x218 Size: 0x30 - StructProperty TslGame.EquipableItem.CustomizableObjectIdentifierForFemale */
	FCustomizableObjectIdPair CustomizableObjectOriginalSkin; /* Ofs: 0x248 Size: 0x20 - StructProperty TslGame.EquipableItem.CustomizableObjectOriginalSkin */
	ExternalPtr<struct UAkAudioEvent> EquipedSoundAk; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslGame.EquipableItem.EquipedSoundAk */
	TEnumAsByte<enum EEquipableItemSoundGroup> SoundGroup; /* Ofs: 0x270 Size: 0x1 - EnumProperty TslGame.EquipableItem.SoundGroup */
	TEnumAsByte<enum EEquipableItemSoundType> SoundType; /* Ofs: 0x271 Size: 0x1 - EnumProperty TslGame.EquipableItem.SoundType */
	uint8_t boolField272;
	TEnumAsByte<enum ESlotOffsetType> SlotOffsetType; /* Ofs: 0x273 Size: 0x1 - EnumProperty TslGame.EquipableItem.SlotOffsetType */
	uint8_t boolField274;
	uint8_t UnknownData275[0x3];
	TAssetPtr<ExternalPtr<struct UTexture>> HudDisplayEquipIcon; /* Ofs: 0x278 Size: 0x1C - AssetObjectProperty TslGame.EquipableItem.HudDisplayEquipIcon */
	uint8_t UnknownData294[0xC];
	ExternalPtr<struct UClass> SkinItemClass; /* Ofs: 0x2A0 Size: 0x8 - ClassProperty TslGame.EquipableItem.SkinItemClass */


	inline bool SetEquipSlotID(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetSpaceExtension(t_structHelper inst, float value) { inst.WriteOffset(0x1CC, value); }
	inline bool SetDamageReductionRate(t_structHelper inst, float value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetDurabilityMax(t_structHelper inst, float value) { inst.WriteOffset(0x1D4, value); }
	inline bool DestroyByDurability()
	{
		return boolField1D8& 0x1;
	}
	inline bool SetDestroyByDurability(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDurability(t_structHelper inst, float value) { inst.WriteOffset(0x1DC, value); }
	inline bool SetDurabilityConsumeType(t_structHelper inst, TEnumAsByte<enum EDurabilityConsumeType> value) { inst.WriteOffset(0x1E0, value); }
	inline bool SetCustomizableObjectIdentifierForMale(t_structHelper inst, FCustomizableObjectIdentifier value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetCustomizableObjectIdentifierForFemale(t_structHelper inst, FCustomizableObjectIdentifier value) { inst.WriteOffset(0x218, value); }
	inline bool SetCustomizableObjectOriginalSkin(t_structHelper inst, FCustomizableObjectIdPair value) { inst.WriteOffset(0x248, value); }
	inline bool SetEquipedSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSoundGroup(t_structHelper inst, TEnumAsByte<enum EEquipableItemSoundGroup> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSoundType(t_structHelper inst, TEnumAsByte<enum EEquipableItemSoundType> value) { inst.WriteOffset(0x271, value); }
	inline bool bCanZombieEquip()
	{
		return boolField272& 0x1;
	}
	inline bool SetbCanZombieEquip(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x272, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlotOffsetType(t_structHelper inst, TEnumAsByte<enum ESlotOffsetType> value) { inst.WriteOffset(0x273, value); }
	inline bool bIsUnequipable()
	{
		return boolField274& 0x1;
	}
	inline bool SetbIsUnequipable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x274, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetHudDisplayEquipIcon(t_structHelper inst, TAssetPtr<ExternalPtr<struct UTexture>> value) { inst.WriteOffset(0x278, value); }
	inline bool SetSkinItemClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEquipableItem = sizeof(UEquipableItem); // 680
    static_assert(sizeof(UEquipableItem) == 0x2A8, "Size of UEquipableItem is not correct.");
	auto constexpr UEquipableItem_EquipSlotID_Offset = offsetof(UEquipableItem, EquipSlotID);
	static_assert(UEquipableItem_EquipSlotID_Offset == 0x1c8, "UEquipableItem::EquipSlotID offset is not 1c8");
	auto constexpr UEquipableItem_SpaceExtension_Offset = offsetof(UEquipableItem, SpaceExtension);
	static_assert(UEquipableItem_SpaceExtension_Offset == 0x1cc, "UEquipableItem::SpaceExtension offset is not 1cc");
	auto constexpr UEquipableItem_DamageReductionRate_Offset = offsetof(UEquipableItem, DamageReductionRate);
	static_assert(UEquipableItem_DamageReductionRate_Offset == 0x1d0, "UEquipableItem::DamageReductionRate offset is not 1d0");
	auto constexpr UEquipableItem_DurabilityMax_Offset = offsetof(UEquipableItem, DurabilityMax);
	static_assert(UEquipableItem_DurabilityMax_Offset == 0x1d4, "UEquipableItem::DurabilityMax offset is not 1d4");
	auto constexpr UEquipableItem_boolField1D8_Offset = offsetof(UEquipableItem, boolField1D8);
	static_assert(UEquipableItem_boolField1D8_Offset == 0x1d8, "UEquipableItem::boolField1D8 offset is not 1d8");
	auto constexpr UEquipableItem_Durability_Offset = offsetof(UEquipableItem, Durability);
	static_assert(UEquipableItem_Durability_Offset == 0x1dc, "UEquipableItem::Durability offset is not 1dc");
	auto constexpr UEquipableItem_DurabilityConsumeType_Offset = offsetof(UEquipableItem, DurabilityConsumeType);
	static_assert(UEquipableItem_DurabilityConsumeType_Offset == 0x1e0, "UEquipableItem::DurabilityConsumeType offset is not 1e0");
	auto constexpr UEquipableItem_CustomizableObjectIdentifierForMale_Offset = offsetof(UEquipableItem, CustomizableObjectIdentifierForMale);
	static_assert(UEquipableItem_CustomizableObjectIdentifierForMale_Offset == 0x1e8, "UEquipableItem::CustomizableObjectIdentifierForMale offset is not 1e8");
	auto constexpr UEquipableItem_CustomizableObjectIdentifierForFemale_Offset = offsetof(UEquipableItem, CustomizableObjectIdentifierForFemale);
	static_assert(UEquipableItem_CustomizableObjectIdentifierForFemale_Offset == 0x218, "UEquipableItem::CustomizableObjectIdentifierForFemale offset is not 218");
	auto constexpr UEquipableItem_CustomizableObjectOriginalSkin_Offset = offsetof(UEquipableItem, CustomizableObjectOriginalSkin);
	static_assert(UEquipableItem_CustomizableObjectOriginalSkin_Offset == 0x248, "UEquipableItem::CustomizableObjectOriginalSkin offset is not 248");
	auto constexpr UEquipableItem_EquipedSoundAk_Offset = offsetof(UEquipableItem, EquipedSoundAk);
	static_assert(UEquipableItem_EquipedSoundAk_Offset == 0x268, "UEquipableItem::EquipedSoundAk offset is not 268");
	auto constexpr UEquipableItem_SoundGroup_Offset = offsetof(UEquipableItem, SoundGroup);
	static_assert(UEquipableItem_SoundGroup_Offset == 0x270, "UEquipableItem::SoundGroup offset is not 270");
	auto constexpr UEquipableItem_SoundType_Offset = offsetof(UEquipableItem, SoundType);
	static_assert(UEquipableItem_SoundType_Offset == 0x271, "UEquipableItem::SoundType offset is not 271");
	auto constexpr UEquipableItem_boolField272_Offset = offsetof(UEquipableItem, boolField272);
	static_assert(UEquipableItem_boolField272_Offset == 0x272, "UEquipableItem::boolField272 offset is not 272");
	auto constexpr UEquipableItem_SlotOffsetType_Offset = offsetof(UEquipableItem, SlotOffsetType);
	static_assert(UEquipableItem_SlotOffsetType_Offset == 0x273, "UEquipableItem::SlotOffsetType offset is not 273");
	auto constexpr UEquipableItem_boolField274_Offset = offsetof(UEquipableItem, boolField274);
	static_assert(UEquipableItem_boolField274_Offset == 0x274, "UEquipableItem::boolField274 offset is not 274");
	auto constexpr UEquipableItem_HudDisplayEquipIcon_Offset = offsetof(UEquipableItem, HudDisplayEquipIcon);
	static_assert(UEquipableItem_HudDisplayEquipIcon_Offset == 0x278, "UEquipableItem::HudDisplayEquipIcon offset is not 278");
	auto constexpr UEquipableItem_SkinItemClass_Offset = offsetof(UEquipableItem, SkinItemClass);
	static_assert(UEquipableItem_SkinItemClass_Offset == 0x2a0, "UEquipableItem::SkinItemClass offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
