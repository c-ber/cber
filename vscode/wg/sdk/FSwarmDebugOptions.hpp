#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSwarmDebugOptions // Size: 0x4
{
public:
    bool bDistributionEnabled : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.SwarmDebugOptions.bDistributionEnabled */
    bool bForceContentExport : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.SwarmDebugOptions.bForceContentExport */
    bool bInitialized : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.SwarmDebugOptions.bInitialized */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSwarmDebugOptions = sizeof(FSwarmDebugOptions); // 4
    static_assert(sizeof(FSwarmDebugOptions) == 0x4, "Size of FSwarmDebugOptions is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
