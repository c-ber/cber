#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIBlueprintHelperLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UAIBlueprintHelperLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1665); // id32("Class AIModule.AIBlueprintHelperLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIBlueprintHelperLibrary = sizeof(UAIBlueprintHelperLibrary); // 48
    static_assert(sizeof(UAIBlueprintHelperLibrary) == 0x30, "Size of UAIBlueprintHelperLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
