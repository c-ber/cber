#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_RecoilDebug_Target_C // Size: 0x314
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_RecoilDebug_Target_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(90659); // id32("WidgetBlueprintGeneratedClass W_RecoilDebug_Target.W_RecoilDebug_Target_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_1 */
	ExternalPtr<struct UButton> Button_Absolute; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_Absolute */
	ExternalPtr<struct UButton> Button_Relative; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_Relative */
	ExternalPtr<struct UButton> Button_RenderBox; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_RenderBox */
	ExternalPtr<struct UButton> Button_RenderPoint; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_RenderPoint */
	ExternalPtr<struct UButton> Button_ZoomIn; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_ZoomIn */
	ExternalPtr<struct UButton> Button_ZoomOut; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Button_ZoomOut */
	ExternalPtr<struct UCanvasPanel> CP_GridList; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.CP_GridList */
	ExternalPtr<struct UCanvasPanel> CP_PointList; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.CP_PointList */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Image_2 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Image_3 */
	ExternalPtr<struct UImage> Image_6; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Image_6 */
	ExternalPtr<struct UImage> Image_7; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Image_7 */
	ExternalPtr<struct UImage> Img_PointDrawType; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Img_PointDrawType */
	ExternalPtr<struct URetainerBox> Retainer_GridPanel; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Retainer_GridPanel */
	ExternalPtr<struct USlider> Slider_50; /* Ofs: 0x2C8 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.Slider_50 */
	ExternalPtr<struct UImage> SliderBG; /* Ofs: 0x2D0 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.SliderBG */
	ExternalPtr<struct UTextBlock> T_PointDrawType; /* Ofs: 0x2D8 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.T_PointDrawType */
	ExternalPtr<struct UTextBlock> T_SliderValue; /* Ofs: 0x2E0 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.T_SliderValue */
	ExternalPtr<struct UW_RecoilDebug_Target_GridMarkH_C> W_RecoilDebug_Target_GridMarkH_313; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.W_RecoilDebug_Target_GridMarkH_313 */
	float PositionScale; /* Ofs: 0x2F0 Size: 0x4 - FloatProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.PositionScale */
	int32_t ZoomLevel; /* Ofs: 0x2F4 Size: 0x4 - IntProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.ZoomLevel */
	int32_t DebugValueType; /* Ofs: 0x2F8 Size: 0x4 - IntProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.DebugValueType */
	float StepScale; /* Ofs: 0x2FC Size: 0x4 - FloatProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.StepScale */
	int32_t DebugRenderType; /* Ofs: 0x300 Size: 0x4 - IntProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.DebugRenderType */
	float BoxSizeScale; /* Ofs: 0x304 Size: 0x4 - FloatProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.BoxSizeScale */
	float VerticalVariationScalar; /* Ofs: 0x308 Size: 0x4 - FloatProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.VerticalVariationScalar */
	float MaxRangeLimit; /* Ofs: 0x30C Size: 0x4 - FloatProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.MaxRangeLimit */
	int32_t PointDrawType; /* Ofs: 0x310 Size: 0x4 - IntProperty W_RecoilDebug_Target.W_RecoilDebug_Target_C.PointDrawType */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButton_Absolute(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetButton_Relative(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x260, value); }
	inline bool SetButton_RenderBox(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x268, value); }
	inline bool SetButton_RenderPoint(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x270, value); }
	inline bool SetButton_ZoomIn(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetButton_ZoomOut(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCP_GridList(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x288, value); }
	inline bool SetCP_PointList(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x290, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x298, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetImage_6(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetImage_7(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetImg_PointDrawType(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetRetainer_GridPanel(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetSlider_50(t_structHelper inst, ExternalPtr<struct USlider> value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetSliderBG(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetT_PointDrawType(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetT_SliderValue(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetW_RecoilDebug_Target_GridMarkH_313(t_structHelper inst, ExternalPtr<struct UW_RecoilDebug_Target_GridMarkH_C> value) { inst.WriteOffset(0x2E8, value); }
	inline bool SetPositionScale(t_structHelper inst, float value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetZoomLevel(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F4, value); }
	inline bool SetDebugValueType(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2F8, value); }
	inline bool SetStepScale(t_structHelper inst, float value) { inst.WriteOffset(0x2FC, value); }
	inline bool SetDebugRenderType(t_structHelper inst, int32_t value) { inst.WriteOffset(0x300, value); }
	inline bool SetBoxSizeScale(t_structHelper inst, float value) { inst.WriteOffset(0x304, value); }
	inline bool SetVerticalVariationScalar(t_structHelper inst, float value) { inst.WriteOffset(0x308, value); }
	inline bool SetMaxRangeLimit(t_structHelper inst, float value) { inst.WriteOffset(0x30C, value); }
	inline bool SetPointDrawType(t_structHelper inst, int32_t value) { inst.WriteOffset(0x310, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_RecoilDebug_Target_C = sizeof(UW_RecoilDebug_Target_C); // 788
    static_assert(sizeof(UW_RecoilDebug_Target_C) == 0x314, "Size of UW_RecoilDebug_Target_C is not correct.");
	auto constexpr UW_RecoilDebug_Target_C_UberGraphFrame_Offset = offsetof(UW_RecoilDebug_Target_C, UberGraphFrame);
	static_assert(UW_RecoilDebug_Target_C_UberGraphFrame_Offset == 0x248, "UW_RecoilDebug_Target_C::UberGraphFrame offset is not 248");
	auto constexpr UW_RecoilDebug_Target_C_Button_1_Offset = offsetof(UW_RecoilDebug_Target_C, Button_1);
	static_assert(UW_RecoilDebug_Target_C_Button_1_Offset == 0x250, "UW_RecoilDebug_Target_C::Button_1 offset is not 250");
	auto constexpr UW_RecoilDebug_Target_C_Button_Absolute_Offset = offsetof(UW_RecoilDebug_Target_C, Button_Absolute);
	static_assert(UW_RecoilDebug_Target_C_Button_Absolute_Offset == 0x258, "UW_RecoilDebug_Target_C::Button_Absolute offset is not 258");
	auto constexpr UW_RecoilDebug_Target_C_Button_Relative_Offset = offsetof(UW_RecoilDebug_Target_C, Button_Relative);
	static_assert(UW_RecoilDebug_Target_C_Button_Relative_Offset == 0x260, "UW_RecoilDebug_Target_C::Button_Relative offset is not 260");
	auto constexpr UW_RecoilDebug_Target_C_Button_RenderBox_Offset = offsetof(UW_RecoilDebug_Target_C, Button_RenderBox);
	static_assert(UW_RecoilDebug_Target_C_Button_RenderBox_Offset == 0x268, "UW_RecoilDebug_Target_C::Button_RenderBox offset is not 268");
	auto constexpr UW_RecoilDebug_Target_C_Button_RenderPoint_Offset = offsetof(UW_RecoilDebug_Target_C, Button_RenderPoint);
	static_assert(UW_RecoilDebug_Target_C_Button_RenderPoint_Offset == 0x270, "UW_RecoilDebug_Target_C::Button_RenderPoint offset is not 270");
	auto constexpr UW_RecoilDebug_Target_C_Button_ZoomIn_Offset = offsetof(UW_RecoilDebug_Target_C, Button_ZoomIn);
	static_assert(UW_RecoilDebug_Target_C_Button_ZoomIn_Offset == 0x278, "UW_RecoilDebug_Target_C::Button_ZoomIn offset is not 278");
	auto constexpr UW_RecoilDebug_Target_C_Button_ZoomOut_Offset = offsetof(UW_RecoilDebug_Target_C, Button_ZoomOut);
	static_assert(UW_RecoilDebug_Target_C_Button_ZoomOut_Offset == 0x280, "UW_RecoilDebug_Target_C::Button_ZoomOut offset is not 280");
	auto constexpr UW_RecoilDebug_Target_C_CP_GridList_Offset = offsetof(UW_RecoilDebug_Target_C, CP_GridList);
	static_assert(UW_RecoilDebug_Target_C_CP_GridList_Offset == 0x288, "UW_RecoilDebug_Target_C::CP_GridList offset is not 288");
	auto constexpr UW_RecoilDebug_Target_C_CP_PointList_Offset = offsetof(UW_RecoilDebug_Target_C, CP_PointList);
	static_assert(UW_RecoilDebug_Target_C_CP_PointList_Offset == 0x290, "UW_RecoilDebug_Target_C::CP_PointList offset is not 290");
	auto constexpr UW_RecoilDebug_Target_C_Image_2_Offset = offsetof(UW_RecoilDebug_Target_C, Image_2);
	static_assert(UW_RecoilDebug_Target_C_Image_2_Offset == 0x298, "UW_RecoilDebug_Target_C::Image_2 offset is not 298");
	auto constexpr UW_RecoilDebug_Target_C_Image_3_Offset = offsetof(UW_RecoilDebug_Target_C, Image_3);
	static_assert(UW_RecoilDebug_Target_C_Image_3_Offset == 0x2a0, "UW_RecoilDebug_Target_C::Image_3 offset is not 2a0");
	auto constexpr UW_RecoilDebug_Target_C_Image_6_Offset = offsetof(UW_RecoilDebug_Target_C, Image_6);
	static_assert(UW_RecoilDebug_Target_C_Image_6_Offset == 0x2a8, "UW_RecoilDebug_Target_C::Image_6 offset is not 2a8");
	auto constexpr UW_RecoilDebug_Target_C_Image_7_Offset = offsetof(UW_RecoilDebug_Target_C, Image_7);
	static_assert(UW_RecoilDebug_Target_C_Image_7_Offset == 0x2b0, "UW_RecoilDebug_Target_C::Image_7 offset is not 2b0");
	auto constexpr UW_RecoilDebug_Target_C_Img_PointDrawType_Offset = offsetof(UW_RecoilDebug_Target_C, Img_PointDrawType);
	static_assert(UW_RecoilDebug_Target_C_Img_PointDrawType_Offset == 0x2b8, "UW_RecoilDebug_Target_C::Img_PointDrawType offset is not 2b8");
	auto constexpr UW_RecoilDebug_Target_C_Retainer_GridPanel_Offset = offsetof(UW_RecoilDebug_Target_C, Retainer_GridPanel);
	static_assert(UW_RecoilDebug_Target_C_Retainer_GridPanel_Offset == 0x2c0, "UW_RecoilDebug_Target_C::Retainer_GridPanel offset is not 2c0");
	auto constexpr UW_RecoilDebug_Target_C_Slider_50_Offset = offsetof(UW_RecoilDebug_Target_C, Slider_50);
	static_assert(UW_RecoilDebug_Target_C_Slider_50_Offset == 0x2c8, "UW_RecoilDebug_Target_C::Slider_50 offset is not 2c8");
	auto constexpr UW_RecoilDebug_Target_C_SliderBG_Offset = offsetof(UW_RecoilDebug_Target_C, SliderBG);
	static_assert(UW_RecoilDebug_Target_C_SliderBG_Offset == 0x2d0, "UW_RecoilDebug_Target_C::SliderBG offset is not 2d0");
	auto constexpr UW_RecoilDebug_Target_C_T_PointDrawType_Offset = offsetof(UW_RecoilDebug_Target_C, T_PointDrawType);
	static_assert(UW_RecoilDebug_Target_C_T_PointDrawType_Offset == 0x2d8, "UW_RecoilDebug_Target_C::T_PointDrawType offset is not 2d8");
	auto constexpr UW_RecoilDebug_Target_C_T_SliderValue_Offset = offsetof(UW_RecoilDebug_Target_C, T_SliderValue);
	static_assert(UW_RecoilDebug_Target_C_T_SliderValue_Offset == 0x2e0, "UW_RecoilDebug_Target_C::T_SliderValue offset is not 2e0");
	auto constexpr UW_RecoilDebug_Target_C_W_RecoilDebug_Target_GridMarkH_313_Offset = offsetof(UW_RecoilDebug_Target_C, W_RecoilDebug_Target_GridMarkH_313);
	static_assert(UW_RecoilDebug_Target_C_W_RecoilDebug_Target_GridMarkH_313_Offset == 0x2e8, "UW_RecoilDebug_Target_C::W_RecoilDebug_Target_GridMarkH_313 offset is not 2e8");
	auto constexpr UW_RecoilDebug_Target_C_PositionScale_Offset = offsetof(UW_RecoilDebug_Target_C, PositionScale);
	static_assert(UW_RecoilDebug_Target_C_PositionScale_Offset == 0x2f0, "UW_RecoilDebug_Target_C::PositionScale offset is not 2f0");
	auto constexpr UW_RecoilDebug_Target_C_ZoomLevel_Offset = offsetof(UW_RecoilDebug_Target_C, ZoomLevel);
	static_assert(UW_RecoilDebug_Target_C_ZoomLevel_Offset == 0x2f4, "UW_RecoilDebug_Target_C::ZoomLevel offset is not 2f4");
	auto constexpr UW_RecoilDebug_Target_C_DebugValueType_Offset = offsetof(UW_RecoilDebug_Target_C, DebugValueType);
	static_assert(UW_RecoilDebug_Target_C_DebugValueType_Offset == 0x2f8, "UW_RecoilDebug_Target_C::DebugValueType offset is not 2f8");
	auto constexpr UW_RecoilDebug_Target_C_StepScale_Offset = offsetof(UW_RecoilDebug_Target_C, StepScale);
	static_assert(UW_RecoilDebug_Target_C_StepScale_Offset == 0x2fc, "UW_RecoilDebug_Target_C::StepScale offset is not 2fc");
	auto constexpr UW_RecoilDebug_Target_C_DebugRenderType_Offset = offsetof(UW_RecoilDebug_Target_C, DebugRenderType);
	static_assert(UW_RecoilDebug_Target_C_DebugRenderType_Offset == 0x300, "UW_RecoilDebug_Target_C::DebugRenderType offset is not 300");
	auto constexpr UW_RecoilDebug_Target_C_BoxSizeScale_Offset = offsetof(UW_RecoilDebug_Target_C, BoxSizeScale);
	static_assert(UW_RecoilDebug_Target_C_BoxSizeScale_Offset == 0x304, "UW_RecoilDebug_Target_C::BoxSizeScale offset is not 304");
	auto constexpr UW_RecoilDebug_Target_C_VerticalVariationScalar_Offset = offsetof(UW_RecoilDebug_Target_C, VerticalVariationScalar);
	static_assert(UW_RecoilDebug_Target_C_VerticalVariationScalar_Offset == 0x308, "UW_RecoilDebug_Target_C::VerticalVariationScalar offset is not 308");
	auto constexpr UW_RecoilDebug_Target_C_MaxRangeLimit_Offset = offsetof(UW_RecoilDebug_Target_C, MaxRangeLimit);
	static_assert(UW_RecoilDebug_Target_C_MaxRangeLimit_Offset == 0x30c, "UW_RecoilDebug_Target_C::MaxRangeLimit offset is not 30c");
	auto constexpr UW_RecoilDebug_Target_C_PointDrawType_Offset = offsetof(UW_RecoilDebug_Target_C, PointDrawType);
	static_assert(UW_RecoilDebug_Target_C_PointDrawType_Offset == 0x310, "UW_RecoilDebug_Target_C::PointDrawType offset is not 310");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
