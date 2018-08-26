#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EEquipSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslItemDragWidget_C // Size: 0x2BE
	: public UUserWidget // Size: 0x248
{
private:
	typedef UTslItemDragWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(60917); // id32("WidgetBlueprintGeneratedClass TslItemDragWidget.TslItemDragWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty TslItemDragWidget.TslItemDragWidget_C.UberGraphFrame */
	ExternalPtr<struct UImage> Background; /* Ofs: 0x250 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.Background */
	ExternalPtr<struct UImage> ErrorIcon; /* Ofs: 0x258 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.ErrorIcon */
	ExternalPtr<struct UImage> ItemIcon; /* Ofs: 0x260 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.ItemIcon */
	ExternalPtr<struct UVerticalBox> StackcountBlock; /* Ofs: 0x268 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.StackcountBlock */
	ExternalPtr<struct UTextBlock> StackCountText; /* Ofs: 0x270 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.StackCountText */
	TScriptInterface<ExternalPtr<struct USlotInterface>> ItemInterface; /* Ofs: 0x278 Size: 0x10 - InterfaceProperty TslItemDragWidget.TslItemDragWidget_C.ItemInterface */
	ExternalPtr<struct UItem> ItemInstance; /* Ofs: 0x288 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.ItemInstance */
	ExternalPtr<struct UTslPlayerController> ShooterPlayerController; /* Ofs: 0x290 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.ShooterPlayerController */
	ExternalPtr<struct UInventory> Inventory; /* Ofs: 0x298 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.Inventory */
	ExternalPtr<struct UMaterialInstanceDynamic> BackgroundMaterial; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty TslItemDragWidget.TslItemDragWidget_C.BackgroundMaterial */
	FName ActionName; /* Ofs: 0x2A8 Size: 0x8 - NameProperty TslItemDragWidget.TslItemDragWidget_C.ActionName */
	uint8_t boolField2B0;
	uint8_t boolField2B1;
	uint8_t UnknownData2B2[0x2];
	int32_t MouseOverWeaponSlotIndex; /* Ofs: 0x2B4 Size: 0x4 - IntProperty TslItemDragWidget.TslItemDragWidget_C.MouseOverWeaponSlotIndex */
	int32_t DragDroppingWeaponIndex; /* Ofs: 0x2B8 Size: 0x4 - IntProperty TslItemDragWidget.TslItemDragWidget_C.DragDroppingWeaponIndex */
	TEnumAsByte<enum EEquipSlotID> DragDroppingSlotId; /* Ofs: 0x2BC Size: 0x1 - EnumProperty TslItemDragWidget.TslItemDragWidget_C.DragDroppingSlotId */
	TEnumAsByte<enum EEquipSlotID> MouseOverSlotId; /* Ofs: 0x2BD Size: 0x1 - EnumProperty TslItemDragWidget.TslItemDragWidget_C.MouseOverSlotId */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBackground(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetErrorIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetItemIcon(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetStackcountBlock(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x268, value); }
	inline bool SetStackCountText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetItemInterface(t_structHelper inst, TScriptInterface<ExternalPtr<struct USlotInterface>> value) { inst.WriteOffset(0x278, value); }
	inline bool SetItemInstance(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x288, value); }
	inline bool SetShooterPlayerController(t_structHelper inst, ExternalPtr<struct UTslPlayerController> value) { inst.WriteOffset(0x290, value); }
	inline bool SetInventory(t_structHelper inst, ExternalPtr<struct UInventory> value) { inst.WriteOffset(0x298, value); }
	inline bool SetBackgroundMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetActionName(t_structHelper inst, FName value) { inst.WriteOffset(0x2A8, value); }
	inline bool bEnableAction()
	{
		return boolField2B0& 0x1;
	}
	inline bool SetbEnableAction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bVicinityItem()
	{
		return boolField2B1& 0x1;
	}
	inline bool SetbVicinityItem(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMouseOverWeaponSlotIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B4, value); }
	inline bool SetDragDroppingWeaponIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetDragDroppingSlotId(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x2BC, value); }
	inline bool SetMouseOverSlotId(t_structHelper inst, TEnumAsByte<enum EEquipSlotID> value) { inst.WriteOffset(0x2BD, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslItemDragWidget_C = sizeof(UTslItemDragWidget_C); // 702
    static_assert(sizeof(UTslItemDragWidget_C) == 0x2BE, "Size of UTslItemDragWidget_C is not correct.");
	auto constexpr UTslItemDragWidget_C_UberGraphFrame_Offset = offsetof(UTslItemDragWidget_C, UberGraphFrame);
	static_assert(UTslItemDragWidget_C_UberGraphFrame_Offset == 0x248, "UTslItemDragWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UTslItemDragWidget_C_Background_Offset = offsetof(UTslItemDragWidget_C, Background);
	static_assert(UTslItemDragWidget_C_Background_Offset == 0x250, "UTslItemDragWidget_C::Background offset is not 250");
	auto constexpr UTslItemDragWidget_C_ErrorIcon_Offset = offsetof(UTslItemDragWidget_C, ErrorIcon);
	static_assert(UTslItemDragWidget_C_ErrorIcon_Offset == 0x258, "UTslItemDragWidget_C::ErrorIcon offset is not 258");
	auto constexpr UTslItemDragWidget_C_ItemIcon_Offset = offsetof(UTslItemDragWidget_C, ItemIcon);
	static_assert(UTslItemDragWidget_C_ItemIcon_Offset == 0x260, "UTslItemDragWidget_C::ItemIcon offset is not 260");
	auto constexpr UTslItemDragWidget_C_StackcountBlock_Offset = offsetof(UTslItemDragWidget_C, StackcountBlock);
	static_assert(UTslItemDragWidget_C_StackcountBlock_Offset == 0x268, "UTslItemDragWidget_C::StackcountBlock offset is not 268");
	auto constexpr UTslItemDragWidget_C_StackCountText_Offset = offsetof(UTslItemDragWidget_C, StackCountText);
	static_assert(UTslItemDragWidget_C_StackCountText_Offset == 0x270, "UTslItemDragWidget_C::StackCountText offset is not 270");
	auto constexpr UTslItemDragWidget_C_ItemInterface_Offset = offsetof(UTslItemDragWidget_C, ItemInterface);
	static_assert(UTslItemDragWidget_C_ItemInterface_Offset == 0x278, "UTslItemDragWidget_C::ItemInterface offset is not 278");
	auto constexpr UTslItemDragWidget_C_ItemInstance_Offset = offsetof(UTslItemDragWidget_C, ItemInstance);
	static_assert(UTslItemDragWidget_C_ItemInstance_Offset == 0x288, "UTslItemDragWidget_C::ItemInstance offset is not 288");
	auto constexpr UTslItemDragWidget_C_ShooterPlayerController_Offset = offsetof(UTslItemDragWidget_C, ShooterPlayerController);
	static_assert(UTslItemDragWidget_C_ShooterPlayerController_Offset == 0x290, "UTslItemDragWidget_C::ShooterPlayerController offset is not 290");
	auto constexpr UTslItemDragWidget_C_Inventory_Offset = offsetof(UTslItemDragWidget_C, Inventory);
	static_assert(UTslItemDragWidget_C_Inventory_Offset == 0x298, "UTslItemDragWidget_C::Inventory offset is not 298");
	auto constexpr UTslItemDragWidget_C_BackgroundMaterial_Offset = offsetof(UTslItemDragWidget_C, BackgroundMaterial);
	static_assert(UTslItemDragWidget_C_BackgroundMaterial_Offset == 0x2a0, "UTslItemDragWidget_C::BackgroundMaterial offset is not 2a0");
	auto constexpr UTslItemDragWidget_C_ActionName_Offset = offsetof(UTslItemDragWidget_C, ActionName);
	static_assert(UTslItemDragWidget_C_ActionName_Offset == 0x2a8, "UTslItemDragWidget_C::ActionName offset is not 2a8");
	auto constexpr UTslItemDragWidget_C_boolField2B0_Offset = offsetof(UTslItemDragWidget_C, boolField2B0);
	static_assert(UTslItemDragWidget_C_boolField2B0_Offset == 0x2b0, "UTslItemDragWidget_C::boolField2B0 offset is not 2b0");
	auto constexpr UTslItemDragWidget_C_boolField2B1_Offset = offsetof(UTslItemDragWidget_C, boolField2B1);
	static_assert(UTslItemDragWidget_C_boolField2B1_Offset == 0x2b1, "UTslItemDragWidget_C::boolField2B1 offset is not 2b1");
	auto constexpr UTslItemDragWidget_C_MouseOverWeaponSlotIndex_Offset = offsetof(UTslItemDragWidget_C, MouseOverWeaponSlotIndex);
	static_assert(UTslItemDragWidget_C_MouseOverWeaponSlotIndex_Offset == 0x2b4, "UTslItemDragWidget_C::MouseOverWeaponSlotIndex offset is not 2b4");
	auto constexpr UTslItemDragWidget_C_DragDroppingWeaponIndex_Offset = offsetof(UTslItemDragWidget_C, DragDroppingWeaponIndex);
	static_assert(UTslItemDragWidget_C_DragDroppingWeaponIndex_Offset == 0x2b8, "UTslItemDragWidget_C::DragDroppingWeaponIndex offset is not 2b8");
	auto constexpr UTslItemDragWidget_C_DragDroppingSlotId_Offset = offsetof(UTslItemDragWidget_C, DragDroppingSlotId);
	static_assert(UTslItemDragWidget_C_DragDroppingSlotId_Offset == 0x2bc, "UTslItemDragWidget_C::DragDroppingSlotId offset is not 2bc");
	auto constexpr UTslItemDragWidget_C_MouseOverSlotId_Offset = offsetof(UTslItemDragWidget_C, MouseOverSlotId);
	static_assert(UTslItemDragWidget_C_MouseOverSlotId_Offset == 0x2bd, "UTslItemDragWidget_C::MouseOverSlotId offset is not 2bd");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
