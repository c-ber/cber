#pragma once
#include "FMovieSceneEvalTemplate.hpp"
#include "FMovieScenePropertySectionData.hpp"
#include "FIntegralCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneActorReferenceSectionTemplate // Size: 0xC0
 : public FMovieSceneEvalTemplate // Size: 0x18
{
public:
    FMovieScenePropertySectionData PropertyData; /* Ofs: 0x18 Size: 0x28 StructProperty MovieSceneTracks.MovieSceneActorReferenceSectionTemplate.PropertyData */
    FIntegralCurve ActorGuidIndexCurve; /* Ofs: 0x40 Size: 0x70 StructProperty MovieSceneTracks.MovieSceneActorReferenceSectionTemplate.ActorGuidIndexCurve */
    TArray<struct FGuid> ActorGuids; /* Ofs: 0xB0 Size: 0x10 ArrayProperty MovieSceneTracks.MovieSceneActorReferenceSectionTemplate.ActorGuids */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneActorReferenceSectionTemplate = sizeof(FMovieSceneActorReferenceSectionTemplate); // 192
    static_assert(sizeof(FMovieSceneActorReferenceSectionTemplate) == 0xC0, "Size of FMovieSceneActorReferenceSectionTemplate is not correct.");
	auto constexpr FMovieSceneActorReferenceSectionTemplate_PropertyData_Offset = offsetof(FMovieSceneActorReferenceSectionTemplate, PropertyData);
	static_assert(FMovieSceneActorReferenceSectionTemplate_PropertyData_Offset == 0x18, "FMovieSceneActorReferenceSectionTemplate::PropertyData offset is not 18");
	auto constexpr FMovieSceneActorReferenceSectionTemplate_ActorGuidIndexCurve_Offset = offsetof(FMovieSceneActorReferenceSectionTemplate, ActorGuidIndexCurve);
	static_assert(FMovieSceneActorReferenceSectionTemplate_ActorGuidIndexCurve_Offset == 0x40, "FMovieSceneActorReferenceSectionTemplate::ActorGuidIndexCurve offset is not 40");
	auto constexpr FMovieSceneActorReferenceSectionTemplate_ActorGuids_Offset = offsetof(FMovieSceneActorReferenceSectionTemplate, ActorGuids);
	static_assert(FMovieSceneActorReferenceSectionTemplate_ActorGuids_Offset == 0xb0, "FMovieSceneActorReferenceSectionTemplate::ActorGuids offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
