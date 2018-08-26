#pragma once
#include "UOnlineBeacon.hpp"
#include "EBeaconConnectionState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineBeaconClient // Size: 0x4C0
	: public UOnlineBeacon // Size: 0x430
{
private:
	typedef UOnlineBeaconClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2105); // id32("Class OnlineSubsystemUtils.OnlineBeaconClient")
		return ptr;
	}
	ExternalPtr<struct UOnlineBeaconHostObject> BeaconOwner; /* Ofs: 0x430 Size: 0x8 - ObjectProperty OnlineSubsystemUtils.OnlineBeaconClient.BeaconOwner */
	ExternalPtr<struct UNetConnection> BeaconConnection; /* Ofs: 0x438 Size: 0x8 - ObjectProperty OnlineSubsystemUtils.OnlineBeaconClient.BeaconConnection */
	TEnumAsByte<enum EBeaconConnectionState> ConnectionState; /* Ofs: 0x440 Size: 0x1 - EnumProperty OnlineSubsystemUtils.OnlineBeaconClient.ConnectionState */
	uint8_t UnknownData441[0x7F];


	inline bool SetBeaconOwner(t_structHelper inst, ExternalPtr<struct UOnlineBeaconHostObject> value) { inst.WriteOffset(0x430, value); }
	inline bool SetBeaconConnection(t_structHelper inst, ExternalPtr<struct UNetConnection> value) { inst.WriteOffset(0x438, value); }
	inline bool SetConnectionState(t_structHelper inst, TEnumAsByte<enum EBeaconConnectionState> value) { inst.WriteOffset(0x440, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineBeaconClient = sizeof(UOnlineBeaconClient); // 1216
    static_assert(sizeof(UOnlineBeaconClient) == 0x4C0, "Size of UOnlineBeaconClient is not correct.");
	auto constexpr UOnlineBeaconClient_BeaconOwner_Offset = offsetof(UOnlineBeaconClient, BeaconOwner);
	static_assert(UOnlineBeaconClient_BeaconOwner_Offset == 0x430, "UOnlineBeaconClient::BeaconOwner offset is not 430");
	auto constexpr UOnlineBeaconClient_BeaconConnection_Offset = offsetof(UOnlineBeaconClient, BeaconConnection);
	static_assert(UOnlineBeaconClient_BeaconConnection_Offset == 0x438, "UOnlineBeaconClient::BeaconConnection offset is not 438");
	auto constexpr UOnlineBeaconClient_ConnectionState_Offset = offsetof(UOnlineBeaconClient, ConnectionState);
	static_assert(UOnlineBeaconClient_ConnectionState_Offset == 0x440, "UOnlineBeaconClient::ConnectionState offset is not 440");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
