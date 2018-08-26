#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSpriteAssetInitParameters // Size: 0x40
{
public:
    uint8_t UnknownData0[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSpriteAssetInitParameters = sizeof(FSpriteAssetInitParameters); // 64
    static_assert(sizeof(FSpriteAssetInitParameters) == 0x40, "Size of FSpriteAssetInitParameters is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
