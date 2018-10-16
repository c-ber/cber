#pragma once
#include "EAttenuationDistanceModel.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "EAttenuationShape.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBaseAttenuationSettings // Size: 0xA8
{
public:
    uint8_t UnknownData0[0x8];
    TEnumAsByte<enum EAttenuationDistanceModel> DistanceAlgorithm; /* Ofs: 0x8 Size: 0x1 EnumProperty Engine.BaseAttenuationSettings.DistanceAlgorithm */
    uint8_t UnknownData9[0x7];
    FRuntimeFloatCurve CustomAttenuationCurve; /* Ofs: 0x10 Size: 0x78 StructProperty Engine.BaseAttenuationSettings.CustomAttenuationCurve */
    TEnumAsByte<enum EAttenuationShape> AttenuationShape; /* Ofs: 0x88 Size: 0x1 ByteProperty Engine.BaseAttenuationSettings.AttenuationShape */
    uint8_t UnknownData89[0x3];
    float dBAttenuationAtMax; /* Ofs: 0x8C Size: 0x4 FloatProperty Engine.BaseAttenuationSettings.dBAttenuationAtMax */
    FVector AttenuationShapeExtents; /* Ofs: 0x90 Size: 0xC StructProperty Engine.BaseAttenuationSettings.AttenuationShapeExtents */
    float ConeOffset; /* Ofs: 0x9C Size: 0x4 FloatProperty Engine.BaseAttenuationSettings.ConeOffset */
    float FalloffDistance; /* Ofs: 0xA0 Size: 0x4 FloatProperty Engine.BaseAttenuationSettings.FalloffDistance */
    uint8_t UnknownDataA4[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBaseAttenuationSettings = sizeof(FBaseAttenuationSettings); // 168
    static_assert(sizeof(FBaseAttenuationSettings) == 0xA8, "Size of FBaseAttenuationSettings is not correct.");
	auto constexpr FBaseAttenuationSettings_DistanceAlgorithm_Offset = offsetof(FBaseAttenuationSettings, DistanceAlgorithm);
	static_assert(FBaseAttenuationSettings_DistanceAlgorithm_Offset == 0x8, "FBaseAttenuationSettings::DistanceAlgorithm offset is not 8");
	auto constexpr FBaseAttenuationSettings_CustomAttenuationCurve_Offset = offsetof(FBaseAttenuationSettings, CustomAttenuationCurve);
	static_assert(FBaseAttenuationSettings_CustomAttenuationCurve_Offset == 0x10, "FBaseAttenuationSettings::CustomAttenuationCurve offset is not 10");
	auto constexpr FBaseAttenuationSettings_AttenuationShape_Offset = offsetof(FBaseAttenuationSettings, AttenuationShape);
	static_assert(FBaseAttenuationSettings_AttenuationShape_Offset == 0x88, "FBaseAttenuationSettings::AttenuationShape offset is not 88");
	auto constexpr FBaseAttenuationSettings_dBAttenuationAtMax_Offset = offsetof(FBaseAttenuationSettings, dBAttenuationAtMax);
	static_assert(FBaseAttenuationSettings_dBAttenuationAtMax_Offset == 0x8c, "FBaseAttenuationSettings::dBAttenuationAtMax offset is not 8c");
	auto constexpr FBaseAttenuationSettings_AttenuationShapeExtents_Offset = offsetof(FBaseAttenuationSettings, AttenuationShapeExtents);
	static_assert(FBaseAttenuationSettings_AttenuationShapeExtents_Offset == 0x90, "FBaseAttenuationSettings::AttenuationShapeExtents offset is not 90");
	auto constexpr FBaseAttenuationSettings_ConeOffset_Offset = offsetof(FBaseAttenuationSettings, ConeOffset);
	static_assert(FBaseAttenuationSettings_ConeOffset_Offset == 0x9c, "FBaseAttenuationSettings::ConeOffset offset is not 9c");
	auto constexpr FBaseAttenuationSettings_FalloffDistance_Offset = offsetof(FBaseAttenuationSettings, FalloffDistance);
	static_assert(FBaseAttenuationSettings_FalloffDistance_Offset == 0xa0, "FBaseAttenuationSettings::FalloffDistance offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
