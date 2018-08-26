#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplashObject // Size: 0xC
{
public:
    uint8_t UnknownData0[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplashObject = sizeof(FSplashObject); // 12
    static_assert(sizeof(FSplashObject) == 0xC, "Size of FSplashObject is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
