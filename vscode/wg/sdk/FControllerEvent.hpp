#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FControllerEvent // Size: 0x40
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFControllerEvent = sizeof(FControllerEvent); // 64
    static_assert(sizeof(FControllerEvent) == 0x40, "Size of FControllerEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
