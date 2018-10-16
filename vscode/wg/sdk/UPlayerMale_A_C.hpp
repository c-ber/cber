#pragma once
#include "UPlayerPawn_v2_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlayerMale_A_C // Size: 0x1C60
	: public UPlayerPawn_v2_C // Size: 0x1C60
{
private:
	typedef UPlayerMale_A_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135593); // id32("BlueprintGeneratedClass PlayerMale_A.PlayerMale_A_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlayerMale_A_C = sizeof(UPlayerMale_A_C); // 7264
    static_assert(sizeof(UPlayerMale_A_C) == 0x1C60, "Size of UPlayerMale_A_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
