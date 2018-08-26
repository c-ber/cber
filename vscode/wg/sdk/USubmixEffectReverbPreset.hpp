#pragma once
#include "USoundEffectSubmixPreset.hpp"
#include "FSubmixEffectReverbSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubmixEffectReverbPreset // Size: 0xD0
	: public USoundEffectSubmixPreset // Size: 0x48
{
private:
	typedef USubmixEffectReverbPreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(368); // id32("Class AudioMixer.SubmixEffectReverbPreset")
		return ptr;
	}
	uint8_t UnknownData48[0x58];
	FSubmixEffectReverbSettings Settings; /* Ofs: 0xA0 Size: 0x30 - StructProperty AudioMixer.SubmixEffectReverbPreset.Settings */


	inline bool SetSettings(t_structHelper inst, FSubmixEffectReverbSettings value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubmixEffectReverbPreset = sizeof(USubmixEffectReverbPreset); // 208
    static_assert(sizeof(USubmixEffectReverbPreset) == 0xD0, "Size of USubmixEffectReverbPreset is not correct.");
	auto constexpr USubmixEffectReverbPreset_Settings_Offset = offsetof(USubmixEffectReverbPreset, Settings);
	static_assert(USubmixEffectReverbPreset_Settings_Offset == 0xa0, "USubmixEffectReverbPreset::Settings offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
