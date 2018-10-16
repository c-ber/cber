#pragma once
#include "UDefaultGrenadeSetting_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapSmokeBomb_C // Size: 0x980
	: public UDefaultGrenadeSetting_C // Size: 0x980
{
private:
	typedef UWeapSmokeBomb_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128702); // id32("BlueprintGeneratedClass WeapSmokeBomb.WeapSmokeBomb_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapSmokeBomb_C = sizeof(UWeapSmokeBomb_C); // 2432
    static_assert(sizeof(UWeapSmokeBomb_C) == 0x980, "Size of UWeapSmokeBomb_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
