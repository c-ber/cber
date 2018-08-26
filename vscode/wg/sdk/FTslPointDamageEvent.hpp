#pragma once
#include "FPointDamageEvent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslPointDamageEvent // Size: 0xB8
 : public FPointDamageEvent // Size: 0xB0
{
public:
    bool bDestructibleDoor; /* Ofs: 0xB0 Size: 0x1 BitMask: 01 BoolProperty TslGame.TslPointDamageEvent.bDestructibleDoor */
    uint8_t UnknownDataB1[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslPointDamageEvent = sizeof(FTslPointDamageEvent); // 184
    static_assert(sizeof(FTslPointDamageEvent) == 0xB8, "Size of FTslPointDamageEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
