#pragma once
#include "FInputEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCharacterEvent // Size: 0x28
 : public FInputEvent // Size: 0x20
{
public:
    uint8_t UnknownData20[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCharacterEvent = sizeof(FCharacterEvent); // 40
    static_assert(sizeof(FCharacterEvent) == 0x28, "Size of FCharacterEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
