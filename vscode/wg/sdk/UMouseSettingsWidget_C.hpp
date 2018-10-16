#pragma once
#include "UBaseOptionWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMouseSettingsWidget_C // Size: 0x440
	: public UBaseOptionWidget_C // Size: 0x3F4
{
private:
	typedef UMouseSettingsWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168947); // id32("WidgetBlueprintGeneratedClass MouseSettingsWidget.MouseSettingsWidget_C")
		return ptr;
	}
	uint8_t UnknownData3F4[0x4];
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x3F8 Size: 0x8 - StructProperty MouseSettingsWidget.MouseSettingsWidget_C.UberGraphFrame */
	ExternalPtr<struct UChildOptionTitleWidget_C> ChildOptionTitleWidget; /* Ofs: 0x400 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.ChildOptionTitleWidget */
	ExternalPtr<struct UScrollBox> KeyList; /* Ofs: 0x408 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.KeyList */
	ExternalPtr<struct UQualitySliderWidget_C> QualitySliderWidget; /* Ofs: 0x410 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.QualitySliderWidget */
	ExternalPtr<struct UTslCheckBox_C> TslCheckBox; /* Ofs: 0x418 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.TslCheckBox */
	ExternalPtr<struct UQualitySliderWidget_C> VertSensitivityMul; /* Ofs: 0x420 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.VertSensitivityMul */
	TArray<ExternalPtr<struct UQualitySliderWidget_C>> KeyBorders; /* Ofs: 0x428 Size: 0x10 - ArrayProperty MouseSettingsWidget.MouseSettingsWidget_C.KeyBorders */
	ExternalPtr<struct UQualitySliderWidget_C> NewVar_1; /* Ofs: 0x438 Size: 0x8 - ObjectProperty MouseSettingsWidget.MouseSettingsWidget_C.NewVar_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetChildOptionTitleWidget(t_structHelper inst, ExternalPtr<struct UChildOptionTitleWidget_C> value) { inst.WriteOffset(0x400, value); }
	inline bool SetKeyList(t_structHelper inst, ExternalPtr<struct UScrollBox> value) { inst.WriteOffset(0x408, value); }
	inline bool SetQualitySliderWidget(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x410, value); }
	inline bool SetTslCheckBox(t_structHelper inst, ExternalPtr<struct UTslCheckBox_C> value) { inst.WriteOffset(0x418, value); }
	inline bool SetVertSensitivityMul(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x420, value); }
	inline bool SetKeyBorders(t_structHelper inst, TArray<ExternalPtr<struct UQualitySliderWidget_C>> value) { inst.WriteOffset(0x428, value); }
	inline bool SetNewVar_1(t_structHelper inst, ExternalPtr<struct UQualitySliderWidget_C> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMouseSettingsWidget_C = sizeof(UMouseSettingsWidget_C); // 1088
    static_assert(sizeof(UMouseSettingsWidget_C) == 0x440, "Size of UMouseSettingsWidget_C is not correct.");
	auto constexpr UMouseSettingsWidget_C_UberGraphFrame_Offset = offsetof(UMouseSettingsWidget_C, UberGraphFrame);
	static_assert(UMouseSettingsWidget_C_UberGraphFrame_Offset == 0x3f8, "UMouseSettingsWidget_C::UberGraphFrame offset is not 3f8");
	auto constexpr UMouseSettingsWidget_C_ChildOptionTitleWidget_Offset = offsetof(UMouseSettingsWidget_C, ChildOptionTitleWidget);
	static_assert(UMouseSettingsWidget_C_ChildOptionTitleWidget_Offset == 0x400, "UMouseSettingsWidget_C::ChildOptionTitleWidget offset is not 400");
	auto constexpr UMouseSettingsWidget_C_KeyList_Offset = offsetof(UMouseSettingsWidget_C, KeyList);
	static_assert(UMouseSettingsWidget_C_KeyList_Offset == 0x408, "UMouseSettingsWidget_C::KeyList offset is not 408");
	auto constexpr UMouseSettingsWidget_C_QualitySliderWidget_Offset = offsetof(UMouseSettingsWidget_C, QualitySliderWidget);
	static_assert(UMouseSettingsWidget_C_QualitySliderWidget_Offset == 0x410, "UMouseSettingsWidget_C::QualitySliderWidget offset is not 410");
	auto constexpr UMouseSettingsWidget_C_TslCheckBox_Offset = offsetof(UMouseSettingsWidget_C, TslCheckBox);
	static_assert(UMouseSettingsWidget_C_TslCheckBox_Offset == 0x418, "UMouseSettingsWidget_C::TslCheckBox offset is not 418");
	auto constexpr UMouseSettingsWidget_C_VertSensitivityMul_Offset = offsetof(UMouseSettingsWidget_C, VertSensitivityMul);
	static_assert(UMouseSettingsWidget_C_VertSensitivityMul_Offset == 0x420, "UMouseSettingsWidget_C::VertSensitivityMul offset is not 420");
	auto constexpr UMouseSettingsWidget_C_KeyBorders_Offset = offsetof(UMouseSettingsWidget_C, KeyBorders);
	static_assert(UMouseSettingsWidget_C_KeyBorders_Offset == 0x428, "UMouseSettingsWidget_C::KeyBorders offset is not 428");
	auto constexpr UMouseSettingsWidget_C_NewVar_1_Offset = offsetof(UMouseSettingsWidget_C, NewVar_1);
	static_assert(UMouseSettingsWidget_C_NewVar_1_Offset == 0x438, "UMouseSettingsWidget_C::NewVar_1 offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
