#pragma once
#include "UTslWeapon_Trajectory.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDefaultPistolSetting_C // Size: 0xF10
	: public UTslWeapon_Trajectory // Size: 0xF10
{
private:
	typedef UDefaultPistolSetting_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(54631); // id32("BlueprintGeneratedClass DefaultPistolSetting.DefaultPistolSetting_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDefaultPistolSetting_C = sizeof(UDefaultPistolSetting_C); // 3856
    static_assert(sizeof(UDefaultPistolSetting_C) == 0xF10, "Size of UDefaultPistolSetting_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
