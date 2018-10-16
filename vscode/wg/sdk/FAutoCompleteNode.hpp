#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAutoCompleteNode // Size: 0x28
{
public:
    int32_t IndexChar; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.AutoCompleteNode.IndexChar */
    uint8_t UnknownData4[0x4];
    TArray<int32_t> AutoCompleteListIndices; /* Ofs: 0x8 Size: 0x10 ArrayProperty Engine.AutoCompleteNode.AutoCompleteListIndices */
    uint8_t UnknownData18[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAutoCompleteNode = sizeof(FAutoCompleteNode); // 40
    static_assert(sizeof(FAutoCompleteNode) == 0x28, "Size of FAutoCompleteNode is not correct.");
	auto constexpr FAutoCompleteNode_IndexChar_Offset = offsetof(FAutoCompleteNode, IndexChar);
	static_assert(FAutoCompleteNode_IndexChar_Offset == 0x0, "FAutoCompleteNode::IndexChar offset is not 0");
	auto constexpr FAutoCompleteNode_AutoCompleteListIndices_Offset = offsetof(FAutoCompleteNode, AutoCompleteListIndices);
	static_assert(FAutoCompleteNode_AutoCompleteListIndices_Offset == 0x8, "FAutoCompleteNode::AutoCompleteListIndices offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
