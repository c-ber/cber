#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontOutlineSettings // Size: 0x28
{
public:
    int32_t OutlineSize; /* Ofs: 0x0 Size: 0x4 IntProperty SlateCore.FontOutlineSettings.OutlineSize */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UObject> OutlineMaterial; /* Ofs: 0x8 Size: 0x8 ObjectProperty SlateCore.FontOutlineSettings.OutlineMaterial */
    FLinearColor OutlineColor; /* Ofs: 0x10 Size: 0x10 StructProperty SlateCore.FontOutlineSettings.OutlineColor */
    bool bSeparateFillAlpha; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty SlateCore.FontOutlineSettings.bSeparateFillAlpha */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontOutlineSettings = sizeof(FFontOutlineSettings); // 40
    static_assert(sizeof(FFontOutlineSettings) == 0x28, "Size of FFontOutlineSettings is not correct.");
	auto constexpr FFontOutlineSettings_OutlineSize_Offset = offsetof(FFontOutlineSettings, OutlineSize);
	static_assert(FFontOutlineSettings_OutlineSize_Offset == 0x0, "FFontOutlineSettings::OutlineSize offset is not 0");
	auto constexpr FFontOutlineSettings_OutlineMaterial_Offset = offsetof(FFontOutlineSettings, OutlineMaterial);
	static_assert(FFontOutlineSettings_OutlineMaterial_Offset == 0x8, "FFontOutlineSettings::OutlineMaterial offset is not 8");
	auto constexpr FFontOutlineSettings_OutlineColor_Offset = offsetof(FFontOutlineSettings, OutlineColor);
	static_assert(FFontOutlineSettings_OutlineColor_Offset == 0x10, "FFontOutlineSettings::OutlineColor offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
