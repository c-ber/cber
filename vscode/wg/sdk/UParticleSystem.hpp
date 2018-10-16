#pragma once
#include "EParticleSystemUpdateMode.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "FBox.hpp"
#include "EParticleSystemInsignificanceReaction.hpp"
#include "EParticleSignificanceLevel.hpp"
#include "FVector.hpp"
#include "EParticleSystemOcclusionBoundsMethod.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleSystem // Size: 0x140
	: public UObject // Size: 0x30
{
private:
	typedef UParticleSystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1771); // id32("Class Engine.ParticleSystem")
		return ptr;
	}
	TEnumAsByte<enum EParticleSystemUpdateMode> SystemUpdateMode; /* Ofs: 0x30 Size: 0x1 - ByteProperty Engine.ParticleSystem.SystemUpdateMode */
	uint8_t UnknownData31[0x3];
	float UpdateTime_FPS; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.ParticleSystem.UpdateTime_FPS */
	float UpdateTime_Delta; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.ParticleSystem.UpdateTime_Delta */
	float WarmupTime; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.ParticleSystem.WarmupTime */
	float WarmupTickRate; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ParticleSystem.WarmupTickRate */
	uint8_t UnknownData44[0x4];
	TArray<ExternalPtr<struct UParticleEmitter>> Emitters; /* Ofs: 0x48 Size: 0x10 - ArrayProperty Engine.ParticleSystem.Emitters */
	ExternalPtr<struct UParticleSystemComponent> PreviewComponent; /* Ofs: 0x58 Size: 0x8 - ObjectProperty Engine.ParticleSystem.PreviewComponent */
	ExternalPtr<struct UInterpCurveEdSetup> CurveEdSetup; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.ParticleSystem.CurveEdSetup */
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	float LODDistanceCheckTime; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.ParticleSystem.LODDistanceCheckTime */
	TEnumAsByte<enum ParticleSystemLODMethod> LODMethod; /* Ofs: 0x70 Size: 0x1 - ByteProperty Engine.ParticleSystem.LODMethod */
	uint8_t UnknownData71[0x7];
	TArray<float> LODDistances; /* Ofs: 0x78 Size: 0x10 - ArrayProperty Engine.ParticleSystem.LODDistances */
	uint8_t boolField88;
	uint8_t UnknownData89[0x7];
	TArray<struct FParticleSystemLOD> LODSettings; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.ParticleSystem.LODSettings */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x3];
	FBox FixedRelativeBoundingBox; /* Ofs: 0xA4 Size: 0x1C - StructProperty Engine.ParticleSystem.FixedRelativeBoundingBox */
	float SecondsBeforeInactive; /* Ofs: 0xC0 Size: 0x4 - FloatProperty Engine.ParticleSystem.SecondsBeforeInactive */
	uint8_t boolFieldC4;
	uint8_t UnknownDataC5[0x3];
	float Delay; /* Ofs: 0xC8 Size: 0x4 - FloatProperty Engine.ParticleSystem.Delay */
	float DelayLow; /* Ofs: 0xCC Size: 0x4 - FloatProperty Engine.ParticleSystem.DelayLow */
	uint8_t boolFieldD0;
	uint8_t UnknownDataD1[0x3];
	uint8_t boolFieldD4;
	uint8_t UnknownDataD5[0x3];
	uint32_t MinTimeBetweenTicks; /* Ofs: 0xD8 Size: 0x4 - UInt32Property Engine.ParticleSystem.MinTimeBetweenTicks */
	TEnumAsByte<enum EParticleSystemInsignificanceReaction> InsignificantReaction; /* Ofs: 0xDC Size: 0x1 - EnumProperty Engine.ParticleSystem.InsignificantReaction */
	uint8_t UnknownDataDD[0x3];
	float InsignificanceDelay; /* Ofs: 0xE0 Size: 0x4 - FloatProperty Engine.ParticleSystem.InsignificanceDelay */
	TEnumAsByte<enum EParticleSignificanceLevel> MaxSignificanceLevel; /* Ofs: 0xE4 Size: 0x1 - EnumProperty Engine.ParticleSystem.MaxSignificanceLevel */
	uint8_t UnknownDataE5[0x3];
	FVector MacroUVPosition; /* Ofs: 0xE8 Size: 0xC - StructProperty Engine.ParticleSystem.MacroUVPosition */
	float MacroUVRadius; /* Ofs: 0xF4 Size: 0x4 - FloatProperty Engine.ParticleSystem.MacroUVRadius */
	TEnumAsByte<enum EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod; /* Ofs: 0xF8 Size: 0x1 - ByteProperty Engine.ParticleSystem.OcclusionBoundsMethod */
	uint8_t UnknownDataF9[0x3];
	FBox CustomOcclusionBounds; /* Ofs: 0xFC Size: 0x1C - StructProperty Engine.ParticleSystem.CustomOcclusionBounds */
	TArray<struct FLODSoloTrack> SoloTracking; /* Ofs: 0x118 Size: 0x10 - ArrayProperty Engine.ParticleSystem.SoloTracking */
	TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; /* Ofs: 0x128 Size: 0x10 - ArrayProperty Engine.ParticleSystem.NamedMaterialSlots */
	uint8_t UnknownData138[0x8];


	inline bool SetSystemUpdateMode(t_structHelper inst, TEnumAsByte<enum EParticleSystemUpdateMode> value) { inst.WriteOffset(0x30, value); }
	inline bool SetUpdateTime_FPS(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetUpdateTime_Delta(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetWarmupTime(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetWarmupTickRate(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetEmitters(t_structHelper inst, TArray<ExternalPtr<struct UParticleEmitter>> value) { inst.WriteOffset(0x48, value); }
	inline bool SetPreviewComponent(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x58, value); }
	inline bool SetCurveEdSetup(t_structHelper inst, ExternalPtr<struct UInterpCurveEdSetup> value) { inst.WriteOffset(0x60, value); }
	inline bool bOrientZAxisTowardCamera()
	{
		return boolField68& 0x1;
	}
	inline bool SetbOrientZAxisTowardCamera(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLODDistanceCheckTime(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetLODMethod(t_structHelper inst, TEnumAsByte<enum ParticleSystemLODMethod> value) { inst.WriteOffset(0x70, value); }
	inline bool SetLODDistances(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x78, value); }
	inline bool bRegenerateLODDuplicate()
	{
		return boolField88& 0x1;
	}
	inline bool SetbRegenerateLODDuplicate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x88, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLODSettings(t_structHelper inst, TArray<struct FParticleSystemLOD> value) { inst.WriteOffset(0x90, value); }
	inline bool bUseFixedRelativeBoundingBox()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbUseFixedRelativeBoundingBox(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFixedRelativeBoundingBox(t_structHelper inst, FBox value) { inst.WriteOffset(0xA4, value); }
	inline bool SetSecondsBeforeInactive(t_structHelper inst, float value) { inst.WriteOffset(0xC0, value); }
	inline bool bShouldResetPeakCounts()
	{
		return boolFieldC4& 0x1;
	}
	inline bool SetbShouldResetPeakCounts(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHasPhysics()
	{
		return boolFieldC4& 0x2;
	}
	inline bool SetbHasPhysics(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUseRealtimeThumbnail()
	{
		return boolFieldC4& 0x4;
	}
	inline bool SetbUseRealtimeThumbnail(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool ThumbnailImageOutOfDate()
	{
		return boolFieldC4& 0x8;
	}
	inline bool SetThumbnailImageOutOfDate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xC4, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetDelay(t_structHelper inst, float value) { inst.WriteOffset(0xC8, value); }
	inline bool SetDelayLow(t_structHelper inst, float value) { inst.WriteOffset(0xCC, value); }
	inline bool bUseDelayRange()
	{
		return boolFieldD0& 0x1;
	}
	inline bool SetbUseDelayRange(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAutoDeactivate()
	{
		return boolFieldD4& 0x1;
	}
	inline bool SetbAutoDeactivate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinTimeBetweenTicks(t_structHelper inst, uint32_t value) { inst.WriteOffset(0xD8, value); }
	inline bool SetInsignificantReaction(t_structHelper inst, TEnumAsByte<enum EParticleSystemInsignificanceReaction> value) { inst.WriteOffset(0xDC, value); }
	inline bool SetInsignificanceDelay(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetMaxSignificanceLevel(t_structHelper inst, TEnumAsByte<enum EParticleSignificanceLevel> value) { inst.WriteOffset(0xE4, value); }
	inline bool SetMacroUVPosition(t_structHelper inst, FVector value) { inst.WriteOffset(0xE8, value); }
	inline bool SetMacroUVRadius(t_structHelper inst, float value) { inst.WriteOffset(0xF4, value); }
	inline bool SetOcclusionBoundsMethod(t_structHelper inst, TEnumAsByte<enum EParticleSystemOcclusionBoundsMethod> value) { inst.WriteOffset(0xF8, value); }
	inline bool SetCustomOcclusionBounds(t_structHelper inst, FBox value) { inst.WriteOffset(0xFC, value); }
	inline bool SetSoloTracking(t_structHelper inst, TArray<struct FLODSoloTrack> value) { inst.WriteOffset(0x118, value); }
	inline bool SetNamedMaterialSlots(t_structHelper inst, TArray<struct FNamedEmitterMaterial> value) { inst.WriteOffset(0x128, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleSystem = sizeof(UParticleSystem); // 320
    static_assert(sizeof(UParticleSystem) == 0x140, "Size of UParticleSystem is not correct.");
	auto constexpr UParticleSystem_SystemUpdateMode_Offset = offsetof(UParticleSystem, SystemUpdateMode);
	static_assert(UParticleSystem_SystemUpdateMode_Offset == 0x30, "UParticleSystem::SystemUpdateMode offset is not 30");
	auto constexpr UParticleSystem_UpdateTime_FPS_Offset = offsetof(UParticleSystem, UpdateTime_FPS);
	static_assert(UParticleSystem_UpdateTime_FPS_Offset == 0x34, "UParticleSystem::UpdateTime_FPS offset is not 34");
	auto constexpr UParticleSystem_UpdateTime_Delta_Offset = offsetof(UParticleSystem, UpdateTime_Delta);
	static_assert(UParticleSystem_UpdateTime_Delta_Offset == 0x38, "UParticleSystem::UpdateTime_Delta offset is not 38");
	auto constexpr UParticleSystem_WarmupTime_Offset = offsetof(UParticleSystem, WarmupTime);
	static_assert(UParticleSystem_WarmupTime_Offset == 0x3c, "UParticleSystem::WarmupTime offset is not 3c");
	auto constexpr UParticleSystem_WarmupTickRate_Offset = offsetof(UParticleSystem, WarmupTickRate);
	static_assert(UParticleSystem_WarmupTickRate_Offset == 0x40, "UParticleSystem::WarmupTickRate offset is not 40");
	auto constexpr UParticleSystem_Emitters_Offset = offsetof(UParticleSystem, Emitters);
	static_assert(UParticleSystem_Emitters_Offset == 0x48, "UParticleSystem::Emitters offset is not 48");
	auto constexpr UParticleSystem_PreviewComponent_Offset = offsetof(UParticleSystem, PreviewComponent);
	static_assert(UParticleSystem_PreviewComponent_Offset == 0x58, "UParticleSystem::PreviewComponent offset is not 58");
	auto constexpr UParticleSystem_CurveEdSetup_Offset = offsetof(UParticleSystem, CurveEdSetup);
	static_assert(UParticleSystem_CurveEdSetup_Offset == 0x60, "UParticleSystem::CurveEdSetup offset is not 60");
	auto constexpr UParticleSystem_boolField68_Offset = offsetof(UParticleSystem, boolField68);
	static_assert(UParticleSystem_boolField68_Offset == 0x68, "UParticleSystem::boolField68 offset is not 68");
	auto constexpr UParticleSystem_LODDistanceCheckTime_Offset = offsetof(UParticleSystem, LODDistanceCheckTime);
	static_assert(UParticleSystem_LODDistanceCheckTime_Offset == 0x6c, "UParticleSystem::LODDistanceCheckTime offset is not 6c");
	auto constexpr UParticleSystem_LODMethod_Offset = offsetof(UParticleSystem, LODMethod);
	static_assert(UParticleSystem_LODMethod_Offset == 0x70, "UParticleSystem::LODMethod offset is not 70");
	auto constexpr UParticleSystem_LODDistances_Offset = offsetof(UParticleSystem, LODDistances);
	static_assert(UParticleSystem_LODDistances_Offset == 0x78, "UParticleSystem::LODDistances offset is not 78");
	auto constexpr UParticleSystem_boolField88_Offset = offsetof(UParticleSystem, boolField88);
	static_assert(UParticleSystem_boolField88_Offset == 0x88, "UParticleSystem::boolField88 offset is not 88");
	auto constexpr UParticleSystem_LODSettings_Offset = offsetof(UParticleSystem, LODSettings);
	static_assert(UParticleSystem_LODSettings_Offset == 0x90, "UParticleSystem::LODSettings offset is not 90");
	auto constexpr UParticleSystem_boolFieldA0_Offset = offsetof(UParticleSystem, boolFieldA0);
	static_assert(UParticleSystem_boolFieldA0_Offset == 0xa0, "UParticleSystem::boolFieldA0 offset is not a0");
	auto constexpr UParticleSystem_FixedRelativeBoundingBox_Offset = offsetof(UParticleSystem, FixedRelativeBoundingBox);
	static_assert(UParticleSystem_FixedRelativeBoundingBox_Offset == 0xa4, "UParticleSystem::FixedRelativeBoundingBox offset is not a4");
	auto constexpr UParticleSystem_SecondsBeforeInactive_Offset = offsetof(UParticleSystem, SecondsBeforeInactive);
	static_assert(UParticleSystem_SecondsBeforeInactive_Offset == 0xc0, "UParticleSystem::SecondsBeforeInactive offset is not c0");
	auto constexpr UParticleSystem_boolFieldC4_Offset = offsetof(UParticleSystem, boolFieldC4);
	static_assert(UParticleSystem_boolFieldC4_Offset == 0xc4, "UParticleSystem::boolFieldC4 offset is not c4");
	auto constexpr UParticleSystem_Delay_Offset = offsetof(UParticleSystem, Delay);
	static_assert(UParticleSystem_Delay_Offset == 0xc8, "UParticleSystem::Delay offset is not c8");
	auto constexpr UParticleSystem_DelayLow_Offset = offsetof(UParticleSystem, DelayLow);
	static_assert(UParticleSystem_DelayLow_Offset == 0xcc, "UParticleSystem::DelayLow offset is not cc");
	auto constexpr UParticleSystem_boolFieldD0_Offset = offsetof(UParticleSystem, boolFieldD0);
	static_assert(UParticleSystem_boolFieldD0_Offset == 0xd0, "UParticleSystem::boolFieldD0 offset is not d0");
	auto constexpr UParticleSystem_boolFieldD4_Offset = offsetof(UParticleSystem, boolFieldD4);
	static_assert(UParticleSystem_boolFieldD4_Offset == 0xd4, "UParticleSystem::boolFieldD4 offset is not d4");
	auto constexpr UParticleSystem_MinTimeBetweenTicks_Offset = offsetof(UParticleSystem, MinTimeBetweenTicks);
	static_assert(UParticleSystem_MinTimeBetweenTicks_Offset == 0xd8, "UParticleSystem::MinTimeBetweenTicks offset is not d8");
	auto constexpr UParticleSystem_InsignificantReaction_Offset = offsetof(UParticleSystem, InsignificantReaction);
	static_assert(UParticleSystem_InsignificantReaction_Offset == 0xdc, "UParticleSystem::InsignificantReaction offset is not dc");
	auto constexpr UParticleSystem_InsignificanceDelay_Offset = offsetof(UParticleSystem, InsignificanceDelay);
	static_assert(UParticleSystem_InsignificanceDelay_Offset == 0xe0, "UParticleSystem::InsignificanceDelay offset is not e0");
	auto constexpr UParticleSystem_MaxSignificanceLevel_Offset = offsetof(UParticleSystem, MaxSignificanceLevel);
	static_assert(UParticleSystem_MaxSignificanceLevel_Offset == 0xe4, "UParticleSystem::MaxSignificanceLevel offset is not e4");
	auto constexpr UParticleSystem_MacroUVPosition_Offset = offsetof(UParticleSystem, MacroUVPosition);
	static_assert(UParticleSystem_MacroUVPosition_Offset == 0xe8, "UParticleSystem::MacroUVPosition offset is not e8");
	auto constexpr UParticleSystem_MacroUVRadius_Offset = offsetof(UParticleSystem, MacroUVRadius);
	static_assert(UParticleSystem_MacroUVRadius_Offset == 0xf4, "UParticleSystem::MacroUVRadius offset is not f4");
	auto constexpr UParticleSystem_OcclusionBoundsMethod_Offset = offsetof(UParticleSystem, OcclusionBoundsMethod);
	static_assert(UParticleSystem_OcclusionBoundsMethod_Offset == 0xf8, "UParticleSystem::OcclusionBoundsMethod offset is not f8");
	auto constexpr UParticleSystem_CustomOcclusionBounds_Offset = offsetof(UParticleSystem, CustomOcclusionBounds);
	static_assert(UParticleSystem_CustomOcclusionBounds_Offset == 0xfc, "UParticleSystem::CustomOcclusionBounds offset is not fc");
	auto constexpr UParticleSystem_SoloTracking_Offset = offsetof(UParticleSystem, SoloTracking);
	static_assert(UParticleSystem_SoloTracking_Offset == 0x118, "UParticleSystem::SoloTracking offset is not 118");
	auto constexpr UParticleSystem_NamedMaterialSlots_Offset = offsetof(UParticleSystem, NamedMaterialSlots);
	static_assert(UParticleSystem_NamedMaterialSlots_Offset == 0x128, "UParticleSystem::NamedMaterialSlots offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
