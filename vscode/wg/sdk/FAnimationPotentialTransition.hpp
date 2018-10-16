#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimationPotentialTransition // Size: 0x30
{
public:
    uint8_t UnknownData0[0x30];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimationPotentialTransition = sizeof(FAnimationPotentialTransition); // 48
    static_assert(sizeof(FAnimationPotentialTransition) == 0x30, "Size of FAnimationPotentialTransition is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
