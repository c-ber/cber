#pragma once
#include "USlotBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInventorySlotBaseWidget_C // Size: 0x358
	: public USlotBaseWidget_C // Size: 0x258
{
private:
	typedef UInventorySlotBaseWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(66657); // id32("WidgetBlueprintGeneratedClass InventorySlotBaseWidget.InventorySlotBaseWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x258 Size: 0x8 - StructProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.UberGraphFrame */
	TEnumAsByte<enum EEquipSlotID> EquipSlotID; /* Ofs: 0x260 Size: 0x1 - EnumProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.EquipSlotID */
	uint8_t UnknownData261[0x3];
	int32_t WeaponSlotIndex; /* Ofs: 0x264 Size: 0x4 - IntProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.WeaponSlotIndex */
	ExternalPtr<struct UTexture> SlotBackground_NormalEmpty; /* Ofs: 0x268 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotBackground_NormalEmpty */
	ExternalPtr<struct UTexture> SlotBackground_Normal; /* Ofs: 0x270 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotBackground_Normal */
	ExternalPtr<struct UTexture> SlotBackground_On; /* Ofs: 0x278 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotBackground_On */
	ExternalPtr<struct UTexture> SlotBackGround_SubOn; /* Ofs: 0x280 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotBackGround_SubOn */
	ExternalPtr<struct UTexture> SlotBackground_Over; /* Ofs: 0x288 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotBackground_Over */
	uint8_t boolField290;
	uint8_t boolField291;
	uint8_t UnknownData292[0x6];
	ExternalPtr<struct UMaterialInstanceDynamic> SlotDynamicMaterial; /* Ofs: 0x298 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SlotDynamicMaterial */
	FName TexParm; /* Ofs: 0x2A0 Size: 0x8 - NameProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.TexParm */
	ExternalPtr<struct UImage> ItemIcon; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.ItemIcon */
	float IconSize; /* Ofs: 0x2B0 Size: 0x4 - FloatProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.IconSize */
	uint8_t UnknownData2B4[0x4];
	ExternalPtr<struct UEquipment> Equipment; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.Equipment */
	ExternalPtr<struct UWeaponProcessor> WeaponProcessor; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.WeaponProcessor */
	ExternalPtr<struct UItem> Item; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.Item */
	ExternalPtr<struct UTslItemDragDropOperation_C> TslItemDragDropOperation; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.TslItemDragDropOperation */
	float ToolTipShowDelaytime; /* Ofs: 0x2D8 Size: 0x4 - FloatProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.ToolTipShowDelaytime */
	uint8_t UnknownData2DC[0x4];
	ExternalPtr<struct UInventoryWidget_C> InventoryWidget; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.InventoryWidget */
	FScriptMulticastDelegate RefreshFocus; /* Ofs: 0x2E8 Size: 0x10 - MulticastDelegateProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.RefreshFocus */
	TScriptInterface<ExternalPtr<struct USlotInterface>> FocusItemSlot; /* Ofs: 0x2F8 Size: 0x10 - InterfaceProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.FocusItemSlot */
	FScriptMulticastDelegate OnChildFocusSlotID; /* Ofs: 0x308 Size: 0x10 - MulticastDelegateProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnChildFocusSlotID */
	ExternalPtr<struct UItemToolTipWidget_Bp_C> SaveToolTip; /* Ofs: 0x318 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SaveToolTip */
	FScriptMulticastDelegate OnEnterSlot; /* Ofs: 0x320 Size: 0x10 - MulticastDelegateProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnEnterSlot */
	FScriptMulticastDelegate OnLeaveSlot; /* Ofs: 0x330 Size: 0x10 - MulticastDelegateProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnLeaveSlot */
	FScriptMulticastDelegate OnDoSlotAction; /* Ofs: 0x340 Size: 0x10 - MulticastDelegateProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.OnDoSlotAction */
	ExternalPtr<struct UTslCharacter> SaveCharacter; /* Ofs: 0x350 Size: 0x8 - ObjectProperty InventorySlotBaseWidget.InventorySlotBaseWidget_C.SaveCharacter */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x258, value); }
	inline bool SetEquipSlotID(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x260, value); }
	inline bool SetWeaponSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x264, value); }
	inline bool SetSlotBackground_NormalEmpty(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSlotBackground_Normal(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSlotBackground_On(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x278, value); }
	inline bool SetSlotBackGround_SubOn(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x280, value); }
	inline bool SetSlotBackground_Over(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x288, value); }
	inline bool bGamepadFocus()
	{
		return boolField290& 0x1;
	}
	inline bool SetbGamepadFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x290, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMouseOver()
	{
		return boolField291& 0x1;
	}
	inline bool SetbMouseOver(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x291, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSlotDynamicMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x298, value); }
	inline bool SetTexParm(t_structHelper inst, FName value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetItemIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetIconSize(t_structHelper inst, float value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetEquipment(t_structHelper inst, ExternalPtr<struct UEquipment> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetTslItemDragDropOperation(t_structHelper inst, ExternalPtr<struct UTslItemDragDropOperation_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetToolTipShowDelaytime(t_structHelper inst, float value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetInventoryWidget(t_structHelper inst, ExternalPtr<struct UInventoryWidget_C> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetRefreshFocus(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetFocusItemSlot(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetOnChildFocusSlotID(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x308, value); }
	inline bool SetSaveToolTip(t_structHelper inst, ExternalPtr<struct UItemToolTipWidget_Bp_C> value) { inst.WriteOffset(0x318, value); }
	inline bool SetOnEnterSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x320, value); }
	inline bool SetOnLeaveSlot(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x330, value); }
	inline bool SetOnDoSlotAction(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x340, value); }
	inline bool SetSaveCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x350, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInventorySlotBaseWidget_C = sizeof(UInventorySlotBaseWidget_C); // 856
    static_assert(sizeof(UInventorySlotBaseWidget_C) == 0x358, "Size of UInventorySlotBaseWidget_C is not correct.");
	auto constexpr UInventorySlotBaseWidget_C_UberGraphFrame_Offset = offsetof(UInventorySlotBaseWidget_C, UberGraphFrame);
	static_assert(UInventorySlotBaseWidget_C_UberGraphFrame_Offset == 0x258, "UInventorySlotBaseWidget_C::UberGraphFrame offset is not 258");
	auto constexpr UInventorySlotBaseWidget_C_EquipSlotID_Offset = offsetof(UInventorySlotBaseWidget_C, EquipSlotID);
	static_assert(UInventorySlotBaseWidget_C_EquipSlotID_Offset == 0x260, "UInventorySlotBaseWidget_C::EquipSlotID offset is not 260");
	auto constexpr UInventorySlotBaseWidget_C_WeaponSlotIndex_Offset = offsetof(UInventorySlotBaseWidget_C, WeaponSlotIndex);
	static_assert(UInventorySlotBaseWidget_C_WeaponSlotIndex_Offset == 0x264, "UInventorySlotBaseWidget_C::WeaponSlotIndex offset is not 264");
	auto constexpr UInventorySlotBaseWidget_C_SlotBackground_NormalEmpty_Offset = offsetof(UInventorySlotBaseWidget_C, SlotBackground_NormalEmpty);
	static_assert(UInventorySlotBaseWidget_C_SlotBackground_NormalEmpty_Offset == 0x268, "UInventorySlotBaseWidget_C::SlotBackground_NormalEmpty offset is not 268");
	auto constexpr UInventorySlotBaseWidget_C_SlotBackground_Normal_Offset = offsetof(UInventorySlotBaseWidget_C, SlotBackground_Normal);
	static_assert(UInventorySlotBaseWidget_C_SlotBackground_Normal_Offset == 0x270, "UInventorySlotBaseWidget_C::SlotBackground_Normal offset is not 270");
	auto constexpr UInventorySlotBaseWidget_C_SlotBackground_On_Offset = offsetof(UInventorySlotBaseWidget_C, SlotBackground_On);
	static_assert(UInventorySlotBaseWidget_C_SlotBackground_On_Offset == 0x278, "UInventorySlotBaseWidget_C::SlotBackground_On offset is not 278");
	auto constexpr UInventorySlotBaseWidget_C_SlotBackGround_SubOn_Offset = offsetof(UInventorySlotBaseWidget_C, SlotBackGround_SubOn);
	static_assert(UInventorySlotBaseWidget_C_SlotBackGround_SubOn_Offset == 0x280, "UInventorySlotBaseWidget_C::SlotBackGround_SubOn offset is not 280");
	auto constexpr UInventorySlotBaseWidget_C_SlotBackground_Over_Offset = offsetof(UInventorySlotBaseWidget_C, SlotBackground_Over);
	static_assert(UInventorySlotBaseWidget_C_SlotBackground_Over_Offset == 0x288, "UInventorySlotBaseWidget_C::SlotBackground_Over offset is not 288");
	auto constexpr UInventorySlotBaseWidget_C_boolField290_Offset = offsetof(UInventorySlotBaseWidget_C, boolField290);
	static_assert(UInventorySlotBaseWidget_C_boolField290_Offset == 0x290, "UInventorySlotBaseWidget_C::boolField290 offset is not 290");
	auto constexpr UInventorySlotBaseWidget_C_boolField291_Offset = offsetof(UInventorySlotBaseWidget_C, boolField291);
	static_assert(UInventorySlotBaseWidget_C_boolField291_Offset == 0x291, "UInventorySlotBaseWidget_C::boolField291 offset is not 291");
	auto constexpr UInventorySlotBaseWidget_C_SlotDynamicMaterial_Offset = offsetof(UInventorySlotBaseWidget_C, SlotDynamicMaterial);
	static_assert(UInventorySlotBaseWidget_C_SlotDynamicMaterial_Offset == 0x298, "UInventorySlotBaseWidget_C::SlotDynamicMaterial offset is not 298");
	auto constexpr UInventorySlotBaseWidget_C_TexParm_Offset = offsetof(UInventorySlotBaseWidget_C, TexParm);
	static_assert(UInventorySlotBaseWidget_C_TexParm_Offset == 0x2a0, "UInventorySlotBaseWidget_C::TexParm offset is not 2a0");
	auto constexpr UInventorySlotBaseWidget_C_ItemIcon_Offset = offsetof(UInventorySlotBaseWidget_C, ItemIcon);
	static_assert(UInventorySlotBaseWidget_C_ItemIcon_Offset == 0x2a8, "UInventorySlotBaseWidget_C::ItemIcon offset is not 2a8");
	auto constexpr UInventorySlotBaseWidget_C_IconSize_Offset = offsetof(UInventorySlotBaseWidget_C, IconSize);
	static_assert(UInventorySlotBaseWidget_C_IconSize_Offset == 0x2b0, "UInventorySlotBaseWidget_C::IconSize offset is not 2b0");
	auto constexpr UInventorySlotBaseWidget_C_Equipment_Offset = offsetof(UInventorySlotBaseWidget_C, Equipment);
	static_assert(UInventorySlotBaseWidget_C_Equipment_Offset == 0x2b8, "UInventorySlotBaseWidget_C::Equipment offset is not 2b8");
	auto constexpr UInventorySlotBaseWidget_C_WeaponProcessor_Offset = offsetof(UInventorySlotBaseWidget_C, WeaponProcessor);
	static_assert(UInventorySlotBaseWidget_C_WeaponProcessor_Offset == 0x2c0, "UInventorySlotBaseWidget_C::WeaponProcessor offset is not 2c0");
	auto constexpr UInventorySlotBaseWidget_C_Item_Offset = offsetof(UInventorySlotBaseWidget_C, Item);
	static_assert(UInventorySlotBaseWidget_C_Item_Offset == 0x2c8, "UInventorySlotBaseWidget_C::Item offset is not 2c8");
	auto constexpr UInventorySlotBaseWidget_C_TslItemDragDropOperation_Offset = offsetof(UInventorySlotBaseWidget_C, TslItemDragDropOperation);
	static_assert(UInventorySlotBaseWidget_C_TslItemDragDropOperation_Offset == 0x2d0, "UInventorySlotBaseWidget_C::TslItemDragDropOperation offset is not 2d0");
	auto constexpr UInventorySlotBaseWidget_C_ToolTipShowDelaytime_Offset = offsetof(UInventorySlotBaseWidget_C, ToolTipShowDelaytime);
	static_assert(UInventorySlotBaseWidget_C_ToolTipShowDelaytime_Offset == 0x2d8, "UInventorySlotBaseWidget_C::ToolTipShowDelaytime offset is not 2d8");
	auto constexpr UInventorySlotBaseWidget_C_InventoryWidget_Offset = offsetof(UInventorySlotBaseWidget_C, InventoryWidget);
	static_assert(UInventorySlotBaseWidget_C_InventoryWidget_Offset == 0x2e0, "UInventorySlotBaseWidget_C::InventoryWidget offset is not 2e0");
	auto constexpr UInventorySlotBaseWidget_C_RefreshFocus_Offset = offsetof(UInventorySlotBaseWidget_C, RefreshFocus);
	static_assert(UInventorySlotBaseWidget_C_RefreshFocus_Offset == 0x2e8, "UInventorySlotBaseWidget_C::RefreshFocus offset is not 2e8");
	auto constexpr UInventorySlotBaseWidget_C_FocusItemSlot_Offset = offsetof(UInventorySlotBaseWidget_C, FocusItemSlot);
	static_assert(UInventorySlotBaseWidget_C_FocusItemSlot_Offset == 0x2f8, "UInventorySlotBaseWidget_C::FocusItemSlot offset is not 2f8");
	auto constexpr UInventorySlotBaseWidget_C_OnChildFocusSlotID_Offset = offsetof(UInventorySlotBaseWidget_C, OnChildFocusSlotID);
	static_assert(UInventorySlotBaseWidget_C_OnChildFocusSlotID_Offset == 0x308, "UInventorySlotBaseWidget_C::OnChildFocusSlotID offset is not 308");
	auto constexpr UInventorySlotBaseWidget_C_SaveToolTip_Offset = offsetof(UInventorySlotBaseWidget_C, SaveToolTip);
	static_assert(UInventorySlotBaseWidget_C_SaveToolTip_Offset == 0x318, "UInventorySlotBaseWidget_C::SaveToolTip offset is not 318");
	auto constexpr UInventorySlotBaseWidget_C_OnEnterSlot_Offset = offsetof(UInventorySlotBaseWidget_C, OnEnterSlot);
	static_assert(UInventorySlotBaseWidget_C_OnEnterSlot_Offset == 0x320, "UInventorySlotBaseWidget_C::OnEnterSlot offset is not 320");
	auto constexpr UInventorySlotBaseWidget_C_OnLeaveSlot_Offset = offsetof(UInventorySlotBaseWidget_C, OnLeaveSlot);
	static_assert(UInventorySlotBaseWidget_C_OnLeaveSlot_Offset == 0x330, "UInventorySlotBaseWidget_C::OnLeaveSlot offset is not 330");
	auto constexpr UInventorySlotBaseWidget_C_OnDoSlotAction_Offset = offsetof(UInventorySlotBaseWidget_C, OnDoSlotAction);
	static_assert(UInventorySlotBaseWidget_C_OnDoSlotAction_Offset == 0x340, "UInventorySlotBaseWidget_C::OnDoSlotAction offset is not 340");
	auto constexpr UInventorySlotBaseWidget_C_SaveCharacter_Offset = offsetof(UInventorySlotBaseWidget_C, SaveCharacter);
	static_assert(UInventorySlotBaseWidget_C_SaveCharacter_Offset == 0x350, "UInventorySlotBaseWidget_C::SaveCharacter offset is not 350");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
