#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneTrackImplementationPtr // Size: 0x38
{
public:
    uint8_t UnknownData0[0x38];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneTrackImplementationPtr = sizeof(FMovieSceneTrackImplementationPtr); // 56
    static_assert(sizeof(FMovieSceneTrackImplementationPtr) == 0x38, "Size of FMovieSceneTrackImplementationPtr is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
