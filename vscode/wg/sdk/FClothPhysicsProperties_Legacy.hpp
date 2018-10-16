#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothPhysicsProperties_Legacy // Size: 0x50
{
public:
    float VerticalResistance; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.VerticalResistance */
    float HorizontalResistance; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.HorizontalResistance */
    float BendResistance; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.BendResistance */
    float ShearResistance; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.ShearResistance */
    float Friction; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.Friction */
    float Damping; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.Damping */
    float TetherStiffness; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.TetherStiffness */
    float TetherLimit; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.TetherLimit */
    float Drag; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.Drag */
    float StiffnessFrequency; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.StiffnessFrequency */
    float GravityScale; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.GravityScale */
    float MassScale; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.MassScale */
    float InertiaBlend; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.InertiaBlend */
    float SelfCollisionThickness; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.SelfCollisionThickness */
    float SelfCollisionSquashScale; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.SelfCollisionSquashScale */
    float SelfCollisionStiffness; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.SelfCollisionStiffness */
    float SolverFrequency; /* Ofs: 0x40 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.SolverFrequency */
    float FiberCompression; /* Ofs: 0x44 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.FiberCompression */
    float FiberExpansion; /* Ofs: 0x48 Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.FiberExpansion */
    float FiberResistance; /* Ofs: 0x4C Size: 0x4 FloatProperty Engine.ClothPhysicsProperties_Legacy.FiberResistance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothPhysicsProperties_Legacy = sizeof(FClothPhysicsProperties_Legacy); // 80
    static_assert(sizeof(FClothPhysicsProperties_Legacy) == 0x50, "Size of FClothPhysicsProperties_Legacy is not correct.");
	auto constexpr FClothPhysicsProperties_Legacy_VerticalResistance_Offset = offsetof(FClothPhysicsProperties_Legacy, VerticalResistance);
	static_assert(FClothPhysicsProperties_Legacy_VerticalResistance_Offset == 0x0, "FClothPhysicsProperties_Legacy::VerticalResistance offset is not 0");
	auto constexpr FClothPhysicsProperties_Legacy_HorizontalResistance_Offset = offsetof(FClothPhysicsProperties_Legacy, HorizontalResistance);
	static_assert(FClothPhysicsProperties_Legacy_HorizontalResistance_Offset == 0x4, "FClothPhysicsProperties_Legacy::HorizontalResistance offset is not 4");
	auto constexpr FClothPhysicsProperties_Legacy_BendResistance_Offset = offsetof(FClothPhysicsProperties_Legacy, BendResistance);
	static_assert(FClothPhysicsProperties_Legacy_BendResistance_Offset == 0x8, "FClothPhysicsProperties_Legacy::BendResistance offset is not 8");
	auto constexpr FClothPhysicsProperties_Legacy_ShearResistance_Offset = offsetof(FClothPhysicsProperties_Legacy, ShearResistance);
	static_assert(FClothPhysicsProperties_Legacy_ShearResistance_Offset == 0xc, "FClothPhysicsProperties_Legacy::ShearResistance offset is not c");
	auto constexpr FClothPhysicsProperties_Legacy_Friction_Offset = offsetof(FClothPhysicsProperties_Legacy, Friction);
	static_assert(FClothPhysicsProperties_Legacy_Friction_Offset == 0x10, "FClothPhysicsProperties_Legacy::Friction offset is not 10");
	auto constexpr FClothPhysicsProperties_Legacy_Damping_Offset = offsetof(FClothPhysicsProperties_Legacy, Damping);
	static_assert(FClothPhysicsProperties_Legacy_Damping_Offset == 0x14, "FClothPhysicsProperties_Legacy::Damping offset is not 14");
	auto constexpr FClothPhysicsProperties_Legacy_TetherStiffness_Offset = offsetof(FClothPhysicsProperties_Legacy, TetherStiffness);
	static_assert(FClothPhysicsProperties_Legacy_TetherStiffness_Offset == 0x18, "FClothPhysicsProperties_Legacy::TetherStiffness offset is not 18");
	auto constexpr FClothPhysicsProperties_Legacy_TetherLimit_Offset = offsetof(FClothPhysicsProperties_Legacy, TetherLimit);
	static_assert(FClothPhysicsProperties_Legacy_TetherLimit_Offset == 0x1c, "FClothPhysicsProperties_Legacy::TetherLimit offset is not 1c");
	auto constexpr FClothPhysicsProperties_Legacy_Drag_Offset = offsetof(FClothPhysicsProperties_Legacy, Drag);
	static_assert(FClothPhysicsProperties_Legacy_Drag_Offset == 0x20, "FClothPhysicsProperties_Legacy::Drag offset is not 20");
	auto constexpr FClothPhysicsProperties_Legacy_StiffnessFrequency_Offset = offsetof(FClothPhysicsProperties_Legacy, StiffnessFrequency);
	static_assert(FClothPhysicsProperties_Legacy_StiffnessFrequency_Offset == 0x24, "FClothPhysicsProperties_Legacy::StiffnessFrequency offset is not 24");
	auto constexpr FClothPhysicsProperties_Legacy_GravityScale_Offset = offsetof(FClothPhysicsProperties_Legacy, GravityScale);
	static_assert(FClothPhysicsProperties_Legacy_GravityScale_Offset == 0x28, "FClothPhysicsProperties_Legacy::GravityScale offset is not 28");
	auto constexpr FClothPhysicsProperties_Legacy_MassScale_Offset = offsetof(FClothPhysicsProperties_Legacy, MassScale);
	static_assert(FClothPhysicsProperties_Legacy_MassScale_Offset == 0x2c, "FClothPhysicsProperties_Legacy::MassScale offset is not 2c");
	auto constexpr FClothPhysicsProperties_Legacy_InertiaBlend_Offset = offsetof(FClothPhysicsProperties_Legacy, InertiaBlend);
	static_assert(FClothPhysicsProperties_Legacy_InertiaBlend_Offset == 0x30, "FClothPhysicsProperties_Legacy::InertiaBlend offset is not 30");
	auto constexpr FClothPhysicsProperties_Legacy_SelfCollisionThickness_Offset = offsetof(FClothPhysicsProperties_Legacy, SelfCollisionThickness);
	static_assert(FClothPhysicsProperties_Legacy_SelfCollisionThickness_Offset == 0x34, "FClothPhysicsProperties_Legacy::SelfCollisionThickness offset is not 34");
	auto constexpr FClothPhysicsProperties_Legacy_SelfCollisionSquashScale_Offset = offsetof(FClothPhysicsProperties_Legacy, SelfCollisionSquashScale);
	static_assert(FClothPhysicsProperties_Legacy_SelfCollisionSquashScale_Offset == 0x38, "FClothPhysicsProperties_Legacy::SelfCollisionSquashScale offset is not 38");
	auto constexpr FClothPhysicsProperties_Legacy_SelfCollisionStiffness_Offset = offsetof(FClothPhysicsProperties_Legacy, SelfCollisionStiffness);
	static_assert(FClothPhysicsProperties_Legacy_SelfCollisionStiffness_Offset == 0x3c, "FClothPhysicsProperties_Legacy::SelfCollisionStiffness offset is not 3c");
	auto constexpr FClothPhysicsProperties_Legacy_SolverFrequency_Offset = offsetof(FClothPhysicsProperties_Legacy, SolverFrequency);
	static_assert(FClothPhysicsProperties_Legacy_SolverFrequency_Offset == 0x40, "FClothPhysicsProperties_Legacy::SolverFrequency offset is not 40");
	auto constexpr FClothPhysicsProperties_Legacy_FiberCompression_Offset = offsetof(FClothPhysicsProperties_Legacy, FiberCompression);
	static_assert(FClothPhysicsProperties_Legacy_FiberCompression_Offset == 0x44, "FClothPhysicsProperties_Legacy::FiberCompression offset is not 44");
	auto constexpr FClothPhysicsProperties_Legacy_FiberExpansion_Offset = offsetof(FClothPhysicsProperties_Legacy, FiberExpansion);
	static_assert(FClothPhysicsProperties_Legacy_FiberExpansion_Offset == 0x48, "FClothPhysicsProperties_Legacy::FiberExpansion offset is not 48");
	auto constexpr FClothPhysicsProperties_Legacy_FiberResistance_Offset = offsetof(FClothPhysicsProperties_Legacy, FiberResistance);
	static_assert(FClothPhysicsProperties_Legacy_FiberResistance_Offset == 0x4c, "FClothPhysicsProperties_Legacy::FiberResistance offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
