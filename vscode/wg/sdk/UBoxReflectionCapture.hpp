#pragma once
#include "UReflectionCapture.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoxReflectionCapture // Size: 0x410
	: public UReflectionCapture // Size: 0x410
{
private:
	typedef UBoxReflectionCapture t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1775); // id32("Class Engine.BoxReflectionCapture")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoxReflectionCapture = sizeof(UBoxReflectionCapture); // 1040
    static_assert(sizeof(UBoxReflectionCapture) == 0x410, "Size of UBoxReflectionCapture is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
