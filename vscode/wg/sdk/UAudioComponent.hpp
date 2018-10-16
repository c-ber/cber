#pragma once
#include "USceneComponent.hpp"
#include "FSoundAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAudioComponent // Size: 0x760
	: public USceneComponent // Size: 0x490
{
private:
	typedef UAudioComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1818); // id32("Class Engine.AudioComponent")
		return ptr;
	}
	ExternalPtr<struct USoundBase> Sound; /* Ofs: 0x490 Size: 0x8 - ObjectProperty Engine.AudioComponent.Sound */
	TArray<struct FAudioComponentParam> InstanceParameters; /* Ofs: 0x498 Size: 0x10 - ArrayProperty Engine.AudioComponent.InstanceParameters */
	ExternalPtr<struct USoundClass> SoundClassOverride; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty Engine.AudioComponent.SoundClassOverride */
	uint8_t boolField4B0;
	uint8_t UnknownData4B1[0x3];
	uint8_t boolField4B4;
	uint8_t UnknownData4B5[0x3];
	uint8_t boolField4B8;
	uint8_t UnknownData4B9[0x7];
	FName AudioComponentUserID; /* Ofs: 0x4C0 Size: 0x8 - NameProperty Engine.AudioComponent.AudioComponentUserID */
	float PitchModulationMin; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty Engine.AudioComponent.PitchModulationMin */
	float PitchModulationMax; /* Ofs: 0x4CC Size: 0x4 - FloatProperty Engine.AudioComponent.PitchModulationMax */
	float VolumeModulationMin; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty Engine.AudioComponent.VolumeModulationMin */
	float VolumeModulationMax; /* Ofs: 0x4D4 Size: 0x4 - FloatProperty Engine.AudioComponent.VolumeModulationMax */
	float VolumeMultiplier; /* Ofs: 0x4D8 Size: 0x4 - FloatProperty Engine.AudioComponent.VolumeMultiplier */
	float Priority; /* Ofs: 0x4DC Size: 0x4 - FloatProperty Engine.AudioComponent.Priority */
	float SubtitlePriority; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty Engine.AudioComponent.SubtitlePriority */
	float VolumeWeightedPriorityScale; /* Ofs: 0x4E4 Size: 0x4 - FloatProperty Engine.AudioComponent.VolumeWeightedPriorityScale */
	float PitchMultiplier; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty Engine.AudioComponent.PitchMultiplier */
	float HighFrequencyGainMultiplier; /* Ofs: 0x4EC Size: 0x4 - FloatProperty Engine.AudioComponent.HighFrequencyGainMultiplier */
	float LowPassFilterFrequency; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty Engine.AudioComponent.LowPassFilterFrequency */
	uint8_t UnknownData4F4[0x4];
	ExternalPtr<struct USoundAttenuation> AttenuationSettings; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty Engine.AudioComponent.AttenuationSettings */
	FSoundAttenuationSettings AttenuationOverrides; /* Ofs: 0x500 Size: 0x130 - StructProperty Engine.AudioComponent.AttenuationOverrides */
	ExternalPtr<struct USoundConcurrency> ConcurrencySettings; /* Ofs: 0x630 Size: 0x8 - ObjectProperty Engine.AudioComponent.ConcurrencySettings */
	uint8_t UnknownData638[0x8];
	FScriptMulticastDelegate OnAudioFinished; /* Ofs: 0x640 Size: 0x10 - MulticastDelegateProperty Engine.AudioComponent.OnAudioFinished */
	uint8_t UnknownData650[0x70];
	FScriptMulticastDelegate OnAudioPlaybackPercent; /* Ofs: 0x6C0 Size: 0x10 - MulticastDelegateProperty Engine.AudioComponent.OnAudioPlaybackPercent */
	uint8_t UnknownData6D0[0x70];
	FScriptDelegate OnQueueSubtitles; /* Ofs: 0x740 Size: 0x10 - DelegateProperty Engine.AudioComponent.OnQueueSubtitles */
	uint8_t UnknownData750[0x10];


	inline bool SetSound(t_structHelper inst, ExternalPtr<struct USoundBase> value) { inst.WriteOffset(0x490, value); }
	inline bool SetInstanceParameters(t_structHelper inst, TArray<struct FAudioComponentParam> value) { inst.WriteOffset(0x498, value); }
	inline bool SetSoundClassOverride(t_structHelper inst, ExternalPtr<struct USoundClass> value) { inst.WriteOffset(0x4A8, value); }
	inline bool bAutoDestroy()
	{
		return boolField4B0& 0x1;
	}
	inline bool SetbAutoDestroy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bStopWhenOwnerDestroyed()
	{
		return boolField4B0& 0x2;
	}
	inline bool SetbStopWhenOwnerDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bShouldRemainActiveIfDropped()
	{
		return boolField4B0& 0x4;
	}
	inline bool SetbShouldRemainActiveIfDropped(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAllowSpatialization()
	{
		return boolField4B0& 0x8;
	}
	inline bool SetbAllowSpatialization(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bOverrideAttenuation()
	{
		return boolField4B0& 0x10;
	}
	inline bool SetbOverrideAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B0, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bOverrideSubtitlePriority()
	{
		return boolField4B4& 0x1;
	}
	inline bool SetbOverrideSubtitlePriority(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsUISound()
	{
		return boolField4B8& 0x1;
	}
	inline bool SetbIsUISound(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableLowPassFilter()
	{
		return boolField4B8& 0x2;
	}
	inline bool SetbEnableLowPassFilter(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bOverridePriority()
	{
		return boolField4B8& 0x4;
	}
	inline bool SetbOverridePriority(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bSuppressSubtitles()
	{
		return boolField4B8& 0x8;
	}
	inline bool SetbSuppressSubtitles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4B8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetAudioComponentUserID(t_structHelper inst, FName value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetPitchModulationMin(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetPitchModulationMax(t_structHelper inst, float value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetVolumeModulationMin(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetVolumeModulationMax(t_structHelper inst, float value) { inst.WriteOffset(0x4D4, value); }
	inline bool SetVolumeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x4DC, value); }
	inline bool SetSubtitlePriority(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetVolumeWeightedPriorityScale(t_structHelper inst, float value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetPitchMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetHighFrequencyGainMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetLowPassFilterFrequency(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetAttenuationSettings(t_structHelper inst, ExternalPtr<struct USoundAttenuation> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetAttenuationOverrides(t_structHelper inst, FSoundAttenuationSettings value) { inst.WriteOffset(0x500, value); }
	inline bool SetConcurrencySettings(t_structHelper inst, ExternalPtr<struct USoundConcurrency> value) { inst.WriteOffset(0x630, value); }
	inline bool SetOnAudioFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x640, value); }
	inline bool SetOnAudioPlaybackPercent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetOnQueueSubtitles(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x740, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAudioComponent = sizeof(UAudioComponent); // 1888
    static_assert(sizeof(UAudioComponent) == 0x760, "Size of UAudioComponent is not correct.");
	auto constexpr UAudioComponent_Sound_Offset = offsetof(UAudioComponent, Sound);
	static_assert(UAudioComponent_Sound_Offset == 0x490, "UAudioComponent::Sound offset is not 490");
	auto constexpr UAudioComponent_InstanceParameters_Offset = offsetof(UAudioComponent, InstanceParameters);
	static_assert(UAudioComponent_InstanceParameters_Offset == 0x498, "UAudioComponent::InstanceParameters offset is not 498");
	auto constexpr UAudioComponent_SoundClassOverride_Offset = offsetof(UAudioComponent, SoundClassOverride);
	static_assert(UAudioComponent_SoundClassOverride_Offset == 0x4a8, "UAudioComponent::SoundClassOverride offset is not 4a8");
	auto constexpr UAudioComponent_boolField4B0_Offset = offsetof(UAudioComponent, boolField4B0);
	static_assert(UAudioComponent_boolField4B0_Offset == 0x4b0, "UAudioComponent::boolField4B0 offset is not 4b0");
	auto constexpr UAudioComponent_boolField4B4_Offset = offsetof(UAudioComponent, boolField4B4);
	static_assert(UAudioComponent_boolField4B4_Offset == 0x4b4, "UAudioComponent::boolField4B4 offset is not 4b4");
	auto constexpr UAudioComponent_boolField4B8_Offset = offsetof(UAudioComponent, boolField4B8);
	static_assert(UAudioComponent_boolField4B8_Offset == 0x4b8, "UAudioComponent::boolField4B8 offset is not 4b8");
	auto constexpr UAudioComponent_AudioComponentUserID_Offset = offsetof(UAudioComponent, AudioComponentUserID);
	static_assert(UAudioComponent_AudioComponentUserID_Offset == 0x4c0, "UAudioComponent::AudioComponentUserID offset is not 4c0");
	auto constexpr UAudioComponent_PitchModulationMin_Offset = offsetof(UAudioComponent, PitchModulationMin);
	static_assert(UAudioComponent_PitchModulationMin_Offset == 0x4c8, "UAudioComponent::PitchModulationMin offset is not 4c8");
	auto constexpr UAudioComponent_PitchModulationMax_Offset = offsetof(UAudioComponent, PitchModulationMax);
	static_assert(UAudioComponent_PitchModulationMax_Offset == 0x4cc, "UAudioComponent::PitchModulationMax offset is not 4cc");
	auto constexpr UAudioComponent_VolumeModulationMin_Offset = offsetof(UAudioComponent, VolumeModulationMin);
	static_assert(UAudioComponent_VolumeModulationMin_Offset == 0x4d0, "UAudioComponent::VolumeModulationMin offset is not 4d0");
	auto constexpr UAudioComponent_VolumeModulationMax_Offset = offsetof(UAudioComponent, VolumeModulationMax);
	static_assert(UAudioComponent_VolumeModulationMax_Offset == 0x4d4, "UAudioComponent::VolumeModulationMax offset is not 4d4");
	auto constexpr UAudioComponent_VolumeMultiplier_Offset = offsetof(UAudioComponent, VolumeMultiplier);
	static_assert(UAudioComponent_VolumeMultiplier_Offset == 0x4d8, "UAudioComponent::VolumeMultiplier offset is not 4d8");
	auto constexpr UAudioComponent_Priority_Offset = offsetof(UAudioComponent, Priority);
	static_assert(UAudioComponent_Priority_Offset == 0x4dc, "UAudioComponent::Priority offset is not 4dc");
	auto constexpr UAudioComponent_SubtitlePriority_Offset = offsetof(UAudioComponent, SubtitlePriority);
	static_assert(UAudioComponent_SubtitlePriority_Offset == 0x4e0, "UAudioComponent::SubtitlePriority offset is not 4e0");
	auto constexpr UAudioComponent_VolumeWeightedPriorityScale_Offset = offsetof(UAudioComponent, VolumeWeightedPriorityScale);
	static_assert(UAudioComponent_VolumeWeightedPriorityScale_Offset == 0x4e4, "UAudioComponent::VolumeWeightedPriorityScale offset is not 4e4");
	auto constexpr UAudioComponent_PitchMultiplier_Offset = offsetof(UAudioComponent, PitchMultiplier);
	static_assert(UAudioComponent_PitchMultiplier_Offset == 0x4e8, "UAudioComponent::PitchMultiplier offset is not 4e8");
	auto constexpr UAudioComponent_HighFrequencyGainMultiplier_Offset = offsetof(UAudioComponent, HighFrequencyGainMultiplier);
	static_assert(UAudioComponent_HighFrequencyGainMultiplier_Offset == 0x4ec, "UAudioComponent::HighFrequencyGainMultiplier offset is not 4ec");
	auto constexpr UAudioComponent_LowPassFilterFrequency_Offset = offsetof(UAudioComponent, LowPassFilterFrequency);
	static_assert(UAudioComponent_LowPassFilterFrequency_Offset == 0x4f0, "UAudioComponent::LowPassFilterFrequency offset is not 4f0");
	auto constexpr UAudioComponent_AttenuationSettings_Offset = offsetof(UAudioComponent, AttenuationSettings);
	static_assert(UAudioComponent_AttenuationSettings_Offset == 0x4f8, "UAudioComponent::AttenuationSettings offset is not 4f8");
	auto constexpr UAudioComponent_AttenuationOverrides_Offset = offsetof(UAudioComponent, AttenuationOverrides);
	static_assert(UAudioComponent_AttenuationOverrides_Offset == 0x500, "UAudioComponent::AttenuationOverrides offset is not 500");
	auto constexpr UAudioComponent_ConcurrencySettings_Offset = offsetof(UAudioComponent, ConcurrencySettings);
	static_assert(UAudioComponent_ConcurrencySettings_Offset == 0x630, "UAudioComponent::ConcurrencySettings offset is not 630");
	auto constexpr UAudioComponent_OnAudioFinished_Offset = offsetof(UAudioComponent, OnAudioFinished);
	static_assert(UAudioComponent_OnAudioFinished_Offset == 0x640, "UAudioComponent::OnAudioFinished offset is not 640");
	auto constexpr UAudioComponent_OnAudioPlaybackPercent_Offset = offsetof(UAudioComponent, OnAudioPlaybackPercent);
	static_assert(UAudioComponent_OnAudioPlaybackPercent_Offset == 0x6c0, "UAudioComponent::OnAudioPlaybackPercent offset is not 6c0");
	auto constexpr UAudioComponent_OnQueueSubtitles_Offset = offsetof(UAudioComponent, OnQueueSubtitles);
	static_assert(UAudioComponent_OnQueueSubtitles_Offset == 0x740, "UAudioComponent::OnQueueSubtitles offset is not 740");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
