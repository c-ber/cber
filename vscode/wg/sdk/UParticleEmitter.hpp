#pragma once
#include "EEmitterRenderMode.hpp"
#include "EDetailMode.hpp"
#include "EParticleSignificanceLevel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleEmitter // Size: 0x178
	: public UObject // Size: 0x30
{
private:
	typedef UParticleEmitter t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1050); // id32("Class Engine.ParticleEmitter")
		return ptr;
	}
	FName EmitterName; /* Ofs: 0x30 Size: 0x8 - NameProperty Engine.ParticleEmitter.EmitterName */
	int32_t SubUVDataOffset; /* Ofs: 0x38 Size: 0x4 - IntProperty Engine.ParticleEmitter.SubUVDataOffset */
	TEnumAsByte<enum EEmitterRenderMode> EmitterRenderMode; /* Ofs: 0x3C Size: 0x1 - ByteProperty Engine.ParticleEmitter.EmitterRenderMode */
	uint8_t UnknownData3D[0x3];
	TArray<ExternalPtr<struct UParticleLODLevel>> LODLevels; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.ParticleEmitter.LODLevels */
	uint8_t boolField50;
	uint8_t UnknownData51[0x3];
	int32_t PeakActiveParticles; /* Ofs: 0x54 Size: 0x4 - IntProperty Engine.ParticleEmitter.PeakActiveParticles */
	int32_t InitialAllocationCount; /* Ofs: 0x58 Size: 0x4 - IntProperty Engine.ParticleEmitter.InitialAllocationCount */
	float MediumDetailSpawnRateScale; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.ParticleEmitter.MediumDetailSpawnRateScale */
	float QualityLevelSpawnRateScale; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.ParticleEmitter.QualityLevelSpawnRateScale */
	TEnumAsByte<enum EDetailMode> DetailMode; /* Ofs: 0x64 Size: 0x1 - ByteProperty Engine.ParticleEmitter.DetailMode */
	uint8_t UnknownData65[0x3];
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	TEnumAsByte<enum EParticleSignificanceLevel> SignificanceLevel; /* Ofs: 0x6C Size: 0x1 - EnumProperty Engine.ParticleEmitter.SignificanceLevel */
	uint8_t UnknownData6D[0x10B];


	inline bool SetEmitterName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetSubUVDataOffset(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetEmitterRenderMode(t_structHelper inst, TEnumAsByte<enum EEmitterRenderMode> value) { inst.WriteOffset(0x3C, value); }
	inline bool SetLODLevels(t_structHelper inst, TArray<ExternalPtr<struct UParticleLODLevel>> value) { inst.WriteOffset(0x40, value); }
	inline bool ConvertedModules()
	{
		return boolField50& 0x1;
	}
	inline bool SetConvertedModules(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPeakActiveParticles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x54, value); }
	inline bool SetInitialAllocationCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetMediumDetailSpawnRateScale(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
	inline bool SetQualityLevelSpawnRateScale(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetDetailMode(t_structHelper inst, TEnumAsByte<enum EDetailMode> value) { inst.WriteOffset(0x64, value); }
	inline bool bIsSoloing()
	{
		return boolField68& 0x1;
	}
	inline bool SetbIsSoloing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCookedOut()
	{
		return boolField68& 0x2;
	}
	inline bool SetbCookedOut(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisabledLODsKeepEmitterAlive()
	{
		return boolField68& 0x4;
	}
	inline bool SetbDisabledLODsKeepEmitterAlive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDisableWhenInsignficant()
	{
		return boolField68& 0x8;
	}
	inline bool SetbDisableWhenInsignficant(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetSignificanceLevel(t_structHelper inst, TEnumAsByte<enum EParticleSignificanceLevel> value) { inst.WriteOffset(0x6C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleEmitter = sizeof(UParticleEmitter); // 376
    static_assert(sizeof(UParticleEmitter) == 0x178, "Size of UParticleEmitter is not correct.");
	auto constexpr UParticleEmitter_EmitterName_Offset = offsetof(UParticleEmitter, EmitterName);
	static_assert(UParticleEmitter_EmitterName_Offset == 0x30, "UParticleEmitter::EmitterName offset is not 30");
	auto constexpr UParticleEmitter_SubUVDataOffset_Offset = offsetof(UParticleEmitter, SubUVDataOffset);
	static_assert(UParticleEmitter_SubUVDataOffset_Offset == 0x38, "UParticleEmitter::SubUVDataOffset offset is not 38");
	auto constexpr UParticleEmitter_EmitterRenderMode_Offset = offsetof(UParticleEmitter, EmitterRenderMode);
	static_assert(UParticleEmitter_EmitterRenderMode_Offset == 0x3c, "UParticleEmitter::EmitterRenderMode offset is not 3c");
	auto constexpr UParticleEmitter_LODLevels_Offset = offsetof(UParticleEmitter, LODLevels);
	static_assert(UParticleEmitter_LODLevels_Offset == 0x40, "UParticleEmitter::LODLevels offset is not 40");
	auto constexpr UParticleEmitter_boolField50_Offset = offsetof(UParticleEmitter, boolField50);
	static_assert(UParticleEmitter_boolField50_Offset == 0x50, "UParticleEmitter::boolField50 offset is not 50");
	auto constexpr UParticleEmitter_PeakActiveParticles_Offset = offsetof(UParticleEmitter, PeakActiveParticles);
	static_assert(UParticleEmitter_PeakActiveParticles_Offset == 0x54, "UParticleEmitter::PeakActiveParticles offset is not 54");
	auto constexpr UParticleEmitter_InitialAllocationCount_Offset = offsetof(UParticleEmitter, InitialAllocationCount);
	static_assert(UParticleEmitter_InitialAllocationCount_Offset == 0x58, "UParticleEmitter::InitialAllocationCount offset is not 58");
	auto constexpr UParticleEmitter_MediumDetailSpawnRateScale_Offset = offsetof(UParticleEmitter, MediumDetailSpawnRateScale);
	static_assert(UParticleEmitter_MediumDetailSpawnRateScale_Offset == 0x5c, "UParticleEmitter::MediumDetailSpawnRateScale offset is not 5c");
	auto constexpr UParticleEmitter_QualityLevelSpawnRateScale_Offset = offsetof(UParticleEmitter, QualityLevelSpawnRateScale);
	static_assert(UParticleEmitter_QualityLevelSpawnRateScale_Offset == 0x60, "UParticleEmitter::QualityLevelSpawnRateScale offset is not 60");
	auto constexpr UParticleEmitter_DetailMode_Offset = offsetof(UParticleEmitter, DetailMode);
	static_assert(UParticleEmitter_DetailMode_Offset == 0x64, "UParticleEmitter::DetailMode offset is not 64");
	auto constexpr UParticleEmitter_boolField68_Offset = offsetof(UParticleEmitter, boolField68);
	static_assert(UParticleEmitter_boolField68_Offset == 0x68, "UParticleEmitter::boolField68 offset is not 68");
	auto constexpr UParticleEmitter_SignificanceLevel_Offset = offsetof(UParticleEmitter, SignificanceLevel);
	static_assert(UParticleEmitter_SignificanceLevel_Offset == 0x6c, "UParticleEmitter::SignificanceLevel offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
