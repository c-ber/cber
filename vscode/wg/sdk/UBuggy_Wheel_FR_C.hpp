#pragma once
#include "UBuggy_Wheel_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_Wheel_FR_C // Size: 0x270
	: public UBuggy_Wheel_C // Size: 0x270
{
private:
	typedef UBuggy_Wheel_FR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116910); // id32("BlueprintGeneratedClass Buggy_Wheel_FR.Buggy_Wheel_FR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_Wheel_FR_C = sizeof(UBuggy_Wheel_FR_C); // 624
    static_assert(sizeof(UBuggy_Wheel_FR_C) == 0x270, "Size of UBuggy_Wheel_FR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
