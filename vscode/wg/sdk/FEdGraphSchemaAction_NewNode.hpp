#pragma once
#include "FEdGraphSchemaAction.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEdGraphSchemaAction_NewNode // Size: 0x108
 : public FEdGraphSchemaAction // Size: 0x100
{
public:
    ExternalPtr<struct UEdGraphNode> NodeTemplate; /* Ofs: 0x100 Size: 0x8 ObjectProperty Engine.EdGraphSchemaAction_NewNode.NodeTemplate */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEdGraphSchemaAction_NewNode = sizeof(FEdGraphSchemaAction_NewNode); // 264
    static_assert(sizeof(FEdGraphSchemaAction_NewNode) == 0x108, "Size of FEdGraphSchemaAction_NewNode is not correct.");
	auto constexpr FEdGraphSchemaAction_NewNode_NodeTemplate_Offset = offsetof(FEdGraphSchemaAction_NewNode, NodeTemplate);
	static_assert(FEdGraphSchemaAction_NewNode_NodeTemplate_Offset == 0x100, "FEdGraphSchemaAction_NewNode::NodeTemplate offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
