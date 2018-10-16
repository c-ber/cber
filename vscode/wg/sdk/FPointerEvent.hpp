#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPointerEvent // Size: 0x78
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x58];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPointerEvent = sizeof(FPointerEvent); // 120
    static_assert(sizeof(FPointerEvent) == 0x78, "Size of FPointerEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
