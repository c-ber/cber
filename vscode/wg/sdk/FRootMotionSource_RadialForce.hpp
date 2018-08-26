#pragma once
#include "FRootMotionSource.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRootMotionSource_RadialForce // Size: 0xE0
 : public FRootMotionSource // Size: 0xA0
{
public:
//    FVector Location; /* Ofs: 0x98 Size: 0xC StructProperty Engine.RootMotionSource_RadialForce.Location */
    uint8_t UnknownDataA0[0x8];
    ExternalPtr<struct UActor> LocationActor; /* Ofs: 0xA8 Size: 0x8 ObjectProperty Engine.RootMotionSource_RadialForce.LocationActor */
    float Radius; /* Ofs: 0xB0 Size: 0x4 FloatProperty Engine.RootMotionSource_RadialForce.Radius */
    float Strength; /* Ofs: 0xB4 Size: 0x4 FloatProperty Engine.RootMotionSource_RadialForce.Strength */
    bool bIsPush; /* Ofs: 0xB8 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_RadialForce.bIsPush */
    bool bNoZForce; /* Ofs: 0xB9 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_RadialForce.bNoZForce */
    uint8_t UnknownDataBA[0x6];
    ExternalPtr<struct UCurveFloat> StrengthDistanceFalloff; /* Ofs: 0xC0 Size: 0x8 ObjectProperty Engine.RootMotionSource_RadialForce.StrengthDistanceFalloff */
    ExternalPtr<struct UCurveFloat> StrengthOverTime; /* Ofs: 0xC8 Size: 0x8 ObjectProperty Engine.RootMotionSource_RadialForce.StrengthOverTime */
    bool bUseFixedWorldDirection; /* Ofs: 0xD0 Size: 0x1 BitMask: 01 BoolProperty Engine.RootMotionSource_RadialForce.bUseFixedWorldDirection */
    uint8_t UnknownDataD1[0x3];
    FRotator FixedWorldDirection; /* Ofs: 0xD4 Size: 0xC StructProperty Engine.RootMotionSource_RadialForce.FixedWorldDirection */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRootMotionSource_RadialForce = sizeof(FRootMotionSource_RadialForce); // 224
    static_assert(sizeof(FRootMotionSource_RadialForce) == 0xE0, "Size of FRootMotionSource_RadialForce is not correct.");
//	auto constexpr FRootMotionSource_RadialForce_Location_Offset = offsetof(FRootMotionSource_RadialForce, Location);
//	static_assert(FRootMotionSource_RadialForce_Location_Offset == 0x98, "FRootMotionSource_RadialForce::Location offset is not 98");
	auto constexpr FRootMotionSource_RadialForce_LocationActor_Offset = offsetof(FRootMotionSource_RadialForce, LocationActor);
	static_assert(FRootMotionSource_RadialForce_LocationActor_Offset == 0xa8, "FRootMotionSource_RadialForce::LocationActor offset is not a8");
	auto constexpr FRootMotionSource_RadialForce_Radius_Offset = offsetof(FRootMotionSource_RadialForce, Radius);
	static_assert(FRootMotionSource_RadialForce_Radius_Offset == 0xb0, "FRootMotionSource_RadialForce::Radius offset is not b0");
	auto constexpr FRootMotionSource_RadialForce_Strength_Offset = offsetof(FRootMotionSource_RadialForce, Strength);
	static_assert(FRootMotionSource_RadialForce_Strength_Offset == 0xb4, "FRootMotionSource_RadialForce::Strength offset is not b4");
	auto constexpr FRootMotionSource_RadialForce_StrengthDistanceFalloff_Offset = offsetof(FRootMotionSource_RadialForce, StrengthDistanceFalloff);
	static_assert(FRootMotionSource_RadialForce_StrengthDistanceFalloff_Offset == 0xc0, "FRootMotionSource_RadialForce::StrengthDistanceFalloff offset is not c0");
	auto constexpr FRootMotionSource_RadialForce_StrengthOverTime_Offset = offsetof(FRootMotionSource_RadialForce, StrengthOverTime);
	static_assert(FRootMotionSource_RadialForce_StrengthOverTime_Offset == 0xc8, "FRootMotionSource_RadialForce::StrengthOverTime offset is not c8");
	auto constexpr FRootMotionSource_RadialForce_FixedWorldDirection_Offset = offsetof(FRootMotionSource_RadialForce, FixedWorldDirection);
	static_assert(FRootMotionSource_RadialForce_FixedWorldDirection_Offset == 0xd4, "FRootMotionSource_RadialForce::FixedWorldDirection offset is not d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
