#pragma once
#include "USoundNode.hpp"
#include "FSoundAttenuationSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USoundNodeAttenuation // Size: 0x180
	: public USoundNode // Size: 0x40
{
private:
	typedef USoundNodeAttenuation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1213); // id32("Class Engine.SoundNodeAttenuation")
		return ptr;
	}
	ExternalPtr<struct USoundAttenuation> AttenuationSettings; /* Ofs: 0x40 Size: 0x8 - ObjectProperty Engine.SoundNodeAttenuation.AttenuationSettings */
	FSoundAttenuationSettings AttenuationOverrides; /* Ofs: 0x48 Size: 0x130 - StructProperty Engine.SoundNodeAttenuation.AttenuationOverrides */
	uint8_t boolField178;
	uint8_t UnknownData179[0x7];


	inline bool SetAttenuationSettings(t_structHelper inst, ExternalPtr<struct USoundAttenuation> value) { inst.WriteOffset(0x40, value); }
	inline bool SetAttenuationOverrides(t_structHelper inst, FSoundAttenuationSettings value) { inst.WriteOffset(0x48, value); }
	inline bool bOverrideAttenuation()
	{
		return boolField178& 0x1;
	}
	inline bool SetbOverrideAttenuation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x178, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSoundNodeAttenuation = sizeof(USoundNodeAttenuation); // 384
    static_assert(sizeof(USoundNodeAttenuation) == 0x180, "Size of USoundNodeAttenuation is not correct.");
	auto constexpr USoundNodeAttenuation_AttenuationSettings_Offset = offsetof(USoundNodeAttenuation, AttenuationSettings);
	static_assert(USoundNodeAttenuation_AttenuationSettings_Offset == 0x40, "USoundNodeAttenuation::AttenuationSettings offset is not 40");
	auto constexpr USoundNodeAttenuation_AttenuationOverrides_Offset = offsetof(USoundNodeAttenuation, AttenuationOverrides);
	static_assert(USoundNodeAttenuation_AttenuationOverrides_Offset == 0x48, "USoundNodeAttenuation::AttenuationOverrides offset is not 48");
	auto constexpr USoundNodeAttenuation_boolField178_Offset = offsetof(USoundNodeAttenuation, boolField178);
	static_assert(USoundNodeAttenuation_boolField178_Offset == 0x178, "USoundNodeAttenuation::boolField178 offset is not 178");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
