#pragma once
#include "UPointLightComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpotLightComponent // Size: 0x600
	: public UPointLightComponent // Size: 0x5F0
{
private:
	typedef USpotLightComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(190); // id32("Class Engine.SpotLightComponent")
		return ptr;
	}
	float InnerConeAngle; /* Ofs: 0x5F0 Size: 0x4 - FloatProperty Engine.SpotLightComponent.InnerConeAngle */
	float OuterConeAngle; /* Ofs: 0x5F4 Size: 0x4 - FloatProperty Engine.SpotLightComponent.OuterConeAngle */
	float LightShaftConeAngle; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty Engine.SpotLightComponent.LightShaftConeAngle */
	uint8_t UnknownData5FC[0x4];


	inline bool SetInnerConeAngle(t_structHelper inst, float value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetOuterConeAngle(t_structHelper inst, float value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetLightShaftConeAngle(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpotLightComponent = sizeof(USpotLightComponent); // 1536
    static_assert(sizeof(USpotLightComponent) == 0x600, "Size of USpotLightComponent is not correct.");
	auto constexpr USpotLightComponent_InnerConeAngle_Offset = offsetof(USpotLightComponent, InnerConeAngle);
	static_assert(USpotLightComponent_InnerConeAngle_Offset == 0x5f0, "USpotLightComponent::InnerConeAngle offset is not 5f0");
	auto constexpr USpotLightComponent_OuterConeAngle_Offset = offsetof(USpotLightComponent, OuterConeAngle);
	static_assert(USpotLightComponent_OuterConeAngle_Offset == 0x5f4, "USpotLightComponent::OuterConeAngle offset is not 5f4");
	auto constexpr USpotLightComponent_LightShaftConeAngle_Offset = offsetof(USpotLightComponent, LightShaftConeAngle);
	static_assert(USpotLightComponent_LightShaftConeAngle_Offset == 0x5f8, "USpotLightComponent::LightShaftConeAngle offset is not 5f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
