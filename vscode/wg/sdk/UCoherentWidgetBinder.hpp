#pragma once
#include "UCoherentCommonBinder.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentWidgetBinder // Size: 0xB0
	: public UCoherentCommonBinder // Size: 0xA0
{
private:
	typedef UCoherentWidgetBinder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1832); // id32("Class TslGame.CoherentWidgetBinder")
		return ptr;
	}
	uint8_t UnknownDataA0[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentWidgetBinder = sizeof(UCoherentWidgetBinder); // 176
    static_assert(sizeof(UCoherentWidgetBinder) == 0xB0, "Size of UCoherentWidgetBinder is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
