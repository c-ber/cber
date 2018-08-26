#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequenceHierarchy // Size: 0xA0
{
public:
    TMap<uint32_t, struct FMovieSceneSubSequenceData> SubSequences; /* Ofs: 0x0 Size: 0x50 MapProperty MovieScene.MovieSceneSequenceHierarchy.SubSequences */
    TMap<uint32_t, struct FMovieSceneSequenceHierarchyNode> Hierarchy; /* Ofs: 0x50 Size: 0x50 MapProperty MovieScene.MovieSceneSequenceHierarchy.Hierarchy */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequenceHierarchy = sizeof(FMovieSceneSequenceHierarchy); // 160
    static_assert(sizeof(FMovieSceneSequenceHierarchy) == 0xA0, "Size of FMovieSceneSequenceHierarchy is not correct.");
	auto constexpr FMovieSceneSequenceHierarchy_SubSequences_Offset = offsetof(FMovieSceneSequenceHierarchy, SubSequences);
	static_assert(FMovieSceneSequenceHierarchy_SubSequences_Offset == 0x0, "FMovieSceneSequenceHierarchy::SubSequences offset is not 0");
	auto constexpr FMovieSceneSequenceHierarchy_Hierarchy_Offset = offsetof(FMovieSceneSequenceHierarchy, Hierarchy);
	static_assert(FMovieSceneSequenceHierarchy_Hierarchy_Offset == 0x50, "FMovieSceneSequenceHierarchy::Hierarchy offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
