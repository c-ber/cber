#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuoyantDestructible // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef UBuoyantDestructible t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2054); // id32("Class OceanPlugin.BuoyantDestructible")
		return ptr;
	}
//	ExternalPtr<struct UBuoyantDestructibleComponent> BuoyantDestructibleComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty OceanPlugin.BuoyantDestructible.BuoyantDestructibleComponent */


//	inline bool SetBuoyantDestructibleComponent(t_structHelper inst, ExternalPtr<struct UBuoyantDestructibleComponent> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuoyantDestructible = sizeof(UBuoyantDestructible); // 1040
    static_assert(sizeof(UBuoyantDestructible) == 0x410, "Size of UBuoyantDestructible is not correct.");
//	auto constexpr UBuoyantDestructible_BuoyantDestructibleComponent_Offset = offsetof(UBuoyantDestructible, BuoyantDestructibleComponent);
//	static_assert(UBuoyantDestructible_BuoyantDestructibleComponent_Offset == 0x408, "UBuoyantDestructible::BuoyantDestructibleComponent offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
