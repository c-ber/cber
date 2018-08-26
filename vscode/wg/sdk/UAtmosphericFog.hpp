#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAtmosphericFog // Size: 0x410
	: public UInfo // Size: 0x410
{
private:
	typedef UAtmosphericFog t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1741); // id32("Class Engine.AtmosphericFog")
		return ptr;
	}
//	ExternalPtr<struct UAtmosphericFogComponent> AtmosphericFogComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.AtmosphericFog.AtmosphericFogComponent */


//	inline bool SetAtmosphericFogComponent(t_structHelper inst, ExternalPtr<struct UAtmosphericFogComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAtmosphericFog = sizeof(UAtmosphericFog); // 1040
    static_assert(sizeof(UAtmosphericFog) == 0x410, "Size of UAtmosphericFog is not correct.");
//	auto constexpr UAtmosphericFog_AtmosphericFogComponent_Offset = offsetof(UAtmosphericFog, AtmosphericFogComponent);
//	static_assert(UAtmosphericFog_AtmosphericFogComponent_Offset == 0x408, "UAtmosphericFog::AtmosphericFogComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
