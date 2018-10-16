#pragma once
#include "FMovieSceneKeyStruct.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneColorKeyStruct // Size: 0x58
 : public FMovieSceneKeyStruct // Size: 0x8
{
public:
    FLinearColor Color; /* Ofs: 0x8 Size: 0x10 StructProperty MovieSceneTracks.MovieSceneColorKeyStruct.Color */
    uint8_t UnknownData18[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneColorKeyStruct = sizeof(FMovieSceneColorKeyStruct); // 88
    static_assert(sizeof(FMovieSceneColorKeyStruct) == 0x58, "Size of FMovieSceneColorKeyStruct is not correct.");
	auto constexpr FMovieSceneColorKeyStruct_Color_Offset = offsetof(FMovieSceneColorKeyStruct, Color);
	static_assert(FMovieSceneColorKeyStruct_Color_Offset == 0x8, "FMovieSceneColorKeyStruct::Color offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
