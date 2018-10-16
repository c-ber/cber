#pragma once
#include "UNetConnection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWebSocketConnection // Size: 0x65690
	: public UNetConnection // Size: 0x65680
{
private:
	typedef UWebSocketConnection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2152); // id32("Class HTML5Networking.WebSocketConnection")
		return ptr;
	}
	uint8_t UnknownData65680[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWebSocketConnection = sizeof(UWebSocketConnection); // 415376
    static_assert(sizeof(UWebSocketConnection) == 0x65690, "Size of UWebSocketConnection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
