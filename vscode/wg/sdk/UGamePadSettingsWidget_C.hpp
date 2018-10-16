#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGamePadSettingsWidget_C // Size: 0x4C0
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UGamePadSettingsWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169020); // id32("WidgetBlueprintGeneratedClass GamePadSettingsWidget.GamePadSettingsWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty GamePadSettingsWidget.GamePadSettingsWidget_C.UberGraphFrame */
	ExternalPtr<struct UTslCheckBox_C> CheckBoxGamePadX; /* Ofs: 0x400 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.CheckBoxGamePadX */
	ExternalPtr<struct UTslCheckBox_C> CheckBoxGamePadY; /* Ofs: 0x408 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.CheckBoxGamePadY */
	ExternalPtr<struct UTslCheckBox_C> CheckVibration; /* Ofs: 0x410 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.CheckVibration */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x418 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UQualitySliderWidget_C> DEADZONE; /* Ofs: 0x420 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.DEADZONE */
	ExternalPtr<struct UTslCheckBox_C> DeathCamCheckBox; /* Ofs: 0x428 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.DeathCamCheckBox */
	ExternalPtr<struct UTslCheckBox_C> DVRCheckBox; /* Ofs: 0x430 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.DVRCheckBox */
	ExternalPtr<struct UScrollBox> KeyList; /* Ofs: 0x438 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.KeyList */
	ExternalPtr<struct UQualitySliderWidget_C> QualitySliderWidget; /* Ofs: 0x440 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.QualitySliderWidget */
	ExternalPtr<struct UTslDataSteperWidget_C> TslDataSteperWidget; /* Ofs: 0x448 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.TslDataSteperWidget */
	TArray<ExternalPtr<struct UQualitySliderWidget_C>> KeyBorders; /* Ofs: 0x450 Size: 0x10 - ArrayProperty GamePadSettingsWidget.GamePadSettingsWidget_C.KeyBorders */
	ExternalPtr<struct UQualitySliderWidget_C> NewVar_0_1; /* Ofs: 0x460 Size: 0x8 - ObjectProperty GamePadSettingsWidget.GamePadSettingsWidget_C.NewVar_0_1 */
	TArray<ExternalPtr<struct UWidget>> FocusableWidgetList; /* Ofs: 0x468 Size: 0x10 - ArrayProperty GamePadSettingsWidget.GamePadSettingsWidget_C.FocusableWidgetList */
	int32_t FocusIndex; /* Ofs: 0x478 Size: 0x4 - IntProperty GamePadSettingsWidget.GamePadSettingsWidget_C.FocusIndex */
	uint8_t UnknownData47C[0x4];
	FString PresetStr_1; /* Ofs: 0x480 Size: 0x10 - StrProperty GamePadSettingsWidget.GamePadSettingsWidget_C.PresetStr_1 */
	FString PresetStr_2; /* Ofs: 0x490 Size: 0x10 - StrProperty GamePadSettingsWidget.GamePadSettingsWidget_C.PresetStr_2 */
	FString StrNone; /* Ofs: 0x4A0 Size: 0x10 - StrProperty GamePadSettingsWidget.GamePadSettingsWidget_C.StrNone */
	TArray<struct FString> NewVar_1; /* Ofs: 0x4B0 Size: 0x10 - ArrayProperty GamePadSettingsWidget.GamePadSettingsWidget_C.NewVar_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetCheckBoxGamePadX(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetCheckBoxGamePadY(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x408, value); }
	inline bool SetCheckVibration(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetDEADZONE(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetDeathCamCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x428, value); }
	inline bool SetDVRCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x430, value); }
	inline bool SetKeyList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x438, value); }
	inline bool SetQualitySliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x440, value); }
	inline bool SetTslDataSteperWidget(t_structHelper inst, ExternalPtr<struct UTslDataSteperWidget_C> value) { inst.WriteOffset(0x448, value); }
	inline bool SetKeyBorders(t_structHelper inst, TArray<ExternalPtr<struct UQualitySliderWidget_C>> value) { inst.WriteOffset(0x450, value); }
	inline bool SetNewVar_0_1(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x460, value); }
	inline bool SetFocusableWidgetList(t_structHelper inst, TArray<ExternalPtr<struct UWidget>> value) { inst.WriteOffset(0x468, value); }
	inline bool SetFocusIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x478, value); }
	inline bool SetPresetStr_1(t_structHelper inst, FString value) { inst.WriteOffset(0x480, value); }
	inline bool SetPresetStr_2(t_structHelper inst, FString value) { inst.WriteOffset(0x490, value); }
	inline bool SetStrNone(t_structHelper inst, FString value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetNewVar_1(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGamePadSettingsWidget_C = sizeof(UGamePadSettingsWidget_C); // 1216
    static_assert(sizeof(UGamePadSettingsWidget_C) == 0x4C0, "Size of UGamePadSettingsWidget_C is not correct.");
	auto constexpr UGamePadSettingsWidget_C_UberGraphFrame_Offset = offsetof(UGamePadSettingsWidget_C, UberGraphFrame);
	static_assert(UGamePadSettingsWidget_C_UberGraphFrame_Offset == 0x3f8, "UGamePadSettingsWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UGamePadSettingsWidget_C_CheckBoxGamePadX_Offset = offsetof(UGamePadSettingsWidget_C, CheckBoxGamePadX);
	static_assert(UGamePadSettingsWidget_C_CheckBoxGamePadX_Offset == 0x400, "UGamePadSettingsWidget_C::CheckBoxGamePadX offset is not 400");
	auto constexpr UGamePadSettingsWidget_C_CheckBoxGamePadY_Offset = offsetof(UGamePadSettingsWidget_C, CheckBoxGamePadY);
	static_assert(UGamePadSettingsWidget_C_CheckBoxGamePadY_Offset == 0x408, "UGamePadSettingsWidget_C::CheckBoxGamePadY offset is not 408");
	auto constexpr UGamePadSettingsWidget_C_CheckVibration_Offset = offsetof(UGamePadSettingsWidget_C, CheckVibration);
	static_assert(UGamePadSettingsWidget_C_CheckVibration_Offset == 0x410, "UGamePadSettingsWidget_C::CheckVibration offset is not 410");
	auto constexpr UGamePadSettingsWidget_C_ChildOptionTitleWidget_Offset = offsetof(UGamePadSettingsWidget_C, ChildOptionTitleWidget);
	static_assert(UGamePadSettingsWidget_C_ChildOptionTitleWidget_Offset == 0x418, "UGamePadSettingsWidget_C::ChildOptionTitleWidget offset is not 418");
	auto constexpr UGamePadSettingsWidget_C_DEADZONE_Offset = offsetof(UGamePadSettingsWidget_C, DEADZONE);
	static_assert(UGamePadSettingsWidget_C_DEADZONE_Offset == 0x420, "UGamePadSettingsWidget_C::DEADZONE offset is not 420");
	auto constexpr UGamePadSettingsWidget_C_DeathCamCheckBox_Offset = offsetof(UGamePadSettingsWidget_C, DeathCamCheckBox);
	static_assert(UGamePadSettingsWidget_C_DeathCamCheckBox_Offset == 0x428, "UGamePadSettingsWidget_C::DeathCamCheckBox offset is not 428");
	auto constexpr UGamePadSettingsWidget_C_DVRCheckBox_Offset = offsetof(UGamePadSettingsWidget_C, DVRCheckBox);
	static_assert(UGamePadSettingsWidget_C_DVRCheckBox_Offset == 0x430, "UGamePadSettingsWidget_C::DVRCheckBox offset is not 430");
	auto constexpr UGamePadSettingsWidget_C_KeyList_Offset = offsetof(UGamePadSettingsWidget_C, KeyList);
	static_assert(UGamePadSettingsWidget_C_KeyList_Offset == 0x438, "UGamePadSettingsWidget_C::KeyList offset is not 438");
	auto constexpr UGamePadSettingsWidget_C_QualitySliderWidget_Offset = offsetof(UGamePadSettingsWidget_C, QualitySliderWidget);
	static_assert(UGamePadSettingsWidget_C_QualitySliderWidget_Offset == 0x440, "UGamePadSettingsWidget_C::QualitySliderWidget offset is not 440");
	auto constexpr UGamePadSettingsWidget_C_TslDataSteperWidget_Offset = offsetof(UGamePadSettingsWidget_C, TslDataSteperWidget);
	static_assert(UGamePadSettingsWidget_C_TslDataSteperWidget_Offset == 0x448, "UGamePadSettingsWidget_C::TslDataSteperWidget offset is not 448");
	auto constexpr UGamePadSettingsWidget_C_KeyBorders_Offset = offsetof(UGamePadSettingsWidget_C, KeyBorders);
	static_assert(UGamePadSettingsWidget_C_KeyBorders_Offset == 0x450, "UGamePadSettingsWidget_C::KeyBorders offset is not 450");
	auto constexpr UGamePadSettingsWidget_C_NewVar_0_1_Offset = offsetof(UGamePadSettingsWidget_C, NewVar_0_1);
	static_assert(UGamePadSettingsWidget_C_NewVar_0_1_Offset == 0x460, "UGamePadSettingsWidget_C::NewVar_0_1 offset is not 460");
	auto constexpr UGamePadSettingsWidget_C_FocusableWidgetList_Offset = offsetof(UGamePadSettingsWidget_C, FocusableWidgetList);
	static_assert(UGamePadSettingsWidget_C_FocusableWidgetList_Offset == 0x468, "UGamePadSettingsWidget_C::FocusableWidgetList offset is not 468");
	auto constexpr UGamePadSettingsWidget_C_FocusIndex_Offset = offsetof(UGamePadSettingsWidget_C, FocusIndex);
	static_assert(UGamePadSettingsWidget_C_FocusIndex_Offset == 0x478, "UGamePadSettingsWidget_C::FocusIndex offset is not 478");
	auto constexpr UGamePadSettingsWidget_C_PresetStr_1_Offset = offsetof(UGamePadSettingsWidget_C, PresetStr_1);
	static_assert(UGamePadSettingsWidget_C_PresetStr_1_Offset == 0x480, "UGamePadSettingsWidget_C::PresetStr_1 offset is not 480");
	auto constexpr UGamePadSettingsWidget_C_PresetStr_2_Offset = offsetof(UGamePadSettingsWidget_C, PresetStr_2);
	static_assert(UGamePadSettingsWidget_C_PresetStr_2_Offset == 0x490, "UGamePadSettingsWidget_C::PresetStr_2 offset is not 490");
	auto constexpr UGamePadSettingsWidget_C_StrNone_Offset = offsetof(UGamePadSettingsWidget_C, StrNone);
	static_assert(UGamePadSettingsWidget_C_StrNone_Offset == 0x4a0, "UGamePadSettingsWidget_C::StrNone offset is not 4a0");
	auto constexpr UGamePadSettingsWidget_C_NewVar_1_Offset = offsetof(UGamePadSettingsWidget_C, NewVar_1);
	static_assert(UGamePadSettingsWidget_C_NewVar_1_Offset == 0x4b0, "UGamePadSettingsWidget_C::NewVar_1 offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
