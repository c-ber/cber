#pragma once
#include "FMovieSceneEvaluationField.hpp"
#include "FMovieSceneSequenceHierarchy.hpp"
#include "FMovieSceneTemplateGenerationLedger.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationTemplate // Size: 0x220
{
public:
    TMap<uint32_t, struct FMovieSceneEvaluationTrack> Tracks; /* Ofs: 0x0 Size: 0x50 MapProperty MovieScene.MovieSceneEvaluationTemplate.Tracks */
    uint8_t UnknownData50[0x50];
    FMovieSceneEvaluationField EvaluationField; /* Ofs: 0xA0 Size: 0x30 StructProperty MovieScene.MovieSceneEvaluationTemplate.EvaluationField */
    FMovieSceneSequenceHierarchy Hierarchy; /* Ofs: 0xD0 Size: 0xA0 StructProperty MovieScene.MovieSceneEvaluationTemplate.Hierarchy */
    FMovieSceneTemplateGenerationLedger TemplateLedger; /* Ofs: 0x170 Size: 0xA8 StructProperty MovieScene.MovieSceneEvaluationTemplate.TemplateLedger */
    bool bHasLegacyTrackInstances : 1; /* Ofs: 0x218 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneEvaluationTemplate.bHasLegacyTrackInstances */
    bool bKeepStaleTracks : 1; /* Ofs: 0x218 Size: 0x1 BitMask: 02 BoolProperty MovieScene.MovieSceneEvaluationTemplate.bKeepStaleTracks */
    uint8_t UnknownData219[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationTemplate = sizeof(FMovieSceneEvaluationTemplate); // 544
    static_assert(sizeof(FMovieSceneEvaluationTemplate) == 0x220, "Size of FMovieSceneEvaluationTemplate is not correct.");
	auto constexpr FMovieSceneEvaluationTemplate_Tracks_Offset = offsetof(FMovieSceneEvaluationTemplate, Tracks);
	static_assert(FMovieSceneEvaluationTemplate_Tracks_Offset == 0x0, "FMovieSceneEvaluationTemplate::Tracks offset is not 0");
	auto constexpr FMovieSceneEvaluationTemplate_EvaluationField_Offset = offsetof(FMovieSceneEvaluationTemplate, EvaluationField);
	static_assert(FMovieSceneEvaluationTemplate_EvaluationField_Offset == 0xa0, "FMovieSceneEvaluationTemplate::EvaluationField offset is not a0");
	auto constexpr FMovieSceneEvaluationTemplate_Hierarchy_Offset = offsetof(FMovieSceneEvaluationTemplate, Hierarchy);
	static_assert(FMovieSceneEvaluationTemplate_Hierarchy_Offset == 0xd0, "FMovieSceneEvaluationTemplate::Hierarchy offset is not d0");
	auto constexpr FMovieSceneEvaluationTemplate_TemplateLedger_Offset = offsetof(FMovieSceneEvaluationTemplate, TemplateLedger);
	static_assert(FMovieSceneEvaluationTemplate_TemplateLedger_Offset == 0x170, "FMovieSceneEvaluationTemplate::TemplateLedger offset is not 170");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
