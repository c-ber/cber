#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDoorBreakingStateLegacy // Size: 0x1
{
public:
    bool bIsBrokenTop : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.DoorBreakingStateLegacy.bIsBrokenTop */
    bool bIsBrokenCenter : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty TslGame.DoorBreakingStateLegacy.bIsBrokenCenter */
    bool bIsBrokenBottom : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty TslGame.DoorBreakingStateLegacy.bIsBrokenBottom */
    bool bIsDM : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 08 BoolProperty TslGame.DoorBreakingStateLegacy.bIsDM */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDoorBreakingStateLegacy = sizeof(FDoorBreakingStateLegacy); // 1
    static_assert(sizeof(FDoorBreakingStateLegacy) == 0x1, "Size of FDoorBreakingStateLegacy is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
