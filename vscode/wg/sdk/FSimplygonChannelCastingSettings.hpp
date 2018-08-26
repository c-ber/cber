#pragma once
#include "ESimplygonMaterialChannel.hpp"
#include "ESimplygonCasterType.hpp"
#include "ESimplygonColorChannels.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSimplygonChannelCastingSettings // Size: 0x10
{
public:
    TEnumAsByte<enum ESimplygonMaterialChannel> MaterialChannel; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.SimplygonChannelCastingSettings.MaterialChannel */
    TEnumAsByte<enum ESimplygonCasterType> Caster; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.SimplygonChannelCastingSettings.Caster */
    bool bActive; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bActive */
    TEnumAsByte<enum ESimplygonColorChannels> ColorChannels; /* Ofs: 0x3 Size: 0x1 ByteProperty Engine.SimplygonChannelCastingSettings.ColorChannels */
    int32_t BitsPerChannel; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.SimplygonChannelCastingSettings.BitsPerChannel */
    bool bUseSRGB; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bUseSRGB */
    bool bBakeVertexColors; /* Ofs: 0x9 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bBakeVertexColors */
    bool bFlipBackfacingNormals; /* Ofs: 0xA Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bFlipBackfacingNormals */
    bool bUseTangentSpaceNormals; /* Ofs: 0xB Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bUseTangentSpaceNormals */
    bool bFlipGreenChannel; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonChannelCastingSettings.bFlipGreenChannel */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSimplygonChannelCastingSettings = sizeof(FSimplygonChannelCastingSettings); // 16
    static_assert(sizeof(FSimplygonChannelCastingSettings) == 0x10, "Size of FSimplygonChannelCastingSettings is not correct.");
	auto constexpr FSimplygonChannelCastingSettings_MaterialChannel_Offset = offsetof(FSimplygonChannelCastingSettings, MaterialChannel);
	static_assert(FSimplygonChannelCastingSettings_MaterialChannel_Offset == 0x0, "FSimplygonChannelCastingSettings::MaterialChannel offset is not 0");
	auto constexpr FSimplygonChannelCastingSettings_Caster_Offset = offsetof(FSimplygonChannelCastingSettings, Caster);
	static_assert(FSimplygonChannelCastingSettings_Caster_Offset == 0x1, "FSimplygonChannelCastingSettings::Caster offset is not 1");
	auto constexpr FSimplygonChannelCastingSettings_ColorChannels_Offset = offsetof(FSimplygonChannelCastingSettings, ColorChannels);
	static_assert(FSimplygonChannelCastingSettings_ColorChannels_Offset == 0x3, "FSimplygonChannelCastingSettings::ColorChannels offset is not 3");
	auto constexpr FSimplygonChannelCastingSettings_BitsPerChannel_Offset = offsetof(FSimplygonChannelCastingSettings, BitsPerChannel);
	static_assert(FSimplygonChannelCastingSettings_BitsPerChannel_Offset == 0x4, "FSimplygonChannelCastingSettings::BitsPerChannel offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
