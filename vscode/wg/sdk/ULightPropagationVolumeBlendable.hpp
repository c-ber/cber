#pragma once
#include "FLightPropagationVolumeSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULightPropagationVolumeBlendable // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef ULightPropagationVolumeBlendable t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2163); // id32("Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	FLightPropagationVolumeSettings Settings; /* Ofs: 0x38 Size: 0x40 - StructProperty LightPropagationVolumeRuntime.LightPropagationVolumeBlendable.Settings */
	float BlendWeight; /* Ofs: 0x78 Size: 0x4 - FloatProperty LightPropagationVolumeRuntime.LightPropagationVolumeBlendable.BlendWeight */
	uint8_t UnknownData7C[0x4];


	inline bool SetSettings(t_structHelper inst, FLightPropagationVolumeSettings value) { inst.WriteOffset(0x38, value); }
	inline bool SetBlendWeight(t_structHelper inst, float value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULightPropagationVolumeBlendable = sizeof(ULightPropagationVolumeBlendable); // 128
    static_assert(sizeof(ULightPropagationVolumeBlendable) == 0x80, "Size of ULightPropagationVolumeBlendable is not correct.");
	auto constexpr ULightPropagationVolumeBlendable_Settings_Offset = offsetof(ULightPropagationVolumeBlendable, Settings);
	static_assert(ULightPropagationVolumeBlendable_Settings_Offset == 0x38, "ULightPropagationVolumeBlendable::Settings offset is not 38");
	auto constexpr ULightPropagationVolumeBlendable_BlendWeight_Offset = offsetof(ULightPropagationVolumeBlendable, BlendWeight);
	static_assert(ULightPropagationVolumeBlendable_BlendWeight_Offset == 0x78, "ULightPropagationVolumeBlendable::BlendWeight offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
