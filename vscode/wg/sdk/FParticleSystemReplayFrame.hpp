#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleSystemReplayFrame // Size: 0x10
{
public:
    uint8_t UnknownData0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleSystemReplayFrame = sizeof(FParticleSystemReplayFrame); // 16
    static_assert(sizeof(FParticleSystemReplayFrame) == 0x10, "Size of FParticleSystemReplayFrame is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
