#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneBinding // Size: 0x30
{
public:
    FGuid ObjectGuid; /* Ofs: 0x0 Size: 0x10 StructProperty MovieScene.MovieSceneBinding.ObjectGuid */
    FString BindingName; /* Ofs: 0x10 Size: 0x10 StrProperty MovieScene.MovieSceneBinding.BindingName */
    TArray<ExternalPtr<struct UMovieSceneTrack>> Tracks; /* Ofs: 0x20 Size: 0x10 ArrayProperty MovieScene.MovieSceneBinding.Tracks */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneBinding = sizeof(FMovieSceneBinding); // 48
    static_assert(sizeof(FMovieSceneBinding) == 0x30, "Size of FMovieSceneBinding is not correct.");
	auto constexpr FMovieSceneBinding_ObjectGuid_Offset = offsetof(FMovieSceneBinding, ObjectGuid);
	static_assert(FMovieSceneBinding_ObjectGuid_Offset == 0x0, "FMovieSceneBinding::ObjectGuid offset is not 0");
	auto constexpr FMovieSceneBinding_BindingName_Offset = offsetof(FMovieSceneBinding, BindingName);
	static_assert(FMovieSceneBinding_BindingName_Offset == 0x10, "FMovieSceneBinding::BindingName offset is not 10");
	auto constexpr FMovieSceneBinding_Tracks_Offset = offsetof(FMovieSceneBinding, Tracks);
	static_assert(FMovieSceneBinding_Tracks_Offset == 0x20, "FMovieSceneBinding::Tracks offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
