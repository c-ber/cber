#pragma once
#include "FStringClassReference.hpp"
#include "ETransitionType.hpp"
#include "FLinearColor.hpp"
#include "FColor.hpp"
#include "FFloatRange.hpp"
#include "FRigidBodyErrorCorrection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEngine // Size: 0xD70
	: public UObject // Size: 0x30
{
private:
	typedef UEngine t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(235); // id32("Class Engine.Engine")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	ExternalPtr<struct UFont> TinyFont; /* Ofs: 0x38 Size: 0x8 - ObjectProperty Engine.Engine.TinyFont */
	FStringAssetReference TinyFontName; /* Ofs: 0x40 Size: 0x10 - StructProperty Engine.Engine.TinyFontName */
	ExternalPtr<struct UFont> SmallFont; /* Ofs: 0x50 Size: 0x8 - ObjectProperty Engine.Engine.SmallFont */
	FStringAssetReference SmallFontName; /* Ofs: 0x58 Size: 0x10 - StructProperty Engine.Engine.SmallFontName */
	ExternalPtr<struct UFont> MediumFont; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.Engine.MediumFont */
	FStringAssetReference MediumFontName; /* Ofs: 0x70 Size: 0x10 - StructProperty Engine.Engine.MediumFontName */
	ExternalPtr<struct UFont> LargeFont; /* Ofs: 0x80 Size: 0x8 - ObjectProperty Engine.Engine.LargeFont */
	FStringAssetReference LargeFontName; /* Ofs: 0x88 Size: 0x10 - StructProperty Engine.Engine.LargeFontName */
	ExternalPtr<struct UFont> SubtitleFont; /* Ofs: 0x98 Size: 0x8 - ObjectProperty Engine.Engine.SubtitleFont */
	FStringAssetReference SubtitleFontName; /* Ofs: 0xA0 Size: 0x10 - StructProperty Engine.Engine.SubtitleFontName */
	TArray<ExternalPtr<struct UFont>> AdditionalFonts; /* Ofs: 0xB0 Size: 0x10 - ArrayProperty Engine.Engine.AdditionalFonts */
	ExternalPtr<struct UPhysicalMaterial> DefaultPhysMaterial; /* Ofs: 0xC0 Size: 0x8 - ObjectProperty Engine.Engine.DefaultPhysMaterial */
	TArray<struct FString> AdditionalFontNames; /* Ofs: 0xC8 Size: 0x10 - ArrayProperty Engine.Engine.AdditionalFontNames */
	TArray<struct FGameNameRedirect> ActiveGameNameRedirects; /* Ofs: 0xD8 Size: 0x10 - ArrayProperty Engine.Engine.ActiveGameNameRedirects */
	ExternalPtr<struct UTexture2D> PreIntegratedSkinBRDFTexture; /* Ofs: 0xE8 Size: 0x8 - ObjectProperty Engine.Engine.PreIntegratedSkinBRDFTexture */
	FStringClassReference DefaultBlueprintBaseClassName; /* Ofs: 0xF0 Size: 0x10 - StructProperty Engine.Engine.DefaultBlueprintBaseClassName */
	FStringAssetReference DefaultBSPVertexTextureName; /* Ofs: 0x100 Size: 0x10 - StructProperty Engine.Engine.DefaultBSPVertexTextureName */
	FString VertexColorViewModeMaterialName_BlueOnly; /* Ofs: 0x110 Size: 0x10 - StrProperty Engine.Engine.VertexColorViewModeMaterialName_BlueOnly */
	ExternalPtr<struct UGameUserSettings> GameUserSettings; /* Ofs: 0x120 Size: 0x8 - ObjectProperty Engine.Engine.GameUserSettings */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialY; /* Ofs: 0x128 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialY */
	ExternalPtr<struct UMaterial> ArrowMaterial; /* Ofs: 0x130 Size: 0x8 - ObjectProperty Engine.Engine.ArrowMaterial */
	FString LevelColorationLitMaterialName; /* Ofs: 0x138 Size: 0x10 - StrProperty Engine.Engine.LevelColorationLitMaterialName */
	TArray<struct FLinearColor> QuadComplexityColors; /* Ofs: 0x148 Size: 0x10 - ArrayProperty Engine.Engine.QuadComplexityColors */
	FStringAssetReference DebugMeshMaterialName; /* Ofs: 0x158 Size: 0x10 - StructProperty Engine.Engine.DebugMeshMaterialName */
	TArray<struct FDropNoteInfo> PendingDroppedNotes; /* Ofs: 0x168 Size: 0x10 - ArrayProperty Engine.Engine.PendingDroppedNotes */
	float RenderLightMapDensityColorScale; /* Ofs: 0x178 Size: 0x4 - FloatProperty Engine.Engine.RenderLightMapDensityColorScale */
	float MaxPixelShaderAdditiveComplexityCount; /* Ofs: 0x17C Size: 0x4 - FloatProperty Engine.Engine.MaxPixelShaderAdditiveComplexityCount */
	TEnumAsByte<enum ETransitionType> TransitionType; /* Ofs: 0x180 Size: 0x1 - ByteProperty Engine.Engine.TransitionType */
	uint8_t UnknownData181[0x3];
	uint8_t boolField184;
	uint8_t UnknownData185[0x3];
	FStringAssetReference MiniFontTextureName; /* Ofs: 0x188 Size: 0x10 - StructProperty Engine.Engine.MiniFontTextureName */
	TArray<struct FLinearColor> StreamingAccuracyColors; /* Ofs: 0x198 Size: 0x10 - ArrayProperty Engine.Engine.StreamingAccuracyColors */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialYAxis; /* Ofs: 0x1A8 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialYAxis */
	ExternalPtr<struct UTexture2D> DefaultBloomKernelTexture; /* Ofs: 0x1B0 Size: 0x8 - ObjectProperty Engine.Engine.DefaultBloomKernelTexture */
	float MinLightMapDensity; /* Ofs: 0x1B8 Size: 0x4 - FloatProperty Engine.Engine.MinLightMapDensity */
	uint8_t UnknownData1BC[0x4];
	FStringAssetReference HighFrequencyNoiseTextureName; /* Ofs: 0x1C0 Size: 0x10 - StructProperty Engine.Engine.HighFrequencyNoiseTextureName */
	ExternalPtr<struct UTexture2D> LightMapDensityTexture; /* Ofs: 0x1D0 Size: 0x8 - ObjectProperty Engine.Engine.LightMapDensityTexture */
	FStringClassReference GameViewportClientClassName; /* Ofs: 0x1D8 Size: 0x10 - StructProperty Engine.Engine.GameViewportClientClassName */
	FString TransitionDescription; /* Ofs: 0x1E8 Size: 0x10 - StrProperty Engine.Engine.TransitionDescription */
	TArray<struct FLinearColor> HLODColorationColors; /* Ofs: 0x1F8 Size: 0x10 - ArrayProperty Engine.Engine.HLODColorationColors */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialXAxis; /* Ofs: 0x208 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialXAxis */
	ExternalPtr<struct UObject> GameSingleton; /* Ofs: 0x210 Size: 0x8 - ObjectProperty Engine.Engine.GameSingleton */
	float NearClipPlane; /* Ofs: 0x218 Size: 0x4 - FloatProperty Engine.Engine.NearClipPlane */
	uint8_t UnknownData21C[0x4];
	ExternalPtr<struct UClass> ConsoleClass; /* Ofs: 0x220 Size: 0x8 - ClassProperty Engine.Engine.ConsoleClass */
	float MeshLODRange; /* Ofs: 0x228 Size: 0x4 - FloatProperty Engine.Engine.MeshLODRange */
	uint8_t UnknownData22C[0x4];
	FStringClassReference LocalPlayerClassName; /* Ofs: 0x230 Size: 0x10 - StructProperty Engine.Engine.LocalPlayerClassName */
	FLinearColor LightMapDensityVertexMappedColor; /* Ofs: 0x240 Size: 0x10 - StructProperty Engine.Engine.LightMapDensityVertexMappedColor */
	ExternalPtr<struct UMaterial> ShadedLevelColorationLitMaterial; /* Ofs: 0x250 Size: 0x8 - ObjectProperty Engine.Engine.ShadedLevelColorationLitMaterial */
	float PrimitiveProbablyVisibleTime; /* Ofs: 0x258 Size: 0x4 - FloatProperty Engine.Engine.PrimitiveProbablyVisibleTime */
	FLinearColor LightMapDensitySelectedColor; /* Ofs: 0x25C Size: 0x10 - StructProperty Engine.Engine.LightMapDensitySelectedColor */
	uint8_t UnknownData26C[0x4];
	ExternalPtr<struct UClass> LocalPlayerClass; /* Ofs: 0x270 Size: 0x8 - ClassProperty Engine.Engine.LocalPlayerClass */
	FColor C_OrthoBackground; /* Ofs: 0x278 Size: 0x4 - StructProperty Engine.Engine.C_OrthoBackground */
	uint8_t UnknownData27C[0x4];
	ExternalPtr<struct UMaterial> VertexColorViewModeMaterial_AlphaAsColor; /* Ofs: 0x280 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorViewModeMaterial_AlphaAsColor */
	FString VertexColorViewModeMaterialName_ColorOnly; /* Ofs: 0x288 Size: 0x10 - StrProperty Engine.Engine.VertexColorViewModeMaterialName_ColorOnly */
	int32_t ClientCycles; /* Ofs: 0x298 Size: 0x4 - IntProperty Engine.Engine.ClientCycles */
	uint8_t UnknownData29C[0x4];
	ExternalPtr<struct UClass> GameViewportClientClass; /* Ofs: 0x2A0 Size: 0x8 - ClassProperty Engine.Engine.GameViewportClientClass */
	FString WireframeMaterialName; /* Ofs: 0x2A8 Size: 0x10 - StrProperty Engine.Engine.WireframeMaterialName */
	FString VertexColorViewModeMaterialName_AlphaAsColor; /* Ofs: 0x2B8 Size: 0x10 - StrProperty Engine.Engine.VertexColorViewModeMaterialName_AlphaAsColor */
	ExternalPtr<struct UTexture2D> HighFrequencyNoiseTexture; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty Engine.Engine.HighFrequencyNoiseTexture */
	FStringAssetReference PreviewShadowsIndicatorMaterialName; /* Ofs: 0x2D0 Size: 0x10 - StructProperty Engine.Engine.PreviewShadowsIndicatorMaterialName */
	TArray<struct FLinearColor> LODColorationColors; /* Ofs: 0x2E0 Size: 0x10 - ArrayProperty Engine.Engine.LODColorationColors */
	FLinearColor LightingOnlyBrightness; /* Ofs: 0x2F0 Size: 0x10 - StructProperty Engine.Engine.LightingOnlyBrightness */
	FColor C_WorldBox; /* Ofs: 0x300 Size: 0x4 - StructProperty Engine.Engine.C_WorldBox */
	uint8_t UnknownData304[0x4];
	ExternalPtr<struct UGameViewportClient> GameViewport; /* Ofs: 0x308 Size: 0x8 - ObjectProperty Engine.Engine.GameViewport */
	ExternalPtr<struct UClass> GameUserSettingsClass; /* Ofs: 0x310 Size: 0x8 - ClassProperty Engine.Engine.GameUserSettingsClass */
	ExternalPtr<struct UMaterial> ConstraintLimitMaterial; /* Ofs: 0x318 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterial */
	FString LightingTexelDensityName; /* Ofs: 0x320 Size: 0x10 - StrProperty Engine.Engine.LightingTexelDensityName */
	ExternalPtr<struct UMaterial> LightingTexelDensityMaterial; /* Ofs: 0x330 Size: 0x8 - ObjectProperty Engine.Engine.LightingTexelDensityMaterial */
	ExternalPtr<struct UMaterial> VertexColorMaterial; /* Ofs: 0x338 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorMaterial */
	float CameraTranslationThreshold; /* Ofs: 0x340 Size: 0x4 - FloatProperty Engine.Engine.CameraTranslationThreshold */
	uint8_t UnknownData344[0x4];
	FString VertexColorViewModeMaterialName_GreenOnly; /* Ofs: 0x348 Size: 0x10 - StrProperty Engine.Engine.VertexColorViewModeMaterialName_GreenOnly */
	int32_t TickCycles; /* Ofs: 0x358 Size: 0x4 - IntProperty Engine.Engine.TickCycles */
	uint8_t UnknownData35C[0x4];
	ExternalPtr<struct UMaterial> VertexColorViewModeMaterial_ColorOnly; /* Ofs: 0x360 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorViewModeMaterial_ColorOnly */
	ExternalPtr<struct UClass> AvoidanceManagerClass; /* Ofs: 0x368 Size: 0x8 - ClassProperty Engine.Engine.AvoidanceManagerClass */
	TArray<struct FLinearColor> StationaryLightOverlapColors; /* Ofs: 0x370 Size: 0x10 - ArrayProperty Engine.Engine.StationaryLightOverlapColors */
	FColor C_WireBackground; /* Ofs: 0x380 Size: 0x4 - StructProperty Engine.Engine.C_WireBackground */
	uint8_t UnknownData384[0x4];
	FStringAssetReference DefaultBloomKernelTextureName; /* Ofs: 0x388 Size: 0x10 - StructProperty Engine.Engine.DefaultBloomKernelTextureName */
	FColor C_BSPCollision; /* Ofs: 0x398 Size: 0x4 - StructProperty Engine.Engine.C_BSPCollision */
	uint8_t boolField39C;
	uint8_t UnknownData39D[0x3];
	FString TransitionGameMode; /* Ofs: 0x3A0 Size: 0x10 - StrProperty Engine.Engine.TransitionGameMode */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialPrismatic; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialPrismatic */
	uint8_t UnknownData3B8[0x8];
	float MaxOcclusionPixelsFraction; /* Ofs: 0x3C0 Size: 0x4 - FloatProperty Engine.Engine.MaxOcclusionPixelsFraction */
	uint8_t UnknownData3C4[0x4];
	TArray<struct FLinearColor> ShaderComplexityColors; /* Ofs: 0x3C8 Size: 0x10 - ArrayProperty Engine.Engine.ShaderComplexityColors */
	TArray<struct FStatColorMapping> StatColorMappings; /* Ofs: 0x3D8 Size: 0x10 - ArrayProperty Engine.Engine.StatColorMappings */
	FColor C_ScaleBoxHi; /* Ofs: 0x3E8 Size: 0x4 - StructProperty Engine.Engine.C_ScaleBoxHi */
	FColor C_BrushShape; /* Ofs: 0x3EC Size: 0x4 - StructProperty Engine.Engine.C_BrushShape */
	int32_t MaximumLoopIterationCount; /* Ofs: 0x3F0 Size: 0x4 - IntProperty Engine.Engine.MaximumLoopIterationCount */
	uint8_t UnknownData3F4[0x4];
	ExternalPtr<struct UTexture2D> DefaultBSPVertexTexture; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty Engine.Engine.DefaultBSPVertexTexture */
	FStringAssetReference PreIntegratedSkinBRDFTextureName; /* Ofs: 0x400 Size: 0x10 - StructProperty Engine.Engine.PreIntegratedSkinBRDFTextureName */
	FColor C_BrushWire; /* Ofs: 0x410 Size: 0x4 - StructProperty Engine.Engine.C_BrushWire */
	FColor C_SemiSolidWire; /* Ofs: 0x414 Size: 0x4 - StructProperty Engine.Engine.C_SemiSolidWire */
	ExternalPtr<struct UTexture2D> DefaultBokehTexture; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.Engine.DefaultBokehTexture */
	FStringAssetReference ArrowMaterialName; /* Ofs: 0x420 Size: 0x10 - StructProperty Engine.Engine.ArrowMaterialName */
	FStringClassReference AIControllerClassName; /* Ofs: 0x430 Size: 0x10 - StructProperty Engine.Engine.AIControllerClassName */
	ExternalPtr<struct UClass> WorldSettingsClass; /* Ofs: 0x440 Size: 0x8 - ClassProperty Engine.Engine.WorldSettingsClass */
	ExternalPtr<struct UMaterial> LevelColorationUnlitMaterial; /* Ofs: 0x448 Size: 0x8 - ObjectProperty Engine.Engine.LevelColorationUnlitMaterial */
	FStringAssetReference InvalidLightmapSettingsMaterialName; /* Ofs: 0x450 Size: 0x10 - StructProperty Engine.Engine.InvalidLightmapSettingsMaterialName */
	float DisplayGamma; /* Ofs: 0x460 Size: 0x4 - FloatProperty Engine.Engine.DisplayGamma */
	uint8_t UnknownData464[0x4];
	FStringClassReference WorldSettingsClassName; /* Ofs: 0x468 Size: 0x10 - StructProperty Engine.Engine.WorldSettingsClassName */
	uint8_t boolField478;
	uint8_t UnknownData479[0x3];
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; /* Ofs: 0x47C Size: 0x4 - IntProperty Engine.Engine.NumPawnsAllowedToBeSpawnedInAFrame */
	uint8_t boolField480;
	uint8_t UnknownData481[0x7];
	FStringAssetReference DefaultPhysMaterialName; /* Ofs: 0x488 Size: 0x10 - StructProperty Engine.Engine.DefaultPhysMaterialName */
	ExternalPtr<struct UMaterial> DebugMeshMaterial; /* Ofs: 0x498 Size: 0x8 - ObjectProperty Engine.Engine.DebugMeshMaterial */
	TArray<struct FClassRedirect> ActiveClassRedirects; /* Ofs: 0x4A0 Size: 0x10 - ArrayProperty Engine.Engine.ActiveClassRedirects */
	ExternalPtr<struct UTexture> WeightMapPlaceholderTexture; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty Engine.Engine.WeightMapPlaceholderTexture */
	ExternalPtr<struct UMaterial> LevelColorationLitMaterial; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty Engine.Engine.LevelColorationLitMaterial */
	FString ShadedLevelColorationUnlitMaterialName; /* Ofs: 0x4C0 Size: 0x10 - StrProperty Engine.Engine.ShadedLevelColorationUnlitMaterialName */
	uint8_t boolField4D0;
	uint8_t UnknownData4D1[0x7];
	TArray<struct FLinearColor> LightComplexityColors; /* Ofs: 0x4D8 Size: 0x10 - ArrayProperty Engine.Engine.LightComplexityColors */
	FStringClassReference GameUserSettingsClassName; /* Ofs: 0x4E8 Size: 0x10 - StructProperty Engine.Engine.GameUserSettingsClassName */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialZ; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialZ */
	uint8_t boolField500;
	uint8_t UnknownData501[0x3];
	float IdealLightMapDensity; /* Ofs: 0x504 Size: 0x4 - FloatProperty Engine.Engine.IdealLightMapDensity */
	ExternalPtr<struct UTexture2D> MiniFontTexture; /* Ofs: 0x508 Size: 0x8 - ObjectProperty Engine.Engine.MiniFontTexture */
	uint8_t boolField510;
	uint8_t UnknownData511[0x3];
	float CameraRotationThreshold; /* Ofs: 0x514 Size: 0x4 - FloatProperty Engine.Engine.CameraRotationThreshold */
	ExternalPtr<struct UClass> PhysicsCollisionHandlerClass; /* Ofs: 0x518 Size: 0x8 - ClassProperty Engine.Engine.PhysicsCollisionHandlerClass */
	float MinDesiredFrameRate; /* Ofs: 0x520 Size: 0x4 - FloatProperty Engine.Engine.MinDesiredFrameRate */
	FColor C_SubtractWire; /* Ofs: 0x524 Size: 0x4 - StructProperty Engine.Engine.C_SubtractWire */
	FColor C_Volume; /* Ofs: 0x528 Size: 0x4 - StructProperty Engine.Engine.C_Volume */
	uint8_t UnknownData52C[0x4];
	FString ShadedLevelColorationLitMaterialName; /* Ofs: 0x530 Size: 0x10 - StrProperty Engine.Engine.ShadedLevelColorationLitMaterialName */
	FFloatRange SmoothedFrameRateRange; /* Ofs: 0x540 Size: 0x10 - StructProperty Engine.Engine.SmoothedFrameRateRange */
	TArray<struct FPluginRedirect> ActivePluginRedirects; /* Ofs: 0x550 Size: 0x10 - ArrayProperty Engine.Engine.ActivePluginRedirects */
	FStringAssetReference DefaultTextureName; /* Ofs: 0x560 Size: 0x10 - StructProperty Engine.Engine.DefaultTextureName */
	ExternalPtr<struct UMaterial> InvalidLightmapSettingsMaterial; /* Ofs: 0x570 Size: 0x8 - ObjectProperty Engine.Engine.InvalidLightmapSettingsMaterial */
	FString VertexColorMaterialName; /* Ofs: 0x578 Size: 0x10 - StrProperty Engine.Engine.VertexColorMaterialName */
	int32_t MaxParticleResizeWarn; /* Ofs: 0x588 Size: 0x4 - IntProperty Engine.Engine.MaxParticleResizeWarn */
	uint8_t UnknownData58C[0x4];
	ExternalPtr<struct UTexture> DefaultDiffuseTexture; /* Ofs: 0x590 Size: 0x8 - ObjectProperty Engine.Engine.DefaultDiffuseTexture */
	uint8_t UnknownData598[0x50];
	float MaxES2PixelShaderAdditiveComplexityCount; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty Engine.Engine.MaxES2PixelShaderAdditiveComplexityCount */
	float RenderLightMapDensityGrayscaleScale; /* Ofs: 0x5EC Size: 0x4 - FloatProperty Engine.Engine.RenderLightMapDensityGrayscaleScale */
	FColor C_NonSolidWire; /* Ofs: 0x5F0 Size: 0x4 - StructProperty Engine.Engine.C_NonSolidWire */
	int32_t GameCycles; /* Ofs: 0x5F4 Size: 0x4 - IntProperty Engine.Engine.GameCycles */
	FStringAssetReference LightMapDensityTextureName; /* Ofs: 0x5F8 Size: 0x10 - StructProperty Engine.Engine.LightMapDensityTextureName */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialX; /* Ofs: 0x608 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialX */
	FStringClassReference NavigationSystemClassName; /* Ofs: 0x610 Size: 0x10 - StructProperty Engine.Engine.NavigationSystemClassName */
	ExternalPtr<struct UMaterial> PreviewShadowsIndicatorMaterial; /* Ofs: 0x620 Size: 0x8 - ObjectProperty Engine.Engine.PreviewShadowsIndicatorMaterial */
	FRigidBodyErrorCorrection PhysicErrorCorrection; /* Ofs: 0x628 Size: 0x1C - StructProperty Engine.Engine.PhysicErrorCorrection */
	float FixedFrameRate; /* Ofs: 0x644 Size: 0x4 - FloatProperty Engine.Engine.FixedFrameRate */
	FStringAssetReference DefaultDiffuseTextureName; /* Ofs: 0x648 Size: 0x10 - StructProperty Engine.Engine.DefaultDiffuseTextureName */
	FLinearColor DefaultSelectedMaterialColor; /* Ofs: 0x658 Size: 0x10 - StructProperty Engine.Engine.DefaultSelectedMaterialColor */
	FLinearColor SelectedMaterialColor; /* Ofs: 0x668 Size: 0x10 - StructProperty Engine.Engine.SelectedMaterialColor */
	FLinearColor SelectionOutlineColor; /* Ofs: 0x678 Size: 0x10 - StructProperty Engine.Engine.SelectionOutlineColor */
	FLinearColor SubduedSelectionOutlineColor; /* Ofs: 0x688 Size: 0x10 - StructProperty Engine.Engine.SubduedSelectionOutlineColor */
	FLinearColor SelectedMaterialColorOverride; /* Ofs: 0x698 Size: 0x10 - StructProperty Engine.Engine.SelectedMaterialColorOverride */
	uint8_t boolField6A8;
	uint8_t UnknownData6A9[0x3];
	uint8_t boolField6AC;
	uint8_t UnknownData6AD[0x3];
	uint32_t bEnableVisualLogRecordingOnStart; /* Ofs: 0x6B0 Size: 0x4 - UInt32Property Engine.Engine.bEnableVisualLogRecordingOnStart */
	uint8_t UnknownData6B4[0x4];
	int32_t ScreenSaverInhibitorSemaphore; /* Ofs: 0x6B8 Size: 0x4 - IntProperty Engine.Engine.ScreenSaverInhibitorSemaphore */
	uint8_t boolField6BC;
	uint8_t UnknownData6BD[0x3];
	FString ParticleEventManagerClassPath; /* Ofs: 0x6C0 Size: 0x10 - StrProperty Engine.Engine.ParticleEventManagerClassPath */
	uint8_t UnknownData6D0[0x10];
	float SelectionHighlightIntensity; /* Ofs: 0x6E0 Size: 0x4 - FloatProperty Engine.Engine.SelectionHighlightIntensity */
	float SelectionMeshSectionHighlightIntensity; /* Ofs: 0x6E4 Size: 0x4 - FloatProperty Engine.Engine.SelectionMeshSectionHighlightIntensity */
	float BSPSelectionHighlightIntensity; /* Ofs: 0x6E8 Size: 0x4 - FloatProperty Engine.Engine.BSPSelectionHighlightIntensity */
	float HoverHighlightIntensity; /* Ofs: 0x6EC Size: 0x4 - FloatProperty Engine.Engine.HoverHighlightIntensity */
	float SelectionHighlightIntensityBillboards; /* Ofs: 0x6F0 Size: 0x4 - FloatProperty Engine.Engine.SelectionHighlightIntensityBillboards */
	uint8_t UnknownData6F4[0x204];
	FColor C_AddWire; /* Ofs: 0x8F8 Size: 0x4 - StructProperty Engine.Engine.C_AddWire */
	uint8_t UnknownData8FC[0x4];
	ExternalPtr<struct UMaterial> VertexColorViewModeMaterial_BlueOnly; /* Ofs: 0x900 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorViewModeMaterial_BlueOnly */
	ExternalPtr<struct UMaterial> VertexColorViewModeMaterial_RedOnly; /* Ofs: 0x908 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorViewModeMaterial_RedOnly */
	FStringClassReference GameSingletonClassName; /* Ofs: 0x910 Size: 0x10 - StructProperty Engine.Engine.GameSingletonClassName */
	FString VertexColorViewModeMaterialName_RedOnly; /* Ofs: 0x920 Size: 0x10 - StrProperty Engine.Engine.VertexColorViewModeMaterialName_RedOnly */
	ExternalPtr<struct UMaterial> ShadedLevelColorationUnlitMaterial; /* Ofs: 0x930 Size: 0x8 - ObjectProperty Engine.Engine.ShadedLevelColorationUnlitMaterial */
	TArray<struct FString> DeferredCommands; /* Ofs: 0x938 Size: 0x10 - ArrayProperty Engine.Engine.DeferredCommands */
	uint8_t UnknownData948[0x18];
	uint8_t boolField960;
	uint8_t UnknownData961[0x3];
	int32_t MaxParticleResize; /* Ofs: 0x964 Size: 0x4 - IntProperty Engine.Engine.MaxParticleResize */
	FStringAssetReference DefaultBokehTextureName; /* Ofs: 0x968 Size: 0x10 - StructProperty Engine.Engine.DefaultBokehTextureName */
	FStringClassReference AssetManagerClassName; /* Ofs: 0x978 Size: 0x10 - StructProperty Engine.Engine.AssetManagerClassName */
	uint8_t UnknownData988[0x1D8];
	TArray<struct FNetDriverDefinition> NetDriverDefinitions; /* Ofs: 0xB60 Size: 0x10 - ArrayProperty Engine.Engine.NetDriverDefinitions */
	TArray<struct FString> ServerActors; /* Ofs: 0xB70 Size: 0x10 - ArrayProperty Engine.Engine.ServerActors */
	TArray<struct FString> RuntimeServerActors; /* Ofs: 0xB80 Size: 0x10 - ArrayProperty Engine.Engine.RuntimeServerActors */
	uint8_t boolFieldB90;
	uint8_t UnknownDataB91[0x7];
	FStringClassReference AvoidanceManagerClassName; /* Ofs: 0xB98 Size: 0x10 - StructProperty Engine.Engine.AvoidanceManagerClassName */
	FString LevelColorationUnlitMaterialName; /* Ofs: 0xBA8 Size: 0x10 - StrProperty Engine.Engine.LevelColorationUnlitMaterialName */
	FStringClassReference PhysicsCollisionHandlerClassName; /* Ofs: 0xBB8 Size: 0x10 - StructProperty Engine.Engine.PhysicsCollisionHandlerClassName */
	ExternalPtr<struct UClass> NavigationSystemClass; /* Ofs: 0xBC8 Size: 0x8 - ClassProperty Engine.Engine.NavigationSystemClass */
	ExternalPtr<struct UAssetManager> AssetManager; /* Ofs: 0xBD0 Size: 0x8 - ObjectProperty Engine.Engine.AssetManager */
	uint8_t UnknownDataBD8[0x8];
	FStringClassReference LevelScriptActorClassName; /* Ofs: 0xBE0 Size: 0x10 - StructProperty Engine.Engine.LevelScriptActorClassName */
	ExternalPtr<struct UTexture2D> DefaultTexture; /* Ofs: 0xBF0 Size: 0x8 - ObjectProperty Engine.Engine.DefaultTexture */
	uint8_t boolFieldBF8;
	uint8_t UnknownDataBF9[0x3];
	FColor C_VolumeCollision; /* Ofs: 0xBFC Size: 0x4 - StructProperty Engine.Engine.C_VolumeCollision */
	ExternalPtr<struct UMaterial> WireframeMaterial; /* Ofs: 0xC00 Size: 0x8 - ObjectProperty Engine.Engine.WireframeMaterial */
	ExternalPtr<struct UMaterialInstanceDynamic> ConstraintLimitMaterialZAxis; /* Ofs: 0xC08 Size: 0x8 - ObjectProperty Engine.Engine.ConstraintLimitMaterialZAxis */
	FStringClassReference ConsoleClassName; /* Ofs: 0xC10 Size: 0x10 - StructProperty Engine.Engine.ConsoleClassName */
	ExternalPtr<struct UClass> LevelScriptActorClass; /* Ofs: 0xC20 Size: 0x8 - ClassProperty Engine.Engine.LevelScriptActorClass */
	float NetClientTicksPerSecond; /* Ofs: 0xC28 Size: 0x4 - FloatProperty Engine.Engine.NetClientTicksPerSecond */
	uint8_t UnknownDataC2C[0x4];
	FStringAssetReference WeightMapPlaceholderTextureName; /* Ofs: 0xC30 Size: 0x10 - StructProperty Engine.Engine.WeightMapPlaceholderTextureName */
	ExternalPtr<struct UMaterial> VertexColorViewModeMaterial_GreenOnly; /* Ofs: 0xC40 Size: 0x8 - ObjectProperty Engine.Engine.VertexColorViewModeMaterial_GreenOnly */
	FStringAssetReference RemoveSurfaceMaterialName; /* Ofs: 0xC48 Size: 0x10 - StructProperty Engine.Engine.RemoveSurfaceMaterialName */
	TArray<struct FStructRedirect> ActiveStructRedirects; /* Ofs: 0xC58 Size: 0x10 - ArrayProperty Engine.Engine.ActiveStructRedirects */
	float StreamingDistanceFactor; /* Ofs: 0xC68 Size: 0x4 - FloatProperty Engine.Engine.StreamingDistanceFactor */
	uint8_t UnknownDataC6C[0x4];
	FString PlayOnConsoleSaveDir; /* Ofs: 0xC70 Size: 0x10 - StrProperty Engine.Engine.PlayOnConsoleSaveDir */
	ExternalPtr<struct UMaterial> RemoveSurfaceMaterial; /* Ofs: 0xC80 Size: 0x8 - ObjectProperty Engine.Engine.RemoveSurfaceMaterial */
	float MaxLightMapDensity; /* Ofs: 0xC88 Size: 0x4 - FloatProperty Engine.Engine.MaxLightMapDensity */
	uint8_t UnknownDataC8C[0x14];
	int32_t NextWorldContextHandle; /* Ofs: 0xCA0 Size: 0x4 - IntProperty Engine.Engine.NextWorldContextHandle */
	uint8_t UnknownDataCA4[0xCC];


	inline bool SetTinyFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x38, value); }
	inline bool SetTinyFontName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x40, value); }
	inline bool SetSmallFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x50, value); }
	inline bool SetSmallFontName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x58, value); }
	inline bool SetMediumFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x68, value); }
	inline bool SetMediumFontName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x70, value); }
	inline bool SetLargeFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x80, value); }
	inline bool SetLargeFontName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x88, value); }
	inline bool SetSubtitleFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x98, value); }
	inline bool SetSubtitleFontName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0xA0, value); }
	inline bool SetAdditionalFonts(t_structHelper inst, TArray<ExternalPtr<struct UFont>> value) { inst.WriteOffset(0xB0, value); }
	inline bool SetDefaultPhysMaterial(t_structHelper inst, ExternalPtr<struct UPhysicalMaterial> value) { inst.WriteOffset(0xC0, value); }
	inline bool SetAdditionalFontNames(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetActiveGameNameRedirects(t_structHelper inst, TArray<struct FGameNameRedirect> value) { inst.WriteOffset(0xD8, value); }
	inline bool SetPreIntegratedSkinBRDFTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0xE8, value); }
	inline bool SetDefaultBlueprintBaseClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xF0, value); }
	inline bool SetDefaultBSPVertexTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x100, value); }
	inline bool SetVertexColorViewModeMaterialName_BlueOnly(t_structHelper inst, FString value) { inst.WriteOffset(0x110, value); }
	inline bool SetGameUserSettings(t_structHelper inst, ExternalPtr<struct UGameUserSettings> value) { inst.WriteOffset(0x120, value); }
	inline bool SetConstraintLimitMaterialY(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x128, value); }
	inline bool SetArrowMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x130, value); }
	inline bool SetLevelColorationLitMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x138, value); }
	inline bool SetQuadComplexityColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x148, value); }
	inline bool SetDebugMeshMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x158, value); }
	inline bool SetPendingDroppedNotes(t_structHelper inst, TArray<struct FDropNoteInfo> value) { inst.WriteOffset(0x168, value); }
	inline bool SetRenderLightMapDensityColorScale(t_structHelper inst, float value) { inst.WriteOffset(0x178, value); }
	inline bool SetMaxPixelShaderAdditiveComplexityCount(t_structHelper inst, float value) { inst.WriteOffset(0x17C, value); }
	inline bool SetTransitionType(t_structHelper inst, TEnumAsByte<enum ETransitionType> value) { inst.WriteOffset(0x180, value); }
	inline bool bRenderLightMapDensityGrayscale()
	{
		return boolField184& 0x1;
	}
	inline bool SetbRenderLightMapDensityGrayscale(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x184, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMiniFontTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x188, value); }
	inline bool SetStreamingAccuracyColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x198, value); }
	inline bool SetConstraintLimitMaterialYAxis(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x1A8, value); }
	inline bool SetDefaultBloomKernelTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x1B0, value); }
	inline bool SetMinLightMapDensity(t_structHelper inst, float value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetHighFrequencyNoiseTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x1C0, value); }
	inline bool SetLightMapDensityTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x1D0, value); }
	inline bool SetGameViewportClientClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x1D8, value); }
	inline bool SetTransitionDescription(t_structHelper inst, FString value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetHLODColorationColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetConstraintLimitMaterialXAxis(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x208, value); }
	inline bool SetGameSingleton(t_structHelper inst, ExternalPtr<struct UObject> value) { inst.WriteOffset(0x210, value); }
	inline bool SetNearClipPlane(t_structHelper inst, float value) { inst.WriteOffset(0x218, value); }
	inline bool SetConsoleClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x220, value); }
	inline bool SetMeshLODRange(t_structHelper inst, float value) { inst.WriteOffset(0x228, value); }
	inline bool SetLocalPlayerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x230, value); }
	inline bool SetLightMapDensityVertexMappedColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x240, value); }
	inline bool SetShadedLevelColorationLitMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x250, value); }
	inline bool SetPrimitiveProbablyVisibleTime(t_structHelper inst, float value) { inst.WriteOffset(0x258, value); }
	inline bool SetLightMapDensitySelectedColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x25C, value); }
	inline bool SetLocalPlayerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x270, value); }
	inline bool SetC_OrthoBackground(t_structHelper inst, FColor value) { inst.WriteOffset(0x278, value); }
	inline bool SetVertexColorViewModeMaterial_AlphaAsColor(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x280, value); }
	inline bool SetVertexColorViewModeMaterialName_ColorOnly(t_structHelper inst, FString value) { inst.WriteOffset(0x288, value); }
	inline bool SetClientCycles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x298, value); }
	inline bool SetGameViewportClientClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetWireframeMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetVertexColorViewModeMaterialName_AlphaAsColor(t_structHelper inst, FString value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetHighFrequencyNoiseTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetPreviewShadowsIndicatorMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetLODColorationColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetLightingOnlyBrightness(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetC_WorldBox(t_structHelper inst, FColor value) { inst.WriteOffset(0x300, value); }
	inline bool SetGameViewport(t_structHelper inst, ExternalPtr<struct UGameViewportClient> value) { inst.WriteOffset(0x308, value); }
	inline bool SetGameUserSettingsClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x310, value); }
	inline bool SetConstraintLimitMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x318, value); }
	inline bool SetLightingTexelDensityName(t_structHelper inst, FString value) { inst.WriteOffset(0x320, value); }
	inline bool SetLightingTexelDensityMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x330, value); }
	inline bool SetVertexColorMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x338, value); }
	inline bool SetCameraTranslationThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x340, value); }
	inline bool SetVertexColorViewModeMaterialName_GreenOnly(t_structHelper inst, FString value) { inst.WriteOffset(0x348, value); }
	inline bool SetTickCycles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x358, value); }
	inline bool SetVertexColorViewModeMaterial_ColorOnly(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x360, value); }
	inline bool SetAvoidanceManagerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x368, value); }
	inline bool SetStationaryLightOverlapColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x370, value); }
	inline bool SetC_WireBackground(t_structHelper inst, FColor value) { inst.WriteOffset(0x380, value); }
	inline bool SetDefaultBloomKernelTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x388, value); }
	inline bool SetC_BSPCollision(t_structHelper inst, FColor value) { inst.WriteOffset(0x398, value); }
	inline bool bSubtitlesEnabled()
	{
		return boolField39C& 0x1;
	}
	inline bool SetbSubtitlesEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x39C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTransitionGameMode(t_structHelper inst, FString value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetConstraintLimitMaterialPrismatic(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetMaxOcclusionPixelsFraction(t_structHelper inst, float value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetShaderComplexityColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetStatColorMappings(t_structHelper inst, TArray<struct FStatColorMapping> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetC_ScaleBoxHi(t_structHelper inst, FColor value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetC_BrushShape(t_structHelper inst, FColor value) { inst.WriteOffset(0x3EC, value); }
	inline bool SetMaximumLoopIterationCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetDefaultBSPVertexTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetPreIntegratedSkinBRDFTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x400, value); }
	inline bool SetC_BrushWire(t_structHelper inst, FColor value) { inst.WriteOffset(0x410, value); }
	inline bool SetC_SemiSolidWire(t_structHelper inst, FColor value) { inst.WriteOffset(0x414, value); }
	inline bool SetDefaultBokehTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x418, value); }
	inline bool SetArrowMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x420, value); }
	inline bool SetAIControllerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x430, value); }
	inline bool SetWorldSettingsClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x440, value); }
	inline bool SetLevelColorationUnlitMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x448, value); }
	inline bool SetInvalidLightmapSettingsMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x450, value); }
	inline bool SetDisplayGamma(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetWorldSettingsClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x468, value); }
	inline bool bCheckForMultiplePawnsSpawnedInAFrame()
	{
		return boolField478& 0x1;
	}
	inline bool SetbCheckForMultiplePawnsSpawnedInAFrame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNumPawnsAllowedToBeSpawnedInAFrame(t_structHelper inst, int32_t value) { inst.WriteOffset(0x47C, value); }
	inline bool bShouldGenerateLowQualityLightmaps()
	{
		return boolField480& 0x1;
	}
	inline bool SetbShouldGenerateLowQualityLightmaps(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultPhysMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x488, value); }
	inline bool SetDebugMeshMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x498, value); }
	inline bool SetActiveClassRedirects(t_structHelper inst, TArray<struct FClassRedirect> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetWeightMapPlaceholderTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetLevelColorationLitMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetShadedLevelColorationUnlitMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x4C0, value); }
	inline bool bHardwareSurveyEnabled()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbHardwareSurveyEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetLightComplexityColors(t_structHelper inst, TArray<struct FLinearColor> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetGameUserSettingsClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetConstraintLimitMaterialZ(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x4F8, value); }
	inline bool bCanBlueprintsTickByDefault()
	{
		return boolField500& 0x1;
	}
	inline bool SetbCanBlueprintsTickByDefault(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOptimizeAnimBlueprintMemberVariableAccess()
	{
		return boolField500& 0x2;
	}
	inline bool SetbOptimizeAnimBlueprintMemberVariableAccess(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAllowMultiThreadedAnimationUpdate()
	{
		return boolField500& 0x4;
	}
	inline bool SetbAllowMultiThreadedAnimationUpdate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bEnableEditorPSysRealtimeLOD()
	{
		return boolField500& 0x8;
	}
	inline bool SetbEnableEditorPSysRealtimeLOD(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bSmoothFrameRate()
	{
		return boolField500& 0x20;
	}
	inline bool SetbSmoothFrameRate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bUseFixedFrameRate()
	{
		return boolField500& 0x40;
	}
	inline bool SetbUseFixedFrameRate(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x500, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool SetIdealLightMapDensity(t_structHelper inst, float value) { inst.WriteOffset(0x504, value); }
	inline bool SetMiniFontTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x508, value); }
	inline bool bAllowMatureLanguage()
	{
		return boolField510& 0x1;
	}
	inline bool SetbAllowMatureLanguage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x510, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCameraRotationThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x514, value); }
	inline bool SetPhysicsCollisionHandlerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x518, value); }
	inline bool SetMinDesiredFrameRate(t_structHelper inst, float value) { inst.WriteOffset(0x520, value); }
	inline bool SetC_SubtractWire(t_structHelper inst, FColor value) { inst.WriteOffset(0x524, value); }
	inline bool SetC_Volume(t_structHelper inst, FColor value) { inst.WriteOffset(0x528, value); }
	inline bool SetShadedLevelColorationLitMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x530, value); }
	inline bool SetSmoothedFrameRateRange(t_structHelper inst, FFloatRange value) { inst.WriteOffset(0x540, value); }
	inline bool SetActivePluginRedirects(t_structHelper inst, TArray<struct FPluginRedirect> value) { inst.WriteOffset(0x550, value); }
	inline bool SetDefaultTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x560, value); }
	inline bool SetInvalidLightmapSettingsMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x570, value); }
	inline bool SetVertexColorMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0x578, value); }
	inline bool SetMaxParticleResizeWarn(t_structHelper inst, int32_t value) { inst.WriteOffset(0x588, value); }
	inline bool SetDefaultDiffuseTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x590, value); }
	inline bool SetMaxES2PixelShaderAdditiveComplexityCount(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetRenderLightMapDensityGrayscaleScale(t_structHelper inst, float value) { inst.WriteOffset(0x5EC, value); }
	inline bool SetC_NonSolidWire(t_structHelper inst, FColor value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetGameCycles(t_structHelper inst, int32_t value) { inst.WriteOffset(0x5F4, value); }
	inline bool SetLightMapDensityTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetConstraintLimitMaterialX(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x608, value); }
	inline bool SetNavigationSystemClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x610, value); }
	inline bool SetPreviewShadowsIndicatorMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x620, value); }
	inline bool SetPhysicErrorCorrection(t_structHelper inst, FRigidBodyErrorCorrection value) { inst.WriteOffset(0x628, value); }
	inline bool SetFixedFrameRate(t_structHelper inst, float value) { inst.WriteOffset(0x644, value); }
	inline bool SetDefaultDiffuseTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x648, value); }
	inline bool SetDefaultSelectedMaterialColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x658, value); }
	inline bool SetSelectedMaterialColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x668, value); }
	inline bool SetSelectionOutlineColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x678, value); }
	inline bool SetSubduedSelectionOutlineColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x688, value); }
	inline bool SetSelectedMaterialColorOverride(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x698, value); }
	inline bool bIsOverridingSelectedColor()
	{
		return boolField6A8& 0x1;
	}
	inline bool SetbIsOverridingSelectedColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6A8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableOnScreenDebugMessages()
	{
		return boolField6AC& 0x1;
	}
	inline bool SetbEnableOnScreenDebugMessages(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bEnableOnScreenDebugMessagesDisplay()
	{
		return boolField6AC& 0x2;
	}
	inline bool SetbEnableOnScreenDebugMessagesDisplay(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSuppressMapWarnings()
	{
		return boolField6AC& 0x4;
	}
	inline bool SetbSuppressMapWarnings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bDisableAILogging()
	{
		return boolField6AC& 0x8;
	}
	inline bool SetbDisableAILogging(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6AC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool SetbEnableVisualLogRecordingOnStart(t_structHelper inst, uint32_t value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetScreenSaverInhibitorSemaphore(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6B8, value); }
	inline bool bLockReadOnlyLevels()
	{
		return boolField6BC& 0x1;
	}
	inline bool SetbLockReadOnlyLevels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x6BC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetParticleEventManagerClassPath(t_structHelper inst, FString value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetSelectionHighlightIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetSelectionMeshSectionHighlightIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x6E4, value); }
	inline bool SetBSPSelectionHighlightIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x6E8, value); }
	inline bool SetHoverHighlightIntensity(t_structHelper inst, float value) { inst.WriteOffset(0x6EC, value); }
	inline bool SetSelectionHighlightIntensityBillboards(t_structHelper inst, float value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetC_AddWire(t_structHelper inst, FColor value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetVertexColorViewModeMaterial_BlueOnly(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x900, value); }
	inline bool SetVertexColorViewModeMaterial_RedOnly(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x908, value); }
	inline bool SetGameSingletonClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x910, value); }
	inline bool SetVertexColorViewModeMaterialName_RedOnly(t_structHelper inst, FString value) { inst.WriteOffset(0x920, value); }
	inline bool SetShadedLevelColorationUnlitMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x930, value); }
	inline bool SetDeferredCommands(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x938, value); }
	inline bool bPauseOnLossOfFocus()
	{
		return boolField960& 0x1;
	}
	inline bool SetbPauseOnLossOfFocus(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x960, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxParticleResize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x964, value); }
	inline bool SetDefaultBokehTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0x968, value); }
	inline bool SetAssetManagerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0x978, value); }
	inline bool SetNetDriverDefinitions(t_structHelper inst, TArray<struct FNetDriverDefinition> value) { inst.WriteOffset(0xB60, value); }
	inline bool SetServerActors(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xB70, value); }
	inline bool SetRuntimeServerActors(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0xB80, value); }
	inline bool bStartedLoadMapMovie()
	{
		return boolFieldB90& 0x1;
	}
	inline bool SetbStartedLoadMapMovie(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB90, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAvoidanceManagerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xB98, value); }
	inline bool SetLevelColorationUnlitMaterialName(t_structHelper inst, FString value) { inst.WriteOffset(0xBA8, value); }
	inline bool SetPhysicsCollisionHandlerClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xBB8, value); }
	inline bool SetNavigationSystemClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xBC8, value); }
	inline bool SetAssetManager(t_structHelper inst, ExternalPtr<struct UAssetManager> value) { inst.WriteOffset(0xBD0, value); }
	inline bool SetLevelScriptActorClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xBE0, value); }
	inline bool SetDefaultTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0xBF0, value); }
	inline bool bSubtitlesForcedOff()
	{
		return boolFieldBF8& 0x1;
	}
	inline bool SetbSubtitlesForcedOff(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xBF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetC_VolumeCollision(t_structHelper inst, FColor value) { inst.WriteOffset(0xBFC, value); }
	inline bool SetWireframeMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0xC00, value); }
	inline bool SetConstraintLimitMaterialZAxis(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0xC08, value); }
	inline bool SetConsoleClassName(t_structHelper inst, FStringClassReference value) { inst.WriteOffset(0xC10, value); }
	inline bool SetLevelScriptActorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xC20, value); }
	inline bool SetNetClientTicksPerSecond(t_structHelper inst, float value) { inst.WriteOffset(0xC28, value); }
	inline bool SetWeightMapPlaceholderTextureName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0xC30, value); }
	inline bool SetVertexColorViewModeMaterial_GreenOnly(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0xC40, value); }
	inline bool SetRemoveSurfaceMaterialName(t_structHelper inst, FStringAssetReference value) { inst.WriteOffset(0xC48, value); }
	inline bool SetActiveStructRedirects(t_structHelper inst, TArray<struct FStructRedirect> value) { inst.WriteOffset(0xC58, value); }
	inline bool SetStreamingDistanceFactor(t_structHelper inst, float value) { inst.WriteOffset(0xC68, value); }
	inline bool SetPlayOnConsoleSaveDir(t_structHelper inst, FString value) { inst.WriteOffset(0xC70, value); }
	inline bool SetRemoveSurfaceMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0xC80, value); }
	inline bool SetMaxLightMapDensity(t_structHelper inst, float value) { inst.WriteOffset(0xC88, value); }
	inline bool SetNextWorldContextHandle(t_structHelper inst, int32_t value) { inst.WriteOffset(0xCA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEngine = sizeof(UEngine); // 3440
    static_assert(sizeof(UEngine) == 0xD70, "Size of UEngine is not correct.");
	auto constexpr UEngine_TinyFont_Offset = offsetof(UEngine, TinyFont);
	static_assert(UEngine_TinyFont_Offset == 0x38, "UEngine::TinyFont offset is not 38");
	auto constexpr UEngine_TinyFontName_Offset = offsetof(UEngine, TinyFontName);
	static_assert(UEngine_TinyFontName_Offset == 0x40, "UEngine::TinyFontName offset is not 40");
	auto constexpr UEngine_SmallFont_Offset = offsetof(UEngine, SmallFont);
	static_assert(UEngine_SmallFont_Offset == 0x50, "UEngine::SmallFont offset is not 50");
	auto constexpr UEngine_SmallFontName_Offset = offsetof(UEngine, SmallFontName);
	static_assert(UEngine_SmallFontName_Offset == 0x58, "UEngine::SmallFontName offset is not 58");
	auto constexpr UEngine_MediumFont_Offset = offsetof(UEngine, MediumFont);
	static_assert(UEngine_MediumFont_Offset == 0x68, "UEngine::MediumFont offset is not 68");
	auto constexpr UEngine_MediumFontName_Offset = offsetof(UEngine, MediumFontName);
	static_assert(UEngine_MediumFontName_Offset == 0x70, "UEngine::MediumFontName offset is not 70");
	auto constexpr UEngine_LargeFont_Offset = offsetof(UEngine, LargeFont);
	static_assert(UEngine_LargeFont_Offset == 0x80, "UEngine::LargeFont offset is not 80");
	auto constexpr UEngine_LargeFontName_Offset = offsetof(UEngine, LargeFontName);
	static_assert(UEngine_LargeFontName_Offset == 0x88, "UEngine::LargeFontName offset is not 88");
	auto constexpr UEngine_SubtitleFont_Offset = offsetof(UEngine, SubtitleFont);
	static_assert(UEngine_SubtitleFont_Offset == 0x98, "UEngine::SubtitleFont offset is not 98");
	auto constexpr UEngine_SubtitleFontName_Offset = offsetof(UEngine, SubtitleFontName);
	static_assert(UEngine_SubtitleFontName_Offset == 0xa0, "UEngine::SubtitleFontName offset is not a0");
	auto constexpr UEngine_AdditionalFonts_Offset = offsetof(UEngine, AdditionalFonts);
	static_assert(UEngine_AdditionalFonts_Offset == 0xb0, "UEngine::AdditionalFonts offset is not b0");
	auto constexpr UEngine_DefaultPhysMaterial_Offset = offsetof(UEngine, DefaultPhysMaterial);
	static_assert(UEngine_DefaultPhysMaterial_Offset == 0xc0, "UEngine::DefaultPhysMaterial offset is not c0");
	auto constexpr UEngine_AdditionalFontNames_Offset = offsetof(UEngine, AdditionalFontNames);
	static_assert(UEngine_AdditionalFontNames_Offset == 0xc8, "UEngine::AdditionalFontNames offset is not c8");
	auto constexpr UEngine_ActiveGameNameRedirects_Offset = offsetof(UEngine, ActiveGameNameRedirects);
	static_assert(UEngine_ActiveGameNameRedirects_Offset == 0xd8, "UEngine::ActiveGameNameRedirects offset is not d8");
	auto constexpr UEngine_PreIntegratedSkinBRDFTexture_Offset = offsetof(UEngine, PreIntegratedSkinBRDFTexture);
	static_assert(UEngine_PreIntegratedSkinBRDFTexture_Offset == 0xe8, "UEngine::PreIntegratedSkinBRDFTexture offset is not e8");
	auto constexpr UEngine_DefaultBlueprintBaseClassName_Offset = offsetof(UEngine, DefaultBlueprintBaseClassName);
	static_assert(UEngine_DefaultBlueprintBaseClassName_Offset == 0xf0, "UEngine::DefaultBlueprintBaseClassName offset is not f0");
	auto constexpr UEngine_DefaultBSPVertexTextureName_Offset = offsetof(UEngine, DefaultBSPVertexTextureName);
	static_assert(UEngine_DefaultBSPVertexTextureName_Offset == 0x100, "UEngine::DefaultBSPVertexTextureName offset is not 100");
	auto constexpr UEngine_VertexColorViewModeMaterialName_BlueOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterialName_BlueOnly);
	static_assert(UEngine_VertexColorViewModeMaterialName_BlueOnly_Offset == 0x110, "UEngine::VertexColorViewModeMaterialName_BlueOnly offset is not 110");
	auto constexpr UEngine_GameUserSettings_Offset = offsetof(UEngine, GameUserSettings);
	static_assert(UEngine_GameUserSettings_Offset == 0x120, "UEngine::GameUserSettings offset is not 120");
	auto constexpr UEngine_ConstraintLimitMaterialY_Offset = offsetof(UEngine, ConstraintLimitMaterialY);
	static_assert(UEngine_ConstraintLimitMaterialY_Offset == 0x128, "UEngine::ConstraintLimitMaterialY offset is not 128");
	auto constexpr UEngine_ArrowMaterial_Offset = offsetof(UEngine, ArrowMaterial);
	static_assert(UEngine_ArrowMaterial_Offset == 0x130, "UEngine::ArrowMaterial offset is not 130");
	auto constexpr UEngine_LevelColorationLitMaterialName_Offset = offsetof(UEngine, LevelColorationLitMaterialName);
	static_assert(UEngine_LevelColorationLitMaterialName_Offset == 0x138, "UEngine::LevelColorationLitMaterialName offset is not 138");
	auto constexpr UEngine_QuadComplexityColors_Offset = offsetof(UEngine, QuadComplexityColors);
	static_assert(UEngine_QuadComplexityColors_Offset == 0x148, "UEngine::QuadComplexityColors offset is not 148");
	auto constexpr UEngine_DebugMeshMaterialName_Offset = offsetof(UEngine, DebugMeshMaterialName);
	static_assert(UEngine_DebugMeshMaterialName_Offset == 0x158, "UEngine::DebugMeshMaterialName offset is not 158");
	auto constexpr UEngine_PendingDroppedNotes_Offset = offsetof(UEngine, PendingDroppedNotes);
	static_assert(UEngine_PendingDroppedNotes_Offset == 0x168, "UEngine::PendingDroppedNotes offset is not 168");
	auto constexpr UEngine_RenderLightMapDensityColorScale_Offset = offsetof(UEngine, RenderLightMapDensityColorScale);
	static_assert(UEngine_RenderLightMapDensityColorScale_Offset == 0x178, "UEngine::RenderLightMapDensityColorScale offset is not 178");
	auto constexpr UEngine_MaxPixelShaderAdditiveComplexityCount_Offset = offsetof(UEngine, MaxPixelShaderAdditiveComplexityCount);
	static_assert(UEngine_MaxPixelShaderAdditiveComplexityCount_Offset == 0x17c, "UEngine::MaxPixelShaderAdditiveComplexityCount offset is not 17c");
	auto constexpr UEngine_TransitionType_Offset = offsetof(UEngine, TransitionType);
	static_assert(UEngine_TransitionType_Offset == 0x180, "UEngine::TransitionType offset is not 180");
	auto constexpr UEngine_boolField184_Offset = offsetof(UEngine, boolField184);
	static_assert(UEngine_boolField184_Offset == 0x184, "UEngine::boolField184 offset is not 184");
	auto constexpr UEngine_MiniFontTextureName_Offset = offsetof(UEngine, MiniFontTextureName);
	static_assert(UEngine_MiniFontTextureName_Offset == 0x188, "UEngine::MiniFontTextureName offset is not 188");
	auto constexpr UEngine_StreamingAccuracyColors_Offset = offsetof(UEngine, StreamingAccuracyColors);
	static_assert(UEngine_StreamingAccuracyColors_Offset == 0x198, "UEngine::StreamingAccuracyColors offset is not 198");
	auto constexpr UEngine_ConstraintLimitMaterialYAxis_Offset = offsetof(UEngine, ConstraintLimitMaterialYAxis);
	static_assert(UEngine_ConstraintLimitMaterialYAxis_Offset == 0x1a8, "UEngine::ConstraintLimitMaterialYAxis offset is not 1a8");
	auto constexpr UEngine_DefaultBloomKernelTexture_Offset = offsetof(UEngine, DefaultBloomKernelTexture);
	static_assert(UEngine_DefaultBloomKernelTexture_Offset == 0x1b0, "UEngine::DefaultBloomKernelTexture offset is not 1b0");
	auto constexpr UEngine_MinLightMapDensity_Offset = offsetof(UEngine, MinLightMapDensity);
	static_assert(UEngine_MinLightMapDensity_Offset == 0x1b8, "UEngine::MinLightMapDensity offset is not 1b8");
	auto constexpr UEngine_HighFrequencyNoiseTextureName_Offset = offsetof(UEngine, HighFrequencyNoiseTextureName);
	static_assert(UEngine_HighFrequencyNoiseTextureName_Offset == 0x1c0, "UEngine::HighFrequencyNoiseTextureName offset is not 1c0");
	auto constexpr UEngine_LightMapDensityTexture_Offset = offsetof(UEngine, LightMapDensityTexture);
	static_assert(UEngine_LightMapDensityTexture_Offset == 0x1d0, "UEngine::LightMapDensityTexture offset is not 1d0");
	auto constexpr UEngine_GameViewportClientClassName_Offset = offsetof(UEngine, GameViewportClientClassName);
	static_assert(UEngine_GameViewportClientClassName_Offset == 0x1d8, "UEngine::GameViewportClientClassName offset is not 1d8");
	auto constexpr UEngine_TransitionDescription_Offset = offsetof(UEngine, TransitionDescription);
	static_assert(UEngine_TransitionDescription_Offset == 0x1e8, "UEngine::TransitionDescription offset is not 1e8");
	auto constexpr UEngine_HLODColorationColors_Offset = offsetof(UEngine, HLODColorationColors);
	static_assert(UEngine_HLODColorationColors_Offset == 0x1f8, "UEngine::HLODColorationColors offset is not 1f8");
	auto constexpr UEngine_ConstraintLimitMaterialXAxis_Offset = offsetof(UEngine, ConstraintLimitMaterialXAxis);
	static_assert(UEngine_ConstraintLimitMaterialXAxis_Offset == 0x208, "UEngine::ConstraintLimitMaterialXAxis offset is not 208");
	auto constexpr UEngine_GameSingleton_Offset = offsetof(UEngine, GameSingleton);
	static_assert(UEngine_GameSingleton_Offset == 0x210, "UEngine::GameSingleton offset is not 210");
	auto constexpr UEngine_NearClipPlane_Offset = offsetof(UEngine, NearClipPlane);
	static_assert(UEngine_NearClipPlane_Offset == 0x218, "UEngine::NearClipPlane offset is not 218");
	auto constexpr UEngine_ConsoleClass_Offset = offsetof(UEngine, ConsoleClass);
	static_assert(UEngine_ConsoleClass_Offset == 0x220, "UEngine::ConsoleClass offset is not 220");
	auto constexpr UEngine_MeshLODRange_Offset = offsetof(UEngine, MeshLODRange);
	static_assert(UEngine_MeshLODRange_Offset == 0x228, "UEngine::MeshLODRange offset is not 228");
	auto constexpr UEngine_LocalPlayerClassName_Offset = offsetof(UEngine, LocalPlayerClassName);
	static_assert(UEngine_LocalPlayerClassName_Offset == 0x230, "UEngine::LocalPlayerClassName offset is not 230");
	auto constexpr UEngine_LightMapDensityVertexMappedColor_Offset = offsetof(UEngine, LightMapDensityVertexMappedColor);
	static_assert(UEngine_LightMapDensityVertexMappedColor_Offset == 0x240, "UEngine::LightMapDensityVertexMappedColor offset is not 240");
	auto constexpr UEngine_ShadedLevelColorationLitMaterial_Offset = offsetof(UEngine, ShadedLevelColorationLitMaterial);
	static_assert(UEngine_ShadedLevelColorationLitMaterial_Offset == 0x250, "UEngine::ShadedLevelColorationLitMaterial offset is not 250");
	auto constexpr UEngine_PrimitiveProbablyVisibleTime_Offset = offsetof(UEngine, PrimitiveProbablyVisibleTime);
	static_assert(UEngine_PrimitiveProbablyVisibleTime_Offset == 0x258, "UEngine::PrimitiveProbablyVisibleTime offset is not 258");
	auto constexpr UEngine_LightMapDensitySelectedColor_Offset = offsetof(UEngine, LightMapDensitySelectedColor);
	static_assert(UEngine_LightMapDensitySelectedColor_Offset == 0x25c, "UEngine::LightMapDensitySelectedColor offset is not 25c");
	auto constexpr UEngine_LocalPlayerClass_Offset = offsetof(UEngine, LocalPlayerClass);
	static_assert(UEngine_LocalPlayerClass_Offset == 0x270, "UEngine::LocalPlayerClass offset is not 270");
	auto constexpr UEngine_C_OrthoBackground_Offset = offsetof(UEngine, C_OrthoBackground);
	static_assert(UEngine_C_OrthoBackground_Offset == 0x278, "UEngine::C_OrthoBackground offset is not 278");
	auto constexpr UEngine_VertexColorViewModeMaterial_AlphaAsColor_Offset = offsetof(UEngine, VertexColorViewModeMaterial_AlphaAsColor);
	static_assert(UEngine_VertexColorViewModeMaterial_AlphaAsColor_Offset == 0x280, "UEngine::VertexColorViewModeMaterial_AlphaAsColor offset is not 280");
	auto constexpr UEngine_VertexColorViewModeMaterialName_ColorOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterialName_ColorOnly);
	static_assert(UEngine_VertexColorViewModeMaterialName_ColorOnly_Offset == 0x288, "UEngine::VertexColorViewModeMaterialName_ColorOnly offset is not 288");
	auto constexpr UEngine_ClientCycles_Offset = offsetof(UEngine, ClientCycles);
	static_assert(UEngine_ClientCycles_Offset == 0x298, "UEngine::ClientCycles offset is not 298");
	auto constexpr UEngine_GameViewportClientClass_Offset = offsetof(UEngine, GameViewportClientClass);
	static_assert(UEngine_GameViewportClientClass_Offset == 0x2a0, "UEngine::GameViewportClientClass offset is not 2a0");
	auto constexpr UEngine_WireframeMaterialName_Offset = offsetof(UEngine, WireframeMaterialName);
	static_assert(UEngine_WireframeMaterialName_Offset == 0x2a8, "UEngine::WireframeMaterialName offset is not 2a8");
	auto constexpr UEngine_VertexColorViewModeMaterialName_AlphaAsColor_Offset = offsetof(UEngine, VertexColorViewModeMaterialName_AlphaAsColor);
	static_assert(UEngine_VertexColorViewModeMaterialName_AlphaAsColor_Offset == 0x2b8, "UEngine::VertexColorViewModeMaterialName_AlphaAsColor offset is not 2b8");
	auto constexpr UEngine_HighFrequencyNoiseTexture_Offset = offsetof(UEngine, HighFrequencyNoiseTexture);
	static_assert(UEngine_HighFrequencyNoiseTexture_Offset == 0x2c8, "UEngine::HighFrequencyNoiseTexture offset is not 2c8");
	auto constexpr UEngine_PreviewShadowsIndicatorMaterialName_Offset = offsetof(UEngine, PreviewShadowsIndicatorMaterialName);
	static_assert(UEngine_PreviewShadowsIndicatorMaterialName_Offset == 0x2d0, "UEngine::PreviewShadowsIndicatorMaterialName offset is not 2d0");
	auto constexpr UEngine_LODColorationColors_Offset = offsetof(UEngine, LODColorationColors);
	static_assert(UEngine_LODColorationColors_Offset == 0x2e0, "UEngine::LODColorationColors offset is not 2e0");
	auto constexpr UEngine_LightingOnlyBrightness_Offset = offsetof(UEngine, LightingOnlyBrightness);
	static_assert(UEngine_LightingOnlyBrightness_Offset == 0x2f0, "UEngine::LightingOnlyBrightness offset is not 2f0");
	auto constexpr UEngine_C_WorldBox_Offset = offsetof(UEngine, C_WorldBox);
	static_assert(UEngine_C_WorldBox_Offset == 0x300, "UEngine::C_WorldBox offset is not 300");
	auto constexpr UEngine_GameViewport_Offset = offsetof(UEngine, GameViewport);
	static_assert(UEngine_GameViewport_Offset == 0x308, "UEngine::GameViewport offset is not 308");
	auto constexpr UEngine_GameUserSettingsClass_Offset = offsetof(UEngine, GameUserSettingsClass);
	static_assert(UEngine_GameUserSettingsClass_Offset == 0x310, "UEngine::GameUserSettingsClass offset is not 310");
	auto constexpr UEngine_ConstraintLimitMaterial_Offset = offsetof(UEngine, ConstraintLimitMaterial);
	static_assert(UEngine_ConstraintLimitMaterial_Offset == 0x318, "UEngine::ConstraintLimitMaterial offset is not 318");
	auto constexpr UEngine_LightingTexelDensityName_Offset = offsetof(UEngine, LightingTexelDensityName);
	static_assert(UEngine_LightingTexelDensityName_Offset == 0x320, "UEngine::LightingTexelDensityName offset is not 320");
	auto constexpr UEngine_LightingTexelDensityMaterial_Offset = offsetof(UEngine, LightingTexelDensityMaterial);
	static_assert(UEngine_LightingTexelDensityMaterial_Offset == 0x330, "UEngine::LightingTexelDensityMaterial offset is not 330");
	auto constexpr UEngine_VertexColorMaterial_Offset = offsetof(UEngine, VertexColorMaterial);
	static_assert(UEngine_VertexColorMaterial_Offset == 0x338, "UEngine::VertexColorMaterial offset is not 338");
	auto constexpr UEngine_CameraTranslationThreshold_Offset = offsetof(UEngine, CameraTranslationThreshold);
	static_assert(UEngine_CameraTranslationThreshold_Offset == 0x340, "UEngine::CameraTranslationThreshold offset is not 340");
	auto constexpr UEngine_VertexColorViewModeMaterialName_GreenOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterialName_GreenOnly);
	static_assert(UEngine_VertexColorViewModeMaterialName_GreenOnly_Offset == 0x348, "UEngine::VertexColorViewModeMaterialName_GreenOnly offset is not 348");
	auto constexpr UEngine_TickCycles_Offset = offsetof(UEngine, TickCycles);
	static_assert(UEngine_TickCycles_Offset == 0x358, "UEngine::TickCycles offset is not 358");
	auto constexpr UEngine_VertexColorViewModeMaterial_ColorOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterial_ColorOnly);
	static_assert(UEngine_VertexColorViewModeMaterial_ColorOnly_Offset == 0x360, "UEngine::VertexColorViewModeMaterial_ColorOnly offset is not 360");
	auto constexpr UEngine_AvoidanceManagerClass_Offset = offsetof(UEngine, AvoidanceManagerClass);
	static_assert(UEngine_AvoidanceManagerClass_Offset == 0x368, "UEngine::AvoidanceManagerClass offset is not 368");
	auto constexpr UEngine_StationaryLightOverlapColors_Offset = offsetof(UEngine, StationaryLightOverlapColors);
	static_assert(UEngine_StationaryLightOverlapColors_Offset == 0x370, "UEngine::StationaryLightOverlapColors offset is not 370");
	auto constexpr UEngine_C_WireBackground_Offset = offsetof(UEngine, C_WireBackground);
	static_assert(UEngine_C_WireBackground_Offset == 0x380, "UEngine::C_WireBackground offset is not 380");
	auto constexpr UEngine_DefaultBloomKernelTextureName_Offset = offsetof(UEngine, DefaultBloomKernelTextureName);
	static_assert(UEngine_DefaultBloomKernelTextureName_Offset == 0x388, "UEngine::DefaultBloomKernelTextureName offset is not 388");
	auto constexpr UEngine_C_BSPCollision_Offset = offsetof(UEngine, C_BSPCollision);
	static_assert(UEngine_C_BSPCollision_Offset == 0x398, "UEngine::C_BSPCollision offset is not 398");
	auto constexpr UEngine_boolField39C_Offset = offsetof(UEngine, boolField39C);
	static_assert(UEngine_boolField39C_Offset == 0x39c, "UEngine::boolField39C offset is not 39c");
	auto constexpr UEngine_TransitionGameMode_Offset = offsetof(UEngine, TransitionGameMode);
	static_assert(UEngine_TransitionGameMode_Offset == 0x3a0, "UEngine::TransitionGameMode offset is not 3a0");
	auto constexpr UEngine_ConstraintLimitMaterialPrismatic_Offset = offsetof(UEngine, ConstraintLimitMaterialPrismatic);
	static_assert(UEngine_ConstraintLimitMaterialPrismatic_Offset == 0x3b0, "UEngine::ConstraintLimitMaterialPrismatic offset is not 3b0");
	auto constexpr UEngine_MaxOcclusionPixelsFraction_Offset = offsetof(UEngine, MaxOcclusionPixelsFraction);
	static_assert(UEngine_MaxOcclusionPixelsFraction_Offset == 0x3c0, "UEngine::MaxOcclusionPixelsFraction offset is not 3c0");
	auto constexpr UEngine_ShaderComplexityColors_Offset = offsetof(UEngine, ShaderComplexityColors);
	static_assert(UEngine_ShaderComplexityColors_Offset == 0x3c8, "UEngine::ShaderComplexityColors offset is not 3c8");
	auto constexpr UEngine_StatColorMappings_Offset = offsetof(UEngine, StatColorMappings);
	static_assert(UEngine_StatColorMappings_Offset == 0x3d8, "UEngine::StatColorMappings offset is not 3d8");
	auto constexpr UEngine_C_ScaleBoxHi_Offset = offsetof(UEngine, C_ScaleBoxHi);
	static_assert(UEngine_C_ScaleBoxHi_Offset == 0x3e8, "UEngine::C_ScaleBoxHi offset is not 3e8");
	auto constexpr UEngine_C_BrushShape_Offset = offsetof(UEngine, C_BrushShape);
	static_assert(UEngine_C_BrushShape_Offset == 0x3ec, "UEngine::C_BrushShape offset is not 3ec");
	auto constexpr UEngine_MaximumLoopIterationCount_Offset = offsetof(UEngine, MaximumLoopIterationCount);
	static_assert(UEngine_MaximumLoopIterationCount_Offset == 0x3f0, "UEngine::MaximumLoopIterationCount offset is not 3f0");
	auto constexpr UEngine_DefaultBSPVertexTexture_Offset = offsetof(UEngine, DefaultBSPVertexTexture);
	static_assert(UEngine_DefaultBSPVertexTexture_Offset == 0x3f8, "UEngine::DefaultBSPVertexTexture offset is not 3f8");
	auto constexpr UEngine_PreIntegratedSkinBRDFTextureName_Offset = offsetof(UEngine, PreIntegratedSkinBRDFTextureName);
	static_assert(UEngine_PreIntegratedSkinBRDFTextureName_Offset == 0x400, "UEngine::PreIntegratedSkinBRDFTextureName offset is not 400");
	auto constexpr UEngine_C_BrushWire_Offset = offsetof(UEngine, C_BrushWire);
	static_assert(UEngine_C_BrushWire_Offset == 0x410, "UEngine::C_BrushWire offset is not 410");
	auto constexpr UEngine_C_SemiSolidWire_Offset = offsetof(UEngine, C_SemiSolidWire);
	static_assert(UEngine_C_SemiSolidWire_Offset == 0x414, "UEngine::C_SemiSolidWire offset is not 414");
	auto constexpr UEngine_DefaultBokehTexture_Offset = offsetof(UEngine, DefaultBokehTexture);
	static_assert(UEngine_DefaultBokehTexture_Offset == 0x418, "UEngine::DefaultBokehTexture offset is not 418");
	auto constexpr UEngine_ArrowMaterialName_Offset = offsetof(UEngine, ArrowMaterialName);
	static_assert(UEngine_ArrowMaterialName_Offset == 0x420, "UEngine::ArrowMaterialName offset is not 420");
	auto constexpr UEngine_AIControllerClassName_Offset = offsetof(UEngine, AIControllerClassName);
	static_assert(UEngine_AIControllerClassName_Offset == 0x430, "UEngine::AIControllerClassName offset is not 430");
	auto constexpr UEngine_WorldSettingsClass_Offset = offsetof(UEngine, WorldSettingsClass);
	static_assert(UEngine_WorldSettingsClass_Offset == 0x440, "UEngine::WorldSettingsClass offset is not 440");
	auto constexpr UEngine_LevelColorationUnlitMaterial_Offset = offsetof(UEngine, LevelColorationUnlitMaterial);
	static_assert(UEngine_LevelColorationUnlitMaterial_Offset == 0x448, "UEngine::LevelColorationUnlitMaterial offset is not 448");
	auto constexpr UEngine_InvalidLightmapSettingsMaterialName_Offset = offsetof(UEngine, InvalidLightmapSettingsMaterialName);
	static_assert(UEngine_InvalidLightmapSettingsMaterialName_Offset == 0x450, "UEngine::InvalidLightmapSettingsMaterialName offset is not 450");
	auto constexpr UEngine_DisplayGamma_Offset = offsetof(UEngine, DisplayGamma);
	static_assert(UEngine_DisplayGamma_Offset == 0x460, "UEngine::DisplayGamma offset is not 460");
	auto constexpr UEngine_WorldSettingsClassName_Offset = offsetof(UEngine, WorldSettingsClassName);
	static_assert(UEngine_WorldSettingsClassName_Offset == 0x468, "UEngine::WorldSettingsClassName offset is not 468");
	auto constexpr UEngine_boolField478_Offset = offsetof(UEngine, boolField478);
	static_assert(UEngine_boolField478_Offset == 0x478, "UEngine::boolField478 offset is not 478");
	auto constexpr UEngine_NumPawnsAllowedToBeSpawnedInAFrame_Offset = offsetof(UEngine, NumPawnsAllowedToBeSpawnedInAFrame);
	static_assert(UEngine_NumPawnsAllowedToBeSpawnedInAFrame_Offset == 0x47c, "UEngine::NumPawnsAllowedToBeSpawnedInAFrame offset is not 47c");
	auto constexpr UEngine_boolField480_Offset = offsetof(UEngine, boolField480);
	static_assert(UEngine_boolField480_Offset == 0x480, "UEngine::boolField480 offset is not 480");
	auto constexpr UEngine_DefaultPhysMaterialName_Offset = offsetof(UEngine, DefaultPhysMaterialName);
	static_assert(UEngine_DefaultPhysMaterialName_Offset == 0x488, "UEngine::DefaultPhysMaterialName offset is not 488");
	auto constexpr UEngine_DebugMeshMaterial_Offset = offsetof(UEngine, DebugMeshMaterial);
	static_assert(UEngine_DebugMeshMaterial_Offset == 0x498, "UEngine::DebugMeshMaterial offset is not 498");
	auto constexpr UEngine_ActiveClassRedirects_Offset = offsetof(UEngine, ActiveClassRedirects);
	static_assert(UEngine_ActiveClassRedirects_Offset == 0x4a0, "UEngine::ActiveClassRedirects offset is not 4a0");
	auto constexpr UEngine_WeightMapPlaceholderTexture_Offset = offsetof(UEngine, WeightMapPlaceholderTexture);
	static_assert(UEngine_WeightMapPlaceholderTexture_Offset == 0x4b0, "UEngine::WeightMapPlaceholderTexture offset is not 4b0");
	auto constexpr UEngine_LevelColorationLitMaterial_Offset = offsetof(UEngine, LevelColorationLitMaterial);
	static_assert(UEngine_LevelColorationLitMaterial_Offset == 0x4b8, "UEngine::LevelColorationLitMaterial offset is not 4b8");
	auto constexpr UEngine_ShadedLevelColorationUnlitMaterialName_Offset = offsetof(UEngine, ShadedLevelColorationUnlitMaterialName);
	static_assert(UEngine_ShadedLevelColorationUnlitMaterialName_Offset == 0x4c0, "UEngine::ShadedLevelColorationUnlitMaterialName offset is not 4c0");
	auto constexpr UEngine_boolField4D0_Offset = offsetof(UEngine, boolField4D0);
	static_assert(UEngine_boolField4D0_Offset == 0x4d0, "UEngine::boolField4D0 offset is not 4d0");
	auto constexpr UEngine_LightComplexityColors_Offset = offsetof(UEngine, LightComplexityColors);
	static_assert(UEngine_LightComplexityColors_Offset == 0x4d8, "UEngine::LightComplexityColors offset is not 4d8");
	auto constexpr UEngine_GameUserSettingsClassName_Offset = offsetof(UEngine, GameUserSettingsClassName);
	static_assert(UEngine_GameUserSettingsClassName_Offset == 0x4e8, "UEngine::GameUserSettingsClassName offset is not 4e8");
	auto constexpr UEngine_ConstraintLimitMaterialZ_Offset = offsetof(UEngine, ConstraintLimitMaterialZ);
	static_assert(UEngine_ConstraintLimitMaterialZ_Offset == 0x4f8, "UEngine::ConstraintLimitMaterialZ offset is not 4f8");
	auto constexpr UEngine_boolField500_Offset = offsetof(UEngine, boolField500);
	static_assert(UEngine_boolField500_Offset == 0x500, "UEngine::boolField500 offset is not 500");
	auto constexpr UEngine_IdealLightMapDensity_Offset = offsetof(UEngine, IdealLightMapDensity);
	static_assert(UEngine_IdealLightMapDensity_Offset == 0x504, "UEngine::IdealLightMapDensity offset is not 504");
	auto constexpr UEngine_MiniFontTexture_Offset = offsetof(UEngine, MiniFontTexture);
	static_assert(UEngine_MiniFontTexture_Offset == 0x508, "UEngine::MiniFontTexture offset is not 508");
	auto constexpr UEngine_boolField510_Offset = offsetof(UEngine, boolField510);
	static_assert(UEngine_boolField510_Offset == 0x510, "UEngine::boolField510 offset is not 510");
	auto constexpr UEngine_CameraRotationThreshold_Offset = offsetof(UEngine, CameraRotationThreshold);
	static_assert(UEngine_CameraRotationThreshold_Offset == 0x514, "UEngine::CameraRotationThreshold offset is not 514");
	auto constexpr UEngine_PhysicsCollisionHandlerClass_Offset = offsetof(UEngine, PhysicsCollisionHandlerClass);
	static_assert(UEngine_PhysicsCollisionHandlerClass_Offset == 0x518, "UEngine::PhysicsCollisionHandlerClass offset is not 518");
	auto constexpr UEngine_MinDesiredFrameRate_Offset = offsetof(UEngine, MinDesiredFrameRate);
	static_assert(UEngine_MinDesiredFrameRate_Offset == 0x520, "UEngine::MinDesiredFrameRate offset is not 520");
	auto constexpr UEngine_C_SubtractWire_Offset = offsetof(UEngine, C_SubtractWire);
	static_assert(UEngine_C_SubtractWire_Offset == 0x524, "UEngine::C_SubtractWire offset is not 524");
	auto constexpr UEngine_C_Volume_Offset = offsetof(UEngine, C_Volume);
	static_assert(UEngine_C_Volume_Offset == 0x528, "UEngine::C_Volume offset is not 528");
	auto constexpr UEngine_ShadedLevelColorationLitMaterialName_Offset = offsetof(UEngine, ShadedLevelColorationLitMaterialName);
	static_assert(UEngine_ShadedLevelColorationLitMaterialName_Offset == 0x530, "UEngine::ShadedLevelColorationLitMaterialName offset is not 530");
	auto constexpr UEngine_SmoothedFrameRateRange_Offset = offsetof(UEngine, SmoothedFrameRateRange);
	static_assert(UEngine_SmoothedFrameRateRange_Offset == 0x540, "UEngine::SmoothedFrameRateRange offset is not 540");
	auto constexpr UEngine_ActivePluginRedirects_Offset = offsetof(UEngine, ActivePluginRedirects);
	static_assert(UEngine_ActivePluginRedirects_Offset == 0x550, "UEngine::ActivePluginRedirects offset is not 550");
	auto constexpr UEngine_DefaultTextureName_Offset = offsetof(UEngine, DefaultTextureName);
	static_assert(UEngine_DefaultTextureName_Offset == 0x560, "UEngine::DefaultTextureName offset is not 560");
	auto constexpr UEngine_InvalidLightmapSettingsMaterial_Offset = offsetof(UEngine, InvalidLightmapSettingsMaterial);
	static_assert(UEngine_InvalidLightmapSettingsMaterial_Offset == 0x570, "UEngine::InvalidLightmapSettingsMaterial offset is not 570");
	auto constexpr UEngine_VertexColorMaterialName_Offset = offsetof(UEngine, VertexColorMaterialName);
	static_assert(UEngine_VertexColorMaterialName_Offset == 0x578, "UEngine::VertexColorMaterialName offset is not 578");
	auto constexpr UEngine_MaxParticleResizeWarn_Offset = offsetof(UEngine, MaxParticleResizeWarn);
	static_assert(UEngine_MaxParticleResizeWarn_Offset == 0x588, "UEngine::MaxParticleResizeWarn offset is not 588");
	auto constexpr UEngine_DefaultDiffuseTexture_Offset = offsetof(UEngine, DefaultDiffuseTexture);
	static_assert(UEngine_DefaultDiffuseTexture_Offset == 0x590, "UEngine::DefaultDiffuseTexture offset is not 590");
	auto constexpr UEngine_MaxES2PixelShaderAdditiveComplexityCount_Offset = offsetof(UEngine, MaxES2PixelShaderAdditiveComplexityCount);
	static_assert(UEngine_MaxES2PixelShaderAdditiveComplexityCount_Offset == 0x5e8, "UEngine::MaxES2PixelShaderAdditiveComplexityCount offset is not 5e8");
	auto constexpr UEngine_RenderLightMapDensityGrayscaleScale_Offset = offsetof(UEngine, RenderLightMapDensityGrayscaleScale);
	static_assert(UEngine_RenderLightMapDensityGrayscaleScale_Offset == 0x5ec, "UEngine::RenderLightMapDensityGrayscaleScale offset is not 5ec");
	auto constexpr UEngine_C_NonSolidWire_Offset = offsetof(UEngine, C_NonSolidWire);
	static_assert(UEngine_C_NonSolidWire_Offset == 0x5f0, "UEngine::C_NonSolidWire offset is not 5f0");
	auto constexpr UEngine_GameCycles_Offset = offsetof(UEngine, GameCycles);
	static_assert(UEngine_GameCycles_Offset == 0x5f4, "UEngine::GameCycles offset is not 5f4");
	auto constexpr UEngine_LightMapDensityTextureName_Offset = offsetof(UEngine, LightMapDensityTextureName);
	static_assert(UEngine_LightMapDensityTextureName_Offset == 0x5f8, "UEngine::LightMapDensityTextureName offset is not 5f8");
	auto constexpr UEngine_ConstraintLimitMaterialX_Offset = offsetof(UEngine, ConstraintLimitMaterialX);
	static_assert(UEngine_ConstraintLimitMaterialX_Offset == 0x608, "UEngine::ConstraintLimitMaterialX offset is not 608");
	auto constexpr UEngine_NavigationSystemClassName_Offset = offsetof(UEngine, NavigationSystemClassName);
	static_assert(UEngine_NavigationSystemClassName_Offset == 0x610, "UEngine::NavigationSystemClassName offset is not 610");
	auto constexpr UEngine_PreviewShadowsIndicatorMaterial_Offset = offsetof(UEngine, PreviewShadowsIndicatorMaterial);
	static_assert(UEngine_PreviewShadowsIndicatorMaterial_Offset == 0x620, "UEngine::PreviewShadowsIndicatorMaterial offset is not 620");
	auto constexpr UEngine_PhysicErrorCorrection_Offset = offsetof(UEngine, PhysicErrorCorrection);
	static_assert(UEngine_PhysicErrorCorrection_Offset == 0x628, "UEngine::PhysicErrorCorrection offset is not 628");
	auto constexpr UEngine_FixedFrameRate_Offset = offsetof(UEngine, FixedFrameRate);
	static_assert(UEngine_FixedFrameRate_Offset == 0x644, "UEngine::FixedFrameRate offset is not 644");
	auto constexpr UEngine_DefaultDiffuseTextureName_Offset = offsetof(UEngine, DefaultDiffuseTextureName);
	static_assert(UEngine_DefaultDiffuseTextureName_Offset == 0x648, "UEngine::DefaultDiffuseTextureName offset is not 648");
	auto constexpr UEngine_DefaultSelectedMaterialColor_Offset = offsetof(UEngine, DefaultSelectedMaterialColor);
	static_assert(UEngine_DefaultSelectedMaterialColor_Offset == 0x658, "UEngine::DefaultSelectedMaterialColor offset is not 658");
	auto constexpr UEngine_SelectedMaterialColor_Offset = offsetof(UEngine, SelectedMaterialColor);
	static_assert(UEngine_SelectedMaterialColor_Offset == 0x668, "UEngine::SelectedMaterialColor offset is not 668");
	auto constexpr UEngine_SelectionOutlineColor_Offset = offsetof(UEngine, SelectionOutlineColor);
	static_assert(UEngine_SelectionOutlineColor_Offset == 0x678, "UEngine::SelectionOutlineColor offset is not 678");
	auto constexpr UEngine_SubduedSelectionOutlineColor_Offset = offsetof(UEngine, SubduedSelectionOutlineColor);
	static_assert(UEngine_SubduedSelectionOutlineColor_Offset == 0x688, "UEngine::SubduedSelectionOutlineColor offset is not 688");
	auto constexpr UEngine_SelectedMaterialColorOverride_Offset = offsetof(UEngine, SelectedMaterialColorOverride);
	static_assert(UEngine_SelectedMaterialColorOverride_Offset == 0x698, "UEngine::SelectedMaterialColorOverride offset is not 698");
	auto constexpr UEngine_boolField6A8_Offset = offsetof(UEngine, boolField6A8);
	static_assert(UEngine_boolField6A8_Offset == 0x6a8, "UEngine::boolField6A8 offset is not 6a8");
	auto constexpr UEngine_boolField6AC_Offset = offsetof(UEngine, boolField6AC);
	static_assert(UEngine_boolField6AC_Offset == 0x6ac, "UEngine::boolField6AC offset is not 6ac");
	auto constexpr UEngine_bEnableVisualLogRecordingOnStart_Offset = offsetof(UEngine, bEnableVisualLogRecordingOnStart);
	static_assert(UEngine_bEnableVisualLogRecordingOnStart_Offset == 0x6b0, "UEngine::bEnableVisualLogRecordingOnStart offset is not 6b0");
	auto constexpr UEngine_ScreenSaverInhibitorSemaphore_Offset = offsetof(UEngine, ScreenSaverInhibitorSemaphore);
	static_assert(UEngine_ScreenSaverInhibitorSemaphore_Offset == 0x6b8, "UEngine::ScreenSaverInhibitorSemaphore offset is not 6b8");
	auto constexpr UEngine_boolField6BC_Offset = offsetof(UEngine, boolField6BC);
	static_assert(UEngine_boolField6BC_Offset == 0x6bc, "UEngine::boolField6BC offset is not 6bc");
	auto constexpr UEngine_ParticleEventManagerClassPath_Offset = offsetof(UEngine, ParticleEventManagerClassPath);
	static_assert(UEngine_ParticleEventManagerClassPath_Offset == 0x6c0, "UEngine::ParticleEventManagerClassPath offset is not 6c0");
	auto constexpr UEngine_SelectionHighlightIntensity_Offset = offsetof(UEngine, SelectionHighlightIntensity);
	static_assert(UEngine_SelectionHighlightIntensity_Offset == 0x6e0, "UEngine::SelectionHighlightIntensity offset is not 6e0");
	auto constexpr UEngine_SelectionMeshSectionHighlightIntensity_Offset = offsetof(UEngine, SelectionMeshSectionHighlightIntensity);
	static_assert(UEngine_SelectionMeshSectionHighlightIntensity_Offset == 0x6e4, "UEngine::SelectionMeshSectionHighlightIntensity offset is not 6e4");
	auto constexpr UEngine_BSPSelectionHighlightIntensity_Offset = offsetof(UEngine, BSPSelectionHighlightIntensity);
	static_assert(UEngine_BSPSelectionHighlightIntensity_Offset == 0x6e8, "UEngine::BSPSelectionHighlightIntensity offset is not 6e8");
	auto constexpr UEngine_HoverHighlightIntensity_Offset = offsetof(UEngine, HoverHighlightIntensity);
	static_assert(UEngine_HoverHighlightIntensity_Offset == 0x6ec, "UEngine::HoverHighlightIntensity offset is not 6ec");
	auto constexpr UEngine_SelectionHighlightIntensityBillboards_Offset = offsetof(UEngine, SelectionHighlightIntensityBillboards);
	static_assert(UEngine_SelectionHighlightIntensityBillboards_Offset == 0x6f0, "UEngine::SelectionHighlightIntensityBillboards offset is not 6f0");
	auto constexpr UEngine_C_AddWire_Offset = offsetof(UEngine, C_AddWire);
	static_assert(UEngine_C_AddWire_Offset == 0x8f8, "UEngine::C_AddWire offset is not 8f8");
	auto constexpr UEngine_VertexColorViewModeMaterial_BlueOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterial_BlueOnly);
	static_assert(UEngine_VertexColorViewModeMaterial_BlueOnly_Offset == 0x900, "UEngine::VertexColorViewModeMaterial_BlueOnly offset is not 900");
	auto constexpr UEngine_VertexColorViewModeMaterial_RedOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterial_RedOnly);
	static_assert(UEngine_VertexColorViewModeMaterial_RedOnly_Offset == 0x908, "UEngine::VertexColorViewModeMaterial_RedOnly offset is not 908");
	auto constexpr UEngine_GameSingletonClassName_Offset = offsetof(UEngine, GameSingletonClassName);
	static_assert(UEngine_GameSingletonClassName_Offset == 0x910, "UEngine::GameSingletonClassName offset is not 910");
	auto constexpr UEngine_VertexColorViewModeMaterialName_RedOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterialName_RedOnly);
	static_assert(UEngine_VertexColorViewModeMaterialName_RedOnly_Offset == 0x920, "UEngine::VertexColorViewModeMaterialName_RedOnly offset is not 920");
	auto constexpr UEngine_ShadedLevelColorationUnlitMaterial_Offset = offsetof(UEngine, ShadedLevelColorationUnlitMaterial);
	static_assert(UEngine_ShadedLevelColorationUnlitMaterial_Offset == 0x930, "UEngine::ShadedLevelColorationUnlitMaterial offset is not 930");
	auto constexpr UEngine_DeferredCommands_Offset = offsetof(UEngine, DeferredCommands);
	static_assert(UEngine_DeferredCommands_Offset == 0x938, "UEngine::DeferredCommands offset is not 938");
	auto constexpr UEngine_boolField960_Offset = offsetof(UEngine, boolField960);
	static_assert(UEngine_boolField960_Offset == 0x960, "UEngine::boolField960 offset is not 960");
	auto constexpr UEngine_MaxParticleResize_Offset = offsetof(UEngine, MaxParticleResize);
	static_assert(UEngine_MaxParticleResize_Offset == 0x964, "UEngine::MaxParticleResize offset is not 964");
	auto constexpr UEngine_DefaultBokehTextureName_Offset = offsetof(UEngine, DefaultBokehTextureName);
	static_assert(UEngine_DefaultBokehTextureName_Offset == 0x968, "UEngine::DefaultBokehTextureName offset is not 968");
	auto constexpr UEngine_AssetManagerClassName_Offset = offsetof(UEngine, AssetManagerClassName);
	static_assert(UEngine_AssetManagerClassName_Offset == 0x978, "UEngine::AssetManagerClassName offset is not 978");
	auto constexpr UEngine_NetDriverDefinitions_Offset = offsetof(UEngine, NetDriverDefinitions);
	static_assert(UEngine_NetDriverDefinitions_Offset == 0xb60, "UEngine::NetDriverDefinitions offset is not b60");
	auto constexpr UEngine_ServerActors_Offset = offsetof(UEngine, ServerActors);
	static_assert(UEngine_ServerActors_Offset == 0xb70, "UEngine::ServerActors offset is not b70");
	auto constexpr UEngine_RuntimeServerActors_Offset = offsetof(UEngine, RuntimeServerActors);
	static_assert(UEngine_RuntimeServerActors_Offset == 0xb80, "UEngine::RuntimeServerActors offset is not b80");
	auto constexpr UEngine_boolFieldB90_Offset = offsetof(UEngine, boolFieldB90);
	static_assert(UEngine_boolFieldB90_Offset == 0xb90, "UEngine::boolFieldB90 offset is not b90");
	auto constexpr UEngine_AvoidanceManagerClassName_Offset = offsetof(UEngine, AvoidanceManagerClassName);
	static_assert(UEngine_AvoidanceManagerClassName_Offset == 0xb98, "UEngine::AvoidanceManagerClassName offset is not b98");
	auto constexpr UEngine_LevelColorationUnlitMaterialName_Offset = offsetof(UEngine, LevelColorationUnlitMaterialName);
	static_assert(UEngine_LevelColorationUnlitMaterialName_Offset == 0xba8, "UEngine::LevelColorationUnlitMaterialName offset is not ba8");
	auto constexpr UEngine_PhysicsCollisionHandlerClassName_Offset = offsetof(UEngine, PhysicsCollisionHandlerClassName);
	static_assert(UEngine_PhysicsCollisionHandlerClassName_Offset == 0xbb8, "UEngine::PhysicsCollisionHandlerClassName offset is not bb8");
	auto constexpr UEngine_NavigationSystemClass_Offset = offsetof(UEngine, NavigationSystemClass);
	static_assert(UEngine_NavigationSystemClass_Offset == 0xbc8, "UEngine::NavigationSystemClass offset is not bc8");
	auto constexpr UEngine_AssetManager_Offset = offsetof(UEngine, AssetManager);
	static_assert(UEngine_AssetManager_Offset == 0xbd0, "UEngine::AssetManager offset is not bd0");
	auto constexpr UEngine_LevelScriptActorClassName_Offset = offsetof(UEngine, LevelScriptActorClassName);
	static_assert(UEngine_LevelScriptActorClassName_Offset == 0xbe0, "UEngine::LevelScriptActorClassName offset is not be0");
	auto constexpr UEngine_DefaultTexture_Offset = offsetof(UEngine, DefaultTexture);
	static_assert(UEngine_DefaultTexture_Offset == 0xbf0, "UEngine::DefaultTexture offset is not bf0");
	auto constexpr UEngine_boolFieldBF8_Offset = offsetof(UEngine, boolFieldBF8);
	static_assert(UEngine_boolFieldBF8_Offset == 0xbf8, "UEngine::boolFieldBF8 offset is not bf8");
	auto constexpr UEngine_C_VolumeCollision_Offset = offsetof(UEngine, C_VolumeCollision);
	static_assert(UEngine_C_VolumeCollision_Offset == 0xbfc, "UEngine::C_VolumeCollision offset is not bfc");
	auto constexpr UEngine_WireframeMaterial_Offset = offsetof(UEngine, WireframeMaterial);
	static_assert(UEngine_WireframeMaterial_Offset == 0xc00, "UEngine::WireframeMaterial offset is not c00");
	auto constexpr UEngine_ConstraintLimitMaterialZAxis_Offset = offsetof(UEngine, ConstraintLimitMaterialZAxis);
	static_assert(UEngine_ConstraintLimitMaterialZAxis_Offset == 0xc08, "UEngine::ConstraintLimitMaterialZAxis offset is not c08");
	auto constexpr UEngine_ConsoleClassName_Offset = offsetof(UEngine, ConsoleClassName);
	static_assert(UEngine_ConsoleClassName_Offset == 0xc10, "UEngine::ConsoleClassName offset is not c10");
	auto constexpr UEngine_LevelScriptActorClass_Offset = offsetof(UEngine, LevelScriptActorClass);
	static_assert(UEngine_LevelScriptActorClass_Offset == 0xc20, "UEngine::LevelScriptActorClass offset is not c20");
	auto constexpr UEngine_NetClientTicksPerSecond_Offset = offsetof(UEngine, NetClientTicksPerSecond);
	static_assert(UEngine_NetClientTicksPerSecond_Offset == 0xc28, "UEngine::NetClientTicksPerSecond offset is not c28");
	auto constexpr UEngine_WeightMapPlaceholderTextureName_Offset = offsetof(UEngine, WeightMapPlaceholderTextureName);
	static_assert(UEngine_WeightMapPlaceholderTextureName_Offset == 0xc30, "UEngine::WeightMapPlaceholderTextureName offset is not c30");
	auto constexpr UEngine_VertexColorViewModeMaterial_GreenOnly_Offset = offsetof(UEngine, VertexColorViewModeMaterial_GreenOnly);
	static_assert(UEngine_VertexColorViewModeMaterial_GreenOnly_Offset == 0xc40, "UEngine::VertexColorViewModeMaterial_GreenOnly offset is not c40");
	auto constexpr UEngine_RemoveSurfaceMaterialName_Offset = offsetof(UEngine, RemoveSurfaceMaterialName);
	static_assert(UEngine_RemoveSurfaceMaterialName_Offset == 0xc48, "UEngine::RemoveSurfaceMaterialName offset is not c48");
	auto constexpr UEngine_ActiveStructRedirects_Offset = offsetof(UEngine, ActiveStructRedirects);
	static_assert(UEngine_ActiveStructRedirects_Offset == 0xc58, "UEngine::ActiveStructRedirects offset is not c58");
	auto constexpr UEngine_StreamingDistanceFactor_Offset = offsetof(UEngine, StreamingDistanceFactor);
	static_assert(UEngine_StreamingDistanceFactor_Offset == 0xc68, "UEngine::StreamingDistanceFactor offset is not c68");
	auto constexpr UEngine_PlayOnConsoleSaveDir_Offset = offsetof(UEngine, PlayOnConsoleSaveDir);
	static_assert(UEngine_PlayOnConsoleSaveDir_Offset == 0xc70, "UEngine::PlayOnConsoleSaveDir offset is not c70");
	auto constexpr UEngine_RemoveSurfaceMaterial_Offset = offsetof(UEngine, RemoveSurfaceMaterial);
	static_assert(UEngine_RemoveSurfaceMaterial_Offset == 0xc80, "UEngine::RemoveSurfaceMaterial offset is not c80");
	auto constexpr UEngine_MaxLightMapDensity_Offset = offsetof(UEngine, MaxLightMapDensity);
	static_assert(UEngine_MaxLightMapDensity_Offset == 0xc88, "UEngine::MaxLightMapDensity offset is not c88");
	auto constexpr UEngine_NextWorldContextHandle_Offset = offsetof(UEngine, NextWorldContextHandle);
	static_assert(UEngine_NextWorldContextHandle_Offset == 0xca0, "UEngine::NextWorldContextHandle offset is not ca0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
