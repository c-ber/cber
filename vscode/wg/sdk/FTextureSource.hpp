#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTextureSource // Size: 0x88
{
public:
    uint8_t UnknownData0[0x88];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTextureSource = sizeof(FTextureSource); // 136
    static_assert(sizeof(FTextureSource) == 0x88, "Size of FTextureSource is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
