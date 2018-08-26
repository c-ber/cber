#pragma once
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector4.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVector4KeyStruct // Size: 0x60
 : public FMovieSceneVectorKeyStructBase // Size: 0x48
{
public:
    uint8_t UnknownData48[0x8];
    FVector4 Vector; /* Ofs: 0x50 Size: 0x10 StructProperty MovieSceneTracks.MovieSceneVector4KeyStruct.Vector */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVector4KeyStruct = sizeof(FMovieSceneVector4KeyStruct); // 96
    static_assert(sizeof(FMovieSceneVector4KeyStruct) == 0x60, "Size of FMovieSceneVector4KeyStruct is not correct.");
	auto constexpr FMovieSceneVector4KeyStruct_Vector_Offset = offsetof(FMovieSceneVector4KeyStruct, Vector);
	static_assert(FMovieSceneVector4KeyStruct_Vector_Offset == 0x50, "FMovieSceneVector4KeyStruct::Vector offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
