#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequencePlaybackSettings // Size: 0x28
{
public:
    int32_t LoopCount; /* Ofs: 0x0 Size: 0x4 IntProperty MovieScene.MovieSceneSequencePlaybackSettings.LoopCount */
    float PlayRate; /* Ofs: 0x4 Size: 0x4 FloatProperty MovieScene.MovieSceneSequencePlaybackSettings.PlayRate */
    bool bRandomStartTime; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneSequencePlaybackSettings.bRandomStartTime */
    uint8_t UnknownData9[0x3];
    float StartTime; /* Ofs: 0xC Size: 0x4 FloatProperty MovieScene.MovieSceneSequencePlaybackSettings.StartTime */
    bool bRestoreState; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneSequencePlaybackSettings.bRestoreState */
    uint8_t UnknownData11[0x7];
    TScriptInterface<ExternalPtr<struct UMovieSceneBindingOverridesInterface>> BindingOverrides; /* Ofs: 0x18 Size: 0x10 InterfaceProperty MovieScene.MovieSceneSequencePlaybackSettings.BindingOverrides */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequencePlaybackSettings = sizeof(FMovieSceneSequencePlaybackSettings); // 40
    static_assert(sizeof(FMovieSceneSequencePlaybackSettings) == 0x28, "Size of FMovieSceneSequencePlaybackSettings is not correct.");
	auto constexpr FMovieSceneSequencePlaybackSettings_LoopCount_Offset = offsetof(FMovieSceneSequencePlaybackSettings, LoopCount);
	static_assert(FMovieSceneSequencePlaybackSettings_LoopCount_Offset == 0x0, "FMovieSceneSequencePlaybackSettings::LoopCount offset is not 0");
	auto constexpr FMovieSceneSequencePlaybackSettings_PlayRate_Offset = offsetof(FMovieSceneSequencePlaybackSettings, PlayRate);
	static_assert(FMovieSceneSequencePlaybackSettings_PlayRate_Offset == 0x4, "FMovieSceneSequencePlaybackSettings::PlayRate offset is not 4");
	auto constexpr FMovieSceneSequencePlaybackSettings_StartTime_Offset = offsetof(FMovieSceneSequencePlaybackSettings, StartTime);
	static_assert(FMovieSceneSequencePlaybackSettings_StartTime_Offset == 0xc, "FMovieSceneSequencePlaybackSettings::StartTime offset is not c");
	auto constexpr FMovieSceneSequencePlaybackSettings_BindingOverrides_Offset = offsetof(FMovieSceneSequencePlaybackSettings, BindingOverrides);
	static_assert(FMovieSceneSequencePlaybackSettings_BindingOverrides_Offset == 0x18, "FMovieSceneSequencePlaybackSettings::BindingOverrides offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
