#pragma once
#include "UTeamMarkWidget.hpp"
#include "FVector2D.hpp"
#include "FColorBlindColorSet.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_TeamMarkWidget_new_2_C // Size: 0x630
	: public UTeamMarkWidget // Size: 0x560
{
private:
	typedef UBP_TeamMarkWidget_new_2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(186986); // id32("WidgetBlueprintGeneratedClass BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> ScaleByDistance; /* Ofs: 0x560 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.ScaleByDistance */
	ExternalPtr<struct UWidgetAnimation> OpacityByRadiusPercent; /* Ofs: 0x568 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.OpacityByRadiusPercent */
	ExternalPtr<struct UBorder> Border_1; /* Ofs: 0x570 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Border_1 */
	ExternalPtr<struct UCanvasPanel> CanvasPanel_1; /* Ofs: 0x578 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.CanvasPanel_1 */
	ExternalPtr<struct UImage> DeadPos; /* Ofs: 0x580 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.DeadPos */
	ExternalPtr<struct UImage> DirectionImage; /* Ofs: 0x588 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.DirectionImage */
	ExternalPtr<struct UImage> GroggyPos; /* Ofs: 0x590 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.GroggyPos */
	ExternalPtr<struct UImage> NormalPos; /* Ofs: 0x598 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.NormalPos */
	ExternalPtr<struct UImage> OutLineImage; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.OutLineImage */
	ExternalPtr<struct UImage> Parachute; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Parachute */
	ExternalPtr<struct UTextBlock> PlayerNameText; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.PlayerNameText */
	ExternalPtr<struct UImage> Quitter; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Quitter */
	ExternalPtr<struct UWidgetSwitcher> StateSwitcher; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.StateSwitcher */
	ExternalPtr<struct UImage> VehiclePos; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VehiclePos */
	ExternalPtr<struct UVerticalBox> VerticalBox_1; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VerticalBox_1 */
	ExternalPtr<struct UVerticalBox> VerticalBox_2; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VerticalBox_2 */
	ExternalPtr<struct UVerticalBox> VerticalBox_3; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VerticalBox_3 */
	ExternalPtr<struct UVerticalBox> VerticalBox_5; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VerticalBox_5 */
	ExternalPtr<struct UVerticalBox> VerticalBox_6; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.VerticalBox_6 */
	float ImageSize_1; /* Ofs: 0x5F8 Size: 0x4 - FloatProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.ImageSize_1 */
	float Width; /* Ofs: 0x5FC Size: 0x4 - FloatProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Width */
	float Height; /* Ofs: 0x600 Size: 0x4 - FloatProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.Height */
	uint8_t UnknownData604[0x4];
	ExternalPtr<struct UTslCharacter> NewVar_1; /* Ofs: 0x608 Size: 0x8 - ObjectProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.NewVar_1 */
	uint8_t boolField610;
	uint8_t UnknownData611[0x3];
	FVector2D MoveLocation; /* Ofs: 0x614 Size: 0x8 - StructProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.MoveLocation */
	uint8_t UnknownData61C[0x4];
	FColorBlindColorSet ColorBlindColorSet; /* Ofs: 0x620 Size: 0x10 - StructProperty BP_TeamMarkWidget_new_3.BP_TeamMarkWidget_new_2_C.ColorBlindColorSet */


	inline bool SetScaleByDistance(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x560, value); }
	inline bool SetOpacityByRadiusPercent(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x568, value); }
	inline bool SetBorder_1(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x570, value); }
	inline bool SetCanvasPanel_1(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x578, value); }
	inline bool SetDeadPos(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x580, value); }
	inline bool SetDirectionImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x588, value); }
	inline bool SetGroggyPos(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x590, value); }
	inline bool SetNormalPos(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x598, value); }
	inline bool SetOutLineImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetParachute(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetPlayerNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetQuitter(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetStateSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetVehiclePos(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetVerticalBox_1(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetVerticalBox_2(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetVerticalBox_3(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetVerticalBox_5(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetVerticalBox_6(t_structHelper inst, ExternalPtr<struct UVerticalBox> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetImageSize_1(t_structHelper inst, float value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetWidth(t_structHelper inst, float value) { inst.WriteOffset(0x5FC, value); }
	inline bool SetHeight(t_structHelper inst, float value) { inst.WriteOffset(0x600, value); }
	inline bool SetNewVar_1(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x608, value); }
	inline bool IsPrevGroggyState()
	{
		return boolField610& 0x1;
	}
	inline bool SetIsPrevGroggyState(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x610, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMoveLocation(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x614, value); }
	inline bool SetColorBlindColorSet(t_structHelper inst, FColorBlindColorSet value) { inst.WriteOffset(0x620, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_TeamMarkWidget_new_2_C = sizeof(UBP_TeamMarkWidget_new_2_C); // 1584
    static_assert(sizeof(UBP_TeamMarkWidget_new_2_C) == 0x630, "Size of UBP_TeamMarkWidget_new_2_C is not correct.");
	auto constexpr UBP_TeamMarkWidget_new_2_C_ScaleByDistance_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, ScaleByDistance);
	static_assert(UBP_TeamMarkWidget_new_2_C_ScaleByDistance_Offset == 0x560, "UBP_TeamMarkWidget_new_2_C::ScaleByDistance offset is not 560");
	auto constexpr UBP_TeamMarkWidget_new_2_C_OpacityByRadiusPercent_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, OpacityByRadiusPercent);
	static_assert(UBP_TeamMarkWidget_new_2_C_OpacityByRadiusPercent_Offset == 0x568, "UBP_TeamMarkWidget_new_2_C::OpacityByRadiusPercent offset is not 568");
	auto constexpr UBP_TeamMarkWidget_new_2_C_Border_1_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, Border_1);
	static_assert(UBP_TeamMarkWidget_new_2_C_Border_1_Offset == 0x570, "UBP_TeamMarkWidget_new_2_C::Border_1 offset is not 570");
	auto constexpr UBP_TeamMarkWidget_new_2_C_CanvasPanel_1_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, CanvasPanel_1);
	static_assert(UBP_TeamMarkWidget_new_2_C_CanvasPanel_1_Offset == 0x578, "UBP_TeamMarkWidget_new_2_C::CanvasPanel_1 offset is not 578");
	auto constexpr UBP_TeamMarkWidget_new_2_C_DeadPos_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, DeadPos);
	static_assert(UBP_TeamMarkWidget_new_2_C_DeadPos_Offset == 0x580, "UBP_TeamMarkWidget_new_2_C::DeadPos offset is not 580");
	auto constexpr UBP_TeamMarkWidget_new_2_C_DirectionImage_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, DirectionImage);
	static_assert(UBP_TeamMarkWidget_new_2_C_DirectionImage_Offset == 0x588, "UBP_TeamMarkWidget_new_2_C::DirectionImage offset is not 588");
	auto constexpr UBP_TeamMarkWidget_new_2_C_GroggyPos_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, GroggyPos);
	static_assert(UBP_TeamMarkWidget_new_2_C_GroggyPos_Offset == 0x590, "UBP_TeamMarkWidget_new_2_C::GroggyPos offset is not 590");
	auto constexpr UBP_TeamMarkWidget_new_2_C_NormalPos_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, NormalPos);
	static_assert(UBP_TeamMarkWidget_new_2_C_NormalPos_Offset == 0x598, "UBP_TeamMarkWidget_new_2_C::NormalPos offset is not 598");
	auto constexpr UBP_TeamMarkWidget_new_2_C_OutLineImage_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, OutLineImage);
	static_assert(UBP_TeamMarkWidget_new_2_C_OutLineImage_Offset == 0x5a0, "UBP_TeamMarkWidget_new_2_C::OutLineImage offset is not 5a0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_Parachute_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, Parachute);
	static_assert(UBP_TeamMarkWidget_new_2_C_Parachute_Offset == 0x5a8, "UBP_TeamMarkWidget_new_2_C::Parachute offset is not 5a8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_PlayerNameText_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, PlayerNameText);
	static_assert(UBP_TeamMarkWidget_new_2_C_PlayerNameText_Offset == 0x5b0, "UBP_TeamMarkWidget_new_2_C::PlayerNameText offset is not 5b0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_Quitter_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, Quitter);
	static_assert(UBP_TeamMarkWidget_new_2_C_Quitter_Offset == 0x5b8, "UBP_TeamMarkWidget_new_2_C::Quitter offset is not 5b8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_StateSwitcher_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, StateSwitcher);
	static_assert(UBP_TeamMarkWidget_new_2_C_StateSwitcher_Offset == 0x5c0, "UBP_TeamMarkWidget_new_2_C::StateSwitcher offset is not 5c0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VehiclePos_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VehiclePos);
	static_assert(UBP_TeamMarkWidget_new_2_C_VehiclePos_Offset == 0x5c8, "UBP_TeamMarkWidget_new_2_C::VehiclePos offset is not 5c8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VerticalBox_1_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VerticalBox_1);
	static_assert(UBP_TeamMarkWidget_new_2_C_VerticalBox_1_Offset == 0x5d0, "UBP_TeamMarkWidget_new_2_C::VerticalBox_1 offset is not 5d0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VerticalBox_2_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VerticalBox_2);
	static_assert(UBP_TeamMarkWidget_new_2_C_VerticalBox_2_Offset == 0x5d8, "UBP_TeamMarkWidget_new_2_C::VerticalBox_2 offset is not 5d8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VerticalBox_3_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VerticalBox_3);
	static_assert(UBP_TeamMarkWidget_new_2_C_VerticalBox_3_Offset == 0x5e0, "UBP_TeamMarkWidget_new_2_C::VerticalBox_3 offset is not 5e0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VerticalBox_5_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VerticalBox_5);
	static_assert(UBP_TeamMarkWidget_new_2_C_VerticalBox_5_Offset == 0x5e8, "UBP_TeamMarkWidget_new_2_C::VerticalBox_5 offset is not 5e8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_VerticalBox_6_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, VerticalBox_6);
	static_assert(UBP_TeamMarkWidget_new_2_C_VerticalBox_6_Offset == 0x5f0, "UBP_TeamMarkWidget_new_2_C::VerticalBox_6 offset is not 5f0");
	auto constexpr UBP_TeamMarkWidget_new_2_C_ImageSize_1_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, ImageSize_1);
	static_assert(UBP_TeamMarkWidget_new_2_C_ImageSize_1_Offset == 0x5f8, "UBP_TeamMarkWidget_new_2_C::ImageSize_1 offset is not 5f8");
	auto constexpr UBP_TeamMarkWidget_new_2_C_Width_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, Width);
	static_assert(UBP_TeamMarkWidget_new_2_C_Width_Offset == 0x5fc, "UBP_TeamMarkWidget_new_2_C::Width offset is not 5fc");
	auto constexpr UBP_TeamMarkWidget_new_2_C_Height_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, Height);
	static_assert(UBP_TeamMarkWidget_new_2_C_Height_Offset == 0x600, "UBP_TeamMarkWidget_new_2_C::Height offset is not 600");
	auto constexpr UBP_TeamMarkWidget_new_2_C_NewVar_1_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, NewVar_1);
	static_assert(UBP_TeamMarkWidget_new_2_C_NewVar_1_Offset == 0x608, "UBP_TeamMarkWidget_new_2_C::NewVar_1 offset is not 608");
	auto constexpr UBP_TeamMarkWidget_new_2_C_boolField610_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, boolField610);
	static_assert(UBP_TeamMarkWidget_new_2_C_boolField610_Offset == 0x610, "UBP_TeamMarkWidget_new_2_C::boolField610 offset is not 610");
	auto constexpr UBP_TeamMarkWidget_new_2_C_MoveLocation_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, MoveLocation);
	static_assert(UBP_TeamMarkWidget_new_2_C_MoveLocation_Offset == 0x614, "UBP_TeamMarkWidget_new_2_C::MoveLocation offset is not 614");
	auto constexpr UBP_TeamMarkWidget_new_2_C_ColorBlindColorSet_Offset = offsetof(UBP_TeamMarkWidget_new_2_C, ColorBlindColorSet);
	static_assert(UBP_TeamMarkWidget_new_2_C_ColorBlindColorSet_Offset == 0x620, "UBP_TeamMarkWidget_new_2_C::ColorBlindColorSet offset is not 620");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
