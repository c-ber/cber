#pragma once
#include "UBP_GamepadKeyGuideBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideSwim_C // Size: 0x3C0
	: public UBP_GamepadKeyGuideBase_C // Size: 0x320
{
private:
	typedef UBP_GamepadKeyGuideSwim_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(179257); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_21; /* Ofs: 0x320 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_21 */
	ExternalPtr<struct UImage> Image_22; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_22 */
	ExternalPtr<struct UImage> Image_27; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_27 */
	ExternalPtr<struct UImage> Image_32; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_32 */
	ExternalPtr<struct UImage> Image_33; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_33 */
	ExternalPtr<struct UImage> Image_34; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_34 */
	ExternalPtr<struct UImage> Image_35; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_35 */
	ExternalPtr<struct UImage> Image_116; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_116 */
	ExternalPtr<struct UImage> Image_117; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_117 */
	ExternalPtr<struct UImage> Image_122; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_122 */
	ExternalPtr<struct UImage> Image_127; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_127 */
	ExternalPtr<struct UImage> Image_128; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_128 */
	ExternalPtr<struct UImage> Image_129; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_129 */
	ExternalPtr<struct UImage> Image_130; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.Image_130 */
	ExternalPtr<struct UWidgetSwitcher> KeyBindSwitcher; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.KeyBindSwitcher */
	ExternalPtr<struct UImage> TypeAB_line_LS; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.TypeAB_line_LS */
	ExternalPtr<struct UImage> TypeAB_line_RS; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.TypeAB_line_RS */
	ExternalPtr<struct UImage> TypeAB_line_RT; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.TypeAB_line_RT */
	ExternalPtr<struct UImage> TypeAB_line_XYBA; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.TypeAB_line_XYBA */
	ExternalPtr<struct UCanvasPanel> TypeB; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideSwim.BP_GamepadKeyGuideSwim_C.TypeB */


	inline bool SetImage_21(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x320, value); }
	inline bool SetImage_22(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x328, value); }
	inline bool SetImage_27(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x330, value); }
	inline bool SetImage_32(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x338, value); }
	inline bool SetImage_33(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x340, value); }
	inline bool SetImage_34(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImage_35(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_116(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_117(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetImage_122(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_127(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetImage_128(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetImage_129(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetImage_130(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetKeyBindSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x390, value); }
	inline bool SetTypeAB_line_LS(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetTypeAB_line_RS(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetTypeAB_line_RT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetTypeAB_line_XYBA(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetTypeB(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x3B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideSwim_C = sizeof(UBP_GamepadKeyGuideSwim_C); // 960
    static_assert(sizeof(UBP_GamepadKeyGuideSwim_C) == 0x3C0, "Size of UBP_GamepadKeyGuideSwim_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_21_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_21);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_21_Offset == 0x320, "UBP_GamepadKeyGuideSwim_C::Image_21 offset is not 320");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_22_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_22);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_22_Offset == 0x328, "UBP_GamepadKeyGuideSwim_C::Image_22 offset is not 328");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_27_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_27);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_27_Offset == 0x330, "UBP_GamepadKeyGuideSwim_C::Image_27 offset is not 330");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_32_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_32);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_32_Offset == 0x338, "UBP_GamepadKeyGuideSwim_C::Image_32 offset is not 338");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_33_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_33);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_33_Offset == 0x340, "UBP_GamepadKeyGuideSwim_C::Image_33 offset is not 340");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_34_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_34);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_34_Offset == 0x348, "UBP_GamepadKeyGuideSwim_C::Image_34 offset is not 348");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_35_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_35);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_35_Offset == 0x350, "UBP_GamepadKeyGuideSwim_C::Image_35 offset is not 350");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_116_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_116);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_116_Offset == 0x358, "UBP_GamepadKeyGuideSwim_C::Image_116 offset is not 358");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_117_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_117);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_117_Offset == 0x360, "UBP_GamepadKeyGuideSwim_C::Image_117 offset is not 360");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_122_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_122);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_122_Offset == 0x368, "UBP_GamepadKeyGuideSwim_C::Image_122 offset is not 368");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_127_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_127);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_127_Offset == 0x370, "UBP_GamepadKeyGuideSwim_C::Image_127 offset is not 370");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_128_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_128);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_128_Offset == 0x378, "UBP_GamepadKeyGuideSwim_C::Image_128 offset is not 378");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_129_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_129);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_129_Offset == 0x380, "UBP_GamepadKeyGuideSwim_C::Image_129 offset is not 380");
	auto constexpr UBP_GamepadKeyGuideSwim_C_Image_130_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, Image_130);
	static_assert(UBP_GamepadKeyGuideSwim_C_Image_130_Offset == 0x388, "UBP_GamepadKeyGuideSwim_C::Image_130 offset is not 388");
	auto constexpr UBP_GamepadKeyGuideSwim_C_KeyBindSwitcher_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, KeyBindSwitcher);
	static_assert(UBP_GamepadKeyGuideSwim_C_KeyBindSwitcher_Offset == 0x390, "UBP_GamepadKeyGuideSwim_C::KeyBindSwitcher offset is not 390");
	auto constexpr UBP_GamepadKeyGuideSwim_C_TypeAB_line_LS_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, TypeAB_line_LS);
	static_assert(UBP_GamepadKeyGuideSwim_C_TypeAB_line_LS_Offset == 0x398, "UBP_GamepadKeyGuideSwim_C::TypeAB_line_LS offset is not 398");
	auto constexpr UBP_GamepadKeyGuideSwim_C_TypeAB_line_RS_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, TypeAB_line_RS);
	static_assert(UBP_GamepadKeyGuideSwim_C_TypeAB_line_RS_Offset == 0x3a0, "UBP_GamepadKeyGuideSwim_C::TypeAB_line_RS offset is not 3a0");
	auto constexpr UBP_GamepadKeyGuideSwim_C_TypeAB_line_RT_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, TypeAB_line_RT);
	static_assert(UBP_GamepadKeyGuideSwim_C_TypeAB_line_RT_Offset == 0x3a8, "UBP_GamepadKeyGuideSwim_C::TypeAB_line_RT offset is not 3a8");
	auto constexpr UBP_GamepadKeyGuideSwim_C_TypeAB_line_XYBA_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, TypeAB_line_XYBA);
	static_assert(UBP_GamepadKeyGuideSwim_C_TypeAB_line_XYBA_Offset == 0x3b0, "UBP_GamepadKeyGuideSwim_C::TypeAB_line_XYBA offset is not 3b0");
	auto constexpr UBP_GamepadKeyGuideSwim_C_TypeB_Offset = offsetof(UBP_GamepadKeyGuideSwim_C, TypeB);
	static_assert(UBP_GamepadKeyGuideSwim_C_TypeB_Offset == 0x3b8, "UBP_GamepadKeyGuideSwim_C::TypeB offset is not 3b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
