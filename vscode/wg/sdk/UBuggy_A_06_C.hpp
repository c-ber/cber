#pragma once
#include "UBuggy_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_A_06_C // Size: 0xA00
	: public UBuggy_C // Size: 0xA00
{
private:
	typedef UBuggy_A_06_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124656); // id32("BlueprintGeneratedClass Buggy_A_06.Buggy_A_06_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_A_06_C = sizeof(UBuggy_A_06_C); // 2560
    static_assert(sizeof(UBuggy_A_06_C) == 0xA00, "Size of UBuggy_A_06_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
