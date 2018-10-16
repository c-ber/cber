#pragma once
#include "AnimPhysLinearConstraintType.hpp"
#include "FVector.hpp"
#include "AnimPhysAngularConstraintType.hpp"
#include "AnimPhysTwistAxis.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimPhysConstraintSetup // Size: 0x5C
{
public:
    TEnumAsByte<enum AnimPhysLinearConstraintType> LinearXLimitType; /* Ofs: 0x0 Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearXLimitType */
    TEnumAsByte<enum AnimPhysLinearConstraintType> LinearYLimitType; /* Ofs: 0x1 Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearYLimitType */
    TEnumAsByte<enum AnimPhysLinearConstraintType> LinearZLimitType; /* Ofs: 0x2 Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearZLimitType */
    uint8_t UnknownData3[0x1];
    FVector LinearAxesMin; /* Ofs: 0x4 Size: 0xC StructProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearAxesMin */
    FVector LinearAxesMax; /* Ofs: 0x10 Size: 0xC StructProperty AnimGraphRuntime.AnimPhysConstraintSetup.LinearAxesMax */
    TEnumAsByte<enum AnimPhysAngularConstraintType> AngularConstraintType; /* Ofs: 0x1C Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularConstraintType */
    TEnumAsByte<enum AnimPhysTwistAxis> TwistAxis; /* Ofs: 0x1D Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.TwistAxis */
    uint8_t UnknownData1E[0x2];
    float ConeAngle; /* Ofs: 0x20 Size: 0x4 FloatProperty AnimGraphRuntime.AnimPhysConstraintSetup.ConeAngle */
    float AngularXAngle; /* Ofs: 0x24 Size: 0x4 FloatProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularXAngle */
    float AngularYAngle; /* Ofs: 0x28 Size: 0x4 FloatProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularYAngle */
    float AngularZAngle; /* Ofs: 0x2C Size: 0x4 FloatProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularZAngle */
    FVector AngularLimitsMin; /* Ofs: 0x30 Size: 0xC StructProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularLimitsMin */
    FVector AngularLimitsMax; /* Ofs: 0x3C Size: 0xC StructProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularLimitsMax */
    TEnumAsByte<enum AnimPhysTwistAxis> AngularTargetAxis; /* Ofs: 0x48 Size: 0x1 EnumProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularTargetAxis */
    uint8_t UnknownData49[0x3];
    FVector AngularTarget; /* Ofs: 0x4C Size: 0xC StructProperty AnimGraphRuntime.AnimPhysConstraintSetup.AngularTarget */
    bool bLinearFullyLocked; /* Ofs: 0x58 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimPhysConstraintSetup.bLinearFullyLocked */
    uint8_t UnknownData59[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimPhysConstraintSetup = sizeof(FAnimPhysConstraintSetup); // 92
    static_assert(sizeof(FAnimPhysConstraintSetup) == 0x5C, "Size of FAnimPhysConstraintSetup is not correct.");
	auto constexpr FAnimPhysConstraintSetup_LinearXLimitType_Offset = offsetof(FAnimPhysConstraintSetup, LinearXLimitType);
	static_assert(FAnimPhysConstraintSetup_LinearXLimitType_Offset == 0x0, "FAnimPhysConstraintSetup::LinearXLimitType offset is not 0");
	auto constexpr FAnimPhysConstraintSetup_LinearYLimitType_Offset = offsetof(FAnimPhysConstraintSetup, LinearYLimitType);
	static_assert(FAnimPhysConstraintSetup_LinearYLimitType_Offset == 0x1, "FAnimPhysConstraintSetup::LinearYLimitType offset is not 1");
	auto constexpr FAnimPhysConstraintSetup_LinearZLimitType_Offset = offsetof(FAnimPhysConstraintSetup, LinearZLimitType);
	static_assert(FAnimPhysConstraintSetup_LinearZLimitType_Offset == 0x2, "FAnimPhysConstraintSetup::LinearZLimitType offset is not 2");
	auto constexpr FAnimPhysConstraintSetup_LinearAxesMin_Offset = offsetof(FAnimPhysConstraintSetup, LinearAxesMin);
	static_assert(FAnimPhysConstraintSetup_LinearAxesMin_Offset == 0x4, "FAnimPhysConstraintSetup::LinearAxesMin offset is not 4");
	auto constexpr FAnimPhysConstraintSetup_LinearAxesMax_Offset = offsetof(FAnimPhysConstraintSetup, LinearAxesMax);
	static_assert(FAnimPhysConstraintSetup_LinearAxesMax_Offset == 0x10, "FAnimPhysConstraintSetup::LinearAxesMax offset is not 10");
	auto constexpr FAnimPhysConstraintSetup_AngularConstraintType_Offset = offsetof(FAnimPhysConstraintSetup, AngularConstraintType);
	static_assert(FAnimPhysConstraintSetup_AngularConstraintType_Offset == 0x1c, "FAnimPhysConstraintSetup::AngularConstraintType offset is not 1c");
	auto constexpr FAnimPhysConstraintSetup_TwistAxis_Offset = offsetof(FAnimPhysConstraintSetup, TwistAxis);
	static_assert(FAnimPhysConstraintSetup_TwistAxis_Offset == 0x1d, "FAnimPhysConstraintSetup::TwistAxis offset is not 1d");
	auto constexpr FAnimPhysConstraintSetup_ConeAngle_Offset = offsetof(FAnimPhysConstraintSetup, ConeAngle);
	static_assert(FAnimPhysConstraintSetup_ConeAngle_Offset == 0x20, "FAnimPhysConstraintSetup::ConeAngle offset is not 20");
	auto constexpr FAnimPhysConstraintSetup_AngularXAngle_Offset = offsetof(FAnimPhysConstraintSetup, AngularXAngle);
	static_assert(FAnimPhysConstraintSetup_AngularXAngle_Offset == 0x24, "FAnimPhysConstraintSetup::AngularXAngle offset is not 24");
	auto constexpr FAnimPhysConstraintSetup_AngularYAngle_Offset = offsetof(FAnimPhysConstraintSetup, AngularYAngle);
	static_assert(FAnimPhysConstraintSetup_AngularYAngle_Offset == 0x28, "FAnimPhysConstraintSetup::AngularYAngle offset is not 28");
	auto constexpr FAnimPhysConstraintSetup_AngularZAngle_Offset = offsetof(FAnimPhysConstraintSetup, AngularZAngle);
	static_assert(FAnimPhysConstraintSetup_AngularZAngle_Offset == 0x2c, "FAnimPhysConstraintSetup::AngularZAngle offset is not 2c");
	auto constexpr FAnimPhysConstraintSetup_AngularLimitsMin_Offset = offsetof(FAnimPhysConstraintSetup, AngularLimitsMin);
	static_assert(FAnimPhysConstraintSetup_AngularLimitsMin_Offset == 0x30, "FAnimPhysConstraintSetup::AngularLimitsMin offset is not 30");
	auto constexpr FAnimPhysConstraintSetup_AngularLimitsMax_Offset = offsetof(FAnimPhysConstraintSetup, AngularLimitsMax);
	static_assert(FAnimPhysConstraintSetup_AngularLimitsMax_Offset == 0x3c, "FAnimPhysConstraintSetup::AngularLimitsMax offset is not 3c");
	auto constexpr FAnimPhysConstraintSetup_AngularTargetAxis_Offset = offsetof(FAnimPhysConstraintSetup, AngularTargetAxis);
	static_assert(FAnimPhysConstraintSetup_AngularTargetAxis_Offset == 0x48, "FAnimPhysConstraintSetup::AngularTargetAxis offset is not 48");
	auto constexpr FAnimPhysConstraintSetup_AngularTarget_Offset = offsetof(FAnimPhysConstraintSetup, AngularTarget);
	static_assert(FAnimPhysConstraintSetup_AngularTarget_Offset == 0x4c, "FAnimPhysConstraintSetup::AngularTarget offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
