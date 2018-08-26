#pragma once
#include "UBP_GamepadKeyGuideBase_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_GamepadKeyGuideMap_C // Size: 0x3F0
	: public UBP_GamepadKeyGuideBase_C // Size: 0x320
{
private:
	typedef UBP_GamepadKeyGuideMap_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(179414); // id32("WidgetBlueprintGeneratedClass BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C")
		return ptr;
	}
	ExternalPtr<struct UImage> Image_23; /* Ofs: 0x320 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_23 */
	ExternalPtr<struct UImage> Image_26; /* Ofs: 0x328 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_26 */
	ExternalPtr<struct UImage> Image_28; /* Ofs: 0x330 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_28 */
	ExternalPtr<struct UImage> Image_29; /* Ofs: 0x338 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_29 */
	ExternalPtr<struct UImage> Image_31; /* Ofs: 0x340 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_31 */
	ExternalPtr<struct UImage> Image_33; /* Ofs: 0x348 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_33 */
	ExternalPtr<struct UImage> Image_35; /* Ofs: 0x350 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_35 */
	ExternalPtr<struct UImage> Image_36; /* Ofs: 0x358 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_36 */
	ExternalPtr<struct UImage> Image_41; /* Ofs: 0x360 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_41 */
	ExternalPtr<struct UImage> Image_118; /* Ofs: 0x368 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_118 */
	ExternalPtr<struct UImage> Image_121; /* Ofs: 0x370 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_121 */
	ExternalPtr<struct UImage> Image_123; /* Ofs: 0x378 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_123 */
	ExternalPtr<struct UImage> Image_124; /* Ofs: 0x380 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_124 */
	ExternalPtr<struct UImage> Image_126; /* Ofs: 0x388 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_126 */
	ExternalPtr<struct UImage> Image_128; /* Ofs: 0x390 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_128 */
	ExternalPtr<struct UImage> Image_130; /* Ofs: 0x398 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_130 */
	ExternalPtr<struct UImage> Image_131; /* Ofs: 0x3A0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_131 */
	ExternalPtr<struct UImage> Image_132; /* Ofs: 0x3A8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.Image_132 */
	ExternalPtr<struct UWidgetSwitcher> KeyBindSwitcher; /* Ofs: 0x3B0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.KeyBindSwitcher */
	ExternalPtr<struct UCanvasPanel> TypeA; /* Ofs: 0x3B8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeA */
	ExternalPtr<struct UImage> TypeAB_line_DPAD; /* Ofs: 0x3C0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeAB_line_DPAD */
	ExternalPtr<struct UImage> TypeAB_line_RS; /* Ofs: 0x3C8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeAB_line_RS */
	ExternalPtr<struct UImage> TypeAB_line_RT; /* Ofs: 0x3D0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeAB_line_RT */
	ExternalPtr<struct UImage> TypeAB_line_VIEW; /* Ofs: 0x3D8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeAB_line_VIEW */
	ExternalPtr<struct UImage> TypeAB_line_XYBA; /* Ofs: 0x3E0 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeAB_line_XYBA */
	ExternalPtr<struct UCanvasPanel> TypeB; /* Ofs: 0x3E8 Size: 0x8 - ObjectProperty BP_GamepadKeyGuideMap.BP_GamepadKeyGuideMap_C.TypeB */


	inline bool SetImage_23(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x320, value); }
	inline bool SetImage_26(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x328, value); }
	inline bool SetImage_28(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x330, value); }
	inline bool SetImage_29(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x338, value); }
	inline bool SetImage_31(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x340, value); }
	inline bool SetImage_33(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x348, value); }
	inline bool SetImage_35(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_36(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetImage_41(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x360, value); }
	inline bool SetImage_118(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x368, value); }
	inline bool SetImage_121(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x370, value); }
	inline bool SetImage_123(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x378, value); }
	inline bool SetImage_124(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x380, value); }
	inline bool SetImage_126(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x388, value); }
	inline bool SetImage_128(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x390, value); }
	inline bool SetImage_130(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x398, value); }
	inline bool SetImage_131(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetImage_132(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetKeyBindSwitcher(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x3B0, value); }
	inline bool SetTypeA(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetTypeAB_line_DPAD(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetTypeAB_line_RS(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetTypeAB_line_RT(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetTypeAB_line_VIEW(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3D8, value); }
	inline bool SetTypeAB_line_XYBA(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetTypeB(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x3E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_GamepadKeyGuideMap_C = sizeof(UBP_GamepadKeyGuideMap_C); // 1008
    static_assert(sizeof(UBP_GamepadKeyGuideMap_C) == 0x3F0, "Size of UBP_GamepadKeyGuideMap_C is not correct.");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_23_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_23);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_23_Offset == 0x320, "UBP_GamepadKeyGuideMap_C::Image_23 offset is not 320");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_26_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_26);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_26_Offset == 0x328, "UBP_GamepadKeyGuideMap_C::Image_26 offset is not 328");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_28_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_28);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_28_Offset == 0x330, "UBP_GamepadKeyGuideMap_C::Image_28 offset is not 330");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_29_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_29);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_29_Offset == 0x338, "UBP_GamepadKeyGuideMap_C::Image_29 offset is not 338");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_31_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_31);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_31_Offset == 0x340, "UBP_GamepadKeyGuideMap_C::Image_31 offset is not 340");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_33_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_33);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_33_Offset == 0x348, "UBP_GamepadKeyGuideMap_C::Image_33 offset is not 348");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_35_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_35);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_35_Offset == 0x350, "UBP_GamepadKeyGuideMap_C::Image_35 offset is not 350");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_36_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_36);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_36_Offset == 0x358, "UBP_GamepadKeyGuideMap_C::Image_36 offset is not 358");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_41_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_41);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_41_Offset == 0x360, "UBP_GamepadKeyGuideMap_C::Image_41 offset is not 360");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_118_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_118);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_118_Offset == 0x368, "UBP_GamepadKeyGuideMap_C::Image_118 offset is not 368");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_121_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_121);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_121_Offset == 0x370, "UBP_GamepadKeyGuideMap_C::Image_121 offset is not 370");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_123_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_123);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_123_Offset == 0x378, "UBP_GamepadKeyGuideMap_C::Image_123 offset is not 378");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_124_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_124);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_124_Offset == 0x380, "UBP_GamepadKeyGuideMap_C::Image_124 offset is not 380");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_126_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_126);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_126_Offset == 0x388, "UBP_GamepadKeyGuideMap_C::Image_126 offset is not 388");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_128_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_128);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_128_Offset == 0x390, "UBP_GamepadKeyGuideMap_C::Image_128 offset is not 390");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_130_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_130);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_130_Offset == 0x398, "UBP_GamepadKeyGuideMap_C::Image_130 offset is not 398");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_131_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_131);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_131_Offset == 0x3a0, "UBP_GamepadKeyGuideMap_C::Image_131 offset is not 3a0");
	auto constexpr UBP_GamepadKeyGuideMap_C_Image_132_Offset = offsetof(UBP_GamepadKeyGuideMap_C, Image_132);
	static_assert(UBP_GamepadKeyGuideMap_C_Image_132_Offset == 0x3a8, "UBP_GamepadKeyGuideMap_C::Image_132 offset is not 3a8");
	auto constexpr UBP_GamepadKeyGuideMap_C_KeyBindSwitcher_Offset = offsetof(UBP_GamepadKeyGuideMap_C, KeyBindSwitcher);
	static_assert(UBP_GamepadKeyGuideMap_C_KeyBindSwitcher_Offset == 0x3b0, "UBP_GamepadKeyGuideMap_C::KeyBindSwitcher offset is not 3b0");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeA_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeA);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeA_Offset == 0x3b8, "UBP_GamepadKeyGuideMap_C::TypeA offset is not 3b8");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeAB_line_DPAD_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeAB_line_DPAD);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeAB_line_DPAD_Offset == 0x3c0, "UBP_GamepadKeyGuideMap_C::TypeAB_line_DPAD offset is not 3c0");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeAB_line_RS_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeAB_line_RS);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeAB_line_RS_Offset == 0x3c8, "UBP_GamepadKeyGuideMap_C::TypeAB_line_RS offset is not 3c8");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeAB_line_RT_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeAB_line_RT);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeAB_line_RT_Offset == 0x3d0, "UBP_GamepadKeyGuideMap_C::TypeAB_line_RT offset is not 3d0");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeAB_line_VIEW_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeAB_line_VIEW);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeAB_line_VIEW_Offset == 0x3d8, "UBP_GamepadKeyGuideMap_C::TypeAB_line_VIEW offset is not 3d8");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeAB_line_XYBA_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeAB_line_XYBA);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeAB_line_XYBA_Offset == 0x3e0, "UBP_GamepadKeyGuideMap_C::TypeAB_line_XYBA offset is not 3e0");
	auto constexpr UBP_GamepadKeyGuideMap_C_TypeB_Offset = offsetof(UBP_GamepadKeyGuideMap_C, TypeB);
	static_assert(UBP_GamepadKeyGuideMap_C_TypeB_Offset == 0x3e8, "UBP_GamepadKeyGuideMap_C::TypeB offset is not 3e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
