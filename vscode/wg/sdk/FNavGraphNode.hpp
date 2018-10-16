#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNavGraphNode // Size: 0x18
{
public:
    ExternalPtr<struct UObject> Owner; /* Ofs: 0x0 Size: 0x8 ObjectProperty Engine.NavGraphNode.Owner */
    uint8_t UnknownData8[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNavGraphNode = sizeof(FNavGraphNode); // 24
    static_assert(sizeof(FNavGraphNode) == 0x18, "Size of FNavGraphNode is not correct.");
	auto constexpr FNavGraphNode_Owner_Offset = offsetof(FNavGraphNode, Owner);
	static_assert(FNavGraphNode_Owner_Offset == 0x0, "FNavGraphNode::Owner offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
