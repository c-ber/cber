#pragma once
#include "FGPUSpriteLocalVectorFieldInfo.hpp"
#include "FFloatDistribution.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "EParticleScreenAlignment.hpp"
#include "EParticleAxisLock.hpp"
#include "EParticleCollisionMode.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FGPUSpriteEmitterInfo // Size: 0x2C0
{
public:
    ExternalPtr<struct UParticleModuleRequired> RequiredModule; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.GPUSpriteEmitterInfo.RequiredModule */
    ExternalPtr<struct UParticleModuleSpawn> SpawnModule; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.GPUSpriteEmitterInfo.SpawnModule */
    ExternalPtr<struct UParticleModuleSpawnPerUnit> SpawnPerUnitModule; /* Ofs: 0x10 Size: 0x8 ObjectProperty Engine.GPUSpriteEmitterInfo.SpawnPerUnitModule */
    TArray<ExternalPtr<struct UParticleModule>> SpawnModules; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.GPUSpriteEmitterInfo.SpawnModules */
    uint8_t UnknownData28[0x8];
    FGPUSpriteLocalVectorFieldInfo LocalVectorField; /* Ofs: 0x30 Size: 0x70 StructProperty Engine.GPUSpriteEmitterInfo.LocalVectorField */
    FFloatDistribution VectorFieldScale; /* Ofs: 0xA0 Size: 0x28 StructProperty Engine.GPUSpriteEmitterInfo.VectorFieldScale */
    FFloatDistribution DragCoefficient; /* Ofs: 0xC8 Size: 0x28 StructProperty Engine.GPUSpriteEmitterInfo.DragCoefficient */
    FFloatDistribution PointAttractorStrength; /* Ofs: 0xF0 Size: 0x28 StructProperty Engine.GPUSpriteEmitterInfo.PointAttractorStrength */
    FFloatDistribution Resilience; /* Ofs: 0x118 Size: 0x28 StructProperty Engine.GPUSpriteEmitterInfo.Resilience */
    FVector ConstantAcceleration; /* Ofs: 0x140 Size: 0xC StructProperty Engine.GPUSpriteEmitterInfo.ConstantAcceleration */
    FVector PointAttractorPosition; /* Ofs: 0x14C Size: 0xC StructProperty Engine.GPUSpriteEmitterInfo.PointAttractorPosition */
    float PointAttractorRadiusSq; /* Ofs: 0x158 Size: 0x4 FloatProperty Engine.GPUSpriteEmitterInfo.PointAttractorRadiusSq */
    FVector OrbitOffsetBase; /* Ofs: 0x15C Size: 0xC StructProperty Engine.GPUSpriteEmitterInfo.OrbitOffsetBase */
    FVector OrbitOffsetRange; /* Ofs: 0x168 Size: 0xC StructProperty Engine.GPUSpriteEmitterInfo.OrbitOffsetRange */
    FVector2D InvMaxSize; /* Ofs: 0x174 Size: 0x8 StructProperty Engine.GPUSpriteEmitterInfo.InvMaxSize */
    float InvRotationRateScale; /* Ofs: 0x17C Size: 0x4 FloatProperty Engine.GPUSpriteEmitterInfo.InvRotationRateScale */
    float MaxLifetime; /* Ofs: 0x180 Size: 0x4 FloatProperty Engine.GPUSpriteEmitterInfo.MaxLifetime */
    int32_t MaxParticleCount; /* Ofs: 0x184 Size: 0x4 IntProperty Engine.GPUSpriteEmitterInfo.MaxParticleCount */
    TEnumAsByte<enum EParticleScreenAlignment> ScreenAlignment; /* Ofs: 0x188 Size: 0x1 ByteProperty Engine.GPUSpriteEmitterInfo.ScreenAlignment */
    TEnumAsByte<enum EParticleAxisLock> LockAxisFlag; /* Ofs: 0x189 Size: 0x1 ByteProperty Engine.GPUSpriteEmitterInfo.LockAxisFlag */
    uint8_t UnknownData18A[0x2];
    bool bEnableCollision; /* Ofs: 0x18C Size: 0x1 BitMask: 01 BoolProperty Engine.GPUSpriteEmitterInfo.bEnableCollision */
    uint8_t UnknownData18D[0x3];
    TEnumAsByte<enum EParticleCollisionMode> CollisionMode; /* Ofs: 0x190 Size: 0x1 ByteProperty Engine.GPUSpriteEmitterInfo.CollisionMode */
    uint8_t UnknownData191[0x3];
    bool bRemoveHMDRoll; /* Ofs: 0x194 Size: 0x1 BitMask: 01 BoolProperty Engine.GPUSpriteEmitterInfo.bRemoveHMDRoll */
    uint8_t UnknownData195[0x3];
    float MinFacingCameraBlendDistance; /* Ofs: 0x198 Size: 0x4 FloatProperty Engine.GPUSpriteEmitterInfo.MinFacingCameraBlendDistance */
    float MaxFacingCameraBlendDistance; /* Ofs: 0x19C Size: 0x4 FloatProperty Engine.GPUSpriteEmitterInfo.MaxFacingCameraBlendDistance */
    FRawDistributionVector DynamicColor; /* Ofs: 0x1A0 Size: 0x50 StructProperty Engine.GPUSpriteEmitterInfo.DynamicColor */
    FRawDistributionFloat DynamicAlpha; /* Ofs: 0x1F0 Size: 0x38 StructProperty Engine.GPUSpriteEmitterInfo.DynamicAlpha */
    FRawDistributionVector DynamicColorScale; /* Ofs: 0x228 Size: 0x50 StructProperty Engine.GPUSpriteEmitterInfo.DynamicColorScale */
    FRawDistributionFloat DynamicAlphaScale; /* Ofs: 0x278 Size: 0x38 StructProperty Engine.GPUSpriteEmitterInfo.DynamicAlphaScale */
    uint8_t UnknownData2B0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFGPUSpriteEmitterInfo = sizeof(FGPUSpriteEmitterInfo); // 704
    static_assert(sizeof(FGPUSpriteEmitterInfo) == 0x2C0, "Size of FGPUSpriteEmitterInfo is not correct.");
	auto constexpr FGPUSpriteEmitterInfo_RequiredModule_Offset = offsetof(FGPUSpriteEmitterInfo, RequiredModule);
	static_assert(FGPUSpriteEmitterInfo_RequiredModule_Offset == 0x0, "FGPUSpriteEmitterInfo::RequiredModule offset is not 0");
	auto constexpr FGPUSpriteEmitterInfo_SpawnModule_Offset = offsetof(FGPUSpriteEmitterInfo, SpawnModule);
	static_assert(FGPUSpriteEmitterInfo_SpawnModule_Offset == 0x8, "FGPUSpriteEmitterInfo::SpawnModule offset is not 8");
	auto constexpr FGPUSpriteEmitterInfo_SpawnPerUnitModule_Offset = offsetof(FGPUSpriteEmitterInfo, SpawnPerUnitModule);
	static_assert(FGPUSpriteEmitterInfo_SpawnPerUnitModule_Offset == 0x10, "FGPUSpriteEmitterInfo::SpawnPerUnitModule offset is not 10");
	auto constexpr FGPUSpriteEmitterInfo_SpawnModules_Offset = offsetof(FGPUSpriteEmitterInfo, SpawnModules);
	static_assert(FGPUSpriteEmitterInfo_SpawnModules_Offset == 0x18, "FGPUSpriteEmitterInfo::SpawnModules offset is not 18");
	auto constexpr FGPUSpriteEmitterInfo_LocalVectorField_Offset = offsetof(FGPUSpriteEmitterInfo, LocalVectorField);
	static_assert(FGPUSpriteEmitterInfo_LocalVectorField_Offset == 0x30, "FGPUSpriteEmitterInfo::LocalVectorField offset is not 30");
	auto constexpr FGPUSpriteEmitterInfo_VectorFieldScale_Offset = offsetof(FGPUSpriteEmitterInfo, VectorFieldScale);
	static_assert(FGPUSpriteEmitterInfo_VectorFieldScale_Offset == 0xa0, "FGPUSpriteEmitterInfo::VectorFieldScale offset is not a0");
	auto constexpr FGPUSpriteEmitterInfo_DragCoefficient_Offset = offsetof(FGPUSpriteEmitterInfo, DragCoefficient);
	static_assert(FGPUSpriteEmitterInfo_DragCoefficient_Offset == 0xc8, "FGPUSpriteEmitterInfo::DragCoefficient offset is not c8");
	auto constexpr FGPUSpriteEmitterInfo_PointAttractorStrength_Offset = offsetof(FGPUSpriteEmitterInfo, PointAttractorStrength);
	static_assert(FGPUSpriteEmitterInfo_PointAttractorStrength_Offset == 0xf0, "FGPUSpriteEmitterInfo::PointAttractorStrength offset is not f0");
	auto constexpr FGPUSpriteEmitterInfo_Resilience_Offset = offsetof(FGPUSpriteEmitterInfo, Resilience);
	static_assert(FGPUSpriteEmitterInfo_Resilience_Offset == 0x118, "FGPUSpriteEmitterInfo::Resilience offset is not 118");
	auto constexpr FGPUSpriteEmitterInfo_ConstantAcceleration_Offset = offsetof(FGPUSpriteEmitterInfo, ConstantAcceleration);
	static_assert(FGPUSpriteEmitterInfo_ConstantAcceleration_Offset == 0x140, "FGPUSpriteEmitterInfo::ConstantAcceleration offset is not 140");
	auto constexpr FGPUSpriteEmitterInfo_PointAttractorPosition_Offset = offsetof(FGPUSpriteEmitterInfo, PointAttractorPosition);
	static_assert(FGPUSpriteEmitterInfo_PointAttractorPosition_Offset == 0x14c, "FGPUSpriteEmitterInfo::PointAttractorPosition offset is not 14c");
	auto constexpr FGPUSpriteEmitterInfo_PointAttractorRadiusSq_Offset = offsetof(FGPUSpriteEmitterInfo, PointAttractorRadiusSq);
	static_assert(FGPUSpriteEmitterInfo_PointAttractorRadiusSq_Offset == 0x158, "FGPUSpriteEmitterInfo::PointAttractorRadiusSq offset is not 158");
	auto constexpr FGPUSpriteEmitterInfo_OrbitOffsetBase_Offset = offsetof(FGPUSpriteEmitterInfo, OrbitOffsetBase);
	static_assert(FGPUSpriteEmitterInfo_OrbitOffsetBase_Offset == 0x15c, "FGPUSpriteEmitterInfo::OrbitOffsetBase offset is not 15c");
	auto constexpr FGPUSpriteEmitterInfo_OrbitOffsetRange_Offset = offsetof(FGPUSpriteEmitterInfo, OrbitOffsetRange);
	static_assert(FGPUSpriteEmitterInfo_OrbitOffsetRange_Offset == 0x168, "FGPUSpriteEmitterInfo::OrbitOffsetRange offset is not 168");
	auto constexpr FGPUSpriteEmitterInfo_InvMaxSize_Offset = offsetof(FGPUSpriteEmitterInfo, InvMaxSize);
	static_assert(FGPUSpriteEmitterInfo_InvMaxSize_Offset == 0x174, "FGPUSpriteEmitterInfo::InvMaxSize offset is not 174");
	auto constexpr FGPUSpriteEmitterInfo_InvRotationRateScale_Offset = offsetof(FGPUSpriteEmitterInfo, InvRotationRateScale);
	static_assert(FGPUSpriteEmitterInfo_InvRotationRateScale_Offset == 0x17c, "FGPUSpriteEmitterInfo::InvRotationRateScale offset is not 17c");
	auto constexpr FGPUSpriteEmitterInfo_MaxLifetime_Offset = offsetof(FGPUSpriteEmitterInfo, MaxLifetime);
	static_assert(FGPUSpriteEmitterInfo_MaxLifetime_Offset == 0x180, "FGPUSpriteEmitterInfo::MaxLifetime offset is not 180");
	auto constexpr FGPUSpriteEmitterInfo_MaxParticleCount_Offset = offsetof(FGPUSpriteEmitterInfo, MaxParticleCount);
	static_assert(FGPUSpriteEmitterInfo_MaxParticleCount_Offset == 0x184, "FGPUSpriteEmitterInfo::MaxParticleCount offset is not 184");
	auto constexpr FGPUSpriteEmitterInfo_ScreenAlignment_Offset = offsetof(FGPUSpriteEmitterInfo, ScreenAlignment);
	static_assert(FGPUSpriteEmitterInfo_ScreenAlignment_Offset == 0x188, "FGPUSpriteEmitterInfo::ScreenAlignment offset is not 188");
	auto constexpr FGPUSpriteEmitterInfo_LockAxisFlag_Offset = offsetof(FGPUSpriteEmitterInfo, LockAxisFlag);
	static_assert(FGPUSpriteEmitterInfo_LockAxisFlag_Offset == 0x189, "FGPUSpriteEmitterInfo::LockAxisFlag offset is not 189");
	auto constexpr FGPUSpriteEmitterInfo_CollisionMode_Offset = offsetof(FGPUSpriteEmitterInfo, CollisionMode);
	static_assert(FGPUSpriteEmitterInfo_CollisionMode_Offset == 0x190, "FGPUSpriteEmitterInfo::CollisionMode offset is not 190");
	auto constexpr FGPUSpriteEmitterInfo_MinFacingCameraBlendDistance_Offset = offsetof(FGPUSpriteEmitterInfo, MinFacingCameraBlendDistance);
	static_assert(FGPUSpriteEmitterInfo_MinFacingCameraBlendDistance_Offset == 0x198, "FGPUSpriteEmitterInfo::MinFacingCameraBlendDistance offset is not 198");
	auto constexpr FGPUSpriteEmitterInfo_MaxFacingCameraBlendDistance_Offset = offsetof(FGPUSpriteEmitterInfo, MaxFacingCameraBlendDistance);
	static_assert(FGPUSpriteEmitterInfo_MaxFacingCameraBlendDistance_Offset == 0x19c, "FGPUSpriteEmitterInfo::MaxFacingCameraBlendDistance offset is not 19c");
	auto constexpr FGPUSpriteEmitterInfo_DynamicColor_Offset = offsetof(FGPUSpriteEmitterInfo, DynamicColor);
	static_assert(FGPUSpriteEmitterInfo_DynamicColor_Offset == 0x1a0, "FGPUSpriteEmitterInfo::DynamicColor offset is not 1a0");
	auto constexpr FGPUSpriteEmitterInfo_DynamicAlpha_Offset = offsetof(FGPUSpriteEmitterInfo, DynamicAlpha);
	static_assert(FGPUSpriteEmitterInfo_DynamicAlpha_Offset == 0x1f0, "FGPUSpriteEmitterInfo::DynamicAlpha offset is not 1f0");
	auto constexpr FGPUSpriteEmitterInfo_DynamicColorScale_Offset = offsetof(FGPUSpriteEmitterInfo, DynamicColorScale);
	static_assert(FGPUSpriteEmitterInfo_DynamicColorScale_Offset == 0x228, "FGPUSpriteEmitterInfo::DynamicColorScale offset is not 228");
	auto constexpr FGPUSpriteEmitterInfo_DynamicAlphaScale_Offset = offsetof(FGPUSpriteEmitterInfo, DynamicAlphaScale);
	static_assert(FGPUSpriteEmitterInfo_DynamicAlphaScale_Offset == 0x278, "FGPUSpriteEmitterInfo::DynamicAlphaScale offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
