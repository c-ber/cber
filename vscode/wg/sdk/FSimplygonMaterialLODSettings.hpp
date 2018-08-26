#pragma once
#include "EMaterialLODType.hpp"
#include "ESimplygonTextureResolution.hpp"
#include "ESimplygonTextureSamplingQuality.hpp"
#include "ESimplygonTextureStrech.hpp"
#include "FOutputMaterialInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSimplygonMaterialLODSettings // Size: 0x80
{
public:
    bool bActive; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bActive */
    TEnumAsByte<enum EMaterialLODType> MaterialLODType; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.SimplygonMaterialLODSettings.MaterialLODType */
    bool bUseAutomaticSizes; /* Ofs: 0x2 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bUseAutomaticSizes */
    TEnumAsByte<enum ESimplygonTextureResolution> TextureWidth; /* Ofs: 0x3 Size: 0x1 ByteProperty Engine.SimplygonMaterialLODSettings.TextureWidth */
    TEnumAsByte<enum ESimplygonTextureResolution> TextureHeight; /* Ofs: 0x4 Size: 0x1 ByteProperty Engine.SimplygonMaterialLODSettings.TextureHeight */
    TEnumAsByte<enum ESimplygonTextureSamplingQuality> SamplingQuality; /* Ofs: 0x5 Size: 0x1 ByteProperty Engine.SimplygonMaterialLODSettings.SamplingQuality */
    uint8_t UnknownData6[0x2];
    int32_t GutterSpace; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.SimplygonMaterialLODSettings.GutterSpace */
    TEnumAsByte<enum ESimplygonTextureStrech> TextureStrech; /* Ofs: 0xC Size: 0x1 ByteProperty Engine.SimplygonMaterialLODSettings.TextureStrech */
    bool bReuseExistingCharts; /* Ofs: 0xD Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bReuseExistingCharts */
    uint8_t UnknownDataE[0x2];
    TArray<struct FSimplygonChannelCastingSettings> ChannelsToCast; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.SimplygonMaterialLODSettings.ChannelsToCast */
    bool bBakeVertexData; /* Ofs: 0x20 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bBakeVertexData */
    bool bBakeActorData; /* Ofs: 0x21 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bBakeActorData */
    bool bAllowMultiMaterial; /* Ofs: 0x22 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bAllowMultiMaterial */
    bool bPreferTwoSideMaterials; /* Ofs: 0x23 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bPreferTwoSideMaterials */
    bool bUseVertexWeights; /* Ofs: 0x24 Size: 0x1 BitMask: 01 BoolProperty Engine.SimplygonMaterialLODSettings.bUseVertexWeights */
    uint8_t UnknownData25[0x3];
    FOutputMaterialInfo OutputMaterialInfo; /* Ofs: 0x28 Size: 0x58 StructProperty Engine.SimplygonMaterialLODSettings.OutputMaterialInfo */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSimplygonMaterialLODSettings = sizeof(FSimplygonMaterialLODSettings); // 128
    static_assert(sizeof(FSimplygonMaterialLODSettings) == 0x80, "Size of FSimplygonMaterialLODSettings is not correct.");
	auto constexpr FSimplygonMaterialLODSettings_MaterialLODType_Offset = offsetof(FSimplygonMaterialLODSettings, MaterialLODType);
	static_assert(FSimplygonMaterialLODSettings_MaterialLODType_Offset == 0x1, "FSimplygonMaterialLODSettings::MaterialLODType offset is not 1");
	auto constexpr FSimplygonMaterialLODSettings_TextureWidth_Offset = offsetof(FSimplygonMaterialLODSettings, TextureWidth);
	static_assert(FSimplygonMaterialLODSettings_TextureWidth_Offset == 0x3, "FSimplygonMaterialLODSettings::TextureWidth offset is not 3");
	auto constexpr FSimplygonMaterialLODSettings_TextureHeight_Offset = offsetof(FSimplygonMaterialLODSettings, TextureHeight);
	static_assert(FSimplygonMaterialLODSettings_TextureHeight_Offset == 0x4, "FSimplygonMaterialLODSettings::TextureHeight offset is not 4");
	auto constexpr FSimplygonMaterialLODSettings_SamplingQuality_Offset = offsetof(FSimplygonMaterialLODSettings, SamplingQuality);
	static_assert(FSimplygonMaterialLODSettings_SamplingQuality_Offset == 0x5, "FSimplygonMaterialLODSettings::SamplingQuality offset is not 5");
	auto constexpr FSimplygonMaterialLODSettings_GutterSpace_Offset = offsetof(FSimplygonMaterialLODSettings, GutterSpace);
	static_assert(FSimplygonMaterialLODSettings_GutterSpace_Offset == 0x8, "FSimplygonMaterialLODSettings::GutterSpace offset is not 8");
	auto constexpr FSimplygonMaterialLODSettings_TextureStrech_Offset = offsetof(FSimplygonMaterialLODSettings, TextureStrech);
	static_assert(FSimplygonMaterialLODSettings_TextureStrech_Offset == 0xc, "FSimplygonMaterialLODSettings::TextureStrech offset is not c");
	auto constexpr FSimplygonMaterialLODSettings_ChannelsToCast_Offset = offsetof(FSimplygonMaterialLODSettings, ChannelsToCast);
	static_assert(FSimplygonMaterialLODSettings_ChannelsToCast_Offset == 0x10, "FSimplygonMaterialLODSettings::ChannelsToCast offset is not 10");
	auto constexpr FSimplygonMaterialLODSettings_OutputMaterialInfo_Offset = offsetof(FSimplygonMaterialLODSettings, OutputMaterialInfo);
	static_assert(FSimplygonMaterialLODSettings_OutputMaterialInfo_Offset == 0x28, "FSimplygonMaterialLODSettings::OutputMaterialInfo offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
