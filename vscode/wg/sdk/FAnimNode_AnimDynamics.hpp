#pragma once
#include "FAnimNode_SkeletalControlBase.hpp"
#include "AnimPhysSimSpaceType.hpp"
#include "FBoneReference.hpp"
#include "FVector.hpp"
#include "FAnimPhysConstraintSetup.hpp"
#include "AnimPhysCollisionType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimNode_AnimDynamics // Size: 0x280
 : public FAnimNode_SkeletalControlBase // Size: 0x70
{
public:
    TEnumAsByte<enum AnimPhysSimSpaceType> SimulationSpace; /* Ofs: 0x70 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_AnimDynamics.SimulationSpace */
    uint8_t UnknownData71[0x7];
    FBoneReference RelativeSpaceBone; /* Ofs: 0x78 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.RelativeSpaceBone */
    bool bChain; /* Ofs: 0x90 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bChain */
    uint8_t UnknownData91[0x7];
    FBoneReference BoundBone; /* Ofs: 0x98 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.BoundBone */
    FBoneReference ChainEnd; /* Ofs: 0xB0 Size: 0x18 StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.ChainEnd */
    FVector BoxExtents; /* Ofs: 0xC8 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.BoxExtents */
    FVector LocalJointOffset; /* Ofs: 0xD4 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.LocalJointOffset */
    float GravityScale; /* Ofs: 0xE0 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.GravityScale */
    bool bLinearSpring; /* Ofs: 0xE4 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bLinearSpring */
    bool bAngularSpring; /* Ofs: 0xE5 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bAngularSpring */
    uint8_t UnknownDataE6[0x2];
    float LinearSpringConstant; /* Ofs: 0xE8 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.LinearSpringConstant */
    float AngularSpringConstant; /* Ofs: 0xEC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.AngularSpringConstant */
    bool bEnableWind; /* Ofs: 0xF0 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bEnableWind */
    bool bWindWasEnabled; /* Ofs: 0xF1 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bWindWasEnabled */
    uint8_t UnknownDataF2[0x2];
    float WindScale; /* Ofs: 0xF4 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.WindScale */
    bool bOverrideLinearDamping; /* Ofs: 0xF8 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bOverrideLinearDamping */
    uint8_t UnknownDataF9[0x3];
    float LinearDampingOverride; /* Ofs: 0xFC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.LinearDampingOverride */
    bool bOverrideAngularDamping; /* Ofs: 0x100 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bOverrideAngularDamping */
    uint8_t UnknownData101[0x3];
    float AngularDampingOverride; /* Ofs: 0x104 Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.AngularDampingOverride */
    bool bOverrideAngularBias; /* Ofs: 0x108 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bOverrideAngularBias */
    uint8_t UnknownData109[0x3];
    float AngularBiasOverride; /* Ofs: 0x10C Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.AngularBiasOverride */
    bool bDoUpdate; /* Ofs: 0x110 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bDoUpdate */
    bool bDoEval; /* Ofs: 0x111 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bDoEval */
    uint8_t UnknownData112[0x2];
    int32_t NumSolverIterationsPreUpdate; /* Ofs: 0x114 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_AnimDynamics.NumSolverIterationsPreUpdate */
    int32_t NumSolverIterationsPostUpdate; /* Ofs: 0x118 Size: 0x4 IntProperty AnimGraphRuntime.AnimNode_AnimDynamics.NumSolverIterationsPostUpdate */
    FAnimPhysConstraintSetup ConstraintSetup; /* Ofs: 0x11C Size: 0x5C StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.ConstraintSetup */
    bool bUsePlanarLimit; /* Ofs: 0x178 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bUsePlanarLimit */
    uint8_t UnknownData179[0x7];
    TArray<struct FAnimPhysPlanarLimit> PlanarLimits; /* Ofs: 0x180 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_AnimDynamics.PlanarLimits */
    bool bUseSphericalLimits; /* Ofs: 0x190 Size: 0x1 BitMask: 01 BoolProperty AnimGraphRuntime.AnimNode_AnimDynamics.bUseSphericalLimits */
    uint8_t UnknownData191[0x7];
    TArray<struct FAnimPhysSphericalLimit> SphericalLimits; /* Ofs: 0x198 Size: 0x10 ArrayProperty AnimGraphRuntime.AnimNode_AnimDynamics.SphericalLimits */
    TEnumAsByte<enum AnimPhysCollisionType> CollisionType; /* Ofs: 0x1A8 Size: 0x1 EnumProperty AnimGraphRuntime.AnimNode_AnimDynamics.CollisionType */
    uint8_t UnknownData1A9[0x3];
    float SphereCollisionRadius; /* Ofs: 0x1AC Size: 0x4 FloatProperty AnimGraphRuntime.AnimNode_AnimDynamics.SphereCollisionRadius */
    FVector ExternalForce; /* Ofs: 0x1B0 Size: 0xC StructProperty AnimGraphRuntime.AnimNode_AnimDynamics.ExternalForce */
    uint8_t UnknownData1BC[0xC4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimNode_AnimDynamics = sizeof(FAnimNode_AnimDynamics); // 640
    static_assert(sizeof(FAnimNode_AnimDynamics) == 0x280, "Size of FAnimNode_AnimDynamics is not correct.");
	auto constexpr FAnimNode_AnimDynamics_SimulationSpace_Offset = offsetof(FAnimNode_AnimDynamics, SimulationSpace);
	static_assert(FAnimNode_AnimDynamics_SimulationSpace_Offset == 0x70, "FAnimNode_AnimDynamics::SimulationSpace offset is not 70");
	auto constexpr FAnimNode_AnimDynamics_RelativeSpaceBone_Offset = offsetof(FAnimNode_AnimDynamics, RelativeSpaceBone);
	static_assert(FAnimNode_AnimDynamics_RelativeSpaceBone_Offset == 0x78, "FAnimNode_AnimDynamics::RelativeSpaceBone offset is not 78");
	auto constexpr FAnimNode_AnimDynamics_BoundBone_Offset = offsetof(FAnimNode_AnimDynamics, BoundBone);
	static_assert(FAnimNode_AnimDynamics_BoundBone_Offset == 0x98, "FAnimNode_AnimDynamics::BoundBone offset is not 98");
	auto constexpr FAnimNode_AnimDynamics_ChainEnd_Offset = offsetof(FAnimNode_AnimDynamics, ChainEnd);
	static_assert(FAnimNode_AnimDynamics_ChainEnd_Offset == 0xb0, "FAnimNode_AnimDynamics::ChainEnd offset is not b0");
	auto constexpr FAnimNode_AnimDynamics_BoxExtents_Offset = offsetof(FAnimNode_AnimDynamics, BoxExtents);
	static_assert(FAnimNode_AnimDynamics_BoxExtents_Offset == 0xc8, "FAnimNode_AnimDynamics::BoxExtents offset is not c8");
	auto constexpr FAnimNode_AnimDynamics_LocalJointOffset_Offset = offsetof(FAnimNode_AnimDynamics, LocalJointOffset);
	static_assert(FAnimNode_AnimDynamics_LocalJointOffset_Offset == 0xd4, "FAnimNode_AnimDynamics::LocalJointOffset offset is not d4");
	auto constexpr FAnimNode_AnimDynamics_GravityScale_Offset = offsetof(FAnimNode_AnimDynamics, GravityScale);
	static_assert(FAnimNode_AnimDynamics_GravityScale_Offset == 0xe0, "FAnimNode_AnimDynamics::GravityScale offset is not e0");
	auto constexpr FAnimNode_AnimDynamics_LinearSpringConstant_Offset = offsetof(FAnimNode_AnimDynamics, LinearSpringConstant);
	static_assert(FAnimNode_AnimDynamics_LinearSpringConstant_Offset == 0xe8, "FAnimNode_AnimDynamics::LinearSpringConstant offset is not e8");
	auto constexpr FAnimNode_AnimDynamics_AngularSpringConstant_Offset = offsetof(FAnimNode_AnimDynamics, AngularSpringConstant);
	static_assert(FAnimNode_AnimDynamics_AngularSpringConstant_Offset == 0xec, "FAnimNode_AnimDynamics::AngularSpringConstant offset is not ec");
	auto constexpr FAnimNode_AnimDynamics_WindScale_Offset = offsetof(FAnimNode_AnimDynamics, WindScale);
	static_assert(FAnimNode_AnimDynamics_WindScale_Offset == 0xf4, "FAnimNode_AnimDynamics::WindScale offset is not f4");
	auto constexpr FAnimNode_AnimDynamics_LinearDampingOverride_Offset = offsetof(FAnimNode_AnimDynamics, LinearDampingOverride);
	static_assert(FAnimNode_AnimDynamics_LinearDampingOverride_Offset == 0xfc, "FAnimNode_AnimDynamics::LinearDampingOverride offset is not fc");
	auto constexpr FAnimNode_AnimDynamics_AngularDampingOverride_Offset = offsetof(FAnimNode_AnimDynamics, AngularDampingOverride);
	static_assert(FAnimNode_AnimDynamics_AngularDampingOverride_Offset == 0x104, "FAnimNode_AnimDynamics::AngularDampingOverride offset is not 104");
	auto constexpr FAnimNode_AnimDynamics_AngularBiasOverride_Offset = offsetof(FAnimNode_AnimDynamics, AngularBiasOverride);
	static_assert(FAnimNode_AnimDynamics_AngularBiasOverride_Offset == 0x10c, "FAnimNode_AnimDynamics::AngularBiasOverride offset is not 10c");
	auto constexpr FAnimNode_AnimDynamics_NumSolverIterationsPreUpdate_Offset = offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPreUpdate);
	static_assert(FAnimNode_AnimDynamics_NumSolverIterationsPreUpdate_Offset == 0x114, "FAnimNode_AnimDynamics::NumSolverIterationsPreUpdate offset is not 114");
	auto constexpr FAnimNode_AnimDynamics_NumSolverIterationsPostUpdate_Offset = offsetof(FAnimNode_AnimDynamics, NumSolverIterationsPostUpdate);
	static_assert(FAnimNode_AnimDynamics_NumSolverIterationsPostUpdate_Offset == 0x118, "FAnimNode_AnimDynamics::NumSolverIterationsPostUpdate offset is not 118");
	auto constexpr FAnimNode_AnimDynamics_ConstraintSetup_Offset = offsetof(FAnimNode_AnimDynamics, ConstraintSetup);
	static_assert(FAnimNode_AnimDynamics_ConstraintSetup_Offset == 0x11c, "FAnimNode_AnimDynamics::ConstraintSetup offset is not 11c");
	auto constexpr FAnimNode_AnimDynamics_PlanarLimits_Offset = offsetof(FAnimNode_AnimDynamics, PlanarLimits);
	static_assert(FAnimNode_AnimDynamics_PlanarLimits_Offset == 0x180, "FAnimNode_AnimDynamics::PlanarLimits offset is not 180");
	auto constexpr FAnimNode_AnimDynamics_SphericalLimits_Offset = offsetof(FAnimNode_AnimDynamics, SphericalLimits);
	static_assert(FAnimNode_AnimDynamics_SphericalLimits_Offset == 0x198, "FAnimNode_AnimDynamics::SphericalLimits offset is not 198");
	auto constexpr FAnimNode_AnimDynamics_CollisionType_Offset = offsetof(FAnimNode_AnimDynamics, CollisionType);
	static_assert(FAnimNode_AnimDynamics_CollisionType_Offset == 0x1a8, "FAnimNode_AnimDynamics::CollisionType offset is not 1a8");
	auto constexpr FAnimNode_AnimDynamics_SphereCollisionRadius_Offset = offsetof(FAnimNode_AnimDynamics, SphereCollisionRadius);
	static_assert(FAnimNode_AnimDynamics_SphereCollisionRadius_Offset == 0x1ac, "FAnimNode_AnimDynamics::SphereCollisionRadius offset is not 1ac");
	auto constexpr FAnimNode_AnimDynamics_ExternalForce_Offset = offsetof(FAnimNode_AnimDynamics, ExternalForce);
	static_assert(FAnimNode_AnimDynamics_ExternalForce_Offset == 0x1b0, "FAnimNode_AnimDynamics::ExternalForce offset is not 1b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
