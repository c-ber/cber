#pragma once
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "ESphericalLimitType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimPhysSphericalLimit // Size: 0x30
{
public:
    FBoneReference DrivingBone; /* Ofs: 0x0 Size: 0x18 StructProperty AnimGraphRuntime.AnimPhysSphericalLimit.DrivingBone */
    FVector SphereLocalOffset; /* Ofs: 0x18 Size: 0xC StructProperty AnimGraphRuntime.AnimPhysSphericalLimit.SphereLocalOffset */
    float LimitRadius; /* Ofs: 0x24 Size: 0x4 FloatProperty AnimGraphRuntime.AnimPhysSphericalLimit.LimitRadius */
    TEnumAsByte<enum ESphericalLimitType> LimitType; /* Ofs: 0x28 Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysSphericalLimit.LimitType */
    uint8_t UnknownData29[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimPhysSphericalLimit = sizeof(FAnimPhysSphericalLimit); // 48
    static_assert(sizeof(FAnimPhysSphericalLimit) == 0x30, "Size of FAnimPhysSphericalLimit is not correct.");
	auto constexpr FAnimPhysSphericalLimit_DrivingBone_Offset = offsetof(FAnimPhysSphericalLimit, DrivingBone);
	static_assert(FAnimPhysSphericalLimit_DrivingBone_Offset == 0x0, "FAnimPhysSphericalLimit::DrivingBone offset is not 0");
	auto constexpr FAnimPhysSphericalLimit_SphereLocalOffset_Offset = offsetof(FAnimPhysSphericalLimit, SphereLocalOffset);
	static_assert(FAnimPhysSphericalLimit_SphereLocalOffset_Offset == 0x18, "FAnimPhysSphericalLimit::SphereLocalOffset offset is not 18");
	auto constexpr FAnimPhysSphericalLimit_LimitRadius_Offset = offsetof(FAnimPhysSphericalLimit, LimitRadius);
	static_assert(FAnimPhysSphericalLimit_LimitRadius_Offset == 0x24, "FAnimPhysSphericalLimit::LimitRadius offset is not 24");
	auto constexpr FAnimPhysSphericalLimit_LimitType_Offset = offsetof(FAnimPhysSphericalLimit, LimitType);
	static_assert(FAnimPhysSphericalLimit_LimitType_Offset == 0x28, "FAnimPhysSphericalLimit::LimitType offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
