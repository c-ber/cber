#pragma once
#include "UNetConnection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDemoNetConnection // Size: 0x65740
	: public UNetConnection // Size: 0x65680
{
private:
	typedef UDemoNetConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(719); // id32("Class Engine.DemoNetConnection")
		return ptr;
	}
	uint8_t UnknownData65680[0xC0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDemoNetConnection = sizeof(UDemoNetConnection); // 415552
    static_assert(sizeof(UDemoNetConnection) == 0x65740, "Size of UDemoNetConnection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
