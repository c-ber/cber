#pragma once
#include "UCombinedThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingSpawnProcessor_Desert_C // Size: 0x68
	: public UCombinedThingSpawnProcessor // Size: 0x68
{
private:
	typedef UThingSpawnProcessor_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135559); // id32("BlueprintGeneratedClass ThingSpawnProcessor_Desert.ThingSpawnProcessor_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingSpawnProcessor_Desert_C = sizeof(UThingSpawnProcessor_Desert_C); // 104
    static_assert(sizeof(UThingSpawnProcessor_Desert_C) == 0x68, "Size of UThingSpawnProcessor_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
