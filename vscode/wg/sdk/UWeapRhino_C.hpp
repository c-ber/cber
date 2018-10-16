#pragma once
#include "UDefaultPistolSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapRhino_C // Size: 0xF10
	: public UDefaultPistolSetting_C // Size: 0xF10
{
private:
	typedef UWeapRhino_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(131181); // id32("BlueprintGeneratedClass WeapRhino.WeapRhino_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapRhino_C = sizeof(UWeapRhino_C); // 3856
    static_assert(sizeof(UWeapRhino_C) == 0xF10, "Size of UWeapRhino_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
