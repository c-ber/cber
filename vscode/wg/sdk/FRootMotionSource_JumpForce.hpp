#pragma once
#include "FRootMotionSource.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource_JumpForce // Size: 0xD0
 : public FRootMotionSource // Size: 0xA0
{
public:
//    FRotator Rotation; /* Ofs: 0x98 Size: 0xC StructProperty Engine.RootMotionSource_JumpForce.Rotation */
    uint8_t UnknownDataA0[0x4];
    float Distance; /* Ofs: 0xA4 Size: 0x4 FloatProperty Engine.RootMotionSource_JumpForce.Distance */
    float Height; /* Ofs: 0xA8 Size: 0x4 FloatProperty Engine.RootMotionSource_JumpForce.Height */
    bool bDisableTimeout; /* Ofs: 0xAC Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_JumpForce.bDisableTimeout */
    uint8_t UnknownDataAD[0x3];
    ExternalPtr<struct UCurveVector> PathOffsetCurve; /* Ofs: 0xB0 Size: 0x8 ObjectProperty Engine.RootMotionSource_JumpForce.PathOffsetCurve */
    ExternalPtr<struct UCurveFloat> TimeMappingCurve; /* Ofs: 0xB8 Size: 0x8 ObjectProperty Engine.RootMotionSource_JumpForce.TimeMappingCurve */
    uint8_t UnknownDataC0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource_JumpForce = sizeof(FRootMotionSource_JumpForce); // 208
    static_assert(sizeof(FRootMotionSource_JumpForce) == 0xD0, "Size of FRootMotionSource_JumpForce is not correct.");
//	auto constexpr FRootMotionSource_JumpForce_Rotation_Offset = offsetof(FRootMotionSource_JumpForce, Rotation);
//	static_assert(FRootMotionSource_JumpForce_Rotation_Offset == 0x98, "FRootMotionSource_JumpForce::Rotation offset is not 98");
	auto constexpr FRootMotionSource_JumpForce_Distance_Offset = offsetof(FRootMotionSource_JumpForce, Distance);
	static_assert(FRootMotionSource_JumpForce_Distance_Offset == 0xa4, "FRootMotionSource_JumpForce::Distance offset is not a4");
	auto constexpr FRootMotionSource_JumpForce_Height_Offset = offsetof(FRootMotionSource_JumpForce, Height);
	static_assert(FRootMotionSource_JumpForce_Height_Offset == 0xa8, "FRootMotionSource_JumpForce::Height offset is not a8");
	auto constexpr FRootMotionSource_JumpForce_PathOffsetCurve_Offset = offsetof(FRootMotionSource_JumpForce, PathOffsetCurve);
	static_assert(FRootMotionSource_JumpForce_PathOffsetCurve_Offset == 0xb0, "FRootMotionSource_JumpForce::PathOffsetCurve offset is not b0");
	auto constexpr FRootMotionSource_JumpForce_TimeMappingCurve_Offset = offsetof(FRootMotionSource_JumpForce, TimeMappingCurve);
	static_assert(FRootMotionSource_JumpForce_TimeMappingCurve_Offset == 0xb8, "FRootMotionSource_JumpForce::TimeMappingCurve offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
