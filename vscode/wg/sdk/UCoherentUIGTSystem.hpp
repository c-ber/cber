#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTSystem // Size: 0x450
	: public UActor // Size: 0x410
{
private:
	typedef UCoherentUIGTSystem t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2067); // id32("Class CoherentUIGTPlugin.CoherentUIGTSystem")
		return ptr;
	}
	uint8_t UnknownData410[0x40];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTSystem = sizeof(UCoherentUIGTSystem); // 1104
    static_assert(sizeof(UCoherentUIGTSystem) == 0x450, "Size of UCoherentUIGTSystem is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
