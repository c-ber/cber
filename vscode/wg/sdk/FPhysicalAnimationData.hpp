#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPhysicalAnimationData // Size: 0x28
{
public:
    FName BodyName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.PhysicalAnimationData.BodyName */
    bool bIsLocalSimulation; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.PhysicalAnimationData.bIsLocalSimulation */
    uint8_t UnknownData9[0x3];
    float OrientationStrength; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.PhysicalAnimationData.OrientationStrength */
    float AngularVelocityStrength; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.PhysicalAnimationData.AngularVelocityStrength */
    float PositionStrength; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.PhysicalAnimationData.PositionStrength */
    float VelocityStrength; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.PhysicalAnimationData.VelocityStrength */
    float MaxLinearForce; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.PhysicalAnimationData.MaxLinearForce */
    float MaxAngularForce; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.PhysicalAnimationData.MaxAngularForce */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPhysicalAnimationData = sizeof(FPhysicalAnimationData); // 40
    static_assert(sizeof(FPhysicalAnimationData) == 0x28, "Size of FPhysicalAnimationData is not correct.");
	auto constexpr FPhysicalAnimationData_BodyName_Offset = offsetof(FPhysicalAnimationData, BodyName);
	static_assert(FPhysicalAnimationData_BodyName_Offset == 0x0, "FPhysicalAnimationData::BodyName offset is not 0");
	auto constexpr FPhysicalAnimationData_OrientationStrength_Offset = offsetof(FPhysicalAnimationData, OrientationStrength);
	static_assert(FPhysicalAnimationData_OrientationStrength_Offset == 0xc, "FPhysicalAnimationData::OrientationStrength offset is not c");
	auto constexpr FPhysicalAnimationData_AngularVelocityStrength_Offset = offsetof(FPhysicalAnimationData, AngularVelocityStrength);
	static_assert(FPhysicalAnimationData_AngularVelocityStrength_Offset == 0x10, "FPhysicalAnimationData::AngularVelocityStrength offset is not 10");
	auto constexpr FPhysicalAnimationData_PositionStrength_Offset = offsetof(FPhysicalAnimationData, PositionStrength);
	static_assert(FPhysicalAnimationData_PositionStrength_Offset == 0x14, "FPhysicalAnimationData::PositionStrength offset is not 14");
	auto constexpr FPhysicalAnimationData_VelocityStrength_Offset = offsetof(FPhysicalAnimationData, VelocityStrength);
	static_assert(FPhysicalAnimationData_VelocityStrength_Offset == 0x18, "FPhysicalAnimationData::VelocityStrength offset is not 18");
	auto constexpr FPhysicalAnimationData_MaxLinearForce_Offset = offsetof(FPhysicalAnimationData, MaxLinearForce);
	static_assert(FPhysicalAnimationData_MaxLinearForce_Offset == 0x1c, "FPhysicalAnimationData::MaxLinearForce offset is not 1c");
	auto constexpr FPhysicalAnimationData_MaxAngularForce_Offset = offsetof(FPhysicalAnimationData, MaxAngularForce);
	static_assert(FPhysicalAnimationData_MaxAngularForce_Offset == 0x20, "FPhysicalAnimationData::MaxAngularForce offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
