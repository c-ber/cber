#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlendFilter // Size: 0x90
{
public:
    uint8_t UnknownData0[0x90];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlendFilter = sizeof(FBlendFilter); // 144
    static_assert(sizeof(FBlendFilter) == 0x90, "Size of FBlendFilter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
