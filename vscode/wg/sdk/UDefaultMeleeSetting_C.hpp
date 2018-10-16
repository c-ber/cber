#pragma once
#include "UTslWeapon_Melee.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultMeleeSetting_C // Size: 0x950
	: public UTslWeapon_Melee // Size: 0x950
{
private:
	typedef UDefaultMeleeSetting_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(52951); // id32("BlueprintGeneratedClass DefaultMeleeSetting.DefaultMeleeSetting_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultMeleeSetting_C = sizeof(UDefaultMeleeSetting_C); // 2384
    static_assert(sizeof(UDefaultMeleeSetting_C) == 0x950, "Size of UDefaultMeleeSetting_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
