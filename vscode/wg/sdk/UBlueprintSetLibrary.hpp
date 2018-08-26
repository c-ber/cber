#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlueprintSetLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UBlueprintSetLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(296); // id32("Class Engine.BlueprintSetLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlueprintSetLibrary = sizeof(UBlueprintSetLibrary); // 48
    static_assert(sizeof(UBlueprintSetLibrary) == 0x30, "Size of UBlueprintSetLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
