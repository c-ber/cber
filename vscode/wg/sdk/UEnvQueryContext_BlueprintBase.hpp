#pragma once
#include "UEnvQueryContext.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryContext_BlueprintBase // Size: 0x38
	: public UEnvQueryContext // Size: 0x30
{
private:
	typedef UEnvQueryContext_BlueprintBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(615); // id32("Class AIModule.EnvQueryContext_BlueprintBase")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryContext_BlueprintBase = sizeof(UEnvQueryContext_BlueprintBase); // 56
    static_assert(sizeof(UEnvQueryContext_BlueprintBase) == 0x38, "Size of UEnvQueryContext_BlueprintBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
