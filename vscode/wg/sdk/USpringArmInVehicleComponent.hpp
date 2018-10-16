#pragma once
#include "USpringArmComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpringArmInVehicleComponent // Size: 0x520
	: public USpringArmComponent // Size: 0x520
{
private:
	typedef USpringArmInVehicleComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1959); // id32("Class TslGame.SpringArmInVehicleComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpringArmInVehicleComponent = sizeof(USpringArmInVehicleComponent); // 1312
    static_assert(sizeof(USpringArmInVehicleComponent) == 0x520, "Size of USpringArmInVehicleComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
