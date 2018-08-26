#pragma once
#include "FKeyEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnalogInputEvent // Size: 0x48
 : public FKeyEvent // Size: 0x40
{
public:
    uint8_t UnknownData40[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnalogInputEvent = sizeof(FAnalogInputEvent); // 72
    static_assert(sizeof(FAnalogInputEvent) == 0x48, "Size of FAnalogInputEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
