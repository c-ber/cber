#pragma once
#include "FRootMotionSource.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource_MoveToForce // Size: 0xC0
 : public FRootMotionSource // Size: 0xA0
{
public:
//    FVector StartLocation; /* Ofs: 0x98 Size: 0xC StructProperty Engine.RootMotionSource_MoveToForce.StartLocation */
    uint8_t UnknownDataA0[0x4];
    FVector TargetLocation; /* Ofs: 0xA4 Size: 0xC StructProperty Engine.RootMotionSource_MoveToForce.TargetLocation */
    bool bRestrictSpeedToExpected; /* Ofs: 0xB0 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_MoveToForce.bRestrictSpeedToExpected */
    uint8_t UnknownDataB1[0x7];
    ExternalPtr<struct UCurveVector> PathOffsetCurve; /* Ofs: 0xB8 Size: 0x8 ObjectProperty Engine.RootMotionSource_MoveToForce.PathOffsetCurve */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource_MoveToForce = sizeof(FRootMotionSource_MoveToForce); // 192
    static_assert(sizeof(FRootMotionSource_MoveToForce) == 0xC0, "Size of FRootMotionSource_MoveToForce is not correct.");
//	auto constexpr FRootMotionSource_MoveToForce_StartLocation_Offset = offsetof(FRootMotionSource_MoveToForce, StartLocation);
//	static_assert(FRootMotionSource_MoveToForce_StartLocation_Offset == 0x98, "FRootMotionSource_MoveToForce::StartLocation offset is not 98");
	auto constexpr FRootMotionSource_MoveToForce_TargetLocation_Offset = offsetof(FRootMotionSource_MoveToForce, TargetLocation);
	static_assert(FRootMotionSource_MoveToForce_TargetLocation_Offset == 0xa4, "FRootMotionSource_MoveToForce::TargetLocation offset is not a4");
	auto constexpr FRootMotionSource_MoveToForce_PathOffsetCurve_Offset = offsetof(FRootMotionSource_MoveToForce, PathOffsetCurve);
	static_assert(FRootMotionSource_MoveToForce_PathOffsetCurve_Offset == 0xb8, "FRootMotionSource_MoveToForce::PathOffsetCurve offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
