#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackCompilationParams // Size: 0x2
{
public:
    bool bForEditorPreview; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneTrackCompilationParams.bForEditorPreview */
    bool bDuringBlueprintCompile; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneTrackCompilationParams.bDuringBlueprintCompile */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackCompilationParams = sizeof(FMovieSceneTrackCompilationParams); // 2
    static_assert(sizeof(FMovieSceneTrackCompilationParams) == 0x2, "Size of FMovieSceneTrackCompilationParams is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
