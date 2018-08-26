#pragma once
#include "FMovieSceneSequenceID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMovieSceneSequenceHierarchyNode // Size: 0x18
{
public:
    FMovieSceneSequenceID ParentID; /* Ofs: 0x0 Size: 0x4 StructProperty MovieScene.MovieSceneSequenceHierarchyNode.ParentID */
    uint8_t UnknownData4[0x4];
    TArray<struct FMovieSceneSequenceID> Children; /* Ofs: 0x8 Size: 0x10 ArrayProperty MovieScene.MovieSceneSequenceHierarchyNode.Children */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMovieSceneSequenceHierarchyNode = sizeof(FMovieSceneSequenceHierarchyNode); // 24
    static_assert(sizeof(FMovieSceneSequenceHierarchyNode) == 0x18, "Size of FMovieSceneSequenceHierarchyNode is not correct.");
	auto constexpr FMovieSceneSequenceHierarchyNode_ParentID_Offset = offsetof(FMovieSceneSequenceHierarchyNode, ParentID);
	static_assert(FMovieSceneSequenceHierarchyNode_ParentID_Offset == 0x0, "FMovieSceneSequenceHierarchyNode::ParentID offset is not 0");
	auto constexpr FMovieSceneSequenceHierarchyNode_Children_Offset = offsetof(FMovieSceneSequenceHierarchyNode, Children);
	static_assert(FMovieSceneSequenceHierarchyNode_Children_Offset == 0x8, "FMovieSceneSequenceHierarchyNode::Children offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
