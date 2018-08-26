#pragma once
#include "UOnlineBeaconHostObject.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPartyBeaconHost // Size: 0x590
	: public UOnlineBeaconHostObject // Size: 0x430
{
private:
	typedef UPartyBeaconHost t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2111); // id32("Class OnlineSubsystemUtils.PartyBeaconHost")
		return ptr;
	}
	ExternalPtr<struct UPartyBeaconState> State; /* Ofs: 0x430 Size: 0x8 - ObjectProperty OnlineSubsystemUtils.PartyBeaconHost.State */
	uint8_t UnknownData438[0x148];
	uint8_t boolField580;
	uint8_t UnknownData581[0x3];
	float SessionTimeoutSecs; /* Ofs: 0x584 Size: 0x4 - FloatProperty OnlineSubsystemUtils.PartyBeaconHost.SessionTimeoutSecs */
	float TravelSessionTimeoutSecs; /* Ofs: 0x588 Size: 0x4 - FloatProperty OnlineSubsystemUtils.PartyBeaconHost.TravelSessionTimeoutSecs */
	uint8_t UnknownData58C[0x4];


	inline bool SetState(t_structHelper inst, ExternalPtr<struct UPartyBeaconState> value) { inst.WriteOffset(0x430, value); }
	inline bool bLogoutOnSessionTimeout()
	{
		return boolField580& 0x1;
	}
	inline bool SetbLogoutOnSessionTimeout(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x580, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSessionTimeoutSecs(t_structHelper inst, float value) { inst.WriteOffset(0x584, value); }
	inline bool SetTravelSessionTimeoutSecs(t_structHelper inst, float value) { inst.WriteOffset(0x588, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPartyBeaconHost = sizeof(UPartyBeaconHost); // 1424
    static_assert(sizeof(UPartyBeaconHost) == 0x590, "Size of UPartyBeaconHost is not correct.");
	auto constexpr UPartyBeaconHost_State_Offset = offsetof(UPartyBeaconHost, State);
	static_assert(UPartyBeaconHost_State_Offset == 0x430, "UPartyBeaconHost::State offset is not 430");
	auto constexpr UPartyBeaconHost_boolField580_Offset = offsetof(UPartyBeaconHost, boolField580);
	static_assert(UPartyBeaconHost_boolField580_Offset == 0x580, "UPartyBeaconHost::boolField580 offset is not 580");
	auto constexpr UPartyBeaconHost_SessionTimeoutSecs_Offset = offsetof(UPartyBeaconHost, SessionTimeoutSecs);
	static_assert(UPartyBeaconHost_SessionTimeoutSecs_Offset == 0x584, "UPartyBeaconHost::SessionTimeoutSecs offset is not 584");
	auto constexpr UPartyBeaconHost_TravelSessionTimeoutSecs_Offset = offsetof(UPartyBeaconHost, TravelSessionTimeoutSecs);
	static_assert(UPartyBeaconHost_TravelSessionTimeoutSecs_Offset == 0x588, "UPartyBeaconHost::TravelSessionTimeoutSecs offset is not 588");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
