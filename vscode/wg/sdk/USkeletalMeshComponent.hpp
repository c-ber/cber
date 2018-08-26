#pragma once
#include "USkinnedMeshComponent.hpp"
#include "EAnimationMode.hpp"
#include "FSingleAnimationPlayData.hpp"
#include "EDynamicActorScene.hpp"
#include "EKinematicBonesUpdateToPhysics.hpp"
#include "EPhysicsTransformUpdateMode.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalMeshComponent // Size: 0x10C0
	: public USkinnedMeshComponent // Size: 0xB80
{
private:
	typedef USkeletalMeshComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(209); // id32("Class Engine.SkeletalMeshComponent")
		return ptr;
	}
	TEnumAsByte<enum EAnimationMode> AnimationMode; /* Ofs: 0xB80 Size: 0x1 - ByteProperty Engine.SkeletalMeshComponent.AnimationMode */
	uint8_t UnknownDataB81[0x7];
	ExternalPtr<struct UAnimBlueprintGeneratedClass> AnimBlueprintGeneratedClass; /* Ofs: 0xB88 Size: 0x8 - ClassProperty Engine.SkeletalMeshComponent.AnimBlueprintGeneratedClass */
	ExternalPtr<struct UClass> AnimClass; /* Ofs: 0xB90 Size: 0x8 - ClassProperty Engine.SkeletalMeshComponent.AnimClass */
	ExternalPtr<struct UAnimInstance> AnimScriptInstance; /* Ofs: 0xB98 Size: 0x8 - ObjectProperty Engine.SkeletalMeshComponent.AnimScriptInstance */
	TArray<ExternalPtr<struct UAnimInstance>> SubInstances; /* Ofs: 0xBA0 Size: 0x10 - ArrayProperty Engine.SkeletalMeshComponent.SubInstances */
	ExternalPtr<struct UAnimInstance> PostProcessAnimInstance; /* Ofs: 0xBB0 Size: 0x8 - ObjectProperty Engine.SkeletalMeshComponent.PostProcessAnimInstance */
	FSingleAnimationPlayData AnimationData; /* Ofs: 0xBB8 Size: 0x18 - StructProperty Engine.SkeletalMeshComponent.AnimationData */
	uint8_t UnknownDataBD0[0x38];
	TArray<struct FTransform> CachedBoneSpaceTransforms; /* Ofs: 0xC08 Size: 0x10 - ArrayProperty Engine.SkeletalMeshComponent.CachedBoneSpaceTransforms */
	TArray<struct FTransform> CachedComponentSpaceTransforms; /* Ofs: 0xC18 Size: 0x10 - ArrayProperty Engine.SkeletalMeshComponent.CachedComponentSpaceTransforms */
	uint8_t UnknownDataC28[0x20];
	float GlobalAnimRateScale; /* Ofs: 0xC48 Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.GlobalAnimRateScale */
	TEnumAsByte<enum EDynamicActorScene> UseAsyncScene; /* Ofs: 0xC4C Size: 0x1 - EnumProperty Engine.SkeletalMeshComponent.UseAsyncScene */
	uint8_t UnknownDataC4D[0x3];
	uint8_t boolFieldC50;
	uint8_t UnknownDataC51[0x3];
	TEnumAsByte<enum EKinematicBonesUpdateToPhysics> KinematicBonesUpdateType; /* Ofs: 0xC54 Size: 0x1 - ByteProperty Engine.SkeletalMeshComponent.KinematicBonesUpdateType */
	TEnumAsByte<enum EPhysicsTransformUpdateMode> PhysicsTransformUpdateMode; /* Ofs: 0xC55 Size: 0x1 - ByteProperty Engine.SkeletalMeshComponent.PhysicsTransformUpdateMode */
	uint8_t UnknownDataC56[0x2];
	uint8_t boolFieldC58;
	uint8_t boolFieldC59;
	uint8_t UnknownDataC5A[0x2];
	float TeleportDistanceThreshold; /* Ofs: 0xC5C Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.TeleportDistanceThreshold */
	float TeleportRotationThreshold; /* Ofs: 0xC60 Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.TeleportRotationThreshold */
	float ClothBlendWeight; /* Ofs: 0xC64 Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.ClothBlendWeight */
	uint8_t UnknownDataC68[0x4];
	FVector RootBoneTranslation; /* Ofs: 0xC6C Size: 0xC - StructProperty Engine.SkeletalMeshComponent.RootBoneTranslation */
	uint8_t boolFieldC78;
	uint8_t UnknownDataC79[0x3];
	uint8_t boolFieldC7C;
	uint8_t UnknownDataC7D[0x3];
	uint8_t boolFieldC80;
	uint8_t UnknownDataC81[0x7];
	ExternalPtr<struct UBodySetup> BodySetup; /* Ofs: 0xC88 Size: 0x8 - ObjectProperty Engine.SkeletalMeshComponent.BodySetup */
	uint8_t boolFieldC90;
	uint8_t boolFieldC91;
	uint8_t UnknownDataC92[0x2];
	uint16_t CachedAnimCurveUidVersion; /* Ofs: 0xC94 Size: 0x2 - UInt16Property Engine.SkeletalMeshComponent.CachedAnimCurveUidVersion */
	uint8_t UnknownDataC96[0x2];
	FVector LineCheckBoundsScale; /* Ofs: 0xC98 Size: 0xC - StructProperty Engine.SkeletalMeshComponent.LineCheckBoundsScale */
	uint8_t UnknownDataCA4[0x4];
	FScriptMulticastDelegate OnConstraintBroken; /* Ofs: 0xCA8 Size: 0x10 - MulticastDelegateProperty Engine.SkeletalMeshComponent.OnConstraintBroken */
	uint8_t UnknownDataCB8[0xE8];
	ExternalPtr<struct UClass> ClothingSimulationFactory; /* Ofs: 0xDA0 Size: 0x8 - ClassProperty Engine.SkeletalMeshComponent.ClothingSimulationFactory */
	uint8_t UnknownDataDA8[0x200];
	ExternalPtr<struct UAnimSequence> SequenceToPlay; /* Ofs: 0xFA8 Size: 0x8 - ObjectProperty Engine.SkeletalMeshComponent.SequenceToPlay */
	ExternalPtr<struct UAnimationAsset> AnimToPlay; /* Ofs: 0xFB0 Size: 0x8 - ObjectProperty Engine.SkeletalMeshComponent.AnimToPlay */
	uint8_t boolFieldFB8;
	uint8_t UnknownDataFB9[0x3];
	float DefaultPosition; /* Ofs: 0xFBC Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.DefaultPosition */
	float DefaultPlayRate; /* Ofs: 0xFC0 Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.DefaultPlayRate */
	uint32_t LastPoseTickFrame; /* Ofs: 0xFC4 Size: 0x4 - UInt32Property Engine.SkeletalMeshComponent.LastPoseTickFrame */
	float LastPoseTickTime; /* Ofs: 0xFC8 Size: 0x4 - FloatProperty Engine.SkeletalMeshComponent.LastPoseTickTime */
	uint8_t UnknownDataFCC[0xF4];


	inline bool SetAnimationMode(t_structHelper inst, TEnumAsByte<enum EAnimationMode> value) { inst.WriteOffset(0xB80, value); }
	inline bool SetAnimBlueprintGeneratedClass(t_structHelper inst, ExternalPtr<struct UAnimBlueprintGeneratedClass> value) { inst.WriteOffset(0xB88, value); }
	inline bool SetAnimClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xB90, value); }
	inline bool SetAnimScriptInstance(t_structHelper inst, ExternalPtr<struct UAnimInstance> value) { inst.WriteOffset(0xB98, value); }
	inline bool SetSubInstances(t_structHelper inst, TArray<ExternalPtr<struct UAnimInstance>> value) { inst.WriteOffset(0xBA0, value); }
	inline bool SetPostProcessAnimInstance(t_structHelper inst, ExternalPtr<struct UAnimInstance> value) { inst.WriteOffset(0xBB0, value); }
	inline bool SetAnimationData(t_structHelper inst, FSingleAnimationPlayData value) { inst.WriteOffset(0xBB8, value); }
	inline bool SetCachedBoneSpaceTransforms(t_structHelper inst, TArray<struct FTransform> value) { inst.WriteOffset(0xC08, value); }
	inline bool SetCachedComponentSpaceTransforms(t_structHelper inst, TArray<struct FTransform> value) { inst.WriteOffset(0xC18, value); }
	inline bool SetGlobalAnimRateScale(t_structHelper inst, float value) { inst.WriteOffset(0xC48, value); }
	inline bool SetUseAsyncScene(t_structHelper inst, TEnumAsByte<enum EDynamicActorScene> value) { inst.WriteOffset(0xC4C, value); }
	inline bool bHasValidBodies()
	{
		return boolFieldC50& 0x1;
	}
	inline bool SetbHasValidBodies(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetKinematicBonesUpdateType(t_structHelper inst, TEnumAsByte<enum EKinematicBonesUpdateToPhysics> value) { inst.WriteOffset(0xC54, value); }
	inline bool SetPhysicsTransformUpdateMode(t_structHelper inst, TEnumAsByte<enum EPhysicsTransformUpdateMode> value) { inst.WriteOffset(0xC55, value); }
	inline bool bBlendPhysics()
	{
		return boolFieldC58& 0x1;
	}
	inline bool SetbBlendPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePhysicsOnDedicatedServer()
	{
		return boolFieldC58& 0x2;
	}
	inline bool SetbEnablePhysicsOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUpdateJointsFromAnimation()
	{
		return boolFieldC58& 0x4;
	}
	inline bool SetbUpdateJointsFromAnimation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDisableClothSimulation()
	{
		return boolFieldC58& 0x8;
	}
	inline bool SetbDisableClothSimulation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCollideWithEnvironment()
	{
		return boolFieldC58& 0x10;
	}
	inline bool SetbCollideWithEnvironment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bCollideWithAttachedChildren()
	{
		return boolFieldC58& 0x20;
	}
	inline bool SetbCollideWithAttachedChildren(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bLocalSpaceSimulation()
	{
		return boolFieldC58& 0x40;
	}
	inline bool SetbLocalSpaceSimulation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bClothMorphTarget()
	{
		return boolFieldC58& 0x80;
	}
	inline bool SetbClothMorphTarget(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC58, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bResetAfterTeleport()
	{
		return boolFieldC59& 0x1;
	}
	inline bool SetbResetAfterTeleport(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC59, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTeleportDistanceThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xC5C, value); }
	inline bool SetTeleportRotationThreshold(t_structHelper inst, float value) { inst.WriteOffset(0xC60, value); }
	inline bool SetClothBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0xC64, value); }
	inline bool SetRootBoneTranslation(t_structHelper inst, FVector value) { inst.WriteOffset(0xC6C, value); }
	inline bool bNoSkeletonUpdate()
	{
		return boolFieldC78& 0x1;
	}
	inline bool SetbNoSkeletonUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bPauseAnims()
	{
		return boolFieldC78& 0x2;
	}
	inline bool SetbPauseAnims(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC78, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseRefPoseOnInitAnim()
	{
		return boolFieldC7C& 0x1;
	}
	inline bool SetbUseRefPoseOnInitAnim(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC7C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePerPolyCollision()
	{
		return boolFieldC80& 0x1;
	}
	inline bool SetbEnablePerPolyCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBodySetup(t_structHelper inst, ExternalPtr<struct UBodySetup> value) { inst.WriteOffset(0xC88, value); }
	inline bool bOnlyAllowAutonomousTickPose()
	{
		return boolFieldC90& 0x1;
	}
	inline bool SetbOnlyAllowAutonomousTickPose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsAutonomousTickPose()
	{
		return boolFieldC90& 0x2;
	}
	inline bool SetbIsAutonomousTickPose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bForceRefpose()
	{
		return boolFieldC90& 0x4;
	}
	inline bool SetbForceRefpose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOldForceRefPose()
	{
		return boolFieldC90& 0x8;
	}
	inline bool SetbOldForceRefPose(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bShowPrePhysBones()
	{
		return boolFieldC90& 0x10;
	}
	inline bool SetbShowPrePhysBones(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bRequiredBonesUpToDate()
	{
		return boolFieldC90& 0x20;
	}
	inline bool SetbRequiredBonesUpToDate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bAnimTreeInitialised()
	{
		return boolFieldC90& 0x40;
	}
	inline bool SetbAnimTreeInitialised(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIncludeComponentLocationIntoBounds()
	{
		return boolFieldC90& 0x80;
	}
	inline bool SetbIncludeComponentLocationIntoBounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC90, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bEnableLineCheckWithBounds()
	{
		return boolFieldC91& 0x1;
	}
	inline bool SetbEnableLineCheckWithBounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC91, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCachedAnimCurveUidVersion(t_structHelper inst, uint16_t value) { inst.WriteOffset(0xC94, value); }
	inline bool SetLineCheckBoundsScale(t_structHelper inst, FVector value) { inst.WriteOffset(0xC98, value); }
	inline bool SetOnConstraintBroken(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0xCA8, value); }
	inline bool SetClothingSimulationFactory(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xDA0, value); }
	inline bool SetSequenceToPlay(t_structHelper inst, ExternalPtr<struct UAnimSequence> value) { inst.WriteOffset(0xFA8, value); }
	inline bool SetAnimToPlay(t_structHelper inst, ExternalPtr<struct UAnimationAsset> value) { inst.WriteOffset(0xFB0, value); }
	inline bool bDefaultLooping()
	{
		return boolFieldFB8& 0x1;
	}
	inline bool SetbDefaultLooping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFB8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDefaultPlaying()
	{
		return boolFieldFB8& 0x2;
	}
	inline bool SetbDefaultPlaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFB8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetDefaultPosition(t_structHelper inst, float value) { inst.WriteOffset(0xFBC, value); }
	inline bool SetDefaultPlayRate(t_structHelper inst, float value) { inst.WriteOffset(0xFC0, value); }
	inline bool SetLastPoseTickFrame(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xFC4, value); }
	inline bool SetLastPoseTickTime(t_structHelper inst, float value) { inst.WriteOffset(0xFC8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalMeshComponent = sizeof(USkeletalMeshComponent); // 4288
    static_assert(sizeof(USkeletalMeshComponent) == 0x10C0, "Size of USkeletalMeshComponent is not correct.");
	auto constexpr USkeletalMeshComponent_AnimationMode_Offset = offsetof(USkeletalMeshComponent, AnimationMode);
	static_assert(USkeletalMeshComponent_AnimationMode_Offset == 0xb80, "USkeletalMeshComponent::AnimationMode offset is not b80");
	auto constexpr USkeletalMeshComponent_AnimBlueprintGeneratedClass_Offset = offsetof(USkeletalMeshComponent, AnimBlueprintGeneratedClass);
	static_assert(USkeletalMeshComponent_AnimBlueprintGeneratedClass_Offset == 0xb88, "USkeletalMeshComponent::AnimBlueprintGeneratedClass offset is not b88");
	auto constexpr USkeletalMeshComponent_AnimClass_Offset = offsetof(USkeletalMeshComponent, AnimClass);
	static_assert(USkeletalMeshComponent_AnimClass_Offset == 0xb90, "USkeletalMeshComponent::AnimClass offset is not b90");
	auto constexpr USkeletalMeshComponent_AnimScriptInstance_Offset = offsetof(USkeletalMeshComponent, AnimScriptInstance);
	static_assert(USkeletalMeshComponent_AnimScriptInstance_Offset == 0xb98, "USkeletalMeshComponent::AnimScriptInstance offset is not b98");
	auto constexpr USkeletalMeshComponent_SubInstances_Offset = offsetof(USkeletalMeshComponent, SubInstances);
	static_assert(USkeletalMeshComponent_SubInstances_Offset == 0xba0, "USkeletalMeshComponent::SubInstances offset is not ba0");
	auto constexpr USkeletalMeshComponent_PostProcessAnimInstance_Offset = offsetof(USkeletalMeshComponent, PostProcessAnimInstance);
	static_assert(USkeletalMeshComponent_PostProcessAnimInstance_Offset == 0xbb0, "USkeletalMeshComponent::PostProcessAnimInstance offset is not bb0");
	auto constexpr USkeletalMeshComponent_AnimationData_Offset = offsetof(USkeletalMeshComponent, AnimationData);
	static_assert(USkeletalMeshComponent_AnimationData_Offset == 0xbb8, "USkeletalMeshComponent::AnimationData offset is not bb8");
	auto constexpr USkeletalMeshComponent_CachedBoneSpaceTransforms_Offset = offsetof(USkeletalMeshComponent, CachedBoneSpaceTransforms);
	static_assert(USkeletalMeshComponent_CachedBoneSpaceTransforms_Offset == 0xc08, "USkeletalMeshComponent::CachedBoneSpaceTransforms offset is not c08");
	auto constexpr USkeletalMeshComponent_CachedComponentSpaceTransforms_Offset = offsetof(USkeletalMeshComponent, CachedComponentSpaceTransforms);
	static_assert(USkeletalMeshComponent_CachedComponentSpaceTransforms_Offset == 0xc18, "USkeletalMeshComponent::CachedComponentSpaceTransforms offset is not c18");
	auto constexpr USkeletalMeshComponent_GlobalAnimRateScale_Offset = offsetof(USkeletalMeshComponent, GlobalAnimRateScale);
	static_assert(USkeletalMeshComponent_GlobalAnimRateScale_Offset == 0xc48, "USkeletalMeshComponent::GlobalAnimRateScale offset is not c48");
	auto constexpr USkeletalMeshComponent_UseAsyncScene_Offset = offsetof(USkeletalMeshComponent, UseAsyncScene);
	static_assert(USkeletalMeshComponent_UseAsyncScene_Offset == 0xc4c, "USkeletalMeshComponent::UseAsyncScene offset is not c4c");
	auto constexpr USkeletalMeshComponent_boolFieldC50_Offset = offsetof(USkeletalMeshComponent, boolFieldC50);
	static_assert(USkeletalMeshComponent_boolFieldC50_Offset == 0xc50, "USkeletalMeshComponent::boolFieldC50 offset is not c50");
	auto constexpr USkeletalMeshComponent_KinematicBonesUpdateType_Offset = offsetof(USkeletalMeshComponent, KinematicBonesUpdateType);
	static_assert(USkeletalMeshComponent_KinematicBonesUpdateType_Offset == 0xc54, "USkeletalMeshComponent::KinematicBonesUpdateType offset is not c54");
	auto constexpr USkeletalMeshComponent_PhysicsTransformUpdateMode_Offset = offsetof(USkeletalMeshComponent, PhysicsTransformUpdateMode);
	static_assert(USkeletalMeshComponent_PhysicsTransformUpdateMode_Offset == 0xc55, "USkeletalMeshComponent::PhysicsTransformUpdateMode offset is not c55");
	auto constexpr USkeletalMeshComponent_boolFieldC58_Offset = offsetof(USkeletalMeshComponent, boolFieldC58);
	static_assert(USkeletalMeshComponent_boolFieldC58_Offset == 0xc58, "USkeletalMeshComponent::boolFieldC58 offset is not c58");
	auto constexpr USkeletalMeshComponent_boolFieldC59_Offset = offsetof(USkeletalMeshComponent, boolFieldC59);
	static_assert(USkeletalMeshComponent_boolFieldC59_Offset == 0xc59, "USkeletalMeshComponent::boolFieldC59 offset is not c59");
	auto constexpr USkeletalMeshComponent_TeleportDistanceThreshold_Offset = offsetof(USkeletalMeshComponent, TeleportDistanceThreshold);
	static_assert(USkeletalMeshComponent_TeleportDistanceThreshold_Offset == 0xc5c, "USkeletalMeshComponent::TeleportDistanceThreshold offset is not c5c");
	auto constexpr USkeletalMeshComponent_TeleportRotationThreshold_Offset = offsetof(USkeletalMeshComponent, TeleportRotationThreshold);
	static_assert(USkeletalMeshComponent_TeleportRotationThreshold_Offset == 0xc60, "USkeletalMeshComponent::TeleportRotationThreshold offset is not c60");
	auto constexpr USkeletalMeshComponent_ClothBlendWeight_Offset = offsetof(USkeletalMeshComponent, ClothBlendWeight);
	static_assert(USkeletalMeshComponent_ClothBlendWeight_Offset == 0xc64, "USkeletalMeshComponent::ClothBlendWeight offset is not c64");
	auto constexpr USkeletalMeshComponent_RootBoneTranslation_Offset = offsetof(USkeletalMeshComponent, RootBoneTranslation);
	static_assert(USkeletalMeshComponent_RootBoneTranslation_Offset == 0xc6c, "USkeletalMeshComponent::RootBoneTranslation offset is not c6c");
	auto constexpr USkeletalMeshComponent_boolFieldC78_Offset = offsetof(USkeletalMeshComponent, boolFieldC78);
	static_assert(USkeletalMeshComponent_boolFieldC78_Offset == 0xc78, "USkeletalMeshComponent::boolFieldC78 offset is not c78");
	auto constexpr USkeletalMeshComponent_boolFieldC7C_Offset = offsetof(USkeletalMeshComponent, boolFieldC7C);
	static_assert(USkeletalMeshComponent_boolFieldC7C_Offset == 0xc7c, "USkeletalMeshComponent::boolFieldC7C offset is not c7c");
	auto constexpr USkeletalMeshComponent_boolFieldC80_Offset = offsetof(USkeletalMeshComponent, boolFieldC80);
	static_assert(USkeletalMeshComponent_boolFieldC80_Offset == 0xc80, "USkeletalMeshComponent::boolFieldC80 offset is not c80");
	auto constexpr USkeletalMeshComponent_BodySetup_Offset = offsetof(USkeletalMeshComponent, BodySetup);
	static_assert(USkeletalMeshComponent_BodySetup_Offset == 0xc88, "USkeletalMeshComponent::BodySetup offset is not c88");
	auto constexpr USkeletalMeshComponent_boolFieldC90_Offset = offsetof(USkeletalMeshComponent, boolFieldC90);
	static_assert(USkeletalMeshComponent_boolFieldC90_Offset == 0xc90, "USkeletalMeshComponent::boolFieldC90 offset is not c90");
	auto constexpr USkeletalMeshComponent_boolFieldC91_Offset = offsetof(USkeletalMeshComponent, boolFieldC91);
	static_assert(USkeletalMeshComponent_boolFieldC91_Offset == 0xc91, "USkeletalMeshComponent::boolFieldC91 offset is not c91");
	auto constexpr USkeletalMeshComponent_CachedAnimCurveUidVersion_Offset = offsetof(USkeletalMeshComponent, CachedAnimCurveUidVersion);
	static_assert(USkeletalMeshComponent_CachedAnimCurveUidVersion_Offset == 0xc94, "USkeletalMeshComponent::CachedAnimCurveUidVersion offset is not c94");
	auto constexpr USkeletalMeshComponent_LineCheckBoundsScale_Offset = offsetof(USkeletalMeshComponent, LineCheckBoundsScale);
	static_assert(USkeletalMeshComponent_LineCheckBoundsScale_Offset == 0xc98, "USkeletalMeshComponent::LineCheckBoundsScale offset is not c98");
	auto constexpr USkeletalMeshComponent_OnConstraintBroken_Offset = offsetof(USkeletalMeshComponent, OnConstraintBroken);
	static_assert(USkeletalMeshComponent_OnConstraintBroken_Offset == 0xca8, "USkeletalMeshComponent::OnConstraintBroken offset is not ca8");
	auto constexpr USkeletalMeshComponent_ClothingSimulationFactory_Offset = offsetof(USkeletalMeshComponent, ClothingSimulationFactory);
	static_assert(USkeletalMeshComponent_ClothingSimulationFactory_Offset == 0xda0, "USkeletalMeshComponent::ClothingSimulationFactory offset is not da0");
	auto constexpr USkeletalMeshComponent_SequenceToPlay_Offset = offsetof(USkeletalMeshComponent, SequenceToPlay);
	static_assert(USkeletalMeshComponent_SequenceToPlay_Offset == 0xfa8, "USkeletalMeshComponent::SequenceToPlay offset is not fa8");
	auto constexpr USkeletalMeshComponent_AnimToPlay_Offset = offsetof(USkeletalMeshComponent, AnimToPlay);
	static_assert(USkeletalMeshComponent_AnimToPlay_Offset == 0xfb0, "USkeletalMeshComponent::AnimToPlay offset is not fb0");
	auto constexpr USkeletalMeshComponent_boolFieldFB8_Offset = offsetof(USkeletalMeshComponent, boolFieldFB8);
	static_assert(USkeletalMeshComponent_boolFieldFB8_Offset == 0xfb8, "USkeletalMeshComponent::boolFieldFB8 offset is not fb8");
	auto constexpr USkeletalMeshComponent_DefaultPosition_Offset = offsetof(USkeletalMeshComponent, DefaultPosition);
	static_assert(USkeletalMeshComponent_DefaultPosition_Offset == 0xfbc, "USkeletalMeshComponent::DefaultPosition offset is not fbc");
	auto constexpr USkeletalMeshComponent_DefaultPlayRate_Offset = offsetof(USkeletalMeshComponent, DefaultPlayRate);
	static_assert(USkeletalMeshComponent_DefaultPlayRate_Offset == 0xfc0, "USkeletalMeshComponent::DefaultPlayRate offset is not fc0");
	auto constexpr USkeletalMeshComponent_LastPoseTickFrame_Offset = offsetof(USkeletalMeshComponent, LastPoseTickFrame);
	static_assert(USkeletalMeshComponent_LastPoseTickFrame_Offset == 0xfc4, "USkeletalMeshComponent::LastPoseTickFrame offset is not fc4");
	auto constexpr USkeletalMeshComponent_LastPoseTickTime_Offset = offsetof(USkeletalMeshComponent, LastPoseTickTime);
	static_assert(USkeletalMeshComponent_LastPoseTickTime_Offset == 0xfc8, "USkeletalMeshComponent::LastPoseTickTime offset is not fc8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
