#pragma once
#include "UDefaultPistolSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapNagantM1895_C // Size: 0xF10
	: public UDefaultPistolSetting_C // Size: 0xF10
{
private:
	typedef UWeapNagantM1895_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135412); // id32("BlueprintGeneratedClass WeapNagantM1895.WeapNagantM1895_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapNagantM1895_C = sizeof(UWeapNagantM1895_C); // 3856
    static_assert(sizeof(UWeapNagantM1895_C) == 0xF10, "Size of UWeapNagantM1895_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
