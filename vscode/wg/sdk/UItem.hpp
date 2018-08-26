#pragma once
#include "FLobbyItemDesc.hpp"
#include "EItemCategory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItem // Size: 0x1C8
	: public UObject // Size: 0x30
{
private:
	typedef UItem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1844); // id32("Class TslGame.Item")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
	uint8_t boolField40;
	uint8_t UnknownData41[0x3];
	int32_t StackCount; /* Ofs: 0x44 Size: 0x4 - IntProperty TslGame.Item.StackCount */
	FText ItemName; /* Ofs: 0x48 Size: 0x18 - TextProperty TslGame.Item.ItemName */
	FText ItemCategory; /* Ofs: 0x60 Size: 0x18 - TextProperty TslGame.Item.ItemCategory */
	FText ItemDetailedName; /* Ofs: 0x78 Size: 0x18 - TextProperty TslGame.Item.ItemDetailedName */
	FText ItemDescription; /* Ofs: 0x90 Size: 0x18 - TextProperty TslGame.Item.ItemDescription */
	float ItemMaxInteractableDistance; /* Ofs: 0xA8 Size: 0x4 - FloatProperty TslGame.Item.ItemMaxInteractableDistance */
	int32_t StackCountMax; /* Ofs: 0xAC Size: 0x4 - IntProperty TslGame.Item.StackCountMax */
	float SpacePerItem; /* Ofs: 0xB0 Size: 0x4 - FloatProperty TslGame.Item.SpacePerItem */
	uint8_t UnknownDataB4[0x4];
	TAssetPtr<ExternalPtr<struct UStaticMesh>> DroppedMesh; /* Ofs: 0xB8 Size: 0x1C - AssetObjectProperty TslGame.Item.DroppedMesh */
	uint8_t UnknownDataD4[0x4];
	float DroppedMeshScale; /* Ofs: 0xD8 Size: 0x4 - FloatProperty TslGame.Item.DroppedMeshScale */
	uint8_t UnknownDataDC[0x4];
	TAssetPtr<ExternalPtr<struct UTexture>> Icon; /* Ofs: 0xE0 Size: 0x1C - AssetObjectProperty TslGame.Item.Icon */
	uint8_t UnknownDataFC[0x4];
	TAssetPtr<ExternalPtr<struct UTexture>> ToolTipIcon; /* Ofs: 0x100 Size: 0x1C - AssetObjectProperty TslGame.Item.ToolTipIcon */
	uint8_t UnknownData11C[0x4];
	float IconSizeRatio; /* Ofs: 0x120 Size: 0x4 - FloatProperty TslGame.Item.IconSizeRatio */
	float ToolTipIconSizeRatio; /* Ofs: 0x124 Size: 0x4 - FloatProperty TslGame.Item.ToolTipIconSizeRatio */
	ExternalPtr<struct UAkAudioEvent> DropSoundAk; /* Ofs: 0x128 Size: 0x8 - ObjectProperty TslGame.Item.DropSoundAk */
	ExternalPtr<struct UAkAudioEvent> PickUpSoundAk; /* Ofs: 0x130 Size: 0x8 - ObjectProperty TslGame.Item.PickUpSoundAk */
	ExternalPtr<struct UAkAudioEvent> InventoryPutSoundAk; /* Ofs: 0x138 Size: 0x8 - ObjectProperty TslGame.Item.InventoryPutSoundAk */
	int32_t SortPriority; /* Ofs: 0x140 Size: 0x4 - IntProperty TslGame.Item.SortPriority */
	int32_t LobbyItemID; /* Ofs: 0x144 Size: 0x4 - IntProperty TslGame.Item.LobbyItemID */
	FLobbyItemDesc LobbyItemDesc; /* Ofs: 0x148 Size: 0x58 - StructProperty TslGame.Item.LobbyItemDesc */
	TEnumAsByte<enum EItemCategory> Category; /* Ofs: 0x1A0 Size: 0x1 - EnumProperty TslGame.Item.Category */
	uint8_t UnknownData1A1[0x7];
	FName SubCategory; /* Ofs: 0x1A8 Size: 0x8 - NameProperty TslGame.Item.SubCategory */
	uint8_t boolField1B0;
	uint8_t boolField1B1;
	uint8_t UnknownData1B2[0x6];
	FString Note; /* Ofs: 0x1B8 Size: 0x10 - StrProperty TslGame.Item.Note */


	inline bool bStackable()
	{
		return boolField40& 0x1;
	}
	inline bool SetbStackable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsable()
	{
		return boolField40& 0x2;
	}
	inline bool SetbUsable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsConsumable()
	{
		return boolField40& 0x4;
	}
	inline bool SetbIsConsumable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDisableSpawnInGame()
	{
		return boolField40& 0x8;
	}
	inline bool SetbDisableSpawnInGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetStackCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool SetItemName(t_structHelper inst, FText value) { inst.WriteOffset(0x48, value); }
	inline bool SetItemCategory(t_structHelper inst, FText value) { inst.WriteOffset(0x60, value); }
	inline bool SetItemDetailedName(t_structHelper inst, FText value) { inst.WriteOffset(0x78, value); }
	inline bool SetItemDescription(t_structHelper inst, FText value) { inst.WriteOffset(0x90, value); }
	inline bool SetItemMaxInteractableDistance(t_structHelper inst, float value) { inst.WriteOffset(0xA8, value); }
	inline bool SetStackCountMax(t_structHelper inst, int32_t value) { inst.WriteOffset(0xAC, value); }
	inline bool SetSpacePerItem(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool SetDroppedMesh(t_structHelper inst, TAssetPtr<ExternalPtr<struct UStaticMesh>> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetDroppedMeshScale(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetIcon(t_structHelper inst, TAssetPtr<ExternalPtr<struct UTexture>> value) { inst.WriteOffset(0xE0, value); }
	inline bool SetToolTipIcon(t_structHelper inst, TAssetPtr<ExternalPtr<struct UTexture>> value) { inst.WriteOffset(0x100, value); }
	inline bool SetIconSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x120, value); }
	inline bool SetToolTipIconSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool SetDropSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x128, value); }
	inline bool SetPickUpSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x130, value); }
	inline bool SetInventoryPutSoundAk(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x138, value); }
	inline bool SetSortPriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x140, value); }
	inline bool SetLobbyItemID(t_structHelper inst, int32_t value) { inst.WriteOffset(0x144, value); }
	inline bool SetLobbyItemDesc(t_structHelper inst, FLobbyItemDesc value) { inst.WriteOffset(0x148, value); }
	inline bool SetCategory(t_structHelper inst, TEnumAsByte<enum EItemCategory> value) { inst.WriteOffset(0x1A0, value); }
	inline bool SetSubCategory(t_structHelper inst, FName value) { inst.WriteOffset(0x1A8, value); }
	inline bool bIsToy()
	{
		return boolField1B0& 0x1;
	}
	inline bool SetbIsToy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVested()
	{
		return boolField1B1& 0x1;
	}
	inline bool SetbVested(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNote(t_structHelper inst, FString value) { inst.WriteOffset(0x1B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItem = sizeof(UItem); // 456
    static_assert(sizeof(UItem) == 0x1C8, "Size of UItem is not correct.");
	auto constexpr UItem_boolField40_Offset = offsetof(UItem, boolField40);
	static_assert(UItem_boolField40_Offset == 0x40, "UItem::boolField40 offset is not 40");
	auto constexpr UItem_StackCount_Offset = offsetof(UItem, StackCount);
	static_assert(UItem_StackCount_Offset == 0x44, "UItem::StackCount offset is not 44");
	auto constexpr UItem_ItemName_Offset = offsetof(UItem, ItemName);
	static_assert(UItem_ItemName_Offset == 0x48, "UItem::ItemName offset is not 48");
	auto constexpr UItem_ItemCategory_Offset = offsetof(UItem, ItemCategory);
	static_assert(UItem_ItemCategory_Offset == 0x60, "UItem::ItemCategory offset is not 60");
	auto constexpr UItem_ItemDetailedName_Offset = offsetof(UItem, ItemDetailedName);
	static_assert(UItem_ItemDetailedName_Offset == 0x78, "UItem::ItemDetailedName offset is not 78");
	auto constexpr UItem_ItemDescription_Offset = offsetof(UItem, ItemDescription);
	static_assert(UItem_ItemDescription_Offset == 0x90, "UItem::ItemDescription offset is not 90");
	auto constexpr UItem_ItemMaxInteractableDistance_Offset = offsetof(UItem, ItemMaxInteractableDistance);
	static_assert(UItem_ItemMaxInteractableDistance_Offset == 0xa8, "UItem::ItemMaxInteractableDistance offset is not a8");
	auto constexpr UItem_StackCountMax_Offset = offsetof(UItem, StackCountMax);
	static_assert(UItem_StackCountMax_Offset == 0xac, "UItem::StackCountMax offset is not ac");
	auto constexpr UItem_SpacePerItem_Offset = offsetof(UItem, SpacePerItem);
	static_assert(UItem_SpacePerItem_Offset == 0xb0, "UItem::SpacePerItem offset is not b0");
	auto constexpr UItem_DroppedMesh_Offset = offsetof(UItem, DroppedMesh);
	static_assert(UItem_DroppedMesh_Offset == 0xb8, "UItem::DroppedMesh offset is not b8");
	auto constexpr UItem_DroppedMeshScale_Offset = offsetof(UItem, DroppedMeshScale);
	static_assert(UItem_DroppedMeshScale_Offset == 0xd8, "UItem::DroppedMeshScale offset is not d8");
	auto constexpr UItem_Icon_Offset = offsetof(UItem, Icon);
	static_assert(UItem_Icon_Offset == 0xe0, "UItem::Icon offset is not e0");
	auto constexpr UItem_ToolTipIcon_Offset = offsetof(UItem, ToolTipIcon);
	static_assert(UItem_ToolTipIcon_Offset == 0x100, "UItem::ToolTipIcon offset is not 100");
	auto constexpr UItem_IconSizeRatio_Offset = offsetof(UItem, IconSizeRatio);
	static_assert(UItem_IconSizeRatio_Offset == 0x120, "UItem::IconSizeRatio offset is not 120");
	auto constexpr UItem_ToolTipIconSizeRatio_Offset = offsetof(UItem, ToolTipIconSizeRatio);
	static_assert(UItem_ToolTipIconSizeRatio_Offset == 0x124, "UItem::ToolTipIconSizeRatio offset is not 124");
	auto constexpr UItem_DropSoundAk_Offset = offsetof(UItem, DropSoundAk);
	static_assert(UItem_DropSoundAk_Offset == 0x128, "UItem::DropSoundAk offset is not 128");
	auto constexpr UItem_PickUpSoundAk_Offset = offsetof(UItem, PickUpSoundAk);
	static_assert(UItem_PickUpSoundAk_Offset == 0x130, "UItem::PickUpSoundAk offset is not 130");
	auto constexpr UItem_InventoryPutSoundAk_Offset = offsetof(UItem, InventoryPutSoundAk);
	static_assert(UItem_InventoryPutSoundAk_Offset == 0x138, "UItem::InventoryPutSoundAk offset is not 138");
	auto constexpr UItem_SortPriority_Offset = offsetof(UItem, SortPriority);
	static_assert(UItem_SortPriority_Offset == 0x140, "UItem::SortPriority offset is not 140");
	auto constexpr UItem_LobbyItemID_Offset = offsetof(UItem, LobbyItemID);
	static_assert(UItem_LobbyItemID_Offset == 0x144, "UItem::LobbyItemID offset is not 144");
	auto constexpr UItem_LobbyItemDesc_Offset = offsetof(UItem, LobbyItemDesc);
	static_assert(UItem_LobbyItemDesc_Offset == 0x148, "UItem::LobbyItemDesc offset is not 148");
	auto constexpr UItem_Category_Offset = offsetof(UItem, Category);
	static_assert(UItem_Category_Offset == 0x1a0, "UItem::Category offset is not 1a0");
	auto constexpr UItem_SubCategory_Offset = offsetof(UItem, SubCategory);
	static_assert(UItem_SubCategory_Offset == 0x1a8, "UItem::SubCategory offset is not 1a8");
	auto constexpr UItem_boolField1B0_Offset = offsetof(UItem, boolField1B0);
	static_assert(UItem_boolField1B0_Offset == 0x1b0, "UItem::boolField1B0 offset is not 1b0");
	auto constexpr UItem_boolField1B1_Offset = offsetof(UItem, boolField1B1);
	static_assert(UItem_boolField1B1_Offset == 0x1b1, "UItem::boolField1B1 offset is not 1b1");
	auto constexpr UItem_Note_Offset = offsetof(UItem, Note);
	static_assert(UItem_Note_Offset == 0x1b8, "UItem::Note offset is not 1b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
