#pragma once
#include "UAquaRail_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAquaRail_A_01_C // Size: 0x5D0
	: public UAquaRail_C // Size: 0x5D0
{
private:
	typedef UAquaRail_A_01_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124681); // id32("BlueprintGeneratedClass AquaRail_A_01.AquaRail_A_01_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAquaRail_A_01_C = sizeof(UAquaRail_A_01_C); // 1488
    static_assert(sizeof(UAquaRail_A_01_C) == 0x5D0, "Size of UAquaRail_A_01_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
