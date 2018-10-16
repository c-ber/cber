#pragma once
#include "ULightComponent.hpp"
#include "FLightmassPointLightSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPointLightComponent // Size: 0x5F0
	: public ULightComponent // Size: 0x5D0
{
private:
	typedef UPointLightComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(189); // id32("Class Engine.PointLightComponent")
		return ptr;
	}
//	float Radius; /* Ofs: 0x5C8 Size: 0x4 - FloatProperty Engine.PointLightComponent.Radius */
//	float AttenuationRadius; /* Ofs: 0x5CC Size: 0x4 - FloatProperty Engine.PointLightComponent.AttenuationRadius */
	uint8_t boolField5D0;
	uint8_t UnknownData5D1[0x3];
	float LightFalloffExponent; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty Engine.PointLightComponent.LightFalloffExponent */
	float SourceRadius; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty Engine.PointLightComponent.SourceRadius */
	float SourceLength; /* Ofs: 0x5DC Size: 0x4 - FloatProperty Engine.PointLightComponent.SourceLength */
	FLightmassPointLightSettings LightmassSettings; /* Ofs: 0x5E0 Size: 0xC - StructProperty Engine.PointLightComponent.LightmassSettings */
	uint8_t UnknownData5EC[0x4];


//	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5C8, value); }
//	inline bool SetAttenuationRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5CC, value); }
	inline bool bUseInverseSquaredFalloff()
	{
		return boolField5D0& 0x1;
	}
	inline bool SetbUseInverseSquaredFalloff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLightFalloffExponent(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetSourceRadius(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetSourceLength(t_structHelper inst, float value) { inst.WriteOffset(0x5DC, value); }
	inline bool SetLightmassSettings(t_structHelper inst, FLightmassPointLightSettings value) { inst.WriteOffset(0x5E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPointLightComponent = sizeof(UPointLightComponent); // 1520
    static_assert(sizeof(UPointLightComponent) == 0x5F0, "Size of UPointLightComponent is not correct.");
//	auto constexpr UPointLightComponent_Radius_Offset = offsetof(UPointLightComponent, Radius);
//	static_assert(UPointLightComponent_Radius_Offset == 0x5c8, "UPointLightComponent::Radius offset is not 5c8");
//	auto constexpr UPointLightComponent_AttenuationRadius_Offset = offsetof(UPointLightComponent, AttenuationRadius);
//	static_assert(UPointLightComponent_AttenuationRadius_Offset == 0x5cc, "UPointLightComponent::AttenuationRadius offset is not 5cc");
	auto constexpr UPointLightComponent_boolField5D0_Offset = offsetof(UPointLightComponent, boolField5D0);
	static_assert(UPointLightComponent_boolField5D0_Offset == 0x5d0, "UPointLightComponent::boolField5D0 offset is not 5d0");
	auto constexpr UPointLightComponent_LightFalloffExponent_Offset = offsetof(UPointLightComponent, LightFalloffExponent);
	static_assert(UPointLightComponent_LightFalloffExponent_Offset == 0x5d4, "UPointLightComponent::LightFalloffExponent offset is not 5d4");
	auto constexpr UPointLightComponent_SourceRadius_Offset = offsetof(UPointLightComponent, SourceRadius);
	static_assert(UPointLightComponent_SourceRadius_Offset == 0x5d8, "UPointLightComponent::SourceRadius offset is not 5d8");
	auto constexpr UPointLightComponent_SourceLength_Offset = offsetof(UPointLightComponent, SourceLength);
	static_assert(UPointLightComponent_SourceLength_Offset == 0x5dc, "UPointLightComponent::SourceLength offset is not 5dc");
	auto constexpr UPointLightComponent_LightmassSettings_Offset = offsetof(UPointLightComponent, LightmassSettings);
	static_assert(UPointLightComponent_LightmassSettings_Offset == 0x5e0, "UPointLightComponent::LightmassSettings offset is not 5e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
