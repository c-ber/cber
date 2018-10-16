#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUiHelperFunctionsBp_C // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UUiHelperFunctionsBp_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67764); // id32("BlueprintGeneratedClass UiHelperFunctionsBp.UiHelperFunctionsBp_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUiHelperFunctionsBp_C = sizeof(UUiHelperFunctionsBp_C); // 48
    static_assert(sizeof(UUiHelperFunctionsBp_C) == 0x30, "Size of UUiHelperFunctionsBp_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
