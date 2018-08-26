#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUdpMessagingSettings // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef UUdpMessagingSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2046); // id32("Class UdpMessaging.UdpMessagingSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	FString UnicastEndpoint; /* Ofs: 0x38 Size: 0x10 - StrProperty UdpMessaging.UdpMessagingSettings.UnicastEndpoint */
	FString MulticastEndpoint; /* Ofs: 0x48 Size: 0x10 - StrProperty UdpMessaging.UdpMessagingSettings.MulticastEndpoint */
	uint8_t MulticastTimeToLive; /* Ofs: 0x58 Size: 0x1 - ByteProperty UdpMessaging.UdpMessagingSettings.MulticastTimeToLive */
	uint8_t UnknownData59[0x7];
	TArray<struct FString> StaticEndpoints; /* Ofs: 0x60 Size: 0x10 - ArrayProperty UdpMessaging.UdpMessagingSettings.StaticEndpoints */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];
	FString TunnelUnicastEndpoint; /* Ofs: 0x78 Size: 0x10 - StrProperty UdpMessaging.UdpMessagingSettings.TunnelUnicastEndpoint */
	FString TunnelMulticastEndpoint; /* Ofs: 0x88 Size: 0x10 - StrProperty UdpMessaging.UdpMessagingSettings.TunnelMulticastEndpoint */
	TArray<struct FString> RemoteTunnelEndpoints; /* Ofs: 0x98 Size: 0x10 - ArrayProperty UdpMessaging.UdpMessagingSettings.RemoteTunnelEndpoints */


	inline bool EnableTransport()
	{
		return boolField30& 0x1;
	}
	inline bool SetEnableTransport(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetUnicastEndpoint(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetMulticastEndpoint(t_structHelper inst, FString value) { inst.WriteOffset(0x48, value); }
	inline bool SetMulticastTimeToLive(t_structHelper inst, uint8_t value) { inst.WriteOffset(0x58, value); }
	inline bool SetStaticEndpoints(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x60, value); }
	inline bool EnableTunnel()
	{
		return boolField70& 0x1;
	}
	inline bool SetEnableTunnel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTunnelUnicastEndpoint(t_structHelper inst, FString value) { inst.WriteOffset(0x78, value); }
	inline bool SetTunnelMulticastEndpoint(t_structHelper inst, FString value) { inst.WriteOffset(0x88, value); }
	inline bool SetRemoteTunnelEndpoints(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUdpMessagingSettings = sizeof(UUdpMessagingSettings); // 168
    static_assert(sizeof(UUdpMessagingSettings) == 0xA8, "Size of UUdpMessagingSettings is not correct.");
	auto constexpr UUdpMessagingSettings_boolField30_Offset = offsetof(UUdpMessagingSettings, boolField30);
	static_assert(UUdpMessagingSettings_boolField30_Offset == 0x30, "UUdpMessagingSettings::boolField30 offset is not 30");
	auto constexpr UUdpMessagingSettings_UnicastEndpoint_Offset = offsetof(UUdpMessagingSettings, UnicastEndpoint);
	static_assert(UUdpMessagingSettings_UnicastEndpoint_Offset == 0x38, "UUdpMessagingSettings::UnicastEndpoint offset is not 38");
	auto constexpr UUdpMessagingSettings_MulticastEndpoint_Offset = offsetof(UUdpMessagingSettings, MulticastEndpoint);
	static_assert(UUdpMessagingSettings_MulticastEndpoint_Offset == 0x48, "UUdpMessagingSettings::MulticastEndpoint offset is not 48");
	auto constexpr UUdpMessagingSettings_MulticastTimeToLive_Offset = offsetof(UUdpMessagingSettings, MulticastTimeToLive);
	static_assert(UUdpMessagingSettings_MulticastTimeToLive_Offset == 0x58, "UUdpMessagingSettings::MulticastTimeToLive offset is not 58");
	auto constexpr UUdpMessagingSettings_StaticEndpoints_Offset = offsetof(UUdpMessagingSettings, StaticEndpoints);
	static_assert(UUdpMessagingSettings_StaticEndpoints_Offset == 0x60, "UUdpMessagingSettings::StaticEndpoints offset is not 60");
	auto constexpr UUdpMessagingSettings_boolField70_Offset = offsetof(UUdpMessagingSettings, boolField70);
	static_assert(UUdpMessagingSettings_boolField70_Offset == 0x70, "UUdpMessagingSettings::boolField70 offset is not 70");
	auto constexpr UUdpMessagingSettings_TunnelUnicastEndpoint_Offset = offsetof(UUdpMessagingSettings, TunnelUnicastEndpoint);
	static_assert(UUdpMessagingSettings_TunnelUnicastEndpoint_Offset == 0x78, "UUdpMessagingSettings::TunnelUnicastEndpoint offset is not 78");
	auto constexpr UUdpMessagingSettings_TunnelMulticastEndpoint_Offset = offsetof(UUdpMessagingSettings, TunnelMulticastEndpoint);
	static_assert(UUdpMessagingSettings_TunnelMulticastEndpoint_Offset == 0x88, "UUdpMessagingSettings::TunnelMulticastEndpoint offset is not 88");
	auto constexpr UUdpMessagingSettings_RemoteTunnelEndpoints_Offset = offsetof(UUdpMessagingSettings, RemoteTunnelEndpoints);
	static_assert(UUdpMessagingSettings_RemoteTunnelEndpoints_Offset == 0x98, "UUdpMessagingSettings::RemoteTunnelEndpoints offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
