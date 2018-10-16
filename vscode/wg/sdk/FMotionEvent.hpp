#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMotionEvent // Size: 0x50
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMotionEvent = sizeof(FMotionEvent); // 80
    static_assert(sizeof(FMotionEvent) == 0x50, "Size of FMotionEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
