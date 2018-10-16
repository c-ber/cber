#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UReverbEffect // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UReverbEffect t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1189); // id32("Class Engine.ReverbEffect")
		return ptr;
	}
	float Density; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.ReverbEffect.Density */
	float Diffusion; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.ReverbEffect.Diffusion */
	float Gain; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.ReverbEffect.Gain */
	float GainHF; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.ReverbEffect.GainHF */
	float DecayTime; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.ReverbEffect.DecayTime */
	float DecayHFRatio; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.ReverbEffect.DecayHFRatio */
	float ReflectionsGain; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.ReverbEffect.ReflectionsGain */
	float ReflectionsDelay; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.ReverbEffect.ReflectionsDelay */
	float LateGain; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.ReverbEffect.LateGain */
	float LateDelay; /* Ofs: 0x54 Size: 0x4 - FloatProperty Engine.ReverbEffect.LateDelay */
	float AirAbsorptionGainHF; /* Ofs: 0x58 Size: 0x4 - FloatProperty Engine.ReverbEffect.AirAbsorptionGainHF */
	float RoomRolloffFactor; /* Ofs: 0x5C Size: 0x4 - FloatProperty Engine.ReverbEffect.RoomRolloffFactor */


	inline bool SetDensity(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetDiffusion(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetGain(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetGainHF(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetDecayTime(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetDecayHFRatio(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetReflectionsGain(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetReflectionsDelay(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetLateGain(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
	inline bool SetLateDelay(t_structHelper inst, float value) { inst.WriteOffset(0x54, value); }
	inline bool SetAirAbsorptionGainHF(t_structHelper inst, float value) { inst.WriteOffset(0x58, value); }
	inline bool SetRoomRolloffFactor(t_structHelper inst, float value) { inst.WriteOffset(0x5C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUReverbEffect = sizeof(UReverbEffect); // 96
    static_assert(sizeof(UReverbEffect) == 0x60, "Size of UReverbEffect is not correct.");
	auto constexpr UReverbEffect_Density_Offset = offsetof(UReverbEffect, Density);
	static_assert(UReverbEffect_Density_Offset == 0x30, "UReverbEffect::Density offset is not 30");
	auto constexpr UReverbEffect_Diffusion_Offset = offsetof(UReverbEffect, Diffusion);
	static_assert(UReverbEffect_Diffusion_Offset == 0x34, "UReverbEffect::Diffusion offset is not 34");
	auto constexpr UReverbEffect_Gain_Offset = offsetof(UReverbEffect, Gain);
	static_assert(UReverbEffect_Gain_Offset == 0x38, "UReverbEffect::Gain offset is not 38");
	auto constexpr UReverbEffect_GainHF_Offset = offsetof(UReverbEffect, GainHF);
	static_assert(UReverbEffect_GainHF_Offset == 0x3c, "UReverbEffect::GainHF offset is not 3c");
	auto constexpr UReverbEffect_DecayTime_Offset = offsetof(UReverbEffect, DecayTime);
	static_assert(UReverbEffect_DecayTime_Offset == 0x40, "UReverbEffect::DecayTime offset is not 40");
	auto constexpr UReverbEffect_DecayHFRatio_Offset = offsetof(UReverbEffect, DecayHFRatio);
	static_assert(UReverbEffect_DecayHFRatio_Offset == 0x44, "UReverbEffect::DecayHFRatio offset is not 44");
	auto constexpr UReverbEffect_ReflectionsGain_Offset = offsetof(UReverbEffect, ReflectionsGain);
	static_assert(UReverbEffect_ReflectionsGain_Offset == 0x48, "UReverbEffect::ReflectionsGain offset is not 48");
	auto constexpr UReverbEffect_ReflectionsDelay_Offset = offsetof(UReverbEffect, ReflectionsDelay);
	static_assert(UReverbEffect_ReflectionsDelay_Offset == 0x4c, "UReverbEffect::ReflectionsDelay offset is not 4c");
	auto constexpr UReverbEffect_LateGain_Offset = offsetof(UReverbEffect, LateGain);
	static_assert(UReverbEffect_LateGain_Offset == 0x50, "UReverbEffect::LateGain offset is not 50");
	auto constexpr UReverbEffect_LateDelay_Offset = offsetof(UReverbEffect, LateDelay);
	static_assert(UReverbEffect_LateDelay_Offset == 0x54, "UReverbEffect::LateDelay offset is not 54");
	auto constexpr UReverbEffect_AirAbsorptionGainHF_Offset = offsetof(UReverbEffect, AirAbsorptionGainHF);
	static_assert(UReverbEffect_AirAbsorptionGainHF_Offset == 0x58, "UReverbEffect::AirAbsorptionGainHF offset is not 58");
	auto constexpr UReverbEffect_RoomRolloffFactor_Offset = offsetof(UReverbEffect, RoomRolloffFactor);
	static_assert(UReverbEffect_RoomRolloffFactor_Offset == 0x5c, "UReverbEffect::RoomRolloffFactor offset is not 5c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
