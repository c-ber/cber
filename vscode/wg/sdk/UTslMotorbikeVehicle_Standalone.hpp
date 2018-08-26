#pragma once
#include "UTslMotorbikeVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMotorbikeVehicle_Standalone // Size: 0xA60
	: public UTslMotorbikeVehicle // Size: 0xA60
{
private:
	typedef UTslMotorbikeVehicle_Standalone t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(48); // id32("Class TslGame.TslMotorbikeVehicle_Standalone")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMotorbikeVehicle_Standalone = sizeof(UTslMotorbikeVehicle_Standalone); // 2656
    static_assert(sizeof(UTslMotorbikeVehicle_Standalone) == 0xA60, "Size of UTslMotorbikeVehicle_Standalone is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
