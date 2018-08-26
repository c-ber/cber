#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSubmixEffectReverbSettings // Size: 0x30
{
public:
    float Density; /* Ofs: 0x0 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.Density */
    float Diffusion; /* Ofs: 0x4 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.Diffusion */
    float Gain; /* Ofs: 0x8 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.Gain */
    float GainHF; /* Ofs: 0xC Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.GainHF */
    float DecayTime; /* Ofs: 0x10 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.DecayTime */
    float DecayHFRatio; /* Ofs: 0x14 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.DecayHFRatio */
    float ReflectionsGain; /* Ofs: 0x18 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.ReflectionsGain */
    float ReflectionsDelay; /* Ofs: 0x1C Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.ReflectionsDelay */
    float LateGain; /* Ofs: 0x20 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.LateGain */
    float LateDelay; /* Ofs: 0x24 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.LateDelay */
    float AirAbsorptionGainHF; /* Ofs: 0x28 Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.AirAbsorptionGainHF */
    float WetLevel; /* Ofs: 0x2C Size: 0x4 FloatProperty AudioMixer.SubmixEffectReverbSettings.WetLevel */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSubmixEffectReverbSettings = sizeof(FSubmixEffectReverbSettings); // 48
    static_assert(sizeof(FSubmixEffectReverbSettings) == 0x30, "Size of FSubmixEffectReverbSettings is not correct.");
	auto constexpr FSubmixEffectReverbSettings_Density_Offset = offsetof(FSubmixEffectReverbSettings, Density);
	static_assert(FSubmixEffectReverbSettings_Density_Offset == 0x0, "FSubmixEffectReverbSettings::Density offset is not 0");
	auto constexpr FSubmixEffectReverbSettings_Diffusion_Offset = offsetof(FSubmixEffectReverbSettings, Diffusion);
	static_assert(FSubmixEffectReverbSettings_Diffusion_Offset == 0x4, "FSubmixEffectReverbSettings::Diffusion offset is not 4");
	auto constexpr FSubmixEffectReverbSettings_Gain_Offset = offsetof(FSubmixEffectReverbSettings, Gain);
	static_assert(FSubmixEffectReverbSettings_Gain_Offset == 0x8, "FSubmixEffectReverbSettings::Gain offset is not 8");
	auto constexpr FSubmixEffectReverbSettings_GainHF_Offset = offsetof(FSubmixEffectReverbSettings, GainHF);
	static_assert(FSubmixEffectReverbSettings_GainHF_Offset == 0xc, "FSubmixEffectReverbSettings::GainHF offset is not c");
	auto constexpr FSubmixEffectReverbSettings_DecayTime_Offset = offsetof(FSubmixEffectReverbSettings, DecayTime);
	static_assert(FSubmixEffectReverbSettings_DecayTime_Offset == 0x10, "FSubmixEffectReverbSettings::DecayTime offset is not 10");
	auto constexpr FSubmixEffectReverbSettings_DecayHFRatio_Offset = offsetof(FSubmixEffectReverbSettings, DecayHFRatio);
	static_assert(FSubmixEffectReverbSettings_DecayHFRatio_Offset == 0x14, "FSubmixEffectReverbSettings::DecayHFRatio offset is not 14");
	auto constexpr FSubmixEffectReverbSettings_ReflectionsGain_Offset = offsetof(FSubmixEffectReverbSettings, ReflectionsGain);
	static_assert(FSubmixEffectReverbSettings_ReflectionsGain_Offset == 0x18, "FSubmixEffectReverbSettings::ReflectionsGain offset is not 18");
	auto constexpr FSubmixEffectReverbSettings_ReflectionsDelay_Offset = offsetof(FSubmixEffectReverbSettings, ReflectionsDelay);
	static_assert(FSubmixEffectReverbSettings_ReflectionsDelay_Offset == 0x1c, "FSubmixEffectReverbSettings::ReflectionsDelay offset is not 1c");
	auto constexpr FSubmixEffectReverbSettings_LateGain_Offset = offsetof(FSubmixEffectReverbSettings, LateGain);
	static_assert(FSubmixEffectReverbSettings_LateGain_Offset == 0x20, "FSubmixEffectReverbSettings::LateGain offset is not 20");
	auto constexpr FSubmixEffectReverbSettings_LateDelay_Offset = offsetof(FSubmixEffectReverbSettings, LateDelay);
	static_assert(FSubmixEffectReverbSettings_LateDelay_Offset == 0x24, "FSubmixEffectReverbSettings::LateDelay offset is not 24");
	auto constexpr FSubmixEffectReverbSettings_AirAbsorptionGainHF_Offset = offsetof(FSubmixEffectReverbSettings, AirAbsorptionGainHF);
	static_assert(FSubmixEffectReverbSettings_AirAbsorptionGainHF_Offset == 0x28, "FSubmixEffectReverbSettings::AirAbsorptionGainHF offset is not 28");
	auto constexpr FSubmixEffectReverbSettings_WetLevel_Offset = offsetof(FSubmixEffectReverbSettings, WetLevel);
	static_assert(FSubmixEffectReverbSettings_WetLevel_Offset == 0x2c, "FSubmixEffectReverbSettings::WetLevel offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
