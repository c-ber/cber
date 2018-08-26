#pragma once
#include "USoundEffectSubmixPreset.hpp"
#include "FSubmixEffectSubmixEQSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubmixEffectSubmixEQPreset // Size: 0x90
	: public USoundEffectSubmixPreset // Size: 0x48
{
private:
	typedef USubmixEffectSubmixEQPreset t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(369); // id32("Class AudioMixer.SubmixEffectSubmixEQPreset")
		return ptr;
	}
	uint8_t UnknownData48[0x38];
	FSubmixEffectSubmixEQSettings Settings; /* Ofs: 0x80 Size: 0x10 - StructProperty AudioMixer.SubmixEffectSubmixEQPreset.Settings */


	inline bool SetSettings(t_structHelper inst, FSubmixEffectSubmixEQSettings value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubmixEffectSubmixEQPreset = sizeof(USubmixEffectSubmixEQPreset); // 144
    static_assert(sizeof(USubmixEffectSubmixEQPreset) == 0x90, "Size of USubmixEffectSubmixEQPreset is not correct.");
	auto constexpr USubmixEffectSubmixEQPreset_Settings_Offset = offsetof(USubmixEffectSubmixEQPreset, Settings);
	static_assert(USubmixEffectSubmixEQPreset_Settings_Offset == 0x80, "USubmixEffectSubmixEQPreset::Settings offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
