#pragma once
#include "FFontOutlineSettings.hpp"
#include "EFontHinting.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSlateFontInfo // Size: 0x68
{
public:
    ExternalPtr<struct UObject> FontObject; /* Ofs: 0x0 Size: 0x8 ObjectProperty SlateCore.SlateFontInfo.FontObject */
    ExternalPtr<struct UObject> FontMaterial; /* Ofs: 0x8 Size: 0x8 ObjectProperty SlateCore.SlateFontInfo.FontMaterial */
    FFontOutlineSettings OutlineSettings; /* Ofs: 0x10 Size: 0x28 StructProperty SlateCore.SlateFontInfo.OutlineSettings */
    uint8_t UnknownData38[0x10];
    FName TypefaceFontName; /* Ofs: 0x48 Size: 0x8 NameProperty SlateCore.SlateFontInfo.TypefaceFontName */
    int32_t Size; /* Ofs: 0x50 Size: 0x4 IntProperty SlateCore.SlateFontInfo.Size */
    uint8_t UnknownData54[0x4];
    FName FontName; /* Ofs: 0x58 Size: 0x8 NameProperty SlateCore.SlateFontInfo.FontName */
    TEnumAsByte<enum EFontHinting> Hinting; /* Ofs: 0x60 Size: 0x1 EnumProperty SlateCore.SlateFontInfo.Hinting */
    uint8_t UnknownData61[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSlateFontInfo = sizeof(FSlateFontInfo); // 104
    static_assert(sizeof(FSlateFontInfo) == 0x68, "Size of FSlateFontInfo is not correct.");
	auto constexpr FSlateFontInfo_FontObject_Offset = offsetof(FSlateFontInfo, FontObject);
	static_assert(FSlateFontInfo_FontObject_Offset == 0x0, "FSlateFontInfo::FontObject offset is not 0");
	auto constexpr FSlateFontInfo_FontMaterial_Offset = offsetof(FSlateFontInfo, FontMaterial);
	static_assert(FSlateFontInfo_FontMaterial_Offset == 0x8, "FSlateFontInfo::FontMaterial offset is not 8");
	auto constexpr FSlateFontInfo_OutlineSettings_Offset = offsetof(FSlateFontInfo, OutlineSettings);
	static_assert(FSlateFontInfo_OutlineSettings_Offset == 0x10, "FSlateFontInfo::OutlineSettings offset is not 10");
	auto constexpr FSlateFontInfo_TypefaceFontName_Offset = offsetof(FSlateFontInfo, TypefaceFontName);
	static_assert(FSlateFontInfo_TypefaceFontName_Offset == 0x48, "FSlateFontInfo::TypefaceFontName offset is not 48");
	auto constexpr FSlateFontInfo_Size_Offset = offsetof(FSlateFontInfo, Size);
	static_assert(FSlateFontInfo_Size_Offset == 0x50, "FSlateFontInfo::Size offset is not 50");
	auto constexpr FSlateFontInfo_FontName_Offset = offsetof(FSlateFontInfo, FontName);
	static_assert(FSlateFontInfo_FontName_Offset == 0x58, "FSlateFontInfo::FontName offset is not 58");
	auto constexpr FSlateFontInfo_Hinting_Offset = offsetof(FSlateFontInfo, Hinting);
	static_assert(FSlateFontInfo_Hinting_Offset == 0x60, "FSlateFontInfo::Hinting offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
