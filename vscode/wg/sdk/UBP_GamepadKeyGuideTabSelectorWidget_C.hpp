#pragma once
#include "UTslTabSelectorWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideTabSelectorWidget_C // Size: 0x388
	: public UTslTabSelectorWidget // Size: 0x348
{
private:
	typedef UBP_GamepadKeyGuideTabSelectorWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(179228); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> ImageLB; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.ImageLB */
	ExternalPtr<struct UImage> ImageRB; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.ImageRB */
	ExternalPtr<struct UBP_GamepadOptionTabWidget_C> Tab0; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.Tab0 */
	ExternalPtr<struct UBP_GamepadOptionTabWidget_C> Tab1; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.Tab1 */
	ExternalPtr<struct UBP_GamepadOptionTabWidget_C> Tab2; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.Tab2 */
	ExternalPtr<struct UBP_GamepadOptionTabWidget_C> Tab3; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.Tab3 */
	ExternalPtr<struct UBP_GamepadOptionTabWidget_C> Tab4; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.Tab4 */
	ExternalPtr<struct UHorizontalBox> TabHorizontalBox; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideTabSelectorWidget.BP_GamepadKeyGuideTabSelectorWidget_C.TabHorizontalBox */


	inline bool SetImageLB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImageRB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetTab0(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabWidget_C> value) { inst.WriteOffset(0x358, value); }
	inline bool SetTab1(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabWidget_C> value) { inst.WriteOffset(0x360, value); }
	inline bool SetTab2(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabWidget_C> value) { inst.WriteOffset(0x368, value); }
	inline bool SetTab3(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabWidget_C> value) { inst.WriteOffset(0x370, value); }
	inline bool SetTab4(t_structHelper inst, ExternalPtr<struct UBP_GamepadOptionTabWidget_C> value) { inst.WriteOffset(0x378, value); }
	inline bool SetTabHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x380, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideTabSelectorWidget_C = sizeof(UBP_GamepadKeyGuideTabSelectorWidget_C); // 904
    static_assert(sizeof(UBP_GamepadKeyGuideTabSelectorWidget_C) == 0x388, "Size of UBP_GamepadKeyGuideTabSelectorWidget_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_ImageLB_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, ImageLB);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_ImageLB_Offset == 0x348, "UBP_GamepadKeyGuideTabSelectorWidget_C::ImageLB offset is not 348");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_ImageRB_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, ImageRB);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_ImageRB_Offset == 0x350, "UBP_GamepadKeyGuideTabSelectorWidget_C::ImageRB offset is not 350");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_Tab0_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, Tab0);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_Tab0_Offset == 0x358, "UBP_GamepadKeyGuideTabSelectorWidget_C::Tab0 offset is not 358");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_Tab1_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, Tab1);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_Tab1_Offset == 0x360, "UBP_GamepadKeyGuideTabSelectorWidget_C::Tab1 offset is not 360");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_Tab2_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, Tab2);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_Tab2_Offset == 0x368, "UBP_GamepadKeyGuideTabSelectorWidget_C::Tab2 offset is not 368");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_Tab3_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, Tab3);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_Tab3_Offset == 0x370, "UBP_GamepadKeyGuideTabSelectorWidget_C::Tab3 offset is not 370");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_Tab4_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, Tab4);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_Tab4_Offset == 0x378, "UBP_GamepadKeyGuideTabSelectorWidget_C::Tab4 offset is not 378");
	auto constexpr UBP_GamepadKeyGuideTabSelectorWidget_C_TabHorizontalBox_Offset = offsetof(UBP_GamepadKeyGuideTabSelectorWidget_C, TabHorizontalBox);
	static_assert(UBP_GamepadKeyGuideTabSelectorWidget_C_TabHorizontalBox_Offset == 0x380, "UBP_GamepadKeyGuideTabSelectorWidget_C::TabHorizontalBox offset is not 380");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
