#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayStatics // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UGameplayStatics t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(302); // id32("Class Engine.GameplayStatics")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayStatics = sizeof(UGameplayStatics); // 48
    static_assert(sizeof(UGameplayStatics) == 0x30, "Size of UGameplayStatics is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
