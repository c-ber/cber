#pragma once
#include "UEnvQueryItemType_VectorBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryItemType_Point // Size: 0x38
	: public UEnvQueryItemType_VectorBase // Size: 0x38
{
private:
	typedef UEnvQueryItemType_Point t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(625); // id32("Class AIModule.EnvQueryItemType_Point")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryItemType_Point = sizeof(UEnvQueryItemType_Point); // 56
    static_assert(sizeof(UEnvQueryItemType_Point) == 0x38, "Size of UEnvQueryItemType_Point is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
