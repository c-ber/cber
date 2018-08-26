#pragma once
#include "UPackageSubThingSpawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPackageSpawnProcessor_Default_C // Size: 0x400
	: public UPackageSubThingSpawnProcessor // Size: 0x400
{
private:
	typedef UPackageSpawnProcessor_Default_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126240); // id32("BlueprintGeneratedClass PackageSpawnProcessor_Default.PackageSpawnProcessor_Default_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPackageSpawnProcessor_Default_C = sizeof(UPackageSpawnProcessor_Default_C); // 1024
    static_assert(sizeof(UPackageSpawnProcessor_Default_C) == 0x400, "Size of UPackageSpawnProcessor_Default_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
