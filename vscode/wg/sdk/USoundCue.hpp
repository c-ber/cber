#pragma once
#include "USoundBase.hpp"
#include "FSoundAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundCue // Size: 0x200
	: public USoundBase // Size: 0xA8
{
private:
	typedef USoundCue t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1205); // id32("Class Engine.SoundCue")
		return ptr;
	}
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];
	ExternalPtr<struct USoundNode> FirstNode; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty Engine.SoundCue.FirstNode */
	float VolumeMultiplier; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Engine.SoundCue.VolumeMultiplier */
	float PitchMultiplier; /* Ofs: 0xBC Size: 0x4 - FloatProperty Engine.SoundCue.PitchMultiplier */
	FSoundAttenuationSettings AttenuationOverrides; /* Ofs: 0xC0 Size: 0x130 - StructProperty Engine.SoundCue.AttenuationOverrides */
	uint8_t UnknownData1F0[0x10];


	inline bool bOverrideAttenuation()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbOverrideAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetFirstNode(t_structHelper inst, ExternalPtr<struct USoundNode> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetVolumeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetPitchMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0xBC, value); }
	inline bool SetAttenuationOverrides(t_structHelper inst, FSoundAttenuationSettings value) { inst.WriteOffset(0xC0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundCue = sizeof(USoundCue); // 512
    static_assert(sizeof(USoundCue) == 0x200, "Size of USoundCue is not correct.");
	auto constexpr USoundCue_boolFieldA8_Offset = offsetof(USoundCue, boolFieldA8);
	static_assert(USoundCue_boolFieldA8_Offset == 0xa8, "USoundCue::boolFieldA8 offset is not a8");
	auto constexpr USoundCue_FirstNode_Offset = offsetof(USoundCue, FirstNode);
	static_assert(USoundCue_FirstNode_Offset == 0xb0, "USoundCue::FirstNode offset is not b0");
	auto constexpr USoundCue_VolumeMultiplier_Offset = offsetof(USoundCue, VolumeMultiplier);
	static_assert(USoundCue_VolumeMultiplier_Offset == 0xb8, "USoundCue::VolumeMultiplier offset is not b8");
	auto constexpr USoundCue_PitchMultiplier_Offset = offsetof(USoundCue, PitchMultiplier);
	static_assert(USoundCue_PitchMultiplier_Offset == 0xbc, "USoundCue::PitchMultiplier offset is not bc");
	auto constexpr USoundCue_AttenuationOverrides_Offset = offsetof(USoundCue, AttenuationOverrides);
	static_assert(USoundCue_AttenuationOverrides_Offset == 0xc0, "USoundCue::AttenuationOverrides offset is not c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
