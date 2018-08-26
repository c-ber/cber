#pragma once
#include "FRepRootMotionMontage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSimulatedRootMotionReplicatedMove // Size: 0x168
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SimulatedRootMotionReplicatedMove.Time */
    uint8_t UnknownData4[0x4];
    FRepRootMotionMontage RootMotion; /* Ofs: 0x8 Size: 0x160 StructProperty Engine.SimulatedRootMotionReplicatedMove.RootMotion */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSimulatedRootMotionReplicatedMove = sizeof(FSimulatedRootMotionReplicatedMove); // 360
    static_assert(sizeof(FSimulatedRootMotionReplicatedMove) == 0x168, "Size of FSimulatedRootMotionReplicatedMove is not correct.");
	auto constexpr FSimulatedRootMotionReplicatedMove_Time_Offset = offsetof(FSimulatedRootMotionReplicatedMove, Time);
	static_assert(FSimulatedRootMotionReplicatedMove_Time_Offset == 0x0, "FSimulatedRootMotionReplicatedMove::Time offset is not 0");
	auto constexpr FSimulatedRootMotionReplicatedMove_RootMotion_Offset = offsetof(FSimulatedRootMotionReplicatedMove, RootMotion);
	static_assert(FSimulatedRootMotionReplicatedMove_RootMotion_Offset == 0x8, "FSimulatedRootMotionReplicatedMove::RootMotion offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
