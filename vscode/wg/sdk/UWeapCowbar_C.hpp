#pragma once
#include "UDefaultMeleeSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapCowbar_C // Size: 0x950
	: public UDefaultMeleeSetting_C // Size: 0x950
{
private:
	typedef UWeapCowbar_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126554); // id32("BlueprintGeneratedClass WeapCowbar.WeapCowbar_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapCowbar_C = sizeof(UWeapCowbar_C); // 2384
    static_assert(sizeof(UWeapCowbar_C) == 0x950, "Size of UWeapCowbar_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
