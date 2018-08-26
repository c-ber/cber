#pragma once
#include "UDeveloperSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAudioSettings // Size: 0xB8
	: public UDeveloperSettings // Size: 0x40
{
private:
	typedef UAudioSettings t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(725); // id32("Class Engine.AudioSettings")
		return ptr;
	}
	FStringAssetReference DefaultSoundClassName; /* Ofs: 0x40 Size: 0x10 - StructProperty Engine.AudioSettings.DefaultSoundClassName */
	FStringAssetReference DefaultSoundConcurrencyName; /* Ofs: 0x50 Size: 0x10 - StructProperty Engine.AudioSettings.DefaultSoundConcurrencyName */
	FStringAssetReference DefaultBaseSoundMix; /* Ofs: 0x60 Size: 0x10 - StructProperty Engine.AudioSettings.DefaultBaseSoundMix */
	FStringAssetReference VoiPSoundClass; /* Ofs: 0x70 Size: 0x10 - StructProperty Engine.AudioSettings.VoiPSoundClass */
	float LowPassFilterResonance; /* Ofs: 0x80 Size: 0x4 - FloatProperty Engine.AudioSettings.LowPassFilterResonance */
	int32_t MaximumConcurrentStreams; /* Ofs: 0x84 Size: 0x4 - IntProperty Engine.AudioSettings.MaximumConcurrentStreams */
	TArray<struct FAudioQualitySettings> QualityLevels; /* Ofs: 0x88 Size: 0x10 - ArrayProperty Engine.AudioSettings.QualityLevels */
	uint8_t boolField98;
	uint8_t UnknownData99[0x7];
	FString DialogueFilenameFormat; /* Ofs: 0xA0 Size: 0x10 - StrProperty Engine.AudioSettings.DialogueFilenameFormat */
	uint8_t UnknownDataB0[0x8];


	inline bool SetDefaultSoundClassName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x40, value); }
	inline bool SetDefaultSoundConcurrencyName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x50, value); }
	inline bool SetDefaultBaseSoundMix(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x60, value); }
	inline bool SetVoiPSoundClass(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x70, value); }
	inline bool SetLowPassFilterResonance(t_structHelper inst, float value) { inst.WriteOffset(0x80, value); }
	inline bool SetMaximumConcurrentStreams(t_structHelper inst, int32_t value) { inst.WriteOffset(0x84, value); }
	inline bool SetQualityLevels(t_structHelper inst, TArray<struct FAudioQualitySettings> value) { inst.WriteOffset(0x88, value); }
	inline bool bAllowVirtualizedSounds()
	{
		return boolField98& 0x1;
	}
	inline bool SetbAllowVirtualizedSounds(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDisableMasterEQ()
	{
		return boolField98& 0x2;
	}
	inline bool SetbDisableMasterEQ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bDisableMasterReverb()
	{
		return boolField98& 0x4;
	}
	inline bool SetbDisableMasterReverb(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAllowCenterChannel3DPanning()
	{
		return boolField98& 0x8;
	}
	inline bool SetbAllowCenterChannel3DPanning(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x98, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetDialogueFilenameFormat(t_structHelper inst, FString value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAudioSettings = sizeof(UAudioSettings); // 184
    static_assert(sizeof(UAudioSettings) == 0xB8, "Size of UAudioSettings is not correct.");
	auto constexpr UAudioSettings_DefaultSoundClassName_Offset = offsetof(UAudioSettings, DefaultSoundClassName);
	static_assert(UAudioSettings_DefaultSoundClassName_Offset == 0x40, "UAudioSettings::DefaultSoundClassName offset is not 40");
	auto constexpr UAudioSettings_DefaultSoundConcurrencyName_Offset = offsetof(UAudioSettings, DefaultSoundConcurrencyName);
	static_assert(UAudioSettings_DefaultSoundConcurrencyName_Offset == 0x50, "UAudioSettings::DefaultSoundConcurrencyName offset is not 50");
	auto constexpr UAudioSettings_DefaultBaseSoundMix_Offset = offsetof(UAudioSettings, DefaultBaseSoundMix);
	static_assert(UAudioSettings_DefaultBaseSoundMix_Offset == 0x60, "UAudioSettings::DefaultBaseSoundMix offset is not 60");
	auto constexpr UAudioSettings_VoiPSoundClass_Offset = offsetof(UAudioSettings, VoiPSoundClass);
	static_assert(UAudioSettings_VoiPSoundClass_Offset == 0x70, "UAudioSettings::VoiPSoundClass offset is not 70");
	auto constexpr UAudioSettings_LowPassFilterResonance_Offset = offsetof(UAudioSettings, LowPassFilterResonance);
	static_assert(UAudioSettings_LowPassFilterResonance_Offset == 0x80, "UAudioSettings::LowPassFilterResonance offset is not 80");
	auto constexpr UAudioSettings_MaximumConcurrentStreams_Offset = offsetof(UAudioSettings, MaximumConcurrentStreams);
	static_assert(UAudioSettings_MaximumConcurrentStreams_Offset == 0x84, "UAudioSettings::MaximumConcurrentStreams offset is not 84");
	auto constexpr UAudioSettings_QualityLevels_Offset = offsetof(UAudioSettings, QualityLevels);
	static_assert(UAudioSettings_QualityLevels_Offset == 0x88, "UAudioSettings::QualityLevels offset is not 88");
	auto constexpr UAudioSettings_boolField98_Offset = offsetof(UAudioSettings, boolField98);
	static_assert(UAudioSettings_boolField98_Offset == 0x98, "UAudioSettings::boolField98 offset is not 98");
	auto constexpr UAudioSettings_DialogueFilenameFormat_Offset = offsetof(UAudioSettings, DialogueFilenameFormat);
	static_assert(UAudioSettings_DialogueFilenameFormat_Offset == 0xa0, "UAudioSettings::DialogueFilenameFormat offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
