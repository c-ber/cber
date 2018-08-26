#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FConstraintDrive // Size: 0x10
{
public:
    float Stiffness; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ConstraintDrive.Stiffness */
    float Damping; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.ConstraintDrive.Damping */
    float MaxForce; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ConstraintDrive.MaxForce */
    bool bEnablePositionDrive : 1; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.ConstraintDrive.bEnablePositionDrive */
    bool bEnableVelocityDrive : 1; /* Ofs: 0xC Size: 0x1 BitMask: 02 BoolProperty Engine.ConstraintDrive.bEnableVelocityDrive */
    uint8_t UnknownDataD[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFConstraintDrive = sizeof(FConstraintDrive); // 16
    static_assert(sizeof(FConstraintDrive) == 0x10, "Size of FConstraintDrive is not correct.");
	auto constexpr FConstraintDrive_Stiffness_Offset = offsetof(FConstraintDrive, Stiffness);
	static_assert(FConstraintDrive_Stiffness_Offset == 0x0, "FConstraintDrive::Stiffness offset is not 0");
	auto constexpr FConstraintDrive_Damping_Offset = offsetof(FConstraintDrive, Damping);
	static_assert(FConstraintDrive_Damping_Offset == 0x4, "FConstraintDrive::Damping offset is not 4");
	auto constexpr FConstraintDrive_MaxForce_Offset = offsetof(FConstraintDrive, MaxForce);
	static_assert(FConstraintDrive_MaxForce_Offset == 0x8, "FConstraintDrive::MaxForce offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
