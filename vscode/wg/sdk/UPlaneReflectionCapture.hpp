#pragma once
#include "UReflectionCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPlaneReflectionCapture // Size: 0x410
	: public UReflectionCapture // Size: 0x410
{
private:
	typedef UPlaneReflectionCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1776); // id32("Class Engine.PlaneReflectionCapture")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPlaneReflectionCapture = sizeof(UPlaneReflectionCapture); // 1040
    static_assert(sizeof(UPlaneReflectionCapture) == 0x410, "Size of UPlaneReflectionCapture is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
