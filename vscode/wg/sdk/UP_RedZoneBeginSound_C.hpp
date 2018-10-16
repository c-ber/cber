#pragma once
#include "UTslServerParticle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_RedZoneBeginSound_C // Size: 0x430
	: public UTslServerParticle // Size: 0x430
{
private:
	typedef UP_RedZoneBeginSound_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125123); // id32("BlueprintGeneratedClass P_RedZoneBeginSound.P_RedZoneBeginSound_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_RedZoneBeginSound_C = sizeof(UP_RedZoneBeginSound_C); // 1072
    static_assert(sizeof(UP_RedZoneBeginSound_C) == 0x430, "Size of UP_RedZoneBeginSound_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
