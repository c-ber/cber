#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_CanvasPanel.hpp"
#include "FColorBlindColorSet.hpp"
#include "FUmgWidgetBinder_SizeBox.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapGridWidget // Size: 0x8B0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UMapGridWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1537); // id32("Class TslGame.MapGridWidget")
		return ptr;
	}
	FUmgWidgetBinder_Image MapImageBinder; /* Ofs: 0x300 Size: 0x28 - StructProperty TslGame.MapGridWidget.MapImageBinder */
	FUmgWidgetBinder_CanvasPanel AircraftRouteLayerBinder; /* Ofs: 0x328 Size: 0x20 - StructProperty TslGame.MapGridWidget.AircraftRouteLayerBinder */
	FUmgWidgetBinder_CanvasPanel MyMarkerLayerBinder; /* Ofs: 0x348 Size: 0x20 - StructProperty TslGame.MapGridWidget.MyMarkerLayerBinder */
	FUmgWidgetBinder_CanvasPanel TeamMarkerLayerBinder; /* Ofs: 0x368 Size: 0x20 - StructProperty TslGame.MapGridWidget.TeamMarkerLayerBinder */
	ExternalPtr<struct UClass> MapMarkerClass; /* Ofs: 0x388 Size: 0x8 - ClassProperty TslGame.MapGridWidget.MapMarkerClass */
	FUmgWidgetBinder_Image LastCircleMarkImageBinder; /* Ofs: 0x390 Size: 0x28 - StructProperty TslGame.MapGridWidget.LastCircleMarkImageBinder */
	FUmgWidgetBinder_CanvasPanel MyMapIconLayerBinder; /* Ofs: 0x3B8 Size: 0x20 - StructProperty TslGame.MapGridWidget.MyMapIconLayerBinder */
	FUmgWidgetBinder_CanvasPanel OtherMapIconLayerBinder; /* Ofs: 0x3D8 Size: 0x20 - StructProperty TslGame.MapGridWidget.OtherMapIconLayerBinder */
	FUmgWidgetBinder_CanvasPanel CarePackageItemIconLayerBinder; /* Ofs: 0x3F8 Size: 0x20 - StructProperty TslGame.MapGridWidget.CarePackageItemIconLayerBinder */
	ExternalPtr<struct UClass> MapCharacterIconClass; /* Ofs: 0x418 Size: 0x8 - ClassProperty TslGame.MapGridWidget.MapCharacterIconClass */
	ExternalPtr<struct UClass> MapCarePackageItemIconClass; /* Ofs: 0x420 Size: 0x8 - ClassProperty TslGame.MapGridWidget.MapCarePackageItemIconClass */
	ExternalPtr<struct UClass> ObserverPlayerIconHitEffectClass; /* Ofs: 0x428 Size: 0x8 - ClassProperty TslGame.MapGridWidget.ObserverPlayerIconHitEffectClass */
	uint8_t boolField430;
	uint8_t UnknownData431[0x3];
	float AircraftRouteArrowHeadDesiredSizeRatio; /* Ofs: 0x434 Size: 0x4 - FloatProperty TslGame.MapGridWidget.AircraftRouteArrowHeadDesiredSizeRatio */
	float AircraftRouteArrowTailDesiredSizeRatio; /* Ofs: 0x438 Size: 0x4 - FloatProperty TslGame.MapGridWidget.AircraftRouteArrowTailDesiredSizeRatio */
	float AircraftIconDesiredSizeRatio; /* Ofs: 0x43C Size: 0x4 - FloatProperty TslGame.MapGridWidget.AircraftIconDesiredSizeRatio */
	ExternalPtr<struct UMaterialInstance> ImageRotatorMaterial; /* Ofs: 0x440 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.ImageRotatorMaterial */
	ExternalPtr<struct UMaterialInstance> AircraftRouteArrowBodyMaterial; /* Ofs: 0x448 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftRouteArrowBodyMaterial */
	ExternalPtr<struct UMaterialInstance> CombatAircraftRouteArrowBodyMaterial; /* Ofs: 0x450 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.CombatAircraftRouteArrowBodyMaterial */
	ExternalPtr<struct UTexture> AircraftRouteArrowHeadTexture; /* Ofs: 0x458 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftRouteArrowHeadTexture */
	ExternalPtr<struct UTexture> AircraftRouteArrowTailTexture; /* Ofs: 0x460 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftRouteArrowTailTexture */
	ExternalPtr<struct UTexture> AircraftBombDropRouteTexture; /* Ofs: 0x468 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftBombDropRouteTexture */
	ExternalPtr<struct UTexture> AircraftRouteTexture; /* Ofs: 0x470 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftRouteTexture */
	ExternalPtr<struct UTexture> AircraftTexture; /* Ofs: 0x478 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.AircraftTexture */
	FName ImageRotatorTextureParamName; /* Ofs: 0x480 Size: 0x8 - NameProperty TslGame.MapGridWidget.ImageRotatorTextureParamName */
	FName AircraftRouteTextureParamName; /* Ofs: 0x488 Size: 0x8 - NameProperty TslGame.MapGridWidget.AircraftRouteTextureParamName */
	FName ImageRotatorAngleParamName; /* Ofs: 0x490 Size: 0x8 - NameProperty TslGame.MapGridWidget.ImageRotatorAngleParamName */
	FName ArrowStartXParamName; /* Ofs: 0x498 Size: 0x8 - NameProperty TslGame.MapGridWidget.ArrowStartXParamName */
	FName ArrowStartYParamName; /* Ofs: 0x4A0 Size: 0x8 - NameProperty TslGame.MapGridWidget.ArrowStartYParamName */
	FName ArrowEndXParamName; /* Ofs: 0x4A8 Size: 0x8 - NameProperty TslGame.MapGridWidget.ArrowEndXParamName */
	FName ArrowEndYParamName; /* Ofs: 0x4B0 Size: 0x8 - NameProperty TslGame.MapGridWidget.ArrowEndYParamName */
	FName CurrentPositionXParamName; /* Ofs: 0x4B8 Size: 0x8 - NameProperty TslGame.MapGridWidget.CurrentPositionXParamName */
	FName CurrentPositionYParamName; /* Ofs: 0x4C0 Size: 0x8 - NameProperty TslGame.MapGridWidget.CurrentPositionYParamName */
	FName AircraftOnRouteParamName; /* Ofs: 0x4C8 Size: 0x8 - NameProperty TslGame.MapGridWidget.AircraftOnRouteParamName */
	uint8_t boolField4D0;
	uint8_t boolField4D1;
	uint8_t UnknownData4D2[0x6];
	FUmgWidgetBinder_Image RedzoneImageBinder; /* Ofs: 0x4D8 Size: 0x28 - StructProperty TslGame.MapGridWidget.RedzoneImageBinder */
	FName RedzoneColorParamName; /* Ofs: 0x500 Size: 0x8 - NameProperty TslGame.MapGridWidget.RedzoneColorParamName */
	FColorBlindColorSet RedzoneColorSet; /* Ofs: 0x508 Size: 0x10 - StructProperty TslGame.MapGridWidget.RedzoneColorSet */
	FUmgWidgetBinder_Image ReplayzoneImageBinder; /* Ofs: 0x518 Size: 0x28 - StructProperty TslGame.MapGridWidget.ReplayzoneImageBinder */
	FUmgWidgetBinder_SizeBox ImageSizeBoxBinder; /* Ofs: 0x540 Size: 0x20 - StructProperty TslGame.MapGridWidget.ImageSizeBoxBinder */
	FColorBlindColorSet BluezoneColorSet; /* Ofs: 0x560 Size: 0x10 - StructProperty TslGame.MapGridWidget.BluezoneColorSet */
	float Desaturation; /* Ofs: 0x570 Size: 0x4 - FloatProperty TslGame.MapGridWidget.Desaturation */
	float Contrast; /* Ofs: 0x574 Size: 0x4 - FloatProperty TslGame.MapGridWidget.Contrast */
	uint8_t UnknownData578[0x14];
	float ZoomLevel; /* Ofs: 0x58C Size: 0x4 - FloatProperty TslGame.MapGridWidget.ZoomLevel */
	float ShowGridZoomLevel; /* Ofs: 0x590 Size: 0x4 - FloatProperty TslGame.MapGridWidget.ShowGridZoomLevel */
	uint8_t UnknownData594[0x4];
	ExternalPtr<struct UCurveFloat> ViewRatioCurve; /* Ofs: 0x598 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.ViewRatioCurve */
	uint8_t boolField5A0;
	uint8_t UnknownData5A1[0x7];
	ExternalPtr<struct UFont> GridFont; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.GridFont */
	FName FontTypeFace; /* Ofs: 0x5B0 Size: 0x8 - NameProperty TslGame.MapGridWidget.FontTypeFace */
	TArray<struct FString> GridTextHorizentalArray; /* Ofs: 0x5B8 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.GridTextHorizentalArray */
	TArray<struct FString> GridTextVerticalArray; /* Ofs: 0x5C8 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.GridTextVerticalArray */
	FLinearColor ColorLargeGrid; /* Ofs: 0x5D8 Size: 0x10 - StructProperty TslGame.MapGridWidget.ColorLargeGrid */
	FLinearColor ColorSmallGrid; /* Ofs: 0x5E8 Size: 0x10 - StructProperty TslGame.MapGridWidget.ColorSmallGrid */
	FLinearColor ColorText; /* Ofs: 0x5F8 Size: 0x10 - StructProperty TslGame.MapGridWidget.ColorText */
	FLinearColor ColorSafetyZone; /* Ofs: 0x608 Size: 0x10 - StructProperty TslGame.MapGridWidget.ColorSafetyZone */
	float ThicknessLargeGrid; /* Ofs: 0x618 Size: 0x4 - FloatProperty TslGame.MapGridWidget.ThicknessLargeGrid */
	float ThicknessSmallGrid; /* Ofs: 0x61C Size: 0x4 - FloatProperty TslGame.MapGridWidget.ThicknessSmallGrid */
	FLinearColor ColorPoisonGasWarning; /* Ofs: 0x620 Size: 0x10 - StructProperty TslGame.MapGridWidget.ColorPoisonGasWarning */
	uint8_t boolField630;
	uint8_t boolField631;
	uint8_t boolField632;
	uint8_t boolField633;
	uint8_t boolField634;
	uint8_t boolField635;
	uint8_t UnknownData636[0x2];
	FLinearColor DefaultIconNameTagColor; /* Ofs: 0x638 Size: 0x10 - StructProperty TslGame.MapGridWidget.DefaultIconNameTagColor */
	FVector2D MinimapViewSize_MC; /* Ofs: 0x648 Size: 0x8 - StructProperty TslGame.MapGridWidget.MinimapViewSize_MC */
	uint8_t UnknownData650[0x28];
	ExternalPtr<struct UMaterialInstanceDynamic> MatInst; /* Ofs: 0x678 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.MatInst */
	uint8_t UnknownData680[0x18];
	ExternalPtr<struct UMapMarkerBaseWidget> MyMapMarker; /* Ofs: 0x698 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.MyMapMarker */
	TMap<struct UTeam, struct UMapMarkerBaseWidget> TeamPlayerMarkers; /* Ofs: 0x6A0 Size: 0x50 - MapProperty TslGame.MapGridWidget.TeamPlayerMarkers */
	TArray<struct FAircraftRouteData> AircraftRouteDataArray; /* Ofs: 0x6F0 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.AircraftRouteDataArray */
	TArray<struct FAircraftRouteData> CombatAircraftRouteDataArray; /* Ofs: 0x700 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.CombatAircraftRouteDataArray */
	ExternalPtr<struct UMapCharacterIconBaseWidget> MyCharacterMapIcon; /* Ofs: 0x710 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.MyCharacterMapIcon */
	TMap<struct FString, struct UMapCharacterIconBaseWidget> OtherCharacterMapIcons; /* Ofs: 0x718 Size: 0x50 - MapProperty TslGame.MapGridWidget.OtherCharacterMapIcons */
	TMap<struct UCarePackageItem, struct UMapCarePackageItemIconBaseWidget> MapCarePackageItemIcons; /* Ofs: 0x768 Size: 0x50 - MapProperty TslGame.MapGridWidget.MapCarePackageItemIcons */
	FTimerHandle ReplicatedCharacterListUpdateTimer; /* Ofs: 0x7B8 Size: 0x8 - StructProperty TslGame.MapGridWidget.ReplicatedCharacterListUpdateTimer */
	FTimerHandle ReplicatedCarePackageItemListUpdateTimer; /* Ofs: 0x7C0 Size: 0x8 - StructProperty TslGame.MapGridWidget.ReplicatedCarePackageItemListUpdateTimer */
	TArray<ExternalPtr<struct UTslCharacter>> ReplicatedCharacterList; /* Ofs: 0x7C8 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.ReplicatedCharacterList */
	TArray<ExternalPtr<struct UCarePackageItem>> ReplicatedCarePackageItemList; /* Ofs: 0x7D8 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.ReplicatedCarePackageItemList */
	TArray<ExternalPtr<struct UTeam>> ShowMarkerOnwerList; /* Ofs: 0x7E8 Size: 0x10 - ArrayProperty TslGame.MapGridWidget.ShowMarkerOnwerList */
	uint8_t UnknownData7F8[0x88];
	ExternalPtr<struct UMaterialInstance> MyOrTeamIconMaterial; /* Ofs: 0x880 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.MyOrTeamIconMaterial */
	ExternalPtr<struct UMaterialInstance> OtherCharacterIconMaterial; /* Ofs: 0x888 Size: 0x8 - ObjectProperty TslGame.MapGridWidget.OtherCharacterIconMaterial */
	FScriptMulticastDelegate CloseMySelf; /* Ofs: 0x890 Size: 0x10 - MulticastDelegateProperty TslGame.MapGridWidget.CloseMySelf */
	FScriptMulticastDelegate OnHideOwner; /* Ofs: 0x8A0 Size: 0x10 - MulticastDelegateProperty TslGame.MapGridWidget.OnHideOwner */


	inline bool SetMapImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x300, value); }
	inline bool SetAircraftRouteLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x328, value); }
	inline bool SetMyMarkerLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x348, value); }
	inline bool SetTeamMarkerLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x368, value); }
	inline bool SetMapMarkerClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x388, value); }
	inline bool SetLastCircleMarkImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x390, value); }
	inline bool SetMyMapIconLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOtherMapIconLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetCarePackageItemIconLayerBinder(t_structHelper inst, FUmgWidgetBinder_CanvasPanel value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetMapCharacterIconClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x418, value); }
	inline bool SetMapCarePackageItemIconClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x420, value); }
	inline bool SetObserverPlayerIconHitEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x428, value); }
	inline bool bShowAircraftRoute()
	{
		return boolField430& 0x1;
	}
	inline bool SetbShowAircraftRoute(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x430, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAircraftRouteArrowHeadDesiredSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetAircraftRouteArrowTailDesiredSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetAircraftIconDesiredSizeRatio(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetImageRotatorMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstance> value) { inst.WriteOffset(0x440, value); }
	inline bool SetAircraftRouteArrowBodyMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstance> value) { inst.WriteOffset(0x448, value); }
	inline bool SetCombatAircraftRouteArrowBodyMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstance> value) { inst.WriteOffset(0x450, value); }
	inline bool SetAircraftRouteArrowHeadTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x458, value); }
	inline bool SetAircraftRouteArrowTailTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x460, value); }
	inline bool SetAircraftBombDropRouteTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x468, value); }
	inline bool SetAircraftRouteTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x470, value); }
	inline bool SetAircraftTexture(t_structHelper inst, ExternalPtr<struct UTexture> value) { inst.WriteOffset(0x478, value); }
	inline bool SetImageRotatorTextureParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x480, value); }
	inline bool SetAircraftRouteTextureParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x488, value); }
	inline bool SetImageRotatorAngleParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x490, value); }
	inline bool SetArrowStartXParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x498, value); }
	inline bool SetArrowStartYParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetArrowEndXParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetArrowEndYParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetCurrentPositionXParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetCurrentPositionYParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetAircraftOnRouteParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x4C8, value); }
	inline bool bShowName()
	{
		return boolField4D0& 0x1;
	}
	inline bool SetbShowName(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsMinimap()
	{
		return boolField4D1& 0x1;
	}
	inline bool SetbIsMinimap(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRedzoneImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetRedzoneColorParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x500, value); }
	inline bool SetRedzoneColorSet(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x508, value); }
	inline bool SetReplayzoneImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x518, value); }
	inline bool SetImageSizeBoxBinder(t_structHelper inst, FUmgWidgetBinder_SizeBox value) { inst.WriteOffset(0x540, value); }
	inline bool SetBluezoneColorSet(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x560, value); }
	inline bool SetDesaturation(t_structHelper inst, float value) { inst.WriteOffset(0x570, value); }
	inline bool SetContrast(t_structHelper inst, float value) { inst.WriteOffset(0x574, value); }
	inline bool SetZoomLevel(t_structHelper inst, float value) { inst.WriteOffset(0x58C, value); }
	inline bool SetShowGridZoomLevel(t_structHelper inst, float value) { inst.WriteOffset(0x590, value); }
	inline bool SetViewRatioCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x598, value); }
	inline bool bRectangleViewMode()
	{
		return boolField5A0& 0x1;
	}
	inline bool SetbRectangleViewMode(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetGridFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetFontTypeFace(t_structHelper inst, FName value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetGridTextHorizentalArray(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetGridTextVerticalArray(t_structHelper inst, TArray<struct FString> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetColorLargeGrid(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetColorSmallGrid(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetColorText(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetColorSafetyZone(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x608, value); }
	inline bool SetThicknessLargeGrid(t_structHelper inst, float value) { inst.WriteOffset(0x618, value); }
	inline bool SetThicknessSmallGrid(t_structHelper inst, float value) { inst.WriteOffset(0x61C, value); }
	inline bool SetColorPoisonGasWarning(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x620, value); }
	inline bool bDrawGridLine()
	{
		return boolField630& 0x1;
	}
	inline bool SetbDrawGridLine(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x630, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawGridText()
	{
		return boolField631& 0x1;
	}
	inline bool SetbDrawGridText(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x631, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawNextPlayzoneGuideLine()
	{
		return boolField632& 0x1;
	}
	inline bool SetbDrawNextPlayzoneGuideLine(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x632, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseZOrderSort()
	{
		return boolField633& 0x1;
	}
	inline bool SetbUseZOrderSort(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x633, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseTeamMemberColor()
	{
		return boolField634& 0x1;
	}
	inline bool SetbUseTeamMemberColor(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x634, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRemoveDeadIcon()
	{
		return boolField635& 0x1;
	}
	inline bool SetbRemoveDeadIcon(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x635, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDefaultIconNameTagColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x638, value); }
	inline bool SetMinimapViewSize_MC(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x648, value); }
	inline bool SetMatInst(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x678, value); }
	inline bool SetMyMapMarker(t_structHelper inst, ExternalPtr<struct UMapMarkerBaseWidget> value) { inst.WriteOffset(0x698, value); }
	inline bool SetTeamPlayerMarkers(t_structHelper inst, TMap<struct UTeam, struct UMapMarkerBaseWidget> value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetAircraftRouteDataArray(t_structHelper inst, TArray<struct FAircraftRouteData> value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetCombatAircraftRouteDataArray(t_structHelper inst, TArray<struct FAircraftRouteData> value) { inst.WriteOffset(0x700, value); }
	inline bool SetMyCharacterMapIcon(t_structHelper inst, ExternalPtr<struct UMapCharacterIconBaseWidget> value) { inst.WriteOffset(0x710, value); }
	inline bool SetOtherCharacterMapIcons(t_structHelper inst, TMap<struct FString, struct UMapCharacterIconBaseWidget> value) { inst.WriteOffset(0x718, value); }
	inline bool SetMapCarePackageItemIcons(t_structHelper inst, TMap<struct UCarePackageItem, struct UMapCarePackageItemIconBaseWidget> value) { inst.WriteOffset(0x768, value); }
	inline bool SetReplicatedCharacterListUpdateTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetReplicatedCarePackageItemListUpdateTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetReplicatedCharacterList(t_structHelper inst, TArray<ExternalPtr<struct UTslCharacter>> value) { inst.WriteOffset(0x7C8, value); }
	inline bool SetReplicatedCarePackageItemList(t_structHelper inst, TArray<ExternalPtr<struct UCarePackageItem>> value) { inst.WriteOffset(0x7D8, value); }
	inline bool SetShowMarkerOnwerList(t_structHelper inst, TArray<ExternalPtr<struct UTeam>> value) { inst.WriteOffset(0x7E8, value); }
	inline bool SetMyOrTeamIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstance> value) { inst.WriteOffset(0x880, value); }
	inline bool SetOtherCharacterIconMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInstance> value) { inst.WriteOffset(0x888, value); }
	inline bool SetCloseMySelf(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x890, value); }
	inline bool SetOnHideOwner(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x8A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapGridWidget = sizeof(UMapGridWidget); // 2224
    static_assert(sizeof(UMapGridWidget) == 0x8B0, "Size of UMapGridWidget is not correct.");
	auto constexpr UMapGridWidget_MapImageBinder_Offset = offsetof(UMapGridWidget, MapImageBinder);
	static_assert(UMapGridWidget_MapImageBinder_Offset == 0x300, "UMapGridWidget::MapImageBinder offset is not 300");
	auto constexpr UMapGridWidget_AircraftRouteLayerBinder_Offset = offsetof(UMapGridWidget, AircraftRouteLayerBinder);
	static_assert(UMapGridWidget_AircraftRouteLayerBinder_Offset == 0x328, "UMapGridWidget::AircraftRouteLayerBinder offset is not 328");
	auto constexpr UMapGridWidget_MyMarkerLayerBinder_Offset = offsetof(UMapGridWidget, MyMarkerLayerBinder);
	static_assert(UMapGridWidget_MyMarkerLayerBinder_Offset == 0x348, "UMapGridWidget::MyMarkerLayerBinder offset is not 348");
	auto constexpr UMapGridWidget_TeamMarkerLayerBinder_Offset = offsetof(UMapGridWidget, TeamMarkerLayerBinder);
	static_assert(UMapGridWidget_TeamMarkerLayerBinder_Offset == 0x368, "UMapGridWidget::TeamMarkerLayerBinder offset is not 368");
	auto constexpr UMapGridWidget_MapMarkerClass_Offset = offsetof(UMapGridWidget, MapMarkerClass);
	static_assert(UMapGridWidget_MapMarkerClass_Offset == 0x388, "UMapGridWidget::MapMarkerClass offset is not 388");
	auto constexpr UMapGridWidget_LastCircleMarkImageBinder_Offset = offsetof(UMapGridWidget, LastCircleMarkImageBinder);
	static_assert(UMapGridWidget_LastCircleMarkImageBinder_Offset == 0x390, "UMapGridWidget::LastCircleMarkImageBinder offset is not 390");
	auto constexpr UMapGridWidget_MyMapIconLayerBinder_Offset = offsetof(UMapGridWidget, MyMapIconLayerBinder);
	static_assert(UMapGridWidget_MyMapIconLayerBinder_Offset == 0x3b8, "UMapGridWidget::MyMapIconLayerBinder offset is not 3b8");
	auto constexpr UMapGridWidget_OtherMapIconLayerBinder_Offset = offsetof(UMapGridWidget, OtherMapIconLayerBinder);
	static_assert(UMapGridWidget_OtherMapIconLayerBinder_Offset == 0x3d8, "UMapGridWidget::OtherMapIconLayerBinder offset is not 3d8");
	auto constexpr UMapGridWidget_CarePackageItemIconLayerBinder_Offset = offsetof(UMapGridWidget, CarePackageItemIconLayerBinder);
	static_assert(UMapGridWidget_CarePackageItemIconLayerBinder_Offset == 0x3f8, "UMapGridWidget::CarePackageItemIconLayerBinder offset is not 3f8");
	auto constexpr UMapGridWidget_MapCharacterIconClass_Offset = offsetof(UMapGridWidget, MapCharacterIconClass);
	static_assert(UMapGridWidget_MapCharacterIconClass_Offset == 0x418, "UMapGridWidget::MapCharacterIconClass offset is not 418");
	auto constexpr UMapGridWidget_MapCarePackageItemIconClass_Offset = offsetof(UMapGridWidget, MapCarePackageItemIconClass);
	static_assert(UMapGridWidget_MapCarePackageItemIconClass_Offset == 0x420, "UMapGridWidget::MapCarePackageItemIconClass offset is not 420");
	auto constexpr UMapGridWidget_ObserverPlayerIconHitEffectClass_Offset = offsetof(UMapGridWidget, ObserverPlayerIconHitEffectClass);
	static_assert(UMapGridWidget_ObserverPlayerIconHitEffectClass_Offset == 0x428, "UMapGridWidget::ObserverPlayerIconHitEffectClass offset is not 428");
	auto constexpr UMapGridWidget_boolField430_Offset = offsetof(UMapGridWidget, boolField430);
	static_assert(UMapGridWidget_boolField430_Offset == 0x430, "UMapGridWidget::boolField430 offset is not 430");
	auto constexpr UMapGridWidget_AircraftRouteArrowHeadDesiredSizeRatio_Offset = offsetof(UMapGridWidget, AircraftRouteArrowHeadDesiredSizeRatio);
	static_assert(UMapGridWidget_AircraftRouteArrowHeadDesiredSizeRatio_Offset == 0x434, "UMapGridWidget::AircraftRouteArrowHeadDesiredSizeRatio offset is not 434");
	auto constexpr UMapGridWidget_AircraftRouteArrowTailDesiredSizeRatio_Offset = offsetof(UMapGridWidget, AircraftRouteArrowTailDesiredSizeRatio);
	static_assert(UMapGridWidget_AircraftRouteArrowTailDesiredSizeRatio_Offset == 0x438, "UMapGridWidget::AircraftRouteArrowTailDesiredSizeRatio offset is not 438");
	auto constexpr UMapGridWidget_AircraftIconDesiredSizeRatio_Offset = offsetof(UMapGridWidget, AircraftIconDesiredSizeRatio);
	static_assert(UMapGridWidget_AircraftIconDesiredSizeRatio_Offset == 0x43c, "UMapGridWidget::AircraftIconDesiredSizeRatio offset is not 43c");
	auto constexpr UMapGridWidget_ImageRotatorMaterial_Offset = offsetof(UMapGridWidget, ImageRotatorMaterial);
	static_assert(UMapGridWidget_ImageRotatorMaterial_Offset == 0x440, "UMapGridWidget::ImageRotatorMaterial offset is not 440");
	auto constexpr UMapGridWidget_AircraftRouteArrowBodyMaterial_Offset = offsetof(UMapGridWidget, AircraftRouteArrowBodyMaterial);
	static_assert(UMapGridWidget_AircraftRouteArrowBodyMaterial_Offset == 0x448, "UMapGridWidget::AircraftRouteArrowBodyMaterial offset is not 448");
	auto constexpr UMapGridWidget_CombatAircraftRouteArrowBodyMaterial_Offset = offsetof(UMapGridWidget, CombatAircraftRouteArrowBodyMaterial);
	static_assert(UMapGridWidget_CombatAircraftRouteArrowBodyMaterial_Offset == 0x450, "UMapGridWidget::CombatAircraftRouteArrowBodyMaterial offset is not 450");
	auto constexpr UMapGridWidget_AircraftRouteArrowHeadTexture_Offset = offsetof(UMapGridWidget, AircraftRouteArrowHeadTexture);
	static_assert(UMapGridWidget_AircraftRouteArrowHeadTexture_Offset == 0x458, "UMapGridWidget::AircraftRouteArrowHeadTexture offset is not 458");
	auto constexpr UMapGridWidget_AircraftRouteArrowTailTexture_Offset = offsetof(UMapGridWidget, AircraftRouteArrowTailTexture);
	static_assert(UMapGridWidget_AircraftRouteArrowTailTexture_Offset == 0x460, "UMapGridWidget::AircraftRouteArrowTailTexture offset is not 460");
	auto constexpr UMapGridWidget_AircraftBombDropRouteTexture_Offset = offsetof(UMapGridWidget, AircraftBombDropRouteTexture);
	static_assert(UMapGridWidget_AircraftBombDropRouteTexture_Offset == 0x468, "UMapGridWidget::AircraftBombDropRouteTexture offset is not 468");
	auto constexpr UMapGridWidget_AircraftRouteTexture_Offset = offsetof(UMapGridWidget, AircraftRouteTexture);
	static_assert(UMapGridWidget_AircraftRouteTexture_Offset == 0x470, "UMapGridWidget::AircraftRouteTexture offset is not 470");
	auto constexpr UMapGridWidget_AircraftTexture_Offset = offsetof(UMapGridWidget, AircraftTexture);
	static_assert(UMapGridWidget_AircraftTexture_Offset == 0x478, "UMapGridWidget::AircraftTexture offset is not 478");
	auto constexpr UMapGridWidget_ImageRotatorTextureParamName_Offset = offsetof(UMapGridWidget, ImageRotatorTextureParamName);
	static_assert(UMapGridWidget_ImageRotatorTextureParamName_Offset == 0x480, "UMapGridWidget::ImageRotatorTextureParamName offset is not 480");
	auto constexpr UMapGridWidget_AircraftRouteTextureParamName_Offset = offsetof(UMapGridWidget, AircraftRouteTextureParamName);
	static_assert(UMapGridWidget_AircraftRouteTextureParamName_Offset == 0x488, "UMapGridWidget::AircraftRouteTextureParamName offset is not 488");
	auto constexpr UMapGridWidget_ImageRotatorAngleParamName_Offset = offsetof(UMapGridWidget, ImageRotatorAngleParamName);
	static_assert(UMapGridWidget_ImageRotatorAngleParamName_Offset == 0x490, "UMapGridWidget::ImageRotatorAngleParamName offset is not 490");
	auto constexpr UMapGridWidget_ArrowStartXParamName_Offset = offsetof(UMapGridWidget, ArrowStartXParamName);
	static_assert(UMapGridWidget_ArrowStartXParamName_Offset == 0x498, "UMapGridWidget::ArrowStartXParamName offset is not 498");
	auto constexpr UMapGridWidget_ArrowStartYParamName_Offset = offsetof(UMapGridWidget, ArrowStartYParamName);
	static_assert(UMapGridWidget_ArrowStartYParamName_Offset == 0x4a0, "UMapGridWidget::ArrowStartYParamName offset is not 4a0");
	auto constexpr UMapGridWidget_ArrowEndXParamName_Offset = offsetof(UMapGridWidget, ArrowEndXParamName);
	static_assert(UMapGridWidget_ArrowEndXParamName_Offset == 0x4a8, "UMapGridWidget::ArrowEndXParamName offset is not 4a8");
	auto constexpr UMapGridWidget_ArrowEndYParamName_Offset = offsetof(UMapGridWidget, ArrowEndYParamName);
	static_assert(UMapGridWidget_ArrowEndYParamName_Offset == 0x4b0, "UMapGridWidget::ArrowEndYParamName offset is not 4b0");
	auto constexpr UMapGridWidget_CurrentPositionXParamName_Offset = offsetof(UMapGridWidget, CurrentPositionXParamName);
	static_assert(UMapGridWidget_CurrentPositionXParamName_Offset == 0x4b8, "UMapGridWidget::CurrentPositionXParamName offset is not 4b8");
	auto constexpr UMapGridWidget_CurrentPositionYParamName_Offset = offsetof(UMapGridWidget, CurrentPositionYParamName);
	static_assert(UMapGridWidget_CurrentPositionYParamName_Offset == 0x4c0, "UMapGridWidget::CurrentPositionYParamName offset is not 4c0");
	auto constexpr UMapGridWidget_AircraftOnRouteParamName_Offset = offsetof(UMapGridWidget, AircraftOnRouteParamName);
	static_assert(UMapGridWidget_AircraftOnRouteParamName_Offset == 0x4c8, "UMapGridWidget::AircraftOnRouteParamName offset is not 4c8");
	auto constexpr UMapGridWidget_boolField4D0_Offset = offsetof(UMapGridWidget, boolField4D0);
	static_assert(UMapGridWidget_boolField4D0_Offset == 0x4d0, "UMapGridWidget::boolField4D0 offset is not 4d0");
	auto constexpr UMapGridWidget_boolField4D1_Offset = offsetof(UMapGridWidget, boolField4D1);
	static_assert(UMapGridWidget_boolField4D1_Offset == 0x4d1, "UMapGridWidget::boolField4D1 offset is not 4d1");
	auto constexpr UMapGridWidget_RedzoneImageBinder_Offset = offsetof(UMapGridWidget, RedzoneImageBinder);
	static_assert(UMapGridWidget_RedzoneImageBinder_Offset == 0x4d8, "UMapGridWidget::RedzoneImageBinder offset is not 4d8");
	auto constexpr UMapGridWidget_RedzoneColorParamName_Offset = offsetof(UMapGridWidget, RedzoneColorParamName);
	static_assert(UMapGridWidget_RedzoneColorParamName_Offset == 0x500, "UMapGridWidget::RedzoneColorParamName offset is not 500");
	auto constexpr UMapGridWidget_RedzoneColorSet_Offset = offsetof(UMapGridWidget, RedzoneColorSet);
	static_assert(UMapGridWidget_RedzoneColorSet_Offset == 0x508, "UMapGridWidget::RedzoneColorSet offset is not 508");
	auto constexpr UMapGridWidget_ReplayzoneImageBinder_Offset = offsetof(UMapGridWidget, ReplayzoneImageBinder);
	static_assert(UMapGridWidget_ReplayzoneImageBinder_Offset == 0x518, "UMapGridWidget::ReplayzoneImageBinder offset is not 518");
	auto constexpr UMapGridWidget_ImageSizeBoxBinder_Offset = offsetof(UMapGridWidget, ImageSizeBoxBinder);
	static_assert(UMapGridWidget_ImageSizeBoxBinder_Offset == 0x540, "UMapGridWidget::ImageSizeBoxBinder offset is not 540");
	auto constexpr UMapGridWidget_BluezoneColorSet_Offset = offsetof(UMapGridWidget, BluezoneColorSet);
	static_assert(UMapGridWidget_BluezoneColorSet_Offset == 0x560, "UMapGridWidget::BluezoneColorSet offset is not 560");
	auto constexpr UMapGridWidget_Desaturation_Offset = offsetof(UMapGridWidget, Desaturation);
	static_assert(UMapGridWidget_Desaturation_Offset == 0x570, "UMapGridWidget::Desaturation offset is not 570");
	auto constexpr UMapGridWidget_Contrast_Offset = offsetof(UMapGridWidget, Contrast);
	static_assert(UMapGridWidget_Contrast_Offset == 0x574, "UMapGridWidget::Contrast offset is not 574");
	auto constexpr UMapGridWidget_ZoomLevel_Offset = offsetof(UMapGridWidget, ZoomLevel);
	static_assert(UMapGridWidget_ZoomLevel_Offset == 0x58c, "UMapGridWidget::ZoomLevel offset is not 58c");
	auto constexpr UMapGridWidget_ShowGridZoomLevel_Offset = offsetof(UMapGridWidget, ShowGridZoomLevel);
	static_assert(UMapGridWidget_ShowGridZoomLevel_Offset == 0x590, "UMapGridWidget::ShowGridZoomLevel offset is not 590");
	auto constexpr UMapGridWidget_ViewRatioCurve_Offset = offsetof(UMapGridWidget, ViewRatioCurve);
	static_assert(UMapGridWidget_ViewRatioCurve_Offset == 0x598, "UMapGridWidget::ViewRatioCurve offset is not 598");
	auto constexpr UMapGridWidget_boolField5A0_Offset = offsetof(UMapGridWidget, boolField5A0);
	static_assert(UMapGridWidget_boolField5A0_Offset == 0x5a0, "UMapGridWidget::boolField5A0 offset is not 5a0");
	auto constexpr UMapGridWidget_GridFont_Offset = offsetof(UMapGridWidget, GridFont);
	static_assert(UMapGridWidget_GridFont_Offset == 0x5a8, "UMapGridWidget::GridFont offset is not 5a8");
	auto constexpr UMapGridWidget_FontTypeFace_Offset = offsetof(UMapGridWidget, FontTypeFace);
	static_assert(UMapGridWidget_FontTypeFace_Offset == 0x5b0, "UMapGridWidget::FontTypeFace offset is not 5b0");
	auto constexpr UMapGridWidget_GridTextHorizentalArray_Offset = offsetof(UMapGridWidget, GridTextHorizentalArray);
	static_assert(UMapGridWidget_GridTextHorizentalArray_Offset == 0x5b8, "UMapGridWidget::GridTextHorizentalArray offset is not 5b8");
	auto constexpr UMapGridWidget_GridTextVerticalArray_Offset = offsetof(UMapGridWidget, GridTextVerticalArray);
	static_assert(UMapGridWidget_GridTextVerticalArray_Offset == 0x5c8, "UMapGridWidget::GridTextVerticalArray offset is not 5c8");
	auto constexpr UMapGridWidget_ColorLargeGrid_Offset = offsetof(UMapGridWidget, ColorLargeGrid);
	static_assert(UMapGridWidget_ColorLargeGrid_Offset == 0x5d8, "UMapGridWidget::ColorLargeGrid offset is not 5d8");
	auto constexpr UMapGridWidget_ColorSmallGrid_Offset = offsetof(UMapGridWidget, ColorSmallGrid);
	static_assert(UMapGridWidget_ColorSmallGrid_Offset == 0x5e8, "UMapGridWidget::ColorSmallGrid offset is not 5e8");
	auto constexpr UMapGridWidget_ColorText_Offset = offsetof(UMapGridWidget, ColorText);
	static_assert(UMapGridWidget_ColorText_Offset == 0x5f8, "UMapGridWidget::ColorText offset is not 5f8");
	auto constexpr UMapGridWidget_ColorSafetyZone_Offset = offsetof(UMapGridWidget, ColorSafetyZone);
	static_assert(UMapGridWidget_ColorSafetyZone_Offset == 0x608, "UMapGridWidget::ColorSafetyZone offset is not 608");
	auto constexpr UMapGridWidget_ThicknessLargeGrid_Offset = offsetof(UMapGridWidget, ThicknessLargeGrid);
	static_assert(UMapGridWidget_ThicknessLargeGrid_Offset == 0x618, "UMapGridWidget::ThicknessLargeGrid offset is not 618");
	auto constexpr UMapGridWidget_ThicknessSmallGrid_Offset = offsetof(UMapGridWidget, ThicknessSmallGrid);
	static_assert(UMapGridWidget_ThicknessSmallGrid_Offset == 0x61c, "UMapGridWidget::ThicknessSmallGrid offset is not 61c");
	auto constexpr UMapGridWidget_ColorPoisonGasWarning_Offset = offsetof(UMapGridWidget, ColorPoisonGasWarning);
	static_assert(UMapGridWidget_ColorPoisonGasWarning_Offset == 0x620, "UMapGridWidget::ColorPoisonGasWarning offset is not 620");
	auto constexpr UMapGridWidget_boolField630_Offset = offsetof(UMapGridWidget, boolField630);
	static_assert(UMapGridWidget_boolField630_Offset == 0x630, "UMapGridWidget::boolField630 offset is not 630");
	auto constexpr UMapGridWidget_boolField631_Offset = offsetof(UMapGridWidget, boolField631);
	static_assert(UMapGridWidget_boolField631_Offset == 0x631, "UMapGridWidget::boolField631 offset is not 631");
	auto constexpr UMapGridWidget_boolField632_Offset = offsetof(UMapGridWidget, boolField632);
	static_assert(UMapGridWidget_boolField632_Offset == 0x632, "UMapGridWidget::boolField632 offset is not 632");
	auto constexpr UMapGridWidget_boolField633_Offset = offsetof(UMapGridWidget, boolField633);
	static_assert(UMapGridWidget_boolField633_Offset == 0x633, "UMapGridWidget::boolField633 offset is not 633");
	auto constexpr UMapGridWidget_boolField634_Offset = offsetof(UMapGridWidget, boolField634);
	static_assert(UMapGridWidget_boolField634_Offset == 0x634, "UMapGridWidget::boolField634 offset is not 634");
	auto constexpr UMapGridWidget_boolField635_Offset = offsetof(UMapGridWidget, boolField635);
	static_assert(UMapGridWidget_boolField635_Offset == 0x635, "UMapGridWidget::boolField635 offset is not 635");
	auto constexpr UMapGridWidget_DefaultIconNameTagColor_Offset = offsetof(UMapGridWidget, DefaultIconNameTagColor);
	static_assert(UMapGridWidget_DefaultIconNameTagColor_Offset == 0x638, "UMapGridWidget::DefaultIconNameTagColor offset is not 638");
	auto constexpr UMapGridWidget_MinimapViewSize_MC_Offset = offsetof(UMapGridWidget, MinimapViewSize_MC);
	static_assert(UMapGridWidget_MinimapViewSize_MC_Offset == 0x648, "UMapGridWidget::MinimapViewSize_MC offset is not 648");
	auto constexpr UMapGridWidget_MatInst_Offset = offsetof(UMapGridWidget, MatInst);
	static_assert(UMapGridWidget_MatInst_Offset == 0x678, "UMapGridWidget::MatInst offset is not 678");
	auto constexpr UMapGridWidget_MyMapMarker_Offset = offsetof(UMapGridWidget, MyMapMarker);
	static_assert(UMapGridWidget_MyMapMarker_Offset == 0x698, "UMapGridWidget::MyMapMarker offset is not 698");
	auto constexpr UMapGridWidget_TeamPlayerMarkers_Offset = offsetof(UMapGridWidget, TeamPlayerMarkers);
	static_assert(UMapGridWidget_TeamPlayerMarkers_Offset == 0x6a0, "UMapGridWidget::TeamPlayerMarkers offset is not 6a0");
	auto constexpr UMapGridWidget_AircraftRouteDataArray_Offset = offsetof(UMapGridWidget, AircraftRouteDataArray);
	static_assert(UMapGridWidget_AircraftRouteDataArray_Offset == 0x6f0, "UMapGridWidget::AircraftRouteDataArray offset is not 6f0");
	auto constexpr UMapGridWidget_CombatAircraftRouteDataArray_Offset = offsetof(UMapGridWidget, CombatAircraftRouteDataArray);
	static_assert(UMapGridWidget_CombatAircraftRouteDataArray_Offset == 0x700, "UMapGridWidget::CombatAircraftRouteDataArray offset is not 700");
	auto constexpr UMapGridWidget_MyCharacterMapIcon_Offset = offsetof(UMapGridWidget, MyCharacterMapIcon);
	static_assert(UMapGridWidget_MyCharacterMapIcon_Offset == 0x710, "UMapGridWidget::MyCharacterMapIcon offset is not 710");
	auto constexpr UMapGridWidget_OtherCharacterMapIcons_Offset = offsetof(UMapGridWidget, OtherCharacterMapIcons);
	static_assert(UMapGridWidget_OtherCharacterMapIcons_Offset == 0x718, "UMapGridWidget::OtherCharacterMapIcons offset is not 718");
	auto constexpr UMapGridWidget_MapCarePackageItemIcons_Offset = offsetof(UMapGridWidget, MapCarePackageItemIcons);
	static_assert(UMapGridWidget_MapCarePackageItemIcons_Offset == 0x768, "UMapGridWidget::MapCarePackageItemIcons offset is not 768");
	auto constexpr UMapGridWidget_ReplicatedCharacterListUpdateTimer_Offset = offsetof(UMapGridWidget, ReplicatedCharacterListUpdateTimer);
	static_assert(UMapGridWidget_ReplicatedCharacterListUpdateTimer_Offset == 0x7b8, "UMapGridWidget::ReplicatedCharacterListUpdateTimer offset is not 7b8");
	auto constexpr UMapGridWidget_ReplicatedCarePackageItemListUpdateTimer_Offset = offsetof(UMapGridWidget, ReplicatedCarePackageItemListUpdateTimer);
	static_assert(UMapGridWidget_ReplicatedCarePackageItemListUpdateTimer_Offset == 0x7c0, "UMapGridWidget::ReplicatedCarePackageItemListUpdateTimer offset is not 7c0");
	auto constexpr UMapGridWidget_ReplicatedCharacterList_Offset = offsetof(UMapGridWidget, ReplicatedCharacterList);
	static_assert(UMapGridWidget_ReplicatedCharacterList_Offset == 0x7c8, "UMapGridWidget::ReplicatedCharacterList offset is not 7c8");
	auto constexpr UMapGridWidget_ReplicatedCarePackageItemList_Offset = offsetof(UMapGridWidget, ReplicatedCarePackageItemList);
	static_assert(UMapGridWidget_ReplicatedCarePackageItemList_Offset == 0x7d8, "UMapGridWidget::ReplicatedCarePackageItemList offset is not 7d8");
	auto constexpr UMapGridWidget_ShowMarkerOnwerList_Offset = offsetof(UMapGridWidget, ShowMarkerOnwerList);
	static_assert(UMapGridWidget_ShowMarkerOnwerList_Offset == 0x7e8, "UMapGridWidget::ShowMarkerOnwerList offset is not 7e8");
	auto constexpr UMapGridWidget_MyOrTeamIconMaterial_Offset = offsetof(UMapGridWidget, MyOrTeamIconMaterial);
	static_assert(UMapGridWidget_MyOrTeamIconMaterial_Offset == 0x880, "UMapGridWidget::MyOrTeamIconMaterial offset is not 880");
	auto constexpr UMapGridWidget_OtherCharacterIconMaterial_Offset = offsetof(UMapGridWidget, OtherCharacterIconMaterial);
	static_assert(UMapGridWidget_OtherCharacterIconMaterial_Offset == 0x888, "UMapGridWidget::OtherCharacterIconMaterial offset is not 888");
	auto constexpr UMapGridWidget_CloseMySelf_Offset = offsetof(UMapGridWidget, CloseMySelf);
	static_assert(UMapGridWidget_CloseMySelf_Offset == 0x890, "UMapGridWidget::CloseMySelf offset is not 890");
	auto constexpr UMapGridWidget_OnHideOwner_Offset = offsetof(UMapGridWidget, OnHideOwner);
	static_assert(UMapGridWidget_OnHideOwner_Offset == 0x8a0, "UMapGridWidget::OnHideOwner offset is not 8a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
