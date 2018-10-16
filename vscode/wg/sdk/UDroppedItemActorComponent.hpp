#pragma once
#include "UInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItemActorComponent // Size: 0x390
	: public UInteractionComponent // Size: 0x370
{
private:
	typedef UDroppedItemActorComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1898); // id32("Class TslGame.DroppedItemActorComponent")
		return ptr;
	}
	uint8_t UnknownData370[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItemActorComponent = sizeof(UDroppedItemActorComponent); // 912
    static_assert(sizeof(UDroppedItemActorComponent) == 0x390, "Size of UDroppedItemActorComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
