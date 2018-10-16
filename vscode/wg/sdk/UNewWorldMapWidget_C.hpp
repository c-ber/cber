#pragma once
#include "UInputHookingWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNewWorldMapWidget_C // Size: 0x528
	: public UInputHookingWidget_C // Size: 0x330
{
private:
	typedef UNewWorldMapWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(69473); // id32("WidgetBlueprintGeneratedClass NewWorldMapWidget.NewWorldMapWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> MapFadeOut; /* Ofs: 0x338 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MapFadeOut */
	ExternalPtr<struct UWidgetAnimation> MapFadeIn; /* Ofs: 0x340 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MapFadeIn */
	ExternalPtr<struct UTextBlock> DisplayNameText; /* Ofs: 0x348 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.DisplayNameText */
	ExternalPtr<struct UImage> FirstKeyImage; /* Ofs: 0x350 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.FirstKeyImage */
	ExternalPtr<struct USizeBox> FirstKeySizeBox; /* Ofs: 0x358 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.FirstKeySizeBox */
	ExternalPtr<struct UWidgetSwitcher> HelpWidget; /* Ofs: 0x360 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.HelpWidget */
	ExternalPtr<struct UWidgetSwitcher> HelpWidgetXboxSwitcher; /* Ofs: 0x368 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.HelpWidgetXboxSwitcher */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x370 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x378 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_2 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x380 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_3 */
	ExternalPtr<struct UImage> Image_4; /* Ofs: 0x388 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_4 */
	ExternalPtr<struct UImage> Image_7; /* Ofs: 0x390 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_7 */
	ExternalPtr<struct UImage> Image_8; /* Ofs: 0x398 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_8 */
	ExternalPtr<struct UImage> Image_15; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_15 */
	ExternalPtr<struct UImage> Image_16; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_16 */
	ExternalPtr<struct UImage> Image_27; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_27 */
	ExternalPtr<struct UImage> Image_28; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_28 */
	ExternalPtr<struct UImage> Image_29; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_29 */
	ExternalPtr<struct UImage> Image_31; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_31 */
	ExternalPtr<struct UImage> Image_33; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_33 */
	ExternalPtr<struct UImage> Image_35; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.Image_35 */
	ExternalPtr<struct UMapGridWidget_C> MapWidget; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MapWidget */
	ExternalPtr<struct UButton> MinimizeHelpButton; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MinimizeHelpButton */
	ExternalPtr<struct UImage> PadGuideImg; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.PadGuideImg */
	ExternalPtr<struct UButton> RestoreHelpButton; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.RestoreHelpButton */
	ExternalPtr<struct USizeBox> SizeBox_7; /* Ofs: 0x400 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_7 */
	ExternalPtr<struct USizeBox> SizeBox_8; /* Ofs: 0x408 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_8 */
	ExternalPtr<struct USizeBox> SizeBox_9; /* Ofs: 0x410 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_9 */
	ExternalPtr<struct USizeBox> SizeBox_11; /* Ofs: 0x418 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_11 */
	ExternalPtr<struct USizeBox> SizeBox_13; /* Ofs: 0x420 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_13 */
	ExternalPtr<struct USizeBox> SizeBox_15; /* Ofs: 0x428 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeBox_15 */
	ExternalPtr<struct UTextBlock> TextBlock_35; /* Ofs: 0x430 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_35 */
	ExternalPtr<struct UTextBlock> TextBlock_36; /* Ofs: 0x438 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_36 */
	ExternalPtr<struct UTextBlock> TextBlock_38; /* Ofs: 0x440 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_38 */
	ExternalPtr<struct UTextBlock> TextBlock_40; /* Ofs: 0x448 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_40 */
	ExternalPtr<struct UTextBlock> TextBlock_42; /* Ofs: 0x450 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_42 */
	ExternalPtr<struct UTextBlock> TextBlock_44; /* Ofs: 0x458 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.TextBlock_44 */
	ExternalPtr<struct UUIBlurBackground_C> UIBlurBackground; /* Ofs: 0x460 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.UIBlurBackground */
	ExternalPtr<struct UCurveFloat> MapSizeCurve; /* Ofs: 0x468 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MapSizeCurve */
	ExternalPtr<struct UCurveFloat> MapSizeChangeTimeCurve; /* Ofs: 0x470 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MapSizeChangeTimeCurve */
	FVector2D MouseCapturePosotion; /* Ofs: 0x478 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.MouseCapturePosotion */
	uint8_t boolField480;
	uint8_t UnknownData481[0x3];
	float Time_MapSize; /* Ofs: 0x484 Size: 0x4 - FloatProperty NewWorldMapWidget.NewWorldMapWidget_C.Time_MapSize */
	uint8_t boolField488;
	uint8_t UnknownData489[0x3];
	FVector2D StartSize; /* Ofs: 0x48C Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.StartSize */
	FVector2D SizeOffset; /* Ofs: 0x494 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.SizeOffset */
	uint8_t UnknownData49C[0x4];
	ExternalPtr<struct UCurveFloat> PositionMoveTimeCurve; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.PositionMoveTimeCurve */
	float Time_Position; /* Ofs: 0x4A8 Size: 0x4 - FloatProperty NewWorldMapWidget.NewWorldMapWidget_C.Time_Position */
	uint8_t boolField4AC;
	uint8_t UnknownData4AD[0x3];
	FVector2D StartPosition; /* Ofs: 0x4B0 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.StartPosition */
	FVector2D PositionOffset; /* Ofs: 0x4B8 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.PositionOffset */
	FVector2D TestMove; /* Ofs: 0x4C0 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.TestMove */
	uint8_t boolField4C8;
	uint8_t UnknownData4C9[0x7];
	TArray<struct FVector2D> AlignmentStack; /* Ofs: 0x4D0 Size: 0x10 - ArrayProperty NewWorldMapWidget.NewWorldMapWidget_C.AlignmentStack */
	float LastZoomLevel; /* Ofs: 0x4E0 Size: 0x4 - FloatProperty NewWorldMapWidget.NewWorldMapWidget_C.LastZoomLevel */
	FVector2D NewVar_1; /* Ofs: 0x4E4 Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.NewVar_1 */
	FVector2D MouseDownPosition; /* Ofs: 0x4EC Size: 0x8 - StructProperty NewWorldMapWidget.NewWorldMapWidget_C.MouseDownPosition */
	uint8_t boolField4F4;
	uint8_t UnknownData4F5[0x3];
	int32_t NewVar_3; /* Ofs: 0x4F8 Size: 0x4 - IntProperty NewWorldMapWidget.NewWorldMapWidget_C.NewVar_3 */
	uint8_t boolField4FC;
	uint8_t boolField4FD;
	uint8_t UnknownData4FE[0x2];
	FScriptMulticastDelegate OnHideMyself; /* Ofs: 0x500 Size: 0x10 - MulticastDelegateProperty NewWorldMapWidget.NewWorldMapWidget_C.OnHideMyself */
	ExternalPtr<struct UCurveFloat> ZoomMultiplierCurve; /* Ofs: 0x510 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.ZoomMultiplierCurve */
	uint8_t boolField518;
	uint8_t UnknownData519[0x7];
	ExternalPtr<struct UCurveFloat> MovePadGuideCurve; /* Ofs: 0x520 Size: 0x8 - ObjectProperty NewWorldMapWidget.NewWorldMapWidget_C.MovePadGuideCurve */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetMapFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool SetMapFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x340, value); }
	inline bool SetDisplayNameText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x348, value); }
	inline bool SetFirstKeyImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetFirstKeySizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x358, value); }
	inline bool SetHelpWidget(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x360, value); }
	inline bool SetHelpWidgetXboxSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetImage_4(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetImage_7(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x390, value); }
	inline bool SetImage_8(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetImage_15(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetImage_16(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetImage_27(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetImage_28(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetImage_29(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetImage_31(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetImage_33(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetImage_35(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetMapWidget(t_structHelper inst, ExternalPtr<struct UMapGridWidget_C> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetMinimizeHelpButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetPadGuideImg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetRestoreHelpButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetSizeBox_7(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x400, value); }
	inline bool SetSizeBox_8(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x408, value); }
	inline bool SetSizeBox_9(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x410, value); }
	inline bool SetSizeBox_11(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x418, value); }
	inline bool SetSizeBox_13(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x420, value); }
	inline bool SetSizeBox_15(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x428, value); }
	inline bool SetTextBlock_35(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x430, value); }
	inline bool SetTextBlock_36(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x438, value); }
	inline bool SetTextBlock_38(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x440, value); }
	inline bool SetTextBlock_40(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x448, value); }
	inline bool SetTextBlock_42(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x450, value); }
	inline bool SetTextBlock_44(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x458, value); }
	inline bool SetUIBlurBackground(t_structHelper inst, ExternalPtr<struct UUIBlurBackground_C> value) { inst.WriteOffset(0x460, value); }
	inline bool SetMapSizeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x468, value); }
	inline bool SetMapSizeChangeTimeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x470, value); }
	inline bool SetMouseCapturePosotion(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x478, value); }
	inline bool bMouseDown()
	{
		return boolField480& 0x1;
	}
	inline bool SetbMouseDown(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x480, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTime_MapSize(t_structHelper inst, float value) { inst.WriteOffset(0x484, value); }
	inline bool bChangeMapSize()
	{
		return boolField488& 0x1;
	}
	inline bool SetbChangeMapSize(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x488, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartSize(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x48C, value); }
	inline bool SetSizeOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x494, value); }
	inline bool SetPositionMoveTimeCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetTime_Position(t_structHelper inst, float value) { inst.WriteOffset(0x4A8, value); }
	inline bool bMovePosition()
	{
		return boolField4AC& 0x1;
	}
	inline bool SetbMovePosition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetStartPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetPositionOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetTestMove(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4C0, value); }
	inline bool WheelUp()
	{
		return boolField4C8& 0x1;
	}
	inline bool SetWheelUp(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4C8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAlignmentStack(t_structHelper inst, TArray<struct FVector2D> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetLastZoomLevel(t_structHelper inst, float value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetNewVar_1(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4E4, value); }
	inline bool SetMouseDownPosition(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x4EC, value); }
	inline bool NewVar_2()
	{
		return boolField4F4& 0x1;
	}
	inline bool SetNewVar_2(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4F4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetNewVar_3(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4F8, value); }
	inline bool bMapMovingReady()
	{
		return boolField4FC& 0x1;
	}
	inline bool SetbMapMovingReady(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4FC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bIsReplaying()
	{
		return boolField4FD& 0x1;
	}
	inline bool SetbIsReplaying(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4FD, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnHideMyself(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x500, value); }
	inline bool SetZoomMultiplierCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x510, value); }
	inline bool bIsObserving()
	{
		return boolField518& 0x1;
	}
	inline bool SetbIsObserving(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x518, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMovePadGuideCurve(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x520, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNewWorldMapWidget_C = sizeof(UNewWorldMapWidget_C); // 1320
    static_assert(sizeof(UNewWorldMapWidget_C) == 0x528, "Size of UNewWorldMapWidget_C is not correct.");
	auto constexpr UNewWorldMapWidget_C_UberGraphFrame_Offset = offsetof(UNewWorldMapWidget_C, UberGraphFrame);
	static_assert(UNewWorldMapWidget_C_UberGraphFrame_Offset == 0x330, "UNewWorldMapWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UNewWorldMapWidget_C_MapFadeOut_Offset = offsetof(UNewWorldMapWidget_C, MapFadeOut);
	static_assert(UNewWorldMapWidget_C_MapFadeOut_Offset == 0x338, "UNewWorldMapWidget_C::MapFadeOut offset is not 338");
	auto constexpr UNewWorldMapWidget_C_MapFadeIn_Offset = offsetof(UNewWorldMapWidget_C, MapFadeIn);
	static_assert(UNewWorldMapWidget_C_MapFadeIn_Offset == 0x340, "UNewWorldMapWidget_C::MapFadeIn offset is not 340");
	auto constexpr UNewWorldMapWidget_C_DisplayNameText_Offset = offsetof(UNewWorldMapWidget_C, DisplayNameText);
	static_assert(UNewWorldMapWidget_C_DisplayNameText_Offset == 0x348, "UNewWorldMapWidget_C::DisplayNameText offset is not 348");
	auto constexpr UNewWorldMapWidget_C_FirstKeyImage_Offset = offsetof(UNewWorldMapWidget_C, FirstKeyImage);
	static_assert(UNewWorldMapWidget_C_FirstKeyImage_Offset == 0x350, "UNewWorldMapWidget_C::FirstKeyImage offset is not 350");
	auto constexpr UNewWorldMapWidget_C_FirstKeySizeBox_Offset = offsetof(UNewWorldMapWidget_C, FirstKeySizeBox);
	static_assert(UNewWorldMapWidget_C_FirstKeySizeBox_Offset == 0x358, "UNewWorldMapWidget_C::FirstKeySizeBox offset is not 358");
	auto constexpr UNewWorldMapWidget_C_HelpWidget_Offset = offsetof(UNewWorldMapWidget_C, HelpWidget);
	static_assert(UNewWorldMapWidget_C_HelpWidget_Offset == 0x360, "UNewWorldMapWidget_C::HelpWidget offset is not 360");
	auto constexpr UNewWorldMapWidget_C_HelpWidgetXboxSwitcher_Offset = offsetof(UNewWorldMapWidget_C, HelpWidgetXboxSwitcher);
	static_assert(UNewWorldMapWidget_C_HelpWidgetXboxSwitcher_Offset == 0x368, "UNewWorldMapWidget_C::HelpWidgetXboxSwitcher offset is not 368");
	auto constexpr UNewWorldMapWidget_C_Image_1_Offset = offsetof(UNewWorldMapWidget_C, Image_1);
	static_assert(UNewWorldMapWidget_C_Image_1_Offset == 0x370, "UNewWorldMapWidget_C::Image_1 offset is not 370");
	auto constexpr UNewWorldMapWidget_C_Image_2_Offset = offsetof(UNewWorldMapWidget_C, Image_2);
	static_assert(UNewWorldMapWidget_C_Image_2_Offset == 0x378, "UNewWorldMapWidget_C::Image_2 offset is not 378");
	auto constexpr UNewWorldMapWidget_C_Image_3_Offset = offsetof(UNewWorldMapWidget_C, Image_3);
	static_assert(UNewWorldMapWidget_C_Image_3_Offset == 0x380, "UNewWorldMapWidget_C::Image_3 offset is not 380");
	auto constexpr UNewWorldMapWidget_C_Image_4_Offset = offsetof(UNewWorldMapWidget_C, Image_4);
	static_assert(UNewWorldMapWidget_C_Image_4_Offset == 0x388, "UNewWorldMapWidget_C::Image_4 offset is not 388");
	auto constexpr UNewWorldMapWidget_C_Image_7_Offset = offsetof(UNewWorldMapWidget_C, Image_7);
	static_assert(UNewWorldMapWidget_C_Image_7_Offset == 0x390, "UNewWorldMapWidget_C::Image_7 offset is not 390");
	auto constexpr UNewWorldMapWidget_C_Image_8_Offset = offsetof(UNewWorldMapWidget_C, Image_8);
	static_assert(UNewWorldMapWidget_C_Image_8_Offset == 0x398, "UNewWorldMapWidget_C::Image_8 offset is not 398");
	auto constexpr UNewWorldMapWidget_C_Image_15_Offset = offsetof(UNewWorldMapWidget_C, Image_15);
	static_assert(UNewWorldMapWidget_C_Image_15_Offset == 0x3a0, "UNewWorldMapWidget_C::Image_15 offset is not 3a0");
	auto constexpr UNewWorldMapWidget_C_Image_16_Offset = offsetof(UNewWorldMapWidget_C, Image_16);
	static_assert(UNewWorldMapWidget_C_Image_16_Offset == 0x3a8, "UNewWorldMapWidget_C::Image_16 offset is not 3a8");
	auto constexpr UNewWorldMapWidget_C_Image_27_Offset = offsetof(UNewWorldMapWidget_C, Image_27);
	static_assert(UNewWorldMapWidget_C_Image_27_Offset == 0x3b0, "UNewWorldMapWidget_C::Image_27 offset is not 3b0");
	auto constexpr UNewWorldMapWidget_C_Image_28_Offset = offsetof(UNewWorldMapWidget_C, Image_28);
	static_assert(UNewWorldMapWidget_C_Image_28_Offset == 0x3b8, "UNewWorldMapWidget_C::Image_28 offset is not 3b8");
	auto constexpr UNewWorldMapWidget_C_Image_29_Offset = offsetof(UNewWorldMapWidget_C, Image_29);
	static_assert(UNewWorldMapWidget_C_Image_29_Offset == 0x3c0, "UNewWorldMapWidget_C::Image_29 offset is not 3c0");
	auto constexpr UNewWorldMapWidget_C_Image_31_Offset = offsetof(UNewWorldMapWidget_C, Image_31);
	static_assert(UNewWorldMapWidget_C_Image_31_Offset == 0x3c8, "UNewWorldMapWidget_C::Image_31 offset is not 3c8");
	auto constexpr UNewWorldMapWidget_C_Image_33_Offset = offsetof(UNewWorldMapWidget_C, Image_33);
	static_assert(UNewWorldMapWidget_C_Image_33_Offset == 0x3d0, "UNewWorldMapWidget_C::Image_33 offset is not 3d0");
	auto constexpr UNewWorldMapWidget_C_Image_35_Offset = offsetof(UNewWorldMapWidget_C, Image_35);
	static_assert(UNewWorldMapWidget_C_Image_35_Offset == 0x3d8, "UNewWorldMapWidget_C::Image_35 offset is not 3d8");
	auto constexpr UNewWorldMapWidget_C_MapWidget_Offset = offsetof(UNewWorldMapWidget_C, MapWidget);
	static_assert(UNewWorldMapWidget_C_MapWidget_Offset == 0x3e0, "UNewWorldMapWidget_C::MapWidget offset is not 3e0");
	auto constexpr UNewWorldMapWidget_C_MinimizeHelpButton_Offset = offsetof(UNewWorldMapWidget_C, MinimizeHelpButton);
	static_assert(UNewWorldMapWidget_C_MinimizeHelpButton_Offset == 0x3e8, "UNewWorldMapWidget_C::MinimizeHelpButton offset is not 3e8");
	auto constexpr UNewWorldMapWidget_C_PadGuideImg_Offset = offsetof(UNewWorldMapWidget_C, PadGuideImg);
	static_assert(UNewWorldMapWidget_C_PadGuideImg_Offset == 0x3f0, "UNewWorldMapWidget_C::PadGuideImg offset is not 3f0");
	auto constexpr UNewWorldMapWidget_C_RestoreHelpButton_Offset = offsetof(UNewWorldMapWidget_C, RestoreHelpButton);
	static_assert(UNewWorldMapWidget_C_RestoreHelpButton_Offset == 0x3f8, "UNewWorldMapWidget_C::RestoreHelpButton offset is not 3f8");
	auto constexpr UNewWorldMapWidget_C_SizeBox_7_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_7);
	static_assert(UNewWorldMapWidget_C_SizeBox_7_Offset == 0x400, "UNewWorldMapWidget_C::SizeBox_7 offset is not 400");
	auto constexpr UNewWorldMapWidget_C_SizeBox_8_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_8);
	static_assert(UNewWorldMapWidget_C_SizeBox_8_Offset == 0x408, "UNewWorldMapWidget_C::SizeBox_8 offset is not 408");
	auto constexpr UNewWorldMapWidget_C_SizeBox_9_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_9);
	static_assert(UNewWorldMapWidget_C_SizeBox_9_Offset == 0x410, "UNewWorldMapWidget_C::SizeBox_9 offset is not 410");
	auto constexpr UNewWorldMapWidget_C_SizeBox_11_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_11);
	static_assert(UNewWorldMapWidget_C_SizeBox_11_Offset == 0x418, "UNewWorldMapWidget_C::SizeBox_11 offset is not 418");
	auto constexpr UNewWorldMapWidget_C_SizeBox_13_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_13);
	static_assert(UNewWorldMapWidget_C_SizeBox_13_Offset == 0x420, "UNewWorldMapWidget_C::SizeBox_13 offset is not 420");
	auto constexpr UNewWorldMapWidget_C_SizeBox_15_Offset = offsetof(UNewWorldMapWidget_C, SizeBox_15);
	static_assert(UNewWorldMapWidget_C_SizeBox_15_Offset == 0x428, "UNewWorldMapWidget_C::SizeBox_15 offset is not 428");
	auto constexpr UNewWorldMapWidget_C_TextBlock_35_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_35);
	static_assert(UNewWorldMapWidget_C_TextBlock_35_Offset == 0x430, "UNewWorldMapWidget_C::TextBlock_35 offset is not 430");
	auto constexpr UNewWorldMapWidget_C_TextBlock_36_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_36);
	static_assert(UNewWorldMapWidget_C_TextBlock_36_Offset == 0x438, "UNewWorldMapWidget_C::TextBlock_36 offset is not 438");
	auto constexpr UNewWorldMapWidget_C_TextBlock_38_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_38);
	static_assert(UNewWorldMapWidget_C_TextBlock_38_Offset == 0x440, "UNewWorldMapWidget_C::TextBlock_38 offset is not 440");
	auto constexpr UNewWorldMapWidget_C_TextBlock_40_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_40);
	static_assert(UNewWorldMapWidget_C_TextBlock_40_Offset == 0x448, "UNewWorldMapWidget_C::TextBlock_40 offset is not 448");
	auto constexpr UNewWorldMapWidget_C_TextBlock_42_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_42);
	static_assert(UNewWorldMapWidget_C_TextBlock_42_Offset == 0x450, "UNewWorldMapWidget_C::TextBlock_42 offset is not 450");
	auto constexpr UNewWorldMapWidget_C_TextBlock_44_Offset = offsetof(UNewWorldMapWidget_C, TextBlock_44);
	static_assert(UNewWorldMapWidget_C_TextBlock_44_Offset == 0x458, "UNewWorldMapWidget_C::TextBlock_44 offset is not 458");
	auto constexpr UNewWorldMapWidget_C_UIBlurBackground_Offset = offsetof(UNewWorldMapWidget_C, UIBlurBackground);
	static_assert(UNewWorldMapWidget_C_UIBlurBackground_Offset == 0x460, "UNewWorldMapWidget_C::UIBlurBackground offset is not 460");
	auto constexpr UNewWorldMapWidget_C_MapSizeCurve_Offset = offsetof(UNewWorldMapWidget_C, MapSizeCurve);
	static_assert(UNewWorldMapWidget_C_MapSizeCurve_Offset == 0x468, "UNewWorldMapWidget_C::MapSizeCurve offset is not 468");
	auto constexpr UNewWorldMapWidget_C_MapSizeChangeTimeCurve_Offset = offsetof(UNewWorldMapWidget_C, MapSizeChangeTimeCurve);
	static_assert(UNewWorldMapWidget_C_MapSizeChangeTimeCurve_Offset == 0x470, "UNewWorldMapWidget_C::MapSizeChangeTimeCurve offset is not 470");
	auto constexpr UNewWorldMapWidget_C_MouseCapturePosotion_Offset = offsetof(UNewWorldMapWidget_C, MouseCapturePosotion);
	static_assert(UNewWorldMapWidget_C_MouseCapturePosotion_Offset == 0x478, "UNewWorldMapWidget_C::MouseCapturePosotion offset is not 478");
	auto constexpr UNewWorldMapWidget_C_boolField480_Offset = offsetof(UNewWorldMapWidget_C, boolField480);
	static_assert(UNewWorldMapWidget_C_boolField480_Offset == 0x480, "UNewWorldMapWidget_C::boolField480 offset is not 480");
	auto constexpr UNewWorldMapWidget_C_Time_MapSize_Offset = offsetof(UNewWorldMapWidget_C, Time_MapSize);
	static_assert(UNewWorldMapWidget_C_Time_MapSize_Offset == 0x484, "UNewWorldMapWidget_C::Time_MapSize offset is not 484");
	auto constexpr UNewWorldMapWidget_C_boolField488_Offset = offsetof(UNewWorldMapWidget_C, boolField488);
	static_assert(UNewWorldMapWidget_C_boolField488_Offset == 0x488, "UNewWorldMapWidget_C::boolField488 offset is not 488");
	auto constexpr UNewWorldMapWidget_C_StartSize_Offset = offsetof(UNewWorldMapWidget_C, StartSize);
	static_assert(UNewWorldMapWidget_C_StartSize_Offset == 0x48c, "UNewWorldMapWidget_C::StartSize offset is not 48c");
	auto constexpr UNewWorldMapWidget_C_SizeOffset_Offset = offsetof(UNewWorldMapWidget_C, SizeOffset);
	static_assert(UNewWorldMapWidget_C_SizeOffset_Offset == 0x494, "UNewWorldMapWidget_C::SizeOffset offset is not 494");
	auto constexpr UNewWorldMapWidget_C_PositionMoveTimeCurve_Offset = offsetof(UNewWorldMapWidget_C, PositionMoveTimeCurve);
	static_assert(UNewWorldMapWidget_C_PositionMoveTimeCurve_Offset == 0x4a0, "UNewWorldMapWidget_C::PositionMoveTimeCurve offset is not 4a0");
	auto constexpr UNewWorldMapWidget_C_Time_Position_Offset = offsetof(UNewWorldMapWidget_C, Time_Position);
	static_assert(UNewWorldMapWidget_C_Time_Position_Offset == 0x4a8, "UNewWorldMapWidget_C::Time_Position offset is not 4a8");
	auto constexpr UNewWorldMapWidget_C_boolField4AC_Offset = offsetof(UNewWorldMapWidget_C, boolField4AC);
	static_assert(UNewWorldMapWidget_C_boolField4AC_Offset == 0x4ac, "UNewWorldMapWidget_C::boolField4AC offset is not 4ac");
	auto constexpr UNewWorldMapWidget_C_StartPosition_Offset = offsetof(UNewWorldMapWidget_C, StartPosition);
	static_assert(UNewWorldMapWidget_C_StartPosition_Offset == 0x4b0, "UNewWorldMapWidget_C::StartPosition offset is not 4b0");
	auto constexpr UNewWorldMapWidget_C_PositionOffset_Offset = offsetof(UNewWorldMapWidget_C, PositionOffset);
	static_assert(UNewWorldMapWidget_C_PositionOffset_Offset == 0x4b8, "UNewWorldMapWidget_C::PositionOffset offset is not 4b8");
	auto constexpr UNewWorldMapWidget_C_TestMove_Offset = offsetof(UNewWorldMapWidget_C, TestMove);
	static_assert(UNewWorldMapWidget_C_TestMove_Offset == 0x4c0, "UNewWorldMapWidget_C::TestMove offset is not 4c0");
	auto constexpr UNewWorldMapWidget_C_boolField4C8_Offset = offsetof(UNewWorldMapWidget_C, boolField4C8);
	static_assert(UNewWorldMapWidget_C_boolField4C8_Offset == 0x4c8, "UNewWorldMapWidget_C::boolField4C8 offset is not 4c8");
	auto constexpr UNewWorldMapWidget_C_AlignmentStack_Offset = offsetof(UNewWorldMapWidget_C, AlignmentStack);
	static_assert(UNewWorldMapWidget_C_AlignmentStack_Offset == 0x4d0, "UNewWorldMapWidget_C::AlignmentStack offset is not 4d0");
	auto constexpr UNewWorldMapWidget_C_LastZoomLevel_Offset = offsetof(UNewWorldMapWidget_C, LastZoomLevel);
	static_assert(UNewWorldMapWidget_C_LastZoomLevel_Offset == 0x4e0, "UNewWorldMapWidget_C::LastZoomLevel offset is not 4e0");
	auto constexpr UNewWorldMapWidget_C_NewVar_1_Offset = offsetof(UNewWorldMapWidget_C, NewVar_1);
	static_assert(UNewWorldMapWidget_C_NewVar_1_Offset == 0x4e4, "UNewWorldMapWidget_C::NewVar_1 offset is not 4e4");
	auto constexpr UNewWorldMapWidget_C_MouseDownPosition_Offset = offsetof(UNewWorldMapWidget_C, MouseDownPosition);
	static_assert(UNewWorldMapWidget_C_MouseDownPosition_Offset == 0x4ec, "UNewWorldMapWidget_C::MouseDownPosition offset is not 4ec");
	auto constexpr UNewWorldMapWidget_C_boolField4F4_Offset = offsetof(UNewWorldMapWidget_C, boolField4F4);
	static_assert(UNewWorldMapWidget_C_boolField4F4_Offset == 0x4f4, "UNewWorldMapWidget_C::boolField4F4 offset is not 4f4");
	auto constexpr UNewWorldMapWidget_C_NewVar_3_Offset = offsetof(UNewWorldMapWidget_C, NewVar_3);
	static_assert(UNewWorldMapWidget_C_NewVar_3_Offset == 0x4f8, "UNewWorldMapWidget_C::NewVar_3 offset is not 4f8");
	auto constexpr UNewWorldMapWidget_C_boolField4FC_Offset = offsetof(UNewWorldMapWidget_C, boolField4FC);
	static_assert(UNewWorldMapWidget_C_boolField4FC_Offset == 0x4fc, "UNewWorldMapWidget_C::boolField4FC offset is not 4fc");
	auto constexpr UNewWorldMapWidget_C_boolField4FD_Offset = offsetof(UNewWorldMapWidget_C, boolField4FD);
	static_assert(UNewWorldMapWidget_C_boolField4FD_Offset == 0x4fd, "UNewWorldMapWidget_C::boolField4FD offset is not 4fd");
	auto constexpr UNewWorldMapWidget_C_OnHideMyself_Offset = offsetof(UNewWorldMapWidget_C, OnHideMyself);
	static_assert(UNewWorldMapWidget_C_OnHideMyself_Offset == 0x500, "UNewWorldMapWidget_C::OnHideMyself offset is not 500");
	auto constexpr UNewWorldMapWidget_C_ZoomMultiplierCurve_Offset = offsetof(UNewWorldMapWidget_C, ZoomMultiplierCurve);
	static_assert(UNewWorldMapWidget_C_ZoomMultiplierCurve_Offset == 0x510, "UNewWorldMapWidget_C::ZoomMultiplierCurve offset is not 510");
	auto constexpr UNewWorldMapWidget_C_boolField518_Offset = offsetof(UNewWorldMapWidget_C, boolField518);
	static_assert(UNewWorldMapWidget_C_boolField518_Offset == 0x518, "UNewWorldMapWidget_C::boolField518 offset is not 518");
	auto constexpr UNewWorldMapWidget_C_MovePadGuideCurve_Offset = offsetof(UNewWorldMapWidget_C, MovePadGuideCurve);
	static_assert(UNewWorldMapWidget_C_MovePadGuideCurve_Offset == 0x520, "UNewWorldMapWidget_C::MovePadGuideCurve offset is not 520");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
