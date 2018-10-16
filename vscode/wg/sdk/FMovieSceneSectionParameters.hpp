#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSectionParameters // Size: 0x14
{
public:
    float StartOffset; /* Ofs: 0x0 Size: 0x4 FloatProperty MovieScene.MovieSceneSectionParameters.StartOffset */
    float TimeScale; /* Ofs: 0x4 Size: 0x4 FloatProperty MovieScene.MovieSceneSectionParameters.TimeScale */
    int32_t HierarchicalBias; /* Ofs: 0x8 Size: 0x4 IntProperty MovieScene.MovieSceneSectionParameters.HierarchicalBias */
    float PrerollTime; /* Ofs: 0xC Size: 0x4 FloatProperty MovieScene.MovieSceneSectionParameters.PrerollTime */
    float PostrollTime; /* Ofs: 0x10 Size: 0x4 FloatProperty MovieScene.MovieSceneSectionParameters.PostrollTime */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSectionParameters = sizeof(FMovieSceneSectionParameters); // 20
    static_assert(sizeof(FMovieSceneSectionParameters) == 0x14, "Size of FMovieSceneSectionParameters is not correct.");
	auto constexpr FMovieSceneSectionParameters_StartOffset_Offset = offsetof(FMovieSceneSectionParameters, StartOffset);
	static_assert(FMovieSceneSectionParameters_StartOffset_Offset == 0x0, "FMovieSceneSectionParameters::StartOffset offset is not 0");
	auto constexpr FMovieSceneSectionParameters_TimeScale_Offset = offsetof(FMovieSceneSectionParameters, TimeScale);
	static_assert(FMovieSceneSectionParameters_TimeScale_Offset == 0x4, "FMovieSceneSectionParameters::TimeScale offset is not 4");
	auto constexpr FMovieSceneSectionParameters_HierarchicalBias_Offset = offsetof(FMovieSceneSectionParameters, HierarchicalBias);
	static_assert(FMovieSceneSectionParameters_HierarchicalBias_Offset == 0x8, "FMovieSceneSectionParameters::HierarchicalBias offset is not 8");
	auto constexpr FMovieSceneSectionParameters_PrerollTime_Offset = offsetof(FMovieSceneSectionParameters, PrerollTime);
	static_assert(FMovieSceneSectionParameters_PrerollTime_Offset == 0xc, "FMovieSceneSectionParameters::PrerollTime offset is not c");
	auto constexpr FMovieSceneSectionParameters_PostrollTime_Offset = offsetof(FMovieSceneSectionParameters, PostrollTime);
	static_assert(FMovieSceneSectionParameters_PostrollTime_Offset == 0x10, "FMovieSceneSectionParameters::PostrollTime offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
