#pragma once
#include "UPlatformInterfaceBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTwitterIntegrationBase // Size: 0x40
	: public UPlatformInterfaceBase // Size: 0x40
{
private:
	typedef UTwitterIntegrationBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1182); // id32("Class Engine.TwitterIntegrationBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTwitterIntegrationBase = sizeof(UTwitterIntegrationBase); // 64
    static_assert(sizeof(UTwitterIntegrationBase) == 0x40, "Size of UTwitterIntegrationBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
