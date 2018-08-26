#pragma once
#include "UWidget.hpp"
#include "FComboBoxStyle.hpp"
#include "FTableRowStyle.hpp"
#include "FMargin.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UComboBoxString // Size: 0xDB0
	: public UWidget // Size: 0x130
{
private:
	typedef UComboBoxString t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(486); // id32("Class UMG.ComboBoxString")
		return ptr;
	}
	TArray<struct FString> DefaultOptions; /* Ofs: 0x130 Size: 0x10 - ArrayProperty UMG.ComboBoxString.DefaultOptions */
	FString SelectedOption; /* Ofs: 0x140 Size: 0x10 - StrProperty UMG.ComboBoxString.SelectedOption */
	FComboBoxStyle WidgetStyle; /* Ofs: 0x150 Size: 0x428 - StructProperty UMG.ComboBoxString.WidgetStyle */
	FTableRowStyle ItemStyle; /* Ofs: 0x578 Size: 0x718 - StructProperty UMG.ComboBoxString.ItemStyle */
	FMargin ContentPadding; /* Ofs: 0xC90 Size: 0x10 - StructProperty UMG.ComboBoxString.ContentPadding */
	float MaxListHeight; /* Ofs: 0xCA0 Size: 0x4 - FloatProperty UMG.ComboBoxString.MaxListHeight */
	uint8_t boolFieldCA4;
	uint8_t boolFieldCA5;
	uint8_t UnknownDataCA6[0x2];
	FSlateFontInfo Font; /* Ofs: 0xCA8 Size: 0x68 - StructProperty UMG.ComboBoxString.Font */
	FSlateColor ForegroundColor; /* Ofs: 0xD10 Size: 0x28 - StructProperty UMG.ComboBoxString.ForegroundColor */
	uint8_t boolFieldD38;
	uint8_t UnknownDataD39[0x7];
	FScriptDelegate OnGenerateWidgetEvent; /* Ofs: 0xD40 Size: 0x10 - DelegateProperty UMG.ComboBoxString.OnGenerateWidgetEvent */
	FScriptMulticastDelegate OnSelectionChanged; /* Ofs: 0xD50 Size: 0x10 - MulticastDelegateProperty UMG.ComboBoxString.OnSelectionChanged */
	FScriptMulticastDelegate OnOpening; /* Ofs: 0xD60 Size: 0x10 - MulticastDelegateProperty UMG.ComboBoxString.OnOpening */
	uint8_t UnknownDataD70[0x40];


	inline bool SetDefaultOptions(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x130, value); }
	inline bool SetSelectedOption(t_structHelper inst, FString value) { inst.WriteOffset(0x140, value); }
	inline bool SetWidgetStyle(t_structHelper inst, FComboBoxStyle value) { inst.WriteOffset(0x150, value); }
	inline bool SetItemStyle(t_structHelper inst, FTableRowStyle value) { inst.WriteOffset(0x578, value); }
	inline bool SetContentPadding(t_structHelper inst, FMargin value) { inst.WriteOffset(0xC90, value); }
	inline bool SetMaxListHeight(t_structHelper inst, float value) { inst.WriteOffset(0xCA0, value); }
	inline bool HasDownArrow()
	{
		return boolFieldCA4& 0x1;
	}
	inline bool SetHasDownArrow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCA4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool EnableGamepadNavigationMode()
	{
		return boolFieldCA5& 0x1;
	}
	inline bool SetEnableGamepadNavigationMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xCA5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetForegroundColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0xD10, value); }
	inline bool bIsFocusable()
	{
		return boolFieldD38& 0x1;
	}
	inline bool SetbIsFocusable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnGenerateWidgetEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0xD40, value); }
	inline bool SetOnSelectionChanged(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xD50, value); }
	inline bool SetOnOpening(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xD60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUComboBoxString = sizeof(UComboBoxString); // 3504
    static_assert(sizeof(UComboBoxString) == 0xDB0, "Size of UComboBoxString is not correct.");
	auto constexpr UComboBoxString_DefaultOptions_Offset = offsetof(UComboBoxString, DefaultOptions);
	static_assert(UComboBoxString_DefaultOptions_Offset == 0x130, "UComboBoxString::DefaultOptions offset is not 130");
	auto constexpr UComboBoxString_SelectedOption_Offset = offsetof(UComboBoxString, SelectedOption);
	static_assert(UComboBoxString_SelectedOption_Offset == 0x140, "UComboBoxString::SelectedOption offset is not 140");
	auto constexpr UComboBoxString_WidgetStyle_Offset = offsetof(UComboBoxString, WidgetStyle);
	static_assert(UComboBoxString_WidgetStyle_Offset == 0x150, "UComboBoxString::WidgetStyle offset is not 150");
	auto constexpr UComboBoxString_ItemStyle_Offset = offsetof(UComboBoxString, ItemStyle);
	static_assert(UComboBoxString_ItemStyle_Offset == 0x578, "UComboBoxString::ItemStyle offset is not 578");
	auto constexpr UComboBoxString_ContentPadding_Offset = offsetof(UComboBoxString, ContentPadding);
	static_assert(UComboBoxString_ContentPadding_Offset == 0xc90, "UComboBoxString::ContentPadding offset is not c90");
	auto constexpr UComboBoxString_MaxListHeight_Offset = offsetof(UComboBoxString, MaxListHeight);
	static_assert(UComboBoxString_MaxListHeight_Offset == 0xca0, "UComboBoxString::MaxListHeight offset is not ca0");
	auto constexpr UComboBoxString_boolFieldCA4_Offset = offsetof(UComboBoxString, boolFieldCA4);
	static_assert(UComboBoxString_boolFieldCA4_Offset == 0xca4, "UComboBoxString::boolFieldCA4 offset is not ca4");
	auto constexpr UComboBoxString_boolFieldCA5_Offset = offsetof(UComboBoxString, boolFieldCA5);
	static_assert(UComboBoxString_boolFieldCA5_Offset == 0xca5, "UComboBoxString::boolFieldCA5 offset is not ca5");
	auto constexpr UComboBoxString_Font_Offset = offsetof(UComboBoxString, Font);
	static_assert(UComboBoxString_Font_Offset == 0xca8, "UComboBoxString::Font offset is not ca8");
	auto constexpr UComboBoxString_ForegroundColor_Offset = offsetof(UComboBoxString, ForegroundColor);
	static_assert(UComboBoxString_ForegroundColor_Offset == 0xd10, "UComboBoxString::ForegroundColor offset is not d10");
	auto constexpr UComboBoxString_boolFieldD38_Offset = offsetof(UComboBoxString, boolFieldD38);
	static_assert(UComboBoxString_boolFieldD38_Offset == 0xd38, "UComboBoxString::boolFieldD38 offset is not d38");
	auto constexpr UComboBoxString_OnGenerateWidgetEvent_Offset = offsetof(UComboBoxString, OnGenerateWidgetEvent);
	static_assert(UComboBoxString_OnGenerateWidgetEvent_Offset == 0xd40, "UComboBoxString::OnGenerateWidgetEvent offset is not d40");
	auto constexpr UComboBoxString_OnSelectionChanged_Offset = offsetof(UComboBoxString, OnSelectionChanged);
	static_assert(UComboBoxString_OnSelectionChanged_Offset == 0xd50, "UComboBoxString::OnSelectionChanged offset is not d50");
	auto constexpr UComboBoxString_OnOpening_Offset = offsetof(UComboBoxString, OnOpening);
	static_assert(UComboBoxString_OnOpening_Offset == 0xd60, "UComboBoxString::OnOpening offset is not d60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
