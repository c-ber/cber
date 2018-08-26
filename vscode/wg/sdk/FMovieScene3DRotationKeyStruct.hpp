#pragma once
#include "FMovieSceneKeyStruct.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DRotationKeyStruct // Size: 0x30
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    FRotator Rotation; /* Ofs: 0x8 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DRotationKeyStruct.Rotation */
    uint8_t UnknownData14[0x1C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DRotationKeyStruct = sizeof(FMovieScene3DRotationKeyStruct); // 48
    static_assert(sizeof(FMovieScene3DRotationKeyStruct) == 0x30, "Size of FMovieScene3DRotationKeyStruct is not correct.");
	auto constexpr FMovieScene3DRotationKeyStruct_Rotation_Offset = offsetof(FMovieScene3DRotationKeyStruct, Rotation);
	static_assert(FMovieScene3DRotationKeyStruct_Rotation_Offset == 0x8, "FMovieScene3DRotationKeyStruct::Rotation offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
