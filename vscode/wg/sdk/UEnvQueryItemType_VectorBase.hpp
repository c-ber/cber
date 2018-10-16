#pragma once
#include "UEnvQueryItemType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryItemType_VectorBase // Size: 0x38
	: public UEnvQueryItemType // Size: 0x38
{
private:
	typedef UEnvQueryItemType_VectorBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(621); // id32("Class AIModule.EnvQueryItemType_VectorBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryItemType_VectorBase = sizeof(UEnvQueryItemType_VectorBase); // 56
    static_assert(sizeof(UEnvQueryItemType_VectorBase) == 0x38, "Size of UEnvQueryItemType_VectorBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
