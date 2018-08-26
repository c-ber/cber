#pragma once
#include "UBlueprintFunctionLibrary.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMotionTrackedDeviceFunctionLibrary // Size: 0x30
	: public UBlueprintFunctionLibrary // Size: 0x30
{
private:
	typedef UMotionTrackedDeviceFunctionLibrary t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(342); // id32("Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMotionTrackedDeviceFunctionLibrary = sizeof(UMotionTrackedDeviceFunctionLibrary); // 48
    static_assert(sizeof(UMotionTrackedDeviceFunctionLibrary) == 0x30, "Size of UMotionTrackedDeviceFunctionLibrary is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
