#pragma once
#include "UMaterialInterface.hpp"
#include "FColorMaterialInput.hpp"
#include "FScalarMaterialInput.hpp"
#include "FVectorMaterialInput.hpp"
#include "EMaterialDomain.hpp"
#include "EBlendMode.hpp"
#include "EDecalBlendMode.hpp"
#include "EMaterialDecalResponse.hpp"
#include "EMaterialShadingModel.hpp"
#include "FVector2MaterialInput.hpp"
#include "FMaterialAttributesInput.hpp"
#include "ETranslucencyLightingMode.hpp"
#include "FLinearColor.hpp"
#include "EMaterialTessellationMode.hpp"
#include "EBlendableLocation.hpp"
#include "ERefractionMode.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterial // Size: 0x990
	: public UMaterialInterface // Size: 0x78
{
private:
	typedef UMaterial t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1019); // id32("Class Engine.Material")
		return ptr;
	}
	ExternalPtr<struct UPhysicalMaterial> PhysMaterial; /* Ofs: 0x78 Size: 0x8 - ObjectProperty Engine.Material.PhysMaterial */
	FColorMaterialInput DiffuseColor; /* Ofs: 0x80 Size: 0x40 - StructProperty Engine.Material.DiffuseColor */
	FColorMaterialInput SpecularColor; /* Ofs: 0xC0 Size: 0x40 - StructProperty Engine.Material.SpecularColor */
	FColorMaterialInput BaseColor; /* Ofs: 0x100 Size: 0x40 - StructProperty Engine.Material.BaseColor */
	FScalarMaterialInput Metallic; /* Ofs: 0x140 Size: 0x40 - StructProperty Engine.Material.Metallic */
	FScalarMaterialInput Specular; /* Ofs: 0x180 Size: 0x40 - StructProperty Engine.Material.Specular */
	FScalarMaterialInput Roughness; /* Ofs: 0x1C0 Size: 0x40 - StructProperty Engine.Material.Roughness */
	FVectorMaterialInput Normal; /* Ofs: 0x200 Size: 0x48 - StructProperty Engine.Material.Normal */
	FColorMaterialInput EmissiveColor; /* Ofs: 0x248 Size: 0x40 - StructProperty Engine.Material.EmissiveColor */
	FScalarMaterialInput Opacity; /* Ofs: 0x288 Size: 0x40 - StructProperty Engine.Material.Opacity */
	FScalarMaterialInput OpacityMask; /* Ofs: 0x2C8 Size: 0x40 - StructProperty Engine.Material.OpacityMask */
	TEnumAsByte<enum EMaterialDomain> MaterialDomain; /* Ofs: 0x308 Size: 0x1 - ByteProperty Engine.Material.MaterialDomain */
	TEnumAsByte<enum EBlendMode> BlendMode; /* Ofs: 0x309 Size: 0x1 - ByteProperty Engine.Material.BlendMode */
	TEnumAsByte<enum EDecalBlendMode> DecalBlendMode; /* Ofs: 0x30A Size: 0x1 - ByteProperty Engine.Material.DecalBlendMode */
	TEnumAsByte<enum EMaterialDecalResponse> MaterialDecalResponse; /* Ofs: 0x30B Size: 0x1 - ByteProperty Engine.Material.MaterialDecalResponse */
	TEnumAsByte<enum EMaterialShadingModel> ShadingModel; /* Ofs: 0x30C Size: 0x1 - ByteProperty Engine.Material.ShadingModel */
	uint8_t UnknownData30D[0x3];
	float OpacityMaskClipValue; /* Ofs: 0x310 Size: 0x4 - FloatProperty Engine.Material.OpacityMaskClipValue */
	uint8_t UnknownData314[0x4];
	FVectorMaterialInput WorldPositionOffset; /* Ofs: 0x318 Size: 0x48 - StructProperty Engine.Material.WorldPositionOffset */
	FVectorMaterialInput WorldDisplacement; /* Ofs: 0x360 Size: 0x48 - StructProperty Engine.Material.WorldDisplacement */
	FScalarMaterialInput TessellationMultiplier; /* Ofs: 0x3A8 Size: 0x40 - StructProperty Engine.Material.TessellationMultiplier */
	FColorMaterialInput SubsurfaceColor; /* Ofs: 0x3E8 Size: 0x40 - StructProperty Engine.Material.SubsurfaceColor */
	FScalarMaterialInput ClearCoat; /* Ofs: 0x428 Size: 0x40 - StructProperty Engine.Material.ClearCoat */
	FScalarMaterialInput ClearCoatRoughness; /* Ofs: 0x468 Size: 0x40 - StructProperty Engine.Material.ClearCoatRoughness */
	FScalarMaterialInput AmbientOcclusion; /* Ofs: 0x4A8 Size: 0x40 - StructProperty Engine.Material.AmbientOcclusion */
	FScalarMaterialInput Refraction; /* Ofs: 0x4E8 Size: 0x40 - StructProperty Engine.Material.Refraction */
	FVector2MaterialInput CustomizedUVs[8]; /* Ofs: 0x8 Size: 0x48 - StructProperty Engine.Material.CustomizedUVs */
	FMaterialAttributesInput MaterialAttributes; /* Ofs: 0x768 Size: 0x40 - StructProperty Engine.Material.MaterialAttributes */
	FScalarMaterialInput PixelDepthOffset; /* Ofs: 0x7A8 Size: 0x40 - StructProperty Engine.Material.PixelDepthOffset */
	uint8_t boolField7E8;
	uint8_t boolField7E9;
	uint8_t UnknownData7EA[0x2];
	int32_t NumCustomizedUVs; /* Ofs: 0x7EC Size: 0x4 - IntProperty Engine.Material.NumCustomizedUVs */
	TEnumAsByte<enum ETranslucencyLightingMode> TranslucencyLightingMode; /* Ofs: 0x7F0 Size: 0x1 - ByteProperty Engine.Material.TranslucencyLightingMode */
	uint8_t UnknownData7F1[0x3];
	float TranslucencyDirectionalLightingIntensity; /* Ofs: 0x7F4 Size: 0x4 - FloatProperty Engine.Material.TranslucencyDirectionalLightingIntensity */
	uint8_t boolField7F8;
	uint8_t UnknownData7F9[0x3];
	float TranslucentShadowDensityScale; /* Ofs: 0x7FC Size: 0x4 - FloatProperty Engine.Material.TranslucentShadowDensityScale */
	float TranslucentSelfShadowDensityScale; /* Ofs: 0x800 Size: 0x4 - FloatProperty Engine.Material.TranslucentSelfShadowDensityScale */
	float TranslucentSelfShadowSecondDensityScale; /* Ofs: 0x804 Size: 0x4 - FloatProperty Engine.Material.TranslucentSelfShadowSecondDensityScale */
	float TranslucentSelfShadowSecondOpacity; /* Ofs: 0x808 Size: 0x4 - FloatProperty Engine.Material.TranslucentSelfShadowSecondOpacity */
	float TranslucentBackscatteringExponent; /* Ofs: 0x80C Size: 0x4 - FloatProperty Engine.Material.TranslucentBackscatteringExponent */
	FLinearColor TranslucentMultipleScatteringExtinction; /* Ofs: 0x810 Size: 0x10 - StructProperty Engine.Material.TranslucentMultipleScatteringExtinction */
	float TranslucentShadowStartOffset; /* Ofs: 0x820 Size: 0x4 - FloatProperty Engine.Material.TranslucentShadowStartOffset */
	uint8_t boolField824;
	uint8_t boolField825;
	uint8_t boolField826;
	uint8_t boolField827;
	TEnumAsByte<enum EMaterialTessellationMode> D3D11TessellationMode; /* Ofs: 0x828 Size: 0x1 - ByteProperty Engine.Material.D3D11TessellationMode */
	uint8_t UnknownData829[0x3];
	uint8_t boolField82C;
	uint8_t UnknownData82D[0x3];
	float MaxDisplacement; /* Ofs: 0x830 Size: 0x4 - FloatProperty Engine.Material.MaxDisplacement */
	uint8_t boolField834;
	uint8_t UnknownData835[0x3];
	int32_t EditorX; /* Ofs: 0x838 Size: 0x4 - IntProperty Engine.Material.EditorX */
	int32_t EditorY; /* Ofs: 0x83C Size: 0x4 - IntProperty Engine.Material.EditorY */
	int32_t EditorPitch; /* Ofs: 0x840 Size: 0x4 - IntProperty Engine.Material.EditorPitch */
	int32_t EditorYaw; /* Ofs: 0x844 Size: 0x4 - IntProperty Engine.Material.EditorYaw */
	TArray<ExternalPtr<struct UMaterialExpression>> Expressions; /* Ofs: 0x848 Size: 0x10 - ArrayProperty Engine.Material.Expressions */
	TArray<struct FMaterialFunctionInfo> MaterialFunctionInfos; /* Ofs: 0x858 Size: 0x10 - ArrayProperty Engine.Material.MaterialFunctionInfos */
	TArray<struct FMaterialParameterCollectionInfo> MaterialParameterCollectionInfos; /* Ofs: 0x868 Size: 0x10 - ArrayProperty Engine.Material.MaterialParameterCollectionInfos */
	uint8_t boolField878;
	uint8_t UnknownData879[0x3];
	uint32_t UsageFlagWarnings; /* Ofs: 0x87C Size: 0x4 - UInt32Property Engine.Material.UsageFlagWarnings */
	TEnumAsByte<enum EBlendableLocation> BlendableLocation; /* Ofs: 0x880 Size: 0x1 - ByteProperty Engine.Material.BlendableLocation */
	uint8_t UnknownData881[0x3];
	int32_t BlendablePriority; /* Ofs: 0x884 Size: 0x4 - IntProperty Engine.Material.BlendablePriority */
	uint8_t boolField888;
	TEnumAsByte<enum ERefractionMode> RefractionMode; /* Ofs: 0x889 Size: 0x1 - ByteProperty Engine.Material.RefractionMode */
	uint8_t UnknownData88A[0x2];
	float RefractionDepthBias; /* Ofs: 0x88C Size: 0x4 - FloatProperty Engine.Material.RefractionDepthBias */
	FGuid StateId; /* Ofs: 0x890 Size: 0x10 - StructProperty Engine.Material.StateId */
	uint8_t UnknownData8A0[0xE0];
	TArray<ExternalPtr<struct UTexture>> ExpressionTextureReferences; /* Ofs: 0x980 Size: 0x10 - ArrayProperty Engine.Material.ExpressionTextureReferences */


	inline bool SetPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0x78, value); }
	inline bool SetDiffuseColor(t_structHelper inst, FColorMaterialInput value) { inst.WriteOffset(0x80, value); }
	inline bool SetSpecularColor(t_structHelper inst, FColorMaterialInput value) { inst.WriteOffset(0xC0, value); }
	inline bool SetBaseColor(t_structHelper inst, FColorMaterialInput value) { inst.WriteOffset(0x100, value); }
	inline bool SetMetallic(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x140, value); }
	inline bool SetSpecular(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x180, value); }
	inline bool SetRoughness(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetNormal(t_structHelper inst, FVectorMaterialInput value) { inst.WriteOffset(0x200, value); }
	inline bool SetEmissiveColor(t_structHelper inst, FColorMaterialInput value) { inst.WriteOffset(0x248, value); }
	inline bool SetOpacity(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x288, value); }
	inline bool SetOpacityMask(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetMaterialDomain(t_structHelper inst, TEnumAsByte<enum EMaterialDomain> value) { inst.WriteOffset(0x308, value); }
	inline bool SetBlendMode(t_structHelper inst, TEnumAsByte<enum EBlendMode> value) { inst.WriteOffset(0x309, value); }
	inline bool SetDecalBlendMode(t_structHelper inst, TEnumAsByte<enum EDecalBlendMode> value) { inst.WriteOffset(0x30A, value); }
	inline bool SetMaterialDecalResponse(t_structHelper inst, TEnumAsByte<enum EMaterialDecalResponse> value) { inst.WriteOffset(0x30B, value); }
	inline bool SetShadingModel(t_structHelper inst, TEnumAsByte<enum EMaterialShadingModel> value) { inst.WriteOffset(0x30C, value); }
	inline bool SetOpacityMaskClipValue(t_structHelper inst, float value) { inst.WriteOffset(0x310, value); }
	inline bool SetWorldPositionOffset(t_structHelper inst, FVectorMaterialInput value) { inst.WriteOffset(0x318, value); }
	inline bool SetWorldDisplacement(t_structHelper inst, FVectorMaterialInput value) { inst.WriteOffset(0x360, value); }
	inline bool SetTessellationMultiplier(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetSubsurfaceColor(t_structHelper inst, FColorMaterialInput value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetClearCoat(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x428, value); }
	inline bool SetClearCoatRoughness(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x468, value); }
	inline bool SetAmbientOcclusion(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetRefraction(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetMaterialAttributes(t_structHelper inst, FMaterialAttributesInput value) { inst.WriteOffset(0x768, value); }
	inline bool SetPixelDepthOffset(t_structHelper inst, FScalarMaterialInput value) { inst.WriteOffset(0x7A8, value); }
	inline bool bPrepassMasked()
	{
		return boolField7E8& 0x1;
	}
	inline bool SetbPrepassMasked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableSeparateTranslucency()
	{
		return boolField7E8& 0x2;
	}
	inline bool SetbEnableSeparateTranslucency(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bEnableMobileSeparateTranslucency()
	{
		return boolField7E8& 0x4;
	}
	inline bool SetbEnableMobileSeparateTranslucency(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnableResponsiveAA()
	{
		return boolField7E8& 0x8;
	}
	inline bool SetbEnableResponsiveAA(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bScreenSpaceReflections()
	{
		return boolField7E8& 0x10;
	}
	inline bool SetbScreenSpaceReflections(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool TwoSided()
	{
		return boolField7E8& 0x20;
	}
	inline bool SetTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool DitheredLODTransition()
	{
		return boolField7E8& 0x40;
	}
	inline bool SetDitheredLODTransition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool DitherOpacityMask()
	{
		return boolField7E8& 0x80;
	}
	inline bool SetDitherOpacityMask(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E8, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bAllowNegativeEmissiveColor()
	{
		return boolField7E9& 0x1;
	}
	inline bool SetbAllowNegativeEmissiveColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7E9, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNumCustomizedUVs(t_structHelper inst, int32_t value) { inst.WriteOffset(0x7EC, value); }
	inline bool SetTranslucencyLightingMode(t_structHelper inst, TEnumAsByte<enum ETranslucencyLightingMode> value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetTranslucencyDirectionalLightingIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x7F4, value); }
	inline bool AllowTranslucentCustomDepthWrites()
	{
		return boolField7F8& 0x1;
	}
	inline bool SetAllowTranslucentCustomDepthWrites(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x7F8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTranslucentShadowDensityScale(t_structHelper inst, float value) { inst.WriteOffset(0x7FC, value); }
	inline bool SetTranslucentSelfShadowDensityScale(t_structHelper inst, float value) { inst.WriteOffset(0x800, value); }
	inline bool SetTranslucentSelfShadowSecondDensityScale(t_structHelper inst, float value) { inst.WriteOffset(0x804, value); }
	inline bool SetTranslucentSelfShadowSecondOpacity(t_structHelper inst, float value) { inst.WriteOffset(0x808, value); }
	inline bool SetTranslucentBackscatteringExponent(t_structHelper inst, float value) { inst.WriteOffset(0x80C, value); }
	inline bool SetTranslucentMultipleScatteringExtinction(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x810, value); }
	inline bool SetTranslucentShadowStartOffset(t_structHelper inst, float value) { inst.WriteOffset(0x820, value); }
	inline bool bDisableDepthTest()
	{
		return boolField824& 0x1;
	}
	inline bool SetbDisableDepthTest(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bGenerateSphericalParticleNormals()
	{
		return boolField824& 0x2;
	}
	inline bool SetbGenerateSphericalParticleNormals(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bTangentSpaceNormal()
	{
		return boolField824& 0x4;
	}
	inline bool SetbTangentSpaceNormal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseEmissiveForDynamicAreaLighting()
	{
		return boolField824& 0x8;
	}
	inline bool SetbUseEmissiveForDynamicAreaLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bBlockGI()
	{
		return boolField824& 0x10;
	}
	inline bool SetbBlockGI(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bUsedAsSpecialEngineMaterial()
	{
		return boolField824& 0x20;
	}
	inline bool SetbUsedAsSpecialEngineMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bUsedWithSkeletalMesh()
	{
		return boolField824& 0x40;
	}
	inline bool SetbUsedWithSkeletalMesh(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bUsedWithEditorCompositing()
	{
		return boolField824& 0x80;
	}
	inline bool SetbUsedWithEditorCompositing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x824, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUsedWithParticleSprites()
	{
		return boolField825& 0x1;
	}
	inline bool SetbUsedWithParticleSprites(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsedWithBeamTrails()
	{
		return boolField825& 0x2;
	}
	inline bool SetbUsedWithBeamTrails(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUsedWithMeshParticles()
	{
		return boolField825& 0x4;
	}
	inline bool SetbUsedWithMeshParticles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUsedWithNiagaraSprites()
	{
		return boolField825& 0x8;
	}
	inline bool SetbUsedWithNiagaraSprites(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUsedWithNiagaraRibbons()
	{
		return boolField825& 0x10;
	}
	inline bool SetbUsedWithNiagaraRibbons(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bUsedWithNiagaraMeshParticles()
	{
		return boolField825& 0x20;
	}
	inline bool SetbUsedWithNiagaraMeshParticles(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bUsedWithStaticLighting()
	{
		return boolField825& 0x40;
	}
	inline bool SetbUsedWithStaticLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bUsedWithMorphTargets()
	{
		return boolField825& 0x80;
	}
	inline bool SetbUsedWithMorphTargets(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x825, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUsedWithSplineMeshes()
	{
		return boolField826& 0x1;
	}
	inline bool SetbUsedWithSplineMeshes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUsedWithInstancedStaticMeshes()
	{
		return boolField826& 0x2;
	}
	inline bool SetbUsedWithInstancedStaticMeshes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUsesDistortion()
	{
		return boolField826& 0x4;
	}
	inline bool SetbUsesDistortion(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUsedWithClothing()
	{
		return boolField826& 0x8;
	}
	inline bool SetbUsedWithClothing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUsedWithUI()
	{
		return boolField826& 0x10;
	}
	inline bool SetbUsedWithUI(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bAutomaticallySetUsageInEditor()
	{
		return boolField826& 0x20;
	}
	inline bool SetbAutomaticallySetUsageInEditor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bFullyRough()
	{
		return boolField826& 0x40;
	}
	inline bool SetbFullyRough(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bUseFullPrecision()
	{
		return boolField826& 0x80;
	}
	inline bool SetbUseFullPrecision(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x826, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bUseLightmapDirectionality()
	{
		return boolField827& 0x1;
	}
	inline bool SetbUseLightmapDirectionality(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x827, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseHQForwardReflections()
	{
		return boolField827& 0x2;
	}
	inline bool SetbUseHQForwardReflections(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x827, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bUsePlanarForwardReflections()
	{
		return boolField827& 0x4;
	}
	inline bool SetbUsePlanarForwardReflections(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x827, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bNormalCurvatureToRoughness()
	{
		return boolField827& 0x8;
	}
	inline bool SetbNormalCurvatureToRoughness(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x827, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetD3D11TessellationMode(t_structHelper inst, TEnumAsByte<enum EMaterialTessellationMode> value) { inst.WriteOffset(0x828, value); }
	inline bool bEnableCrackFreeDisplacement()
	{
		return boolField82C& 0x1;
	}
	inline bool SetbEnableCrackFreeDisplacement(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x82C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableAdaptiveTessellation()
	{
		return boolField82C& 0x2;
	}
	inline bool SetbEnableAdaptiveTessellation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x82C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetMaxDisplacement(t_structHelper inst, float value) { inst.WriteOffset(0x830, value); }
	inline bool Wireframe()
	{
		return boolField834& 0x1;
	}
	inline bool SetWireframe(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x834, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOutputVelocityOnBasePass()
	{
		return boolField834& 0x2;
	}
	inline bool SetbOutputVelocityOnBasePass(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x834, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetEditorX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x838, value); }
	inline bool SetEditorY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x83C, value); }
	inline bool SetEditorPitch(t_structHelper inst, int32_t value) { inst.WriteOffset(0x840, value); }
	inline bool SetEditorYaw(t_structHelper inst, int32_t value) { inst.WriteOffset(0x844, value); }
	inline bool SetExpressions(t_structHelper inst, TArray<ExternalPtr<struct UMaterialExpression>> value) { inst.WriteOffset(0x848, value); }
	inline bool SetMaterialFunctionInfos(t_structHelper inst, TArray<struct FMaterialFunctionInfo> value) { inst.WriteOffset(0x858, value); }
	inline bool SetMaterialParameterCollectionInfos(t_structHelper inst, TArray<struct FMaterialParameterCollectionInfo> value) { inst.WriteOffset(0x868, value); }
	inline bool bCanMaskedBeAssumedOpaque()
	{
		return boolField878& 0x1;
	}
	inline bool SetbCanMaskedBeAssumedOpaque(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMasked()
	{
		return boolField878& 0x2;
	}
	inline bool SetbIsMasked(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bIsPreviewMaterial()
	{
		return boolField878& 0x4;
	}
	inline bool SetbIsPreviewMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bUseMaterialAttributes()
	{
		return boolField878& 0x8;
	}
	inline bool SetbUseMaterialAttributes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bUseTranslucencyVertexFog()
	{
		return boolField878& 0x10;
	}
	inline bool SetbUseTranslucencyVertexFog(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bComputeFogPerPixel()
	{
		return boolField878& 0x20;
	}
	inline bool SetbComputeFogPerPixel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bAllowDevelopmentShaderCompile()
	{
		return boolField878& 0x40;
	}
	inline bool SetbAllowDevelopmentShaderCompile(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bIsMaterialEditorStatsMaterial()
	{
		return boolField878& 0x80;
	}
	inline bool SetbIsMaterialEditorStatsMaterial(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x878, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool SetUsageFlagWarnings(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x87C, value); }
	inline bool SetBlendableLocation(t_structHelper inst, TEnumAsByte<enum EBlendableLocation> value) { inst.WriteOffset(0x880, value); }
	inline bool SetBlendablePriority(t_structHelper inst, int32_t value) { inst.WriteOffset(0x884, value); }
	inline bool BlendableOutputAlpha()
	{
		return boolField888& 0x1;
	}
	inline bool SetBlendableOutputAlpha(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x888, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRefractionMode(t_structHelper inst, TEnumAsByte<enum ERefractionMode> value) { inst.WriteOffset(0x889, value); }
	inline bool SetRefractionDepthBias(t_structHelper inst, float value) { inst.WriteOffset(0x88C, value); }
	inline bool SetStateId(t_structHelper inst, FGuid value) { inst.WriteOffset(0x890, value); }
	inline bool SetExpressionTextureReferences(t_structHelper inst, TArray<ExternalPtr<struct UTexture>> value) { inst.WriteOffset(0x980, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterial = sizeof(UMaterial); // 2448
    static_assert(sizeof(UMaterial) == 0x990, "Size of UMaterial is not correct.");
	auto constexpr UMaterial_PhysMaterial_Offset = offsetof(UMaterial, PhysMaterial);
	static_assert(UMaterial_PhysMaterial_Offset == 0x78, "UMaterial::PhysMaterial offset is not 78");
	auto constexpr UMaterial_DiffuseColor_Offset = offsetof(UMaterial, DiffuseColor);
	static_assert(UMaterial_DiffuseColor_Offset == 0x80, "UMaterial::DiffuseColor offset is not 80");
	auto constexpr UMaterial_SpecularColor_Offset = offsetof(UMaterial, SpecularColor);
	static_assert(UMaterial_SpecularColor_Offset == 0xc0, "UMaterial::SpecularColor offset is not c0");
	auto constexpr UMaterial_BaseColor_Offset = offsetof(UMaterial, BaseColor);
	static_assert(UMaterial_BaseColor_Offset == 0x100, "UMaterial::BaseColor offset is not 100");
	auto constexpr UMaterial_Metallic_Offset = offsetof(UMaterial, Metallic);
	static_assert(UMaterial_Metallic_Offset == 0x140, "UMaterial::Metallic offset is not 140");
	auto constexpr UMaterial_Specular_Offset = offsetof(UMaterial, Specular);
	static_assert(UMaterial_Specular_Offset == 0x180, "UMaterial::Specular offset is not 180");
	auto constexpr UMaterial_Roughness_Offset = offsetof(UMaterial, Roughness);
	static_assert(UMaterial_Roughness_Offset == 0x1c0, "UMaterial::Roughness offset is not 1c0");
	auto constexpr UMaterial_Normal_Offset = offsetof(UMaterial, Normal);
	static_assert(UMaterial_Normal_Offset == 0x200, "UMaterial::Normal offset is not 200");
	auto constexpr UMaterial_EmissiveColor_Offset = offsetof(UMaterial, EmissiveColor);
	static_assert(UMaterial_EmissiveColor_Offset == 0x248, "UMaterial::EmissiveColor offset is not 248");
	auto constexpr UMaterial_Opacity_Offset = offsetof(UMaterial, Opacity);
	static_assert(UMaterial_Opacity_Offset == 0x288, "UMaterial::Opacity offset is not 288");
	auto constexpr UMaterial_OpacityMask_Offset = offsetof(UMaterial, OpacityMask);
	static_assert(UMaterial_OpacityMask_Offset == 0x2c8, "UMaterial::OpacityMask offset is not 2c8");
	auto constexpr UMaterial_MaterialDomain_Offset = offsetof(UMaterial, MaterialDomain);
	static_assert(UMaterial_MaterialDomain_Offset == 0x308, "UMaterial::MaterialDomain offset is not 308");
	auto constexpr UMaterial_BlendMode_Offset = offsetof(UMaterial, BlendMode);
	static_assert(UMaterial_BlendMode_Offset == 0x309, "UMaterial::BlendMode offset is not 309");
	auto constexpr UMaterial_DecalBlendMode_Offset = offsetof(UMaterial, DecalBlendMode);
	static_assert(UMaterial_DecalBlendMode_Offset == 0x30a, "UMaterial::DecalBlendMode offset is not 30a");
	auto constexpr UMaterial_MaterialDecalResponse_Offset = offsetof(UMaterial, MaterialDecalResponse);
	static_assert(UMaterial_MaterialDecalResponse_Offset == 0x30b, "UMaterial::MaterialDecalResponse offset is not 30b");
	auto constexpr UMaterial_ShadingModel_Offset = offsetof(UMaterial, ShadingModel);
	static_assert(UMaterial_ShadingModel_Offset == 0x30c, "UMaterial::ShadingModel offset is not 30c");
	auto constexpr UMaterial_OpacityMaskClipValue_Offset = offsetof(UMaterial, OpacityMaskClipValue);
	static_assert(UMaterial_OpacityMaskClipValue_Offset == 0x310, "UMaterial::OpacityMaskClipValue offset is not 310");
	auto constexpr UMaterial_WorldPositionOffset_Offset = offsetof(UMaterial, WorldPositionOffset);
	static_assert(UMaterial_WorldPositionOffset_Offset == 0x318, "UMaterial::WorldPositionOffset offset is not 318");
	auto constexpr UMaterial_WorldDisplacement_Offset = offsetof(UMaterial, WorldDisplacement);
	static_assert(UMaterial_WorldDisplacement_Offset == 0x360, "UMaterial::WorldDisplacement offset is not 360");
	auto constexpr UMaterial_TessellationMultiplier_Offset = offsetof(UMaterial, TessellationMultiplier);
	static_assert(UMaterial_TessellationMultiplier_Offset == 0x3a8, "UMaterial::TessellationMultiplier offset is not 3a8");
	auto constexpr UMaterial_SubsurfaceColor_Offset = offsetof(UMaterial, SubsurfaceColor);
	static_assert(UMaterial_SubsurfaceColor_Offset == 0x3e8, "UMaterial::SubsurfaceColor offset is not 3e8");
	auto constexpr UMaterial_ClearCoat_Offset = offsetof(UMaterial, ClearCoat);
	static_assert(UMaterial_ClearCoat_Offset == 0x428, "UMaterial::ClearCoat offset is not 428");
	auto constexpr UMaterial_ClearCoatRoughness_Offset = offsetof(UMaterial, ClearCoatRoughness);
	static_assert(UMaterial_ClearCoatRoughness_Offset == 0x468, "UMaterial::ClearCoatRoughness offset is not 468");
	auto constexpr UMaterial_AmbientOcclusion_Offset = offsetof(UMaterial, AmbientOcclusion);
	static_assert(UMaterial_AmbientOcclusion_Offset == 0x4a8, "UMaterial::AmbientOcclusion offset is not 4a8");
	auto constexpr UMaterial_Refraction_Offset = offsetof(UMaterial, Refraction);
	static_assert(UMaterial_Refraction_Offset == 0x4e8, "UMaterial::Refraction offset is not 4e8");
	auto constexpr UMaterial_CustomizedUVs_Offset = offsetof(UMaterial, CustomizedUVs);
	static_assert(UMaterial_CustomizedUVs_Offset == 0x528, "UMaterial::CustomizedUVs offset is not 528");
	auto constexpr UMaterial_MaterialAttributes_Offset = offsetof(UMaterial, MaterialAttributes);
	static_assert(UMaterial_MaterialAttributes_Offset == 0x768, "UMaterial::MaterialAttributes offset is not 768");
	auto constexpr UMaterial_PixelDepthOffset_Offset = offsetof(UMaterial, PixelDepthOffset);
	static_assert(UMaterial_PixelDepthOffset_Offset == 0x7a8, "UMaterial::PixelDepthOffset offset is not 7a8");
	auto constexpr UMaterial_boolField7E8_Offset = offsetof(UMaterial, boolField7E8);
	static_assert(UMaterial_boolField7E8_Offset == 0x7e8, "UMaterial::boolField7E8 offset is not 7e8");
	auto constexpr UMaterial_boolField7E9_Offset = offsetof(UMaterial, boolField7E9);
	static_assert(UMaterial_boolField7E9_Offset == 0x7e9, "UMaterial::boolField7E9 offset is not 7e9");
	auto constexpr UMaterial_NumCustomizedUVs_Offset = offsetof(UMaterial, NumCustomizedUVs);
	static_assert(UMaterial_NumCustomizedUVs_Offset == 0x7ec, "UMaterial::NumCustomizedUVs offset is not 7ec");
	auto constexpr UMaterial_TranslucencyLightingMode_Offset = offsetof(UMaterial, TranslucencyLightingMode);
	static_assert(UMaterial_TranslucencyLightingMode_Offset == 0x7f0, "UMaterial::TranslucencyLightingMode offset is not 7f0");
	auto constexpr UMaterial_TranslucencyDirectionalLightingIntensity_Offset = offsetof(UMaterial, TranslucencyDirectionalLightingIntensity);
	static_assert(UMaterial_TranslucencyDirectionalLightingIntensity_Offset == 0x7f4, "UMaterial::TranslucencyDirectionalLightingIntensity offset is not 7f4");
	auto constexpr UMaterial_boolField7F8_Offset = offsetof(UMaterial, boolField7F8);
	static_assert(UMaterial_boolField7F8_Offset == 0x7f8, "UMaterial::boolField7F8 offset is not 7f8");
	auto constexpr UMaterial_TranslucentShadowDensityScale_Offset = offsetof(UMaterial, TranslucentShadowDensityScale);
	static_assert(UMaterial_TranslucentShadowDensityScale_Offset == 0x7fc, "UMaterial::TranslucentShadowDensityScale offset is not 7fc");
	auto constexpr UMaterial_TranslucentSelfShadowDensityScale_Offset = offsetof(UMaterial, TranslucentSelfShadowDensityScale);
	static_assert(UMaterial_TranslucentSelfShadowDensityScale_Offset == 0x800, "UMaterial::TranslucentSelfShadowDensityScale offset is not 800");
	auto constexpr UMaterial_TranslucentSelfShadowSecondDensityScale_Offset = offsetof(UMaterial, TranslucentSelfShadowSecondDensityScale);
	static_assert(UMaterial_TranslucentSelfShadowSecondDensityScale_Offset == 0x804, "UMaterial::TranslucentSelfShadowSecondDensityScale offset is not 804");
	auto constexpr UMaterial_TranslucentSelfShadowSecondOpacity_Offset = offsetof(UMaterial, TranslucentSelfShadowSecondOpacity);
	static_assert(UMaterial_TranslucentSelfShadowSecondOpacity_Offset == 0x808, "UMaterial::TranslucentSelfShadowSecondOpacity offset is not 808");
	auto constexpr UMaterial_TranslucentBackscatteringExponent_Offset = offsetof(UMaterial, TranslucentBackscatteringExponent);
	static_assert(UMaterial_TranslucentBackscatteringExponent_Offset == 0x80c, "UMaterial::TranslucentBackscatteringExponent offset is not 80c");
	auto constexpr UMaterial_TranslucentMultipleScatteringExtinction_Offset = offsetof(UMaterial, TranslucentMultipleScatteringExtinction);
	static_assert(UMaterial_TranslucentMultipleScatteringExtinction_Offset == 0x810, "UMaterial::TranslucentMultipleScatteringExtinction offset is not 810");
	auto constexpr UMaterial_TranslucentShadowStartOffset_Offset = offsetof(UMaterial, TranslucentShadowStartOffset);
	static_assert(UMaterial_TranslucentShadowStartOffset_Offset == 0x820, "UMaterial::TranslucentShadowStartOffset offset is not 820");
	auto constexpr UMaterial_boolField824_Offset = offsetof(UMaterial, boolField824);
	static_assert(UMaterial_boolField824_Offset == 0x824, "UMaterial::boolField824 offset is not 824");
	auto constexpr UMaterial_boolField825_Offset = offsetof(UMaterial, boolField825);
	static_assert(UMaterial_boolField825_Offset == 0x825, "UMaterial::boolField825 offset is not 825");
	auto constexpr UMaterial_boolField826_Offset = offsetof(UMaterial, boolField826);
	static_assert(UMaterial_boolField826_Offset == 0x826, "UMaterial::boolField826 offset is not 826");
	auto constexpr UMaterial_boolField827_Offset = offsetof(UMaterial, boolField827);
	static_assert(UMaterial_boolField827_Offset == 0x827, "UMaterial::boolField827 offset is not 827");
	auto constexpr UMaterial_D3D11TessellationMode_Offset = offsetof(UMaterial, D3D11TessellationMode);
	static_assert(UMaterial_D3D11TessellationMode_Offset == 0x828, "UMaterial::D3D11TessellationMode offset is not 828");
	auto constexpr UMaterial_boolField82C_Offset = offsetof(UMaterial, boolField82C);
	static_assert(UMaterial_boolField82C_Offset == 0x82c, "UMaterial::boolField82C offset is not 82c");
	auto constexpr UMaterial_MaxDisplacement_Offset = offsetof(UMaterial, MaxDisplacement);
	static_assert(UMaterial_MaxDisplacement_Offset == 0x830, "UMaterial::MaxDisplacement offset is not 830");
	auto constexpr UMaterial_boolField834_Offset = offsetof(UMaterial, boolField834);
	static_assert(UMaterial_boolField834_Offset == 0x834, "UMaterial::boolField834 offset is not 834");
	auto constexpr UMaterial_EditorX_Offset = offsetof(UMaterial, EditorX);
	static_assert(UMaterial_EditorX_Offset == 0x838, "UMaterial::EditorX offset is not 838");
	auto constexpr UMaterial_EditorY_Offset = offsetof(UMaterial, EditorY);
	static_assert(UMaterial_EditorY_Offset == 0x83c, "UMaterial::EditorY offset is not 83c");
	auto constexpr UMaterial_EditorPitch_Offset = offsetof(UMaterial, EditorPitch);
	static_assert(UMaterial_EditorPitch_Offset == 0x840, "UMaterial::EditorPitch offset is not 840");
	auto constexpr UMaterial_EditorYaw_Offset = offsetof(UMaterial, EditorYaw);
	static_assert(UMaterial_EditorYaw_Offset == 0x844, "UMaterial::EditorYaw offset is not 844");
	auto constexpr UMaterial_Expressions_Offset = offsetof(UMaterial, Expressions);
	static_assert(UMaterial_Expressions_Offset == 0x848, "UMaterial::Expressions offset is not 848");
	auto constexpr UMaterial_MaterialFunctionInfos_Offset = offsetof(UMaterial, MaterialFunctionInfos);
	static_assert(UMaterial_MaterialFunctionInfos_Offset == 0x858, "UMaterial::MaterialFunctionInfos offset is not 858");
	auto constexpr UMaterial_MaterialParameterCollectionInfos_Offset = offsetof(UMaterial, MaterialParameterCollectionInfos);
	static_assert(UMaterial_MaterialParameterCollectionInfos_Offset == 0x868, "UMaterial::MaterialParameterCollectionInfos offset is not 868");
	auto constexpr UMaterial_boolField878_Offset = offsetof(UMaterial, boolField878);
	static_assert(UMaterial_boolField878_Offset == 0x878, "UMaterial::boolField878 offset is not 878");
	auto constexpr UMaterial_UsageFlagWarnings_Offset = offsetof(UMaterial, UsageFlagWarnings);
	static_assert(UMaterial_UsageFlagWarnings_Offset == 0x87c, "UMaterial::UsageFlagWarnings offset is not 87c");
	auto constexpr UMaterial_BlendableLocation_Offset = offsetof(UMaterial, BlendableLocation);
	static_assert(UMaterial_BlendableLocation_Offset == 0x880, "UMaterial::BlendableLocation offset is not 880");
	auto constexpr UMaterial_BlendablePriority_Offset = offsetof(UMaterial, BlendablePriority);
	static_assert(UMaterial_BlendablePriority_Offset == 0x884, "UMaterial::BlendablePriority offset is not 884");
	auto constexpr UMaterial_boolField888_Offset = offsetof(UMaterial, boolField888);
	static_assert(UMaterial_boolField888_Offset == 0x888, "UMaterial::boolField888 offset is not 888");
	auto constexpr UMaterial_RefractionMode_Offset = offsetof(UMaterial, RefractionMode);
	static_assert(UMaterial_RefractionMode_Offset == 0x889, "UMaterial::RefractionMode offset is not 889");
	auto constexpr UMaterial_RefractionDepthBias_Offset = offsetof(UMaterial, RefractionDepthBias);
	static_assert(UMaterial_RefractionDepthBias_Offset == 0x88c, "UMaterial::RefractionDepthBias offset is not 88c");
	auto constexpr UMaterial_StateId_Offset = offsetof(UMaterial, StateId);
	static_assert(UMaterial_StateId_Offset == 0x890, "UMaterial::StateId offset is not 890");
	auto constexpr UMaterial_ExpressionTextureReferences_Offset = offsetof(UMaterial, ExpressionTextureReferences);
	static_assert(UMaterial_ExpressionTextureReferences_Offset == 0x980, "UMaterial::ExpressionTextureReferences offset is not 980");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
