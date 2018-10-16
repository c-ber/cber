#pragma once
#include "UAISenseConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAISenseConfig_Team // Size: 0x50
	: public UAISenseConfig // Size: 0x50
{
private:
	typedef UAISenseConfig_Team t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1695); // id32("Class AIModule.AISenseConfig_Team")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAISenseConfig_Team = sizeof(UAISenseConfig_Team); // 80
    static_assert(sizeof(UAISenseConfig_Team) == 0x50, "Size of UAISenseConfig_Team is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
