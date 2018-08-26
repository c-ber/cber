#pragma once
#include "UParticleModule.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"
#include "EParticleScreenAlignment.hpp"
#include "EParticleSortMode.hpp"
#include "FRawDistributionFloat.hpp"
#include "EParticleBurstMethod.hpp"
#include "EParticleSubUVInterpMethod.hpp"
#include "EParticleUVFlipMode.hpp"
#include "ESubUVBoundingVertexCount.hpp"
#include "EOpacitySourceMode.hpp"
#include "EEmitterNormalsMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleRequired // Size: 0x178
	: public UParticleModule // Size: 0x38
{
private:
	typedef UParticleModuleRequired t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1122); // id32("Class Engine.ParticleModuleRequired")
		return ptr;
	}
	ExternalPtr<struct UMaterialInterface> Material; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.ParticleModuleRequired.Material */
	FVector EmitterOrigin; /* Ofs: 0x40 Size: 0xC - StructProperty Engine.ParticleModuleRequired.EmitterOrigin */
	FRotator EmitterRotation; /* Ofs: 0x4C Size: 0xC - StructProperty Engine.ParticleModuleRequired.EmitterRotation */
	TEnumAsByte<enum EParticleScreenAlignment> ScreenAlignment; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.ScreenAlignment */
	uint8_t UnknownData59[0x3];
	float MinFacingCameraBlendDistance; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.MinFacingCameraBlendDistance */
	float MaxFacingCameraBlendDistance; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.MaxFacingCameraBlendDistance */
	uint8_t boolField64;
	uint8_t UnknownData65[0x3];
	TEnumAsByte<enum EParticleSortMode> SortMode; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.SortMode */
	uint8_t UnknownData69[0x3];
	uint8_t boolField6C;
	uint8_t UnknownData6D[0x3];
	float EmitterDuration; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.EmitterDuration */
	float EmitterDurationLow; /* Ofs: 0x74 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.EmitterDurationLow */
	uint8_t boolField78;
	uint8_t UnknownData79[0x3];
	int32_t EmitterLoops; /* Ofs: 0x7C Size: 0x4 - IntProperty Engine.ParticleModuleRequired.EmitterLoops */
	FRawDistributionFloat SpawnRate; /* Ofs: 0x80 Size: 0x38 - StructProperty Engine.ParticleModuleRequired.SpawnRate */
	TEnumAsByte<enum EParticleBurstMethod> ParticleBurstMethod; /* Ofs: 0xB8 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.ParticleBurstMethod */
	uint8_t UnknownDataB9[0x7];
	TArray<struct FParticleBurst> BurstList; /* Ofs: 0xC0 Size: 0x10 - ArrayProperty Engine.ParticleModuleRequired.BurstList */
	float EmitterDelay; /* Ofs: 0xD0 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.EmitterDelay */
	float EmitterDelayLow; /* Ofs: 0xD4 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.EmitterDelayLow */
	uint8_t boolFieldD8;
	uint8_t UnknownDataD9[0x3];
	TEnumAsByte<enum EParticleSubUVInterpMethod> InterpolationMethod; /* Ofs: 0xDC Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.InterpolationMethod */
	uint8_t UnknownDataDD[0x3];
	int32_t SubImages_Horizontal; /* Ofs: 0xE0 Size: 0x4 - IntProperty Engine.ParticleModuleRequired.SubImages_Horizontal */
	int32_t SubImages_Vertical; /* Ofs: 0xE4 Size: 0x4 - IntProperty Engine.ParticleModuleRequired.SubImages_Vertical */
	uint8_t boolFieldE8;
	uint8_t UnknownDataE9[0x3];
	float RandomImageTime; /* Ofs: 0xEC Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.RandomImageTime */
	int32_t RandomImageChanges; /* Ofs: 0xF0 Size: 0x4 - IntProperty Engine.ParticleModuleRequired.RandomImageChanges */
	uint8_t boolFieldF4;
	uint8_t UnknownDataF5[0x3];
	FVector MacroUVPosition; /* Ofs: 0xF8 Size: 0xC - StructProperty Engine.ParticleModuleRequired.MacroUVPosition */
	float MacroUVRadius; /* Ofs: 0x104 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.MacroUVRadius */
	uint8_t boolField108;
	uint8_t UnknownData109[0x3];
	int32_t MaxDrawCount; /* Ofs: 0x10C Size: 0x4 - IntProperty Engine.ParticleModuleRequired.MaxDrawCount */
	TEnumAsByte<enum EParticleUVFlipMode> UVFlippingMode; /* Ofs: 0x110 Size: 0x1 - EnumProperty Engine.ParticleModuleRequired.UVFlippingMode */
	uint8_t UnknownData111[0x7];
	ExternalPtr<struct UTexture2D> CutoutTexture; /* Ofs: 0x118 Size: 0x8 - ObjectProperty Engine.ParticleModuleRequired.CutoutTexture */
	TEnumAsByte<enum ESubUVBoundingVertexCount> BoundingMode; /* Ofs: 0x120 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.BoundingMode */
	TEnumAsByte<enum EOpacitySourceMode> OpacitySourceMode; /* Ofs: 0x121 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.OpacitySourceMode */
	uint8_t UnknownData122[0x2];
	float AlphaThreshold; /* Ofs: 0x124 Size: 0x4 - FloatProperty Engine.ParticleModuleRequired.AlphaThreshold */
	TEnumAsByte<enum EEmitterNormalsMode> EmitterNormalsMode; /* Ofs: 0x128 Size: 0x1 - ByteProperty Engine.ParticleModuleRequired.EmitterNormalsMode */
	uint8_t UnknownData129[0x3];
	FVector NormalsSphereCenter; /* Ofs: 0x12C Size: 0xC - StructProperty Engine.ParticleModuleRequired.NormalsSphereCenter */
	FVector NormalsCylinderDirection; /* Ofs: 0x138 Size: 0xC - StructProperty Engine.ParticleModuleRequired.NormalsCylinderDirection */
	uint8_t boolField144;
	uint8_t UnknownData145[0x3];
	TArray<struct FName> NamedMaterialOverrides; /* Ofs: 0x148 Size: 0x10 - ArrayProperty Engine.ParticleModuleRequired.NamedMaterialOverrides */
	uint8_t UnknownData158[0x20];


	inline bool SetMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x38, value); }
	inline bool SetEmitterOrigin(t_structHelper inst, FVector value) { inst.WriteOffset(0x40, value); }
	inline bool SetEmitterRotation(t_structHelper inst, FRotator value) { inst.WriteOffset(0x4C, value); }
	inline bool SetScreenAlignment(t_structHelper inst, TEnumAsByte<enum EParticleScreenAlignment> value) { inst.WriteOffset(0x58, value); }
	inline bool SetMinFacingCameraBlendDistance(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetMaxFacingCameraBlendDistance(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool bUseLocalSpace()
	{
		return boolField64& 0x1;
	}
	inline bool SetbUseLocalSpace(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bKillOnDeactivate()
	{
		return boolField64& 0x2;
	}
	inline bool SetbKillOnDeactivate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bKillOnCompleted()
	{
		return boolField64& 0x4;
	}
	inline bool SetbKillOnCompleted(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x64, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetSortMode(t_structHelper inst, TEnumAsByte<enum EParticleSortMode> value) { inst.WriteOffset(0x68, value); }
	inline bool bUseLegacyEmitterTime()
	{
		return boolField6C& 0x1;
	}
	inline bool SetbUseLegacyEmitterTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRemoveHMDRoll()
	{
		return boolField6C& 0x2;
	}
	inline bool SetbRemoveHMDRoll(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetEmitterDuration(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetEmitterDurationLow(t_structHelper inst, float value) { inst.WriteOffset(0x74, value); }
	inline bool bEmitterDurationUseRange()
	{
		return boolField78& 0x1;
	}
	inline bool SetbEmitterDurationUseRange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDurationRecalcEachLoop()
	{
		return boolField78& 0x2;
	}
	inline bool SetbDurationRecalcEachLoop(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetEmitterLoops(t_structHelper inst, int32_t value) { inst.WriteOffset(0x7C, value); }
	inline bool SetSpawnRate(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x80, value); }
	inline bool SetParticleBurstMethod(t_structHelper inst, TEnumAsByte<enum EParticleBurstMethod> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetBurstList(t_structHelper inst, TArray<struct FParticleBurst> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetEmitterDelay(t_structHelper inst, float value) { inst.WriteOffset(0xD0, value); }
	inline bool SetEmitterDelayLow(t_structHelper inst, float value) { inst.WriteOffset(0xD4, value); }
	inline bool bEmitterDelayUseRange()
	{
		return boolFieldD8& 0x1;
	}
	inline bool SetbEmitterDelayUseRange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDelayFirstLoopOnly()
	{
		return boolFieldD8& 0x2;
	}
	inline bool SetbDelayFirstLoopOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetInterpolationMethod(t_structHelper inst, TEnumAsByte<enum EParticleSubUVInterpMethod> value) { inst.WriteOffset(0xDC, value); }
	inline bool SetSubImages_Horizontal(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE0, value); }
	inline bool SetSubImages_Vertical(t_structHelper inst, int32_t value) { inst.WriteOffset(0xE4, value); }
	inline bool bScaleUV()
	{
		return boolFieldE8& 0x1;
	}
	inline bool SetbScaleUV(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRandomImageTime(t_structHelper inst, float value) { inst.WriteOffset(0xEC, value); }
	inline bool SetRandomImageChanges(t_structHelper inst, int32_t value) { inst.WriteOffset(0xF0, value); }
	inline bool bOverrideSystemMacroUV()
	{
		return boolFieldF4& 0x1;
	}
	inline bool SetbOverrideSystemMacroUV(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMacroUVPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0xF8, value); }
	inline bool SetMacroUVRadius(t_structHelper inst, float value) { inst.WriteOffset(0x104, value); }
	inline bool bUseMaxDrawCount()
	{
		return boolField108& 0x1;
	}
	inline bool SetbUseMaxDrawCount(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x108, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxDrawCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x10C, value); }
	inline bool SetUVFlippingMode(t_structHelper inst, TEnumAsByte<enum EParticleUVFlipMode> value) { inst.WriteOffset(0x110, value); }
	inline bool SetCutoutTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x118, value); }
	inline bool SetBoundingMode(t_structHelper inst, TEnumAsByte<enum ESubUVBoundingVertexCount> value) { inst.WriteOffset(0x120, value); }
	inline bool SetOpacitySourceMode(t_structHelper inst, TEnumAsByte<enum EOpacitySourceMode> value) { inst.WriteOffset(0x121, value); }
	inline bool SetAlphaThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x124, value); }
	inline bool SetEmitterNormalsMode(t_structHelper inst, TEnumAsByte<enum EEmitterNormalsMode> value) { inst.WriteOffset(0x128, value); }
	inline bool SetNormalsSphereCenter(t_structHelper inst, FVector value) { inst.WriteOffset(0x12C, value); }
	inline bool SetNormalsCylinderDirection(t_structHelper inst, FVector value) { inst.WriteOffset(0x138, value); }
	inline bool bOrbitModuleAffectsVelocityAlignment()
	{
		return boolField144& 0x1;
	}
	inline bool SetbOrbitModuleAffectsVelocityAlignment(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x144, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNamedMaterialOverrides(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x148, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleRequired = sizeof(UParticleModuleRequired); // 376
    static_assert(sizeof(UParticleModuleRequired) == 0x178, "Size of UParticleModuleRequired is not correct.");
	auto constexpr UParticleModuleRequired_Material_Offset = offsetof(UParticleModuleRequired, Material);
	static_assert(UParticleModuleRequired_Material_Offset == 0x38, "UParticleModuleRequired::Material offset is not 38");
	auto constexpr UParticleModuleRequired_EmitterOrigin_Offset = offsetof(UParticleModuleRequired, EmitterOrigin);
	static_assert(UParticleModuleRequired_EmitterOrigin_Offset == 0x40, "UParticleModuleRequired::EmitterOrigin offset is not 40");
	auto constexpr UParticleModuleRequired_EmitterRotation_Offset = offsetof(UParticleModuleRequired, EmitterRotation);
	static_assert(UParticleModuleRequired_EmitterRotation_Offset == 0x4c, "UParticleModuleRequired::EmitterRotation offset is not 4c");
	auto constexpr UParticleModuleRequired_ScreenAlignment_Offset = offsetof(UParticleModuleRequired, ScreenAlignment);
	static_assert(UParticleModuleRequired_ScreenAlignment_Offset == 0x58, "UParticleModuleRequired::ScreenAlignment offset is not 58");
	auto constexpr UParticleModuleRequired_MinFacingCameraBlendDistance_Offset = offsetof(UParticleModuleRequired, MinFacingCameraBlendDistance);
	static_assert(UParticleModuleRequired_MinFacingCameraBlendDistance_Offset == 0x5c, "UParticleModuleRequired::MinFacingCameraBlendDistance offset is not 5c");
	auto constexpr UParticleModuleRequired_MaxFacingCameraBlendDistance_Offset = offsetof(UParticleModuleRequired, MaxFacingCameraBlendDistance);
	static_assert(UParticleModuleRequired_MaxFacingCameraBlendDistance_Offset == 0x60, "UParticleModuleRequired::MaxFacingCameraBlendDistance offset is not 60");
	auto constexpr UParticleModuleRequired_boolField64_Offset = offsetof(UParticleModuleRequired, boolField64);
	static_assert(UParticleModuleRequired_boolField64_Offset == 0x64, "UParticleModuleRequired::boolField64 offset is not 64");
	auto constexpr UParticleModuleRequired_SortMode_Offset = offsetof(UParticleModuleRequired, SortMode);
	static_assert(UParticleModuleRequired_SortMode_Offset == 0x68, "UParticleModuleRequired::SortMode offset is not 68");
	auto constexpr UParticleModuleRequired_boolField6C_Offset = offsetof(UParticleModuleRequired, boolField6C);
	static_assert(UParticleModuleRequired_boolField6C_Offset == 0x6c, "UParticleModuleRequired::boolField6C offset is not 6c");
	auto constexpr UParticleModuleRequired_EmitterDuration_Offset = offsetof(UParticleModuleRequired, EmitterDuration);
	static_assert(UParticleModuleRequired_EmitterDuration_Offset == 0x70, "UParticleModuleRequired::EmitterDuration offset is not 70");
	auto constexpr UParticleModuleRequired_EmitterDurationLow_Offset = offsetof(UParticleModuleRequired, EmitterDurationLow);
	static_assert(UParticleModuleRequired_EmitterDurationLow_Offset == 0x74, "UParticleModuleRequired::EmitterDurationLow offset is not 74");
	auto constexpr UParticleModuleRequired_boolField78_Offset = offsetof(UParticleModuleRequired, boolField78);
	static_assert(UParticleModuleRequired_boolField78_Offset == 0x78, "UParticleModuleRequired::boolField78 offset is not 78");
	auto constexpr UParticleModuleRequired_EmitterLoops_Offset = offsetof(UParticleModuleRequired, EmitterLoops);
	static_assert(UParticleModuleRequired_EmitterLoops_Offset == 0x7c, "UParticleModuleRequired::EmitterLoops offset is not 7c");
	auto constexpr UParticleModuleRequired_SpawnRate_Offset = offsetof(UParticleModuleRequired, SpawnRate);
	static_assert(UParticleModuleRequired_SpawnRate_Offset == 0x80, "UParticleModuleRequired::SpawnRate offset is not 80");
	auto constexpr UParticleModuleRequired_ParticleBurstMethod_Offset = offsetof(UParticleModuleRequired, ParticleBurstMethod);
	static_assert(UParticleModuleRequired_ParticleBurstMethod_Offset == 0xb8, "UParticleModuleRequired::ParticleBurstMethod offset is not b8");
	auto constexpr UParticleModuleRequired_BurstList_Offset = offsetof(UParticleModuleRequired, BurstList);
	static_assert(UParticleModuleRequired_BurstList_Offset == 0xc0, "UParticleModuleRequired::BurstList offset is not c0");
	auto constexpr UParticleModuleRequired_EmitterDelay_Offset = offsetof(UParticleModuleRequired, EmitterDelay);
	static_assert(UParticleModuleRequired_EmitterDelay_Offset == 0xd0, "UParticleModuleRequired::EmitterDelay offset is not d0");
	auto constexpr UParticleModuleRequired_EmitterDelayLow_Offset = offsetof(UParticleModuleRequired, EmitterDelayLow);
	static_assert(UParticleModuleRequired_EmitterDelayLow_Offset == 0xd4, "UParticleModuleRequired::EmitterDelayLow offset is not d4");
	auto constexpr UParticleModuleRequired_boolFieldD8_Offset = offsetof(UParticleModuleRequired, boolFieldD8);
	static_assert(UParticleModuleRequired_boolFieldD8_Offset == 0xd8, "UParticleModuleRequired::boolFieldD8 offset is not d8");
	auto constexpr UParticleModuleRequired_InterpolationMethod_Offset = offsetof(UParticleModuleRequired, InterpolationMethod);
	static_assert(UParticleModuleRequired_InterpolationMethod_Offset == 0xdc, "UParticleModuleRequired::InterpolationMethod offset is not dc");
	auto constexpr UParticleModuleRequired_SubImages_Horizontal_Offset = offsetof(UParticleModuleRequired, SubImages_Horizontal);
	static_assert(UParticleModuleRequired_SubImages_Horizontal_Offset == 0xe0, "UParticleModuleRequired::SubImages_Horizontal offset is not e0");
	auto constexpr UParticleModuleRequired_SubImages_Vertical_Offset = offsetof(UParticleModuleRequired, SubImages_Vertical);
	static_assert(UParticleModuleRequired_SubImages_Vertical_Offset == 0xe4, "UParticleModuleRequired::SubImages_Vertical offset is not e4");
	auto constexpr UParticleModuleRequired_boolFieldE8_Offset = offsetof(UParticleModuleRequired, boolFieldE8);
	static_assert(UParticleModuleRequired_boolFieldE8_Offset == 0xe8, "UParticleModuleRequired::boolFieldE8 offset is not e8");
	auto constexpr UParticleModuleRequired_RandomImageTime_Offset = offsetof(UParticleModuleRequired, RandomImageTime);
	static_assert(UParticleModuleRequired_RandomImageTime_Offset == 0xec, "UParticleModuleRequired::RandomImageTime offset is not ec");
	auto constexpr UParticleModuleRequired_RandomImageChanges_Offset = offsetof(UParticleModuleRequired, RandomImageChanges);
	static_assert(UParticleModuleRequired_RandomImageChanges_Offset == 0xf0, "UParticleModuleRequired::RandomImageChanges offset is not f0");
	auto constexpr UParticleModuleRequired_boolFieldF4_Offset = offsetof(UParticleModuleRequired, boolFieldF4);
	static_assert(UParticleModuleRequired_boolFieldF4_Offset == 0xf4, "UParticleModuleRequired::boolFieldF4 offset is not f4");
	auto constexpr UParticleModuleRequired_MacroUVPosition_Offset = offsetof(UParticleModuleRequired, MacroUVPosition);
	static_assert(UParticleModuleRequired_MacroUVPosition_Offset == 0xf8, "UParticleModuleRequired::MacroUVPosition offset is not f8");
	auto constexpr UParticleModuleRequired_MacroUVRadius_Offset = offsetof(UParticleModuleRequired, MacroUVRadius);
	static_assert(UParticleModuleRequired_MacroUVRadius_Offset == 0x104, "UParticleModuleRequired::MacroUVRadius offset is not 104");
	auto constexpr UParticleModuleRequired_boolField108_Offset = offsetof(UParticleModuleRequired, boolField108);
	static_assert(UParticleModuleRequired_boolField108_Offset == 0x108, "UParticleModuleRequired::boolField108 offset is not 108");
	auto constexpr UParticleModuleRequired_MaxDrawCount_Offset = offsetof(UParticleModuleRequired, MaxDrawCount);
	static_assert(UParticleModuleRequired_MaxDrawCount_Offset == 0x10c, "UParticleModuleRequired::MaxDrawCount offset is not 10c");
	auto constexpr UParticleModuleRequired_UVFlippingMode_Offset = offsetof(UParticleModuleRequired, UVFlippingMode);
	static_assert(UParticleModuleRequired_UVFlippingMode_Offset == 0x110, "UParticleModuleRequired::UVFlippingMode offset is not 110");
	auto constexpr UParticleModuleRequired_CutoutTexture_Offset = offsetof(UParticleModuleRequired, CutoutTexture);
	static_assert(UParticleModuleRequired_CutoutTexture_Offset == 0x118, "UParticleModuleRequired::CutoutTexture offset is not 118");
	auto constexpr UParticleModuleRequired_BoundingMode_Offset = offsetof(UParticleModuleRequired, BoundingMode);
	static_assert(UParticleModuleRequired_BoundingMode_Offset == 0x120, "UParticleModuleRequired::BoundingMode offset is not 120");
	auto constexpr UParticleModuleRequired_OpacitySourceMode_Offset = offsetof(UParticleModuleRequired, OpacitySourceMode);
	static_assert(UParticleModuleRequired_OpacitySourceMode_Offset == 0x121, "UParticleModuleRequired::OpacitySourceMode offset is not 121");
	auto constexpr UParticleModuleRequired_AlphaThreshold_Offset = offsetof(UParticleModuleRequired, AlphaThreshold);
	static_assert(UParticleModuleRequired_AlphaThreshold_Offset == 0x124, "UParticleModuleRequired::AlphaThreshold offset is not 124");
	auto constexpr UParticleModuleRequired_EmitterNormalsMode_Offset = offsetof(UParticleModuleRequired, EmitterNormalsMode);
	static_assert(UParticleModuleRequired_EmitterNormalsMode_Offset == 0x128, "UParticleModuleRequired::EmitterNormalsMode offset is not 128");
	auto constexpr UParticleModuleRequired_NormalsSphereCenter_Offset = offsetof(UParticleModuleRequired, NormalsSphereCenter);
	static_assert(UParticleModuleRequired_NormalsSphereCenter_Offset == 0x12c, "UParticleModuleRequired::NormalsSphereCenter offset is not 12c");
	auto constexpr UParticleModuleRequired_NormalsCylinderDirection_Offset = offsetof(UParticleModuleRequired, NormalsCylinderDirection);
	static_assert(UParticleModuleRequired_NormalsCylinderDirection_Offset == 0x138, "UParticleModuleRequired::NormalsCylinderDirection offset is not 138");
	auto constexpr UParticleModuleRequired_boolField144_Offset = offsetof(UParticleModuleRequired, boolField144);
	static_assert(UParticleModuleRequired_boolField144_Offset == 0x144, "UParticleModuleRequired::boolField144 offset is not 144");
	auto constexpr UParticleModuleRequired_NamedMaterialOverrides_Offset = offsetof(UParticleModuleRequired, NamedMaterialOverrides);
	static_assert(UParticleModuleRequired_NamedMaterialOverrides_Offset == 0x148, "UParticleModuleRequired::NamedMaterialOverrides offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
