#pragma once
#include "UPackageMap.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPackageMapClient // Size: 0x378
	: public UPackageMap // Size: 0xE8
{
private:
	typedef UPackageMapClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(716); // id32("Class Engine.PackageMapClient")
		return ptr;
	}
	uint8_t UnknownDataE8[0x290];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPackageMapClient = sizeof(UPackageMapClient); // 888
    static_assert(sizeof(UPackageMapClient) == 0x378, "Size of UPackageMapClient is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
