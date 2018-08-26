#pragma once
#include "FDirectoryPath.hpp"
#include "FCaptureResolution.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCaptureSettings // Size: 0x50
{
public:
    FDirectoryPath OutputDirectory; /* Ofs: 0x0 Size: 0x10 StructProperty MovieSceneCapture.MovieSceneCaptureSettings.OutputDirectory */
    bool bCreateTemporaryCopiesOfLevels; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bCreateTemporaryCopiesOfLevels */
    uint8_t UnknownData11[0x7];
    ExternalPtr<struct UClass> GameModeOverride; /* Ofs: 0x18 Size: 0x8 ClassProperty MovieSceneCapture.MovieSceneCaptureSettings.GameModeOverride */
    FString OutputFormat; /* Ofs: 0x20 Size: 0x10 StrProperty MovieSceneCapture.MovieSceneCaptureSettings.OutputFormat */
    bool bOverwriteExisting; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bOverwriteExisting */
    bool bUseRelativeFrameNumbers; /* Ofs: 0x31 Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bUseRelativeFrameNumbers */
    uint8_t UnknownData32[0x2];
    int32_t HandleFrames; /* Ofs: 0x34 Size: 0x4 IntProperty MovieSceneCapture.MovieSceneCaptureSettings.HandleFrames */
    uint8_t ZeroPadFrameNumbers; /* Ofs: 0x38 Size: 0x1 ByteProperty MovieSceneCapture.MovieSceneCaptureSettings.ZeroPadFrameNumbers */
    uint8_t UnknownData39[0x3];
    int32_t FrameRate; /* Ofs: 0x3C Size: 0x4 IntProperty MovieSceneCapture.MovieSceneCaptureSettings.FrameRate */
    FCaptureResolution Resolution; /* Ofs: 0x40 Size: 0x8 StructProperty MovieSceneCapture.MovieSceneCaptureSettings.Resolution */
    bool bEnableTextureStreaming; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bEnableTextureStreaming */
    bool bCinematicEngineScalability; /* Ofs: 0x49 Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bCinematicEngineScalability */
    bool bCinematicMode; /* Ofs: 0x4A Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bCinematicMode */
    bool bAllowMovement; /* Ofs: 0x4B Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bAllowMovement */
    bool bAllowTurning; /* Ofs: 0x4C Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bAllowTurning */
    bool bShowPlayer; /* Ofs: 0x4D Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bShowPlayer */
    bool bShowHUD; /* Ofs: 0x4E Size: 0x1 BitMask: 01 BoolProperty MovieSceneCapture.MovieSceneCaptureSettings.bShowHUD */
    uint8_t UnknownData4F[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCaptureSettings = sizeof(FMovieSceneCaptureSettings); // 80
    static_assert(sizeof(FMovieSceneCaptureSettings) == 0x50, "Size of FMovieSceneCaptureSettings is not correct.");
	auto constexpr FMovieSceneCaptureSettings_OutputDirectory_Offset = offsetof(FMovieSceneCaptureSettings, OutputDirectory);
	static_assert(FMovieSceneCaptureSettings_OutputDirectory_Offset == 0x0, "FMovieSceneCaptureSettings::OutputDirectory offset is not 0");
	auto constexpr FMovieSceneCaptureSettings_GameModeOverride_Offset = offsetof(FMovieSceneCaptureSettings, GameModeOverride);
	static_assert(FMovieSceneCaptureSettings_GameModeOverride_Offset == 0x18, "FMovieSceneCaptureSettings::GameModeOverride offset is not 18");
	auto constexpr FMovieSceneCaptureSettings_OutputFormat_Offset = offsetof(FMovieSceneCaptureSettings, OutputFormat);
	static_assert(FMovieSceneCaptureSettings_OutputFormat_Offset == 0x20, "FMovieSceneCaptureSettings::OutputFormat offset is not 20");
	auto constexpr FMovieSceneCaptureSettings_HandleFrames_Offset = offsetof(FMovieSceneCaptureSettings, HandleFrames);
	static_assert(FMovieSceneCaptureSettings_HandleFrames_Offset == 0x34, "FMovieSceneCaptureSettings::HandleFrames offset is not 34");
	auto constexpr FMovieSceneCaptureSettings_ZeroPadFrameNumbers_Offset = offsetof(FMovieSceneCaptureSettings, ZeroPadFrameNumbers);
	static_assert(FMovieSceneCaptureSettings_ZeroPadFrameNumbers_Offset == 0x38, "FMovieSceneCaptureSettings::ZeroPadFrameNumbers offset is not 38");
	auto constexpr FMovieSceneCaptureSettings_FrameRate_Offset = offsetof(FMovieSceneCaptureSettings, FrameRate);
	static_assert(FMovieSceneCaptureSettings_FrameRate_Offset == 0x3c, "FMovieSceneCaptureSettings::FrameRate offset is not 3c");
	auto constexpr FMovieSceneCaptureSettings_Resolution_Offset = offsetof(FMovieSceneCaptureSettings, Resolution);
	static_assert(FMovieSceneCaptureSettings_Resolution_Offset == 0x40, "FMovieSceneCaptureSettings::Resolution offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
