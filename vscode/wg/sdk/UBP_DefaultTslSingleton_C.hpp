#pragma once
#include "UTslSingleton.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_DefaultTslSingleton_C // Size: 0x158
	: public UTslSingleton // Size: 0x158
{
private:
	typedef UBP_DefaultTslSingleton_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57245); // id32("BlueprintGeneratedClass BP_DefaultTslSingleton.BP_DefaultTslSingleton_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_DefaultTslSingleton_C = sizeof(UBP_DefaultTslSingleton_C); // 344
    static_assert(sizeof(UBP_DefaultTslSingleton_C) == 0x158, "Size of UBP_DefaultTslSingleton_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
