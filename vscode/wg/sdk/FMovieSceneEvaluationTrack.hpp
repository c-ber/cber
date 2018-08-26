#pragma once
#include "FGuid.hpp"
#include "EEvaluationMethod.hpp"
#include "FMovieSceneTrackImplementationPtr.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEvaluationTrack // Size: 0x80
{
public:
    FGuid ObjectBindingId; /* Ofs: 0x0 Size: 0x10 StructProperty MovieScene.MovieSceneEvaluationTrack.ObjectBindingId */
    uint16_t EvaluationPriority; /* Ofs: 0x10 Size: 0x2 UInt16Property MovieScene.MovieSceneEvaluationTrack.EvaluationPriority */
    TEnumAsByte<enum EEvaluationMethod> EvaluationMethod; /* Ofs: 0x12 Size: 0x1 EnumProperty MovieScene.MovieSceneEvaluationTrack.EvaluationMethod */
    uint8_t UnknownData13[0x5];
    TArray<struct FMovieSceneSegment> Segments; /* Ofs: 0x18 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationTrack.Segments */
    TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; /* Ofs: 0x28 Size: 0x10 ArrayProperty MovieScene.MovieSceneEvaluationTrack.ChildTemplates */
    FMovieSceneTrackImplementationPtr TrackTemplate; /* Ofs: 0x38 Size: 0x38 StructProperty MovieScene.MovieSceneEvaluationTrack.TrackTemplate */
    FName EvaluationGroup; /* Ofs: 0x70 Size: 0x8 NameProperty MovieScene.MovieSceneEvaluationTrack.EvaluationGroup */
    bool bEvaluateInPreroll : 1; /* Ofs: 0x78 Size: 0x1 BitMask: 01 BoolProperty MovieScene.MovieSceneEvaluationTrack.bEvaluateInPreroll */
    bool bEvaluateInPostroll : 1; /* Ofs: 0x78 Size: 0x1 BitMask: 02 BoolProperty MovieScene.MovieSceneEvaluationTrack.bEvaluateInPostroll */
    uint8_t UnknownData79[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEvaluationTrack = sizeof(FMovieSceneEvaluationTrack); // 128
    static_assert(sizeof(FMovieSceneEvaluationTrack) == 0x80, "Size of FMovieSceneEvaluationTrack is not correct.");
	auto constexpr FMovieSceneEvaluationTrack_ObjectBindingId_Offset = offsetof(FMovieSceneEvaluationTrack, ObjectBindingId);
	static_assert(FMovieSceneEvaluationTrack_ObjectBindingId_Offset == 0x0, "FMovieSceneEvaluationTrack::ObjectBindingId offset is not 0");
	auto constexpr FMovieSceneEvaluationTrack_EvaluationPriority_Offset = offsetof(FMovieSceneEvaluationTrack, EvaluationPriority);
	static_assert(FMovieSceneEvaluationTrack_EvaluationPriority_Offset == 0x10, "FMovieSceneEvaluationTrack::EvaluationPriority offset is not 10");
	auto constexpr FMovieSceneEvaluationTrack_EvaluationMethod_Offset = offsetof(FMovieSceneEvaluationTrack, EvaluationMethod);
	static_assert(FMovieSceneEvaluationTrack_EvaluationMethod_Offset == 0x12, "FMovieSceneEvaluationTrack::EvaluationMethod offset is not 12");
	auto constexpr FMovieSceneEvaluationTrack_Segments_Offset = offsetof(FMovieSceneEvaluationTrack, Segments);
	static_assert(FMovieSceneEvaluationTrack_Segments_Offset == 0x18, "FMovieSceneEvaluationTrack::Segments offset is not 18");
	auto constexpr FMovieSceneEvaluationTrack_ChildTemplates_Offset = offsetof(FMovieSceneEvaluationTrack, ChildTemplates);
	static_assert(FMovieSceneEvaluationTrack_ChildTemplates_Offset == 0x28, "FMovieSceneEvaluationTrack::ChildTemplates offset is not 28");
	auto constexpr FMovieSceneEvaluationTrack_TrackTemplate_Offset = offsetof(FMovieSceneEvaluationTrack, TrackTemplate);
	static_assert(FMovieSceneEvaluationTrack_TrackTemplate_Offset == 0x38, "FMovieSceneEvaluationTrack::TrackTemplate offset is not 38");
	auto constexpr FMovieSceneEvaluationTrack_EvaluationGroup_Offset = offsetof(FMovieSceneEvaluationTrack, EvaluationGroup);
	static_assert(FMovieSceneEvaluationTrack_EvaluationGroup_Offset == 0x70, "FMovieSceneEvaluationTrack::EvaluationGroup offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
