#pragma once
#include "UPlayerPawn_v2_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerFemale_A_C // Size: 0x1C60
	: public UPlayerPawn_v2_C // Size: 0x1C60
{
private:
	typedef UPlayerFemale_A_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135598); // id32("BlueprintGeneratedClass PlayerFemale_A.PlayerFemale_A_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerFemale_A_C = sizeof(UPlayerFemale_A_C); // 7264
    static_assert(sizeof(UPlayerFemale_A_C) == 0x1C60, "Size of UPlayerFemale_A_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
