#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDoorBreakingState // Size: 0x1
{
public:
    bool bIsBrokenTop : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.DoorBreakingState.bIsBrokenTop */
    bool bIsBrokenCenter : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty TslGame.DoorBreakingState.bIsBrokenCenter */
    bool bIsBrokenBottom : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty TslGame.DoorBreakingState.bIsBrokenBottom */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDoorBreakingState = sizeof(FDoorBreakingState); // 1
    static_assert(sizeof(FDoorBreakingState) == 0x1, "Size of FDoorBreakingState is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
