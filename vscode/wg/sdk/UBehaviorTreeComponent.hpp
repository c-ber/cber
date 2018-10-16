#pragma once
#include "UBrainComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBehaviorTreeComponent // Size: 0x380
	: public UBrainComponent // Size: 0x250
{
private:
	typedef UBehaviorTreeComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(551); // id32("Class AIModule.BehaviorTreeComponent")
		return ptr;
	}
	uint8_t UnknownData250[0x18];
	TArray<ExternalPtr<struct UBTNode>> NodeInstances; /* Ofs: 0x268 Size: 0x10 - ArrayProperty AIModule.BehaviorTreeComponent.NodeInstances */
	uint8_t UnknownData278[0x108];


	inline bool SetNodeInstances(t_structHelper inst, TArray<ExternalPtr<struct UBTNode>> value) { inst.WriteOffset(0x268, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBehaviorTreeComponent = sizeof(UBehaviorTreeComponent); // 896
    static_assert(sizeof(UBehaviorTreeComponent) == 0x380, "Size of UBehaviorTreeComponent is not correct.");
	auto constexpr UBehaviorTreeComponent_NodeInstances_Offset = offsetof(UBehaviorTreeComponent, NodeInstances);
	static_assert(UBehaviorTreeComponent_NodeInstances_Offset == 0x268, "UBehaviorTreeComponent::NodeInstances offset is not 268");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
