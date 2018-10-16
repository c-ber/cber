#pragma once
#include "UBlendSpace1D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAimOffsetBlendSpace1D // Size: 0x150
	: public UBlendSpace1D // Size: 0x150
{
private:
	typedef UAimOffsetBlendSpace1D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(255); // id32("Class Engine.AimOffsetBlendSpace1D")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAimOffsetBlendSpace1D = sizeof(UAimOffsetBlendSpace1D); // 336
    static_assert(sizeof(UAimOffsetBlendSpace1D) == 0x150, "Size of UAimOffsetBlendSpace1D is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
