#pragma once
#include "FFloatRange.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneAudioSectionTemplateData // Size: 0x138
{
public:
    ExternalPtr<struct USoundBase> Sound; /* Ofs: 0x0 Size: 0x8 ObjectProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.Sound */
    float AudioStartOffset; /* Ofs: 0x8 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.AudioStartOffset */
    FFloatRange AudioRange; /* Ofs: 0xC Size: 0x10 StructProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.AudioRange */
    uint8_t UnknownData1C[0x4];
    FRichCurve AudioPitchMultiplierCurve; /* Ofs: 0x20 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.AudioPitchMultiplierCurve */
    FRichCurve AudioVolumeCurve; /* Ofs: 0x90 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.AudioVolumeCurve */
    int32_t RowIndex; /* Ofs: 0x100 Size: 0x4 IntProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.RowIndex */
    uint8_t UnknownData104[0x4];
    FScriptDelegate OnQueueSubtitles; /* Ofs: 0x108 Size: 0x10 DelegateProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.OnQueueSubtitles */
    FScriptMulticastDelegate OnAudioFinished; /* Ofs: 0x118 Size: 0x10 MulticastDelegateProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.OnAudioFinished */
    FScriptMulticastDelegate OnAudioPlaybackPercent; /* Ofs: 0x128 Size: 0x10 MulticastDelegateProperty MovieSceneTracks.MovieSceneAudioSectionTemplateData.OnAudioPlaybackPercent */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneAudioSectionTemplateData = sizeof(FMovieSceneAudioSectionTemplateData); // 312
    static_assert(sizeof(FMovieSceneAudioSectionTemplateData) == 0x138, "Size of FMovieSceneAudioSectionTemplateData is not correct.");
	auto constexpr FMovieSceneAudioSectionTemplateData_Sound_Offset = offsetof(FMovieSceneAudioSectionTemplateData, Sound);
	static_assert(FMovieSceneAudioSectionTemplateData_Sound_Offset == 0x0, "FMovieSceneAudioSectionTemplateData::Sound offset is not 0");
	auto constexpr FMovieSceneAudioSectionTemplateData_AudioStartOffset_Offset = offsetof(FMovieSceneAudioSectionTemplateData, AudioStartOffset);
	static_assert(FMovieSceneAudioSectionTemplateData_AudioStartOffset_Offset == 0x8, "FMovieSceneAudioSectionTemplateData::AudioStartOffset offset is not 8");
	auto constexpr FMovieSceneAudioSectionTemplateData_AudioRange_Offset = offsetof(FMovieSceneAudioSectionTemplateData, AudioRange);
	static_assert(FMovieSceneAudioSectionTemplateData_AudioRange_Offset == 0xc, "FMovieSceneAudioSectionTemplateData::AudioRange offset is not c");
	auto constexpr FMovieSceneAudioSectionTemplateData_AudioPitchMultiplierCurve_Offset = offsetof(FMovieSceneAudioSectionTemplateData, AudioPitchMultiplierCurve);
	static_assert(FMovieSceneAudioSectionTemplateData_AudioPitchMultiplierCurve_Offset == 0x20, "FMovieSceneAudioSectionTemplateData::AudioPitchMultiplierCurve offset is not 20");
	auto constexpr FMovieSceneAudioSectionTemplateData_AudioVolumeCurve_Offset = offsetof(FMovieSceneAudioSectionTemplateData, AudioVolumeCurve);
	static_assert(FMovieSceneAudioSectionTemplateData_AudioVolumeCurve_Offset == 0x90, "FMovieSceneAudioSectionTemplateData::AudioVolumeCurve offset is not 90");
	auto constexpr FMovieSceneAudioSectionTemplateData_RowIndex_Offset = offsetof(FMovieSceneAudioSectionTemplateData, RowIndex);
	static_assert(FMovieSceneAudioSectionTemplateData_RowIndex_Offset == 0x100, "FMovieSceneAudioSectionTemplateData::RowIndex offset is not 100");
	auto constexpr FMovieSceneAudioSectionTemplateData_OnQueueSubtitles_Offset = offsetof(FMovieSceneAudioSectionTemplateData, OnQueueSubtitles);
	static_assert(FMovieSceneAudioSectionTemplateData_OnQueueSubtitles_Offset == 0x108, "FMovieSceneAudioSectionTemplateData::OnQueueSubtitles offset is not 108");
	auto constexpr FMovieSceneAudioSectionTemplateData_OnAudioFinished_Offset = offsetof(FMovieSceneAudioSectionTemplateData, OnAudioFinished);
	static_assert(FMovieSceneAudioSectionTemplateData_OnAudioFinished_Offset == 0x118, "FMovieSceneAudioSectionTemplateData::OnAudioFinished offset is not 118");
	auto constexpr FMovieSceneAudioSectionTemplateData_OnAudioPlaybackPercent_Offset = offsetof(FMovieSceneAudioSectionTemplateData, OnAudioPlaybackPercent);
	static_assert(FMovieSceneAudioSectionTemplateData_OnAudioPlaybackPercent_Offset == 0x128, "FMovieSceneAudioSectionTemplateData::OnAudioPlaybackPercent offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
