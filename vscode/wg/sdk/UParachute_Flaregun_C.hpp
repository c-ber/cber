#pragma once
#include "UParachuteTest_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachute_Flaregun_C // Size: 0x420
	: public UParachuteTest_C // Size: 0x420
{
private:
	typedef UParachute_Flaregun_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126415); // id32("BlueprintGeneratedClass Parachute_Flaregun.Parachute_Flaregun_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachute_Flaregun_C = sizeof(UParachute_Flaregun_C); // 1056
    static_assert(sizeof(UParachute_Flaregun_C) == 0x420, "Size of UParachute_Flaregun_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
