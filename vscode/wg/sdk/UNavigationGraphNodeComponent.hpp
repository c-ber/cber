#pragma once
#include "USceneComponent.hpp"
#include "FNavGraphNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationGraphNodeComponent // Size: 0x4C0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UNavigationGraphNodeComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193); // id32("Class Engine.NavigationGraphNodeComponent")
		return ptr;
	}
	FNavGraphNode Node; /* Ofs: 0x490 Size: 0x18 - StructProperty Engine.NavigationGraphNodeComponent.Node */
	ExternalPtr<struct UNavigationGraphNodeComponent> NextNodeComponent; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty Engine.NavigationGraphNodeComponent.NextNodeComponent */
	ExternalPtr<struct UNavigationGraphNodeComponent> PrevNodeComponent; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty Engine.NavigationGraphNodeComponent.PrevNodeComponent */
	uint8_t UnknownData4B8[0x8];


	inline bool SetNode(t_structHelper inst, FNavGraphNode value) { inst.WriteOffset(0x490, value); }
	inline bool SetNextNodeComponent(t_structHelper inst, ExternalPtr<struct UNavigationGraphNodeComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetPrevNodeComponent(t_structHelper inst, ExternalPtr<struct UNavigationGraphNodeComponent> value) { inst.WriteOffset(0x4B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationGraphNodeComponent = sizeof(UNavigationGraphNodeComponent); // 1216
    static_assert(sizeof(UNavigationGraphNodeComponent) == 0x4C0, "Size of UNavigationGraphNodeComponent is not correct.");
	auto constexpr UNavigationGraphNodeComponent_Node_Offset = offsetof(UNavigationGraphNodeComponent, Node);
	static_assert(UNavigationGraphNodeComponent_Node_Offset == 0x490, "UNavigationGraphNodeComponent::Node offset is not 490");
	auto constexpr UNavigationGraphNodeComponent_NextNodeComponent_Offset = offsetof(UNavigationGraphNodeComponent, NextNodeComponent);
	static_assert(UNavigationGraphNodeComponent_NextNodeComponent_Offset == 0x4a8, "UNavigationGraphNodeComponent::NextNodeComponent offset is not 4a8");
	auto constexpr UNavigationGraphNodeComponent_PrevNodeComponent_Offset = offsetof(UNavigationGraphNodeComponent, PrevNodeComponent);
	static_assert(UNavigationGraphNodeComponent_PrevNodeComponent_Offset == 0x4b0, "UNavigationGraphNodeComponent::PrevNodeComponent offset is not 4b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
