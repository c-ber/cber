#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClusterNode // Size: 0x28
{
public:
    FVector BoundMin; /* Ofs: 0x0 Size: 0xC StructProperty Engine.ClusterNode.BoundMin */
    int32_t FirstChild; /* Ofs: 0xC Size: 0x4 IntProperty Engine.ClusterNode.FirstChild */
    FVector BoundMax; /* Ofs: 0x10 Size: 0xC StructProperty Engine.ClusterNode.BoundMax */
    int32_t LastChild; /* Ofs: 0x1C Size: 0x4 IntProperty Engine.ClusterNode.LastChild */
    int32_t FirstInstance; /* Ofs: 0x20 Size: 0x4 IntProperty Engine.ClusterNode.FirstInstance */
    int32_t LastInstance; /* Ofs: 0x24 Size: 0x4 IntProperty Engine.ClusterNode.LastInstance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClusterNode = sizeof(FClusterNode); // 40
    static_assert(sizeof(FClusterNode) == 0x28, "Size of FClusterNode is not correct.");
	auto constexpr FClusterNode_BoundMin_Offset = offsetof(FClusterNode, BoundMin);
	static_assert(FClusterNode_BoundMin_Offset == 0x0, "FClusterNode::BoundMin offset is not 0");
	auto constexpr FClusterNode_FirstChild_Offset = offsetof(FClusterNode, FirstChild);
	static_assert(FClusterNode_FirstChild_Offset == 0xc, "FClusterNode::FirstChild offset is not c");
	auto constexpr FClusterNode_BoundMax_Offset = offsetof(FClusterNode, BoundMax);
	static_assert(FClusterNode_BoundMax_Offset == 0x10, "FClusterNode::BoundMax offset is not 10");
	auto constexpr FClusterNode_LastChild_Offset = offsetof(FClusterNode, LastChild);
	static_assert(FClusterNode_LastChild_Offset == 0x1c, "FClusterNode::LastChild offset is not 1c");
	auto constexpr FClusterNode_FirstInstance_Offset = offsetof(FClusterNode, FirstInstance);
	static_assert(FClusterNode_FirstInstance_Offset == 0x20, "FClusterNode::FirstInstance offset is not 20");
	auto constexpr FClusterNode_LastInstance_Offset = offsetof(FClusterNode, LastInstance);
	static_assert(FClusterNode_LastInstance_Offset == 0x24, "FClusterNode::LastInstance offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
