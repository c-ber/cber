#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStreamableTextureInstance // Size: 0x28
{
public:
    uint8_t UnknownData0[0x28];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStreamableTextureInstance = sizeof(FStreamableTextureInstance); // 40
    static_assert(sizeof(FStreamableTextureInstance) == 0x28, "Size of FStreamableTextureInstance is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
