#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScenePossessable // Size: 0x38
{
public:
    FGuid Guid; /* Ofs: 0x0 Size: 0x10 StructProperty MovieScene.MovieScenePossessable.Guid */
    FString Name; /* Ofs: 0x10 Size: 0x10 StrProperty MovieScene.MovieScenePossessable.Name */
    ExternalPtr<struct UClass> PossessedObjectClass; /* Ofs: 0x20 Size: 0x8 ClassProperty MovieScene.MovieScenePossessable.PossessedObjectClass */
    FGuid ParentGuid; /* Ofs: 0x28 Size: 0x10 StructProperty MovieScene.MovieScenePossessable.ParentGuid */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScenePossessable = sizeof(FMovieScenePossessable); // 56
    static_assert(sizeof(FMovieScenePossessable) == 0x38, "Size of FMovieScenePossessable is not correct.");
	auto constexpr FMovieScenePossessable_Guid_Offset = offsetof(FMovieScenePossessable, Guid);
	static_assert(FMovieScenePossessable_Guid_Offset == 0x0, "FMovieScenePossessable::Guid offset is not 0");
	auto constexpr FMovieScenePossessable_Name_Offset = offsetof(FMovieScenePossessable, Name);
	static_assert(FMovieScenePossessable_Name_Offset == 0x10, "FMovieScenePossessable::Name offset is not 10");
	auto constexpr FMovieScenePossessable_PossessedObjectClass_Offset = offsetof(FMovieScenePossessable, PossessedObjectClass);
	static_assert(FMovieScenePossessable_PossessedObjectClass_Offset == 0x20, "FMovieScenePossessable::PossessedObjectClass offset is not 20");
	auto constexpr FMovieScenePossessable_ParentGuid_Offset = offsetof(FMovieScenePossessable, ParentGuid);
	static_assert(FMovieScenePossessable_ParentGuid_Offset == 0x28, "FMovieScenePossessable::ParentGuid offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
