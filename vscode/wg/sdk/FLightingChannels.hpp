#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLightingChannels // Size: 0x3
{
public:
    bool bChannel0; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.LightingChannels.bChannel0 */
    bool bChannel1; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty Engine.LightingChannels.bChannel1 */
    bool bChannel2; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.LightingChannels.bChannel2 */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLightingChannels = sizeof(FLightingChannels); // 3
    static_assert(sizeof(FLightingChannels) == 0x3, "Size of FLightingChannels is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
