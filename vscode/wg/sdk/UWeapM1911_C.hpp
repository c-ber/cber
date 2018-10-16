#pragma once
#include "UDefaultPistolSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapM1911_C // Size: 0xF10
	: public UDefaultPistolSetting_C // Size: 0xF10
{
private:
	typedef UWeapM1911_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(134113); // id32("BlueprintGeneratedClass WeapM1911.WeapM1911_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapM1911_C = sizeof(UWeapM1911_C); // 3856
    static_assert(sizeof(UWeapM1911_C) == 0xF10, "Size of UWeapM1911_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
