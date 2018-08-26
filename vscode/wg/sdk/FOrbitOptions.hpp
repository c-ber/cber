#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOrbitOptions // Size: 0x4
{
public:
    bool bProcessDuringSpawn : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.OrbitOptions.bProcessDuringSpawn */
    bool bProcessDuringUpdate : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.OrbitOptions.bProcessDuringUpdate */
    bool bUseEmitterTime : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.OrbitOptions.bUseEmitterTime */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOrbitOptions = sizeof(FOrbitOptions); // 4
    static_assert(sizeof(FOrbitOptions) == 0x4, "Size of FOrbitOptions is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
