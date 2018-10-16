#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKeyEvent // Size: 0x40
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKeyEvent = sizeof(FKeyEvent); // 64
    static_assert(sizeof(FKeyEvent) == 0x40, "Size of FKeyEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
