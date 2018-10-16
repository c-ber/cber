#pragma once
#include "UNetDriver.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWebSocketNetDriver // Size: 0x460
	: public UNetDriver // Size: 0x450
{
private:
	typedef UWebSocketNetDriver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2153); // id32("Class HTML5Networking.WebSocketNetDriver")
		return ptr;
	}
	int32_t WebSocketPort; /* Ofs: 0x450 Size: 0x4 - IntProperty HTML5Networking.WebSocketNetDriver.WebSocketPort */
	uint8_t UnknownData454[0xC];


	inline bool SetWebSocketPort(t_structHelper inst, int32_t value) { inst.WriteOffset(0x450, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWebSocketNetDriver = sizeof(UWebSocketNetDriver); // 1120
    static_assert(sizeof(UWebSocketNetDriver) == 0x460, "Size of UWebSocketNetDriver is not correct.");
	auto constexpr UWebSocketNetDriver_WebSocketPort_Offset = offsetof(UWebSocketNetDriver, WebSocketPort);
	static_assert(UWebSocketNetDriver_WebSocketPort_Offset == 0x450, "UWebSocketNetDriver::WebSocketPort offset is not 450");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
