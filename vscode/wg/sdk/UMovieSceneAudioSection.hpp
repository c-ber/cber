#pragma once
#include "UMovieSceneSection.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneAudioSection // Size: 0x200
	: public UMovieSceneSection // Size: 0xD0
{
private:
	typedef UMovieSceneAudioSection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88); // id32("Class MovieSceneTracks.MovieSceneAudioSection")
		return ptr;
	}
	ExternalPtr<struct USoundBase> Sound; /* Ofs: 0xD0 Size: 0x8 - ObjectProperty MovieSceneTracks.MovieSceneAudioSection.Sound */
	float StartOffset; /* Ofs: 0xD8 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneAudioSection.StartOffset */
	float AudioStartTime; /* Ofs: 0xDC Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneAudioSection.AudioStartTime */
	float AudioDilationFactor; /* Ofs: 0xE0 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneAudioSection.AudioDilationFactor */
	float AudioVolume; /* Ofs: 0xE4 Size: 0x4 - FloatProperty MovieSceneTracks.MovieSceneAudioSection.AudioVolume */
	FRichCurve SoundVolume; /* Ofs: 0xE8 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneAudioSection.SoundVolume */
	FRichCurve PitchMultiplier; /* Ofs: 0x158 Size: 0x70 - StructProperty MovieSceneTracks.MovieSceneAudioSection.PitchMultiplier */
	uint8_t boolField1C8;
	uint8_t UnknownData1C9[0x7];
	FScriptDelegate OnQueueSubtitles; /* Ofs: 0x1D0 Size: 0x10 - DelegateProperty MovieSceneTracks.MovieSceneAudioSection.OnQueueSubtitles */
	FScriptMulticastDelegate OnAudioFinished; /* Ofs: 0x1E0 Size: 0x10 - MulticastDelegateProperty MovieSceneTracks.MovieSceneAudioSection.OnAudioFinished */
	FScriptMulticastDelegate OnAudioPlaybackPercent; /* Ofs: 0x1F0 Size: 0x10 - MulticastDelegateProperty MovieSceneTracks.MovieSceneAudioSection.OnAudioPlaybackPercent */


	inline bool SetSound(t_structHelper inst, ExternalPtr<struct USoundBase> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetStartOffset(t_structHelper inst, float value) { inst.WriteOffset(0xD8, value); }
	inline bool SetAudioStartTime(t_structHelper inst, float value) { inst.WriteOffset(0xDC, value); }
	inline bool SetAudioDilationFactor(t_structHelper inst, float value) { inst.WriteOffset(0xE0, value); }
	inline bool SetAudioVolume(t_structHelper inst, float value) { inst.WriteOffset(0xE4, value); }
	inline bool SetSoundVolume(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0xE8, value); }
	inline bool SetPitchMultiplier(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x158, value); }
	inline bool bSuppressSubtitles()
	{
		return boolField1C8& 0x1;
	}
	inline bool SetbSuppressSubtitles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnQueueSubtitles(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetOnAudioFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E0, value); }
	inline bool SetOnAudioPlaybackPercent(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneAudioSection = sizeof(UMovieSceneAudioSection); // 512
    static_assert(sizeof(UMovieSceneAudioSection) == 0x200, "Size of UMovieSceneAudioSection is not correct.");
	auto constexpr UMovieSceneAudioSection_Sound_Offset = offsetof(UMovieSceneAudioSection, Sound);
	static_assert(UMovieSceneAudioSection_Sound_Offset == 0xd0, "UMovieSceneAudioSection::Sound offset is not d0");
	auto constexpr UMovieSceneAudioSection_StartOffset_Offset = offsetof(UMovieSceneAudioSection, StartOffset);
	static_assert(UMovieSceneAudioSection_StartOffset_Offset == 0xd8, "UMovieSceneAudioSection::StartOffset offset is not d8");
	auto constexpr UMovieSceneAudioSection_AudioStartTime_Offset = offsetof(UMovieSceneAudioSection, AudioStartTime);
	static_assert(UMovieSceneAudioSection_AudioStartTime_Offset == 0xdc, "UMovieSceneAudioSection::AudioStartTime offset is not dc");
	auto constexpr UMovieSceneAudioSection_AudioDilationFactor_Offset = offsetof(UMovieSceneAudioSection, AudioDilationFactor);
	static_assert(UMovieSceneAudioSection_AudioDilationFactor_Offset == 0xe0, "UMovieSceneAudioSection::AudioDilationFactor offset is not e0");
	auto constexpr UMovieSceneAudioSection_AudioVolume_Offset = offsetof(UMovieSceneAudioSection, AudioVolume);
	static_assert(UMovieSceneAudioSection_AudioVolume_Offset == 0xe4, "UMovieSceneAudioSection::AudioVolume offset is not e4");
	auto constexpr UMovieSceneAudioSection_SoundVolume_Offset = offsetof(UMovieSceneAudioSection, SoundVolume);
	static_assert(UMovieSceneAudioSection_SoundVolume_Offset == 0xe8, "UMovieSceneAudioSection::SoundVolume offset is not e8");
	auto constexpr UMovieSceneAudioSection_PitchMultiplier_Offset = offsetof(UMovieSceneAudioSection, PitchMultiplier);
	static_assert(UMovieSceneAudioSection_PitchMultiplier_Offset == 0x158, "UMovieSceneAudioSection::PitchMultiplier offset is not 158");
	auto constexpr UMovieSceneAudioSection_boolField1C8_Offset = offsetof(UMovieSceneAudioSection, boolField1C8);
	static_assert(UMovieSceneAudioSection_boolField1C8_Offset == 0x1c8, "UMovieSceneAudioSection::boolField1C8 offset is not 1c8");
	auto constexpr UMovieSceneAudioSection_OnQueueSubtitles_Offset = offsetof(UMovieSceneAudioSection, OnQueueSubtitles);
	static_assert(UMovieSceneAudioSection_OnQueueSubtitles_Offset == 0x1d0, "UMovieSceneAudioSection::OnQueueSubtitles offset is not 1d0");
	auto constexpr UMovieSceneAudioSection_OnAudioFinished_Offset = offsetof(UMovieSceneAudioSection, OnAudioFinished);
	static_assert(UMovieSceneAudioSection_OnAudioFinished_Offset == 0x1e0, "UMovieSceneAudioSection::OnAudioFinished offset is not 1e0");
	auto constexpr UMovieSceneAudioSection_OnAudioPlaybackPercent_Offset = offsetof(UMovieSceneAudioSection, OnAudioPlaybackPercent);
	static_assert(UMovieSceneAudioSection_OnAudioPlaybackPercent_Offset == 0x1f0, "UMovieSceneAudioSection::OnAudioPlaybackPercent offset is not 1f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
