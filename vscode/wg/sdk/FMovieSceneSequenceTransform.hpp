#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequenceTransform // Size: 0x8
{
public:
    float TimeScale; /* Ofs: 0x0 Size: 0x4 FloatProperty MovieScene.MovieSceneSequenceTransform.TimeScale */
    float Offset; /* Ofs: 0x4 Size: 0x4 FloatProperty MovieScene.MovieSceneSequenceTransform.Offset */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequenceTransform = sizeof(FMovieSceneSequenceTransform); // 8
    static_assert(sizeof(FMovieSceneSequenceTransform) == 0x8, "Size of FMovieSceneSequenceTransform is not correct.");
	auto constexpr FMovieSceneSequenceTransform_TimeScale_Offset = offsetof(FMovieSceneSequenceTransform, TimeScale);
	static_assert(FMovieSceneSequenceTransform_TimeScale_Offset == 0x0, "FMovieSceneSequenceTransform::TimeScale offset is not 0");
	auto constexpr FMovieSceneSequenceTransform_Offset_Offset = offsetof(FMovieSceneSequenceTransform, Offset);
	static_assert(FMovieSceneSequenceTransform_Offset_Offset == 0x4, "FMovieSceneSequenceTransform::Offset offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
