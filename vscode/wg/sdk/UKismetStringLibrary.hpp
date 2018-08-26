#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKismetStringLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UKismetStringLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(311); // id32("Class Engine.KismetStringLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKismetStringLibrary = sizeof(UKismetStringLibrary); // 48
    static_assert(sizeof(UKismetStringLibrary) == 0x30, "Size of UKismetStringLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
