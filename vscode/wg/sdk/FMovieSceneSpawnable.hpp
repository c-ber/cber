#pragma once
#include "FGuid.hpp"
#include "ESpawnOwnership.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSpawnable // Size: 0x40
{
public:
    FGuid Guid; /* Ofs: 0x0 Size: 0x10 StructProperty MovieScene.MovieSceneSpawnable.Guid */
    FString Name; /* Ofs: 0x10 Size: 0x10 StrProperty MovieScene.MovieSceneSpawnable.Name */
    ExternalPtr<struct UObject> ObjectTemplate; /* Ofs: 0x20 Size: 0x8 ObjectProperty MovieScene.MovieSceneSpawnable.ObjectTemplate */
    TArray<struct FGuid> ChildPossessables; /* Ofs: 0x28 Size: 0x10 ArrayProperty MovieScene.MovieSceneSpawnable.ChildPossessables */
    TEnumAsByte<enum ESpawnOwnership> Ownership; /* Ofs: 0x38 Size: 0x1 EnumProperty MovieScene.MovieSceneSpawnable.Ownership */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSpawnable = sizeof(FMovieSceneSpawnable); // 64
    static_assert(sizeof(FMovieSceneSpawnable) == 0x40, "Size of FMovieSceneSpawnable is not correct.");
	auto constexpr FMovieSceneSpawnable_Guid_Offset = offsetof(FMovieSceneSpawnable, Guid);
	static_assert(FMovieSceneSpawnable_Guid_Offset == 0x0, "FMovieSceneSpawnable::Guid offset is not 0");
	auto constexpr FMovieSceneSpawnable_Name_Offset = offsetof(FMovieSceneSpawnable, Name);
	static_assert(FMovieSceneSpawnable_Name_Offset == 0x10, "FMovieSceneSpawnable::Name offset is not 10");
	auto constexpr FMovieSceneSpawnable_ObjectTemplate_Offset = offsetof(FMovieSceneSpawnable, ObjectTemplate);
	static_assert(FMovieSceneSpawnable_ObjectTemplate_Offset == 0x20, "FMovieSceneSpawnable::ObjectTemplate offset is not 20");
	auto constexpr FMovieSceneSpawnable_ChildPossessables_Offset = offsetof(FMovieSceneSpawnable, ChildPossessables);
	static_assert(FMovieSceneSpawnable_ChildPossessables_Offset == 0x28, "FMovieSceneSpawnable::ChildPossessables offset is not 28");
	auto constexpr FMovieSceneSpawnable_Ownership_Offset = offsetof(FMovieSceneSpawnable, Ownership);
	static_assert(FMovieSceneSpawnable_Ownership_Offset == 0x38, "FMovieSceneSpawnable::Ownership offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
