#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FButtonStyle.hpp"
#include "FTextBlockStyle.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FHyperlinkStyle // Size: 0x4C8
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FButtonStyle UnderlineStyle; /* Ofs: 0x8 Size: 0x2A8 StructProperty SlateCore.HyperlinkStyle.UnderlineStyle */
    FTextBlockStyle TextStyle; /* Ofs: 0x2B0 Size: 0x208 StructProperty SlateCore.HyperlinkStyle.TextStyle */
    FMargin Padding; /* Ofs: 0x4B8 Size: 0x10 StructProperty SlateCore.HyperlinkStyle.Padding */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFHyperlinkStyle = sizeof(FHyperlinkStyle); // 1224
    static_assert(sizeof(FHyperlinkStyle) == 0x4C8, "Size of FHyperlinkStyle is not correct.");
	auto constexpr FHyperlinkStyle_UnderlineStyle_Offset = offsetof(FHyperlinkStyle, UnderlineStyle);
	static_assert(FHyperlinkStyle_UnderlineStyle_Offset == 0x8, "FHyperlinkStyle::UnderlineStyle offset is not 8");
	auto constexpr FHyperlinkStyle_TextStyle_Offset = offsetof(FHyperlinkStyle, TextStyle);
	static_assert(FHyperlinkStyle_TextStyle_Offset == 0x2b0, "FHyperlinkStyle::TextStyle offset is not 2b0");
	auto constexpr FHyperlinkStyle_Padding_Offset = offsetof(FHyperlinkStyle, Padding);
	static_assert(FHyperlinkStyle_Padding_Offset == 0x4b8, "FHyperlinkStyle::Padding offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
