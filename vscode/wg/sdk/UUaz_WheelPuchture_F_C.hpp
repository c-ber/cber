#pragma once
#include "UUaz_WheelPucture_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUaz_WheelPuchture_F_C // Size: 0x270
	: public UUaz_WheelPucture_C // Size: 0x270
{
private:
	typedef UUaz_WheelPuchture_F_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115046); // id32("BlueprintGeneratedClass Uaz_WheelPuchture_F.Uaz_WheelPuchture_F_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUaz_WheelPuchture_F_C = sizeof(UUaz_WheelPuchture_F_C); // 624
    static_assert(sizeof(UUaz_WheelPuchture_F_C) == 0x270, "Size of UUaz_WheelPuchture_F_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
