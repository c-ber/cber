#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkComponent // Size: 0x510
	: public USceneComponent // Size: 0x490
{
private:
	typedef UAkComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2138); // id32("Class AkAudio.AkComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x10];
	uint8_t boolField4A0;
	uint8_t boolField4A1;
	uint8_t boolField4A2;
	uint8_t UnknownData4A3[0x1];
	float AttenuationScalingFactor; /* Ofs: 0x4A4 Size: 0x4 - FloatProperty AkAudio.AkComponent.AttenuationScalingFactor */
	float OcclusionRefreshInterval; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty AkAudio.AkComponent.OcclusionRefreshInterval */
	uint8_t UnknownData4AC[0x4];
	ExternalPtr<struct UAkAudioEvent> AkAudioEvent; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty AkAudio.AkComponent.AkAudioEvent */
	FString EventName; /* Ofs: 0x4B8 Size: 0x10 - StrProperty AkAudio.AkComponent.EventName */
	uint8_t UnknownData4C8[0x48];


	inline bool StopWhenOwnerDestroyed()
	{
		return boolField4A0& 0x1;
	}
	inline bool SetStopWhenOwnerDestroyed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDynamicReverb()
	{
		return boolField4A1& 0x1;
	}
	inline bool SetbDynamicReverb(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseDoppler()
	{
		return boolField4A2& 0x1;
	}
	inline bool SetbUseDoppler(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttenuationScalingFactor(t_structHelper inst, float value) { inst.WriteOffset(0x4A4, value); }
	inline bool SetOcclusionRefreshInterval(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetAkAudioEvent(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetEventName(t_structHelper inst, FString value) { inst.WriteOffset(0x4B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkComponent = sizeof(UAkComponent); // 1296
    static_assert(sizeof(UAkComponent) == 0x510, "Size of UAkComponent is not correct.");
	auto constexpr UAkComponent_boolField4A0_Offset = offsetof(UAkComponent, boolField4A0);
	static_assert(UAkComponent_boolField4A0_Offset == 0x4a0, "UAkComponent::boolField4A0 offset is not 4a0");
	auto constexpr UAkComponent_boolField4A1_Offset = offsetof(UAkComponent, boolField4A1);
	static_assert(UAkComponent_boolField4A1_Offset == 0x4a1, "UAkComponent::boolField4A1 offset is not 4a1");
	auto constexpr UAkComponent_boolField4A2_Offset = offsetof(UAkComponent, boolField4A2);
	static_assert(UAkComponent_boolField4A2_Offset == 0x4a2, "UAkComponent::boolField4A2 offset is not 4a2");
	auto constexpr UAkComponent_AttenuationScalingFactor_Offset = offsetof(UAkComponent, AttenuationScalingFactor);
	static_assert(UAkComponent_AttenuationScalingFactor_Offset == 0x4a4, "UAkComponent::AttenuationScalingFactor offset is not 4a4");
	auto constexpr UAkComponent_OcclusionRefreshInterval_Offset = offsetof(UAkComponent, OcclusionRefreshInterval);
	static_assert(UAkComponent_OcclusionRefreshInterval_Offset == 0x4a8, "UAkComponent::OcclusionRefreshInterval offset is not 4a8");
	auto constexpr UAkComponent_AkAudioEvent_Offset = offsetof(UAkComponent, AkAudioEvent);
	static_assert(UAkComponent_AkAudioEvent_Offset == 0x4b0, "UAkComponent::AkAudioEvent offset is not 4b0");
	auto constexpr UAkComponent_EventName_Offset = offsetof(UAkComponent, EventName);
	static_assert(UAkComponent_EventName_Offset == 0x4b8, "UAkComponent::EventName offset is not 4b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
