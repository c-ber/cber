#pragma once
#include "URedZoneController_Def_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URedZoneController_Desert_C // Size: 0x5F8
	: public URedZoneController_Def_C // Size: 0x5F8
{
private:
	typedef URedZoneController_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135562); // id32("BlueprintGeneratedClass RedZoneController_Desert.RedZoneController_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURedZoneController_Desert_C = sizeof(URedZoneController_Desert_C); // 1528
    static_assert(sizeof(URedZoneController_Desert_C) == 0x5F8, "Size of URedZoneController_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
