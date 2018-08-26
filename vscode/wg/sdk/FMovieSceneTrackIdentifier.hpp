#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackIdentifier // Size: 0x4
{
public:
    uint32_t Value; /* Ofs: 0x0 Size: 0x4 UInt32Property MovieScene.MovieSceneTrackIdentifier.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackIdentifier = sizeof(FMovieSceneTrackIdentifier); // 4
    static_assert(sizeof(FMovieSceneTrackIdentifier) == 0x4, "Size of FMovieSceneTrackIdentifier is not correct.");
	auto constexpr FMovieSceneTrackIdentifier_Value_Offset = offsetof(FMovieSceneTrackIdentifier, Value);
	static_assert(FMovieSceneTrackIdentifier_Value_Offset == 0x0, "FMovieSceneTrackIdentifier::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
