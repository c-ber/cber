#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackLabels // Size: 0x10
{
public:
    TArray<struct FString> Strings; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieScene.MovieSceneTrackLabels.Strings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackLabels = sizeof(FMovieSceneTrackLabels); // 16
    static_assert(sizeof(FMovieSceneTrackLabels) == 0x10, "Size of FMovieSceneTrackLabels is not correct.");
	auto constexpr FMovieSceneTrackLabels_Strings_Offset = offsetof(FMovieSceneTrackLabels, Strings);
	static_assert(FMovieSceneTrackLabels_Strings_Offset == 0x0, "FMovieSceneTrackLabels::Strings offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
