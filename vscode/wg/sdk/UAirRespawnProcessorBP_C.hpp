#pragma once
#include "UAirRespawnProcessor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAirRespawnProcessorBP_C // Size: 0x78
	: public UAirRespawnProcessor // Size: 0x78
{
private:
	typedef UAirRespawnProcessorBP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(46852); // id32("BlueprintGeneratedClass AirRespawnProcessorBP.AirRespawnProcessorBP_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAirRespawnProcessorBP_C = sizeof(UAirRespawnProcessorBP_C); // 120
    static_assert(sizeof(UAirRespawnProcessorBP_C) == 0x78, "Size of UAirRespawnProcessorBP_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
