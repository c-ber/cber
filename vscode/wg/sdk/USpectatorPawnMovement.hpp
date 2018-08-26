#pragma once
#include "UFloatingPawnMovement.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpectatorPawnMovement // Size: 0x290
	: public UFloatingPawnMovement // Size: 0x290
{
private:
	typedef USpectatorPawnMovement t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1503); // id32("Class Engine.SpectatorPawnMovement")
		return ptr;
	}
//	uint8_t boolField288;
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpectatorPawnMovement = sizeof(USpectatorPawnMovement); // 656
    static_assert(sizeof(USpectatorPawnMovement) == 0x290, "Size of USpectatorPawnMovement is not correct.");
//	auto constexpr USpectatorPawnMovement_boolField288_Offset = offsetof(USpectatorPawnMovement, boolField288);
//	static_assert(USpectatorPawnMovement_boolField288_Offset == 0x288, "USpectatorPawnMovement::boolField288 offset is not 288");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
