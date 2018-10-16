#pragma once
#include "FCollisionResponseContainer.hpp"
#include "FCollisionResponse.hpp"
#include "FVector.hpp"
#include "FWalkableSlopeOverride.hpp"
#include "ESleepFamily.hpp"
#include "EDOFMode.hpp"
#include "ECollisionEnabled.hpp"
#include "ECollisionChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBodyInstance // Size: 0x240
{
public:
    uint8_t UnknownData0[0x14];
    FCollisionResponseContainer ResponseToChannels; /* Ofs: 0x14 Size: 0x20 StructProperty Engine.BodyInstance.ResponseToChannels */
    uint8_t UnknownData34[0x4];
    FName CollisionProfileName; /* Ofs: 0x38 Size: 0x8 NameProperty Engine.BodyInstance.CollisionProfileName */
    FCollisionResponse CollisionResponses; /* Ofs: 0x40 Size: 0x30 StructProperty Engine.BodyInstance.CollisionResponses */
    uint8_t UnknownData70[0x4];
    bool bUseCCD : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 01 BoolProperty Engine.BodyInstance.bUseCCD */
    bool bNotifyRigidBodyCollision : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 02 BoolProperty Engine.BodyInstance.bNotifyRigidBodyCollision */
    bool bSimulatePhysics : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 04 BoolProperty Engine.BodyInstance.bSimulatePhysics */
    bool bOverrideMass : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 08 BoolProperty Engine.BodyInstance.bOverrideMass */
    bool bEnableGravity : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 10 BoolProperty Engine.BodyInstance.bEnableGravity */
    bool bAutoWeld : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 20 BoolProperty Engine.BodyInstance.bAutoWeld */
    bool bStartAwake : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 40 BoolProperty Engine.BodyInstance.bStartAwake */
    bool bGenerateWakeEvents : 1; /* Ofs: 0x74 Size: 0x1 BitMask: 80 BoolProperty Engine.BodyInstance.bGenerateWakeEvents */
    bool bUpdateMassWhenScaleChanges : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 01 BoolProperty Engine.BodyInstance.bUpdateMassWhenScaleChanges */
    bool bLockTranslation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 02 BoolProperty Engine.BodyInstance.bLockTranslation */
    bool bLockRotation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 04 BoolProperty Engine.BodyInstance.bLockRotation */
    bool bLockXTranslation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 08 BoolProperty Engine.BodyInstance.bLockXTranslation */
    bool bLockYTranslation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 10 BoolProperty Engine.BodyInstance.bLockYTranslation */
    bool bLockZTranslation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 20 BoolProperty Engine.BodyInstance.bLockZTranslation */
    bool bLockXRotation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 40 BoolProperty Engine.BodyInstance.bLockXRotation */
    bool bLockYRotation : 1; /* Ofs: 0x75 Size: 0x1 BitMask: 80 BoolProperty Engine.BodyInstance.bLockYRotation */
    bool bLockZRotation : 1; /* Ofs: 0x76 Size: 0x1 BitMask: 01 BoolProperty Engine.BodyInstance.bLockZRotation */
    bool bOverrideMaxAngularVelocity : 1; /* Ofs: 0x76 Size: 0x1 BitMask: 02 BoolProperty Engine.BodyInstance.bOverrideMaxAngularVelocity */
    uint8_t UnknownData77[0x5];
    bool bUseAsyncScene : 1; /* Ofs: 0x7C Size: 0x1 BitMask: 01 BoolProperty Engine.BodyInstance.bUseAsyncScene */
    bool bOverrideMaxDepenetrationVelocity : 1; /* Ofs: 0x7C Size: 0x1 BitMask: 02 BoolProperty Engine.BodyInstance.bOverrideMaxDepenetrationVelocity */
    bool bOverrideWalkableSlopeOnInstance : 1; /* Ofs: 0x7C Size: 0x1 BitMask: 04 BoolProperty Engine.BodyInstance.bOverrideWalkableSlopeOnInstance */
    uint8_t UnknownData7D[0x3];
    float MaxDepenetrationVelocity; /* Ofs: 0x80 Size: 0x4 FloatProperty Engine.BodyInstance.MaxDepenetrationVelocity */
    uint8_t UnknownData84[0x8];
    float MassInKgOverride; /* Ofs: 0x8C Size: 0x4 FloatProperty Engine.BodyInstance.MassInKgOverride */
    float LinearDamping; /* Ofs: 0x90 Size: 0x4 FloatProperty Engine.BodyInstance.LinearDamping */
    float AngularDamping; /* Ofs: 0x94 Size: 0x4 FloatProperty Engine.BodyInstance.AngularDamping */
    FVector CustomDOFPlaneNormal; /* Ofs: 0x98 Size: 0xC StructProperty Engine.BodyInstance.CustomDOFPlaneNormal */
    FVector COMNudge; /* Ofs: 0xA4 Size: 0xC StructProperty Engine.BodyInstance.COMNudge */
    uint8_t UnknownDataB0[0x10];
    float MassScale; /* Ofs: 0xC0 Size: 0x4 FloatProperty Engine.BodyInstance.MassScale */
    uint8_t UnknownDataC4[0x14];
    FWalkableSlopeOverride WalkableSlopeOverride; /* Ofs: 0xD8 Size: 0x10 StructProperty Engine.BodyInstance.WalkableSlopeOverride */
    ExternalPtr<struct UPhysicalMaterial> PhysMaterialOverride; /* Ofs: 0xE8 Size: 0x8 ObjectProperty Engine.BodyInstance.PhysMaterialOverride */
    float MaxAngularVelocity; /* Ofs: 0xF0 Size: 0x4 FloatProperty Engine.BodyInstance.MaxAngularVelocity */
    float CustomSleepThresholdMultiplier; /* Ofs: 0xF4 Size: 0x4 FloatProperty Engine.BodyInstance.CustomSleepThresholdMultiplier */
    float StabilizationThresholdMultiplier; /* Ofs: 0xF8 Size: 0x4 FloatProperty Engine.BodyInstance.StabilizationThresholdMultiplier */
    float PhysicsBlendWeight; /* Ofs: 0xFC Size: 0x4 FloatProperty Engine.BodyInstance.PhysicsBlendWeight */
    int32_t PositionSolverIterationCount; /* Ofs: 0x100 Size: 0x4 IntProperty Engine.BodyInstance.PositionSolverIterationCount */
    uint8_t UnknownData104[0x2C];
    uint64_t RigidActorSyncId; /* Ofs: 0x130 Size: 0x8 UInt64Property Engine.BodyInstance.RigidActorSyncId */
    uint64_t RigidActorAsyncId; /* Ofs: 0x138 Size: 0x8 UInt64Property Engine.BodyInstance.RigidActorAsyncId */
    int32_t VelocitySolverIterationCount; /* Ofs: 0x140 Size: 0x4 IntProperty Engine.BodyInstance.VelocitySolverIterationCount */
    uint8_t UnknownData144[0xF8];
    TEnumAsByte<enum ESleepFamily> SleepFamily; /* Ofs: 0x23C Size: 0x1 EnumProperty Engine.BodyInstance.SleepFamily */
    TEnumAsByte<enum EDOFMode> DOFMode; /* Ofs: 0x23D Size: 0x1 ByteProperty Engine.BodyInstance.DOFMode */
    TEnumAsByte<enum ECollisionEnabled> CollisionEnabled; /* Ofs: 0x23E Size: 0x1 ByteProperty Engine.BodyInstance.CollisionEnabled */
    TEnumAsByte<enum ECollisionChannel> ObjectType; /* Ofs: 0x23F Size: 0x1 ByteProperty Engine.BodyInstance.ObjectType */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBodyInstance = sizeof(FBodyInstance); // 576
    static_assert(sizeof(FBodyInstance) == 0x240, "Size of FBodyInstance is not correct.");
	auto constexpr FBodyInstance_ResponseToChannels_Offset = offsetof(FBodyInstance, ResponseToChannels);
	static_assert(FBodyInstance_ResponseToChannels_Offset == 0x14, "FBodyInstance::ResponseToChannels offset is not 14");
	auto constexpr FBodyInstance_CollisionProfileName_Offset = offsetof(FBodyInstance, CollisionProfileName);
	static_assert(FBodyInstance_CollisionProfileName_Offset == 0x38, "FBodyInstance::CollisionProfileName offset is not 38");
	auto constexpr FBodyInstance_CollisionResponses_Offset = offsetof(FBodyInstance, CollisionResponses);
	static_assert(FBodyInstance_CollisionResponses_Offset == 0x40, "FBodyInstance::CollisionResponses offset is not 40");
	auto constexpr FBodyInstance_MaxDepenetrationVelocity_Offset = offsetof(FBodyInstance, MaxDepenetrationVelocity);
	static_assert(FBodyInstance_MaxDepenetrationVelocity_Offset == 0x80, "FBodyInstance::MaxDepenetrationVelocity offset is not 80");
	auto constexpr FBodyInstance_MassInKgOverride_Offset = offsetof(FBodyInstance, MassInKgOverride);
	static_assert(FBodyInstance_MassInKgOverride_Offset == 0x8c, "FBodyInstance::MassInKgOverride offset is not 8c");
	auto constexpr FBodyInstance_LinearDamping_Offset = offsetof(FBodyInstance, LinearDamping);
	static_assert(FBodyInstance_LinearDamping_Offset == 0x90, "FBodyInstance::LinearDamping offset is not 90");
	auto constexpr FBodyInstance_AngularDamping_Offset = offsetof(FBodyInstance, AngularDamping);
	static_assert(FBodyInstance_AngularDamping_Offset == 0x94, "FBodyInstance::AngularDamping offset is not 94");
	auto constexpr FBodyInstance_CustomDOFPlaneNormal_Offset = offsetof(FBodyInstance, CustomDOFPlaneNormal);
	static_assert(FBodyInstance_CustomDOFPlaneNormal_Offset == 0x98, "FBodyInstance::CustomDOFPlaneNormal offset is not 98");
	auto constexpr FBodyInstance_COMNudge_Offset = offsetof(FBodyInstance, COMNudge);
	static_assert(FBodyInstance_COMNudge_Offset == 0xa4, "FBodyInstance::COMNudge offset is not a4");
	auto constexpr FBodyInstance_MassScale_Offset = offsetof(FBodyInstance, MassScale);
	static_assert(FBodyInstance_MassScale_Offset == 0xc0, "FBodyInstance::MassScale offset is not c0");
	auto constexpr FBodyInstance_WalkableSlopeOverride_Offset = offsetof(FBodyInstance, WalkableSlopeOverride);
	static_assert(FBodyInstance_WalkableSlopeOverride_Offset == 0xd8, "FBodyInstance::WalkableSlopeOverride offset is not d8");
	auto constexpr FBodyInstance_PhysMaterialOverride_Offset = offsetof(FBodyInstance, PhysMaterialOverride);
	static_assert(FBodyInstance_PhysMaterialOverride_Offset == 0xe8, "FBodyInstance::PhysMaterialOverride offset is not e8");
	auto constexpr FBodyInstance_MaxAngularVelocity_Offset = offsetof(FBodyInstance, MaxAngularVelocity);
	static_assert(FBodyInstance_MaxAngularVelocity_Offset == 0xf0, "FBodyInstance::MaxAngularVelocity offset is not f0");
	auto constexpr FBodyInstance_CustomSleepThresholdMultiplier_Offset = offsetof(FBodyInstance, CustomSleepThresholdMultiplier);
	static_assert(FBodyInstance_CustomSleepThresholdMultiplier_Offset == 0xf4, "FBodyInstance::CustomSleepThresholdMultiplier offset is not f4");
	auto constexpr FBodyInstance_StabilizationThresholdMultiplier_Offset = offsetof(FBodyInstance, StabilizationThresholdMultiplier);
	static_assert(FBodyInstance_StabilizationThresholdMultiplier_Offset == 0xf8, "FBodyInstance::StabilizationThresholdMultiplier offset is not f8");
	auto constexpr FBodyInstance_PhysicsBlendWeight_Offset = offsetof(FBodyInstance, PhysicsBlendWeight);
	static_assert(FBodyInstance_PhysicsBlendWeight_Offset == 0xfc, "FBodyInstance::PhysicsBlendWeight offset is not fc");
	auto constexpr FBodyInstance_PositionSolverIterationCount_Offset = offsetof(FBodyInstance, PositionSolverIterationCount);
	static_assert(FBodyInstance_PositionSolverIterationCount_Offset == 0x100, "FBodyInstance::PositionSolverIterationCount offset is not 100");
	auto constexpr FBodyInstance_RigidActorSyncId_Offset = offsetof(FBodyInstance, RigidActorSyncId);
	static_assert(FBodyInstance_RigidActorSyncId_Offset == 0x130, "FBodyInstance::RigidActorSyncId offset is not 130");
	auto constexpr FBodyInstance_RigidActorAsyncId_Offset = offsetof(FBodyInstance, RigidActorAsyncId);
	static_assert(FBodyInstance_RigidActorAsyncId_Offset == 0x138, "FBodyInstance::RigidActorAsyncId offset is not 138");
	auto constexpr FBodyInstance_VelocitySolverIterationCount_Offset = offsetof(FBodyInstance, VelocitySolverIterationCount);
	static_assert(FBodyInstance_VelocitySolverIterationCount_Offset == 0x140, "FBodyInstance::VelocitySolverIterationCount offset is not 140");
	auto constexpr FBodyInstance_SleepFamily_Offset = offsetof(FBodyInstance, SleepFamily);
	static_assert(FBodyInstance_SleepFamily_Offset == 0x23c, "FBodyInstance::SleepFamily offset is not 23c");
	auto constexpr FBodyInstance_DOFMode_Offset = offsetof(FBodyInstance, DOFMode);
	static_assert(FBodyInstance_DOFMode_Offset == 0x23d, "FBodyInstance::DOFMode offset is not 23d");
	auto constexpr FBodyInstance_CollisionEnabled_Offset = offsetof(FBodyInstance, CollisionEnabled);
	static_assert(FBodyInstance_CollisionEnabled_Offset == 0x23e, "FBodyInstance::CollisionEnabled offset is not 23e");
	auto constexpr FBodyInstance_ObjectType_Offset = offsetof(FBodyInstance, ObjectType);
	static_assert(FBodyInstance_ObjectType_Offset == 0x23f, "FBodyInstance::ObjectType offset is not 23f");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
