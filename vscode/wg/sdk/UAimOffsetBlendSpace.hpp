#pragma once
#include "UBlendSpace.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAimOffsetBlendSpace // Size: 0x150
	: public UBlendSpace // Size: 0x150
{
private:
	typedef UAimOffsetBlendSpace t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(253); // id32("Class Engine.AimOffsetBlendSpace")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAimOffsetBlendSpace = sizeof(UAimOffsetBlendSpace); // 336
    static_assert(sizeof(UAimOffsetBlendSpace) == 0x150, "Size of UAimOffsetBlendSpace is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
