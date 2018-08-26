#pragma once
#include "UCommandlet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USmokeTestCommandlet // Size: 0x88
	: public UCommandlet // Size: 0x88
{
private:
	typedef USmokeTestCommandlet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(702); // id32("Class Engine.SmokeTestCommandlet")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSmokeTestCommandlet = sizeof(USmokeTestCommandlet); // 136
    static_assert(sizeof(USmokeTestCommandlet) == 0x88, "Size of USmokeTestCommandlet is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
