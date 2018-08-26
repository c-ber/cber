#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslStatics // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UTslStatics t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1828); // id32("Class TslGame.TslStatics")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslStatics = sizeof(UTslStatics); // 48
    static_assert(sizeof(UTslStatics) == 0x30, "Size of UTslStatics is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
