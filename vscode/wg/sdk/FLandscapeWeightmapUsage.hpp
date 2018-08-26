#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeWeightmapUsage // Size: 0x20
{
public:
    ExternalPtr<struct ULandscapeComponent> ChannelUsage[4]; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeWeightmapUsage.ChannelUsage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeWeightmapUsage = sizeof(FLandscapeWeightmapUsage); // 32
    static_assert(sizeof(FLandscapeWeightmapUsage) == 0x20, "Size of FLandscapeWeightmapUsage is not correct.");
	auto constexpr FLandscapeWeightmapUsage_ChannelUsage_Offset = offsetof(FLandscapeWeightmapUsage, ChannelUsage);
	static_assert(FLandscapeWeightmapUsage_ChannelUsage_Offset == 0x0, "FLandscapeWeightmapUsage::ChannelUsage offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
