#pragma once
#include "FMovieSceneAdditiveCameraAnimationTemplate.hpp"
#include "FMovieSceneCameraAnimSectionData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneCameraAnimSectionTemplate // Size: 0x40
 : public FMovieSceneAdditiveCameraAnimationTemplate // Size: 0x18
{
public:
    FMovieSceneCameraAnimSectionData SourceData; /* Ofs: 0x18 Size: 0x20 StructProperty MovieSceneTracks.MovieSceneCameraAnimSectionTemplate.SourceData */
    float SectionStartTime; /* Ofs: 0x38 Size: 0x4 FloatProperty MovieSceneTracks.MovieSceneCameraAnimSectionTemplate.SectionStartTime */
    uint8_t UnknownData3C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneCameraAnimSectionTemplate = sizeof(FMovieSceneCameraAnimSectionTemplate); // 64
    static_assert(sizeof(FMovieSceneCameraAnimSectionTemplate) == 0x40, "Size of FMovieSceneCameraAnimSectionTemplate is not correct.");
	auto constexpr FMovieSceneCameraAnimSectionTemplate_SourceData_Offset = offsetof(FMovieSceneCameraAnimSectionTemplate, SourceData);
	static_assert(FMovieSceneCameraAnimSectionTemplate_SourceData_Offset == 0x18, "FMovieSceneCameraAnimSectionTemplate::SourceData offset is not 18");
	auto constexpr FMovieSceneCameraAnimSectionTemplate_SectionStartTime_Offset = offsetof(FMovieSceneCameraAnimSectionTemplate, SectionStartTime);
	static_assert(FMovieSceneCameraAnimSectionTemplate_SectionStartTime_Offset == 0x38, "FMovieSceneCameraAnimSectionTemplate::SectionStartTime offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
