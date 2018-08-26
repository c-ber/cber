#pragma once
#include "USlotBaseWidget_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCarePackageItemSlotWidget_C // Size: 0x280
	: public USlotBaseWidget_C // Size: 0x258
{
private:
	typedef UCarePackageItemSlotWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67602); // id32("WidgetBlueprintGeneratedClass CarePackageItemSlotWidget.CarePackageItemSlotWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> DurabilityGauge; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.DurabilityGauge */
	ExternalPtr<struct USizeBox> IconSizeBox; /* Ofs: 0x260 Size: 0x8 - ObjectProperty CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.IconSizeBox */
	ExternalPtr<struct UTextBlock> SlotName; /* Ofs: 0x268 Size: 0x8 - ObjectProperty CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.SlotName */
	ExternalPtr<struct UTextBlock> StackCountText; /* Ofs: 0x270 Size: 0x8 - ObjectProperty CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.StackCountText */
	ExternalPtr<struct UImage> UseInfo_bg; /* Ofs: 0x278 Size: 0x8 - ObjectProperty CarePackageItemSlotWidget.CarePackageItemSlotWidget_C.UseInfo_bg */


	inline bool SetDurabilityGauge(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetIconSizeBox(t_structHelper inst, ExternalPtr<struct USizeBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSlotName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetStackCountText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetUseInfo_bg(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x278, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCarePackageItemSlotWidget_C = sizeof(UCarePackageItemSlotWidget_C); // 640
    static_assert(sizeof(UCarePackageItemSlotWidget_C) == 0x280, "Size of UCarePackageItemSlotWidget_C is not correct.");
	auto constexpr UCarePackageItemSlotWidget_C_DurabilityGauge_Offset = offsetof(UCarePackageItemSlotWidget_C, DurabilityGauge);
	static_assert(UCarePackageItemSlotWidget_C_DurabilityGauge_Offset == 0x258, "UCarePackageItemSlotWidget_C::DurabilityGauge offset is not 258");
	auto constexpr UCarePackageItemSlotWidget_C_IconSizeBox_Offset = offsetof(UCarePackageItemSlotWidget_C, IconSizeBox);
	static_assert(UCarePackageItemSlotWidget_C_IconSizeBox_Offset == 0x260, "UCarePackageItemSlotWidget_C::IconSizeBox offset is not 260");
	auto constexpr UCarePackageItemSlotWidget_C_SlotName_Offset = offsetof(UCarePackageItemSlotWidget_C, SlotName);
	static_assert(UCarePackageItemSlotWidget_C_SlotName_Offset == 0x268, "UCarePackageItemSlotWidget_C::SlotName offset is not 268");
	auto constexpr UCarePackageItemSlotWidget_C_StackCountText_Offset = offsetof(UCarePackageItemSlotWidget_C, StackCountText);
	static_assert(UCarePackageItemSlotWidget_C_StackCountText_Offset == 0x270, "UCarePackageItemSlotWidget_C::StackCountText offset is not 270");
	auto constexpr UCarePackageItemSlotWidget_C_UseInfo_bg_Offset = offsetof(UCarePackageItemSlotWidget_C, UseInfo_bg);
	static_assert(UCarePackageItemSlotWidget_C_UseInfo_bg_Offset == 0x278, "UCarePackageItemSlotWidget_C::UseInfo_bg offset is not 278");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
