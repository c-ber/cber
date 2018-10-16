#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FForceTriangle // Size: 0x6C
{
public:
    uint8_t UnknownData0[0x6C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFForceTriangle = sizeof(FForceTriangle); // 108
    static_assert(sizeof(FForceTriangle) == 0x6C, "Size of FForceTriangle is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
