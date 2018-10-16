#pragma once
#include "USceneInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItemInteractionComponent // Size: 0x600
	: public USceneInteractionComponent // Size: 0x5A0
{
private:
	typedef UDroppedItemInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1949); // id32("Class TslGame.DroppedItemInteractionComponent")
		return ptr;
	}
	uint8_t UnknownData5A0[0x38];
	ExternalPtr<struct UItem> Item; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty TslGame.DroppedItemInteractionComponent.Item */
	uint8_t UnknownData5E0[0x8];
	ExternalPtr<struct UAsyncStaticMeshComponent> StaticMeshComponent; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty TslGame.DroppedItemInteractionComponent.StaticMeshComponent */
	uint8_t UnknownData5F0[0x10];


	inline bool SetItem(t_structHelper inst, ExternalPtr<struct UItem> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetStaticMeshComponent(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x5E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItemInteractionComponent = sizeof(UDroppedItemInteractionComponent); // 1536
    static_assert(sizeof(UDroppedItemInteractionComponent) == 0x600, "Size of UDroppedItemInteractionComponent is not correct.");
	auto constexpr UDroppedItemInteractionComponent_Item_Offset = offsetof(UDroppedItemInteractionComponent, Item);
	static_assert(UDroppedItemInteractionComponent_Item_Offset == 0x5d8, "UDroppedItemInteractionComponent::Item offset is not 5d8");
	auto constexpr UDroppedItemInteractionComponent_StaticMeshComponent_Offset = offsetof(UDroppedItemInteractionComponent, StaticMeshComponent);
	static_assert(UDroppedItemInteractionComponent_StaticMeshComponent_Offset == 0x5e8, "UDroppedItemInteractionComponent::StaticMeshComponent offset is not 5e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
