#pragma once
#include "UTslAircraftVehicle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTransportAircraftVehicle // Size: 0x5B0
	: public UTslAircraftVehicle // Size: 0x530
{
private:
	typedef UTransportAircraftVehicle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1985); // id32("Class TslGame.TransportAircraftVehicle")
		return ptr;
	}
	uint8_t UnknownData530[0x20];
	ExternalPtr<struct UAkAudioEvent> RideSound; /* Ofs: 0x550 Size: 0x8 - ObjectProperty TslGame.TransportAircraftVehicle.RideSound */
	ExternalPtr<struct UAkAudioEvent> LeaveSound; /* Ofs: 0x558 Size: 0x8 - ObjectProperty TslGame.TransportAircraftVehicle.LeaveSound */
	ExternalPtr<struct UAkComponent> AkSoundCom; /* Ofs: 0x560 Size: 0x8 - ObjectProperty TslGame.TransportAircraftVehicle.AkSoundCom */
	int32_t TotalRiderCount; /* Ofs: 0x568 Size: 0x4 - IntProperty TslGame.TransportAircraftVehicle.TotalRiderCount */
	int32_t RiderCount; /* Ofs: 0x56C Size: 0x4 - IntProperty TslGame.TransportAircraftVehicle.RiderCount */
	ExternalPtr<struct UTslVehicleSeatComponent> VehicleSeatComponent; /* Ofs: 0x570 Size: 0x8 - ObjectProperty TslGame.TransportAircraftVehicle.VehicleSeatComponent */
	ExternalPtr<struct UClass> ParachuteItem; /* Ofs: 0x578 Size: 0x8 - ClassProperty TslGame.TransportAircraftVehicle.ParachuteItem */
	ExternalPtr<struct UInteractionComponent> InteractionComponent; /* Ofs: 0x580 Size: 0x8 - ObjectProperty TslGame.TransportAircraftVehicle.InteractionComponent */
	uint8_t boolField588;
	uint8_t boolField589;
	uint8_t boolField58A;
	uint8_t UnknownData58B[0x1];
	float EjectPredictionTime; /* Ofs: 0x58C Size: 0x4 - FloatProperty TslGame.TransportAircraftVehicle.EjectPredictionTime */
	float MaxEjectSpeed; /* Ofs: 0x590 Size: 0x4 - FloatProperty TslGame.TransportAircraftVehicle.MaxEjectSpeed */
	uint8_t UnknownData594[0x1C];


	inline bool SetRideSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x550, value); }
	inline bool SetLeaveSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x558, value); }
	inline bool SetAkSoundCom(t_structHelper inst, ExternalPtr<struct UAkComponent> value) { inst.WriteOffset(0x560, value); }
	inline bool SetTotalRiderCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x568, value); }
	inline bool SetRiderCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x56C, value); }
	inline bool SetVehicleSeatComponent(t_structHelper inst, ExternalPtr<struct UTslVehicleSeatComponent> value) { inst.WriteOffset(0x570, value); }
	inline bool SetParachuteItem(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x578, value); }
	inline bool SetInteractionComponent(t_structHelper inst, ExternalPtr<struct UInteractionComponent> value) { inst.WriteOffset(0x580, value); }
	inline bool bIsEnteredAtEjectionArea()
	{
		return boolField588& 0x1;
	}
	inline bool SetbIsEnteredAtEjectionArea(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x588, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsAllEjected()
	{
		return boolField589& 0x1;
	}
	inline bool SetbIsAllEjected(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x589, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsVisible()
	{
		return boolField58A& 0x1;
	}
	inline bool SetbIsVisible(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x58A, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEjectPredictionTime(t_structHelper inst, float value) { inst.WriteOffset(0x58C, value); }
	inline bool SetMaxEjectSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTransportAircraftVehicle = sizeof(UTransportAircraftVehicle); // 1456
    static_assert(sizeof(UTransportAircraftVehicle) == 0x5B0, "Size of UTransportAircraftVehicle is not correct.");
	auto constexpr UTransportAircraftVehicle_RideSound_Offset = offsetof(UTransportAircraftVehicle, RideSound);
	static_assert(UTransportAircraftVehicle_RideSound_Offset == 0x550, "UTransportAircraftVehicle::RideSound offset is not 550");
	auto constexpr UTransportAircraftVehicle_LeaveSound_Offset = offsetof(UTransportAircraftVehicle, LeaveSound);
	static_assert(UTransportAircraftVehicle_LeaveSound_Offset == 0x558, "UTransportAircraftVehicle::LeaveSound offset is not 558");
	auto constexpr UTransportAircraftVehicle_AkSoundCom_Offset = offsetof(UTransportAircraftVehicle, AkSoundCom);
	static_assert(UTransportAircraftVehicle_AkSoundCom_Offset == 0x560, "UTransportAircraftVehicle::AkSoundCom offset is not 560");
	auto constexpr UTransportAircraftVehicle_TotalRiderCount_Offset = offsetof(UTransportAircraftVehicle, TotalRiderCount);
	static_assert(UTransportAircraftVehicle_TotalRiderCount_Offset == 0x568, "UTransportAircraftVehicle::TotalRiderCount offset is not 568");
	auto constexpr UTransportAircraftVehicle_RiderCount_Offset = offsetof(UTransportAircraftVehicle, RiderCount);
	static_assert(UTransportAircraftVehicle_RiderCount_Offset == 0x56c, "UTransportAircraftVehicle::RiderCount offset is not 56c");
	auto constexpr UTransportAircraftVehicle_VehicleSeatComponent_Offset = offsetof(UTransportAircraftVehicle, VehicleSeatComponent);
	static_assert(UTransportAircraftVehicle_VehicleSeatComponent_Offset == 0x570, "UTransportAircraftVehicle::VehicleSeatComponent offset is not 570");
	auto constexpr UTransportAircraftVehicle_ParachuteItem_Offset = offsetof(UTransportAircraftVehicle, ParachuteItem);
	static_assert(UTransportAircraftVehicle_ParachuteItem_Offset == 0x578, "UTransportAircraftVehicle::ParachuteItem offset is not 578");
	auto constexpr UTransportAircraftVehicle_InteractionComponent_Offset = offsetof(UTransportAircraftVehicle, InteractionComponent);
	static_assert(UTransportAircraftVehicle_InteractionComponent_Offset == 0x580, "UTransportAircraftVehicle::InteractionComponent offset is not 580");
	auto constexpr UTransportAircraftVehicle_boolField588_Offset = offsetof(UTransportAircraftVehicle, boolField588);
	static_assert(UTransportAircraftVehicle_boolField588_Offset == 0x588, "UTransportAircraftVehicle::boolField588 offset is not 588");
	auto constexpr UTransportAircraftVehicle_boolField589_Offset = offsetof(UTransportAircraftVehicle, boolField589);
	static_assert(UTransportAircraftVehicle_boolField589_Offset == 0x589, "UTransportAircraftVehicle::boolField589 offset is not 589");
	auto constexpr UTransportAircraftVehicle_boolField58A_Offset = offsetof(UTransportAircraftVehicle, boolField58A);
	static_assert(UTransportAircraftVehicle_boolField58A_Offset == 0x58a, "UTransportAircraftVehicle::boolField58A offset is not 58a");
	auto constexpr UTransportAircraftVehicle_EjectPredictionTime_Offset = offsetof(UTransportAircraftVehicle, EjectPredictionTime);
	static_assert(UTransportAircraftVehicle_EjectPredictionTime_Offset == 0x58c, "UTransportAircraftVehicle::EjectPredictionTime offset is not 58c");
	auto constexpr UTransportAircraftVehicle_MaxEjectSpeed_Offset = offsetof(UTransportAircraftVehicle, MaxEjectSpeed);
	static_assert(UTransportAircraftVehicle_MaxEjectSpeed_Offset == 0x590, "UTransportAircraftVehicle::MaxEjectSpeed offset is not 590");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
