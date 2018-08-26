#pragma once
#include "UOnlineBeaconClient.hpp"
#include "FPartyReservation.hpp"
#include "EClientRequestType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPartyBeaconClient // Size: 0x5F0
	: public UOnlineBeaconClient // Size: 0x4C0
{
private:
	typedef UPartyBeaconClient t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2107); // id32("Class OnlineSubsystemUtils.PartyBeaconClient")
		return ptr;
	}
	uint8_t UnknownData4C0[0xC0];
	FString DestSessionId; /* Ofs: 0x580 Size: 0x10 - StrProperty OnlineSubsystemUtils.PartyBeaconClient.DestSessionId */
	FPartyReservation PendingReservation; /* Ofs: 0x590 Size: 0x30 - StructProperty OnlineSubsystemUtils.PartyBeaconClient.PendingReservation */
	TEnumAsByte<enum EClientRequestType> RequestType; /* Ofs: 0x5C0 Size: 0x1 - EnumProperty OnlineSubsystemUtils.PartyBeaconClient.RequestType */
	uint8_t boolField5C1;
	uint8_t boolField5C2;
	uint8_t UnknownData5C3[0x2D];


	inline bool SetDestSessionId(t_structHelper inst, FString value) { inst.WriteOffset(0x580, value); }
	inline bool SetPendingReservation(t_structHelper inst, FPartyReservation value) { inst.WriteOffset(0x590, value); }
	inline bool SetRequestType(t_structHelper inst, TEnumAsByte<enum EClientRequestType> value) { inst.WriteOffset(0x5C0, value); }
	inline bool bPendingReservationSent()
	{
		return boolField5C1& 0x1;
	}
	inline bool SetbPendingReservationSent(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCancelReservation()
	{
		return boolField5C2& 0x1;
	}
	inline bool SetbCancelReservation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5C2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPartyBeaconClient = sizeof(UPartyBeaconClient); // 1520
    static_assert(sizeof(UPartyBeaconClient) == 0x5F0, "Size of UPartyBeaconClient is not correct.");
	auto constexpr UPartyBeaconClient_DestSessionId_Offset = offsetof(UPartyBeaconClient, DestSessionId);
	static_assert(UPartyBeaconClient_DestSessionId_Offset == 0x580, "UPartyBeaconClient::DestSessionId offset is not 580");
	auto constexpr UPartyBeaconClient_PendingReservation_Offset = offsetof(UPartyBeaconClient, PendingReservation);
	static_assert(UPartyBeaconClient_PendingReservation_Offset == 0x590, "UPartyBeaconClient::PendingReservation offset is not 590");
	auto constexpr UPartyBeaconClient_RequestType_Offset = offsetof(UPartyBeaconClient, RequestType);
	static_assert(UPartyBeaconClient_RequestType_Offset == 0x5c0, "UPartyBeaconClient::RequestType offset is not 5c0");
	auto constexpr UPartyBeaconClient_boolField5C1_Offset = offsetof(UPartyBeaconClient, boolField5C1);
	static_assert(UPartyBeaconClient_boolField5C1_Offset == 0x5c1, "UPartyBeaconClient::boolField5C1 offset is not 5c1");
	auto constexpr UPartyBeaconClient_boolField5C2_Offset = offsetof(UPartyBeaconClient, boolField5C2);
	static_assert(UPartyBeaconClient_boolField5C2_Offset == 0x5c2, "UPartyBeaconClient::boolField5C2 offset is not 5c2");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
