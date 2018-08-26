#pragma once
#include "UOnlineBeacon.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineBeaconHost // Size: 0x4F0
	: public UOnlineBeacon // Size: 0x430
{
private:
	typedef UOnlineBeaconHost t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2109); // id32("Class OnlineSubsystemUtils.OnlineBeaconHost")
		return ptr;
	}
	int32_t ListenPort; /* Ofs: 0x430 Size: 0x4 - IntProperty OnlineSubsystemUtils.OnlineBeaconHost.ListenPort */
	uint8_t UnknownData434[0x4];
	TArray<ExternalPtr<struct UOnlineBeaconClient>> ClientActors; /* Ofs: 0x438 Size: 0x10 - ArrayProperty OnlineSubsystemUtils.OnlineBeaconHost.ClientActors */
	uint8_t UnknownData448[0xA8];


	inline bool SetListenPort(t_structHelper inst, int32_t value) { inst.WriteOffset(0x430, value); }
	inline bool SetClientActors(t_structHelper inst, TArray<ExternalPtr<struct UOnlineBeaconClient>> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineBeaconHost = sizeof(UOnlineBeaconHost); // 1264
    static_assert(sizeof(UOnlineBeaconHost) == 0x4F0, "Size of UOnlineBeaconHost is not correct.");
	auto constexpr UOnlineBeaconHost_ListenPort_Offset = offsetof(UOnlineBeaconHost, ListenPort);
	static_assert(UOnlineBeaconHost_ListenPort_Offset == 0x430, "UOnlineBeaconHost::ListenPort offset is not 430");
	auto constexpr UOnlineBeaconHost_ClientActors_Offset = offsetof(UOnlineBeaconHost, ClientActors);
	static_assert(UOnlineBeaconHost_ClientActors_Offset == 0x438, "UOnlineBeaconHost::ClientActors offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
