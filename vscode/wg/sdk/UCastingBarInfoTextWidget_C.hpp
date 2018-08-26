#pragma once
#include "UUmgBaseWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCastingBarInfoTextWidget_C // Size: 0x381
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UCastingBarInfoTextWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(167771); // id32("WidgetBlueprintGeneratedClass CastingBarInfoTextWidget.CastingBarInfoTextWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x300 Size: 0x8 - StructProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x308 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> Emerging; /* Ofs: 0x310 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Emerging */
	ExternalPtr<struct UWidgetAnimation> Blinking; /* Ofs: 0x318 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Blinking */
	ExternalPtr<struct UWidgetSwitcher> CancelKeySwitcher; /* Ofs: 0x320 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CancelKeySwitcher */
	ExternalPtr<struct UHorizontalBox> CastingInfoCancelMsgBox; /* Ofs: 0x328 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CastingInfoCancelMsgBox */
	ExternalPtr<struct UBorder> CastingInfoCancelMsgLayer; /* Ofs: 0x330 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CastingInfoCancelMsgLayer */
	ExternalPtr<struct UBorder> CastingInfoLayerBorder; /* Ofs: 0x338 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CastingInfoLayerBorder */
	ExternalPtr<struct UTextBlock> CastingInfoText; /* Ofs: 0x340 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CastingInfoText */
	ExternalPtr<struct UImage> KeyImage; /* Ofs: 0x348 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.KeyImage */
	ExternalPtr<struct UTextBlock> KeyText; /* Ofs: 0x350 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.KeyText */
	ExternalPtr<struct UImage> ProgressCircle; /* Ofs: 0x358 Size: 0x8 - ObjectProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.ProgressCircle */
	uint8_t boolField360;
	uint8_t UnknownData361[0x7];
	FText CastName; /* Ofs: 0x368 Size: 0x18 - TextProperty CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.CastName */
	uint8_t boolField380;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x300, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x308, value); }
	inline bool SetEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x310, value); }
	inline bool SetBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x318, value); }
	inline bool SetCancelKeySwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x320, value); }
	inline bool SetCastingInfoCancelMsgBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x328, value); }
	inline bool SetCastingInfoCancelMsgLayer(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x330, value); }
	inline bool SetCastingInfoLayerBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x338, value); }
	inline bool SetCastingInfoText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x340, value); }
	inline bool SetKeyImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetKeyText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x350, value); }
	inline bool SetProgressCircle(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool bIsVanishing()
	{
		return boolField360& 0x1;
	}
	inline bool SetbIsVanishing(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x360, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCastName(t_structHelper inst, FText value) { inst.WriteOffset(0x368, value); }
	inline bool bIsCancelable()
	{
		return boolField380& 0x1;
	}
	inline bool SetbIsCancelable(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x380, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCastingBarInfoTextWidget_C = sizeof(UCastingBarInfoTextWidget_C); // 897
    static_assert(sizeof(UCastingBarInfoTextWidget_C) == 0x381, "Size of UCastingBarInfoTextWidget_C is not correct.");
	auto constexpr UCastingBarInfoTextWidget_C_UberGraphFrame_Offset = offsetof(UCastingBarInfoTextWidget_C, UberGraphFrame);
	static_assert(UCastingBarInfoTextWidget_C_UberGraphFrame_Offset == 0x300, "UCastingBarInfoTextWidget_C::UberGraphFrame offset is not 300");
	auto constexpr UCastingBarInfoTextWidget_C_Vanishing_Offset = offsetof(UCastingBarInfoTextWidget_C, Vanishing);
	static_assert(UCastingBarInfoTextWidget_C_Vanishing_Offset == 0x308, "UCastingBarInfoTextWidget_C::Vanishing offset is not 308");
	auto constexpr UCastingBarInfoTextWidget_C_Emerging_Offset = offsetof(UCastingBarInfoTextWidget_C, Emerging);
	static_assert(UCastingBarInfoTextWidget_C_Emerging_Offset == 0x310, "UCastingBarInfoTextWidget_C::Emerging offset is not 310");
	auto constexpr UCastingBarInfoTextWidget_C_Blinking_Offset = offsetof(UCastingBarInfoTextWidget_C, Blinking);
	static_assert(UCastingBarInfoTextWidget_C_Blinking_Offset == 0x318, "UCastingBarInfoTextWidget_C::Blinking offset is not 318");
	auto constexpr UCastingBarInfoTextWidget_C_CancelKeySwitcher_Offset = offsetof(UCastingBarInfoTextWidget_C, CancelKeySwitcher);
	static_assert(UCastingBarInfoTextWidget_C_CancelKeySwitcher_Offset == 0x320, "UCastingBarInfoTextWidget_C::CancelKeySwitcher offset is not 320");
	auto constexpr UCastingBarInfoTextWidget_C_CastingInfoCancelMsgBox_Offset = offsetof(UCastingBarInfoTextWidget_C, CastingInfoCancelMsgBox);
	static_assert(UCastingBarInfoTextWidget_C_CastingInfoCancelMsgBox_Offset == 0x328, "UCastingBarInfoTextWidget_C::CastingInfoCancelMsgBox offset is not 328");
	auto constexpr UCastingBarInfoTextWidget_C_CastingInfoCancelMsgLayer_Offset = offsetof(UCastingBarInfoTextWidget_C, CastingInfoCancelMsgLayer);
	static_assert(UCastingBarInfoTextWidget_C_CastingInfoCancelMsgLayer_Offset == 0x330, "UCastingBarInfoTextWidget_C::CastingInfoCancelMsgLayer offset is not 330");
	auto constexpr UCastingBarInfoTextWidget_C_CastingInfoLayerBorder_Offset = offsetof(UCastingBarInfoTextWidget_C, CastingInfoLayerBorder);
	static_assert(UCastingBarInfoTextWidget_C_CastingInfoLayerBorder_Offset == 0x338, "UCastingBarInfoTextWidget_C::CastingInfoLayerBorder offset is not 338");
	auto constexpr UCastingBarInfoTextWidget_C_CastingInfoText_Offset = offsetof(UCastingBarInfoTextWidget_C, CastingInfoText);
	static_assert(UCastingBarInfoTextWidget_C_CastingInfoText_Offset == 0x340, "UCastingBarInfoTextWidget_C::CastingInfoText offset is not 340");
	auto constexpr UCastingBarInfoTextWidget_C_KeyImage_Offset = offsetof(UCastingBarInfoTextWidget_C, KeyImage);
	static_assert(UCastingBarInfoTextWidget_C_KeyImage_Offset == 0x348, "UCastingBarInfoTextWidget_C::KeyImage offset is not 348");
	auto constexpr UCastingBarInfoTextWidget_C_KeyText_Offset = offsetof(UCastingBarInfoTextWidget_C, KeyText);
	static_assert(UCastingBarInfoTextWidget_C_KeyText_Offset == 0x350, "UCastingBarInfoTextWidget_C::KeyText offset is not 350");
	auto constexpr UCastingBarInfoTextWidget_C_ProgressCircle_Offset = offsetof(UCastingBarInfoTextWidget_C, ProgressCircle);
	static_assert(UCastingBarInfoTextWidget_C_ProgressCircle_Offset == 0x358, "UCastingBarInfoTextWidget_C::ProgressCircle offset is not 358");
	auto constexpr UCastingBarInfoTextWidget_C_boolField360_Offset = offsetof(UCastingBarInfoTextWidget_C, boolField360);
	static_assert(UCastingBarInfoTextWidget_C_boolField360_Offset == 0x360, "UCastingBarInfoTextWidget_C::boolField360 offset is not 360");
	auto constexpr UCastingBarInfoTextWidget_C_CastName_Offset = offsetof(UCastingBarInfoTextWidget_C, CastName);
	static_assert(UCastingBarInfoTextWidget_C_CastName_Offset == 0x368, "UCastingBarInfoTextWidget_C::CastName offset is not 368");
	auto constexpr UCastingBarInfoTextWidget_C_boolField380_Offset = offsetof(UCastingBarInfoTextWidget_C, boolField380);
	static_assert(UCastingBarInfoTextWidget_C_boolField380_Offset == 0x380, "UCastingBarInfoTextWidget_C::boolField380 offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
