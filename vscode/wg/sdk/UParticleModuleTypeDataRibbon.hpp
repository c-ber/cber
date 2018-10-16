#pragma once
#include "UParticleModuleTypeDataBase.hpp"
#include "ETrailsRenderAxisOption.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleTypeDataRibbon // Size: 0x68
	: public UParticleModuleTypeDataBase // Size: 0x38
{
private:
	typedef UParticleModuleTypeDataRibbon t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1156); // id32("Class Engine.ParticleModuleTypeDataRibbon")
		return ptr;
	}
	int32_t MaxTessellationBetweenParticles; /* Ofs: 0x38 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataRibbon.MaxTessellationBetweenParticles */
	int32_t SheetsPerTrail; /* Ofs: 0x3C Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataRibbon.SheetsPerTrail */
	int32_t MaxTrailCount; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataRibbon.MaxTrailCount */
	int32_t MaxParticleInTrailCount; /* Ofs: 0x44 Size: 0x4 - IntProperty Engine.ParticleModuleTypeDataRibbon.MaxParticleInTrailCount */
	uint8_t boolField48;
	uint8_t UnknownData49[0x3];
	TEnumAsByte<enum ETrailsRenderAxisOption> RenderAxis; /* Ofs: 0x4C Size: 0x1 - ByteProperty Engine.ParticleModuleTypeDataRibbon.RenderAxis */
	uint8_t UnknownData4D[0x3];
	float TangentSpawningScalar; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataRibbon.TangentSpawningScalar */
	uint8_t boolField54;
	uint8_t UnknownData55[0x3];
	float TilingDistance; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataRibbon.TilingDistance */
	float DistanceTessellationStepSize; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataRibbon.DistanceTessellationStepSize */
	uint8_t boolField60;
	uint8_t UnknownData61[0x3];
	float TangentTessellationScalar; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.ParticleModuleTypeDataRibbon.TangentTessellationScalar */


	inline bool SetMaxTessellationBetweenParticles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetSheetsPerTrail(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetMaxTrailCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetMaxParticleInTrailCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44, value); }
	inline bool bDeadTrailsOnDeactivate()
	{
		return boolField48& 0x1;
	}
	inline bool SetbDeadTrailsOnDeactivate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDeadTrailsOnSourceLoss()
	{
		return boolField48& 0x2;
	}
	inline bool SetbDeadTrailsOnSourceLoss(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bClipSourceSegement()
	{
		return boolField48& 0x4;
	}
	inline bool SetbClipSourceSegement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnablePreviousTangentRecalculation()
	{
		return boolField48& 0x8;
	}
	inline bool SetbEnablePreviousTangentRecalculation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bTangentRecalculationEveryFrame()
	{
		return boolField48& 0x10;
	}
	inline bool SetbTangentRecalculationEveryFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSpawnInitialParticle()
	{
		return boolField48& 0x20;
	}
	inline bool SetbSpawnInitialParticle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x48, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool SetRenderAxis(t_structHelper inst, TEnumAsByte<enum ETrailsRenderAxisOption> value) { inst.WriteOffset(0x4C, value); }
	inline bool SetTangentSpawningScalar(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool bRenderGeometry()
	{
		return boolField54& 0x1;
	}
	inline bool SetbRenderGeometry(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRenderSpawnPoints()
	{
		return boolField54& 0x2;
	}
	inline bool SetbRenderSpawnPoints(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bRenderTangents()
	{
		return boolField54& 0x4;
	}
	inline bool SetbRenderTangents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bRenderTessellation()
	{
		return boolField54& 0x8;
	}
	inline bool SetbRenderTessellation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x54, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetTilingDistance(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetDistanceTessellationStepSize(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool bEnableTangentDiffInterpScale()
	{
		return boolField60& 0x1;
	}
	inline bool SetbEnableTangentDiffInterpScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x60, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTangentTessellationScalar(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleTypeDataRibbon = sizeof(UParticleModuleTypeDataRibbon); // 104
    static_assert(sizeof(UParticleModuleTypeDataRibbon) == 0x68, "Size of UParticleModuleTypeDataRibbon is not correct.");
	auto constexpr UParticleModuleTypeDataRibbon_MaxTessellationBetweenParticles_Offset = offsetof(UParticleModuleTypeDataRibbon, MaxTessellationBetweenParticles);
	static_assert(UParticleModuleTypeDataRibbon_MaxTessellationBetweenParticles_Offset == 0x38, "UParticleModuleTypeDataRibbon::MaxTessellationBetweenParticles offset is not 38");
	auto constexpr UParticleModuleTypeDataRibbon_SheetsPerTrail_Offset = offsetof(UParticleModuleTypeDataRibbon, SheetsPerTrail);
	static_assert(UParticleModuleTypeDataRibbon_SheetsPerTrail_Offset == 0x3c, "UParticleModuleTypeDataRibbon::SheetsPerTrail offset is not 3c");
	auto constexpr UParticleModuleTypeDataRibbon_MaxTrailCount_Offset = offsetof(UParticleModuleTypeDataRibbon, MaxTrailCount);
	static_assert(UParticleModuleTypeDataRibbon_MaxTrailCount_Offset == 0x40, "UParticleModuleTypeDataRibbon::MaxTrailCount offset is not 40");
	auto constexpr UParticleModuleTypeDataRibbon_MaxParticleInTrailCount_Offset = offsetof(UParticleModuleTypeDataRibbon, MaxParticleInTrailCount);
	static_assert(UParticleModuleTypeDataRibbon_MaxParticleInTrailCount_Offset == 0x44, "UParticleModuleTypeDataRibbon::MaxParticleInTrailCount offset is not 44");
	auto constexpr UParticleModuleTypeDataRibbon_boolField48_Offset = offsetof(UParticleModuleTypeDataRibbon, boolField48);
	static_assert(UParticleModuleTypeDataRibbon_boolField48_Offset == 0x48, "UParticleModuleTypeDataRibbon::boolField48 offset is not 48");
	auto constexpr UParticleModuleTypeDataRibbon_RenderAxis_Offset = offsetof(UParticleModuleTypeDataRibbon, RenderAxis);
	static_assert(UParticleModuleTypeDataRibbon_RenderAxis_Offset == 0x4c, "UParticleModuleTypeDataRibbon::RenderAxis offset is not 4c");
	auto constexpr UParticleModuleTypeDataRibbon_TangentSpawningScalar_Offset = offsetof(UParticleModuleTypeDataRibbon, TangentSpawningScalar);
	static_assert(UParticleModuleTypeDataRibbon_TangentSpawningScalar_Offset == 0x50, "UParticleModuleTypeDataRibbon::TangentSpawningScalar offset is not 50");
	auto constexpr UParticleModuleTypeDataRibbon_boolField54_Offset = offsetof(UParticleModuleTypeDataRibbon, boolField54);
	static_assert(UParticleModuleTypeDataRibbon_boolField54_Offset == 0x54, "UParticleModuleTypeDataRibbon::boolField54 offset is not 54");
	auto constexpr UParticleModuleTypeDataRibbon_TilingDistance_Offset = offsetof(UParticleModuleTypeDataRibbon, TilingDistance);
	static_assert(UParticleModuleTypeDataRibbon_TilingDistance_Offset == 0x58, "UParticleModuleTypeDataRibbon::TilingDistance offset is not 58");
	auto constexpr UParticleModuleTypeDataRibbon_DistanceTessellationStepSize_Offset = offsetof(UParticleModuleTypeDataRibbon, DistanceTessellationStepSize);
	static_assert(UParticleModuleTypeDataRibbon_DistanceTessellationStepSize_Offset == 0x5c, "UParticleModuleTypeDataRibbon::DistanceTessellationStepSize offset is not 5c");
	auto constexpr UParticleModuleTypeDataRibbon_boolField60_Offset = offsetof(UParticleModuleTypeDataRibbon, boolField60);
	static_assert(UParticleModuleTypeDataRibbon_boolField60_Offset == 0x60, "UParticleModuleTypeDataRibbon::boolField60 offset is not 60");
	auto constexpr UParticleModuleTypeDataRibbon_TangentTessellationScalar_Offset = offsetof(UParticleModuleTypeDataRibbon, TangentTessellationScalar);
	static_assert(UParticleModuleTypeDataRibbon_TangentTessellationScalar_Offset == 0x64, "UParticleModuleTypeDataRibbon::TangentTessellationScalar offset is not 64");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
