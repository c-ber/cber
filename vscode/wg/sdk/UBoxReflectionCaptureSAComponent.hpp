#pragma once
#include "UBoxReflectionCaptureComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBoxReflectionCaptureSAComponent // Size: 0x540
	: public UBoxReflectionCaptureComponent // Size: 0x540
{
private:
	typedef UBoxReflectionCaptureSAComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(231); // id32("Class Engine.BoxReflectionCaptureSAComponent")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBoxReflectionCaptureSAComponent = sizeof(UBoxReflectionCaptureSAComponent); // 1344
    static_assert(sizeof(UBoxReflectionCaptureSAComponent) == 0x540, "Size of UBoxReflectionCaptureSAComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
