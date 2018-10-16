#pragma once
#include "FMovieSceneVectorKeyStructBase.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneVector2DKeyStruct // Size: 0x50
 : public FMovieSceneVectorKeyStructBase // Size: 0x48
{
public:
    FVector2D Vector; /* Ofs: 0x48 Size: 0x8 StructProperty MovieSceneTracks.MovieSceneVector2DKeyStruct.Vector */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneVector2DKeyStruct = sizeof(FMovieSceneVector2DKeyStruct); // 80
    static_assert(sizeof(FMovieSceneVector2DKeyStruct) == 0x50, "Size of FMovieSceneVector2DKeyStruct is not correct.");
	auto constexpr FMovieSceneVector2DKeyStruct_Vector_Offset = offsetof(FMovieSceneVector2DKeyStruct, Vector);
	static_assert(FMovieSceneVector2DKeyStruct_Vector_Offset == 0x48, "FMovieSceneVector2DKeyStruct::Vector offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
