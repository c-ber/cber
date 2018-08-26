#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingHolder // Size: 0x4B0
	: public UActor // Size: 0x410
{
private:
	typedef UThingHolder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1976); // id32("Class TslGame.ThingHolder")
		return ptr;
	}
	uint8_t UnknownData410[0xA0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingHolder = sizeof(UThingHolder); // 1200
    static_assert(sizeof(UThingHolder) == 0x4B0, "Size of UThingHolder is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
