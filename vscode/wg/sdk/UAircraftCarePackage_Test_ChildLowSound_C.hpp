#pragma once
#include "UAircraftCarePackage_Test_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAircraftCarePackage_Test_ChildLowSound_C // Size: 0x5DC
	: public UAircraftCarePackage_Test_C // Size: 0x5DC
{
private:
	typedef UAircraftCarePackage_Test_ChildLowSound_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135531); // id32("BlueprintGeneratedClass AircraftCarePackage_Test_ChildLowSound.AircraftCarePackage_Test_ChildLowSound_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAircraftCarePackage_Test_ChildLowSound_C = sizeof(UAircraftCarePackage_Test_ChildLowSound_C); // 1500
    static_assert(sizeof(UAircraftCarePackage_Test_ChildLowSound_C) == 0x5DC, "Size of UAircraftCarePackage_Test_ChildLowSound_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
