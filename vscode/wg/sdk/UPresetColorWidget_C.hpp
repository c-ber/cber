#pragma once
#include "UUserWidget.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPresetColorWidget_C // Size: 0x280
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPresetColorWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168896); // id32("WidgetBlueprintGeneratedClass PresetColorWidget.PresetColorWidget_C")
		return ptr;
	}
	ExternalPtr<struct UBorder> Border_2; /* Ofs: 0x248 Size: 0x8 - ObjectProperty PresetColorWidget.PresetColorWidget_C.Border_2 */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PresetColorWidget.PresetColorWidget_C.TextBlock_1 */
	FText DisplayName; /* Ofs: 0x258 Size: 0x18 - TextProperty PresetColorWidget.PresetColorWidget_C.DisplayName */
	FLinearColor Color; /* Ofs: 0x270 Size: 0x10 - StructProperty PresetColorWidget.PresetColorWidget_C.Color */


	inline bool SetBorder_2(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x248, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetDisplayName(t_structHelper inst, FText value) { inst.WriteOffset(0x258, value); }
	inline bool SetColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPresetColorWidget_C = sizeof(UPresetColorWidget_C); // 640
    static_assert(sizeof(UPresetColorWidget_C) == 0x280, "Size of UPresetColorWidget_C is not correct.");
	auto constexpr UPresetColorWidget_C_Border_2_Offset = offsetof(UPresetColorWidget_C, Border_2);
	static_assert(UPresetColorWidget_C_Border_2_Offset == 0x248, "UPresetColorWidget_C::Border_2 offset is not 248");
	auto constexpr UPresetColorWidget_C_TextBlock_1_Offset = offsetof(UPresetColorWidget_C, TextBlock_1);
	static_assert(UPresetColorWidget_C_TextBlock_1_Offset == 0x250, "UPresetColorWidget_C::TextBlock_1 offset is not 250");
	auto constexpr UPresetColorWidget_C_DisplayName_Offset = offsetof(UPresetColorWidget_C, DisplayName);
	static_assert(UPresetColorWidget_C_DisplayName_Offset == 0x258, "UPresetColorWidget_C::DisplayName offset is not 258");
	auto constexpr UPresetColorWidget_C_Color_Offset = offsetof(UPresetColorWidget_C, Color);
	static_assert(UPresetColorWidget_C_Color_Offset == 0x270, "UPresetColorWidget_C::Color offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
