#pragma once
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNodeMap // Size: 0x40
{
public:
    FName TargetNodeName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.NodeMap.TargetNodeName */
    uint8_t UnknownData8[0x8];
    FTransform SourceToTargetTransform; /* Ofs: 0x10 Size: 0x30 StructProperty Engine.NodeMap.SourceToTargetTransform */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNodeMap = sizeof(FNodeMap); // 64
    static_assert(sizeof(FNodeMap) == 0x40, "Size of FNodeMap is not correct.");
	auto constexpr FNodeMap_TargetNodeName_Offset = offsetof(FNodeMap, TargetNodeName);
	static_assert(FNodeMap_TargetNodeName_Offset == 0x0, "FNodeMap::TargetNodeName offset is not 0");
	auto constexpr FNodeMap_SourceToTargetTransform_Offset = offsetof(FNodeMap, SourceToTargetTransform);
	static_assert(FNodeMap_SourceToTargetTransform_Offset == 0x10, "FNodeMap::SourceToTargetTransform offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
