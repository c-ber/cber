#pragma once
#include "USceneComponent.hpp"
#include "EItemSpotType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSpotComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UItemSpotComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1918); // id32("Class TslGame.ItemSpotComponent")
		return ptr;
	}
	TEnumAsByte<enum EItemSpotType> ItemSpotType; /* Ofs: 0x490 Size: 0x1 - EnumProperty TslGame.ItemSpotComponent.ItemSpotType */
	uint8_t UnknownData491[0xF];


	inline bool SetItemSpotType(t_structHelper inst, TEnumAsByte<enum EItemSpotType> value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSpotComponent = sizeof(UItemSpotComponent); // 1184
    static_assert(sizeof(UItemSpotComponent) == 0x4A0, "Size of UItemSpotComponent is not correct.");
	auto constexpr UItemSpotComponent_ItemSpotType_Offset = offsetof(UItemSpotComponent, ItemSpotType);
	static_assert(UItemSpotComponent_ItemSpotType_Offset == 0x490, "UItemSpotComponent::ItemSpotType offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
