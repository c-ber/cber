#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOverlapInfo // Size: 0x90
{
public:
    uint8_t UnknownData0[0x90];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOverlapInfo = sizeof(FOverlapInfo); // 144
    static_assert(sizeof(FOverlapInfo) == 0x90, "Size of FOverlapInfo is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
