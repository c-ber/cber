#pragma once
#include "FLinearConstraint.hpp"
#include "FConeConstraint.hpp"
#include "FTwistConstraint.hpp"
#include "FLinearDriveConstraint.hpp"
#include "FAngularDriveConstraint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintProfileProperties // Size: 0x104
{
public:
    float ProjectionLinearTolerance; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ConstraintProfileProperties.ProjectionLinearTolerance */
    float ProjectionAngularTolerance; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.ConstraintProfileProperties.ProjectionAngularTolerance */
    float LinearBreakThreshold; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ConstraintProfileProperties.LinearBreakThreshold */
    float AngularBreakThreshold; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.ConstraintProfileProperties.AngularBreakThreshold */
    FLinearConstraint LinearLimit; /* Ofs: 0x10 Size: 0x1C StructProperty Engine.ConstraintProfileProperties.LinearLimit */
    FConeConstraint ConeLimit; /* Ofs: 0x2C Size: 0x20 StructProperty Engine.ConstraintProfileProperties.ConeLimit */
    FTwistConstraint TwistLimit; /* Ofs: 0x4C Size: 0x1C StructProperty Engine.ConstraintProfileProperties.TwistLimit */
    FLinearDriveConstraint LinearDrive; /* Ofs: 0x68 Size: 0x4C StructProperty Engine.ConstraintProfileProperties.LinearDrive */
    FAngularDriveConstraint AngularDrive; /* Ofs: 0xB4 Size: 0x4C StructProperty Engine.ConstraintProfileProperties.AngularDrive */
    bool bDisableCollision : 1; /* Ofs: 0x100 Size: 0x1 BitMask: 01 BoolProperty Engine.ConstraintProfileProperties.bDisableCollision */
    bool bEnableProjection : 1; /* Ofs: 0x100 Size: 0x1 BitMask: 02 BoolProperty Engine.ConstraintProfileProperties.bEnableProjection */
    bool bAngularBreakable : 1; /* Ofs: 0x100 Size: 0x1 BitMask: 04 BoolProperty Engine.ConstraintProfileProperties.bAngularBreakable */
    bool bLinearBreakable : 1; /* Ofs: 0x100 Size: 0x1 BitMask: 08 BoolProperty Engine.ConstraintProfileProperties.bLinearBreakable */
    uint8_t UnknownData101[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintProfileProperties = sizeof(FConstraintProfileProperties); // 260
    static_assert(sizeof(FConstraintProfileProperties) == 0x104, "Size of FConstraintProfileProperties is not correct.");
	auto constexpr FConstraintProfileProperties_ProjectionLinearTolerance_Offset = offsetof(FConstraintProfileProperties, ProjectionLinearTolerance);
	static_assert(FConstraintProfileProperties_ProjectionLinearTolerance_Offset == 0x0, "FConstraintProfileProperties::ProjectionLinearTolerance offset is not 0");
	auto constexpr FConstraintProfileProperties_ProjectionAngularTolerance_Offset = offsetof(FConstraintProfileProperties, ProjectionAngularTolerance);
	static_assert(FConstraintProfileProperties_ProjectionAngularTolerance_Offset == 0x4, "FConstraintProfileProperties::ProjectionAngularTolerance offset is not 4");
	auto constexpr FConstraintProfileProperties_LinearBreakThreshold_Offset = offsetof(FConstraintProfileProperties, LinearBreakThreshold);
	static_assert(FConstraintProfileProperties_LinearBreakThreshold_Offset == 0x8, "FConstraintProfileProperties::LinearBreakThreshold offset is not 8");
	auto constexpr FConstraintProfileProperties_AngularBreakThreshold_Offset = offsetof(FConstraintProfileProperties, AngularBreakThreshold);
	static_assert(FConstraintProfileProperties_AngularBreakThreshold_Offset == 0xc, "FConstraintProfileProperties::AngularBreakThreshold offset is not c");
	auto constexpr FConstraintProfileProperties_LinearLimit_Offset = offsetof(FConstraintProfileProperties, LinearLimit);
	static_assert(FConstraintProfileProperties_LinearLimit_Offset == 0x10, "FConstraintProfileProperties::LinearLimit offset is not 10");
	auto constexpr FConstraintProfileProperties_ConeLimit_Offset = offsetof(FConstraintProfileProperties, ConeLimit);
	static_assert(FConstraintProfileProperties_ConeLimit_Offset == 0x2c, "FConstraintProfileProperties::ConeLimit offset is not 2c");
	auto constexpr FConstraintProfileProperties_TwistLimit_Offset = offsetof(FConstraintProfileProperties, TwistLimit);
	static_assert(FConstraintProfileProperties_TwistLimit_Offset == 0x4c, "FConstraintProfileProperties::TwistLimit offset is not 4c");
	auto constexpr FConstraintProfileProperties_LinearDrive_Offset = offsetof(FConstraintProfileProperties, LinearDrive);
	static_assert(FConstraintProfileProperties_LinearDrive_Offset == 0x68, "FConstraintProfileProperties::LinearDrive offset is not 68");
	auto constexpr FConstraintProfileProperties_AngularDrive_Offset = offsetof(FConstraintProfileProperties, AngularDrive);
	static_assert(FConstraintProfileProperties_AngularDrive_Offset == 0xb4, "FConstraintProfileProperties::AngularDrive offset is not b4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
