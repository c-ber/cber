#pragma once
#include "UAISenseConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Touch // Size: 0x50
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Touch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1696); // id32("Class AIModule.AISenseConfig_Touch")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Touch = sizeof(UAISenseConfig_Touch); // 80
    static_assert(sizeof(UAISenseConfig_Touch) == 0x50, "Size of UAISenseConfig_Touch is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
