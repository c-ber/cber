#pragma once
#include "UAnimNotify.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify_PlaySound // Size: 0x60
	: public UAnimNotify // Size: 0x40
{
private:
	typedef UAnimNotify_PlaySound t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(273); // id32("Class Engine.AnimNotify_PlaySound")
		return ptr;
	}
	ExternalPtr<struct USoundBase> Sound; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.AnimNotify_PlaySound.Sound */
	float VolumeMultiplier; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.AnimNotify_PlaySound.VolumeMultiplier */
	float PitchMultiplier; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.AnimNotify_PlaySound.PitchMultiplier */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];
	FName AttachName; /* Ofs: 0x58 Size: 0x8 - NameProperty Engine.AnimNotify_PlaySound.AttachName */


	inline bool SetSound(t_structHelper inst, ExternalPtr<struct USoundBase> value) { inst.WriteOffset(0x40, value); }
	inline bool SetVolumeMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetPitchMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool bFollow()
	{
		return boolField50& 0x1;
	}
	inline bool SetbFollow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAttachName(t_structHelper inst, FName value) { inst.WriteOffset(0x58, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify_PlaySound = sizeof(UAnimNotify_PlaySound); // 96
    static_assert(sizeof(UAnimNotify_PlaySound) == 0x60, "Size of UAnimNotify_PlaySound is not correct.");
	auto constexpr UAnimNotify_PlaySound_Sound_Offset = offsetof(UAnimNotify_PlaySound, Sound);
	static_assert(UAnimNotify_PlaySound_Sound_Offset == 0x40, "UAnimNotify_PlaySound::Sound offset is not 40");
	auto constexpr UAnimNotify_PlaySound_VolumeMultiplier_Offset = offsetof(UAnimNotify_PlaySound, VolumeMultiplier);
	static_assert(UAnimNotify_PlaySound_VolumeMultiplier_Offset == 0x48, "UAnimNotify_PlaySound::VolumeMultiplier offset is not 48");
	auto constexpr UAnimNotify_PlaySound_PitchMultiplier_Offset = offsetof(UAnimNotify_PlaySound, PitchMultiplier);
	static_assert(UAnimNotify_PlaySound_PitchMultiplier_Offset == 0x4c, "UAnimNotify_PlaySound::PitchMultiplier offset is not 4c");
	auto constexpr UAnimNotify_PlaySound_boolField50_Offset = offsetof(UAnimNotify_PlaySound, boolField50);
	static_assert(UAnimNotify_PlaySound_boolField50_Offset == 0x50, "UAnimNotify_PlaySound::boolField50 offset is not 50");
	auto constexpr UAnimNotify_PlaySound_AttachName_Offset = offsetof(UAnimNotify_PlaySound, AttachName);
	static_assert(UAnimNotify_PlaySound_AttachName_Offset == 0x58, "UAnimNotify_PlaySound::AttachName offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
