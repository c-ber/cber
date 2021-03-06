#pragma once
#include "UEnvQueryItemType_VectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryItemType_ActorBase // Size: 0x38
	: public UEnvQueryItemType_VectorBase // Size: 0x38
{
private:
	typedef UEnvQueryItemType_ActorBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(622); // id32("Class AIModule.EnvQueryItemType_ActorBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryItemType_ActorBase = sizeof(UEnvQueryItemType_ActorBase); // 56
    static_assert(sizeof(UEnvQueryItemType_ActorBase) == 0x38, "Size of UEnvQueryItemType_ActorBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
