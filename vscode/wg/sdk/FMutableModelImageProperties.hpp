#pragma once
#include "TextureCompressionSettings.hpp"
#include "TextureFilter.hpp"
#include "TextureMipGenSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMutableModelImageProperties // Size: 0x28
{
public:
    FString TextureParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.MutableModelImageProperties.TextureParameterName */
    TEnumAsByte<enum TextureCompressionSettings> CompressionSettings; /* Ofs: 0x10 Size: 0x1 ByteProperty CustomizableObject.MutableModelImageProperties.CompressionSettings */
    TEnumAsByte<enum TextureFilter> Filter; /* Ofs: 0x11 Size: 0x1 ByteProperty CustomizableObject.MutableModelImageProperties.Filter */
    uint8_t UnknownData12[0x2];
    bool SRGB; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty CustomizableObject.MutableModelImageProperties.SRGB */
    uint8_t UnknownData15[0x3];
    int32_t LODBias; /* Ofs: 0x18 Size: 0x4 IntProperty CustomizableObject.MutableModelImageProperties.LODBias */
    TEnumAsByte<enum TextureMipGenSettings> MipGenSettings; /* Ofs: 0x1C Size: 0x1 ByteProperty CustomizableObject.MutableModelImageProperties.MipGenSettings */
    uint8_t UnknownData1D[0x3];
    bool bDitherMipMapAlpha; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty CustomizableObject.MutableModelImageProperties.bDitherMipMapAlpha */
    uint8_t UnknownData21[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMutableModelImageProperties = sizeof(FMutableModelImageProperties); // 40
    static_assert(sizeof(FMutableModelImageProperties) == 0x28, "Size of FMutableModelImageProperties is not correct.");
	auto constexpr FMutableModelImageProperties_TextureParameterName_Offset = offsetof(FMutableModelImageProperties, TextureParameterName);
	static_assert(FMutableModelImageProperties_TextureParameterName_Offset == 0x0, "FMutableModelImageProperties::TextureParameterName offset is not 0");
	auto constexpr FMutableModelImageProperties_CompressionSettings_Offset = offsetof(FMutableModelImageProperties, CompressionSettings);
	static_assert(FMutableModelImageProperties_CompressionSettings_Offset == 0x10, "FMutableModelImageProperties::CompressionSettings offset is not 10");
	auto constexpr FMutableModelImageProperties_Filter_Offset = offsetof(FMutableModelImageProperties, Filter);
	static_assert(FMutableModelImageProperties_Filter_Offset == 0x11, "FMutableModelImageProperties::Filter offset is not 11");
	auto constexpr FMutableModelImageProperties_LODBias_Offset = offsetof(FMutableModelImageProperties, LODBias);
	static_assert(FMutableModelImageProperties_LODBias_Offset == 0x18, "FMutableModelImageProperties::LODBias offset is not 18");
	auto constexpr FMutableModelImageProperties_MipGenSettings_Offset = offsetof(FMutableModelImageProperties, MipGenSettings);
	static_assert(FMutableModelImageProperties_MipGenSettings_Offset == 0x1c, "FMutableModelImageProperties::MipGenSettings offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
