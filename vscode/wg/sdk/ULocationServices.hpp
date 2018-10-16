#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULocationServices // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef ULocationServices t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2128); // id32("Class LocationServicesBPLibrary.LocationServices")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULocationServices = sizeof(ULocationServices); // 48
    static_assert(sizeof(ULocationServices) == 0x30, "Size of ULocationServices is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
