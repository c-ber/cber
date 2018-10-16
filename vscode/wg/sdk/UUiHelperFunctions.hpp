#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUiHelperFunctions // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UUiHelperFunctions t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1596); // id32("Class TslGame.UiHelperFunctions")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUiHelperFunctions = sizeof(UUiHelperFunctions); // 48
    static_assert(sizeof(UUiHelperFunctions) == 0x30, "Size of UUiHelperFunctions is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
