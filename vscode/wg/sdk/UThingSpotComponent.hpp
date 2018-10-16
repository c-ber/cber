#pragma once
#include "USceneComponent.hpp"
#include "EThingSpotGroupType.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingSpotComponent // Size: 0x4A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UThingSpotComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1978); // id32("Class TslGame.ThingSpotComponent")
		return ptr;
	}
	TEnumAsByte<enum EThingSpotGroupType> SpotGroupType; /* Ofs: 0x490 Size: 0x1 - EnumProperty TslGame.ThingSpotComponent.SpotGroupType */
	uint8_t UnknownData491[0x3];
	FVector2D RandomRotatorRange; /* Ofs: 0x494 Size: 0x8 - StructProperty TslGame.ThingSpotComponent.RandomRotatorRange */
	uint8_t UnknownData49C[0x4];


	inline bool SetSpotGroupType(t_structHelper inst, TEnumAsByte<enum EThingSpotGroupType> value) { inst.WriteOffset(0x490, value); }
	inline bool SetRandomRotatorRange(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x494, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingSpotComponent = sizeof(UThingSpotComponent); // 1184
    static_assert(sizeof(UThingSpotComponent) == 0x4A0, "Size of UThingSpotComponent is not correct.");
	auto constexpr UThingSpotComponent_SpotGroupType_Offset = offsetof(UThingSpotComponent, SpotGroupType);
	static_assert(UThingSpotComponent_SpotGroupType_Offset == 0x490, "UThingSpotComponent::SpotGroupType offset is not 490");
	auto constexpr UThingSpotComponent_RandomRotatorRange_Offset = offsetof(UThingSpotComponent, RandomRotatorRange);
	static_assert(UThingSpotComponent_RandomRotatorRange_Offset == 0x494, "UThingSpotComponent::RandomRotatorRange offset is not 494");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
