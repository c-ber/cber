#pragma once
#include "FMovieSceneKeyStruct.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DLocationKeyStruct // Size: 0x30
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    FVector Location; /* Ofs: 0x8 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DLocationKeyStruct.Location */
    uint8_t UnknownData14[0x1C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DLocationKeyStruct = sizeof(FMovieScene3DLocationKeyStruct); // 48
    static_assert(sizeof(FMovieScene3DLocationKeyStruct) == 0x30, "Size of FMovieScene3DLocationKeyStruct is not correct.");
	auto constexpr FMovieScene3DLocationKeyStruct_Location_Offset = offsetof(FMovieScene3DLocationKeyStruct, Location);
	static_assert(FMovieScene3DLocationKeyStruct_Location_Offset == 0x8, "FMovieScene3DLocationKeyStruct::Location offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
