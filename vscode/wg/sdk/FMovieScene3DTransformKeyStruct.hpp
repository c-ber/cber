#pragma once
#include "FMovieSceneKeyStruct.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DTransformKeyStruct // Size: 0x78
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    FVector Location; /* Ofs: 0x8 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DTransformKeyStruct.Location */
    FRotator Rotation; /* Ofs: 0x14 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DTransformKeyStruct.Rotation */
    FVector Scale; /* Ofs: 0x20 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DTransformKeyStruct.Scale */
    uint8_t UnknownData2C[0x4C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DTransformKeyStruct = sizeof(FMovieScene3DTransformKeyStruct); // 120
    static_assert(sizeof(FMovieScene3DTransformKeyStruct) == 0x78, "Size of FMovieScene3DTransformKeyStruct is not correct.");
	auto constexpr FMovieScene3DTransformKeyStruct_Location_Offset = offsetof(FMovieScene3DTransformKeyStruct, Location);
	static_assert(FMovieScene3DTransformKeyStruct_Location_Offset == 0x8, "FMovieScene3DTransformKeyStruct::Location offset is not 8");
	auto constexpr FMovieScene3DTransformKeyStruct_Rotation_Offset = offsetof(FMovieScene3DTransformKeyStruct, Rotation);
	static_assert(FMovieScene3DTransformKeyStruct_Rotation_Offset == 0x14, "FMovieScene3DTransformKeyStruct::Rotation offset is not 14");
	auto constexpr FMovieScene3DTransformKeyStruct_Scale_Offset = offsetof(FMovieScene3DTransformKeyStruct, Scale);
	static_assert(FMovieScene3DTransformKeyStruct_Scale_Offset == 0x20, "FMovieScene3DTransformKeyStruct::Scale offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
