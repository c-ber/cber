#pragma once
#include "UParachuteVehicleWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachuteVehicleWidget_C // Size: 0x39C
	: public UParachuteVehicleWidget // Size: 0x310
{
private:
	typedef UParachuteVehicleWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(187511); // id32("WidgetBlueprintGeneratedClass ParachuteVehicleWidget.ParachuteVehicleWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x310 Size: 0x8 - StructProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> PositionByPlayerAltitude; /* Ofs: 0x318 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.PositionByPlayerAltitude */
	ExternalPtr<struct UWidgetAnimation> WidgetVanishing; /* Ofs: 0x320 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.WidgetVanishing */
	ExternalPtr<struct UWidgetAnimation> WidgetEmerging; /* Ofs: 0x328 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.WidgetEmerging */
	ExternalPtr<struct UWidgetAnimation> ParachuteEmerging; /* Ofs: 0x330 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ParachuteEmerging */
	ExternalPtr<struct UTextBlock> AirSpeed; /* Ofs: 0x338 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.AirSpeed */
	ExternalPtr<struct USizeBox> AltitudeBackground; /* Ofs: 0x340 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.AltitudeBackground */
	ExternalPtr<struct USizeBox> ForceParachuteAlt; /* Ofs: 0x348 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ForceParachuteAlt */
	ExternalPtr<struct USizeBox> LandHeight; /* Ofs: 0x350 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.LandHeight */
	ExternalPtr<struct UImage> Parachute; /* Ofs: 0x358 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.Parachute */
	ExternalPtr<struct UBorder> ParachuteWidgetLayer; /* Ofs: 0x360 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ParachuteWidgetLayer */
	ExternalPtr<struct UHorizontalBox> PlayerIndicator; /* Ofs: 0x368 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.PlayerIndicator */
	ExternalPtr<struct UImage> PlayerPos; /* Ofs: 0x370 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.PlayerPos */
	ExternalPtr<struct UParachutePlayer_C> ParachutePawn; /* Ofs: 0x378 Size: 0x8 - ObjectProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ParachutePawn */
	float AltitudeMeterLength; /* Ofs: 0x380 Size: 0x4 - FloatProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.AltitudeMeterLength */
	FVector2D AltitudeMeterPlayerPosStart; /* Ofs: 0x384 Size: 0x8 - StructProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.AltitudeMeterPlayerPosStart */
	uint8_t boolField38C;
	uint8_t UnknownData38D[0x3];
	float ReleasableAtitude; /* Ofs: 0x390 Size: 0x4 - FloatProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ReleasableAtitude */
	uint8_t boolField394;
	uint8_t boolField395;
	uint8_t boolField396;
	uint8_t UnknownData397[0x1];
	int32_t ParachuteTick; /* Ofs: 0x398 Size: 0x4 - IntProperty ParachuteVehicleWidget.ParachuteVehicleWidget_C.ParachuteTick */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x310, value); }
	inline bool SetPositionByPlayerAltitude(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x318, value); }
	inline bool SetWidgetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x320, value); }
	inline bool SetWidgetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x328, value); }
	inline bool SetParachuteEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x330, value); }
	inline bool SetAirSpeed(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x338, value); }
	inline bool SetAltitudeBackground(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x340, value); }
	inline bool SetForceParachuteAlt(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x348, value); }
	inline bool SetLandHeight(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x350, value); }
	inline bool SetParachute(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetParachuteWidgetLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x360, value); }
	inline bool SetPlayerIndicator(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x368, value); }
	inline bool SetPlayerPos(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetParachutePawn(t_structHelper inst, ExternalPtr<struct UParachutePlayer_C> value) { inst.WriteOffset(0x378, value); }
	inline bool SetAltitudeMeterLength(t_structHelper inst, float value) { inst.WriteOffset(0x380, value); }
	inline bool SetAltitudeMeterPlayerPosStart(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x384, value); }
	inline bool isLanding()
	{
		return boolField38C& 0x1;
	}
	inline bool SetisLanding(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x38C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReleasableAtitude(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool bIsParachuteIconVanishing()
	{
		return boolField394& 0x1;
	}
	inline bool SetbIsParachuteIconVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x394, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool isParachuteReleased()
	{
		return boolField395& 0x1;
	}
	inline bool SetisParachuteReleased(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x395, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsWidgetVanishing()
	{
		return boolField396& 0x1;
	}
	inline bool SetbIsWidgetVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x396, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetParachuteTick(t_structHelper inst, int32_t value) { inst.WriteOffset(0x398, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachuteVehicleWidget_C = sizeof(UParachuteVehicleWidget_C); // 924
    static_assert(sizeof(UParachuteVehicleWidget_C) == 0x39C, "Size of UParachuteVehicleWidget_C is not correct.");
	auto constexpr UParachuteVehicleWidget_C_UberGraphFrame_Offset = offsetof(UParachuteVehicleWidget_C, UberGraphFrame);
	static_assert(UParachuteVehicleWidget_C_UberGraphFrame_Offset == 0x310, "UParachuteVehicleWidget_C::UberGraphFrame offset is not 310");
	auto constexpr UParachuteVehicleWidget_C_PositionByPlayerAltitude_Offset = offsetof(UParachuteVehicleWidget_C, PositionByPlayerAltitude);
	static_assert(UParachuteVehicleWidget_C_PositionByPlayerAltitude_Offset == 0x318, "UParachuteVehicleWidget_C::PositionByPlayerAltitude offset is not 318");
	auto constexpr UParachuteVehicleWidget_C_WidgetVanishing_Offset = offsetof(UParachuteVehicleWidget_C, WidgetVanishing);
	static_assert(UParachuteVehicleWidget_C_WidgetVanishing_Offset == 0x320, "UParachuteVehicleWidget_C::WidgetVanishing offset is not 320");
	auto constexpr UParachuteVehicleWidget_C_WidgetEmerging_Offset = offsetof(UParachuteVehicleWidget_C, WidgetEmerging);
	static_assert(UParachuteVehicleWidget_C_WidgetEmerging_Offset == 0x328, "UParachuteVehicleWidget_C::WidgetEmerging offset is not 328");
	auto constexpr UParachuteVehicleWidget_C_ParachuteEmerging_Offset = offsetof(UParachuteVehicleWidget_C, ParachuteEmerging);
	static_assert(UParachuteVehicleWidget_C_ParachuteEmerging_Offset == 0x330, "UParachuteVehicleWidget_C::ParachuteEmerging offset is not 330");
	auto constexpr UParachuteVehicleWidget_C_AirSpeed_Offset = offsetof(UParachuteVehicleWidget_C, AirSpeed);
	static_assert(UParachuteVehicleWidget_C_AirSpeed_Offset == 0x338, "UParachuteVehicleWidget_C::AirSpeed offset is not 338");
	auto constexpr UParachuteVehicleWidget_C_AltitudeBackground_Offset = offsetof(UParachuteVehicleWidget_C, AltitudeBackground);
	static_assert(UParachuteVehicleWidget_C_AltitudeBackground_Offset == 0x340, "UParachuteVehicleWidget_C::AltitudeBackground offset is not 340");
	auto constexpr UParachuteVehicleWidget_C_ForceParachuteAlt_Offset = offsetof(UParachuteVehicleWidget_C, ForceParachuteAlt);
	static_assert(UParachuteVehicleWidget_C_ForceParachuteAlt_Offset == 0x348, "UParachuteVehicleWidget_C::ForceParachuteAlt offset is not 348");
	auto constexpr UParachuteVehicleWidget_C_LandHeight_Offset = offsetof(UParachuteVehicleWidget_C, LandHeight);
	static_assert(UParachuteVehicleWidget_C_LandHeight_Offset == 0x350, "UParachuteVehicleWidget_C::LandHeight offset is not 350");
	auto constexpr UParachuteVehicleWidget_C_Parachute_Offset = offsetof(UParachuteVehicleWidget_C, Parachute);
	static_assert(UParachuteVehicleWidget_C_Parachute_Offset == 0x358, "UParachuteVehicleWidget_C::Parachute offset is not 358");
	auto constexpr UParachuteVehicleWidget_C_ParachuteWidgetLayer_Offset = offsetof(UParachuteVehicleWidget_C, ParachuteWidgetLayer);
	static_assert(UParachuteVehicleWidget_C_ParachuteWidgetLayer_Offset == 0x360, "UParachuteVehicleWidget_C::ParachuteWidgetLayer offset is not 360");
	auto constexpr UParachuteVehicleWidget_C_PlayerIndicator_Offset = offsetof(UParachuteVehicleWidget_C, PlayerIndicator);
	static_assert(UParachuteVehicleWidget_C_PlayerIndicator_Offset == 0x368, "UParachuteVehicleWidget_C::PlayerIndicator offset is not 368");
	auto constexpr UParachuteVehicleWidget_C_PlayerPos_Offset = offsetof(UParachuteVehicleWidget_C, PlayerPos);
	static_assert(UParachuteVehicleWidget_C_PlayerPos_Offset == 0x370, "UParachuteVehicleWidget_C::PlayerPos offset is not 370");
	auto constexpr UParachuteVehicleWidget_C_ParachutePawn_Offset = offsetof(UParachuteVehicleWidget_C, ParachutePawn);
	static_assert(UParachuteVehicleWidget_C_ParachutePawn_Offset == 0x378, "UParachuteVehicleWidget_C::ParachutePawn offset is not 378");
	auto constexpr UParachuteVehicleWidget_C_AltitudeMeterLength_Offset = offsetof(UParachuteVehicleWidget_C, AltitudeMeterLength);
	static_assert(UParachuteVehicleWidget_C_AltitudeMeterLength_Offset == 0x380, "UParachuteVehicleWidget_C::AltitudeMeterLength offset is not 380");
	auto constexpr UParachuteVehicleWidget_C_AltitudeMeterPlayerPosStart_Offset = offsetof(UParachuteVehicleWidget_C, AltitudeMeterPlayerPosStart);
	static_assert(UParachuteVehicleWidget_C_AltitudeMeterPlayerPosStart_Offset == 0x384, "UParachuteVehicleWidget_C::AltitudeMeterPlayerPosStart offset is not 384");
	auto constexpr UParachuteVehicleWidget_C_boolField38C_Offset = offsetof(UParachuteVehicleWidget_C, boolField38C);
	static_assert(UParachuteVehicleWidget_C_boolField38C_Offset == 0x38c, "UParachuteVehicleWidget_C::boolField38C offset is not 38c");
	auto constexpr UParachuteVehicleWidget_C_ReleasableAtitude_Offset = offsetof(UParachuteVehicleWidget_C, ReleasableAtitude);
	static_assert(UParachuteVehicleWidget_C_ReleasableAtitude_Offset == 0x390, "UParachuteVehicleWidget_C::ReleasableAtitude offset is not 390");
	auto constexpr UParachuteVehicleWidget_C_boolField394_Offset = offsetof(UParachuteVehicleWidget_C, boolField394);
	static_assert(UParachuteVehicleWidget_C_boolField394_Offset == 0x394, "UParachuteVehicleWidget_C::boolField394 offset is not 394");
	auto constexpr UParachuteVehicleWidget_C_boolField395_Offset = offsetof(UParachuteVehicleWidget_C, boolField395);
	static_assert(UParachuteVehicleWidget_C_boolField395_Offset == 0x395, "UParachuteVehicleWidget_C::boolField395 offset is not 395");
	auto constexpr UParachuteVehicleWidget_C_boolField396_Offset = offsetof(UParachuteVehicleWidget_C, boolField396);
	static_assert(UParachuteVehicleWidget_C_boolField396_Offset == 0x396, "UParachuteVehicleWidget_C::boolField396 offset is not 396");
	auto constexpr UParachuteVehicleWidget_C_ParachuteTick_Offset = offsetof(UParachuteVehicleWidget_C, ParachuteTick);
	static_assert(UParachuteVehicleWidget_C_ParachuteTick_Offset == 0x398, "UParachuteVehicleWidget_C::ParachuteTick offset is not 398");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
