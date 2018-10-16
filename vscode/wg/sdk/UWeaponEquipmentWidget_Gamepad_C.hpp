#pragma once
#include "UInventoryBaseWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponEquipmentWidget_Gamepad_C // Size: 0x340
	: public UInventoryBaseWidget_C // Size: 0x2A0
{
private:
	typedef UWeaponEquipmentWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61768); // id32("WidgetBlueprintGeneratedClass WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x2A0 Size: 0x8 - StructProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UBorder> FocusColorBG; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.FocusColorBG */
	ExternalPtr<struct USectionTitleWidget_Gamepad_C> SectionTitleWidget_Gamepad; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.SectionTitleWidget_Gamepad */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> Weapon_001; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.Weapon_001 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> Weapon_002; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.Weapon_002 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> Weapon_003; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.Weapon_003 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> Weapon_004; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.Weapon_004 */
	ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> Weapon_005; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.Weapon_005 */
	FText TitleText; /* Ofs: 0x2E0 Size: 0x18 - TextProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.TitleText */
	ExternalPtr<struct UWeaponProcessor> WeaponProcessor; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.WeaponProcessor */
	TArray<ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C>> WeaponSlotList; /* Ofs: 0x300 Size: 0x10 - ArrayProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.WeaponSlotList */
	ExternalPtr<struct UTslItemDragDropOperation_C> TslItemDragDropOperation; /* Ofs: 0x310 Size: 0x8 - ObjectProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.TslItemDragDropOperation */
	int32_t FocusIndex; /* Ofs: 0x318 Size: 0x4 - IntProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.FocusIndex */
	uint8_t boolField31C;
	uint8_t UnknownData31D[0x3];
	FScriptMulticastDelegate OnAttachmentFocused; /* Ofs: 0x320 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.OnAttachmentFocused */
	FScriptMulticastDelegate OnWeaponEquipmentFocused; /* Ofs: 0x330 Size: 0x10 - MulticastDelegateProperty WeaponEquipmentWidget_Gamepad.WeaponEquipmentWidget_Gamepad_C.OnWeaponEquipmentFocused */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetFocusColorBG(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetSectionTitleWidget_Gamepad(t_structHelper inst, ExternalPtr<struct USectionTitleWidget_Gamepad_C> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetWeapon_001(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetWeapon_002(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetWeapon_003(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetWeapon_004(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetWeapon_005(t_structHelper inst, ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetTitleText(t_structHelper inst, FText value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetWeaponProcessor(t_structHelper inst, ExternalPtr<struct UWeaponProcessor> value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetWeaponSlotList(t_structHelper inst, TArray<ExternalPtr<struct UWeaponEquipmentSlotWidget_Gamepad_ver2_C>> value) { inst.WriteOffset(0x300, value); }
	inline bool SetTslItemDragDropOperation(t_structHelper inst, ExternalPtr<struct UTslItemDragDropOperation_C> value) { inst.WriteOffset(0x310, value); }
	inline bool SetFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x318, value); }
	inline bool bWantFocus()
	{
		return boolField31C& 0x1;
	}
	inline bool SetbWantFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x31C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnAttachmentFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x320, value); }
	inline bool SetOnWeaponEquipmentFocused(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x330, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponEquipmentWidget_Gamepad_C = sizeof(UWeaponEquipmentWidget_Gamepad_C); // 832
    static_assert(sizeof(UWeaponEquipmentWidget_Gamepad_C) == 0x340, "Size of UWeaponEquipmentWidget_Gamepad_C is not correct.");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, UberGraphFrame);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_UberGraphFrame_Offset == 0x2a0, "UWeaponEquipmentWidget_Gamepad_C::UberGraphFrame offset is not 2a0");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_FocusColorBG_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, FocusColorBG);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_FocusColorBG_Offset == 0x2a8, "UWeaponEquipmentWidget_Gamepad_C::FocusColorBG offset is not 2a8");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, SectionTitleWidget_Gamepad);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_SectionTitleWidget_Gamepad_Offset == 0x2b0, "UWeaponEquipmentWidget_Gamepad_C::SectionTitleWidget_Gamepad offset is not 2b0");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_Weapon_001_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, Weapon_001);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_Weapon_001_Offset == 0x2b8, "UWeaponEquipmentWidget_Gamepad_C::Weapon_001 offset is not 2b8");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_Weapon_002_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, Weapon_002);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_Weapon_002_Offset == 0x2c0, "UWeaponEquipmentWidget_Gamepad_C::Weapon_002 offset is not 2c0");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_Weapon_003_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, Weapon_003);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_Weapon_003_Offset == 0x2c8, "UWeaponEquipmentWidget_Gamepad_C::Weapon_003 offset is not 2c8");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_Weapon_004_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, Weapon_004);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_Weapon_004_Offset == 0x2d0, "UWeaponEquipmentWidget_Gamepad_C::Weapon_004 offset is not 2d0");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_Weapon_005_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, Weapon_005);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_Weapon_005_Offset == 0x2d8, "UWeaponEquipmentWidget_Gamepad_C::Weapon_005 offset is not 2d8");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_TitleText_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, TitleText);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_TitleText_Offset == 0x2e0, "UWeaponEquipmentWidget_Gamepad_C::TitleText offset is not 2e0");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_WeaponProcessor_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, WeaponProcessor);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_WeaponProcessor_Offset == 0x2f8, "UWeaponEquipmentWidget_Gamepad_C::WeaponProcessor offset is not 2f8");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_WeaponSlotList_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, WeaponSlotList);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_WeaponSlotList_Offset == 0x300, "UWeaponEquipmentWidget_Gamepad_C::WeaponSlotList offset is not 300");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_TslItemDragDropOperation_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, TslItemDragDropOperation);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_TslItemDragDropOperation_Offset == 0x310, "UWeaponEquipmentWidget_Gamepad_C::TslItemDragDropOperation offset is not 310");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_FocusIndex_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, FocusIndex);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_FocusIndex_Offset == 0x318, "UWeaponEquipmentWidget_Gamepad_C::FocusIndex offset is not 318");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_boolField31C_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, boolField31C);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_boolField31C_Offset == 0x31c, "UWeaponEquipmentWidget_Gamepad_C::boolField31C offset is not 31c");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_OnAttachmentFocused_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, OnAttachmentFocused);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_OnAttachmentFocused_Offset == 0x320, "UWeaponEquipmentWidget_Gamepad_C::OnAttachmentFocused offset is not 320");
	auto constexpr UWeaponEquipmentWidget_Gamepad_C_OnWeaponEquipmentFocused_Offset = offsetof(UWeaponEquipmentWidget_Gamepad_C, OnWeaponEquipmentFocused);
	static_assert(UWeaponEquipmentWidget_Gamepad_C_OnWeaponEquipmentFocused_Offset == 0x330, "UWeaponEquipmentWidget_Gamepad_C::OnWeaponEquipmentFocused offset is not 330");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
