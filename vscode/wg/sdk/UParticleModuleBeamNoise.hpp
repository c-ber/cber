#pragma once
#include "UParticleModuleBeamBase.hpp"
#include "FRawDistributionVector.hpp"
#include "FRawDistributionFloat.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleBeamNoise // Size: 0x1C0
	: public UParticleModuleBeamBase // Size: 0x38
{
private:
	typedef UParticleModuleBeamNoise t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1067); // id32("Class Engine.ParticleModuleBeamNoise")
		return ptr;
	}
	uint8_t boolField38;
	uint8_t UnknownData39[0x3];
	int32_t Frequency; /* Ofs: 0x3C Size: 0x4 - IntProperty Engine.ParticleModuleBeamNoise.Frequency */
	int32_t Frequency_LowRange; /* Ofs: 0x40 Size: 0x4 - IntProperty Engine.ParticleModuleBeamNoise.Frequency_LowRange */
	uint8_t UnknownData44[0x4];
	FRawDistributionVector NoiseRange; /* Ofs: 0x48 Size: 0x50 - StructProperty Engine.ParticleModuleBeamNoise.NoiseRange */
	FRawDistributionFloat NoiseRangeScale; /* Ofs: 0x98 Size: 0x38 - StructProperty Engine.ParticleModuleBeamNoise.NoiseRangeScale */
	uint8_t boolFieldD0;
	uint8_t UnknownDataD1[0x7];
	FRawDistributionVector NoiseSpeed; /* Ofs: 0xD8 Size: 0x50 - StructProperty Engine.ParticleModuleBeamNoise.NoiseSpeed */
	uint8_t boolField128;
	uint8_t UnknownData129[0x3];
	float NoiseLockRadius; /* Ofs: 0x12C Size: 0x4 - FloatProperty Engine.ParticleModuleBeamNoise.NoiseLockRadius */
	uint8_t boolField130;
	uint8_t UnknownData131[0x3];
	float NoiseLockTime; /* Ofs: 0x134 Size: 0x4 - FloatProperty Engine.ParticleModuleBeamNoise.NoiseLockTime */
	float NoiseTension; /* Ofs: 0x138 Size: 0x4 - FloatProperty Engine.ParticleModuleBeamNoise.NoiseTension */
	uint8_t boolField13C;
	uint8_t UnknownData13D[0x3];
	FRawDistributionFloat NoiseTangentStrength; /* Ofs: 0x140 Size: 0x38 - StructProperty Engine.ParticleModuleBeamNoise.NoiseTangentStrength */
	int32_t NoiseTessellation; /* Ofs: 0x178 Size: 0x4 - IntProperty Engine.ParticleModuleBeamNoise.NoiseTessellation */
	uint8_t boolField17C;
	uint8_t UnknownData17D[0x3];
	float FrequencyDistance; /* Ofs: 0x180 Size: 0x4 - FloatProperty Engine.ParticleModuleBeamNoise.FrequencyDistance */
	uint8_t boolField184;
	uint8_t UnknownData185[0x3];
	FRawDistributionFloat NoiseScale; /* Ofs: 0x188 Size: 0x38 - StructProperty Engine.ParticleModuleBeamNoise.NoiseScale */


	inline bool bLowFreq_Enabled()
	{
		return boolField38& 0x1;
	}
	inline bool SetbLowFreq_Enabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFrequency(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool SetFrequency_LowRange(t_structHelper inst, int32_t value) { inst.WriteOffset(0x40, value); }
	inline bool SetNoiseRange(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0x48, value); }
	inline bool SetNoiseRangeScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x98, value); }
	inline bool bNRScaleEmitterTime()
	{
		return boolFieldD0& 0x1;
	}
	inline bool SetbNRScaleEmitterTime(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNoiseSpeed(t_structHelper inst, FRawDistributionVector value) { inst.WriteOffset(0xD8, value); }
	inline bool bSmooth()
	{
		return boolField128& 0x1;
	}
	inline bool SetbSmooth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x128, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNoiseLockRadius(t_structHelper inst, float value) { inst.WriteOffset(0x12C, value); }
	inline bool bNoiseLock()
	{
		return boolField130& 0x1;
	}
	inline bool SetbNoiseLock(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOscillate()
	{
		return boolField130& 0x2;
	}
	inline bool SetbOscillate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetNoiseLockTime(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
	inline bool SetNoiseTension(t_structHelper inst, float value) { inst.WriteOffset(0x138, value); }
	inline bool bUseNoiseTangents()
	{
		return boolField13C& 0x1;
	}
	inline bool SetbUseNoiseTangents(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x13C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNoiseTangentStrength(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x140, value); }
	inline bool SetNoiseTessellation(t_structHelper inst, int32_t value) { inst.WriteOffset(0x178, value); }
	inline bool bTargetNoise()
	{
		return boolField17C& 0x1;
	}
	inline bool SetbTargetNoise(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x17C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFrequencyDistance(t_structHelper inst, float value) { inst.WriteOffset(0x180, value); }
	inline bool bApplyNoiseScale()
	{
		return boolField184& 0x1;
	}
	inline bool SetbApplyNoiseScale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x184, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNoiseScale(t_structHelper inst, FRawDistributionFloat value) { inst.WriteOffset(0x188, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleBeamNoise = sizeof(UParticleModuleBeamNoise); // 448
    static_assert(sizeof(UParticleModuleBeamNoise) == 0x1C0, "Size of UParticleModuleBeamNoise is not correct.");
	auto constexpr UParticleModuleBeamNoise_boolField38_Offset = offsetof(UParticleModuleBeamNoise, boolField38);
	static_assert(UParticleModuleBeamNoise_boolField38_Offset == 0x38, "UParticleModuleBeamNoise::boolField38 offset is not 38");
	auto constexpr UParticleModuleBeamNoise_Frequency_Offset = offsetof(UParticleModuleBeamNoise, Frequency);
	static_assert(UParticleModuleBeamNoise_Frequency_Offset == 0x3c, "UParticleModuleBeamNoise::Frequency offset is not 3c");
	auto constexpr UParticleModuleBeamNoise_Frequency_LowRange_Offset = offsetof(UParticleModuleBeamNoise, Frequency_LowRange);
	static_assert(UParticleModuleBeamNoise_Frequency_LowRange_Offset == 0x40, "UParticleModuleBeamNoise::Frequency_LowRange offset is not 40");
	auto constexpr UParticleModuleBeamNoise_NoiseRange_Offset = offsetof(UParticleModuleBeamNoise, NoiseRange);
	static_assert(UParticleModuleBeamNoise_NoiseRange_Offset == 0x48, "UParticleModuleBeamNoise::NoiseRange offset is not 48");
	auto constexpr UParticleModuleBeamNoise_NoiseRangeScale_Offset = offsetof(UParticleModuleBeamNoise, NoiseRangeScale);
	static_assert(UParticleModuleBeamNoise_NoiseRangeScale_Offset == 0x98, "UParticleModuleBeamNoise::NoiseRangeScale offset is not 98");
	auto constexpr UParticleModuleBeamNoise_boolFieldD0_Offset = offsetof(UParticleModuleBeamNoise, boolFieldD0);
	static_assert(UParticleModuleBeamNoise_boolFieldD0_Offset == 0xd0, "UParticleModuleBeamNoise::boolFieldD0 offset is not d0");
	auto constexpr UParticleModuleBeamNoise_NoiseSpeed_Offset = offsetof(UParticleModuleBeamNoise, NoiseSpeed);
	static_assert(UParticleModuleBeamNoise_NoiseSpeed_Offset == 0xd8, "UParticleModuleBeamNoise::NoiseSpeed offset is not d8");
	auto constexpr UParticleModuleBeamNoise_boolField128_Offset = offsetof(UParticleModuleBeamNoise, boolField128);
	static_assert(UParticleModuleBeamNoise_boolField128_Offset == 0x128, "UParticleModuleBeamNoise::boolField128 offset is not 128");
	auto constexpr UParticleModuleBeamNoise_NoiseLockRadius_Offset = offsetof(UParticleModuleBeamNoise, NoiseLockRadius);
	static_assert(UParticleModuleBeamNoise_NoiseLockRadius_Offset == 0x12c, "UParticleModuleBeamNoise::NoiseLockRadius offset is not 12c");
	auto constexpr UParticleModuleBeamNoise_boolField130_Offset = offsetof(UParticleModuleBeamNoise, boolField130);
	static_assert(UParticleModuleBeamNoise_boolField130_Offset == 0x130, "UParticleModuleBeamNoise::boolField130 offset is not 130");
	auto constexpr UParticleModuleBeamNoise_NoiseLockTime_Offset = offsetof(UParticleModuleBeamNoise, NoiseLockTime);
	static_assert(UParticleModuleBeamNoise_NoiseLockTime_Offset == 0x134, "UParticleModuleBeamNoise::NoiseLockTime offset is not 134");
	auto constexpr UParticleModuleBeamNoise_NoiseTension_Offset = offsetof(UParticleModuleBeamNoise, NoiseTension);
	static_assert(UParticleModuleBeamNoise_NoiseTension_Offset == 0x138, "UParticleModuleBeamNoise::NoiseTension offset is not 138");
	auto constexpr UParticleModuleBeamNoise_boolField13C_Offset = offsetof(UParticleModuleBeamNoise, boolField13C);
	static_assert(UParticleModuleBeamNoise_boolField13C_Offset == 0x13c, "UParticleModuleBeamNoise::boolField13C offset is not 13c");
	auto constexpr UParticleModuleBeamNoise_NoiseTangentStrength_Offset = offsetof(UParticleModuleBeamNoise, NoiseTangentStrength);
	static_assert(UParticleModuleBeamNoise_NoiseTangentStrength_Offset == 0x140, "UParticleModuleBeamNoise::NoiseTangentStrength offset is not 140");
	auto constexpr UParticleModuleBeamNoise_NoiseTessellation_Offset = offsetof(UParticleModuleBeamNoise, NoiseTessellation);
	static_assert(UParticleModuleBeamNoise_NoiseTessellation_Offset == 0x178, "UParticleModuleBeamNoise::NoiseTessellation offset is not 178");
	auto constexpr UParticleModuleBeamNoise_boolField17C_Offset = offsetof(UParticleModuleBeamNoise, boolField17C);
	static_assert(UParticleModuleBeamNoise_boolField17C_Offset == 0x17c, "UParticleModuleBeamNoise::boolField17C offset is not 17c");
	auto constexpr UParticleModuleBeamNoise_FrequencyDistance_Offset = offsetof(UParticleModuleBeamNoise, FrequencyDistance);
	static_assert(UParticleModuleBeamNoise_FrequencyDistance_Offset == 0x180, "UParticleModuleBeamNoise::FrequencyDistance offset is not 180");
	auto constexpr UParticleModuleBeamNoise_boolField184_Offset = offsetof(UParticleModuleBeamNoise, boolField184);
	static_assert(UParticleModuleBeamNoise_boolField184_Offset == 0x184, "UParticleModuleBeamNoise::boolField184 offset is not 184");
	auto constexpr UParticleModuleBeamNoise_NoiseScale_Offset = offsetof(UParticleModuleBeamNoise, NoiseScale);
	static_assert(UParticleModuleBeamNoise_NoiseScale_Offset == 0x188, "UParticleModuleBeamNoise::NoiseScale offset is not 188");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
