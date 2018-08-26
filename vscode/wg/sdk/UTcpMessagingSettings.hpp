#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTcpMessagingSettings // Size: 0x60
	: public UObject // Size: 0x30
{
private:
	typedef UTcpMessagingSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2120); // id32("Class TcpMessaging.TcpMessagingSettings")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x7];
	FString ListenEndpoint; /* Ofs: 0x38 Size: 0x10 - StrProperty TcpMessaging.TcpMessagingSettings.ListenEndpoint */
	TArray<struct FString> ConnectToEndpoints; /* Ofs: 0x48 Size: 0x10 - ArrayProperty TcpMessaging.TcpMessagingSettings.ConnectToEndpoints */
	int32_t ConnectionRetryDelay; /* Ofs: 0x58 Size: 0x4 - IntProperty TcpMessaging.TcpMessagingSettings.ConnectionRetryDelay */
	uint8_t UnknownData5C[0x4];


	inline bool EnableTransport()
	{
		return boolField30& 0x1;
	}
	inline bool SetEnableTransport(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetListenEndpoint(t_structHelper inst, FString value) { inst.WriteOffset(0x38, value); }
	inline bool SetConnectToEndpoints(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x48, value); }
	inline bool SetConnectionRetryDelay(t_structHelper inst, int32_t value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTcpMessagingSettings = sizeof(UTcpMessagingSettings); // 96
    static_assert(sizeof(UTcpMessagingSettings) == 0x60, "Size of UTcpMessagingSettings is not correct.");
	auto constexpr UTcpMessagingSettings_boolField30_Offset = offsetof(UTcpMessagingSettings, boolField30);
	static_assert(UTcpMessagingSettings_boolField30_Offset == 0x30, "UTcpMessagingSettings::boolField30 offset is not 30");
	auto constexpr UTcpMessagingSettings_ListenEndpoint_Offset = offsetof(UTcpMessagingSettings, ListenEndpoint);
	static_assert(UTcpMessagingSettings_ListenEndpoint_Offset == 0x38, "UTcpMessagingSettings::ListenEndpoint offset is not 38");
	auto constexpr UTcpMessagingSettings_ConnectToEndpoints_Offset = offsetof(UTcpMessagingSettings, ConnectToEndpoints);
	static_assert(UTcpMessagingSettings_ConnectToEndpoints_Offset == 0x48, "UTcpMessagingSettings::ConnectToEndpoints offset is not 48");
	auto constexpr UTcpMessagingSettings_ConnectionRetryDelay_Offset = offsetof(UTcpMessagingSettings, ConnectionRetryDelay);
	static_assert(UTcpMessagingSettings_ConnectionRetryDelay_Offset == 0x58, "UTcpMessagingSettings::ConnectionRetryDelay offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
