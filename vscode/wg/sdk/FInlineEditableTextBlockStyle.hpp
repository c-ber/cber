#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FTextBlockStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInlineEditableTextBlockStyle // Size: 0xA80
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FEditableTextBoxStyle EditableTextBoxStyle; /* Ofs: 0x8 Size: 0x870 StructProperty SlateCore.InlineEditableTextBlockStyle.EditableTextBoxStyle */
    FTextBlockStyle TextStyle; /* Ofs: 0x878 Size: 0x208 StructProperty SlateCore.InlineEditableTextBlockStyle.TextStyle */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInlineEditableTextBlockStyle = sizeof(FInlineEditableTextBlockStyle); // 2688
    static_assert(sizeof(FInlineEditableTextBlockStyle) == 0xA80, "Size of FInlineEditableTextBlockStyle is not correct.");
	auto constexpr FInlineEditableTextBlockStyle_EditableTextBoxStyle_Offset = offsetof(FInlineEditableTextBlockStyle, EditableTextBoxStyle);
	static_assert(FInlineEditableTextBlockStyle_EditableTextBoxStyle_Offset == 0x8, "FInlineEditableTextBlockStyle::EditableTextBoxStyle offset is not 8");
	auto constexpr FInlineEditableTextBlockStyle_TextStyle_Offset = offsetof(FInlineEditableTextBlockStyle, TextStyle);
	static_assert(FInlineEditableTextBlockStyle_TextStyle_Offset == 0x878, "FInlineEditableTextBlockStyle::TextStyle offset is not 878");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
