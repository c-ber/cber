#pragma once
#include "EClothingWindMethod.hpp"
#include "FClothConstraintSetup.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothConfig // Size: 0xBC
{
public:
    TEnumAsByte<enum EClothingWindMethod> WindMethod; /* Ofs: 0x0 Size: 0x1 EnumProperty ClothingSystemRuntime.ClothConfig.WindMethod */
    uint8_t UnknownData1[0x3];
    FClothConstraintSetup VerticalConstraintConfig; /* Ofs: 0x4 Size: 0x10 StructProperty ClothingSystemRuntime.ClothConfig.VerticalConstraintConfig */
    FClothConstraintSetup HorizontalConstraintConfig; /* Ofs: 0x14 Size: 0x10 StructProperty ClothingSystemRuntime.ClothConfig.HorizontalConstraintConfig */
    FClothConstraintSetup BendConstraintConfig; /* Ofs: 0x24 Size: 0x10 StructProperty ClothingSystemRuntime.ClothConfig.BendConstraintConfig */
    FClothConstraintSetup ShearConstraintConfig; /* Ofs: 0x34 Size: 0x10 StructProperty ClothingSystemRuntime.ClothConfig.ShearConstraintConfig */
    float SelfCollisionRadius; /* Ofs: 0x44 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.SelfCollisionRadius */
    float SelfCollisionStiffness; /* Ofs: 0x48 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.SelfCollisionStiffness */
    float SelfCollisionCullScale; /* Ofs: 0x4C Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.SelfCollisionCullScale */
    FVector Damping; /* Ofs: 0x50 Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.Damping */
    float Friction; /* Ofs: 0x5C Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.Friction */
    float WindDragCoefficient; /* Ofs: 0x60 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.WindDragCoefficient */
    float WindLiftCoefficient; /* Ofs: 0x64 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.WindLiftCoefficient */
    FVector LinearDrag; /* Ofs: 0x68 Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.LinearDrag */
    FVector AngularDrag; /* Ofs: 0x74 Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.AngularDrag */
    FVector LinearInertiaScale; /* Ofs: 0x80 Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.LinearInertiaScale */
    FVector AngularInertiaScale; /* Ofs: 0x8C Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.AngularInertiaScale */
    FVector CentrifugalInertiaScale; /* Ofs: 0x98 Size: 0xC StructProperty ClothingSystemRuntime.ClothConfig.CentrifugalInertiaScale */
    float SolverFrequency; /* Ofs: 0xA4 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.SolverFrequency */
    float StiffnessFrequency; /* Ofs: 0xA8 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.StiffnessFrequency */
    float GravityScale; /* Ofs: 0xAC Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.GravityScale */
    float TetherStiffness; /* Ofs: 0xB0 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.TetherStiffness */
    float TetherLimit; /* Ofs: 0xB4 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.TetherLimit */
    float CollisionThickness; /* Ofs: 0xB8 Size: 0x4 FloatProperty ClothingSystemRuntime.ClothConfig.CollisionThickness */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothConfig = sizeof(FClothConfig); // 188
    static_assert(sizeof(FClothConfig) == 0xBC, "Size of FClothConfig is not correct.");
	auto constexpr FClothConfig_WindMethod_Offset = offsetof(FClothConfig, WindMethod);
	static_assert(FClothConfig_WindMethod_Offset == 0x0, "FClothConfig::WindMethod offset is not 0");
	auto constexpr FClothConfig_VerticalConstraintConfig_Offset = offsetof(FClothConfig, VerticalConstraintConfig);
	static_assert(FClothConfig_VerticalConstraintConfig_Offset == 0x4, "FClothConfig::VerticalConstraintConfig offset is not 4");
	auto constexpr FClothConfig_HorizontalConstraintConfig_Offset = offsetof(FClothConfig, HorizontalConstraintConfig);
	static_assert(FClothConfig_HorizontalConstraintConfig_Offset == 0x14, "FClothConfig::HorizontalConstraintConfig offset is not 14");
	auto constexpr FClothConfig_BendConstraintConfig_Offset = offsetof(FClothConfig, BendConstraintConfig);
	static_assert(FClothConfig_BendConstraintConfig_Offset == 0x24, "FClothConfig::BendConstraintConfig offset is not 24");
	auto constexpr FClothConfig_ShearConstraintConfig_Offset = offsetof(FClothConfig, ShearConstraintConfig);
	static_assert(FClothConfig_ShearConstraintConfig_Offset == 0x34, "FClothConfig::ShearConstraintConfig offset is not 34");
	auto constexpr FClothConfig_SelfCollisionRadius_Offset = offsetof(FClothConfig, SelfCollisionRadius);
	static_assert(FClothConfig_SelfCollisionRadius_Offset == 0x44, "FClothConfig::SelfCollisionRadius offset is not 44");
	auto constexpr FClothConfig_SelfCollisionStiffness_Offset = offsetof(FClothConfig, SelfCollisionStiffness);
	static_assert(FClothConfig_SelfCollisionStiffness_Offset == 0x48, "FClothConfig::SelfCollisionStiffness offset is not 48");
	auto constexpr FClothConfig_SelfCollisionCullScale_Offset = offsetof(FClothConfig, SelfCollisionCullScale);
	static_assert(FClothConfig_SelfCollisionCullScale_Offset == 0x4c, "FClothConfig::SelfCollisionCullScale offset is not 4c");
	auto constexpr FClothConfig_Damping_Offset = offsetof(FClothConfig, Damping);
	static_assert(FClothConfig_Damping_Offset == 0x50, "FClothConfig::Damping offset is not 50");
	auto constexpr FClothConfig_Friction_Offset = offsetof(FClothConfig, Friction);
	static_assert(FClothConfig_Friction_Offset == 0x5c, "FClothConfig::Friction offset is not 5c");
	auto constexpr FClothConfig_WindDragCoefficient_Offset = offsetof(FClothConfig, WindDragCoefficient);
	static_assert(FClothConfig_WindDragCoefficient_Offset == 0x60, "FClothConfig::WindDragCoefficient offset is not 60");
	auto constexpr FClothConfig_WindLiftCoefficient_Offset = offsetof(FClothConfig, WindLiftCoefficient);
	static_assert(FClothConfig_WindLiftCoefficient_Offset == 0x64, "FClothConfig::WindLiftCoefficient offset is not 64");
	auto constexpr FClothConfig_LinearDrag_Offset = offsetof(FClothConfig, LinearDrag);
	static_assert(FClothConfig_LinearDrag_Offset == 0x68, "FClothConfig::LinearDrag offset is not 68");
	auto constexpr FClothConfig_AngularDrag_Offset = offsetof(FClothConfig, AngularDrag);
	static_assert(FClothConfig_AngularDrag_Offset == 0x74, "FClothConfig::AngularDrag offset is not 74");
	auto constexpr FClothConfig_LinearInertiaScale_Offset = offsetof(FClothConfig, LinearInertiaScale);
	static_assert(FClothConfig_LinearInertiaScale_Offset == 0x80, "FClothConfig::LinearInertiaScale offset is not 80");
	auto constexpr FClothConfig_AngularInertiaScale_Offset = offsetof(FClothConfig, AngularInertiaScale);
	static_assert(FClothConfig_AngularInertiaScale_Offset == 0x8c, "FClothConfig::AngularInertiaScale offset is not 8c");
	auto constexpr FClothConfig_CentrifugalInertiaScale_Offset = offsetof(FClothConfig, CentrifugalInertiaScale);
	static_assert(FClothConfig_CentrifugalInertiaScale_Offset == 0x98, "FClothConfig::CentrifugalInertiaScale offset is not 98");
	auto constexpr FClothConfig_SolverFrequency_Offset = offsetof(FClothConfig, SolverFrequency);
	static_assert(FClothConfig_SolverFrequency_Offset == 0xa4, "FClothConfig::SolverFrequency offset is not a4");
	auto constexpr FClothConfig_StiffnessFrequency_Offset = offsetof(FClothConfig, StiffnessFrequency);
	static_assert(FClothConfig_StiffnessFrequency_Offset == 0xa8, "FClothConfig::StiffnessFrequency offset is not a8");
	auto constexpr FClothConfig_GravityScale_Offset = offsetof(FClothConfig, GravityScale);
	static_assert(FClothConfig_GravityScale_Offset == 0xac, "FClothConfig::GravityScale offset is not ac");
	auto constexpr FClothConfig_TetherStiffness_Offset = offsetof(FClothConfig, TetherStiffness);
	static_assert(FClothConfig_TetherStiffness_Offset == 0xb0, "FClothConfig::TetherStiffness offset is not b0");
	auto constexpr FClothConfig_TetherLimit_Offset = offsetof(FClothConfig, TetherLimit);
	static_assert(FClothConfig_TetherLimit_Offset == 0xb4, "FClothConfig::TetherLimit offset is not b4");
	auto constexpr FClothConfig_CollisionThickness_Offset = offsetof(FClothConfig, CollisionThickness);
	static_assert(FClothConfig_CollisionThickness_Offset == 0xb8, "FClothConfig::CollisionThickness offset is not b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
