#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslVehicleSyncComponent // Size: 0x260
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UTslVehicleSyncComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1612); // id32("Class TslGame.TslVehicleSyncComponent")
		return ptr;
	}
//	FScriptMulticastDelegate OnSyncHit; /* Ofs: 0x1E8 Size: 0x10 - MulticastDelegateProperty TslGame.TslVehicleSyncComponent.OnSyncHit */
	uint8_t UnknownData1F0[0x14];
	float MinReliableCorrectionInterval; /* Ofs: 0x204 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.MinReliableCorrectionInterval */
	uint8_t UnknownData208[0x4];
	float MinCorrectionInterval; /* Ofs: 0x20C Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.MinCorrectionInterval */
	uint8_t UnknownData210[0x4];
	float SendingToServerIntervalAtClient; /* Ofs: 0x214 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.SendingToServerIntervalAtClient */
	uint8_t UnknownData218[0x8];
	float SendingReliableHitToServerIntervalAtClient; /* Ofs: 0x220 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.SendingReliableHitToServerIntervalAtClient */
	uint8_t UnknownData224[0x4];
	float AllowedMaxDistanceSqAtServer; /* Ofs: 0x228 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.AllowedMaxDistanceSqAtServer */
	float StationaryCorrectionIntervalAtClient; /* Ofs: 0x22C Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.StationaryCorrectionIntervalAtClient */
	uint8_t UnknownData230[0x4];
	float StationaryCorrectionSpeedThresholdSq; /* Ofs: 0x234 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.StationaryCorrectionSpeedThresholdSq */
	float StationaryCorrectionThresholdDistanceSq; /* Ofs: 0x238 Size: 0x4 - FloatProperty TslGame.TslVehicleSyncComponent.StationaryCorrectionThresholdDistanceSq */
	uint8_t UnknownData23C[0x24];


//	inline bool SetOnSyncHit(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetMinReliableCorrectionInterval(t_structHelper inst, float value) { inst.WriteOffset(0x204, value); }
	inline bool SetMinCorrectionInterval(t_structHelper inst, float value) { inst.WriteOffset(0x20C, value); }
	inline bool SetSendingToServerIntervalAtClient(t_structHelper inst, float value) { inst.WriteOffset(0x214, value); }
	inline bool SetSendingReliableHitToServerIntervalAtClient(t_structHelper inst, float value) { inst.WriteOffset(0x220, value); }
	inline bool SetAllowedMaxDistanceSqAtServer(t_structHelper inst, float value) { inst.WriteOffset(0x228, value); }
	inline bool SetStationaryCorrectionIntervalAtClient(t_structHelper inst, float value) { inst.WriteOffset(0x22C, value); }
	inline bool SetStationaryCorrectionSpeedThresholdSq(t_structHelper inst, float value) { inst.WriteOffset(0x234, value); }
	inline bool SetStationaryCorrectionThresholdDistanceSq(t_structHelper inst, float value) { inst.WriteOffset(0x238, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslVehicleSyncComponent = sizeof(UTslVehicleSyncComponent); // 608
    static_assert(sizeof(UTslVehicleSyncComponent) == 0x260, "Size of UTslVehicleSyncComponent is not correct.");
//	auto constexpr UTslVehicleSyncComponent_OnSyncHit_Offset = offsetof(UTslVehicleSyncComponent, OnSyncHit);
//	static_assert(UTslVehicleSyncComponent_OnSyncHit_Offset == 0x1e8, "UTslVehicleSyncComponent::OnSyncHit offset is not 1e8");
	auto constexpr UTslVehicleSyncComponent_MinReliableCorrectionInterval_Offset = offsetof(UTslVehicleSyncComponent, MinReliableCorrectionInterval);
	static_assert(UTslVehicleSyncComponent_MinReliableCorrectionInterval_Offset == 0x204, "UTslVehicleSyncComponent::MinReliableCorrectionInterval offset is not 204");
	auto constexpr UTslVehicleSyncComponent_MinCorrectionInterval_Offset = offsetof(UTslVehicleSyncComponent, MinCorrectionInterval);
	static_assert(UTslVehicleSyncComponent_MinCorrectionInterval_Offset == 0x20c, "UTslVehicleSyncComponent::MinCorrectionInterval offset is not 20c");
	auto constexpr UTslVehicleSyncComponent_SendingToServerIntervalAtClient_Offset = offsetof(UTslVehicleSyncComponent, SendingToServerIntervalAtClient);
	static_assert(UTslVehicleSyncComponent_SendingToServerIntervalAtClient_Offset == 0x214, "UTslVehicleSyncComponent::SendingToServerIntervalAtClient offset is not 214");
	auto constexpr UTslVehicleSyncComponent_SendingReliableHitToServerIntervalAtClient_Offset = offsetof(UTslVehicleSyncComponent, SendingReliableHitToServerIntervalAtClient);
	static_assert(UTslVehicleSyncComponent_SendingReliableHitToServerIntervalAtClient_Offset == 0x220, "UTslVehicleSyncComponent::SendingReliableHitToServerIntervalAtClient offset is not 220");
	auto constexpr UTslVehicleSyncComponent_AllowedMaxDistanceSqAtServer_Offset = offsetof(UTslVehicleSyncComponent, AllowedMaxDistanceSqAtServer);
	static_assert(UTslVehicleSyncComponent_AllowedMaxDistanceSqAtServer_Offset == 0x228, "UTslVehicleSyncComponent::AllowedMaxDistanceSqAtServer offset is not 228");
	auto constexpr UTslVehicleSyncComponent_StationaryCorrectionIntervalAtClient_Offset = offsetof(UTslVehicleSyncComponent, StationaryCorrectionIntervalAtClient);
	static_assert(UTslVehicleSyncComponent_StationaryCorrectionIntervalAtClient_Offset == 0x22c, "UTslVehicleSyncComponent::StationaryCorrectionIntervalAtClient offset is not 22c");
	auto constexpr UTslVehicleSyncComponent_StationaryCorrectionSpeedThresholdSq_Offset = offsetof(UTslVehicleSyncComponent, StationaryCorrectionSpeedThresholdSq);
	static_assert(UTslVehicleSyncComponent_StationaryCorrectionSpeedThresholdSq_Offset == 0x234, "UTslVehicleSyncComponent::StationaryCorrectionSpeedThresholdSq offset is not 234");
	auto constexpr UTslVehicleSyncComponent_StationaryCorrectionThresholdDistanceSq_Offset = offsetof(UTslVehicleSyncComponent, StationaryCorrectionThresholdDistanceSq);
	static_assert(UTslVehicleSyncComponent_StationaryCorrectionThresholdDistanceSq_Offset == 0x238, "UTslVehicleSyncComponent::StationaryCorrectionThresholdDistanceSq offset is not 238");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
