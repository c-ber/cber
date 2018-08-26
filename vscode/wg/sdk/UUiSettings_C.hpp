#pragma once
#include "UTslBaseOptionWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUiSettings_C // Size: 0x438
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UUiSettings_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169689); // id32("WidgetBlueprintGeneratedClass UiSettings.UiSettings_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3D0 Size: 0x8 - StructProperty UiSettings.UiSettings_C.UberGraphFrame */
	ExternalPtr<struct UQualityComboBox_C> ColorblindComboBox; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.ColorblindComboBox */
	ExternalPtr<struct UPresetColorComboBoxWidget_C> CrosshairColorComboBox; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.CrosshairColorComboBox */
	ExternalPtr<struct UQualityComboBox_C> EquipmentsComboBox; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.EquipmentsComboBox */
	ExternalPtr<struct UQualityComboBox_C> IconKillfeedComboBox; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.IconKillfeedComboBox */
	ExternalPtr<struct UQualityComboBox_C> InventoryScreenCharacterComboBox; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.InventoryScreenCharacterComboBox */
	ExternalPtr<struct UQualityComboBox_C> MinimapColorComboBox; /* Ofs: 0x400 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.MinimapColorComboBox */
	ExternalPtr<struct UQualityComboBox_C> WeaponSlotComboBox; /* Ofs: 0x408 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.WeaponSlotComboBox */
	ExternalPtr<struct UQualitySliderWidget_C> ZoomSpeedSlider; /* Ofs: 0x410 Size: 0x8 - ObjectProperty UiSettings.UiSettings_C.ZoomSpeedSlider */
	FString StrSATURATED; /* Ofs: 0x418 Size: 0x10 - StrProperty UiSettings.UiSettings_C.StrSATURATED */
	FString StrDESATURATED; /* Ofs: 0x428 Size: 0x10 - StrProperty UiSettings.UiSettings_C.StrDESATURATED */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetColorblindComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetCrosshairColorComboBox(t_structHelper inst, ExternalPtr<struct UPresetColorComboBoxWidget_C> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetEquipmentsComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetIconKillfeedComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetInventoryScreenCharacterComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetMinimapColorComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetWeaponSlotComboBox(t_structHelper inst, ExternalPtr<struct UQualityComboBox_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetZoomSpeedSlider(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetStrSATURATED(t_structHelper inst, FString value) { inst.WriteOffset(0x418, value); }
	inline bool SetStrDESATURATED(t_structHelper inst, FString value) { inst.WriteOffset(0x428, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUiSettings_C = sizeof(UUiSettings_C); // 1080
    static_assert(sizeof(UUiSettings_C) == 0x438, "Size of UUiSettings_C is not correct.");
	auto constexpr UUiSettings_C_UberGraphFrame_Offset = offsetof(UUiSettings_C, UberGraphFrame);
	static_assert(UUiSettings_C_UberGraphFrame_Offset == 0x3d0, "UUiSettings_C::UberGraphFrame offset is not 3d0");
	auto constexpr UUiSettings_C_ColorblindComboBox_Offset = offsetof(UUiSettings_C, ColorblindComboBox);
	static_assert(UUiSettings_C_ColorblindComboBox_Offset == 0x3d8, "UUiSettings_C::ColorblindComboBox offset is not 3d8");
	auto constexpr UUiSettings_C_CrosshairColorComboBox_Offset = offsetof(UUiSettings_C, CrosshairColorComboBox);
	static_assert(UUiSettings_C_CrosshairColorComboBox_Offset == 0x3e0, "UUiSettings_C::CrosshairColorComboBox offset is not 3e0");
	auto constexpr UUiSettings_C_EquipmentsComboBox_Offset = offsetof(UUiSettings_C, EquipmentsComboBox);
	static_assert(UUiSettings_C_EquipmentsComboBox_Offset == 0x3e8, "UUiSettings_C::EquipmentsComboBox offset is not 3e8");
	auto constexpr UUiSettings_C_IconKillfeedComboBox_Offset = offsetof(UUiSettings_C, IconKillfeedComboBox);
	static_assert(UUiSettings_C_IconKillfeedComboBox_Offset == 0x3f0, "UUiSettings_C::IconKillfeedComboBox offset is not 3f0");
	auto constexpr UUiSettings_C_InventoryScreenCharacterComboBox_Offset = offsetof(UUiSettings_C, InventoryScreenCharacterComboBox);
	static_assert(UUiSettings_C_InventoryScreenCharacterComboBox_Offset == 0x3f8, "UUiSettings_C::InventoryScreenCharacterComboBox offset is not 3f8");
	auto constexpr UUiSettings_C_MinimapColorComboBox_Offset = offsetof(UUiSettings_C, MinimapColorComboBox);
	static_assert(UUiSettings_C_MinimapColorComboBox_Offset == 0x400, "UUiSettings_C::MinimapColorComboBox offset is not 400");
	auto constexpr UUiSettings_C_WeaponSlotComboBox_Offset = offsetof(UUiSettings_C, WeaponSlotComboBox);
	static_assert(UUiSettings_C_WeaponSlotComboBox_Offset == 0x408, "UUiSettings_C::WeaponSlotComboBox offset is not 408");
	auto constexpr UUiSettings_C_ZoomSpeedSlider_Offset = offsetof(UUiSettings_C, ZoomSpeedSlider);
	static_assert(UUiSettings_C_ZoomSpeedSlider_Offset == 0x410, "UUiSettings_C::ZoomSpeedSlider offset is not 410");
	auto constexpr UUiSettings_C_StrSATURATED_Offset = offsetof(UUiSettings_C, StrSATURATED);
	static_assert(UUiSettings_C_StrSATURATED_Offset == 0x418, "UUiSettings_C::StrSATURATED offset is not 418");
	auto constexpr UUiSettings_C_StrDESATURATED_Offset = offsetof(UUiSettings_C, StrDESATURATED);
	static_assert(UUiSettings_C_StrDESATURATED_Offset == 0x428, "UUiSettings_C::StrDESATURATED offset is not 428");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
