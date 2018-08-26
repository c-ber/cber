#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkGameplayStatics // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UAkGameplayStatics t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2139); // id32("Class AkAudio.AkGameplayStatics")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkGameplayStatics = sizeof(UAkGameplayStatics); // 48
    static_assert(sizeof(UAkGameplayStatics) == 0x30, "Size of UAkGameplayStatics is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
