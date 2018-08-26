#pragma once
#include "FMovieSceneAdditiveCameraAnimationTemplate.hpp"
#include "FMovieSceneCameraShakeSectionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCameraShakeSectionTemplate // Size: 0x40
 : public FMovieSceneAdditiveCameraAnimationTemplate // Size: 0x18
{
public:
    FMovieSceneCameraShakeSectionData SourceData; /* Ofs: 0x18 Size: 0x20 StructProperty MovieSceneTracks.MovieSceneCameraShakeSectionTemplate.SourceData */
    float SectionStartTime; /* Ofs: 0x38 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraShakeSectionTemplate.SectionStartTime */
    uint8_t UnknownData3C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCameraShakeSectionTemplate = sizeof(FMovieSceneCameraShakeSectionTemplate); // 64
    static_assert(sizeof(FMovieSceneCameraShakeSectionTemplate) == 0x40, "Size of FMovieSceneCameraShakeSectionTemplate is not correct.");
	auto constexpr FMovieSceneCameraShakeSectionTemplate_SourceData_Offset = offsetof(FMovieSceneCameraShakeSectionTemplate, SourceData);
	static_assert(FMovieSceneCameraShakeSectionTemplate_SourceData_Offset == 0x18, "FMovieSceneCameraShakeSectionTemplate::SourceData offset is not 18");
	auto constexpr FMovieSceneCameraShakeSectionTemplate_SectionStartTime_Offset = offsetof(FMovieSceneCameraShakeSectionTemplate, SectionStartTime);
	static_assert(FMovieSceneCameraShakeSectionTemplate_SectionStartTime_Offset == 0x38, "FMovieSceneCameraShakeSectionTemplate::SectionStartTime offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
