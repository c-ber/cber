#pragma once
#include "UEnvQueryContext.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryContext_Querier // Size: 0x30
	: public UEnvQueryContext // Size: 0x30
{
private:
	typedef UEnvQueryContext_Querier t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(617); // id32("Class AIModule.EnvQueryContext_Querier")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryContext_Querier = sizeof(UEnvQueryContext_Querier); // 48
    static_assert(sizeof(UEnvQueryContext_Querier) == 0x30, "Size of UEnvQueryContext_Querier is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
