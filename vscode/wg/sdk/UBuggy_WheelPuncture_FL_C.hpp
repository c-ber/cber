#pragma once
#include "UBuggy_WheelPuncture_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuggy_WheelPuncture_FL_C // Size: 0x270
	: public UBuggy_WheelPuncture_C // Size: 0x270
{
private:
	typedef UBuggy_WheelPuncture_FL_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116907); // id32("BlueprintGeneratedClass Buggy_WheelPuncture_FL.Buggy_WheelPuncture_FL_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuggy_WheelPuncture_FL_C = sizeof(UBuggy_WheelPuncture_FL_C); // 624
    static_assert(sizeof(UBuggy_WheelPuncture_FL_C) == 0x270, "Size of UBuggy_WheelPuncture_FL_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
