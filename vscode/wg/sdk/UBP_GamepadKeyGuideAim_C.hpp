#pragma once
#include "UBP_GamepadKeyGuideBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideAim_C // Size: 0x440
	: public UBP_GamepadKeyGuideBase_C // Size: 0x320
{
private:
	typedef UBP_GamepadKeyGuideAim_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(180028); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_20; /* Ofs: 0x320 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_20 */
	ExternalPtr<struct UImage> Image_21; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_21 */
	ExternalPtr<struct UImage> Image_22; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_22 */
	ExternalPtr<struct UImage> Image_23; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_23 */
	ExternalPtr<struct UImage> Image_24; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_24 */
	ExternalPtr<struct UImage> Image_25; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_25 */
	ExternalPtr<struct UImage> Image_26; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_26 */
	ExternalPtr<struct UImage> Image_27; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_27 */
	ExternalPtr<struct UImage> Image_28; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_28 */
	ExternalPtr<struct UImage> Image_29; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_29 */
	ExternalPtr<struct UImage> Image_30; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_30 */
	ExternalPtr<struct UImage> Image_35; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_35 */
	ExternalPtr<struct UImage> Image_36; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_36 */
	ExternalPtr<struct UImage> Image_38; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_38 */
	ExternalPtr<struct UImage> Image_114; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_114 */
	ExternalPtr<struct UImage> Image_115; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_115 */
	ExternalPtr<struct UImage> Image_116; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_116 */
	ExternalPtr<struct UImage> Image_117; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_117 */
	ExternalPtr<struct UImage> Image_118; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_118 */
	ExternalPtr<struct UImage> Image_119; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_119 */
	ExternalPtr<struct UImage> Image_120; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_120 */
	ExternalPtr<struct UImage> Image_121; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_121 */
	ExternalPtr<struct UImage> Image_122; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_122 */
	ExternalPtr<struct UImage> Image_123; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_123 */
	ExternalPtr<struct UImage> Image_124; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_124 */
	ExternalPtr<struct UImage> Image_125; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_125 */
	ExternalPtr<struct UImage> Image_130; /* Ofs: 0x3F0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_130 */
	ExternalPtr<struct UImage> Image_131; /* Ofs: 0x3F8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.Image_131 */
	ExternalPtr<struct UWidgetSwitcher> KeyBindSwitcher; /* Ofs: 0x400 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.KeyBindSwitcher */
	ExternalPtr<struct UImage> TypeAB_line_DPAD; /* Ofs: 0x408 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_DPAD */
	ExternalPtr<struct UImage> TypeAB_line_LB; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_LB */
	ExternalPtr<struct UImage> TypeAB_line_LS; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_LS */
	ExternalPtr<struct UImage> TypeAB_line_LT; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_LT */
	ExternalPtr<struct UImage> TypeAB_line_RB; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_RB */
	ExternalPtr<struct UImage> TypeAB_line_RS; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_RS */
	ExternalPtr<struct UImage> TypeAB_line_RT; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideAim.BP_GamepadKeyGuideAim_C.TypeAB_line_RT */


	inline bool SetImage_20(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x320, value); }
	inline bool SetImage_21(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x328, value); }
	inline bool SetImage_22(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x330, value); }
	inline bool SetImage_23(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x338, value); }
	inline bool SetImage_24(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x340, value); }
	inline bool SetImage_25(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImage_26(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_27(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_28(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetImage_29(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_30(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetImage_35(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetImage_36(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetImage_38(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetImage_114(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x390, value); }
	inline bool SetImage_115(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetImage_116(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetImage_117(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetImage_118(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetImage_119(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetImage_120(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetImage_121(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetImage_122(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetImage_123(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetImage_124(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetImage_125(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3E8, value); }
	inline bool SetImage_130(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F0, value); }
	inline bool SetImage_131(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3F8, value); }
	inline bool SetKeyBindSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x400, value); }
	inline bool SetTypeAB_line_DPAD(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x408, value); }
	inline bool SetTypeAB_line_LB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x410, value); }
	inline bool SetTypeAB_line_LS(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x418, value); }
	inline bool SetTypeAB_line_LT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x420, value); }
	inline bool SetTypeAB_line_RB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x428, value); }
	inline bool SetTypeAB_line_RS(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x430, value); }
	inline bool SetTypeAB_line_RT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideAim_C = sizeof(UBP_GamepadKeyGuideAim_C); // 1088
    static_assert(sizeof(UBP_GamepadKeyGuideAim_C) == 0x440, "Size of UBP_GamepadKeyGuideAim_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_20_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_20);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_20_Offset == 0x320, "UBP_GamepadKeyGuideAim_C::Image_20 offset is not 320");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_21_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_21);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_21_Offset == 0x328, "UBP_GamepadKeyGuideAim_C::Image_21 offset is not 328");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_22_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_22);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_22_Offset == 0x330, "UBP_GamepadKeyGuideAim_C::Image_22 offset is not 330");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_23_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_23);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_23_Offset == 0x338, "UBP_GamepadKeyGuideAim_C::Image_23 offset is not 338");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_24_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_24);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_24_Offset == 0x340, "UBP_GamepadKeyGuideAim_C::Image_24 offset is not 340");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_25_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_25);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_25_Offset == 0x348, "UBP_GamepadKeyGuideAim_C::Image_25 offset is not 348");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_26_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_26);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_26_Offset == 0x350, "UBP_GamepadKeyGuideAim_C::Image_26 offset is not 350");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_27_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_27);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_27_Offset == 0x358, "UBP_GamepadKeyGuideAim_C::Image_27 offset is not 358");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_28_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_28);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_28_Offset == 0x360, "UBP_GamepadKeyGuideAim_C::Image_28 offset is not 360");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_29_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_29);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_29_Offset == 0x368, "UBP_GamepadKeyGuideAim_C::Image_29 offset is not 368");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_30_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_30);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_30_Offset == 0x370, "UBP_GamepadKeyGuideAim_C::Image_30 offset is not 370");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_35_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_35);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_35_Offset == 0x378, "UBP_GamepadKeyGuideAim_C::Image_35 offset is not 378");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_36_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_36);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_36_Offset == 0x380, "UBP_GamepadKeyGuideAim_C::Image_36 offset is not 380");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_38_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_38);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_38_Offset == 0x388, "UBP_GamepadKeyGuideAim_C::Image_38 offset is not 388");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_114_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_114);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_114_Offset == 0x390, "UBP_GamepadKeyGuideAim_C::Image_114 offset is not 390");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_115_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_115);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_115_Offset == 0x398, "UBP_GamepadKeyGuideAim_C::Image_115 offset is not 398");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_116_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_116);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_116_Offset == 0x3a0, "UBP_GamepadKeyGuideAim_C::Image_116 offset is not 3a0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_117_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_117);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_117_Offset == 0x3a8, "UBP_GamepadKeyGuideAim_C::Image_117 offset is not 3a8");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_118_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_118);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_118_Offset == 0x3b0, "UBP_GamepadKeyGuideAim_C::Image_118 offset is not 3b0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_119_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_119);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_119_Offset == 0x3b8, "UBP_GamepadKeyGuideAim_C::Image_119 offset is not 3b8");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_120_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_120);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_120_Offset == 0x3c0, "UBP_GamepadKeyGuideAim_C::Image_120 offset is not 3c0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_121_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_121);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_121_Offset == 0x3c8, "UBP_GamepadKeyGuideAim_C::Image_121 offset is not 3c8");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_122_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_122);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_122_Offset == 0x3d0, "UBP_GamepadKeyGuideAim_C::Image_122 offset is not 3d0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_123_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_123);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_123_Offset == 0x3d8, "UBP_GamepadKeyGuideAim_C::Image_123 offset is not 3d8");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_124_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_124);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_124_Offset == 0x3e0, "UBP_GamepadKeyGuideAim_C::Image_124 offset is not 3e0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_125_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_125);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_125_Offset == 0x3e8, "UBP_GamepadKeyGuideAim_C::Image_125 offset is not 3e8");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_130_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_130);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_130_Offset == 0x3f0, "UBP_GamepadKeyGuideAim_C::Image_130 offset is not 3f0");
	auto constexpr UBP_GamepadKeyGuideAim_C_Image_131_Offset = offsetof(UBP_GamepadKeyGuideAim_C, Image_131);
	static_assert(UBP_GamepadKeyGuideAim_C_Image_131_Offset == 0x3f8, "UBP_GamepadKeyGuideAim_C::Image_131 offset is not 3f8");
	auto constexpr UBP_GamepadKeyGuideAim_C_KeyBindSwitcher_Offset = offsetof(UBP_GamepadKeyGuideAim_C, KeyBindSwitcher);
	static_assert(UBP_GamepadKeyGuideAim_C_KeyBindSwitcher_Offset == 0x400, "UBP_GamepadKeyGuideAim_C::KeyBindSwitcher offset is not 400");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_DPAD_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_DPAD);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_DPAD_Offset == 0x408, "UBP_GamepadKeyGuideAim_C::TypeAB_line_DPAD offset is not 408");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_LB_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_LB);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_LB_Offset == 0x410, "UBP_GamepadKeyGuideAim_C::TypeAB_line_LB offset is not 410");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_LS_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_LS);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_LS_Offset == 0x418, "UBP_GamepadKeyGuideAim_C::TypeAB_line_LS offset is not 418");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_LT_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_LT);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_LT_Offset == 0x420, "UBP_GamepadKeyGuideAim_C::TypeAB_line_LT offset is not 420");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_RB_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_RB);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_RB_Offset == 0x428, "UBP_GamepadKeyGuideAim_C::TypeAB_line_RB offset is not 428");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_RS_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_RS);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_RS_Offset == 0x430, "UBP_GamepadKeyGuideAim_C::TypeAB_line_RS offset is not 430");
	auto constexpr UBP_GamepadKeyGuideAim_C_TypeAB_line_RT_Offset = offsetof(UBP_GamepadKeyGuideAim_C, TypeAB_line_RT);
	static_assert(UBP_GamepadKeyGuideAim_C_TypeAB_line_RT_Offset == 0x438, "UBP_GamepadKeyGuideAim_C::TypeAB_line_RT offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
