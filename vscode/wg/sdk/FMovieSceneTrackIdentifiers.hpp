#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackIdentifiers // Size: 0x10
{
public:
    TArray<struct FMovieSceneTrackIdentifier> Data; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieScene.MovieSceneTrackIdentifiers.Data */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackIdentifiers = sizeof(FMovieSceneTrackIdentifiers); // 16
    static_assert(sizeof(FMovieSceneTrackIdentifiers) == 0x10, "Size of FMovieSceneTrackIdentifiers is not correct.");
	auto constexpr FMovieSceneTrackIdentifiers_Data_Offset = offsetof(FMovieSceneTrackIdentifiers, Data);
	static_assert(FMovieSceneTrackIdentifiers_Data_Offset == 0x0, "FMovieSceneTrackIdentifiers::Data offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
