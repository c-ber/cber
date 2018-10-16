#pragma once
#include "UTslVehicleWheel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotorbikeSidecar_Wheel_C // Size: 0x270
	: public UTslVehicleWheel // Size: 0x270
{
private:
	typedef UMotorbikeSidecar_Wheel_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(119416); // id32("BlueprintGeneratedClass MotorbikeSidecar_Wheel.MotorbikeSidecar_Wheel_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotorbikeSidecar_Wheel_C = sizeof(UMotorbikeSidecar_Wheel_C); // 624
    static_assert(sizeof(UMotorbikeSidecar_Wheel_C) == 0x270, "Size of UMotorbikeSidecar_Wheel_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
