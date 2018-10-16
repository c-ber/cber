#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETextJustify.hpp"
#include "FSlateColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMessageWidget_C // Size: 0x2BC
	: public UUserWidget // Size: 0x248
{
private:
	typedef UMessageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163707); // id32("WidgetBlueprintGeneratedClass MessageWidget.MessageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty MessageWidget.MessageWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x250 Size: 0x8 - ObjectProperty MessageWidget.MessageWidget_C.FadeOut */
	ExternalPtr<struct UTextBlock> TextBlock_145; /* Ofs: 0x258 Size: 0x8 - ObjectProperty MessageWidget.MessageWidget_C.TextBlock_145 */
	FText Message; /* Ofs: 0x260 Size: 0x18 - TextProperty MessageWidget.MessageWidget_C.Message */
	FScriptMulticastDelegate MessageEnd; /* Ofs: 0x278 Size: 0x10 - MulticastDelegateProperty MessageWidget.MessageWidget_C.MessageEnd */
	TEnumAsByte<enum ETextJustify> TextAlignment; /* Ofs: 0x288 Size: 0x1 - ByteProperty MessageWidget.MessageWidget_C.TextAlignment */
	uint8_t UnknownData289[0x7];
	FSlateColor TextColor; /* Ofs: 0x290 Size: 0x28 - StructProperty MessageWidget.MessageWidget_C.TextColor */
	int32_t TextSize; /* Ofs: 0x2B8 Size: 0x4 - IntProperty MessageWidget.MessageWidget_C.TextSize */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTextBlock_145(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x260, value); }
	inline bool SetMessageEnd(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x278, value); }
	inline bool SetTextAlignment(t_structHelper inst, TEnumAsByte<enum ETextJustify> value) { inst.WriteOffset(0x288, value); }
	inline bool SetTextColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x290, value); }
	inline bool SetTextSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMessageWidget_C = sizeof(UMessageWidget_C); // 700
    static_assert(sizeof(UMessageWidget_C) == 0x2BC, "Size of UMessageWidget_C is not correct.");
	auto constexpr UMessageWidget_C_UberGraphFrame_Offset = offsetof(UMessageWidget_C, UberGraphFrame);
	static_assert(UMessageWidget_C_UberGraphFrame_Offset == 0x248, "UMessageWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UMessageWidget_C_FadeOut_Offset = offsetof(UMessageWidget_C, FadeOut);
	static_assert(UMessageWidget_C_FadeOut_Offset == 0x250, "UMessageWidget_C::FadeOut offset is not 250");
	auto constexpr UMessageWidget_C_TextBlock_145_Offset = offsetof(UMessageWidget_C, TextBlock_145);
	static_assert(UMessageWidget_C_TextBlock_145_Offset == 0x258, "UMessageWidget_C::TextBlock_145 offset is not 258");
	auto constexpr UMessageWidget_C_Message_Offset = offsetof(UMessageWidget_C, Message);
	static_assert(UMessageWidget_C_Message_Offset == 0x260, "UMessageWidget_C::Message offset is not 260");
	auto constexpr UMessageWidget_C_MessageEnd_Offset = offsetof(UMessageWidget_C, MessageEnd);
	static_assert(UMessageWidget_C_MessageEnd_Offset == 0x278, "UMessageWidget_C::MessageEnd offset is not 278");
	auto constexpr UMessageWidget_C_TextAlignment_Offset = offsetof(UMessageWidget_C, TextAlignment);
	static_assert(UMessageWidget_C_TextAlignment_Offset == 0x288, "UMessageWidget_C::TextAlignment offset is not 288");
	auto constexpr UMessageWidget_C_TextColor_Offset = offsetof(UMessageWidget_C, TextColor);
	static_assert(UMessageWidget_C_TextColor_Offset == 0x290, "UMessageWidget_C::TextColor offset is not 290");
	auto constexpr UMessageWidget_C_TextSize_Offset = offsetof(UMessageWidget_C, TextSize);
	static_assert(UMessageWidget_C_TextSize_Offset == 0x2b8, "UMessageWidget_C::TextSize offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
