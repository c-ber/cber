#pragma once
#include "UCommandlet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPluginCommandlet // Size: 0xA8
	: public UCommandlet // Size: 0x88
{
private:
	typedef UPluginCommandlet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(701); // id32("Class Engine.PluginCommandlet")
		return ptr;
	}
	uint8_t UnknownData88[0x20];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPluginCommandlet = sizeof(UPluginCommandlet); // 168
    static_assert(sizeof(UPluginCommandlet) == 0xA8, "Size of UPluginCommandlet is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
