#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UQualityComboBox_C // Size: 0x2A0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UQualityComboBox_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(169568); // id32("WidgetBlueprintGeneratedClass QualityComboBox.QualityComboBox_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty QualityComboBox.QualityComboBox_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty QualityComboBox.QualityComboBox_C.Button_1 */
	ExternalPtr<struct UComboBoxString> ComboBox; /* Ofs: 0x258 Size: 0x8 - ObjectProperty QualityComboBox.QualityComboBox_C.ComboBox */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty QualityComboBox.QualityComboBox_C.TextBlock_1 */
	FText DisplayName; /* Ofs: 0x268 Size: 0x18 - TextProperty QualityComboBox.QualityComboBox_C.DisplayName */
	FScriptMulticastDelegate OnSelectionChanged; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty QualityComboBox.QualityComboBox_C.OnSelectionChanged */
	TArray<struct FComboBoxOption> OptionList; /* Ofs: 0x290 Size: 0x10 - ArrayProperty QualityComboBox.QualityComboBox_C.OptionList */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetComboBox(t_structHelper inst, ExternalPtr<struct UComboBoxString> value) { inst.WriteOffset(0x258, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x268, value); }
	inline bool SetOnSelectionChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
	inline bool SetOptionList(t_structHelper inst, TArray<struct FComboBoxOption> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUQualityComboBox_C = sizeof(UQualityComboBox_C); // 672
    static_assert(sizeof(UQualityComboBox_C) == 0x2A0, "Size of UQualityComboBox_C is not correct.");
	auto constexpr UQualityComboBox_C_UberGraphFrame_Offset = offsetof(UQualityComboBox_C, UberGraphFrame);
	static_assert(UQualityComboBox_C_UberGraphFrame_Offset == 0x248, "UQualityComboBox_C::UberGraphFrame offset is not 248");
	auto constexpr UQualityComboBox_C_Button_1_Offset = offsetof(UQualityComboBox_C, Button_1);
	static_assert(UQualityComboBox_C_Button_1_Offset == 0x250, "UQualityComboBox_C::Button_1 offset is not 250");
	auto constexpr UQualityComboBox_C_ComboBox_Offset = offsetof(UQualityComboBox_C, ComboBox);
	static_assert(UQualityComboBox_C_ComboBox_Offset == 0x258, "UQualityComboBox_C::ComboBox offset is not 258");
	auto constexpr UQualityComboBox_C_TextBlock_1_Offset = offsetof(UQualityComboBox_C, TextBlock_1);
	static_assert(UQualityComboBox_C_TextBlock_1_Offset == 0x260, "UQualityComboBox_C::TextBlock_1 offset is not 260");
	auto constexpr UQualityComboBox_C_DisplayName_Offset = offsetof(UQualityComboBox_C, DisplayName);
	static_assert(UQualityComboBox_C_DisplayName_Offset == 0x268, "UQualityComboBox_C::DisplayName offset is not 268");
	auto constexpr UQualityComboBox_C_OnSelectionChanged_Offset = offsetof(UQualityComboBox_C, OnSelectionChanged);
	static_assert(UQualityComboBox_C_OnSelectionChanged_Offset == 0x280, "UQualityComboBox_C::OnSelectionChanged offset is not 280");
	auto constexpr UQualityComboBox_C_OptionList_Offset = offsetof(UQualityComboBox_C, OptionList);
	static_assert(UQualityComboBox_C_OptionList_Offset == 0x290, "UQualityComboBox_C::OptionList offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
