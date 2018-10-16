#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPawnSensingComponent // Size: 0x230
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UPawnSensingComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(666); // id32("Class AIModule.PawnSensingComponent")
		return ptr;
	}
//	float HearingThreshold; /* Ofs: 0x1E8 Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.HearingThreshold */
//	float LOSHearingThreshold; /* Ofs: 0x1EC Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.LOSHearingThreshold */
	float SightRadius; /* Ofs: 0x1F0 Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.SightRadius */
	float SensingInterval; /* Ofs: 0x1F4 Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.SensingInterval */
	float HearingMaxSoundAge; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.HearingMaxSoundAge */
	uint8_t boolField1FC;
	uint8_t UnknownData1FD[0xB];
	FScriptMulticastDelegate OnSeePawn; /* Ofs: 0x208 Size: 0x10 - MulticastDelegateProperty AIModule.PawnSensingComponent.OnSeePawn */
	FScriptMulticastDelegate OnHearNoise; /* Ofs: 0x218 Size: 0x10 - MulticastDelegateProperty AIModule.PawnSensingComponent.OnHearNoise */
	float PeripheralVisionAngle; /* Ofs: 0x228 Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.PeripheralVisionAngle */
	float PeripheralVisionCosine; /* Ofs: 0x22C Size: 0x4 - FloatProperty AIModule.PawnSensingComponent.PeripheralVisionCosine */


//	inline bool SetHearingThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x1E8, value); }
//	inline bool SetLOSHearingThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x1EC, value); }
	inline bool SetSightRadius(t_structHelper inst, float value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetSensingInterval(t_structHelper inst, float value) { inst.WriteOffset(0x1F4, value); }
	inline bool SetHearingMaxSoundAge(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool bEnableSensingUpdates()
	{
		return boolField1FC& 0x1;
	}
	inline bool SetbEnableSensingUpdates(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOnlySensePlayers()
	{
		return boolField1FC& 0x2;
	}
	inline bool SetbOnlySensePlayers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSeePawns()
	{
		return boolField1FC& 0x4;
	}
	inline bool SetbSeePawns(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bHearNoises()
	{
		return boolField1FC& 0x8;
	}
	inline bool SetbHearNoises(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1FC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetOnSeePawn(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x208, value); }
	inline bool SetOnHearNoise(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x218, value); }
	inline bool SetPeripheralVisionAngle(t_structHelper inst, float value) { inst.WriteOffset(0x228, value); }
	inline bool SetPeripheralVisionCosine(t_structHelper inst, float value) { inst.WriteOffset(0x22C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPawnSensingComponent = sizeof(UPawnSensingComponent); // 560
    static_assert(sizeof(UPawnSensingComponent) == 0x230, "Size of UPawnSensingComponent is not correct.");
//	auto constexpr UPawnSensingComponent_HearingThreshold_Offset = offsetof(UPawnSensingComponent, HearingThreshold);
//	static_assert(UPawnSensingComponent_HearingThreshold_Offset == 0x1e8, "UPawnSensingComponent::HearingThreshold offset is not 1e8");
//	auto constexpr UPawnSensingComponent_LOSHearingThreshold_Offset = offsetof(UPawnSensingComponent, LOSHearingThreshold);
//	static_assert(UPawnSensingComponent_LOSHearingThreshold_Offset == 0x1ec, "UPawnSensingComponent::LOSHearingThreshold offset is not 1ec");
	auto constexpr UPawnSensingComponent_SightRadius_Offset = offsetof(UPawnSensingComponent, SightRadius);
	static_assert(UPawnSensingComponent_SightRadius_Offset == 0x1f0, "UPawnSensingComponent::SightRadius offset is not 1f0");
	auto constexpr UPawnSensingComponent_SensingInterval_Offset = offsetof(UPawnSensingComponent, SensingInterval);
	static_assert(UPawnSensingComponent_SensingInterval_Offset == 0x1f4, "UPawnSensingComponent::SensingInterval offset is not 1f4");
	auto constexpr UPawnSensingComponent_HearingMaxSoundAge_Offset = offsetof(UPawnSensingComponent, HearingMaxSoundAge);
	static_assert(UPawnSensingComponent_HearingMaxSoundAge_Offset == 0x1f8, "UPawnSensingComponent::HearingMaxSoundAge offset is not 1f8");
	auto constexpr UPawnSensingComponent_boolField1FC_Offset = offsetof(UPawnSensingComponent, boolField1FC);
	static_assert(UPawnSensingComponent_boolField1FC_Offset == 0x1fc, "UPawnSensingComponent::boolField1FC offset is not 1fc");
	auto constexpr UPawnSensingComponent_OnSeePawn_Offset = offsetof(UPawnSensingComponent, OnSeePawn);
	static_assert(UPawnSensingComponent_OnSeePawn_Offset == 0x208, "UPawnSensingComponent::OnSeePawn offset is not 208");
	auto constexpr UPawnSensingComponent_OnHearNoise_Offset = offsetof(UPawnSensingComponent, OnHearNoise);
	static_assert(UPawnSensingComponent_OnHearNoise_Offset == 0x218, "UPawnSensingComponent::OnHearNoise offset is not 218");
	auto constexpr UPawnSensingComponent_PeripheralVisionAngle_Offset = offsetof(UPawnSensingComponent, PeripheralVisionAngle);
	static_assert(UPawnSensingComponent_PeripheralVisionAngle_Offset == 0x228, "UPawnSensingComponent::PeripheralVisionAngle offset is not 228");
	auto constexpr UPawnSensingComponent_PeripheralVisionCosine_Offset = offsetof(UPawnSensingComponent, PeripheralVisionCosine);
	static_assert(UPawnSensingComponent_PeripheralVisionCosine_Offset == 0x22c, "UPawnSensingComponent::PeripheralVisionCosine offset is not 22c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
