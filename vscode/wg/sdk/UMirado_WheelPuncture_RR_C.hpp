#pragma once
#include "UMirado_WheelPuncture_R_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMirado_WheelPuncture_RR_C // Size: 0x270
	: public UMirado_WheelPuncture_R_C // Size: 0x270
{
private:
	typedef UMirado_WheelPuncture_RR_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(117810); // id32("BlueprintGeneratedClass Mirado_WheelPuncture_RR.Mirado_WheelPuncture_RR_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMirado_WheelPuncture_RR_C = sizeof(UMirado_WheelPuncture_RR_C); // 624
    static_assert(sizeof(UMirado_WheelPuncture_RR_C) == 0x270, "Size of UMirado_WheelPuncture_RR_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
