#pragma once
#include "FMovieSceneSequenceTransform.hpp"
#include "FGuid.hpp"
#include "FMovieSceneSequenceID.hpp"
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSubSequenceData // Size: 0x50
{
public:
    ExternalPtr<struct UMovieSceneSequence> Sequence; /* Ofs: 0x0 Size: 0x8 ObjectProperty MovieScene.MovieSceneSubSequenceData.Sequence */
    ExternalPtr<struct UObject> SequenceKeyObject; /* Ofs: 0x8 Size: 0x8 ObjectProperty MovieScene.MovieSceneSubSequenceData.SequenceKeyObject */
    FMovieSceneSequenceTransform RootToSequenceTransform; /* Ofs: 0x10 Size: 0x8 StructProperty MovieScene.MovieSceneSubSequenceData.RootToSequenceTransform */
    FGuid SourceSequenceSignature; /* Ofs: 0x18 Size: 0x10 StructProperty MovieScene.MovieSceneSubSequenceData.SourceSequenceSignature */
    FMovieSceneSequenceID DeterministicSequenceID; /* Ofs: 0x28 Size: 0x4 StructProperty MovieScene.MovieSceneSubSequenceData.DeterministicSequenceID */
    FFloatRange PreRollRange; /* Ofs: 0x2C Size: 0x10 StructProperty MovieScene.MovieSceneSubSequenceData.PreRollRange */
    FFloatRange PostRollRange; /* Ofs: 0x3C Size: 0x10 StructProperty MovieScene.MovieSceneSubSequenceData.PostRollRange */
    int32_t HierarchicalBias; /* Ofs: 0x4C Size: 0x4 IntProperty MovieScene.MovieSceneSubSequenceData.HierarchicalBias */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSubSequenceData = sizeof(FMovieSceneSubSequenceData); // 80
    static_assert(sizeof(FMovieSceneSubSequenceData) == 0x50, "Size of FMovieSceneSubSequenceData is not correct.");
	auto constexpr FMovieSceneSubSequenceData_Sequence_Offset = offsetof(FMovieSceneSubSequenceData, Sequence);
	static_assert(FMovieSceneSubSequenceData_Sequence_Offset == 0x0, "FMovieSceneSubSequenceData::Sequence offset is not 0");
	auto constexpr FMovieSceneSubSequenceData_SequenceKeyObject_Offset = offsetof(FMovieSceneSubSequenceData, SequenceKeyObject);
	static_assert(FMovieSceneSubSequenceData_SequenceKeyObject_Offset == 0x8, "FMovieSceneSubSequenceData::SequenceKeyObject offset is not 8");
	auto constexpr FMovieSceneSubSequenceData_RootToSequenceTransform_Offset = offsetof(FMovieSceneSubSequenceData, RootToSequenceTransform);
	static_assert(FMovieSceneSubSequenceData_RootToSequenceTransform_Offset == 0x10, "FMovieSceneSubSequenceData::RootToSequenceTransform offset is not 10");
	auto constexpr FMovieSceneSubSequenceData_SourceSequenceSignature_Offset = offsetof(FMovieSceneSubSequenceData, SourceSequenceSignature);
	static_assert(FMovieSceneSubSequenceData_SourceSequenceSignature_Offset == 0x18, "FMovieSceneSubSequenceData::SourceSequenceSignature offset is not 18");
	auto constexpr FMovieSceneSubSequenceData_DeterministicSequenceID_Offset = offsetof(FMovieSceneSubSequenceData, DeterministicSequenceID);
	static_assert(FMovieSceneSubSequenceData_DeterministicSequenceID_Offset == 0x28, "FMovieSceneSubSequenceData::DeterministicSequenceID offset is not 28");
	auto constexpr FMovieSceneSubSequenceData_PreRollRange_Offset = offsetof(FMovieSceneSubSequenceData, PreRollRange);
	static_assert(FMovieSceneSubSequenceData_PreRollRange_Offset == 0x2c, "FMovieSceneSubSequenceData::PreRollRange offset is not 2c");
	auto constexpr FMovieSceneSubSequenceData_PostRollRange_Offset = offsetof(FMovieSceneSubSequenceData, PostRollRange);
	static_assert(FMovieSceneSubSequenceData_PostRollRange_Offset == 0x3c, "FMovieSceneSubSequenceData::PostRollRange offset is not 3c");
	auto constexpr FMovieSceneSubSequenceData_HierarchicalBias_Offset = offsetof(FMovieSceneSubSequenceData, HierarchicalBias);
	static_assert(FMovieSceneSubSequenceData_HierarchicalBias_Offset == 0x4c, "FMovieSceneSubSequenceData::HierarchicalBias offset is not 4c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
