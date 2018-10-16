#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPerformanceTestComponent // Size: 0x330
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslPerformanceTestComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1868); // id32("Class TslGame.TslPerformanceTestComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x140];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPerformanceTestComponent = sizeof(UTslPerformanceTestComponent); // 816
    static_assert(sizeof(UTslPerformanceTestComponent) == 0x330, "Size of UTslPerformanceTestComponent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
