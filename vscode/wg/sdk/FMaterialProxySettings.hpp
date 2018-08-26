#pragma once
#include "FIntPoint.hpp"
#include "ETextureSizingType.hpp"
#include "EMaterialProxySmaplingQuality.hpp"
#include "EUVStrech.hpp"
#include "EMaterialMergeType.hpp"
#include "EBlendMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMaterialProxySettings // Size: 0x94
{
public:
    FIntPoint TextureSize; /* Ofs: 0x0 Size: 0x8 StructProperty Engine.MaterialProxySettings.TextureSize */
    TEnumAsByte<enum ETextureSizingType> TextureSizingType; /* Ofs: 0x8 Size: 0x1 ByteProperty Engine.MaterialProxySettings.TextureSizingType */
    uint8_t UnknownData9[0x3];
    float GutterSpace; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.MaterialProxySettings.GutterSpace */
    TEnumAsByte<enum EMaterialProxySmaplingQuality> SamplingQuality; /* Ofs: 0x10 Size: 0x1 EnumProperty Engine.MaterialProxySettings.SamplingQuality */
    TEnumAsByte<enum EUVStrech> UVStrech; /* Ofs: 0x11 Size: 0x1 EnumProperty Engine.MaterialProxySettings.UVStrech */
    bool bSplitProxyMaterialBasedOnType; /* Ofs: 0x12 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bSplitProxyMaterialBasedOnType */
    bool bUseTangentSpace; /* Ofs: 0x13 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bUseTangentSpace */
    bool bNormalMap; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bNormalMap */
    bool bMetallicMap; /* Ofs: 0x15 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bMetallicMap */
    uint8_t UnknownData16[0x2];
    float MetallicConstant; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.MaterialProxySettings.MetallicConstant */
    bool bRoughnessMap; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bRoughnessMap */
    uint8_t UnknownData1D[0x3];
    float RoughnessConstant; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.MaterialProxySettings.RoughnessConstant */
    bool bSpecularMap; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bSpecularMap */
    uint8_t UnknownData25[0x3];
    float SpecularConstant; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.MaterialProxySettings.SpecularConstant */
    bool bEmissiveMap; /* Ofs: 0x2C Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bEmissiveMap */
    bool bOpacityMap; /* Ofs: 0x2D Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bOpacityMap */
    uint8_t UnknownData2E[0x2];
    float OpacityConstant; /* Ofs: 0x30 Size: 0x4 FloatProperty Engine.MaterialProxySettings.OpacityConstant */
    bool bAmbientOcclusionMap; /* Ofs: 0x34 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bAmbientOcclusionMap */
    uint8_t UnknownData35[0x3];
    float AOConstant; /* Ofs: 0x38 Size: 0x4 FloatProperty Engine.MaterialProxySettings.AOConstant */
    float AmbientOcclusionConstant; /* Ofs: 0x3C Size: 0x4 FloatProperty Engine.MaterialProxySettings.AmbientOcclusionConstant */
    bool bOpacityMaskMap; /* Ofs: 0x40 Size: 0x1 BitMask: 01 BoolProperty Engine.MaterialProxySettings.bOpacityMaskMap */
    uint8_t UnknownData41[0x3];
    float OpacityMaskConstant; /* Ofs: 0x44 Size: 0x4 FloatProperty Engine.MaterialProxySettings.OpacityMaskConstant */
    FIntPoint DiffuseTextureSize; /* Ofs: 0x48 Size: 0x8 StructProperty Engine.MaterialProxySettings.DiffuseTextureSize */
    FIntPoint NormalTextureSize; /* Ofs: 0x50 Size: 0x8 StructProperty Engine.MaterialProxySettings.NormalTextureSize */
    FIntPoint MetallicTextureSize; /* Ofs: 0x58 Size: 0x8 StructProperty Engine.MaterialProxySettings.MetallicTextureSize */
    FIntPoint RoughnessTextureSize; /* Ofs: 0x60 Size: 0x8 StructProperty Engine.MaterialProxySettings.RoughnessTextureSize */
    FIntPoint SpecularTextureSize; /* Ofs: 0x68 Size: 0x8 StructProperty Engine.MaterialProxySettings.SpecularTextureSize */
    FIntPoint EmissiveTextureSize; /* Ofs: 0x70 Size: 0x8 StructProperty Engine.MaterialProxySettings.EmissiveTextureSize */
    FIntPoint OpacityTextureSize; /* Ofs: 0x78 Size: 0x8 StructProperty Engine.MaterialProxySettings.OpacityTextureSize */
    FIntPoint AmbientOcclusionTextureSize; /* Ofs: 0x80 Size: 0x8 StructProperty Engine.MaterialProxySettings.AmbientOcclusionTextureSize */
    FIntPoint OpacityMaskTextureSize; /* Ofs: 0x88 Size: 0x8 StructProperty Engine.MaterialProxySettings.OpacityMaskTextureSize */
    TEnumAsByte<enum EMaterialMergeType> MaterialMergeType; /* Ofs: 0x90 Size: 0x1 ByteProperty Engine.MaterialProxySettings.MaterialMergeType */
    TEnumAsByte<enum EBlendMode> BlendMode; /* Ofs: 0x91 Size: 0x1 ByteProperty Engine.MaterialProxySettings.BlendMode */
    uint8_t UnknownData92[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMaterialProxySettings = sizeof(FMaterialProxySettings); // 148
    static_assert(sizeof(FMaterialProxySettings) == 0x94, "Size of FMaterialProxySettings is not correct.");
	auto constexpr FMaterialProxySettings_TextureSize_Offset = offsetof(FMaterialProxySettings, TextureSize);
	static_assert(FMaterialProxySettings_TextureSize_Offset == 0x0, "FMaterialProxySettings::TextureSize offset is not 0");
	auto constexpr FMaterialProxySettings_TextureSizingType_Offset = offsetof(FMaterialProxySettings, TextureSizingType);
	static_assert(FMaterialProxySettings_TextureSizingType_Offset == 0x8, "FMaterialProxySettings::TextureSizingType offset is not 8");
	auto constexpr FMaterialProxySettings_GutterSpace_Offset = offsetof(FMaterialProxySettings, GutterSpace);
	static_assert(FMaterialProxySettings_GutterSpace_Offset == 0xc, "FMaterialProxySettings::GutterSpace offset is not c");
	auto constexpr FMaterialProxySettings_SamplingQuality_Offset = offsetof(FMaterialProxySettings, SamplingQuality);
	static_assert(FMaterialProxySettings_SamplingQuality_Offset == 0x10, "FMaterialProxySettings::SamplingQuality offset is not 10");
	auto constexpr FMaterialProxySettings_UVStrech_Offset = offsetof(FMaterialProxySettings, UVStrech);
	static_assert(FMaterialProxySettings_UVStrech_Offset == 0x11, "FMaterialProxySettings::UVStrech offset is not 11");
	auto constexpr FMaterialProxySettings_MetallicConstant_Offset = offsetof(FMaterialProxySettings, MetallicConstant);
	static_assert(FMaterialProxySettings_MetallicConstant_Offset == 0x18, "FMaterialProxySettings::MetallicConstant offset is not 18");
	auto constexpr FMaterialProxySettings_RoughnessConstant_Offset = offsetof(FMaterialProxySettings, RoughnessConstant);
	static_assert(FMaterialProxySettings_RoughnessConstant_Offset == 0x20, "FMaterialProxySettings::RoughnessConstant offset is not 20");
	auto constexpr FMaterialProxySettings_SpecularConstant_Offset = offsetof(FMaterialProxySettings, SpecularConstant);
	static_assert(FMaterialProxySettings_SpecularConstant_Offset == 0x28, "FMaterialProxySettings::SpecularConstant offset is not 28");
	auto constexpr FMaterialProxySettings_OpacityConstant_Offset = offsetof(FMaterialProxySettings, OpacityConstant);
	static_assert(FMaterialProxySettings_OpacityConstant_Offset == 0x30, "FMaterialProxySettings::OpacityConstant offset is not 30");
	auto constexpr FMaterialProxySettings_AOConstant_Offset = offsetof(FMaterialProxySettings, AOConstant);
	static_assert(FMaterialProxySettings_AOConstant_Offset == 0x38, "FMaterialProxySettings::AOConstant offset is not 38");
	auto constexpr FMaterialProxySettings_AmbientOcclusionConstant_Offset = offsetof(FMaterialProxySettings, AmbientOcclusionConstant);
	static_assert(FMaterialProxySettings_AmbientOcclusionConstant_Offset == 0x3c, "FMaterialProxySettings::AmbientOcclusionConstant offset is not 3c");
	auto constexpr FMaterialProxySettings_OpacityMaskConstant_Offset = offsetof(FMaterialProxySettings, OpacityMaskConstant);
	static_assert(FMaterialProxySettings_OpacityMaskConstant_Offset == 0x44, "FMaterialProxySettings::OpacityMaskConstant offset is not 44");
	auto constexpr FMaterialProxySettings_DiffuseTextureSize_Offset = offsetof(FMaterialProxySettings, DiffuseTextureSize);
	static_assert(FMaterialProxySettings_DiffuseTextureSize_Offset == 0x48, "FMaterialProxySettings::DiffuseTextureSize offset is not 48");
	auto constexpr FMaterialProxySettings_NormalTextureSize_Offset = offsetof(FMaterialProxySettings, NormalTextureSize);
	static_assert(FMaterialProxySettings_NormalTextureSize_Offset == 0x50, "FMaterialProxySettings::NormalTextureSize offset is not 50");
	auto constexpr FMaterialProxySettings_MetallicTextureSize_Offset = offsetof(FMaterialProxySettings, MetallicTextureSize);
	static_assert(FMaterialProxySettings_MetallicTextureSize_Offset == 0x58, "FMaterialProxySettings::MetallicTextureSize offset is not 58");
	auto constexpr FMaterialProxySettings_RoughnessTextureSize_Offset = offsetof(FMaterialProxySettings, RoughnessTextureSize);
	static_assert(FMaterialProxySettings_RoughnessTextureSize_Offset == 0x60, "FMaterialProxySettings::RoughnessTextureSize offset is not 60");
	auto constexpr FMaterialProxySettings_SpecularTextureSize_Offset = offsetof(FMaterialProxySettings, SpecularTextureSize);
	static_assert(FMaterialProxySettings_SpecularTextureSize_Offset == 0x68, "FMaterialProxySettings::SpecularTextureSize offset is not 68");
	auto constexpr FMaterialProxySettings_EmissiveTextureSize_Offset = offsetof(FMaterialProxySettings, EmissiveTextureSize);
	static_assert(FMaterialProxySettings_EmissiveTextureSize_Offset == 0x70, "FMaterialProxySettings::EmissiveTextureSize offset is not 70");
	auto constexpr FMaterialProxySettings_OpacityTextureSize_Offset = offsetof(FMaterialProxySettings, OpacityTextureSize);
	static_assert(FMaterialProxySettings_OpacityTextureSize_Offset == 0x78, "FMaterialProxySettings::OpacityTextureSize offset is not 78");
	auto constexpr FMaterialProxySettings_AmbientOcclusionTextureSize_Offset = offsetof(FMaterialProxySettings, AmbientOcclusionTextureSize);
	static_assert(FMaterialProxySettings_AmbientOcclusionTextureSize_Offset == 0x80, "FMaterialProxySettings::AmbientOcclusionTextureSize offset is not 80");
	auto constexpr FMaterialProxySettings_OpacityMaskTextureSize_Offset = offsetof(FMaterialProxySettings, OpacityMaskTextureSize);
	static_assert(FMaterialProxySettings_OpacityMaskTextureSize_Offset == 0x88, "FMaterialProxySettings::OpacityMaskTextureSize offset is not 88");
	auto constexpr FMaterialProxySettings_MaterialMergeType_Offset = offsetof(FMaterialProxySettings, MaterialMergeType);
	static_assert(FMaterialProxySettings_MaterialMergeType_Offset == 0x90, "FMaterialProxySettings::MaterialMergeType offset is not 90");
	auto constexpr FMaterialProxySettings_BlendMode_Offset = offsetof(FMaterialProxySettings, BlendMode);
	static_assert(FMaterialProxySettings_BlendMode_Offset == 0x91, "FMaterialProxySettings::BlendMode offset is not 91");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
