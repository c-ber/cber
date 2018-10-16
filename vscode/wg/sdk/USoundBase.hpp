#pragma once
#include "FSoundConcurrencySettings.hpp"
#include "EMaxConcurrentResolutionRule.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundBase // Size: 0xA8
	: public UObject // Size: 0x30
{
private:
	typedef USoundBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(348); // id32("Class Engine.SoundBase")
		return ptr;
	}
	ExternalPtr<struct USoundClass> SoundClassObject; /* Ofs: 0x30 Size: 0x8 - ObjectProperty Engine.SoundBase.SoundClassObject */
	uint8_t boolField38;
	uint8_t UnknownData39[0x7];
	ExternalPtr<struct USoundConcurrency> SoundConcurrencySettings; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.SoundBase.SoundConcurrencySettings */
	FSoundConcurrencySettings ConcurrencyOverrides; /* Ofs: 0x48 Size: 0x10 - StructProperty Engine.SoundBase.ConcurrencyOverrides */
	TEnumAsByte<enum EMaxConcurrentResolutionRule> MaxConcurrentResolutionRule; /* Ofs: 0x58 Size: 0x1 - ByteProperty Engine.SoundBase.MaxConcurrentResolutionRule */
	uint8_t UnknownData59[0x3];
	int32_t MaxConcurrentPlayCount; /* Ofs: 0x5C Size: 0x4 - IntProperty Engine.SoundBase.MaxConcurrentPlayCount */
	float Duration; /* Ofs: 0x60 Size: 0x4 - FloatProperty Engine.SoundBase.Duration */
	uint8_t UnknownData64[0x4];
	ExternalPtr<struct USoundAttenuation> AttenuationSettings; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.SoundBase.AttenuationSettings */
	float Priority; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.SoundBase.Priority */
	uint8_t UnknownData74[0x4];
	ExternalPtr<struct USoundSubmix> SoundSubmixObject; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.SoundBase.SoundSubmixObject */
	TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.SoundBase.SoundSubmixSends */
	float DefaultMasterReverbSendAmount; /* Ofs: 0x90 Size: 0x4 - FloatProperty Engine.SoundBase.DefaultMasterReverbSendAmount */
	uint8_t UnknownData94[0x4];
	ExternalPtr<struct USoundEffectSourcePresetChain> SourceEffectChain; /* Ofs: 0x98 Size: 0x8 - ObjectProperty Engine.SoundBase.SourceEffectChain */
	uint8_t UnknownDataA0[0x8];


	inline bool SetSoundClassObject(t_structHelper inst, ExternalPtr<struct USoundClass> value) { inst.WriteOffset(0x30, value); }
	inline bool bDebug()
	{
		return boolField38& 0x1;
	}
	inline bool SetbDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverrideConcurrency()
	{
		return boolField38& 0x2;
	}
	inline bool SetbOverrideConcurrency(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIgnoreFocus()
	{
		return boolField38& 0x4;
	}
	inline bool SetbIgnoreFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetSoundConcurrencySettings(t_structHelper inst, ExternalPtr<struct USoundConcurrency> value) { inst.WriteOffset(0x40, value); }
	inline bool SetConcurrencyOverrides(t_structHelper inst, FSoundConcurrencySettings value) { inst.WriteOffset(0x48, value); }
	inline bool SetMaxConcurrentResolutionRule(t_structHelper inst, TEnumAsByte<enum EMaxConcurrentResolutionRule> value) { inst.WriteOffset(0x58, value); }
	inline bool SetMaxConcurrentPlayCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5C, value); }
	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x60, value); }
	inline bool SetAttenuationSettings(t_structHelper inst, ExternalPtr<struct USoundAttenuation> value) { inst.WriteOffset(0x68, value); }
	inline bool SetPriority(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetSoundSubmixObject(t_structHelper inst, ExternalPtr<struct USoundSubmix> value) { inst.WriteOffset(0x78, value); }
	inline bool SetSoundSubmixSends(t_structHelper inst, TArray<struct FSoundSubmixSendInfo> value) { inst.WriteOffset(0x80, value); }
	inline bool SetDefaultMasterReverbSendAmount(t_structHelper inst, float value) { inst.WriteOffset(0x90, value); }
	inline bool SetSourceEffectChain(t_structHelper inst, ExternalPtr<struct USoundEffectSourcePresetChain> value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundBase = sizeof(USoundBase); // 168
    static_assert(sizeof(USoundBase) == 0xA8, "Size of USoundBase is not correct.");
	auto constexpr USoundBase_SoundClassObject_Offset = offsetof(USoundBase, SoundClassObject);
	static_assert(USoundBase_SoundClassObject_Offset == 0x30, "USoundBase::SoundClassObject offset is not 30");
	auto constexpr USoundBase_boolField38_Offset = offsetof(USoundBase, boolField38);
	static_assert(USoundBase_boolField38_Offset == 0x38, "USoundBase::boolField38 offset is not 38");
	auto constexpr USoundBase_SoundConcurrencySettings_Offset = offsetof(USoundBase, SoundConcurrencySettings);
	static_assert(USoundBase_SoundConcurrencySettings_Offset == 0x40, "USoundBase::SoundConcurrencySettings offset is not 40");
	auto constexpr USoundBase_ConcurrencyOverrides_Offset = offsetof(USoundBase, ConcurrencyOverrides);
	static_assert(USoundBase_ConcurrencyOverrides_Offset == 0x48, "USoundBase::ConcurrencyOverrides offset is not 48");
	auto constexpr USoundBase_MaxConcurrentResolutionRule_Offset = offsetof(USoundBase, MaxConcurrentResolutionRule);
	static_assert(USoundBase_MaxConcurrentResolutionRule_Offset == 0x58, "USoundBase::MaxConcurrentResolutionRule offset is not 58");
	auto constexpr USoundBase_MaxConcurrentPlayCount_Offset = offsetof(USoundBase, MaxConcurrentPlayCount);
	static_assert(USoundBase_MaxConcurrentPlayCount_Offset == 0x5c, "USoundBase::MaxConcurrentPlayCount offset is not 5c");
	auto constexpr USoundBase_Duration_Offset = offsetof(USoundBase, Duration);
	static_assert(USoundBase_Duration_Offset == 0x60, "USoundBase::Duration offset is not 60");
	auto constexpr USoundBase_AttenuationSettings_Offset = offsetof(USoundBase, AttenuationSettings);
	static_assert(USoundBase_AttenuationSettings_Offset == 0x68, "USoundBase::AttenuationSettings offset is not 68");
	auto constexpr USoundBase_Priority_Offset = offsetof(USoundBase, Priority);
	static_assert(USoundBase_Priority_Offset == 0x70, "USoundBase::Priority offset is not 70");
	auto constexpr USoundBase_SoundSubmixObject_Offset = offsetof(USoundBase, SoundSubmixObject);
	static_assert(USoundBase_SoundSubmixObject_Offset == 0x78, "USoundBase::SoundSubmixObject offset is not 78");
	auto constexpr USoundBase_SoundSubmixSends_Offset = offsetof(USoundBase, SoundSubmixSends);
	static_assert(USoundBase_SoundSubmixSends_Offset == 0x80, "USoundBase::SoundSubmixSends offset is not 80");
	auto constexpr USoundBase_DefaultMasterReverbSendAmount_Offset = offsetof(USoundBase, DefaultMasterReverbSendAmount);
	static_assert(USoundBase_DefaultMasterReverbSendAmount_Offset == 0x90, "USoundBase::DefaultMasterReverbSendAmount offset is not 90");
	auto constexpr USoundBase_SourceEffectChain_Offset = offsetof(USoundBase, SourceEffectChain);
	static_assert(USoundBase_SourceEffectChain_Offset == 0x98, "USoundBase::SourceEffectChain offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
