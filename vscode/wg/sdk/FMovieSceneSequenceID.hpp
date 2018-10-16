#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequenceID // Size: 0x4
{
public:
    uint32_t Value; /* Ofs: 0x0 Size: 0x4 UInt32Property MovieScene.MovieSceneSequenceID.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequenceID = sizeof(FMovieSceneSequenceID); // 4
    static_assert(sizeof(FMovieSceneSequenceID) == 0x4, "Size of FMovieSceneSequenceID is not correct.");
	auto constexpr FMovieSceneSequenceID_Value_Offset = offsetof(FMovieSceneSequenceID, Value);
	static_assert(FMovieSceneSequenceID_Value_Offset == 0x0, "FMovieSceneSequenceID::Value offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
