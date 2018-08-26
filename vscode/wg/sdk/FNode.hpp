#pragma once
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNode // Size: 0x60
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.Node.Name */
    FName ParentName; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.Node.ParentName */
    FTransform Transform; /* Ofs: 0x10 Size: 0x30 StructProperty Engine.Node.Transform */
    FString DisplayName; /* Ofs: 0x40 Size: 0x10 StrProperty Engine.Node.DisplayName */
    bool bAdvanced; /* Ofs: 0x50 Size: 0x1 BitMask: 01 BoolProperty Engine.Node.bAdvanced */
    uint8_t UnknownData51[0xF];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNode = sizeof(FNode); // 96
    static_assert(sizeof(FNode) == 0x60, "Size of FNode is not correct.");
	auto constexpr FNode_Name_Offset = offsetof(FNode, Name);
	static_assert(FNode_Name_Offset == 0x0, "FNode::Name offset is not 0");
	auto constexpr FNode_ParentName_Offset = offsetof(FNode, ParentName);
	static_assert(FNode_ParentName_Offset == 0x8, "FNode::ParentName offset is not 8");
	auto constexpr FNode_Transform_Offset = offsetof(FNode, Transform);
	static_assert(FNode_Transform_Offset == 0x10, "FNode::Transform offset is not 10");
	auto constexpr FNode_DisplayName_Offset = offsetof(FNode, DisplayName);
	static_assert(FNode_DisplayName_Offset == 0x40, "FNode::DisplayName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
