#pragma once
#include "FVector_NetQuantize100.hpp"
#include "FRotator.hpp"
#include "FRootMotionSourceGroup.hpp"
#include "FVector_NetQuantize10.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRepRootMotionMontage // Size: 0x160
{
public:
    bool bIsActive; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.RepRootMotionMontage.bIsActive */
    uint8_t UnknownData1[0x7];
    ExternalPtr<struct UAnimMontage> AnimMontage; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.RepRootMotionMontage.AnimMontage */
    float Position; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RepRootMotionMontage.Position */
    FVector_NetQuantize100 Location; /* Ofs: 0x14 Size: 0xC StructProperty Engine.RepRootMotionMontage.Location */
    FRotator Rotation; /* Ofs: 0x20 Size: 0xC StructProperty Engine.RepRootMotionMontage.Rotation */
    uint8_t UnknownData2C[0x4];
    ExternalPtr<struct UPrimitiveComponent> MovementBase; /* Ofs: 0x30 Size: 0x8 ObjectProperty Engine.RepRootMotionMontage.MovementBase */
    FName MovementBaseBoneName; /* Ofs: 0x38 Size: 0x8 NameProperty Engine.RepRootMotionMontage.MovementBaseBoneName */
    bool bRelativePosition; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty Engine.RepRootMotionMontage.bRelativePosition */
    bool bRelativeRotation; /* Ofs: 0x41 Size: 0x1 BitMask: 01 BoolProperty Engine.RepRootMotionMontage.bRelativeRotation */
    uint8_t UnknownData42[0x6];
    FRootMotionSourceGroup AuthoritativeRootMotion; /* Ofs: 0x48 Size: 0x100 StructProperty Engine.RepRootMotionMontage.AuthoritativeRootMotion */
    FVector_NetQuantize10 Acceleration; /* Ofs: 0x148 Size: 0xC StructProperty Engine.RepRootMotionMontage.Acceleration */
    FVector_NetQuantize10 LinearVelocity; /* Ofs: 0x154 Size: 0xC StructProperty Engine.RepRootMotionMontage.LinearVelocity */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRepRootMotionMontage = sizeof(FRepRootMotionMontage); // 352
    static_assert(sizeof(FRepRootMotionMontage) == 0x160, "Size of FRepRootMotionMontage is not correct.");
	auto constexpr FRepRootMotionMontage_AnimMontage_Offset = offsetof(FRepRootMotionMontage, AnimMontage);
	static_assert(FRepRootMotionMontage_AnimMontage_Offset == 0x8, "FRepRootMotionMontage::AnimMontage offset is not 8");
	auto constexpr FRepRootMotionMontage_Position_Offset = offsetof(FRepRootMotionMontage, Position);
	static_assert(FRepRootMotionMontage_Position_Offset == 0x10, "FRepRootMotionMontage::Position offset is not 10");
	auto constexpr FRepRootMotionMontage_Location_Offset = offsetof(FRepRootMotionMontage, Location);
	static_assert(FRepRootMotionMontage_Location_Offset == 0x14, "FRepRootMotionMontage::Location offset is not 14");
	auto constexpr FRepRootMotionMontage_Rotation_Offset = offsetof(FRepRootMotionMontage, Rotation);
	static_assert(FRepRootMotionMontage_Rotation_Offset == 0x20, "FRepRootMotionMontage::Rotation offset is not 20");
	auto constexpr FRepRootMotionMontage_MovementBase_Offset = offsetof(FRepRootMotionMontage, MovementBase);
	static_assert(FRepRootMotionMontage_MovementBase_Offset == 0x30, "FRepRootMotionMontage::MovementBase offset is not 30");
	auto constexpr FRepRootMotionMontage_MovementBaseBoneName_Offset = offsetof(FRepRootMotionMontage, MovementBaseBoneName);
	static_assert(FRepRootMotionMontage_MovementBaseBoneName_Offset == 0x38, "FRepRootMotionMontage::MovementBaseBoneName offset is not 38");
	auto constexpr FRepRootMotionMontage_AuthoritativeRootMotion_Offset = offsetof(FRepRootMotionMontage, AuthoritativeRootMotion);
	static_assert(FRepRootMotionMontage_AuthoritativeRootMotion_Offset == 0x48, "FRepRootMotionMontage::AuthoritativeRootMotion offset is not 48");
	auto constexpr FRepRootMotionMontage_Acceleration_Offset = offsetof(FRepRootMotionMontage, Acceleration);
	static_assert(FRepRootMotionMontage_Acceleration_Offset == 0x148, "FRepRootMotionMontage::Acceleration offset is not 148");
	auto constexpr FRepRootMotionMontage_LinearVelocity_Offset = offsetof(FRepRootMotionMontage, LinearVelocity);
	static_assert(FRepRootMotionMontage_LinearVelocity_Offset == 0x154, "FRepRootMotionMontage::LinearVelocity offset is not 154");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
