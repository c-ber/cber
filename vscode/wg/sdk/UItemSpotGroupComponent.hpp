#pragma once
#include "USceneComponent.hpp"
#include "EItemSpotGroupType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSpotGroupComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UItemSpotGroupComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1919); // id32("Class TslGame.ItemSpotGroupComponent")
		return ptr;
	}
	TEnumAsByte<enum EItemSpotGroupType> SpotGroupType; /* Ofs: 0x490 Size: 0x1 - EnumProperty TslGame.ItemSpotGroupComponent.SpotGroupType */
	uint8_t UnknownData491[0xF];


	inline bool SetSpotGroupType(t_structHelper inst, TEnumAsByte<enum EItemSpotGroupType> value) { inst.WriteOffset(0x490, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSpotGroupComponent = sizeof(UItemSpotGroupComponent); // 1184
    static_assert(sizeof(UItemSpotGroupComponent) == 0x4A0, "Size of UItemSpotGroupComponent is not correct.");
	auto constexpr UItemSpotGroupComponent_SpotGroupType_Offset = offsetof(UItemSpotGroupComponent, SpotGroupType);
	static_assert(UItemSpotGroupComponent_SpotGroupType_Offset == 0x490, "UItemSpotGroupComponent::SpotGroupType offset is not 490");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
