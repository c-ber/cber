#pragma once
#include "FFloatRange.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneEditorData // Size: 0x70
{
public:
    TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; /* Ofs: 0x0 Size: 0x50 MapProperty MovieScene.MovieSceneEditorData.ExpansionStates */
    FFloatRange WorkingRange; /* Ofs: 0x50 Size: 0x10 StructProperty MovieScene.MovieSceneEditorData.WorkingRange */
    FFloatRange ViewRange; /* Ofs: 0x60 Size: 0x10 StructProperty MovieScene.MovieSceneEditorData.ViewRange */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneEditorData = sizeof(FMovieSceneEditorData); // 112
    static_assert(sizeof(FMovieSceneEditorData) == 0x70, "Size of FMovieSceneEditorData is not correct.");
	auto constexpr FMovieSceneEditorData_ExpansionStates_Offset = offsetof(FMovieSceneEditorData, ExpansionStates);
	static_assert(FMovieSceneEditorData_ExpansionStates_Offset == 0x0, "FMovieSceneEditorData::ExpansionStates offset is not 0");
	auto constexpr FMovieSceneEditorData_WorkingRange_Offset = offsetof(FMovieSceneEditorData, WorkingRange);
	static_assert(FMovieSceneEditorData_WorkingRange_Offset == 0x50, "FMovieSceneEditorData::WorkingRange offset is not 50");
	auto constexpr FMovieSceneEditorData_ViewRange_Offset = offsetof(FMovieSceneEditorData, ViewRange);
	static_assert(FMovieSceneEditorData_ViewRange_Offset == 0x60, "FMovieSceneEditorData::ViewRange offset is not 60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
