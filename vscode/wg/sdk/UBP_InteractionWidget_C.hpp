#pragma once
#include "UInteractionBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_InteractionWidget_C // Size: 0x638
	: public UInteractionBaseWidget // Size: 0x590
{
private:
	typedef UBP_InteractionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184908); // id32("WidgetBlueprintGeneratedClass BP_InteractionWidget.BP_InteractionWidget_C")
		return ptr;
	}
	ExternalPtr<struct UWidgetAnimation> InteractionUnavaliableLooping; /* Ofs: 0x590 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionUnavaliableLooping */
	ExternalPtr<struct UWidgetAnimation> InteractionUnavaliableVanishing; /* Ofs: 0x598 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionUnavaliableVanishing */
	ExternalPtr<struct UWidgetAnimation> InteractionUnavaliableEmerging; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionUnavaliableEmerging */
	ExternalPtr<struct UWidgetAnimation> ResetItemSwitchAnimation; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.ResetItemSwitchAnimation */
	ExternalPtr<struct UWidgetAnimation> ItemSwitchAnimation; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.ItemSwitchAnimation */
	ExternalPtr<struct UWidgetAnimation> AdditionalMessageVanishing; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.AdditionalMessageVanishing */
	ExternalPtr<struct UWidgetAnimation> AdditionalMessageEmerging; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.AdditionalMessageEmerging */
	ExternalPtr<struct UWidgetAnimation> AdditionalMessageNormal; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.AdditionalMessageNormal */
	ExternalPtr<struct UWidgetAnimation> AdditionalMessageBlinking; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.AdditionalMessageBlinking */
	ExternalPtr<struct UWidgetAnimation> Vanishing; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Vanishing */
	ExternalPtr<struct UWidgetAnimation> show; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.show */
	ExternalPtr<struct UWidgetAnimation> Default; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Default */
	ExternalPtr<struct UImage> Image_2; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Image_2 */
	ExternalPtr<struct UImage> Image_6; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Image_6 */
	ExternalPtr<struct UImage> Image_7; /* Ofs: 0x600 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Image_7 */
	ExternalPtr<struct UImage> Image_157; /* Ofs: 0x608 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.Image_157 */
	ExternalPtr<struct UBorder> InteractionBorder; /* Ofs: 0x610 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionBorder */
	ExternalPtr<struct UImage> InteractionKeyImage_Left; /* Ofs: 0x618 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionKeyImage_Left */
	ExternalPtr<struct UImage> InteractionKeyImage_Right; /* Ofs: 0x620 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.InteractionKeyImage_Right */
	ExternalPtr<struct UImage> ProgressCircle; /* Ofs: 0x628 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.ProgressCircle */
	ExternalPtr<struct UImage> ProgressCircleBg; /* Ofs: 0x630 Size: 0x8 - ObjectProperty BP_InteractionWidget.BP_InteractionWidget_C.ProgressCircleBg */


	inline bool SetInteractionUnavaliableLooping(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x590, value); }
	inline bool SetInteractionUnavaliableVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x598, value); }
	inline bool SetInteractionUnavaliableEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetResetItemSwitchAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetItemSwitchAnimation(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetAdditionalMessageVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetAdditionalMessageEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetAdditionalMessageNormal(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetAdditionalMessageBlinking(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetVanishing(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5D8, value); }
	inline bool Setshow(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetDefault(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetImage_2(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetImage_6(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetImage_7(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x600, value); }
	inline bool SetImage_157(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x608, value); }
	inline bool SetInteractionBorder(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x610, value); }
	inline bool SetInteractionKeyImage_Left(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x618, value); }
	inline bool SetInteractionKeyImage_Right(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x620, value); }
	inline bool SetProgressCircle(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x628, value); }
	inline bool SetProgressCircleBg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x630, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_InteractionWidget_C = sizeof(UBP_InteractionWidget_C); // 1592
    static_assert(sizeof(UBP_InteractionWidget_C) == 0x638, "Size of UBP_InteractionWidget_C is not correct.");
	auto constexpr UBP_InteractionWidget_C_InteractionUnavaliableLooping_Offset = offsetof(UBP_InteractionWidget_C, InteractionUnavaliableLooping);
	static_assert(UBP_InteractionWidget_C_InteractionUnavaliableLooping_Offset == 0x590, "UBP_InteractionWidget_C::InteractionUnavaliableLooping offset is not 590");
	auto constexpr UBP_InteractionWidget_C_InteractionUnavaliableVanishing_Offset = offsetof(UBP_InteractionWidget_C, InteractionUnavaliableVanishing);
	static_assert(UBP_InteractionWidget_C_InteractionUnavaliableVanishing_Offset == 0x598, "UBP_InteractionWidget_C::InteractionUnavaliableVanishing offset is not 598");
	auto constexpr UBP_InteractionWidget_C_InteractionUnavaliableEmerging_Offset = offsetof(UBP_InteractionWidget_C, InteractionUnavaliableEmerging);
	static_assert(UBP_InteractionWidget_C_InteractionUnavaliableEmerging_Offset == 0x5a0, "UBP_InteractionWidget_C::InteractionUnavaliableEmerging offset is not 5a0");
	auto constexpr UBP_InteractionWidget_C_ResetItemSwitchAnimation_Offset = offsetof(UBP_InteractionWidget_C, ResetItemSwitchAnimation);
	static_assert(UBP_InteractionWidget_C_ResetItemSwitchAnimation_Offset == 0x5a8, "UBP_InteractionWidget_C::ResetItemSwitchAnimation offset is not 5a8");
	auto constexpr UBP_InteractionWidget_C_ItemSwitchAnimation_Offset = offsetof(UBP_InteractionWidget_C, ItemSwitchAnimation);
	static_assert(UBP_InteractionWidget_C_ItemSwitchAnimation_Offset == 0x5b0, "UBP_InteractionWidget_C::ItemSwitchAnimation offset is not 5b0");
	auto constexpr UBP_InteractionWidget_C_AdditionalMessageVanishing_Offset = offsetof(UBP_InteractionWidget_C, AdditionalMessageVanishing);
	static_assert(UBP_InteractionWidget_C_AdditionalMessageVanishing_Offset == 0x5b8, "UBP_InteractionWidget_C::AdditionalMessageVanishing offset is not 5b8");
	auto constexpr UBP_InteractionWidget_C_AdditionalMessageEmerging_Offset = offsetof(UBP_InteractionWidget_C, AdditionalMessageEmerging);
	static_assert(UBP_InteractionWidget_C_AdditionalMessageEmerging_Offset == 0x5c0, "UBP_InteractionWidget_C::AdditionalMessageEmerging offset is not 5c0");
	auto constexpr UBP_InteractionWidget_C_AdditionalMessageNormal_Offset = offsetof(UBP_InteractionWidget_C, AdditionalMessageNormal);
	static_assert(UBP_InteractionWidget_C_AdditionalMessageNormal_Offset == 0x5c8, "UBP_InteractionWidget_C::AdditionalMessageNormal offset is not 5c8");
	auto constexpr UBP_InteractionWidget_C_AdditionalMessageBlinking_Offset = offsetof(UBP_InteractionWidget_C, AdditionalMessageBlinking);
	static_assert(UBP_InteractionWidget_C_AdditionalMessageBlinking_Offset == 0x5d0, "UBP_InteractionWidget_C::AdditionalMessageBlinking offset is not 5d0");
	auto constexpr UBP_InteractionWidget_C_Vanishing_Offset = offsetof(UBP_InteractionWidget_C, Vanishing);
	static_assert(UBP_InteractionWidget_C_Vanishing_Offset == 0x5d8, "UBP_InteractionWidget_C::Vanishing offset is not 5d8");
	auto constexpr UBP_InteractionWidget_C_show_Offset = offsetof(UBP_InteractionWidget_C, show);
	static_assert(UBP_InteractionWidget_C_show_Offset == 0x5e0, "UBP_InteractionWidget_C::show offset is not 5e0");
	auto constexpr UBP_InteractionWidget_C_Default_Offset = offsetof(UBP_InteractionWidget_C, Default);
	static_assert(UBP_InteractionWidget_C_Default_Offset == 0x5e8, "UBP_InteractionWidget_C::Default offset is not 5e8");
	auto constexpr UBP_InteractionWidget_C_Image_2_Offset = offsetof(UBP_InteractionWidget_C, Image_2);
	static_assert(UBP_InteractionWidget_C_Image_2_Offset == 0x5f0, "UBP_InteractionWidget_C::Image_2 offset is not 5f0");
	auto constexpr UBP_InteractionWidget_C_Image_6_Offset = offsetof(UBP_InteractionWidget_C, Image_6);
	static_assert(UBP_InteractionWidget_C_Image_6_Offset == 0x5f8, "UBP_InteractionWidget_C::Image_6 offset is not 5f8");
	auto constexpr UBP_InteractionWidget_C_Image_7_Offset = offsetof(UBP_InteractionWidget_C, Image_7);
	static_assert(UBP_InteractionWidget_C_Image_7_Offset == 0x600, "UBP_InteractionWidget_C::Image_7 offset is not 600");
	auto constexpr UBP_InteractionWidget_C_Image_157_Offset = offsetof(UBP_InteractionWidget_C, Image_157);
	static_assert(UBP_InteractionWidget_C_Image_157_Offset == 0x608, "UBP_InteractionWidget_C::Image_157 offset is not 608");
	auto constexpr UBP_InteractionWidget_C_InteractionBorder_Offset = offsetof(UBP_InteractionWidget_C, InteractionBorder);
	static_assert(UBP_InteractionWidget_C_InteractionBorder_Offset == 0x610, "UBP_InteractionWidget_C::InteractionBorder offset is not 610");
	auto constexpr UBP_InteractionWidget_C_InteractionKeyImage_Left_Offset = offsetof(UBP_InteractionWidget_C, InteractionKeyImage_Left);
	static_assert(UBP_InteractionWidget_C_InteractionKeyImage_Left_Offset == 0x618, "UBP_InteractionWidget_C::InteractionKeyImage_Left offset is not 618");
	auto constexpr UBP_InteractionWidget_C_InteractionKeyImage_Right_Offset = offsetof(UBP_InteractionWidget_C, InteractionKeyImage_Right);
	static_assert(UBP_InteractionWidget_C_InteractionKeyImage_Right_Offset == 0x620, "UBP_InteractionWidget_C::InteractionKeyImage_Right offset is not 620");
	auto constexpr UBP_InteractionWidget_C_ProgressCircle_Offset = offsetof(UBP_InteractionWidget_C, ProgressCircle);
	static_assert(UBP_InteractionWidget_C_ProgressCircle_Offset == 0x628, "UBP_InteractionWidget_C::ProgressCircle offset is not 628");
	auto constexpr UBP_InteractionWidget_C_ProgressCircleBg_Offset = offsetof(UBP_InteractionWidget_C, ProgressCircleBg);
	static_assert(UBP_InteractionWidget_C_ProgressCircleBg_Offset == 0x630, "UBP_InteractionWidget_C::ProgressCircleBg offset is not 630");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
