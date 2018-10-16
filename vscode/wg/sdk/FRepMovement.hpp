#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"
#include "EVectorQuantization.hpp"
#include "ERotatorQuantization.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRepMovement // Size: 0x34
{
public:
    FVector LinearVelocity; /* Ofs: 0x0 Size: 0xC StructProperty Engine.RepMovement.LinearVelocity */
    FVector AngularVelocity; /* Ofs: 0xC Size: 0xC StructProperty Engine.RepMovement.AngularVelocity */
    FVector Location; /* Ofs: 0x18 Size: 0xC StructProperty Engine.RepMovement.Location */
    FRotator Rotation; /* Ofs: 0x24 Size: 0xC StructProperty Engine.RepMovement.Rotation */
    bool bSimulatedPhysicSleep : 1; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty Engine.RepMovement.bSimulatedPhysicSleep */
    bool bRepPhysics : 1; /* Ofs: 0x30 Size: 0x1 BitMask: 02 BoolProperty Engine.RepMovement.bRepPhysics */
    TEnumAsByte<enum EVectorQuantization> LocationQuantizationLevel; /* Ofs: 0x31 Size: 0x1 EnumProperty Engine.RepMovement.LocationQuantizationLevel */
    TEnumAsByte<enum EVectorQuantization> VelocityQuantizationLevel; /* Ofs: 0x32 Size: 0x1 EnumProperty Engine.RepMovement.VelocityQuantizationLevel */
    TEnumAsByte<enum ERotatorQuantization> RotationQuantizationLevel; /* Ofs: 0x33 Size: 0x1 EnumProperty Engine.RepMovement.RotationQuantizationLevel */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRepMovement = sizeof(FRepMovement); // 52
    static_assert(sizeof(FRepMovement) == 0x34, "Size of FRepMovement is not correct.");
	auto constexpr FRepMovement_LinearVelocity_Offset = offsetof(FRepMovement, LinearVelocity);
	static_assert(FRepMovement_LinearVelocity_Offset == 0x0, "FRepMovement::LinearVelocity offset is not 0");
	auto constexpr FRepMovement_AngularVelocity_Offset = offsetof(FRepMovement, AngularVelocity);
	static_assert(FRepMovement_AngularVelocity_Offset == 0xc, "FRepMovement::AngularVelocity offset is not c");
	auto constexpr FRepMovement_Location_Offset = offsetof(FRepMovement, Location);
	static_assert(FRepMovement_Location_Offset == 0x18, "FRepMovement::Location offset is not 18");
	auto constexpr FRepMovement_Rotation_Offset = offsetof(FRepMovement, Rotation);
	static_assert(FRepMovement_Rotation_Offset == 0x24, "FRepMovement::Rotation offset is not 24");
	auto constexpr FRepMovement_LocationQuantizationLevel_Offset = offsetof(FRepMovement, LocationQuantizationLevel);
	static_assert(FRepMovement_LocationQuantizationLevel_Offset == 0x31, "FRepMovement::LocationQuantizationLevel offset is not 31");
	auto constexpr FRepMovement_VelocityQuantizationLevel_Offset = offsetof(FRepMovement, VelocityQuantizationLevel);
	static_assert(FRepMovement_VelocityQuantizationLevel_Offset == 0x32, "FRepMovement::VelocityQuantizationLevel offset is not 32");
	auto constexpr FRepMovement_RotationQuantizationLevel_Offset = offsetof(FRepMovement, RotationQuantizationLevel);
	static_assert(FRepMovement_RotationQuantizationLevel_Offset == 0x33, "FRepMovement::RotationQuantizationLevel offset is not 33");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
