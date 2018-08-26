#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEventSectionData // Size: 0x20
{
public:
    TArray<float> KeyTimes; /* Ofs: 0x0 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneEventSectionData.KeyTimes */
    TArray<struct FEventPayload> KeyValues; /* Ofs: 0x10 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneEventSectionData.KeyValues */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEventSectionData = sizeof(FMovieSceneEventSectionData); // 32
    static_assert(sizeof(FMovieSceneEventSectionData) == 0x20, "Size of FMovieSceneEventSectionData is not correct.");
	auto constexpr FMovieSceneEventSectionData_KeyTimes_Offset = offsetof(FMovieSceneEventSectionData, KeyTimes);
	static_assert(FMovieSceneEventSectionData_KeyTimes_Offset == 0x0, "FMovieSceneEventSectionData::KeyTimes offset is not 0");
	auto constexpr FMovieSceneEventSectionData_KeyValues_Offset = offsetof(FMovieSceneEventSectionData, KeyValues);
	static_assert(FMovieSceneEventSectionData_KeyValues_Offset == 0x10, "FMovieSceneEventSectionData::KeyValues offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
