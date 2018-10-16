#pragma once
#include "USceneComponent.hpp"
#include "FSoundAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USynthComponent // Size: 0x660
	: public USceneComponent // Size: 0x490
{
private:
	typedef USynthComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(372); // id32("Class AudioMixer.SynthComponent")
		return ptr;
	}
	uint8_t boolField490;
	uint8_t UnknownData491[0x7];
	ExternalPtr<struct USoundAttenuation> AttenuationSettings; /* Ofs: 0x498 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.AttenuationSettings */
	FSoundAttenuationSettings AttenuationOverrides; /* Ofs: 0x4A0 Size: 0x130 - StructProperty AudioMixer.SynthComponent.AttenuationOverrides */
	ExternalPtr<struct USoundConcurrency> ConcurrencySettings; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.ConcurrencySettings */
	ExternalPtr<struct USoundClass> SoundClass; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.SoundClass */
	ExternalPtr<struct USoundEffectSourcePresetChain> SourceEffectChain; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.SourceEffectChain */
	float DefaultMasterReverbSendAmount; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty AudioMixer.SynthComponent.DefaultMasterReverbSendAmount */
	uint8_t UnknownData5EC[0x4];
	ExternalPtr<struct USoundSubmix> SoundSubmix; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.SoundSubmix */
	TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; /* Ofs: 0x5F8 Size: 0x10 - ArrayProperty AudioMixer.SynthComponent.SoundSubmixSends */
	uint8_t UnknownData608[0x8];
	ExternalPtr<struct USynthSound> Synth; /* Ofs: 0x610 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.Synth */
	ExternalPtr<struct UAudioComponent> AudioComponent; /* Ofs: 0x618 Size: 0x8 - ObjectProperty AudioMixer.SynthComponent.AudioComponent */
	uint8_t UnknownData620[0x40];


	inline bool bAutoDestroy()
	{
		return boolField490& 0x1;
	}
	inline bool SetbAutoDestroy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStopWhenOwnerDestroyed()
	{
		return boolField490& 0x2;
	}
	inline bool SetbStopWhenOwnerDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAllowSpatialization()
	{
		return boolField490& 0x4;
	}
	inline bool SetbAllowSpatialization(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bOverrideAttenuation()
	{
		return boolField490& 0x8;
	}
	inline bool SetbOverrideAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x490, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetAttenuationSettings(t_structHelper inst, ExternalPtr<struct USoundAttenuation> value) { inst.WriteOffset(0x498, value); }
	inline bool SetAttenuationOverrides(t_structHelper inst, FSoundAttenuationSettings value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetConcurrencySettings(t_structHelper inst, ExternalPtr<struct USoundConcurrency> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetSoundClass(t_structHelper inst, ExternalPtr<struct USoundClass> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetSourceEffectChain(t_structHelper inst, ExternalPtr<struct USoundEffectSourcePresetChain> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetDefaultMasterReverbSendAmount(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetSoundSubmix(t_structHelper inst, ExternalPtr<struct USoundSubmix> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetSoundSubmixSends(t_structHelper inst, TArray<struct FSoundSubmixSendInfo> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetSynth(t_structHelper inst, ExternalPtr<struct USynthSound> value) { inst.WriteOffset(0x610, value); }
	inline bool SetAudioComponent(t_structHelper inst, ExternalPtr<struct UAudioComponent> value) { inst.WriteOffset(0x618, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSynthComponent = sizeof(USynthComponent); // 1632
    static_assert(sizeof(USynthComponent) == 0x660, "Size of USynthComponent is not correct.");
	auto constexpr USynthComponent_boolField490_Offset = offsetof(USynthComponent, boolField490);
	static_assert(USynthComponent_boolField490_Offset == 0x490, "USynthComponent::boolField490 offset is not 490");
	auto constexpr USynthComponent_AttenuationSettings_Offset = offsetof(USynthComponent, AttenuationSettings);
	static_assert(USynthComponent_AttenuationSettings_Offset == 0x498, "USynthComponent::AttenuationSettings offset is not 498");
	auto constexpr USynthComponent_AttenuationOverrides_Offset = offsetof(USynthComponent, AttenuationOverrides);
	static_assert(USynthComponent_AttenuationOverrides_Offset == 0x4a0, "USynthComponent::AttenuationOverrides offset is not 4a0");
	auto constexpr USynthComponent_ConcurrencySettings_Offset = offsetof(USynthComponent, ConcurrencySettings);
	static_assert(USynthComponent_ConcurrencySettings_Offset == 0x5d0, "USynthComponent::ConcurrencySettings offset is not 5d0");
	auto constexpr USynthComponent_SoundClass_Offset = offsetof(USynthComponent, SoundClass);
	static_assert(USynthComponent_SoundClass_Offset == 0x5d8, "USynthComponent::SoundClass offset is not 5d8");
	auto constexpr USynthComponent_SourceEffectChain_Offset = offsetof(USynthComponent, SourceEffectChain);
	static_assert(USynthComponent_SourceEffectChain_Offset == 0x5e0, "USynthComponent::SourceEffectChain offset is not 5e0");
	auto constexpr USynthComponent_DefaultMasterReverbSendAmount_Offset = offsetof(USynthComponent, DefaultMasterReverbSendAmount);
	static_assert(USynthComponent_DefaultMasterReverbSendAmount_Offset == 0x5e8, "USynthComponent::DefaultMasterReverbSendAmount offset is not 5e8");
	auto constexpr USynthComponent_SoundSubmix_Offset = offsetof(USynthComponent, SoundSubmix);
	static_assert(USynthComponent_SoundSubmix_Offset == 0x5f0, "USynthComponent::SoundSubmix offset is not 5f0");
	auto constexpr USynthComponent_SoundSubmixSends_Offset = offsetof(USynthComponent, SoundSubmixSends);
	static_assert(USynthComponent_SoundSubmixSends_Offset == 0x5f8, "USynthComponent::SoundSubmixSends offset is not 5f8");
	auto constexpr USynthComponent_Synth_Offset = offsetof(USynthComponent, Synth);
	static_assert(USynthComponent_Synth_Offset == 0x610, "USynthComponent::Synth offset is not 610");
	auto constexpr USynthComponent_AudioComponent_Offset = offsetof(USynthComponent, AudioComponent);
	static_assert(USynthComponent_AudioComponent_Offset == 0x618, "USynthComponent::AudioComponent offset is not 618");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
