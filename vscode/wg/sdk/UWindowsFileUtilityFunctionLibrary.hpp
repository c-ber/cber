#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWindowsFileUtilityFunctionLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UWindowsFileUtilityFunctionLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(336); // id32("Class WindowsFileUtility.WindowsFileUtilityFunctionLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWindowsFileUtilityFunctionLibrary = sizeof(UWindowsFileUtilityFunctionLibrary); // 48
    static_assert(sizeof(UWindowsFileUtilityFunctionLibrary) == 0x30, "Size of UWindowsFileUtilityFunctionLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
