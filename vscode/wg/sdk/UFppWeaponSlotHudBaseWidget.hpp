#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_UserWidget.hpp"
#include "FUmgWidgetBinder_RetainerBox.hpp"
#include "EColorBlindType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFppWeaponSlotHudBaseWidget // Size: 0x388
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UFppWeaponSlotHudBaseWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1524); // id32("Class TslGame.FppWeaponSlotHudBaseWidget")
		return ptr;
	}
	FUmgWidgetBinder_UserWidget WeaponSlotBinder; /* Ofs: 0x300 Size: 0x20 - StructProperty TslGame.FppWeaponSlotHudBaseWidget.WeaponSlotBinder */
	FUmgWidgetBinder_RetainerBox WeaponSlotRetainerBoxBinder; /* Ofs: 0x320 Size: 0x20 - StructProperty TslGame.FppWeaponSlotHudBaseWidget.WeaponSlotRetainerBoxBinder */
	FUmgWidgetBinder_UserWidget WeaponSlotListBinder; /* Ofs: 0x340 Size: 0x20 - StructProperty TslGame.FppWeaponSlotHudBaseWidget.WeaponSlotListBinder */
	FUmgWidgetBinder_RetainerBox WeaponSlotListRetainerBoxBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.FppWeaponSlotHudBaseWidget.WeaponSlotListRetainerBoxBinder */
	TEnumAsByte<enum EColorBlindType> SavedColorBlindType; /* Ofs: 0x380 Size: 0x1 - EnumProperty TslGame.FppWeaponSlotHudBaseWidget.SavedColorBlindType */
	uint8_t UnknownData381[0x7];


	inline bool SetWeaponSlotBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x300, value); }
	inline bool SetWeaponSlotRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x320, value); }
	inline bool SetWeaponSlotListBinder(t_structHelper inst, FUmgWidgetBinder_UserWidget value) { inst.WriteOffset(0x340, value); }
	inline bool SetWeaponSlotListRetainerBoxBinder(t_structHelper inst, FUmgWidgetBinder_RetainerBox value) { inst.WriteOffset(0x360, value); }
	inline bool SetSavedColorBlindType(t_structHelper inst, TEnumAsByte<enum EColorBlindType> value) { inst.WriteOffset(0x380, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFppWeaponSlotHudBaseWidget = sizeof(UFppWeaponSlotHudBaseWidget); // 904
    static_assert(sizeof(UFppWeaponSlotHudBaseWidget) == 0x388, "Size of UFppWeaponSlotHudBaseWidget is not correct.");
	auto constexpr UFppWeaponSlotHudBaseWidget_WeaponSlotBinder_Offset = offsetof(UFppWeaponSlotHudBaseWidget, WeaponSlotBinder);
	static_assert(UFppWeaponSlotHudBaseWidget_WeaponSlotBinder_Offset == 0x300, "UFppWeaponSlotHudBaseWidget::WeaponSlotBinder offset is not 300");
	auto constexpr UFppWeaponSlotHudBaseWidget_WeaponSlotRetainerBoxBinder_Offset = offsetof(UFppWeaponSlotHudBaseWidget, WeaponSlotRetainerBoxBinder);
	static_assert(UFppWeaponSlotHudBaseWidget_WeaponSlotRetainerBoxBinder_Offset == 0x320, "UFppWeaponSlotHudBaseWidget::WeaponSlotRetainerBoxBinder offset is not 320");
	auto constexpr UFppWeaponSlotHudBaseWidget_WeaponSlotListBinder_Offset = offsetof(UFppWeaponSlotHudBaseWidget, WeaponSlotListBinder);
	static_assert(UFppWeaponSlotHudBaseWidget_WeaponSlotListBinder_Offset == 0x340, "UFppWeaponSlotHudBaseWidget::WeaponSlotListBinder offset is not 340");
	auto constexpr UFppWeaponSlotHudBaseWidget_WeaponSlotListRetainerBoxBinder_Offset = offsetof(UFppWeaponSlotHudBaseWidget, WeaponSlotListRetainerBoxBinder);
	static_assert(UFppWeaponSlotHudBaseWidget_WeaponSlotListRetainerBoxBinder_Offset == 0x360, "UFppWeaponSlotHudBaseWidget::WeaponSlotListRetainerBoxBinder offset is not 360");
	auto constexpr UFppWeaponSlotHudBaseWidget_SavedColorBlindType_Offset = offsetof(UFppWeaponSlotHudBaseWidget, SavedColorBlindType);
	static_assert(UFppWeaponSlotHudBaseWidget_SavedColorBlindType_Offset == 0x380, "UFppWeaponSlotHudBaseWidget::SavedColorBlindType offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
