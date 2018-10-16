#pragma once
#include "FRootMotionSource.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource_MoveToDynamicForce // Size: 0xD0
 : public FRootMotionSource // Size: 0xA0
{
public:
//    FVector StartLocation; /* Ofs: 0x98 Size: 0xC StructProperty Engine.RootMotionSource_MoveToDynamicForce.StartLocation */
    uint8_t UnknownDataA0[0x4];
    FVector InitialTargetLocation; /* Ofs: 0xA4 Size: 0xC StructProperty Engine.RootMotionSource_MoveToDynamicForce.InitialTargetLocation */
    FVector TargetLocation; /* Ofs: 0xB0 Size: 0xC StructProperty Engine.RootMotionSource_MoveToDynamicForce.TargetLocation */
    bool bRestrictSpeedToExpected; /* Ofs: 0xBC Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_MoveToDynamicForce.bRestrictSpeedToExpected */
    uint8_t UnknownDataBD[0x3];
    ExternalPtr<struct UCurveVector> PathOffsetCurve; /* Ofs: 0xC0 Size: 0x8 ObjectProperty Engine.RootMotionSource_MoveToDynamicForce.PathOffsetCurve */
    ExternalPtr<struct UCurveFloat> TimeMappingCurve; /* Ofs: 0xC8 Size: 0x8 ObjectProperty Engine.RootMotionSource_MoveToDynamicForce.TimeMappingCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource_MoveToDynamicForce = sizeof(FRootMotionSource_MoveToDynamicForce); // 208
    static_assert(sizeof(FRootMotionSource_MoveToDynamicForce) == 0xD0, "Size of FRootMotionSource_MoveToDynamicForce is not correct.");
//	auto constexpr FRootMotionSource_MoveToDynamicForce_StartLocation_Offset = offsetof(FRootMotionSource_MoveToDynamicForce, StartLocation);
//	static_assert(FRootMotionSource_MoveToDynamicForce_StartLocation_Offset == 0x98, "FRootMotionSource_MoveToDynamicForce::StartLocation offset is not 98");
	auto constexpr FRootMotionSource_MoveToDynamicForce_InitialTargetLocation_Offset = offsetof(FRootMotionSource_MoveToDynamicForce, InitialTargetLocation);
	static_assert(FRootMotionSource_MoveToDynamicForce_InitialTargetLocation_Offset == 0xa4, "FRootMotionSource_MoveToDynamicForce::InitialTargetLocation offset is not a4");
	auto constexpr FRootMotionSource_MoveToDynamicForce_TargetLocation_Offset = offsetof(FRootMotionSource_MoveToDynamicForce, TargetLocation);
	static_assert(FRootMotionSource_MoveToDynamicForce_TargetLocation_Offset == 0xb0, "FRootMotionSource_MoveToDynamicForce::TargetLocation offset is not b0");
	auto constexpr FRootMotionSource_MoveToDynamicForce_PathOffsetCurve_Offset = offsetof(FRootMotionSource_MoveToDynamicForce, PathOffsetCurve);
	static_assert(FRootMotionSource_MoveToDynamicForce_PathOffsetCurve_Offset == 0xc0, "FRootMotionSource_MoveToDynamicForce::PathOffsetCurve offset is not c0");
	auto constexpr FRootMotionSource_MoveToDynamicForce_TimeMappingCurve_Offset = offsetof(FRootMotionSource_MoveToDynamicForce, TimeMappingCurve);
	static_assert(FRootMotionSource_MoveToDynamicForce_TimeMappingCurve_Offset == 0xc8, "FRootMotionSource_MoveToDynamicForce::TimeMappingCurve offset is not c8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
