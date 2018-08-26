#pragma once
#include "UTslServerParticle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPt_Immortal_C // Size: 0x430
	: public UTslServerParticle // Size: 0x430
{
private:
	typedef UPt_Immortal_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(92035); // id32("BlueprintGeneratedClass Pt_Immortal.Pt_Immortal_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPt_Immortal_C = sizeof(UPt_Immortal_C); // 1072
    static_assert(sizeof(UPt_Immortal_C) == 0x430, "Size of UPt_Immortal_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
