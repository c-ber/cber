#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStreamedAudioPlatformData // Size: 0x20
{
public:
    uint8_t UnknownData0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStreamedAudioPlatformData = sizeof(FStreamedAudioPlatformData); // 32
    static_assert(sizeof(FStreamedAudioPlatformData) == 0x20, "Size of FStreamedAudioPlatformData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
