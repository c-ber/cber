#pragma once
#include "UVehicleWheel.hpp"
#include "FWheeledEffectPool.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleWheel // Size: 0x270
	: public UVehicleWheel // Size: 0x110
{
private:
	typedef UTslVehicleWheel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1315); // id32("Class TslGame.TslVehicleWheel")
		return ptr;
	}
	float Health; /* Ofs: 0x110 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.Health */
	float HealthMax; /* Ofs: 0x114 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.HealthMax */
	FName TireBoneName; /* Ofs: 0x118 Size: 0x8 - NameProperty TslGame.TslVehicleWheel.TireBoneName */
	uint8_t boolField120;
	uint8_t UnknownData121[0x3];
	int32_t TireLinkIndex; /* Ofs: 0x124 Size: 0x4 - IntProperty TslGame.TslVehicleWheel.TireLinkIndex */
	FWheeledEffectPool WheeledEffectMap; /* Ofs: 0x128 Size: 0x50 - StructProperty TslGame.TslVehicleWheel.WheeledEffectMap */
	float LongSlipSkidThreshold; /* Ofs: 0x178 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.LongSlipSkidThreshold */
	float LateralSlipSkidThreshold; /* Ofs: 0x17C Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.LateralSlipSkidThreshold */
	float SpringCompressionLandingThreshold; /* Ofs: 0x180 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.SpringCompressionLandingThreshold */
	uint8_t boolField184;
	uint8_t UnknownData185[0x3];
	ExternalPtr<struct UTslWheelSuspensionAudioData> SuspensionAudioData; /* Ofs: 0x188 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.SuspensionAudioData */
	FVector WheelEffectOffset; /* Ofs: 0x190 Size: 0xC - StructProperty TslGame.TslVehicleWheel.WheelEffectOffset */
	uint8_t UnknownData19C[0x4];
	ExternalPtr<struct UTslWheelEffectType> RollEffect; /* Ofs: 0x1A0 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.RollEffect */
	ExternalPtr<struct UTslWheelEffectType> SkidAccelEffect; /* Ofs: 0x1A8 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.SkidAccelEffect */
	ExternalPtr<struct UTslWheelEffectType> SkidEffect; /* Ofs: 0x1B0 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.SkidEffect */
	ExternalPtr<struct UClass> PuncturedParticleClass; /* Ofs: 0x1B8 Size: 0x8 - ClassProperty TslGame.TslVehicleWheel.PuncturedParticleClass */
	ExternalPtr<struct UClass> PuncturedSparkParticleClass; /* Ofs: 0x1C0 Size: 0x8 - ClassProperty TslGame.TslVehicleWheel.PuncturedSparkParticleClass */
	float slipThresholdForPunkSpark; /* Ofs: 0x1C8 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.slipThresholdForPunkSpark */
	uint8_t UnknownData1CC[0x4];
	ExternalPtr<struct UAkAudioEvent> LandingSound; /* Ofs: 0x1D0 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.LandingSound */
	uint8_t boolField1D8;
	uint8_t UnknownData1D9[0x3];
	float PunctureForce; /* Ofs: 0x1DC Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.PunctureForce */
	float PunctureVelocityScalar; /* Ofs: 0x1E0 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.PunctureVelocityScalar */
	uint8_t UnknownData1E4[0xC];
	ExternalPtr<struct UTslParticle> TslParticleRoll; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.TslParticleRoll */
	ExternalPtr<struct UTslParticle> TslParticleSkid; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.TslParticleSkid */
	ExternalPtr<struct UTslParticle> TslParticleAccelSkid; /* Ofs: 0x200 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.TslParticleAccelSkid */
	ExternalPtr<struct UTslParticle> TslParticlePunctureSpark; /* Ofs: 0x208 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.TslParticlePunctureSpark */
	uint8_t UnknownData210[0x8];
	ExternalPtr<struct UAkComponent> AudioCom; /* Ofs: 0x218 Size: 0x8 - ObjectProperty TslGame.TslVehicleWheel.AudioCom */
	float MinZVelocityForSuspensionSound; /* Ofs: 0x220 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.MinZVelocityForSuspensionSound */
	uint8_t UnknownData224[0x3C];
	float TotalSpeedKmPerHour; /* Ofs: 0x260 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.TotalSpeedKmPerHour */
	float Slip; /* Ofs: 0x264 Size: 0x4 - FloatProperty TslGame.TslVehicleWheel.Slip */
	uint8_t boolField268;
	uint8_t boolField269;
	uint8_t boolField26A;
	uint8_t boolField26B;
	uint8_t UnknownData26C[0x4];


	inline bool SetHealth(t_structHelper inst, float value) { inst.WriteOffset(0x110, value); }
	inline bool SetHealthMax(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetTireBoneName(t_structHelper inst, FName value) { inst.WriteOffset(0x118, value); }
	inline bool bUseTireLink()
	{
		return boolField120& 0x1;
	}
	inline bool SetbUseTireLink(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x120, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTireLinkIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x124, value); }
	inline bool SetWheeledEffectMap(t_structHelper inst, FWheeledEffectPool value) { inst.WriteOffset(0x128, value); }
	inline bool SetLongSlipSkidThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x178, value); }
	inline bool SetLateralSlipSkidThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x17C, value); }
	inline bool SetSpringCompressionLandingThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x180, value); }
	inline bool bManualSuspensionSoundControl()
	{
		return boolField184& 0x1;
	}
	inline bool SetbManualSuspensionSoundControl(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x184, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSuspensionAudioData(t_structHelper inst, ExternalPtr<struct UTslWheelSuspensionAudioData> value) { inst.WriteOffset(0x188, value); }
	inline bool SetWheelEffectOffset(t_structHelper inst, FVector value) { inst.WriteOffset(0x190, value); }
	inline bool SetRollEffect(t_structHelper inst, ExternalPtr<struct UTslWheelEffectType> value) { inst.WriteOffset(0x1A0, value); }
	inline bool SetSkidAccelEffect(t_structHelper inst, ExternalPtr<struct UTslWheelEffectType> value) { inst.WriteOffset(0x1A8, value); }
	inline bool SetSkidEffect(t_structHelper inst, ExternalPtr<struct UTslWheelEffectType> value) { inst.WriteOffset(0x1B0, value); }
	inline bool SetPuncturedParticleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetPuncturedSparkParticleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetslipThresholdForPunkSpark(t_structHelper inst, float value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetLandingSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x1D0, value); }
	inline bool bApplyForceOnPuncture()
	{
		return boolField1D8& 0x1;
	}
	inline bool SetbApplyForceOnPuncture(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPunctureForce(t_structHelper inst, float value) { inst.WriteOffset(0x1DC, value); }
	inline bool SetPunctureVelocityScalar(t_structHelper inst, float value) { inst.WriteOffset(0x1E0, value); }
	inline bool SetTslParticleRoll(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetTslParticleSkid(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetTslParticleAccelSkid(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x200, value); }
	inline bool SetTslParticlePunctureSpark(t_structHelper inst, ExternalPtr<struct UTslParticle> value) { inst.WriteOffset(0x208, value); }
	inline bool SetAudioCom(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x218, value); }
	inline bool SetMinZVelocityForSuspensionSound(t_structHelper inst, float value) { inst.WriteOffset(0x220, value); }
	inline bool SetTotalSpeedKmPerHour(t_structHelper inst, float value) { inst.WriteOffset(0x260, value); }
	inline bool SetSlip(t_structHelper inst, float value) { inst.WriteOffset(0x264, value); }
	inline bool UseRoll()
	{
		return boolField268& 0x1;
	}
	inline bool SetUseRoll(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x268, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool UseSkid()
	{
		return boolField269& 0x1;
	}
	inline bool SetUseSkid(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x269, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool UseAccelSkid()
	{
		return boolField26A& 0x1;
	}
	inline bool SetUseAccelSkid(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x26A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHasLastStatus()
	{
		return boolField26B& 0x1;
	}
	inline bool SetbHasLastStatus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x26B, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleWheel = sizeof(UTslVehicleWheel); // 624
    static_assert(sizeof(UTslVehicleWheel) == 0x270, "Size of UTslVehicleWheel is not correct.");
	auto constexpr UTslVehicleWheel_Health_Offset = offsetof(UTslVehicleWheel, Health);
	static_assert(UTslVehicleWheel_Health_Offset == 0x110, "UTslVehicleWheel::Health offset is not 110");
	auto constexpr UTslVehicleWheel_HealthMax_Offset = offsetof(UTslVehicleWheel, HealthMax);
	static_assert(UTslVehicleWheel_HealthMax_Offset == 0x114, "UTslVehicleWheel::HealthMax offset is not 114");
	auto constexpr UTslVehicleWheel_TireBoneName_Offset = offsetof(UTslVehicleWheel, TireBoneName);
	static_assert(UTslVehicleWheel_TireBoneName_Offset == 0x118, "UTslVehicleWheel::TireBoneName offset is not 118");
	auto constexpr UTslVehicleWheel_boolField120_Offset = offsetof(UTslVehicleWheel, boolField120);
	static_assert(UTslVehicleWheel_boolField120_Offset == 0x120, "UTslVehicleWheel::boolField120 offset is not 120");
	auto constexpr UTslVehicleWheel_TireLinkIndex_Offset = offsetof(UTslVehicleWheel, TireLinkIndex);
	static_assert(UTslVehicleWheel_TireLinkIndex_Offset == 0x124, "UTslVehicleWheel::TireLinkIndex offset is not 124");
	auto constexpr UTslVehicleWheel_WheeledEffectMap_Offset = offsetof(UTslVehicleWheel, WheeledEffectMap);
	static_assert(UTslVehicleWheel_WheeledEffectMap_Offset == 0x128, "UTslVehicleWheel::WheeledEffectMap offset is not 128");
	auto constexpr UTslVehicleWheel_LongSlipSkidThreshold_Offset = offsetof(UTslVehicleWheel, LongSlipSkidThreshold);
	static_assert(UTslVehicleWheel_LongSlipSkidThreshold_Offset == 0x178, "UTslVehicleWheel::LongSlipSkidThreshold offset is not 178");
	auto constexpr UTslVehicleWheel_LateralSlipSkidThreshold_Offset = offsetof(UTslVehicleWheel, LateralSlipSkidThreshold);
	static_assert(UTslVehicleWheel_LateralSlipSkidThreshold_Offset == 0x17c, "UTslVehicleWheel::LateralSlipSkidThreshold offset is not 17c");
	auto constexpr UTslVehicleWheel_SpringCompressionLandingThreshold_Offset = offsetof(UTslVehicleWheel, SpringCompressionLandingThreshold);
	static_assert(UTslVehicleWheel_SpringCompressionLandingThreshold_Offset == 0x180, "UTslVehicleWheel::SpringCompressionLandingThreshold offset is not 180");
	auto constexpr UTslVehicleWheel_boolField184_Offset = offsetof(UTslVehicleWheel, boolField184);
	static_assert(UTslVehicleWheel_boolField184_Offset == 0x184, "UTslVehicleWheel::boolField184 offset is not 184");
	auto constexpr UTslVehicleWheel_SuspensionAudioData_Offset = offsetof(UTslVehicleWheel, SuspensionAudioData);
	static_assert(UTslVehicleWheel_SuspensionAudioData_Offset == 0x188, "UTslVehicleWheel::SuspensionAudioData offset is not 188");
	auto constexpr UTslVehicleWheel_WheelEffectOffset_Offset = offsetof(UTslVehicleWheel, WheelEffectOffset);
	static_assert(UTslVehicleWheel_WheelEffectOffset_Offset == 0x190, "UTslVehicleWheel::WheelEffectOffset offset is not 190");
	auto constexpr UTslVehicleWheel_RollEffect_Offset = offsetof(UTslVehicleWheel, RollEffect);
	static_assert(UTslVehicleWheel_RollEffect_Offset == 0x1a0, "UTslVehicleWheel::RollEffect offset is not 1a0");
	auto constexpr UTslVehicleWheel_SkidAccelEffect_Offset = offsetof(UTslVehicleWheel, SkidAccelEffect);
	static_assert(UTslVehicleWheel_SkidAccelEffect_Offset == 0x1a8, "UTslVehicleWheel::SkidAccelEffect offset is not 1a8");
	auto constexpr UTslVehicleWheel_SkidEffect_Offset = offsetof(UTslVehicleWheel, SkidEffect);
	static_assert(UTslVehicleWheel_SkidEffect_Offset == 0x1b0, "UTslVehicleWheel::SkidEffect offset is not 1b0");
	auto constexpr UTslVehicleWheel_PuncturedParticleClass_Offset = offsetof(UTslVehicleWheel, PuncturedParticleClass);
	static_assert(UTslVehicleWheel_PuncturedParticleClass_Offset == 0x1b8, "UTslVehicleWheel::PuncturedParticleClass offset is not 1b8");
	auto constexpr UTslVehicleWheel_PuncturedSparkParticleClass_Offset = offsetof(UTslVehicleWheel, PuncturedSparkParticleClass);
	static_assert(UTslVehicleWheel_PuncturedSparkParticleClass_Offset == 0x1c0, "UTslVehicleWheel::PuncturedSparkParticleClass offset is not 1c0");
	auto constexpr UTslVehicleWheel_slipThresholdForPunkSpark_Offset = offsetof(UTslVehicleWheel, slipThresholdForPunkSpark);
	static_assert(UTslVehicleWheel_slipThresholdForPunkSpark_Offset == 0x1c8, "UTslVehicleWheel::slipThresholdForPunkSpark offset is not 1c8");
	auto constexpr UTslVehicleWheel_LandingSound_Offset = offsetof(UTslVehicleWheel, LandingSound);
	static_assert(UTslVehicleWheel_LandingSound_Offset == 0x1d0, "UTslVehicleWheel::LandingSound offset is not 1d0");
	auto constexpr UTslVehicleWheel_boolField1D8_Offset = offsetof(UTslVehicleWheel, boolField1D8);
	static_assert(UTslVehicleWheel_boolField1D8_Offset == 0x1d8, "UTslVehicleWheel::boolField1D8 offset is not 1d8");
	auto constexpr UTslVehicleWheel_PunctureForce_Offset = offsetof(UTslVehicleWheel, PunctureForce);
	static_assert(UTslVehicleWheel_PunctureForce_Offset == 0x1dc, "UTslVehicleWheel::PunctureForce offset is not 1dc");
	auto constexpr UTslVehicleWheel_PunctureVelocityScalar_Offset = offsetof(UTslVehicleWheel, PunctureVelocityScalar);
	static_assert(UTslVehicleWheel_PunctureVelocityScalar_Offset == 0x1e0, "UTslVehicleWheel::PunctureVelocityScalar offset is not 1e0");
	auto constexpr UTslVehicleWheel_TslParticleRoll_Offset = offsetof(UTslVehicleWheel, TslParticleRoll);
	static_assert(UTslVehicleWheel_TslParticleRoll_Offset == 0x1f0, "UTslVehicleWheel::TslParticleRoll offset is not 1f0");
	auto constexpr UTslVehicleWheel_TslParticleSkid_Offset = offsetof(UTslVehicleWheel, TslParticleSkid);
	static_assert(UTslVehicleWheel_TslParticleSkid_Offset == 0x1f8, "UTslVehicleWheel::TslParticleSkid offset is not 1f8");
	auto constexpr UTslVehicleWheel_TslParticleAccelSkid_Offset = offsetof(UTslVehicleWheel, TslParticleAccelSkid);
	static_assert(UTslVehicleWheel_TslParticleAccelSkid_Offset == 0x200, "UTslVehicleWheel::TslParticleAccelSkid offset is not 200");
	auto constexpr UTslVehicleWheel_TslParticlePunctureSpark_Offset = offsetof(UTslVehicleWheel, TslParticlePunctureSpark);
	static_assert(UTslVehicleWheel_TslParticlePunctureSpark_Offset == 0x208, "UTslVehicleWheel::TslParticlePunctureSpark offset is not 208");
	auto constexpr UTslVehicleWheel_AudioCom_Offset = offsetof(UTslVehicleWheel, AudioCom);
	static_assert(UTslVehicleWheel_AudioCom_Offset == 0x218, "UTslVehicleWheel::AudioCom offset is not 218");
	auto constexpr UTslVehicleWheel_MinZVelocityForSuspensionSound_Offset = offsetof(UTslVehicleWheel, MinZVelocityForSuspensionSound);
	static_assert(UTslVehicleWheel_MinZVelocityForSuspensionSound_Offset == 0x220, "UTslVehicleWheel::MinZVelocityForSuspensionSound offset is not 220");
	auto constexpr UTslVehicleWheel_TotalSpeedKmPerHour_Offset = offsetof(UTslVehicleWheel, TotalSpeedKmPerHour);
	static_assert(UTslVehicleWheel_TotalSpeedKmPerHour_Offset == 0x260, "UTslVehicleWheel::TotalSpeedKmPerHour offset is not 260");
	auto constexpr UTslVehicleWheel_Slip_Offset = offsetof(UTslVehicleWheel, Slip);
	static_assert(UTslVehicleWheel_Slip_Offset == 0x264, "UTslVehicleWheel::Slip offset is not 264");
	auto constexpr UTslVehicleWheel_boolField268_Offset = offsetof(UTslVehicleWheel, boolField268);
	static_assert(UTslVehicleWheel_boolField268_Offset == 0x268, "UTslVehicleWheel::boolField268 offset is not 268");
	auto constexpr UTslVehicleWheel_boolField269_Offset = offsetof(UTslVehicleWheel, boolField269);
	static_assert(UTslVehicleWheel_boolField269_Offset == 0x269, "UTslVehicleWheel::boolField269 offset is not 269");
	auto constexpr UTslVehicleWheel_boolField26A_Offset = offsetof(UTslVehicleWheel, boolField26A);
	static_assert(UTslVehicleWheel_boolField26A_Offset == 0x26a, "UTslVehicleWheel::boolField26A offset is not 26a");
	auto constexpr UTslVehicleWheel_boolField26B_Offset = offsetof(UTslVehicleWheel, boolField26B);
	static_assert(UTslVehicleWheel_boolField26B_Offset == 0x26b, "UTslVehicleWheel::boolField26B offset is not 26b");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
