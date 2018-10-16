#pragma once
#include "FConstraintDrive.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "EAngularDriveMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAngularDriveConstraint // Size: 0x4C
{
public:
    FConstraintDrive TwistDrive; /* Ofs: 0x0 Size: 0x10 StructProperty Engine.AngularDriveConstraint.TwistDrive */
    FConstraintDrive SwingDrive; /* Ofs: 0x10 Size: 0x10 StructProperty Engine.AngularDriveConstraint.SwingDrive */
    FConstraintDrive SlerpDrive; /* Ofs: 0x20 Size: 0x10 StructProperty Engine.AngularDriveConstraint.SlerpDrive */
    FRotator OrientationTarget; /* Ofs: 0x30 Size: 0xC StructProperty Engine.AngularDriveConstraint.OrientationTarget */
    FVector AngularVelocityTarget; /* Ofs: 0x3C Size: 0xC StructProperty Engine.AngularDriveConstraint.AngularVelocityTarget */
    TEnumAsByte<enum EAngularDriveMode> AngularDriveMode; /* Ofs: 0x48 Size: 0x1 ByteProperty Engine.AngularDriveConstraint.AngularDriveMode */
    uint8_t UnknownData49[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAngularDriveConstraint = sizeof(FAngularDriveConstraint); // 76
    static_assert(sizeof(FAngularDriveConstraint) == 0x4C, "Size of FAngularDriveConstraint is not correct.");
	auto constexpr FAngularDriveConstraint_TwistDrive_Offset = offsetof(FAngularDriveConstraint, TwistDrive);
	static_assert(FAngularDriveConstraint_TwistDrive_Offset == 0x0, "FAngularDriveConstraint::TwistDrive offset is not 0");
	auto constexpr FAngularDriveConstraint_SwingDrive_Offset = offsetof(FAngularDriveConstraint, SwingDrive);
	static_assert(FAngularDriveConstraint_SwingDrive_Offset == 0x10, "FAngularDriveConstraint::SwingDrive offset is not 10");
	auto constexpr FAngularDriveConstraint_SlerpDrive_Offset = offsetof(FAngularDriveConstraint, SlerpDrive);
	static_assert(FAngularDriveConstraint_SlerpDrive_Offset == 0x20, "FAngularDriveConstraint::SlerpDrive offset is not 20");
	auto constexpr FAngularDriveConstraint_OrientationTarget_Offset = offsetof(FAngularDriveConstraint, OrientationTarget);
	static_assert(FAngularDriveConstraint_OrientationTarget_Offset == 0x30, "FAngularDriveConstraint::OrientationTarget offset is not 30");
	auto constexpr FAngularDriveConstraint_AngularVelocityTarget_Offset = offsetof(FAngularDriveConstraint, AngularVelocityTarget);
	static_assert(FAngularDriveConstraint_AngularVelocityTarget_Offset == 0x3c, "FAngularDriveConstraint::AngularVelocityTarget offset is not 3c");
	auto constexpr FAngularDriveConstraint_AngularDriveMode_Offset = offsetof(FAngularDriveConstraint, AngularDriveMode);
	static_assert(FAngularDriveConstraint_AngularDriveMode_Offset == 0x48, "FAngularDriveConstraint::AngularDriveMode offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
