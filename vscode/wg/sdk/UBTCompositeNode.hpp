#pragma once
#include "UBTNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTCompositeNode // Size: 0xD0
	: public UBTNode // Size: 0x60
{
private:
	typedef UBTCompositeNode t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(552); // id32("Class AIModule.BTCompositeNode")
		return ptr;
	}
	TArray<struct FBTCompositeChild> Children; /* Ofs: 0x60 Size: 0x10 - ArrayProperty AIModule.BTCompositeNode.Children */
	TArray<ExternalPtr<struct UBTService>> Services; /* Ofs: 0x70 Size: 0x10 - ArrayProperty AIModule.BTCompositeNode.Services */
	uint8_t UnknownData80[0x50];


	inline bool SetChildren(t_structHelper inst, TArray<struct FBTCompositeChild> value) { inst.WriteOffset(0x60, value); }
	inline bool SetServices(t_structHelper inst, TArray<ExternalPtr<struct UBTService>> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTCompositeNode = sizeof(UBTCompositeNode); // 208
    static_assert(sizeof(UBTCompositeNode) == 0xD0, "Size of UBTCompositeNode is not correct.");
	auto constexpr UBTCompositeNode_Children_Offset = offsetof(UBTCompositeNode, Children);
	static_assert(UBTCompositeNode_Children_Offset == 0x60, "UBTCompositeNode::Children offset is not 60");
	auto constexpr UBTCompositeNode_Services_Offset = offsetof(UBTCompositeNode, Services);
	static_assert(UBTCompositeNode_Services_Offset == 0x70, "UBTCompositeNode::Services offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
