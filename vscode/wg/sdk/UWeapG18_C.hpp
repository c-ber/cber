#pragma once
#include "UDefaultPistolSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapG18_C // Size: 0xF10
	: public UDefaultPistolSetting_C // Size: 0xF10
{
private:
	typedef UWeapG18_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(130862); // id32("BlueprintGeneratedClass WeapG18.WeapG18_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapG18_C = sizeof(UWeapG18_C); // 3856
    static_assert(sizeof(UWeapG18_C) == 0xF10, "Size of UWeapG18_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
