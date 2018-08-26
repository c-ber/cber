#pragma once
#include "UInventoryBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponEquipmentWidget_C // Size: 0x348
	: public UInventoryBaseWidget_C // Size: 0x2A0
{
private:
	typedef UWeaponEquipmentWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61241); // id32("WidgetBlueprintGeneratedClass WeaponEquipmentWidget.WeaponEquipmentWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x2A0 Size: 0x8 - StructProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.UberGraphFrame */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.CanvasPanel_1 */
	ExternalPtr<struct UBorder> FocusColorBG; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.FocusColorBG */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_C> Weapon_01; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.Weapon_01 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_C> Weapon_02; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.Weapon_02 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_C> Weapon_03; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.Weapon_03 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_C> Weapon_04; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.Weapon_04 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_C> Weapon_05; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.Weapon_05 */
	FText TitleText; /* Ofs: 0x2E0 Size: 0x18 - TextProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.TitleText */
	int32_t SelectedTabIndex; /* Ofs: 0x2F8 Size: 0x4 - IntProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.SelectedTabIndex */
	uint8_t UnknownData2FC[0x4];
	ExternalPtr<struct UWeaponProcessor> WeaponProcessor; /* Ofs: 0x300 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.WeaponProcessor */
	TArray<ExternalPtr<struct UWeaponEquipmentSlotWidget_C>> WeaponSlotList; /* Ofs: 0x308 Size: 0x10 - ArrayProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.WeaponSlotList */
	uint8_t boolField318;
	uint8_t UnknownData319[0x7];
	ExternalPtr<struct UTslItemDragDropOperation_C> TslItemDragDropOperation; /* Ofs: 0x320 Size: 0x8 - ObjectProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.TslItemDragDropOperation */
	int32_t FocusIndex; /* Ofs: 0x328 Size: 0x4 - IntProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.FocusIndex */
	uint8_t boolField32C;
	uint8_t UnknownData32D[0x3];
	int32_t SelfPuFocusIndex; /* Ofs: 0x330 Size: 0x4 - IntProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.SelfPuFocusIndex */
	uint8_t UnknownData334[0x4];
	FScriptMulticastDelegate OnInventoryDrop; /* Ofs: 0x338 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentWidget.WeaponEquipmentWidget_C.OnInventoryDrop */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetWeapon_01(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetWeapon_02(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetWeapon_03(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetWeapon_04(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetWeapon_05(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_C> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetSelectedTabIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0x300, value); }
	inline bool SetWeaponSlotList(t_structHelper inst, TArray<ExternalPtr<struct UWeaponEquipmentSlotWidget_C>> value) { inst.WriteOffset(0x308, value); }
	inline bool Equipment()
	{
		return boolField318& 0x1;
	}
	inline bool SetEquipment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x318, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTslItemDragDropOperation(t_structHelper inst, ExternalPtr<struct UTslItemDragDropOperation_C> value) { inst.WriteOffset(0x320, value); }
	inline bool SetFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x328, value); }
	inline bool bWantFocus()
	{
		return boolField32C& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x32C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSelfPuFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x330, value); }
	inline bool SetOnInventoryDrop(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x338, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponEquipmentWidget_C = sizeof(UWeaponEquipmentWidget_C); // 840
    static_assert(sizeof(UWeaponEquipmentWidget_C) == 0x348, "Size of UWeaponEquipmentWidget_C is not correct.");
	auto constexpr UWeaponEquipmentWidget_C_UberGraphFrame_Offset = offsetof(UWeaponEquipmentWidget_C, UberGraphFrame);
	static_assert(UWeaponEquipmentWidget_C_UberGraphFrame_Offset == 0x2a0, "UWeaponEquipmentWidget_C::UberGraphFrame offset is not 2a0");
	auto constexpr UWeaponEquipmentWidget_C_CanvasPanel_1_Offset = offsetof(UWeaponEquipmentWidget_C, CanvasPanel_1);
	static_assert(UWeaponEquipmentWidget_C_CanvasPanel_1_Offset == 0x2a8, "UWeaponEquipmentWidget_C::CanvasPanel_1 offset is not 2a8");
	auto constexpr UWeaponEquipmentWidget_C_FocusColorBG_Offset = offsetof(UWeaponEquipmentWidget_C, FocusColorBG);
	static_assert(UWeaponEquipmentWidget_C_FocusColorBG_Offset == 0x2b0, "UWeaponEquipmentWidget_C::FocusColorBG offset is not 2b0");
	auto constexpr UWeaponEquipmentWidget_C_Weapon_01_Offset = offsetof(UWeaponEquipmentWidget_C, Weapon_01);
	static_assert(UWeaponEquipmentWidget_C_Weapon_01_Offset == 0x2b8, "UWeaponEquipmentWidget_C::Weapon_01 offset is not 2b8");
	auto constexpr UWeaponEquipmentWidget_C_Weapon_02_Offset = offsetof(UWeaponEquipmentWidget_C, Weapon_02);
	static_assert(UWeaponEquipmentWidget_C_Weapon_02_Offset == 0x2c0, "UWeaponEquipmentWidget_C::Weapon_02 offset is not 2c0");
	auto constexpr UWeaponEquipmentWidget_C_Weapon_03_Offset = offsetof(UWeaponEquipmentWidget_C, Weapon_03);
	static_assert(UWeaponEquipmentWidget_C_Weapon_03_Offset == 0x2c8, "UWeaponEquipmentWidget_C::Weapon_03 offset is not 2c8");
	auto constexpr UWeaponEquipmentWidget_C_Weapon_04_Offset = offsetof(UWeaponEquipmentWidget_C, Weapon_04);
	static_assert(UWeaponEquipmentWidget_C_Weapon_04_Offset == 0x2d0, "UWeaponEquipmentWidget_C::Weapon_04 offset is not 2d0");
	auto constexpr UWeaponEquipmentWidget_C_Weapon_05_Offset = offsetof(UWeaponEquipmentWidget_C, Weapon_05);
	static_assert(UWeaponEquipmentWidget_C_Weapon_05_Offset == 0x2d8, "UWeaponEquipmentWidget_C::Weapon_05 offset is not 2d8");
	auto constexpr UWeaponEquipmentWidget_C_TitleText_Offset = offsetof(UWeaponEquipmentWidget_C, TitleText);
	static_assert(UWeaponEquipmentWidget_C_TitleText_Offset == 0x2e0, "UWeaponEquipmentWidget_C::TitleText offset is not 2e0");
	auto constexpr UWeaponEquipmentWidget_C_SelectedTabIndex_Offset = offsetof(UWeaponEquipmentWidget_C, SelectedTabIndex);
	static_assert(UWeaponEquipmentWidget_C_SelectedTabIndex_Offset == 0x2f8, "UWeaponEquipmentWidget_C::SelectedTabIndex offset is not 2f8");
	auto constexpr UWeaponEquipmentWidget_C_WeaponProcessor_Offset = offsetof(UWeaponEquipmentWidget_C, WeaponProcessor);
	static_assert(UWeaponEquipmentWidget_C_WeaponProcessor_Offset == 0x300, "UWeaponEquipmentWidget_C::WeaponProcessor offset is not 300");
	auto constexpr UWeaponEquipmentWidget_C_WeaponSlotList_Offset = offsetof(UWeaponEquipmentWidget_C, WeaponSlotList);
	static_assert(UWeaponEquipmentWidget_C_WeaponSlotList_Offset == 0x308, "UWeaponEquipmentWidget_C::WeaponSlotList offset is not 308");
	auto constexpr UWeaponEquipmentWidget_C_boolField318_Offset = offsetof(UWeaponEquipmentWidget_C, boolField318);
	static_assert(UWeaponEquipmentWidget_C_boolField318_Offset == 0x318, "UWeaponEquipmentWidget_C::boolField318 offset is not 318");
	auto constexpr UWeaponEquipmentWidget_C_TslItemDragDropOperation_Offset = offsetof(UWeaponEquipmentWidget_C, TslItemDragDropOperation);
	static_assert(UWeaponEquipmentWidget_C_TslItemDragDropOperation_Offset == 0x320, "UWeaponEquipmentWidget_C::TslItemDragDropOperation offset is not 320");
	auto constexpr UWeaponEquipmentWidget_C_FocusIndex_Offset = offsetof(UWeaponEquipmentWidget_C, FocusIndex);
	static_assert(UWeaponEquipmentWidget_C_FocusIndex_Offset == 0x328, "UWeaponEquipmentWidget_C::FocusIndex offset is not 328");
	auto constexpr UWeaponEquipmentWidget_C_boolField32C_Offset = offsetof(UWeaponEquipmentWidget_C, boolField32C);
	static_assert(UWeaponEquipmentWidget_C_boolField32C_Offset == 0x32c, "UWeaponEquipmentWidget_C::boolField32C offset is not 32c");
	auto constexpr UWeaponEquipmentWidget_C_SelfPuFocusIndex_Offset = offsetof(UWeaponEquipmentWidget_C, SelfPuFocusIndex);
	static_assert(UWeaponEquipmentWidget_C_SelfPuFocusIndex_Offset == 0x330, "UWeaponEquipmentWidget_C::SelfPuFocusIndex offset is not 330");
	auto constexpr UWeaponEquipmentWidget_C_OnInventoryDrop_Offset = offsetof(UWeaponEquipmentWidget_C, OnInventoryDrop);
	static_assert(UWeaponEquipmentWidget_C_OnInventoryDrop_Offset == 0x338, "UWeaponEquipmentWidget_C::OnInventoryDrop offset is not 338");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
