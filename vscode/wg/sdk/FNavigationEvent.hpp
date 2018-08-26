#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavigationEvent // Size: 0x28
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavigationEvent = sizeof(FNavigationEvent); // 40
    static_assert(sizeof(FNavigationEvent) == 0x28, "Size of FNavigationEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
