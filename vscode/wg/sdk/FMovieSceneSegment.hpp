#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSegment // Size: 0x50
{
public:
    uint8_t UnknownData0[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSegment = sizeof(FMovieSceneSegment); // 80
    static_assert(sizeof(FMovieSceneSegment) == 0x50, "Size of FMovieSceneSegment is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
