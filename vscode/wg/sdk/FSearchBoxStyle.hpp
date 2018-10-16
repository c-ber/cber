#pragma once
#include "FSlateWidgetStyle.hpp"
#include "FEditableTextBoxStyle.hpp"
#include "FSlateFontInfo.hpp"
#include "FSlateBrush.hpp"
#include "FMargin.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSearchBoxStyle // Size: 0xB38
 : public FSlateWidgetStyle // Size: 0x8
{
public:
    FEditableTextBoxStyle TextBoxStyle; /* Ofs: 0x8 Size: 0x870 StructProperty SlateCore.SearchBoxStyle.TextBoxStyle */
    FSlateFontInfo ActiveFontInfo; /* Ofs: 0x878 Size: 0x68 StructProperty SlateCore.SearchBoxStyle.ActiveFontInfo */
    FSlateBrush UpArrowImage; /* Ofs: 0x8E0 Size: 0x90 StructProperty SlateCore.SearchBoxStyle.UpArrowImage */
    FSlateBrush DownArrowImage; /* Ofs: 0x970 Size: 0x90 StructProperty SlateCore.SearchBoxStyle.DownArrowImage */
    FSlateBrush GlassImage; /* Ofs: 0xA00 Size: 0x90 StructProperty SlateCore.SearchBoxStyle.GlassImage */
    FSlateBrush ClearImage; /* Ofs: 0xA90 Size: 0x90 StructProperty SlateCore.SearchBoxStyle.ClearImage */
    FMargin ImagePadding; /* Ofs: 0xB20 Size: 0x10 StructProperty SlateCore.SearchBoxStyle.ImagePadding */
    bool bLeftAlignButtons; /* Ofs: 0xB30 Size: 0x1 BitMask: 01 BoolProperty SlateCore.SearchBoxStyle.bLeftAlignButtons */
    uint8_t UnknownDataB31[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSearchBoxStyle = sizeof(FSearchBoxStyle); // 2872
    static_assert(sizeof(FSearchBoxStyle) == 0xB38, "Size of FSearchBoxStyle is not correct.");
	auto constexpr FSearchBoxStyle_TextBoxStyle_Offset = offsetof(FSearchBoxStyle, TextBoxStyle);
	static_assert(FSearchBoxStyle_TextBoxStyle_Offset == 0x8, "FSearchBoxStyle::TextBoxStyle offset is not 8");
	auto constexpr FSearchBoxStyle_ActiveFontInfo_Offset = offsetof(FSearchBoxStyle, ActiveFontInfo);
	static_assert(FSearchBoxStyle_ActiveFontInfo_Offset == 0x878, "FSearchBoxStyle::ActiveFontInfo offset is not 878");
	auto constexpr FSearchBoxStyle_UpArrowImage_Offset = offsetof(FSearchBoxStyle, UpArrowImage);
	static_assert(FSearchBoxStyle_UpArrowImage_Offset == 0x8e0, "FSearchBoxStyle::UpArrowImage offset is not 8e0");
	auto constexpr FSearchBoxStyle_DownArrowImage_Offset = offsetof(FSearchBoxStyle, DownArrowImage);
	static_assert(FSearchBoxStyle_DownArrowImage_Offset == 0x970, "FSearchBoxStyle::DownArrowImage offset is not 970");
	auto constexpr FSearchBoxStyle_GlassImage_Offset = offsetof(FSearchBoxStyle, GlassImage);
	static_assert(FSearchBoxStyle_GlassImage_Offset == 0xa00, "FSearchBoxStyle::GlassImage offset is not a00");
	auto constexpr FSearchBoxStyle_ClearImage_Offset = offsetof(FSearchBoxStyle, ClearImage);
	static_assert(FSearchBoxStyle_ClearImage_Offset == 0xa90, "FSearchBoxStyle::ClearImage offset is not a90");
	auto constexpr FSearchBoxStyle_ImagePadding_Offset = offsetof(FSearchBoxStyle, ImagePadding);
	static_assert(FSearchBoxStyle_ImagePadding_Offset == 0xb20, "FSearchBoxStyle::ImagePadding offset is not b20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
