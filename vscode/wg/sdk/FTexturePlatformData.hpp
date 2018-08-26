#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTexturePlatformData // Size: 0x20
{
public:
    uint8_t UnknownData0[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTexturePlatformData = sizeof(FTexturePlatformData); // 32
    static_assert(sizeof(FTexturePlatformData) == 0x20, "Size of FTexturePlatformData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
