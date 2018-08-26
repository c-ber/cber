#pragma once
#include "UVehicleSeatDriver_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_Seat_Driver_C // Size: 0x4C4
	: public UVehicleSeatDriver_C // Size: 0x4C4
{
private:
	typedef UBuggy_Seat_Driver_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(124253); // id32("BlueprintGeneratedClass Buggy_Seat_Driver.Buggy_Seat_Driver_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_Seat_Driver_C = sizeof(UBuggy_Seat_Driver_C); // 1220
    static_assert(sizeof(UBuggy_Seat_Driver_C) == 0x4C4, "Size of UBuggy_Seat_Driver_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
