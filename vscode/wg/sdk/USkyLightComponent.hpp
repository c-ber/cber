#pragma once
#include "ULightComponentBase.hpp"
#include "ESkyLightSourceType.hpp"
#include "FLinearColor.hpp"
#include "FColor.hpp"
#include "EOcclusionCombineMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkyLightComponent // Size: 0x670
	: public ULightComponentBase // Size: 0x4C0
{
private:
	typedef USkyLightComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191); // id32("Class Engine.SkyLightComponent")
		return ptr;
	}
//	TEnumAsByte<enum ESkyLightSourceType> SourceType; /* Ofs: 0x4B8 Size: 0x1 - ByteProperty Engine.SkyLightComponent.SourceType */
	ExternalPtr<struct UTextureCube> Cubemap; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty Engine.SkyLightComponent.Cubemap */
	float SourceCubemapAngle; /* Ofs: 0x4C8 Size: 0x4 - FloatProperty Engine.SkyLightComponent.SourceCubemapAngle */
	int32_t CubemapResolution; /* Ofs: 0x4CC Size: 0x4 - IntProperty Engine.SkyLightComponent.CubemapResolution */
	float SkyDistanceThreshold; /* Ofs: 0x4D0 Size: 0x4 - FloatProperty Engine.SkyLightComponent.SkyDistanceThreshold */
	uint8_t boolField4D4;
	uint8_t boolField4D5;
	uint8_t UnknownData4D6[0x2];
	FLinearColor LowerHemisphereColor; /* Ofs: 0x4D8 Size: 0x10 - StructProperty Engine.SkyLightComponent.LowerHemisphereColor */
	float OcclusionMaxDistance; /* Ofs: 0x4E8 Size: 0x4 - FloatProperty Engine.SkyLightComponent.OcclusionMaxDistance */
	float Contrast; /* Ofs: 0x4EC Size: 0x4 - FloatProperty Engine.SkyLightComponent.Contrast */
	float OcclusionExponent; /* Ofs: 0x4F0 Size: 0x4 - FloatProperty Engine.SkyLightComponent.OcclusionExponent */
	float MinOcclusion; /* Ofs: 0x4F4 Size: 0x4 - FloatProperty Engine.SkyLightComponent.MinOcclusion */
	FColor OcclusionTint; /* Ofs: 0x4F8 Size: 0x4 - StructProperty Engine.SkyLightComponent.OcclusionTint */
	TEnumAsByte<enum EOcclusionCombineMode> OcclusionCombineMode; /* Ofs: 0x4FC Size: 0x1 - ByteProperty Engine.SkyLightComponent.OcclusionCombineMode */
	uint8_t UnknownData4FD[0xAB];
	ExternalPtr<struct UTextureCube> BlendDestinationCubemap; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty Engine.SkyLightComponent.BlendDestinationCubemap */
	uint8_t UnknownData5B0[0xC0];


