#pragma once
#include "EFontHinting.hpp"
#include "EFontLoadingPolicy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontData // Size: 0x20
{
public:
    FString FontFilename; /* Ofs: 0x0 Size: 0x10 StrProperty SlateCore.FontData.FontFilename */
    TEnumAsByte<enum EFontHinting> Hinting; /* Ofs: 0x10 Size: 0x1 EnumProperty SlateCore.FontData.Hinting */
    TEnumAsByte<enum EFontLoadingPolicy> LoadingPolicy; /* Ofs: 0x11 Size: 0x1 EnumProperty SlateCore.FontData.LoadingPolicy */
    uint8_t UnknownData12[0x6];
    ExternalPtr<struct UObject> FontFaceAsset; /* Ofs: 0x18 Size: 0x8 ObjectProperty SlateCore.FontData.FontFaceAsset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontData = sizeof(FFontData); // 32
    static_assert(sizeof(FFontData) == 0x20, "Size of FFontData is not correct.");
	auto constexpr FFontData_FontFilename_Offset = offsetof(FFontData, FontFilename);
	static_assert(FFontData_FontFilename_Offset == 0x0, "FFontData::FontFilename offset is not 0");
	auto constexpr FFontData_Hinting_Offset = offsetof(FFontData, Hinting);
	static_assert(FFontData_Hinting_Offset == 0x10, "FFontData::Hinting offset is not 10");
	auto constexpr FFontData_LoadingPolicy_Offset = offsetof(FFontData, LoadingPolicy);
	static_assert(FFontData_LoadingPolicy_Offset == 0x11, "FFontData::LoadingPolicy offset is not 11");
	auto constexpr FFontData_FontFaceAsset_Offset = offsetof(FFontData, FontFaceAsset);
	static_assert(FFontData_FontFaceAsset_Offset == 0x18, "FFontData::FontFaceAsset offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
