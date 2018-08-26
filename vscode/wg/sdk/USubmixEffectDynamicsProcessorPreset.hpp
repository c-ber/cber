#pragma once
#include "USoundEffectSubmixPreset.hpp"
#include "FSubmixEffectDynamicsProcessorSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubmixEffectDynamicsProcessorPreset // Size: 0xC0
	: public USoundEffectSubmixPreset // Size: 0x48
{
private:
	typedef USubmixEffectDynamicsProcessorPreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(366); // id32("Class AudioMixer.SubmixEffectDynamicsProcessorPreset")
		return ptr;
	}
	uint8_t UnknownData48[0x50];
	FSubmixEffectDynamicsProcessorSettings Settings; /* Ofs: 0x98 Size: 0x28 - StructProperty AudioMixer.SubmixEffectDynamicsProcessorPreset.Settings */


	inline bool SetSettings(t_structHelper inst, FSubmixEffectDynamicsProcessorSettings value) { inst.WriteOffset(0x98, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubmixEffectDynamicsProcessorPreset = sizeof(USubmixEffectDynamicsProcessorPreset); // 192
    static_assert(sizeof(USubmixEffectDynamicsProcessorPreset) == 0xC0, "Size of USubmixEffectDynamicsProcessorPreset is not correct.");
	auto constexpr USubmixEffectDynamicsProcessorPreset_Settings_Offset = offsetof(USubmixEffectDynamicsProcessorPreset, Settings);
	static_assert(USubmixEffectDynamicsProcessorPreset_Settings_Offset == 0x98, "USubmixEffectDynamicsProcessorPreset::Settings offset is not 98");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
