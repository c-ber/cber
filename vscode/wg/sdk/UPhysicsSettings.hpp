#pragma once
#include "UDeveloperSettings.hpp"
#include "ESettingsLockedAxis.hpp"
#include "ESettingsDOF.hpp"
#include "EFrictionCombineMode.hpp"
#include "ECollisionTraceFlag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsSettings // Size: 0xD0
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UPhysicsSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(731); // id32("Class Engine.PhysicsSettings")
		return ptr;
	}
	float DefaultGravityZ; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.PhysicsSettings.DefaultGravityZ */
	float DefaultTerminalVelocity; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.PhysicsSettings.DefaultTerminalVelocity */
	float DefaultFluidFriction; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.PhysicsSettings.DefaultFluidFriction */
	int32_t SimulateScratchMemorySize; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.PhysicsSettings.SimulateScratchMemorySize */
	int32_t RagdollAggregateThreshold; /* Ofs: 0x50 Size: 0x4 - IntProperty Engine.PhysicsSettings.RagdollAggregateThreshold */
	float TriangleMeshTriangleMinAreaThreshold; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.PhysicsSettings.TriangleMeshTriangleMinAreaThreshold */
	uint8_t boolField58;
	uint8_t boolField59;
	uint8_t boolField5A;
	uint8_t boolField5B;
	uint8_t boolField5C;
	uint8_t boolField5D;
	uint8_t boolField5E;
	uint8_t boolField5F;
	TEnumAsByte<enum ESettingsLockedAxis> LockedAxis; /* Ofs: 0x60 Size: 0x1 - ByteProperty Engine.PhysicsSettings.LockedAxis */
	TEnumAsByte<enum ESettingsDOF> DefaultDegreesOfFreedom; /* Ofs: 0x61 Size: 0x1 - ByteProperty Engine.PhysicsSettings.DefaultDegreesOfFreedom */
	uint8_t UnknownData62[0x2];
	float BounceThresholdVelocity; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.PhysicsSettings.BounceThresholdVelocity */
	TEnumAsByte<enum EFrictionCombineMode> FrictionCombineMode; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.PhysicsSettings.FrictionCombineMode */
	TEnumAsByte<enum EFrictionCombineMode> RestitutionCombineMode; /* Ofs: 0x69 Size: 0x1 - ByteProperty Engine.PhysicsSettings.RestitutionCombineMode */
	uint8_t UnknownData6A[0x2];
	float MaxAngularVelocity; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxAngularVelocity */
	float MaxDepenetrationVelocity; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxDepenetrationVelocity */
	float ContactOffsetMultiplier; /* Ofs: 0x74 Size: 0x4 - FloatProperty Engine.PhysicsSettings.ContactOffsetMultiplier */
	float MinContactOffset; /* Ofs: 0x78 Size: 0x4 - FloatProperty Engine.PhysicsSettings.MinContactOffset */
	float MaxContactOffset; /* Ofs: 0x7C Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxContactOffset */
	uint8_t boolField80;
	TEnumAsByte<enum ECollisionTraceFlag> DefaultShapeComplexity; /* Ofs: 0x81 Size: 0x1 - ByteProperty Engine.PhysicsSettings.DefaultShapeComplexity */
	uint8_t boolField82;
	uint8_t boolField83;
	uint8_t boolField84;
	uint8_t boolField85;
	uint8_t boolField86;
	uint8_t UnknownData87[0x1];
	float MaxPhysicsDeltaTime; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxPhysicsDeltaTime */
	uint8_t boolField8C;
	uint8_t boolField8D;
	uint8_t UnknownData8E[0x2];
	float MaxSubstepDeltaTime; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxSubstepDeltaTime */
	int32_t MaxSubsteps; /* Ofs: 0x94 Size: 0x4 - IntProperty Engine.PhysicsSettings.MaxSubsteps */
	float SyncSceneSmoothingFactor; /* Ofs: 0x98 Size: 0x4 - FloatProperty Engine.PhysicsSettings.SyncSceneSmoothingFactor */
	float AsyncSceneSmoothingFactor; /* Ofs: 0x9C Size: 0x4 - FloatProperty Engine.PhysicsSettings.AsyncSceneSmoothingFactor */
	float InitialAverageFrameRate; /* Ofs: 0xA0 Size: 0x4 - FloatProperty Engine.PhysicsSettings.InitialAverageFrameRate */
	float MaxPhysicsDeltaTimeOnDedicatedServer; /* Ofs: 0xA4 Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxPhysicsDeltaTimeOnDedicatedServer */
	uint8_t boolFieldA8;
	uint8_t boolFieldA9;
	uint8_t UnknownDataAA[0x2];
	float MaxSubstepDeltaTimeOnDedicatedServer; /* Ofs: 0xAC Size: 0x4 - FloatProperty Engine.PhysicsSettings.MaxSubstepDeltaTimeOnDedicatedServer */
	int32_t MaxSubstepsOnDedicatedServer; /* Ofs: 0xB0 Size: 0x4 - IntProperty Engine.PhysicsSettings.MaxSubstepsOnDedicatedServer */
	float SyncSceneSmoothingFactorOnDedicatedServer; /* Ofs: 0xB4 Size: 0x4 - FloatProperty Engine.PhysicsSettings.SyncSceneSmoothingFactorOnDedicatedServer */
	float AsyncSceneSmoothingFactorOnDedicatedServer; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Engine.PhysicsSettings.AsyncSceneSmoothingFactorOnDedicatedServer */
	float InitialAverageFrameRateOnDedicatedServer; /* Ofs: 0xBC Size: 0x4 - FloatProperty Engine.PhysicsSettings.InitialAverageFrameRateOnDedicatedServer */
	TArray<struct FPhysicalSurfaceName> PhysicalSurfaces; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty Engine.PhysicsSettings.PhysicalSurfaces */


	inline bool SetDefaultGravityZ(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetDefaultFluidFriction(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetSimulateScratchMemorySize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool SetRagdollAggregateThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x50, value); }
	inline bool SetTriangleMeshTriangleMinAreaThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool bEnableAsyncScene()
	{
		return boolField58& 0x1;
	}
	inline bool SetbEnableAsyncScene(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableShapeSharing()
	{
		return boolField59& 0x1;
	}
	inline bool SetbEnableShapeSharing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x59, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableAsyncSceneOnDedicatedServer()
	{
		return boolField5A& 0x1;
	}
	inline bool SetbEnableAsyncSceneOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableShapeSharingOnDedicatedServer()
	{
		return boolField5B& 0x1;
	}
	inline bool SetbEnableShapeSharingOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnablePCM()
	{
		return boolField5C& 0x1;
	}
	inline bool SetbEnablePCM(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableStabilization()
	{
		return boolField5D& 0x1;
	}
	inline bool SetbEnableStabilization(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWarnMissingLocks()
	{
		return boolField5E& 0x1;
	}
	inline bool SetbWarnMissingLocks(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5E, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnable2DPhysics()
	{
		return boolField5F& 0x1;
	}
	inline bool SetbEnable2DPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5F, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLockedAxis(t_structHelper inst, TEnumAsByte<enum ESettingsLockedAxis> value) { inst.WriteOffset(0x60, value); }
	inline bool SetDefaultDegreesOfFreedom(t_structHelper inst, TEnumAsByte<enum ESettingsDOF> value) { inst.WriteOffset(0x61, value); }
	inline bool SetBounceThresholdVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetFrictionCombineMode(t_structHelper inst, TEnumAsByte<enum EFrictionCombineMode> value) { inst.WriteOffset(0x68, value); }
	inline bool SetRestitutionCombineMode(t_structHelper inst, TEnumAsByte<enum EFrictionCombineMode> value) { inst.WriteOffset(0x69, value); }
	inline bool SetMaxAngularVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetMaxDepenetrationVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetContactOffsetMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool SetMinContactOffset(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
	inline bool SetMaxContactOffset(t_structHelper inst, float value) { inst.WriteOffset(0x7C, value); }
	inline bool bSimulateSkeletalMeshOnDedicatedServer()
	{
		return boolField80& 0x1;
	}
	inline bool SetbSimulateSkeletalMeshOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x80, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultShapeComplexity(t_structHelper inst, TEnumAsByte<enum ECollisionTraceFlag> value) { inst.WriteOffset(0x81, value); }
	inline bool bDefaultHasComplexCollision()
	{
		return boolField82& 0x1;
	}
	inline bool SetbDefaultHasComplexCollision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x82, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSuppressFaceRemapTable()
	{
		return boolField83& 0x1;
	}
	inline bool SetbSuppressFaceRemapTable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x83, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSupportUVFromHitResults()
	{
		return boolField84& 0x1;
	}
	inline bool SetbSupportUVFromHitResults(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x84, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableActiveActors()
	{
		return boolField85& 0x1;
	}
	inline bool SetbDisableActiveActors(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x85, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableCCD()
	{
		return boolField86& 0x1;
	}
	inline bool SetbDisableCCD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x86, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxPhysicsDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool bSubstepping()
	{
		return boolField8C& 0x1;
	}
	inline bool SetbSubstepping(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSubsteppingAsync()
	{
		return boolField8D& 0x1;
	}
	inline bool SetbSubsteppingAsync(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxSubstepDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
	inline bool SetMaxSubsteps(t_structHelper inst, int32_t value) { inst.WriteOffset(0x94, value); }
	inline bool SetSyncSceneSmoothingFactor(t_structHelper inst, float value) { inst.WriteOffset(0x98, value); }
	inline bool SetAsyncSceneSmoothingFactor(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool SetInitialAverageFrameRate(t_structHelper inst, float value) { inst.WriteOffset(0xA0, value); }
	inline bool SetMaxPhysicsDeltaTimeOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0xA4, value); }
	inline bool bSubsteppingOnDedicatedServer()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbSubsteppingOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSubsteppingAsyncOnDedicatedServer()
	{
		return boolFieldA9& 0x1;
	}
	inline bool SetbSubsteppingAsyncOnDedicatedServer(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxSubstepDeltaTimeOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0xAC, value); }
	inline bool SetMaxSubstepsOnDedicatedServer(t_structHelper inst, int32_t value) { inst.WriteOffset(0xB0, value); }
	inline bool SetSyncSceneSmoothingFactorOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0xB4, value); }
	inline bool SetAsyncSceneSmoothingFactorOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetInitialAverageFrameRateOnDedicatedServer(t_structHelper inst, float value) { inst.WriteOffset(0xBC, value); }
	inline bool SetPhysicalSurfaces(t_structHelper inst, TArray<struct FPhysicalSurfaceName> value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsSettings = sizeof(UPhysicsSettings); // 208
    static_assert(sizeof(UPhysicsSettings) == 0xD0, "Size of UPhysicsSettings is not correct.");
	auto constexpr UPhysicsSettings_DefaultGravityZ_Offset = offsetof(UPhysicsSettings, DefaultGravityZ);
	static_assert(UPhysicsSettings_DefaultGravityZ_Offset == 0x40, "UPhysicsSettings::DefaultGravityZ offset is not 40");
	auto constexpr UPhysicsSettings_DefaultTerminalVelocity_Offset = offsetof(UPhysicsSettings, DefaultTerminalVelocity);
	static_assert(UPhysicsSettings_DefaultTerminalVelocity_Offset == 0x44, "UPhysicsSettings::DefaultTerminalVelocity offset is not 44");
	auto constexpr UPhysicsSettings_DefaultFluidFriction_Offset = offsetof(UPhysicsSettings, DefaultFluidFriction);
	static_assert(UPhysicsSettings_DefaultFluidFriction_Offset == 0x48, "UPhysicsSettings::DefaultFluidFriction offset is not 48");
	auto constexpr UPhysicsSettings_SimulateScratchMemorySize_Offset = offsetof(UPhysicsSettings, SimulateScratchMemorySize);
	static_assert(UPhysicsSettings_SimulateScratchMemorySize_Offset == 0x4c, "UPhysicsSettings::SimulateScratchMemorySize offset is not 4c");
	auto constexpr UPhysicsSettings_RagdollAggregateThreshold_Offset = offsetof(UPhysicsSettings, RagdollAggregateThreshold);
	static_assert(UPhysicsSettings_RagdollAggregateThreshold_Offset == 0x50, "UPhysicsSettings::RagdollAggregateThreshold offset is not 50");
	auto constexpr UPhysicsSettings_TriangleMeshTriangleMinAreaThreshold_Offset = offsetof(UPhysicsSettings, TriangleMeshTriangleMinAreaThreshold);
	static_assert(UPhysicsSettings_TriangleMeshTriangleMinAreaThreshold_Offset == 0x54, "UPhysicsSettings::TriangleMeshTriangleMinAreaThreshold offset is not 54");
	auto constexpr UPhysicsSettings_boolField58_Offset = offsetof(UPhysicsSettings, boolField58);
	static_assert(UPhysicsSettings_boolField58_Offset == 0x58, "UPhysicsSettings::boolField58 offset is not 58");
	auto constexpr UPhysicsSettings_boolField59_Offset = offsetof(UPhysicsSettings, boolField59);
	static_assert(UPhysicsSettings_boolField59_Offset == 0x59, "UPhysicsSettings::boolField59 offset is not 59");
	auto constexpr UPhysicsSettings_boolField5A_Offset = offsetof(UPhysicsSettings, boolField5A);
	static_assert(UPhysicsSettings_boolField5A_Offset == 0x5a, "UPhysicsSettings::boolField5A offset is not 5a");
	auto constexpr UPhysicsSettings_boolField5B_Offset = offsetof(UPhysicsSettings, boolField5B);
	static_assert(UPhysicsSettings_boolField5B_Offset == 0x5b, "UPhysicsSettings::boolField5B offset is not 5b");
	auto constexpr UPhysicsSettings_boolField5C_Offset = offsetof(UPhysicsSettings, boolField5C);
	static_assert(UPhysicsSettings_boolField5C_Offset == 0x5c, "UPhysicsSettings::boolField5C offset is not 5c");
	auto constexpr UPhysicsSettings_boolField5D_Offset = offsetof(UPhysicsSettings, boolField5D);
	static_assert(UPhysicsSettings_boolField5D_Offset == 0x5d, "UPhysicsSettings::boolField5D offset is not 5d");
	auto constexpr UPhysicsSettings_boolField5E_Offset = offsetof(UPhysicsSettings, boolField5E);
	static_assert(UPhysicsSettings_boolField5E_Offset == 0x5e, "UPhysicsSettings::boolField5E offset is not 5e");
	auto constexpr UPhysicsSettings_boolField5F_Offset = offsetof(UPhysicsSettings, boolField5F);
	static_assert(UPhysicsSettings_boolField5F_Offset == 0x5f, "UPhysicsSettings::boolField5F offset is not 5f");
	auto constexpr UPhysicsSettings_LockedAxis_Offset = offsetof(UPhysicsSettings, LockedAxis);
	static_assert(UPhysicsSettings_LockedAxis_Offset == 0x60, "UPhysicsSettings::LockedAxis offset is not 60");
	auto constexpr UPhysicsSettings_DefaultDegreesOfFreedom_Offset = offsetof(UPhysicsSettings, DefaultDegreesOfFreedom);
	static_assert(UPhysicsSettings_DefaultDegreesOfFreedom_Offset == 0x61, "UPhysicsSettings::DefaultDegreesOfFreedom offset is not 61");
	auto constexpr UPhysicsSettings_BounceThresholdVelocity_Offset = offsetof(UPhysicsSettings, BounceThresholdVelocity);
	static_assert(UPhysicsSettings_BounceThresholdVelocity_Offset == 0x64, "UPhysicsSettings::BounceThresholdVelocity offset is not 64");
	auto constexpr UPhysicsSettings_FrictionCombineMode_Offset = offsetof(UPhysicsSettings, FrictionCombineMode);
	static_assert(UPhysicsSettings_FrictionCombineMode_Offset == 0x68, "UPhysicsSettings::FrictionCombineMode offset is not 68");
	auto constexpr UPhysicsSettings_RestitutionCombineMode_Offset = offsetof(UPhysicsSettings, RestitutionCombineMode);
	static_assert(UPhysicsSettings_RestitutionCombineMode_Offset == 0x69, "UPhysicsSettings::RestitutionCombineMode offset is not 69");
	auto constexpr UPhysicsSettings_MaxAngularVelocity_Offset = offsetof(UPhysicsSettings, MaxAngularVelocity);
	static_assert(UPhysicsSettings_MaxAngularVelocity_Offset == 0x6c, "UPhysicsSettings::MaxAngularVelocity offset is not 6c");
	auto constexpr UPhysicsSettings_MaxDepenetrationVelocity_Offset = offsetof(UPhysicsSettings, MaxDepenetrationVelocity);
	static_assert(UPhysicsSettings_MaxDepenetrationVelocity_Offset == 0x70, "UPhysicsSettings::MaxDepenetrationVelocity offset is not 70");
	auto constexpr UPhysicsSettings_ContactOffsetMultiplier_Offset = offsetof(UPhysicsSettings, ContactOffsetMultiplier);
	static_assert(UPhysicsSettings_ContactOffsetMultiplier_Offset == 0x74, "UPhysicsSettings::ContactOffsetMultiplier offset is not 74");
	auto constexpr UPhysicsSettings_MinContactOffset_Offset = offsetof(UPhysicsSettings, MinContactOffset);
	static_assert(UPhysicsSettings_MinContactOffset_Offset == 0x78, "UPhysicsSettings::MinContactOffset offset is not 78");
	auto constexpr UPhysicsSettings_MaxContactOffset_Offset = offsetof(UPhysicsSettings, MaxContactOffset);
	static_assert(UPhysicsSettings_MaxContactOffset_Offset == 0x7c, "UPhysicsSettings::MaxContactOffset offset is not 7c");
	auto constexpr UPhysicsSettings_boolField80_Offset = offsetof(UPhysicsSettings, boolField80);
	static_assert(UPhysicsSettings_boolField80_Offset == 0x80, "UPhysicsSettings::boolField80 offset is not 80");
	auto constexpr UPhysicsSettings_DefaultShapeComplexity_Offset = offsetof(UPhysicsSettings, DefaultShapeComplexity);
	static_assert(UPhysicsSettings_DefaultShapeComplexity_Offset == 0x81, "UPhysicsSettings::DefaultShapeComplexity offset is not 81");
	auto constexpr UPhysicsSettings_boolField82_Offset = offsetof(UPhysicsSettings, boolField82);
	static_assert(UPhysicsSettings_boolField82_Offset == 0x82, "UPhysicsSettings::boolField82 offset is not 82");
	auto constexpr UPhysicsSettings_boolField83_Offset = offsetof(UPhysicsSettings, boolField83);
	static_assert(UPhysicsSettings_boolField83_Offset == 0x83, "UPhysicsSettings::boolField83 offset is not 83");
	auto constexpr UPhysicsSettings_boolField84_Offset = offsetof(UPhysicsSettings, boolField84);
	static_assert(UPhysicsSettings_boolField84_Offset == 0x84, "UPhysicsSettings::boolField84 offset is not 84");
	auto constexpr UPhysicsSettings_boolField85_Offset = offsetof(UPhysicsSettings, boolField85);
	static_assert(UPhysicsSettings_boolField85_Offset == 0x85, "UPhysicsSettings::boolField85 offset is not 85");
	auto constexpr UPhysicsSettings_boolField86_Offset = offsetof(UPhysicsSettings, boolField86);
	static_assert(UPhysicsSettings_boolField86_Offset == 0x86, "UPhysicsSettings::boolField86 offset is not 86");
	auto constexpr UPhysicsSettings_MaxPhysicsDeltaTime_Offset = offsetof(UPhysicsSettings, MaxPhysicsDeltaTime);
	static_assert(UPhysicsSettings_MaxPhysicsDeltaTime_Offset == 0x88, "UPhysicsSettings::MaxPhysicsDeltaTime offset is not 88");
	auto constexpr UPhysicsSettings_boolField8C_Offset = offsetof(UPhysicsSettings, boolField8C);
	static_assert(UPhysicsSettings_boolField8C_Offset == 0x8c, "UPhysicsSettings::boolField8C offset is not 8c");
	auto constexpr UPhysicsSettings_boolField8D_Offset = offsetof(UPhysicsSettings, boolField8D);
	static_assert(UPhysicsSettings_boolField8D_Offset == 0x8d, "UPhysicsSettings::boolField8D offset is not 8d");
	auto constexpr UPhysicsSettings_MaxSubstepDeltaTime_Offset = offsetof(UPhysicsSettings, MaxSubstepDeltaTime);
	static_assert(UPhysicsSettings_MaxSubstepDeltaTime_Offset == 0x90, "UPhysicsSettings::MaxSubstepDeltaTime offset is not 90");
	auto constexpr UPhysicsSettings_MaxSubsteps_Offset = offsetof(UPhysicsSettings, MaxSubsteps);
	static_assert(UPhysicsSettings_MaxSubsteps_Offset == 0x94, "UPhysicsSettings::MaxSubsteps offset is not 94");
	auto constexpr UPhysicsSettings_SyncSceneSmoothingFactor_Offset = offsetof(UPhysicsSettings, SyncSceneSmoothingFactor);
	static_assert(UPhysicsSettings_SyncSceneSmoothingFactor_Offset == 0x98, "UPhysicsSettings::SyncSceneSmoothingFactor offset is not 98");
	auto constexpr UPhysicsSettings_AsyncSceneSmoothingFactor_Offset = offsetof(UPhysicsSettings, AsyncSceneSmoothingFactor);
	static_assert(UPhysicsSettings_AsyncSceneSmoothingFactor_Offset == 0x9c, "UPhysicsSettings::AsyncSceneSmoothingFactor offset is not 9c");
	auto constexpr UPhysicsSettings_InitialAverageFrameRate_Offset = offsetof(UPhysicsSettings, InitialAverageFrameRate);
	static_assert(UPhysicsSettings_InitialAverageFrameRate_Offset == 0xa0, "UPhysicsSettings::InitialAverageFrameRate offset is not a0");
	auto constexpr UPhysicsSettings_MaxPhysicsDeltaTimeOnDedicatedServer_Offset = offsetof(UPhysicsSettings, MaxPhysicsDeltaTimeOnDedicatedServer);
	static_assert(UPhysicsSettings_MaxPhysicsDeltaTimeOnDedicatedServer_Offset == 0xa4, "UPhysicsSettings::MaxPhysicsDeltaTimeOnDedicatedServer offset is not a4");
	auto constexpr UPhysicsSettings_boolFieldA8_Offset = offsetof(UPhysicsSettings, boolFieldA8);
	static_assert(UPhysicsSettings_boolFieldA8_Offset == 0xa8, "UPhysicsSettings::boolFieldA8 offset is not a8");
	auto constexpr UPhysicsSettings_boolFieldA9_Offset = offsetof(UPhysicsSettings, boolFieldA9);
	static_assert(UPhysicsSettings_boolFieldA9_Offset == 0xa9, "UPhysicsSettings::boolFieldA9 offset is not a9");
	auto constexpr UPhysicsSettings_MaxSubstepDeltaTimeOnDedicatedServer_Offset = offsetof(UPhysicsSettings, MaxSubstepDeltaTimeOnDedicatedServer);
	static_assert(UPhysicsSettings_MaxSubstepDeltaTimeOnDedicatedServer_Offset == 0xac, "UPhysicsSettings::MaxSubstepDeltaTimeOnDedicatedServer offset is not ac");
	auto constexpr UPhysicsSettings_MaxSubstepsOnDedicatedServer_Offset = offsetof(UPhysicsSettings, MaxSubstepsOnDedicatedServer);
	static_assert(UPhysicsSettings_MaxSubstepsOnDedicatedServer_Offset == 0xb0, "UPhysicsSettings::MaxSubstepsOnDedicatedServer offset is not b0");
	auto constexpr UPhysicsSettings_SyncSceneSmoothingFactorOnDedicatedServer_Offset = offsetof(UPhysicsSettings, SyncSceneSmoothingFactorOnDedicatedServer);
	static_assert(UPhysicsSettings_SyncSceneSmoothingFactorOnDedicatedServer_Offset == 0xb4, "UPhysicsSettings::SyncSceneSmoothingFactorOnDedicatedServer offset is not b4");
	auto constexpr UPhysicsSettings_AsyncSceneSmoothingFactorOnDedicatedServer_Offset = offsetof(UPhysicsSettings, AsyncSceneSmoothingFactorOnDedicatedServer);
	static_assert(UPhysicsSettings_AsyncSceneSmoothingFactorOnDedicatedServer_Offset == 0xb8, "UPhysicsSettings::AsyncSceneSmoothingFactorOnDedicatedServer offset is not b8");
	auto constexpr UPhysicsSettings_InitialAverageFrameRateOnDedicatedServer_Offset = offsetof(UPhysicsSettings, InitialAverageFrameRateOnDedicatedServer);
	static_assert(UPhysicsSettings_InitialAverageFrameRateOnDedicatedServer_Offset == 0xbc, "UPhysicsSettings::InitialAverageFrameRateOnDedicatedServer offset is not bc");
	auto constexpr UPhysicsSettings_PhysicalSurfaces_Offset = offsetof(UPhysicsSettings, PhysicalSurfaces);
	static_assert(UPhysicsSettings_PhysicalSurfaces_Offset == 0xc0, "UPhysicsSettings::PhysicalSurfaces offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
