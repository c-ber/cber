#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightmassPortal // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef ULightmassPortal t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1753); // id32("Class Engine.LightmassPortal")
		return ptr;
	}
//	ExternalPtr<struct ULightmassPortalComponent> PortalComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty Engine.LightmassPortal.PortalComponent */


//	inline bool SetPortalComponent(t_structHelper inst, ExternalPtr<struct ULightmassPortalComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightmassPortal = sizeof(ULightmassPortal); // 1040
    static_assert(sizeof(ULightmassPortal) == 0x410, "Size of ULightmassPortal is not correct.");
//	auto constexpr ULightmassPortal_PortalComponent_Offset = offsetof(ULightmassPortal, PortalComponent);
//	static_assert(ULightmassPortal_PortalComponent_Offset == 0x408, "ULightmassPortal::PortalComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
