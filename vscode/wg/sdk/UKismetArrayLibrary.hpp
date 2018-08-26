#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKismetArrayLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UKismetArrayLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(304); // id32("Class Engine.KismetArrayLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKismetArrayLibrary = sizeof(UKismetArrayLibrary); // 48
    static_assert(sizeof(UKismetArrayLibrary) == 0x30, "Size of UKismetArrayLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
