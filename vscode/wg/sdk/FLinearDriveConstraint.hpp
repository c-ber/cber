#pragma once
#include "FVector.hpp"
#include "FConstraintDrive.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLinearDriveConstraint // Size: 0x4C
{
public:
    FVector PositionTarget; /* Ofs: 0x0 Size: 0xC StructProperty Engine.LinearDriveConstraint.PositionTarget */
    FVector VelocityTarget; /* Ofs: 0xC Size: 0xC StructProperty Engine.LinearDriveConstraint.VelocityTarget */
    FConstraintDrive XDrive; /* Ofs: 0x18 Size: 0x10 StructProperty Engine.LinearDriveConstraint.XDrive */
    FConstraintDrive YDrive; /* Ofs: 0x28 Size: 0x10 StructProperty Engine.LinearDriveConstraint.YDrive */
    FConstraintDrive ZDrive; /* Ofs: 0x38 Size: 0x10 StructProperty Engine.LinearDriveConstraint.ZDrive */
    bool bEnablePositionDrive; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty Engine.LinearDriveConstraint.bEnablePositionDrive */
    uint8_t UnknownData49[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLinearDriveConstraint = sizeof(FLinearDriveConstraint); // 76
    static_assert(sizeof(FLinearDriveConstraint) == 0x4C, "Size of FLinearDriveConstraint is not correct.");
	auto constexpr FLinearDriveConstraint_PositionTarget_Offset = offsetof(FLinearDriveConstraint, PositionTarget);
	static_assert(FLinearDriveConstraint_PositionTarget_Offset == 0x0, "FLinearDriveConstraint::PositionTarget offset is not 0");
	auto constexpr FLinearDriveConstraint_VelocityTarget_Offset = offsetof(FLinearDriveConstraint, VelocityTarget);
	static_assert(FLinearDriveConstraint_VelocityTarget_Offset == 0xc, "FLinearDriveConstraint::VelocityTarget offset is not c");
	auto constexpr FLinearDriveConstraint_XDrive_Offset = offsetof(FLinearDriveConstraint, XDrive);
	static_assert(FLinearDriveConstraint_XDrive_Offset == 0x18, "FLinearDriveConstraint::XDrive offset is not 18");
	auto constexpr FLinearDriveConstraint_YDrive_Offset = offsetof(FLinearDriveConstraint, YDrive);
	static_assert(FLinearDriveConstraint_YDrive_Offset == 0x28, "FLinearDriveConstraint::YDrive offset is not 28");
	auto constexpr FLinearDriveConstraint_ZDrive_Offset = offsetof(FLinearDriveConstraint, ZDrive);
	static_assert(FLinearDriveConstraint_ZDrive_Offset == 0x38, "FLinearDriveConstraint::ZDrive offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
