#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshUVChannelInfo // Size: 0x14
{
public:
    bool bInitialized; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshUVChannelInfo.bInitialized */
    bool bOverrideDensities; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.MeshUVChannelInfo.bOverrideDensities */
    uint8_t UnknownData2[0x2];
    float LocalUVDensities[4]; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.MeshUVChannelInfo.LocalUVDensities */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshUVChannelInfo = sizeof(FMeshUVChannelInfo); // 20
    static_assert(sizeof(FMeshUVChannelInfo) == 0x14, "Size of FMeshUVChannelInfo is not correct.");
	auto constexpr FMeshUVChannelInfo_LocalUVDensities_Offset = offsetof(FMeshUVChannelInfo, LocalUVDensities);
	static_assert(FMeshUVChannelInfo_LocalUVDensities_Offset == 0x4, "FMeshUVChannelInfo::LocalUVDensities offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
