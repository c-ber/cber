#pragma once
#include "FAudioEQEffect.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundMix // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef USoundMix t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1210); // id32("Class Engine.SoundMix")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	float EQPriority; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.SoundMix.EQPriority */
	FAudioEQEffect EQSettings; /* Ofs: 0x38 Size: 0x38 - StructProperty Engine.SoundMix.EQSettings */
	TArray<struct FSoundClassAdjuster> SoundClassEffects; /* Ofs: 0x70 Size: 0x10 - ArrayProperty Engine.SoundMix.SoundClassEffects */
	float InitialDelay; /* Ofs: 0x80 Size: 0x4 - FloatProperty Engine.SoundMix.InitialDelay */
	float FadeInTime; /* Ofs: 0x84 Size: 0x4 - FloatProperty Engine.SoundMix.FadeInTime */
	float Duration; /* Ofs: 0x88 Size: 0x4 - FloatProperty Engine.SoundMix.Duration */
	float FadeOutTime; /* Ofs: 0x8C Size: 0x4 - FloatProperty Engine.SoundMix.FadeOutTime */


	inline bool bApplyEQ()
	{
		return boolField30& 0x1;
	}
	inline bool SetbApplyEQ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEQPriority(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetEQSettings(t_structHelper inst, FAudioEQEffect value) { inst.WriteOffset(0x38, value); }
	inline bool SetSoundClassEffects(t_structHelper inst, TArray<struct FSoundClassAdjuster> value) { inst.WriteOffset(0x70, value); }
	inline bool SetInitialDelay(t_structHelper inst, float value) { inst.WriteOffset(0x80, value); }
	inline bool SetFadeInTime(t_structHelper inst, float value) { inst.WriteOffset(0x84, value); }
	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x88, value); }
	inline bool SetFadeOutTime(t_structHelper inst, float value) { inst.WriteOffset(0x8C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundMix = sizeof(USoundMix); // 144
    static_assert(sizeof(USoundMix) == 0x90, "Size of USoundMix is not correct.");
	auto constexpr USoundMix_boolField30_Offset = offsetof(USoundMix, boolField30);
	static_assert(USoundMix_boolField30_Offset == 0x30, "USoundMix::boolField30 offset is not 30");
	auto constexpr USoundMix_EQPriority_Offset = offsetof(USoundMix, EQPriority);
	static_assert(USoundMix_EQPriority_Offset == 0x34, "USoundMix::EQPriority offset is not 34");
	auto constexpr USoundMix_EQSettings_Offset = offsetof(USoundMix, EQSettings);
	static_assert(USoundMix_EQSettings_Offset == 0x38, "USoundMix::EQSettings offset is not 38");
	auto constexpr USoundMix_SoundClassEffects_Offset = offsetof(USoundMix, SoundClassEffects);
	static_assert(USoundMix_SoundClassEffects_Offset == 0x70, "USoundMix::SoundClassEffects offset is not 70");
	auto constexpr USoundMix_InitialDelay_Offset = offsetof(USoundMix, InitialDelay);
	static_assert(USoundMix_InitialDelay_Offset == 0x80, "USoundMix::InitialDelay offset is not 80");
	auto constexpr USoundMix_FadeInTime_Offset = offsetof(USoundMix, FadeInTime);
	static_assert(USoundMix_FadeInTime_Offset == 0x84, "USoundMix::FadeInTime offset is not 84");
	auto constexpr USoundMix_Duration_Offset = offsetof(USoundMix, Duration);
	static_assert(USoundMix_Duration_Offset == 0x88, "USoundMix::Duration offset is not 88");
	auto constexpr USoundMix_FadeOutTime_Offset = offsetof(USoundMix, FadeOutTime);
	static_assert(USoundMix_FadeOutTime_Offset == 0x8c, "USoundMix::FadeOutTime offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
