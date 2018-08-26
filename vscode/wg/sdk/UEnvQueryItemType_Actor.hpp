#pragma once
#include "UEnvQueryItemType_ActorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryItemType_Actor // Size: 0x38
	: public UEnvQueryItemType_ActorBase // Size: 0x38
{
private:
	typedef UEnvQueryItemType_Actor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(623); // id32("Class AIModule.EnvQueryItemType_Actor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryItemType_Actor = sizeof(UEnvQueryItemType_Actor); // 56
    static_assert(sizeof(UEnvQueryItemType_Actor) == 0x38, "Size of UEnvQueryItemType_Actor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
