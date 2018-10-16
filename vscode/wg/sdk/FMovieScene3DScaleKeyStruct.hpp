#pragma once
#include "FMovieSceneKeyStruct.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieScene3DScaleKeyStruct // Size: 0x30
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    FVector Scale; /* Ofs: 0x8 Size: 0xC StructProperty MovieSceneTracks.MovieScene3DScaleKeyStruct.Scale */
    uint8_t UnknownData14[0x1C];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieScene3DScaleKeyStruct = sizeof(FMovieScene3DScaleKeyStruct); // 48
    static_assert(sizeof(FMovieScene3DScaleKeyStruct) == 0x30, "Size of FMovieScene3DScaleKeyStruct is not correct.");
	auto constexpr FMovieScene3DScaleKeyStruct_Scale_Offset = offsetof(FMovieScene3DScaleKeyStruct, Scale);
	static_assert(FMovieScene3DScaleKeyStruct_Scale_Offset == 0x8, "FMovieScene3DScaleKeyStruct::Scale offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
