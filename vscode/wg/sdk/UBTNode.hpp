#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTNode // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UBTNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(417); // id32("Class AIModule.BTNode")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FString NodeName; /* Ofs: 0x38 Size: 0x10 - StrProperty AIModule.BTNode.NodeName */
	ExternalPtr<struct UBehaviorTree> TreeAsset; /* Ofs: 0x48 Size: 0x8 - ObjectProperty AIModule.BTNode.TreeAsset */
	ExternalPtr<struct UBTCompositeNode> ParentNode; /* Ofs: 0x50 Size: 0x8 - ObjectProperty AIModule.BTNode.ParentNode */
	uint8_t UnknownData58[0x8];


	inline bool SetNodeName(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetTreeAsset(t_structHelper inst, ExternalPtr<struct UBehaviorTree> value) { inst.WriteOffset(0x48, value); }
	inline bool SetParentNode(t_structHelper inst, ExternalPtr<struct UBTCompositeNode> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTNode = sizeof(UBTNode); // 96
    static_assert(sizeof(UBTNode) == 0x60, "Size of UBTNode is not correct.");
	auto constexpr UBTNode_NodeName_Offset = offsetof(UBTNode, NodeName);
	static_assert(UBTNode_NodeName_Offset == 0x38, "UBTNode::NodeName offset is not 38");
	auto constexpr UBTNode_TreeAsset_Offset = offsetof(UBTNode, TreeAsset);
	static_assert(UBTNode_TreeAsset_Offset == 0x48, "UBTNode::TreeAsset offset is not 48");
	auto constexpr UBTNode_ParentNode_Offset = offsetof(UBTNode, ParentNode);
	static_assert(UBTNode_ParentNode_Offset == 0x50, "UBTNode::ParentNode offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
