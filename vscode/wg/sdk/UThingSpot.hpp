#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingSpot // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UThingSpot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1977); // id32("Class TslGame.ThingSpot")
		return ptr;
	}
//	ExternalPtr<struct UThingSpotComponent> SpotComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.ThingSpot.SpotComponent */


//	inline bool SetSpotComponent(t_structHelper inst, ExternalPtr<struct UThingSpotComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingSpot = sizeof(UThingSpot); // 1040
    static_assert(sizeof(UThingSpot) == 0x410, "Size of UThingSpot is not correct.");
//	auto constexpr UThingSpot_SpotComponent_Offset = offsetof(UThingSpot, SpotComponent);
//	static_assert(UThingSpot_SpotComponent_Offset == 0x408, "UThingSpot::SpotComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
