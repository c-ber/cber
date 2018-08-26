#pragma once
#include "UActorChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDemoActorChannel // Size: 0x2D0
	: public UActorChannel // Size: 0x238
{
private:
	typedef UDemoActorChannel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(693); // id32("Class Engine.DemoActorChannel")
		return ptr;
	}
	uint8_t UnknownData238[0x98];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDemoActorChannel = sizeof(UDemoActorChannel); // 720
    static_assert(sizeof(UDemoActorChannel) == 0x2D0, "Size of UDemoActorChannel is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
