#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkAudioEvent // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UAkAudioEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2136); // id32("Class AkAudio.AkAudioEvent")
		return ptr;
	}
	ExternalPtr<struct UAkAudioBank> RequiredBank; /* Ofs: 0x30 Size: 0x8 - ObjectProperty AkAudio.AkAudioEvent.RequiredBank */
	float MaxAttenuationRadius; /* Ofs: 0x38 Size: 0x4 - FloatProperty AkAudio.AkAudioEvent.MaxAttenuationRadius */
	uint8_t boolField3C;
	uint8_t UnknownData3D[0x3];
	float MinimumDuration; /* Ofs: 0x40 Size: 0x4 - FloatProperty AkAudio.AkAudioEvent.MinimumDuration */
	float MaximumDuration; /* Ofs: 0x44 Size: 0x4 - FloatProperty AkAudio.AkAudioEvent.MaximumDuration */


	inline bool SetRequiredBank(t_structHelper inst, ExternalPtr<struct UAkAudioBank> value) { inst.WriteOffset(0x30, value); }
	inline bool SetMaxAttenuationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool IsInfinite()
	{
		return boolField3C& 0x1;
	}
	inline bool SetIsInfinite(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMinimumDuration(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetMaximumDuration(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkAudioEvent = sizeof(UAkAudioEvent); // 72
    static_assert(sizeof(UAkAudioEvent) == 0x48, "Size of UAkAudioEvent is not correct.");
	auto constexpr UAkAudioEvent_RequiredBank_Offset = offsetof(UAkAudioEvent, RequiredBank);
	static_assert(UAkAudioEvent_RequiredBank_Offset == 0x30, "UAkAudioEvent::RequiredBank offset is not 30");
	auto constexpr UAkAudioEvent_MaxAttenuationRadius_Offset = offsetof(UAkAudioEvent, MaxAttenuationRadius);
	static_assert(UAkAudioEvent_MaxAttenuationRadius_Offset == 0x38, "UAkAudioEvent::MaxAttenuationRadius offset is not 38");
	auto constexpr UAkAudioEvent_boolField3C_Offset = offsetof(UAkAudioEvent, boolField3C);
	static_assert(UAkAudioEvent_boolField3C_Offset == 0x3c, "UAkAudioEvent::boolField3C offset is not 3c");
	auto constexpr UAkAudioEvent_MinimumDuration_Offset = offsetof(UAkAudioEvent, MinimumDuration);
	static_assert(UAkAudioEvent_MinimumDuration_Offset == 0x40, "UAkAudioEvent::MinimumDuration offset is not 40");
	auto constexpr UAkAudioEvent_MaximumDuration_Offset = offsetof(UAkAudioEvent, MaximumDuration);
	static_assert(UAkAudioEvent_MaximumDuration_Offset == 0x44, "UAkAudioEvent::MaximumDuration offset is not 44");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
