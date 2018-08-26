#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovementProperties // Size: 0x4
{
public:
    bool bCanCrouch : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.MovementProperties.bCanCrouch */
    bool bCanJump : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty Engine.MovementProperties.bCanJump */
    bool bCanWalk : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty Engine.MovementProperties.bCanWalk */
    bool bCanSwim : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty Engine.MovementProperties.bCanSwim */
    bool bCanFly : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 10 BoolProperty Engine.MovementProperties.bCanFly */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovementProperties = sizeof(FMovementProperties); // 4
    static_assert(sizeof(FMovementProperties) == 0x4, "Size of FMovementProperties is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
