#pragma once
#include "UBP_Motorbike_04_SideCar_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Motorbike_04_SideCar_Desert_C // Size: 0xADC
	: public UBP_Motorbike_04_SideCar_C // Size: 0xADC
{
private:
	typedef UBP_Motorbike_04_SideCar_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124591); // id32("BlueprintGeneratedClass BP_Motorbike_04_SideCar_Desert.BP_Motorbike_04_SideCar_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Motorbike_04_SideCar_Desert_C = sizeof(UBP_Motorbike_04_SideCar_Desert_C); // 2780
    static_assert(sizeof(UBP_Motorbike_04_SideCar_Desert_C) == 0xADC, "Size of UBP_Motorbike_04_SideCar_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