//	inline bool SetSourceType(t_structHelper inst, TEnumAsByte<enum ESkyLightSourceType> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetCubemap(t_structHelper inst, ExternalPtr<struct UTextureCube> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetSourceCubemapAngle(t_structHelper inst, float value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetCubemapResolution(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4CC, value); }
	inline bool SetSkyDistanceThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x4D0, value); }
	inline bool bCaptureEmissiveOnly()
	{
		return boolField4D4& 0x1;
	}
	inline bool SetbCaptureEmissiveOnly(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bLowerHemisphereIsBlack()
	{
		return boolField4D5& 0x1;
	}
	inline bool SetbLowerHemisphereIsBlack(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D5, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLowerHemisphereColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetOcclusionMaxDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetContrast(t_structHelper inst, float value) { inst.WriteOffset(0x4EC, value); }
	inline bool SetOcclusionExponent(t_structHelper inst, float value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetMinOcclusion(t_structHelper inst, float value) { inst.WriteOffset(0x4F4, value); }
	inline bool SetOcclusionTint(t_structHelper inst, FColor value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetOcclusionCombineMode(t_structHelper inst, TEnumAsByte<enum EOcclusionCombineMode> value) { inst.WriteOffset(0x4FC, value); }
	inline bool SetBlendDestinationCubemap(t_structHelper inst, ExternalPtr<struct UTextureCube> value) { inst.WriteOffset(0x5A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkyLightComponent = sizeof(USkyLightComponent); // 1648
    static_assert(sizeof(USkyLightComponent) == 0x670, "Size of USkyLightComponent is not correct.");
//	auto constexpr USkyLightComponent_SourceType_Offset = offsetof(USkyLightComponent, SourceType);
//	static_assert(USkyLightComponent_SourceType_Offset == 0x4b8, "USkyLightComponent::SourceType offset is not 4b8");
	auto constexpr USkyLightComponent_Cubemap_Offset = offsetof(USkyLightComponent, Cubemap);
	static_assert(USkyLightComponent_Cubemap_Offset == 0x4c0, "USkyLightComponent::Cubemap offset is not 4c0");
	auto constexpr USkyLightComponent_SourceCubemapAngle_Offset = offsetof(USkyLightComponent, SourceCubemapAngle);
	static_assert(USkyLightComponent_SourceCubemapAngle_Offset == 0x4c8, "USkyLightComponent::SourceCubemapAngle offset is not 4c8");
	auto constexpr USkyLightComponent_CubemapResolution_Offset = offsetof(USkyLightComponent, CubemapResolution);
	static_assert(USkyLightComponent_CubemapResolution_Offset == 0x4cc, "USkyLightComponent::CubemapResolution offset is not 4cc");
	auto constexpr USkyLightComponent_SkyDistanceThreshold_Offset = offsetof(USkyLightComponent, SkyDistanceThreshold);
	static_assert(USkyLightComponent_SkyDistanceThreshold_Offset == 0x4d0, "USkyLightComponent::SkyDistanceThreshold offset is not 4d0");
	auto constexpr USkyLightComponent_boolField4D4_Offset = offsetof(USkyLightComponent, boolField4D4);
	static_assert(USkyLightComponent_boolField4D4_Offset == 0x4d4, "USkyLightComponent::boolField4D4 offset is not 4d4");
	auto constexpr USkyLightComponent_boolField4D5_Offset = offsetof(USkyLightComponent, boolField4D5);
	static_assert(USkyLightComponent_boolField4D5_Offset == 0x4d5, "USkyLightComponent::boolField4D5 offset is not 4d5");
	auto constexpr USkyLightComponent_LowerHemisphereColor_Offset = offsetof(USkyLightComponent, LowerHemisphereColor);
	static_assert(USkyLightComponent_LowerHemisphereColor_Offset == 0x4d8, "USkyLightComponent::LowerHemisphereColor offset is not 4d8");
	auto constexpr USkyLightComponent_OcclusionMaxDistance_Offset = offsetof(USkyLightComponent, OcclusionMaxDistance);
	static_assert(USkyLightComponent_OcclusionMaxDistance_Offset == 0x4e8, "USkyLightComponent::OcclusionMaxDistance offset is not 4e8");
	auto constexpr USkyLightComponent_Contrast_Offset = offsetof(USkyLightComponent, Contrast);
	static_assert(USkyLightComponent_Contrast_Offset == 0x4ec, "USkyLightComponent::Contrast offset is not 4ec");
	auto constexpr USkyLightComponent_OcclusionExponent_Offset = offsetof(USkyLightComponent, OcclusionExponent);
	static_assert(USkyLightComponent_OcclusionExponent_Offset == 0x4f0, "USkyLightComponent::OcclusionExponent offset is not 4f0");
	auto constexpr USkyLightComponent_MinOcclusion_Offset = offsetof(USkyLightComponent, MinOcclusion);
	static_assert(USkyLightComponent_MinOcclusion_Offset == 0x4f4, "USkyLightComponent::MinOcclusion offset is not 4f4");
	auto constexpr USkyLightComponent_OcclusionTint_Offset = offsetof(USkyLightComponent, OcclusionTint);
	static_assert(USkyLightComponent_OcclusionTint_Offset == 0x4f8, "USkyLightComponent::OcclusionTint offset is not 4f8");
	auto constexpr USkyLightComponent_OcclusionCombineMode_Offset = offsetof(USkyLightComponent, OcclusionCombineMode);
	static_assert(USkyLightComponent_OcclusionCombineMode_Offset == 0x4fc, "USkyLightComponent::OcclusionCombineMode offset is not 4fc");
	auto constexpr USkyLightComponent_BlendDestinationCubemap_Offset = offsetof(USkyLightComponent, BlendDestinationCubemap);
	static_assert(USkyLightComponent_BlendDestinationCubemap_Offset == 0x5a8, "USkyLightComponent::BlendDestinationCubemap offset is not 5a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
