#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeHierarchyData // Size: 0x70
{
public:
    TArray<struct FNodeObject> Nodes; /* Ofs: 0x0 Size: 0x10 ArrayProperty AnimationCore.NodeHierarchyData.Nodes */
    TArray<struct FTransform> Transforms; /* Ofs: 0x10 Size: 0x10 ArrayProperty AnimationCore.NodeHierarchyData.Transforms */
    TMap<struct FName, int32_t> NodeNameToIndexMapping; /* Ofs: 0x20 Size: 0x50 MapProperty AnimationCore.NodeHierarchyData.NodeNameToIndexMapping */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeHierarchyData = sizeof(FNodeHierarchyData); // 112
    static_assert(sizeof(FNodeHierarchyData) == 0x70, "Size of FNodeHierarchyData is not correct.");
	auto constexpr FNodeHierarchyData_Nodes_Offset = offsetof(FNodeHierarchyData, Nodes);
	static_assert(FNodeHierarchyData_Nodes_Offset == 0x0, "FNodeHierarchyData::Nodes offset is not 0");
	auto constexpr FNodeHierarchyData_Transforms_Offset = offsetof(FNodeHierarchyData, Transforms);
	static_assert(FNodeHierarchyData_Transforms_Offset == 0x10, "FNodeHierarchyData::Transforms offset is not 10");
	auto constexpr FNodeHierarchyData_NodeNameToIndexMapping_Offset = offsetof(FNodeHierarchyData, NodeNameToIndexMapping);
	static_assert(FNodeHierarchyData_NodeNameToIndexMapping_Offset == 0x20, "FNodeHierarchyData::NodeNameToIndexMapping offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
