#pragma once
#include "FIntPoint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialSimplificationSettings // Size: 0x44
{
public:
    FIntPoint BaseColorMapSize; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.MaterialSimplificationSettings.BaseColorMapSize */
    bool bNormalMap; /* Ofs: 0x8 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialSimplificationSettings.bNormalMap */
    uint8_t UnknownData9[0x3];
    FIntPoint NormalMapSize; /* Ofs: 0xC Size: 0x8 StructProperty Engine.MaterialSimplificationSettings.NormalMapSize */
    float MetallicConstant; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.MaterialSimplificationSettings.MetallicConstant */
    bool bMetallicMap; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialSimplificationSettings.bMetallicMap */
    uint8_t UnknownData19[0x3];
    FIntPoint MetallicMapSize; /* Ofs: 0x1C Size: 0x8 StructProperty Engine.MaterialSimplificationSettings.MetallicMapSize */
    float RoughnessConstant; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.MaterialSimplificationSettings.RoughnessConstant */
    bool bRoughnessMap; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialSimplificationSettings.bRoughnessMap */
    uint8_t UnknownData29[0x3];
    FIntPoint RoughnessMapSize; /* Ofs: 0x2C Size: 0x8 StructProperty Engine.MaterialSimplificationSettings.RoughnessMapSize */
    float SpecularConstant; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.MaterialSimplificationSettings.SpecularConstant */
    bool bSpecularMap; /* Ofs: 0x38 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialSimplificationSettings.bSpecularMap */
    uint8_t UnknownData39[0x3];
    FIntPoint SpecularMapSize; /* Ofs: 0x3C Size: 0x8 StructProperty Engine.MaterialSimplificationSettings.SpecularMapSize */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialSimplificationSettings = sizeof(FMaterialSimplificationSettings); // 68
    static_assert(sizeof(FMaterialSimplificationSettings) == 0x44, "Size of FMaterialSimplificationSettings is not correct.");
	auto constexpr FMaterialSimplificationSettings_BaseColorMapSize_Offset = offsetof(FMaterialSimplificationSettings, BaseColorMapSize);
	static_assert(FMaterialSimplificationSettings_BaseColorMapSize_Offset == 0x0, "FMaterialSimplificationSettings::BaseColorMapSize offset is not 0");
	auto constexpr FMaterialSimplificationSettings_NormalMapSize_Offset = offsetof(FMaterialSimplificationSettings, NormalMapSize);
	static_assert(FMaterialSimplificationSettings_NormalMapSize_Offset == 0xc, "FMaterialSimplificationSettings::NormalMapSize offset is not c");
	auto constexpr FMaterialSimplificationSettings_MetallicConstant_Offset = offsetof(FMaterialSimplificationSettings, MetallicConstant);
	static_assert(FMaterialSimplificationSettings_MetallicConstant_Offset == 0x14, "FMaterialSimplificationSettings::MetallicConstant offset is not 14");
	auto constexpr FMaterialSimplificationSettings_MetallicMapSize_Offset = offsetof(FMaterialSimplificationSettings, MetallicMapSize);
	static_assert(FMaterialSimplificationSettings_MetallicMapSize_Offset == 0x1c, "FMaterialSimplificationSettings::MetallicMapSize offset is not 1c");
	auto constexpr FMaterialSimplificationSettings_RoughnessConstant_Offset = offsetof(FMaterialSimplificationSettings, RoughnessConstant);
	static_assert(FMaterialSimplificationSettings_RoughnessConstant_Offset == 0x24, "FMaterialSimplificationSettings::RoughnessConstant offset is not 24");
	auto constexpr FMaterialSimplificationSettings_RoughnessMapSize_Offset = offsetof(FMaterialSimplificationSettings, RoughnessMapSize);
	static_assert(FMaterialSimplificationSettings_RoughnessMapSize_Offset == 0x2c, "FMaterialSimplificationSettings::RoughnessMapSize offset is not 2c");
	auto constexpr FMaterialSimplificationSettings_SpecularConstant_Offset = offsetof(FMaterialSimplificationSettings, SpecularConstant);
	static_assert(FMaterialSimplificationSettings_SpecularConstant_Offset == 0x34, "FMaterialSimplificationSettings::SpecularConstant offset is not 34");
	auto constexpr FMaterialSimplificationSettings_SpecularMapSize_Offset = offsetof(FMaterialSimplificationSettings, SpecularMapSize);
	static_assert(FMaterialSimplificationSettings_SpecularMapSize_Offset == 0x3c, "FMaterialSimplificationSettings::SpecularMapSize offset is not 3c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
