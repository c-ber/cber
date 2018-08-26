#pragma once
#include "UNetDriver.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UIpNetDriver // Size: 0x480
	: public UNetDriver // Size: 0x450
{
private:
	typedef UIpNetDriver t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2098); // id32("Class OnlineSubsystemUtils.IpNetDriver")
		return ptr;
	}
	uint8_t boolField450;
	uint8_t UnknownData451[0x3];
	uint32_t MaxPortCountToTry; /* Ofs: 0x454 Size: 0x4 - UInt32Property OnlineSubsystemUtils.IpNetDriver.MaxPortCountToTry */
	uint8_t UnknownData458[0x18];
	uint32_t ServerDesiredSocketReceiveBufferBytes; /* Ofs: 0x470 Size: 0x4 - UInt32Property OnlineSubsystemUtils.IpNetDriver.ServerDesiredSocketReceiveBufferBytes */
	uint32_t ServerDesiredSocketSendBufferBytes; /* Ofs: 0x474 Size: 0x4 - UInt32Property OnlineSubsystemUtils.IpNetDriver.ServerDesiredSocketSendBufferBytes */
	uint32_t ClientDesiredSocketReceiveBufferBytes; /* Ofs: 0x478 Size: 0x4 - UInt32Property OnlineSubsystemUtils.IpNetDriver.ClientDesiredSocketReceiveBufferBytes */
	uint32_t ClientDesiredSocketSendBufferBytes; /* Ofs: 0x47C Size: 0x4 - UInt32Property OnlineSubsystemUtils.IpNetDriver.ClientDesiredSocketSendBufferBytes */


	inline bool LogPortUnreach()
	{
		return boolField450& 0x1;
	}
	inline bool SetLogPortUnreach(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool AllowPlayerPortUnreach()
	{
		return boolField450& 0x2;
	}
	inline bool SetAllowPlayerPortUnreach(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x450, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMaxPortCountToTry(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x454, value); }
	inline bool SetServerDesiredSocketReceiveBufferBytes(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x470, value); }
	inline bool SetServerDesiredSocketSendBufferBytes(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x474, value); }
	inline bool SetClientDesiredSocketReceiveBufferBytes(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x478, value); }
	inline bool SetClientDesiredSocketSendBufferBytes(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x47C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUIpNetDriver = sizeof(UIpNetDriver); // 1152
    static_assert(sizeof(UIpNetDriver) == 0x480, "Size of UIpNetDriver is not correct.");
	auto constexpr UIpNetDriver_boolField450_Offset = offsetof(UIpNetDriver, boolField450);
	static_assert(UIpNetDriver_boolField450_Offset == 0x450, "UIpNetDriver::boolField450 offset is not 450");
	auto constexpr UIpNetDriver_MaxPortCountToTry_Offset = offsetof(UIpNetDriver, MaxPortCountToTry);
	static_assert(UIpNetDriver_MaxPortCountToTry_Offset == 0x454, "UIpNetDriver::MaxPortCountToTry offset is not 454");
	auto constexpr UIpNetDriver_ServerDesiredSocketReceiveBufferBytes_Offset = offsetof(UIpNetDriver, ServerDesiredSocketReceiveBufferBytes);
	static_assert(UIpNetDriver_ServerDesiredSocketReceiveBufferBytes_Offset == 0x470, "UIpNetDriver::ServerDesiredSocketReceiveBufferBytes offset is not 470");
	auto constexpr UIpNetDriver_ServerDesiredSocketSendBufferBytes_Offset = offsetof(UIpNetDriver, ServerDesiredSocketSendBufferBytes);
	static_assert(UIpNetDriver_ServerDesiredSocketSendBufferBytes_Offset == 0x474, "UIpNetDriver::ServerDesiredSocketSendBufferBytes offset is not 474");
	auto constexpr UIpNetDriver_ClientDesiredSocketReceiveBufferBytes_Offset = offsetof(UIpNetDriver, ClientDesiredSocketReceiveBufferBytes);
	static_assert(UIpNetDriver_ClientDesiredSocketReceiveBufferBytes_Offset == 0x478, "UIpNetDriver::ClientDesiredSocketReceiveBufferBytes offset is not 478");
	auto constexpr UIpNetDriver_ClientDesiredSocketSendBufferBytes_Offset = offsetof(UIpNetDriver, ClientDesiredSocketSendBufferBytes);
	static_assert(UIpNetDriver_ClientDesiredSocketSendBufferBytes_Offset == 0x47c, "UIpNetDriver::ClientDesiredSocketSendBufferBytes offset is not 47c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
