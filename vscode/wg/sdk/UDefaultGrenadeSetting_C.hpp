#pragma once
#include "UTslWeapon_Throwable.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultGrenadeSetting_C // Size: 0x980
	: public UTslWeapon_Throwable // Size: 0x980
{
private:
	typedef UDefaultGrenadeSetting_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128690); // id32("BlueprintGeneratedClass DefaultGrenadeSetting.DefaultGrenadeSetting_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultGrenadeSetting_C = sizeof(UDefaultGrenadeSetting_C); // 2432
    static_assert(sizeof(UDefaultGrenadeSetting_C) == 0x980, "Size of UDefaultGrenadeSetting_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
