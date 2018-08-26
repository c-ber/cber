#pragma once
#include "EFontImportCharacterSet.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontImportOptionsData // Size: 0xB0
{
public:
    FString FontName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.FontImportOptionsData.FontName */
    float Height; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.FontImportOptionsData.Height */
    bool bEnableAntialiasing : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.FontImportOptionsData.bEnableAntialiasing */
    bool bEnableBold : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 02 BoolProperty Engine.FontImportOptionsData.bEnableBold */
    bool bEnableItalic : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 04 BoolProperty Engine.FontImportOptionsData.bEnableItalic */
    bool bEnableUnderline : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 08 BoolProperty Engine.FontImportOptionsData.bEnableUnderline */
    bool bAlphaOnly : 1; /* Ofs: 0x14 Size: 0x1 BitMask: 10 BoolProperty Engine.FontImportOptionsData.bAlphaOnly */
    uint8_t UnknownData15[0x3];
    TEnumAsByte<enum EFontImportCharacterSet> CharacterSet; /* Ofs: 0x18 Size: 0x1 ByteProperty Engine.FontImportOptionsData.CharacterSet */
    uint8_t UnknownData19[0x7];
    FString Chars; /* Ofs: 0x20 Size: 0x10 StrProperty Engine.FontImportOptionsData.Chars */
    FString UnicodeRange; /* Ofs: 0x30 Size: 0x10 StrProperty Engine.FontImportOptionsData.UnicodeRange */
    FString CharsFilePath; /* Ofs: 0x40 Size: 0x10 StrProperty Engine.FontImportOptionsData.CharsFilePath */
    FString CharsFileWildcard; /* Ofs: 0x50 Size: 0x10 StrProperty Engine.FontImportOptionsData.CharsFileWildcard */
    bool bCreatePrintableOnly : 1; /* Ofs: 0x60 Size: 0x1 BitMask: 01 BoolProperty Engine.FontImportOptionsData.bCreatePrintableOnly */
    bool bIncludeASCIIRange : 1; /* Ofs: 0x60 Size: 0x1 BitMask: 02 BoolProperty Engine.FontImportOptionsData.bIncludeASCIIRange */
    uint8_t UnknownData61[0x3];
    FLinearColor ForegroundColor; /* Ofs: 0x64 Size: 0x10 StructProperty Engine.FontImportOptionsData.ForegroundColor */
    bool bEnableDropShadow; /* Ofs: 0x74 Size: 0x1 BitMask: 01 BoolProperty Engine.FontImportOptionsData.bEnableDropShadow */
    uint8_t UnknownData75[0x3];
    int32_t TexturePageWidth; /* Ofs: 0x78 Size: 0x4 IntProperty Engine.FontImportOptionsData.TexturePageWidth */
    int32_t TexturePageMaxHeight; /* Ofs: 0x7C Size: 0x4 IntProperty Engine.FontImportOptionsData.TexturePageMaxHeight */
    int32_t XPadding; /* Ofs: 0x80 Size: 0x4 IntProperty Engine.FontImportOptionsData.XPadding */
    int32_t YPadding; /* Ofs: 0x84 Size: 0x4 IntProperty Engine.FontImportOptionsData.YPadding */
    int32_t ExtendBoxTop; /* Ofs: 0x88 Size: 0x4 IntProperty Engine.FontImportOptionsData.ExtendBoxTop */
    int32_t ExtendBoxBottom; /* Ofs: 0x8C Size: 0x4 IntProperty Engine.FontImportOptionsData.ExtendBoxBottom */
    int32_t ExtendBoxRight; /* Ofs: 0x90 Size: 0x4 IntProperty Engine.FontImportOptionsData.ExtendBoxRight */
    int32_t ExtendBoxLeft; /* Ofs: 0x94 Size: 0x4 IntProperty Engine.FontImportOptionsData.ExtendBoxLeft */
    bool bEnableLegacyMode; /* Ofs: 0x98 Size: 0x1 BitMask: 01 BoolProperty Engine.FontImportOptionsData.bEnableLegacyMode */
    uint8_t UnknownData99[0x3];
    int32_t Kerning; /* Ofs: 0x9C Size: 0x4 IntProperty Engine.FontImportOptionsData.Kerning */
    bool bUseDistanceFieldAlpha; /* Ofs: 0xA0 Size: 0x1 BitMask: 01 BoolProperty Engine.FontImportOptionsData.bUseDistanceFieldAlpha */
    uint8_t UnknownDataA1[0x3];
    int32_t DistanceFieldScaleFactor; /* Ofs: 0xA4 Size: 0x4 IntProperty Engine.FontImportOptionsData.DistanceFieldScaleFactor */
    float DistanceFieldScanRadiusScale; /* Ofs: 0xA8 Size: 0x4 FloatProperty Engine.FontImportOptionsData.DistanceFieldScanRadiusScale */
    uint8_t UnknownDataAC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontImportOptionsData = sizeof(FFontImportOptionsData); // 176
    static_assert(sizeof(FFontImportOptionsData) == 0xB0, "Size of FFontImportOptionsData is not correct.");
	auto constexpr FFontImportOptionsData_FontName_Offset = offsetof(FFontImportOptionsData, FontName);
	static_assert(FFontImportOptionsData_FontName_Offset == 0x0, "FFontImportOptionsData::FontName offset is not 0");
	auto constexpr FFontImportOptionsData_Height_Offset = offsetof(FFontImportOptionsData, Height);
	static_assert(FFontImportOptionsData_Height_Offset == 0x10, "FFontImportOptionsData::Height offset is not 10");
	auto constexpr FFontImportOptionsData_CharacterSet_Offset = offsetof(FFontImportOptionsData, CharacterSet);
	static_assert(FFontImportOptionsData_CharacterSet_Offset == 0x18, "FFontImportOptionsData::CharacterSet offset is not 18");
	auto constexpr FFontImportOptionsData_Chars_Offset = offsetof(FFontImportOptionsData, Chars);
	static_assert(FFontImportOptionsData_Chars_Offset == 0x20, "FFontImportOptionsData::Chars offset is not 20");
	auto constexpr FFontImportOptionsData_UnicodeRange_Offset = offsetof(FFontImportOptionsData, UnicodeRange);
	static_assert(FFontImportOptionsData_UnicodeRange_Offset == 0x30, "FFontImportOptionsData::UnicodeRange offset is not 30");
	auto constexpr FFontImportOptionsData_CharsFilePath_Offset = offsetof(FFontImportOptionsData, CharsFilePath);
	static_assert(FFontImportOptionsData_CharsFilePath_Offset == 0x40, "FFontImportOptionsData::CharsFilePath offset is not 40");
	auto constexpr FFontImportOptionsData_CharsFileWildcard_Offset = offsetof(FFontImportOptionsData, CharsFileWildcard);
	static_assert(FFontImportOptionsData_CharsFileWildcard_Offset == 0x50, "FFontImportOptionsData::CharsFileWildcard offset is not 50");
	auto constexpr FFontImportOptionsData_ForegroundColor_Offset = offsetof(FFontImportOptionsData, ForegroundColor);
	static_assert(FFontImportOptionsData_ForegroundColor_Offset == 0x64, "FFontImportOptionsData::ForegroundColor offset is not 64");
	auto constexpr FFontImportOptionsData_TexturePageWidth_Offset = offsetof(FFontImportOptionsData, TexturePageWidth);
	static_assert(FFontImportOptionsData_TexturePageWidth_Offset == 0x78, "FFontImportOptionsData::TexturePageWidth offset is not 78");
	auto constexpr FFontImportOptionsData_TexturePageMaxHeight_Offset = offsetof(FFontImportOptionsData, TexturePageMaxHeight);
	static_assert(FFontImportOptionsData_TexturePageMaxHeight_Offset == 0x7c, "FFontImportOptionsData::TexturePageMaxHeight offset is not 7c");
	auto constexpr FFontImportOptionsData_XPadding_Offset = offsetof(FFontImportOptionsData, XPadding);
	static_assert(FFontImportOptionsData_XPadding_Offset == 0x80, "FFontImportOptionsData::XPadding offset is not 80");
	auto constexpr FFontImportOptionsData_YPadding_Offset = offsetof(FFontImportOptionsData, YPadding);
	static_assert(FFontImportOptionsData_YPadding_Offset == 0x84, "FFontImportOptionsData::YPadding offset is not 84");
	auto constexpr FFontImportOptionsData_ExtendBoxTop_Offset = offsetof(FFontImportOptionsData, ExtendBoxTop);
	static_assert(FFontImportOptionsData_ExtendBoxTop_Offset == 0x88, "FFontImportOptionsData::ExtendBoxTop offset is not 88");
	auto constexpr FFontImportOptionsData_ExtendBoxBottom_Offset = offsetof(FFontImportOptionsData, ExtendBoxBottom);
	static_assert(FFontImportOptionsData_ExtendBoxBottom_Offset == 0x8c, "FFontImportOptionsData::ExtendBoxBottom offset is not 8c");
	auto constexpr FFontImportOptionsData_ExtendBoxRight_Offset = offsetof(FFontImportOptionsData, ExtendBoxRight);
	static_assert(FFontImportOptionsData_ExtendBoxRight_Offset == 0x90, "FFontImportOptionsData::ExtendBoxRight offset is not 90");
	auto constexpr FFontImportOptionsData_ExtendBoxLeft_Offset = offsetof(FFontImportOptionsData, ExtendBoxLeft);
	static_assert(FFontImportOptionsData_ExtendBoxLeft_Offset == 0x94, "FFontImportOptionsData::ExtendBoxLeft offset is not 94");
	auto constexpr FFontImportOptionsData_Kerning_Offset = offsetof(FFontImportOptionsData, Kerning);
	static_assert(FFontImportOptionsData_Kerning_Offset == 0x9c, "FFontImportOptionsData::Kerning offset is not 9c");
	auto constexpr FFontImportOptionsData_DistanceFieldScaleFactor_Offset = offsetof(FFontImportOptionsData, DistanceFieldScaleFactor);
	static_assert(FFontImportOptionsData_DistanceFieldScaleFactor_Offset == 0xa4, "FFontImportOptionsData::DistanceFieldScaleFactor offset is not a4");
	auto constexpr FFontImportOptionsData_DistanceFieldScanRadiusScale_Offset = offsetof(FFontImportOptionsData, DistanceFieldScanRadiusScale);
	static_assert(FFontImportOptionsData_DistanceFieldScanRadiusScale_Offset == 0xa8, "FFontImportOptionsData::DistanceFieldScanRadiusScale offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
