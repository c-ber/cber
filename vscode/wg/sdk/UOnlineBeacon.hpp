#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UOnlineBeacon // Size: 0x430
	: public UActor // Size: 0x410
{
private:
	typedef UOnlineBeacon t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2104); // id32("Class OnlineSubsystemUtils.OnlineBeacon")
		return ptr;
	}
	float BeaconConnectionInitialTimeout; /* Ofs: 0x410 Size: 0x4 - FloatProperty OnlineSubsystemUtils.OnlineBeacon.BeaconConnectionInitialTimeout */
	float BeaconConnectionTimeout; /* Ofs: 0x414 Size: 0x4 - FloatProperty OnlineSubsystemUtils.OnlineBeacon.BeaconConnectionTimeout */
	ExternalPtr<struct UNetDriver> NetDriver; /* Ofs: 0x418 Size: 0x8 - ObjectProperty OnlineSubsystemUtils.OnlineBeacon.NetDriver */
	uint8_t UnknownData420[0x10];


	inline bool SetBeaconConnectionInitialTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetBeaconConnectionTimeout(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
	inline bool SetNetDriver(t_structHelper inst, ExternalPtr<struct UNetDriver> value) { inst.WriteOffset(0x418, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUOnlineBeacon = sizeof(UOnlineBeacon); // 1072
    static_assert(sizeof(UOnlineBeacon) == 0x430, "Size of UOnlineBeacon is not correct.");
	auto constexpr UOnlineBeacon_BeaconConnectionInitialTimeout_Offset = offsetof(UOnlineBeacon, BeaconConnectionInitialTimeout);
	static_assert(UOnlineBeacon_BeaconConnectionInitialTimeout_Offset == 0x410, "UOnlineBeacon::BeaconConnectionInitialTimeout offset is not 410");
	auto constexpr UOnlineBeacon_BeaconConnectionTimeout_Offset = offsetof(UOnlineBeacon, BeaconConnectionTimeout);
	static_assert(UOnlineBeacon_BeaconConnectionTimeout_Offset == 0x414, "UOnlineBeacon::BeaconConnectionTimeout offset is not 414");
	auto constexpr UOnlineBeacon_NetDriver_Offset = offsetof(UOnlineBeacon, NetDriver);
	static_assert(UOnlineBeacon_NetDriver_Offset == 0x418, "UOnlineBeacon::NetDriver offset is not 418");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
