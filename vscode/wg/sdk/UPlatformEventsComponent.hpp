#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlatformEventsComponent // Size: 0x210
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPlatformEventsComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1812); // id32("Class Engine.PlatformEventsComponent")
		return ptr;
	}
//	FScriptMulticastDelegate PlatformChangedToLaptopModeDelegate; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty Engine.PlatformEventsComponent.PlatformChangedToLaptopModeDelegate */
	uint8_t UnknownData1F0[0x8];
	FScriptMulticastDelegate PlatformChangedToTabletModeDelegate; /* Ofs: 0x1F8 Size: 0x10 - MulticastDelegateProperty Engine.PlatformEventsComponent.PlatformChangedToTabletModeDelegate */
	uint8_t UnknownData208[0x8];


//	inline bool SetPlatformChangedToLaptopModeDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetPlatformChangedToTabletModeDelegate(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlatformEventsComponent = sizeof(UPlatformEventsComponent); // 528
    static_assert(sizeof(UPlatformEventsComponent) == 0x210, "Size of UPlatformEventsComponent is not correct.");
//	auto constexpr UPlatformEventsComponent_PlatformChangedToLaptopModeDelegate_Offset = offsetof(UPlatformEventsComponent, PlatformChangedToLaptopModeDelegate);
//	static_assert(UPlatformEventsComponent_PlatformChangedToLaptopModeDelegate_Offset == 0x1e8, "UPlatformEventsComponent::PlatformChangedToLaptopModeDelegate offset is not 1e8");
	auto constexpr UPlatformEventsComponent_PlatformChangedToTabletModeDelegate_Offset = offsetof(UPlatformEventsComponent, PlatformChangedToTabletModeDelegate);
	static_assert(UPlatformEventsComponent_PlatformChangedToTabletModeDelegate_Offset == 0x1f8, "UPlatformEventsComponent::PlatformChangedToTabletModeDelegate offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
