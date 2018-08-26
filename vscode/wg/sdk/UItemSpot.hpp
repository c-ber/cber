#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSpot // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UItemSpot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1917); // id32("Class TslGame.ItemSpot")
		return ptr;
	}
//	ExternalPtr<struct UItemSpotGroupComponent> SpotGroupComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.ItemSpot.SpotGroupComponent */


//	inline bool SetSpotGroupComponent(t_structHelper inst, ExternalPtr<struct UItemSpotGroupComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSpot = sizeof(UItemSpot); // 1040
    static_assert(sizeof(UItemSpot) == 0x410, "Size of UItemSpot is not correct.");
//	auto constexpr UItemSpot_SpotGroupComponent_Offset = offsetof(UItemSpot, SpotGroupComponent);
//	static_assert(UItemSpot_SpotGroupComponent_Offset == 0x408, "UItemSpot::SpotGroupComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
