#pragma once
#include "UTslEffectController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FireEffectController_C // Size: 0x510
	: public UTslEffectController // Size: 0x510
{
private:
	typedef UBP_FireEffectController_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(128544); // id32("BlueprintGeneratedClass BP_FireEffectController.BP_FireEffectController_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FireEffectController_C = sizeof(UBP_FireEffectController_C); // 1296
    static_assert(sizeof(UBP_FireEffectController_C) == 0x510, "Size of UBP_FireEffectController_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
