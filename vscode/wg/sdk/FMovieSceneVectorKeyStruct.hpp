#pragma once
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVectorKeyStruct // Size: 0x58
 : public FMovieSceneVectorKeyStructBase // Size: 0x48
{
public:
    FVector Vector; /* Ofs: 0x48 Size: 0xC StructProperty MovieSceneTracks.MovieSceneVectorKeyStruct.Vector */
    uint8_t UnknownData54[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVectorKeyStruct = sizeof(FMovieSceneVectorKeyStruct); // 88
    static_assert(sizeof(FMovieSceneVectorKeyStruct) == 0x58, "Size of FMovieSceneVectorKeyStruct is not correct.");
	auto constexpr FMovieSceneVectorKeyStruct_Vector_Offset = offsetof(FMovieSceneVectorKeyStruct, Vector);
	static_assert(FMovieSceneVectorKeyStruct_Vector_Offset == 0x48, "FMovieSceneVectorKeyStruct::Vector offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
