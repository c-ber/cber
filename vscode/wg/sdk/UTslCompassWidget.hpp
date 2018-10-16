#pragma once
#include "UUmgBaseWidget.hpp"
#include "FUmgWidgetBinder_Image.hpp"
#include "FUmgWidgetBinder_Overlay.hpp"
#include "FUmgWidgetBinder_TextBlock.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslCompassWidget // Size: 0x4A8
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslCompassWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1563); // id32("Class TslGame.TslCompassWidget")
		return ptr;
	}
	ExternalPtr<struct UMaterialInterface> MI_Compass; /* Ofs: 0x300 Size: 0x8 - ObjectProperty TslGame.TslCompassWidget.MI_Compass */
	ExternalPtr<struct UMaterialInstanceDynamic> MID_Compass; /* Ofs: 0x308 Size: 0x8 - ObjectProperty TslGame.TslCompassWidget.MID_Compass */
	FUmgWidgetBinder_Image CompassImageBinder; /* Ofs: 0x310 Size: 0x28 - StructProperty TslGame.TslCompassWidget.CompassImageBinder */
	FUmgWidgetBinder_Image MarkerImageBinder; /* Ofs: 0x338 Size: 0x28 - StructProperty TslGame.TslCompassWidget.MarkerImageBinder */
	FUmgWidgetBinder_Overlay MyOverlayBinder; /* Ofs: 0x360 Size: 0x20 - StructProperty TslGame.TslCompassWidget.MyOverlayBinder */
	FUmgWidgetBinder_Overlay TeamOverlayBinder; /* Ofs: 0x380 Size: 0x20 - StructProperty TslGame.TslCompassWidget.TeamOverlayBinder */
	FUmgWidgetBinder_TextBlock DirectionTextBlockBinder; /* Ofs: 0x3A0 Size: 0x20 - StructProperty TslGame.TslCompassWidget.DirectionTextBlockBinder */
	ExternalPtr<struct UClass> CompassMarkerWidgetClass; /* Ofs: 0x3C0 Size: 0x8 - ClassProperty TslGame.TslCompassWidget.CompassMarkerWidgetClass */
	ExternalPtr<struct UTslCompassMarkerWidget> MyCompassMarkerWidget; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty TslGame.TslCompassWidget.MyCompassMarkerWidget */
	TArray<ExternalPtr<struct UTslCompassMarkerWidget>> TeamMarkerWidgetsOfTeam; /* Ofs: 0x3D0 Size: 0x10 - ArrayProperty TslGame.TslCompassWidget.TeamMarkerWidgetsOfTeam */
	float DivisionLevel; /* Ofs: 0x3E0 Size: 0x4 - FloatProperty TslGame.TslCompassWidget.DivisionLevel */
	float Offset; /* Ofs: 0x3E4 Size: 0x4 - FloatProperty TslGame.TslCompassWidget.Offset */
	uint8_t boolField3E8;
	uint8_t UnknownData3E9[0x7];
	TMap<int32_t, struct FDirectionTextData> OverrideDirectionTextDatas; /* Ofs: 0x3F0 Size: 0x50 - MapProperty TslGame.TslCompassWidget.OverrideDirectionTextDatas */
	FLinearColor DefaultDirectionTextColor; /* Ofs: 0x440 Size: 0x10 - StructProperty TslGame.TslCompassWidget.DefaultDirectionTextColor */
	int32_t BearingUnit; /* Ofs: 0x450 Size: 0x4 - IntProperty TslGame.TslCompassWidget.BearingUnit */
	float Width; /* Ofs: 0x454 Size: 0x4 - FloatProperty TslGame.TslCompassWidget.Width */
	uint8_t boolField458;
	uint8_t UnknownData459[0x3];
	float CompassYaw; /* Ofs: 0x45C Size: 0x4 - FloatProperty TslGame.TslCompassWidget.CompassYaw */
	float LastCompassParam; /* Ofs: 0x460 Size: 0x4 - FloatProperty TslGame.TslCompassWidget.LastCompassParam */
	float LastCompassYaw; /* Ofs: 0x464 Size: 0x4 - FloatProperty TslGame.TslCompassWidget.LastCompassYaw */
	FVector LastCharacterLocation; /* Ofs: 0x468 Size: 0xC - StructProperty TslGame.TslCompassWidget.LastCharacterLocation */
	uint8_t UnknownData474[0x4];
	TArray<struct FVector2D> LastMapMarkerPositions; /* Ofs: 0x478 Size: 0x10 - ArrayProperty TslGame.TslCompassWidget.LastMapMarkerPositions */
	FVector2D LastMyMapMarkerPosition; /* Ofs: 0x488 Size: 0x8 - StructProperty TslGame.TslCompassWidget.LastMyMapMarkerPosition */
	ExternalPtr<struct UTslCharacter> LastViewTargetCharacter; /* Ofs: 0x490 Size: 0x8 - ObjectProperty TslGame.TslCompassWidget.LastViewTargetCharacter */
	ExternalPtr<struct UTslCharacter> CurrViewTargetCharacter; /* Ofs: 0x498 Size: 0x8 - ObjectProperty TslGame.TslCompassWidget.CurrViewTargetCharacter */
	uint8_t boolField4A0;
	uint8_t UnknownData4A1[0x7];


	inline bool SetMI_Compass(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x300, value); }
	inline bool SetMID_Compass(t_structHelper inst, ExternalPtr<struct UMaterialInstanceDynamic> value) { inst.WriteOffset(0x308, value); }
	inline bool SetCompassImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x310, value); }
	inline bool SetMarkerImageBinder(t_structHelper inst, FUmgWidgetBinder_Image value) { inst.WriteOffset(0x338, value); }
	inline bool SetMyOverlayBinder(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x360, value); }
	inline bool SetTeamOverlayBinder(t_structHelper inst, FUmgWidgetBinder_Overlay value) { inst.WriteOffset(0x380, value); }
	inline bool SetDirectionTextBlockBinder(t_structHelper inst, FUmgWidgetBinder_TextBlock value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetCompassMarkerWidgetClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetMyCompassMarkerWidget(t_structHelper inst, ExternalPtr<struct UTslCompassMarkerWidget> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetTeamMarkerWidgetsOfTeam(t_structHelper inst, TArray<ExternalPtr<struct UTslCompassMarkerWidget>> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetDivisionLevel(t_structHelper inst, float value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetOffset(t_structHelper inst, float value) { inst.WriteOffset(0x3E4, value); }
	inline bool bClockwise()
	{
		return boolField3E8& 0x1;
	}
	inline bool SetbClockwise(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3E8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOverrideDirectionTextDatas(t_structHelper inst, TMap<int32_t, struct FDirectionTextData> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetDefaultDirectionTextColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x440, value); }
	inline bool SetBearingUnit(t_structHelper inst, int32_t value) { inst.WriteOffset(0x450, value); }
	inline bool SetWidth(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool bIsInitilzed()
	{
		return boolField458& 0x1;
	}
	inline bool SetbIsInitilzed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x458, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCompassYaw(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetLastCompassParam(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetLastCompassYaw(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetLastCharacterLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x468, value); }
	inline bool SetLastMapMarkerPositions(t_structHelper inst, TArray<struct FVector2D> value) { inst.WriteOffset(0x478, value); }
	inline bool SetLastMyMapMarkerPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x488, value); }
	inline bool SetLastViewTargetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x490, value); }
	inline bool SetCurrViewTargetCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x498, value); }
	inline bool bCompassChanged()
	{
		return boolField4A0& 0x1;
	}
	inline bool SetbCompassChanged(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4A0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslCompassWidget = sizeof(UTslCompassWidget); // 1192
    static_assert(sizeof(UTslCompassWidget) == 0x4A8, "Size of UTslCompassWidget is not correct.");
	auto constexpr UTslCompassWidget_MI_Compass_Offset = offsetof(UTslCompassWidget, MI_Compass);
	static_assert(UTslCompassWidget_MI_Compass_Offset == 0x300, "UTslCompassWidget::MI_Compass offset is not 300");
	auto constexpr UTslCompassWidget_MID_Compass_Offset = offsetof(UTslCompassWidget, MID_Compass);
	static_assert(UTslCompassWidget_MID_Compass_Offset == 0x308, "UTslCompassWidget::MID_Compass offset is not 308");
	auto constexpr UTslCompassWidget_CompassImageBinder_Offset = offsetof(UTslCompassWidget, CompassImageBinder);
	static_assert(UTslCompassWidget_CompassImageBinder_Offset == 0x310, "UTslCompassWidget::CompassImageBinder offset is not 310");
	auto constexpr UTslCompassWidget_MarkerImageBinder_Offset = offsetof(UTslCompassWidget, MarkerImageBinder);
	static_assert(UTslCompassWidget_MarkerImageBinder_Offset == 0x338, "UTslCompassWidget::MarkerImageBinder offset is not 338");
	auto constexpr UTslCompassWidget_MyOverlayBinder_Offset = offsetof(UTslCompassWidget, MyOverlayBinder);
	static_assert(UTslCompassWidget_MyOverlayBinder_Offset == 0x360, "UTslCompassWidget::MyOverlayBinder offset is not 360");
	auto constexpr UTslCompassWidget_TeamOverlayBinder_Offset = offsetof(UTslCompassWidget, TeamOverlayBinder);
	static_assert(UTslCompassWidget_TeamOverlayBinder_Offset == 0x380, "UTslCompassWidget::TeamOverlayBinder offset is not 380");
	auto constexpr UTslCompassWidget_DirectionTextBlockBinder_Offset = offsetof(UTslCompassWidget, DirectionTextBlockBinder);
	static_assert(UTslCompassWidget_DirectionTextBlockBinder_Offset == 0x3a0, "UTslCompassWidget::DirectionTextBlockBinder offset is not 3a0");
	auto constexpr UTslCompassWidget_CompassMarkerWidgetClass_Offset = offsetof(UTslCompassWidget, CompassMarkerWidgetClass);
	static_assert(UTslCompassWidget_CompassMarkerWidgetClass_Offset == 0x3c0, "UTslCompassWidget::CompassMarkerWidgetClass offset is not 3c0");
	auto constexpr UTslCompassWidget_MyCompassMarkerWidget_Offset = offsetof(UTslCompassWidget, MyCompassMarkerWidget);
	static_assert(UTslCompassWidget_MyCompassMarkerWidget_Offset == 0x3c8, "UTslCompassWidget::MyCompassMarkerWidget offset is not 3c8");
	auto constexpr UTslCompassWidget_TeamMarkerWidgetsOfTeam_Offset = offsetof(UTslCompassWidget, TeamMarkerWidgetsOfTeam);
	static_assert(UTslCompassWidget_TeamMarkerWidgetsOfTeam_Offset == 0x3d0, "UTslCompassWidget::TeamMarkerWidgetsOfTeam offset is not 3d0");
	auto constexpr UTslCompassWidget_DivisionLevel_Offset = offsetof(UTslCompassWidget, DivisionLevel);
	static_assert(UTslCompassWidget_DivisionLevel_Offset == 0x3e0, "UTslCompassWidget::DivisionLevel offset is not 3e0");
	auto constexpr UTslCompassWidget_Offset_Offset = offsetof(UTslCompassWidget, Offset);
	static_assert(UTslCompassWidget_Offset_Offset == 0x3e4, "UTslCompassWidget::Offset offset is not 3e4");
	auto constexpr UTslCompassWidget_boolField3E8_Offset = offsetof(UTslCompassWidget, boolField3E8);
	static_assert(UTslCompassWidget_boolField3E8_Offset == 0x3e8, "UTslCompassWidget::boolField3E8 offset is not 3e8");
	auto constexpr UTslCompassWidget_OverrideDirectionTextDatas_Offset = offsetof(UTslCompassWidget, OverrideDirectionTextDatas);
	static_assert(UTslCompassWidget_OverrideDirectionTextDatas_Offset == 0x3f0, "UTslCompassWidget::OverrideDirectionTextDatas offset is not 3f0");
	auto constexpr UTslCompassWidget_DefaultDirectionTextColor_Offset = offsetof(UTslCompassWidget, DefaultDirectionTextColor);
	static_assert(UTslCompassWidget_DefaultDirectionTextColor_Offset == 0x440, "UTslCompassWidget::DefaultDirectionTextColor offset is not 440");
	auto constexpr UTslCompassWidget_BearingUnit_Offset = offsetof(UTslCompassWidget, BearingUnit);
	static_assert(UTslCompassWidget_BearingUnit_Offset == 0x450, "UTslCompassWidget::BearingUnit offset is not 450");
	auto constexpr UTslCompassWidget_Width_Offset = offsetof(UTslCompassWidget, Width);
	static_assert(UTslCompassWidget_Width_Offset == 0x454, "UTslCompassWidget::Width offset is not 454");
	auto constexpr UTslCompassWidget_boolField458_Offset = offsetof(UTslCompassWidget, boolField458);
	static_assert(UTslCompassWidget_boolField458_Offset == 0x458, "UTslCompassWidget::boolField458 offset is not 458");
	auto constexpr UTslCompassWidget_CompassYaw_Offset = offsetof(UTslCompassWidget, CompassYaw);
	static_assert(UTslCompassWidget_CompassYaw_Offset == 0x45c, "UTslCompassWidget::CompassYaw offset is not 45c");
	auto constexpr UTslCompassWidget_LastCompassParam_Offset = offsetof(UTslCompassWidget, LastCompassParam);
	static_assert(UTslCompassWidget_LastCompassParam_Offset == 0x460, "UTslCompassWidget::LastCompassParam offset is not 460");
	auto constexpr UTslCompassWidget_LastCompassYaw_Offset = offsetof(UTslCompassWidget, LastCompassYaw);
	static_assert(UTslCompassWidget_LastCompassYaw_Offset == 0x464, "UTslCompassWidget::LastCompassYaw offset is not 464");
	auto constexpr UTslCompassWidget_LastCharacterLocation_Offset = offsetof(UTslCompassWidget, LastCharacterLocation);
	static_assert(UTslCompassWidget_LastCharacterLocation_Offset == 0x468, "UTslCompassWidget::LastCharacterLocation offset is not 468");
	auto constexpr UTslCompassWidget_LastMapMarkerPositions_Offset = offsetof(UTslCompassWidget, LastMapMarkerPositions);
	static_assert(UTslCompassWidget_LastMapMarkerPositions_Offset == 0x478, "UTslCompassWidget::LastMapMarkerPositions offset is not 478");
	auto constexpr UTslCompassWidget_LastMyMapMarkerPosition_Offset = offsetof(UTslCompassWidget, LastMyMapMarkerPosition);
	static_assert(UTslCompassWidget_LastMyMapMarkerPosition_Offset == 0x488, "UTslCompassWidget::LastMyMapMarkerPosition offset is not 488");
	auto constexpr UTslCompassWidget_LastViewTargetCharacter_Offset = offsetof(UTslCompassWidget, LastViewTargetCharacter);
	static_assert(UTslCompassWidget_LastViewTargetCharacter_Offset == 0x490, "UTslCompassWidget::LastViewTargetCharacter offset is not 490");
	auto constexpr UTslCompassWidget_CurrViewTargetCharacter_Offset = offsetof(UTslCompassWidget, CurrViewTargetCharacter);
	static_assert(UTslCompassWidget_CurrViewTargetCharacter_Offset == 0x498, "UTslCompassWidget::CurrViewTargetCharacter offset is not 498");
	auto constexpr UTslCompassWidget_boolField4A0_Offset = offsetof(UTslCompassWidget, boolField4A0);
	static_assert(UTslCompassWidget_boolField4A0_Offset == 0x4a0, "UTslCompassWidget::boolField4A0 offset is not 4a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
