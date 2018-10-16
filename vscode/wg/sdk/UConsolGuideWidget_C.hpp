#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConsolGuideWidget_C // Size: 0x2C8
	: public UUserWidget // Size: 0x248
{
private:
	typedef UConsolGuideWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(59819); // id32("WidgetBlueprintGeneratedClass ConsolGuideWidget.ConsolGuideWidget_C")
		return ptr;
	}
	ExternalPtr<struct UImage> AttachmentKeyimgB; /* Ofs: 0x248 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.AttachmentKeyimgB */
	ExternalPtr<struct UImage> AttachmentKeyimgX; /* Ofs: 0x250 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.AttachmentKeyimgX */
	ExternalPtr<struct UImage> BackpackKeyimgB; /* Ofs: 0x258 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.BackpackKeyimgB */
	ExternalPtr<struct UImage> BackpackKeyimgX; /* Ofs: 0x260 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.BackpackKeyimgX */
	ExternalPtr<struct UImage> EquimentKeyimgB; /* Ofs: 0x268 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.EquimentKeyimgB */
	ExternalPtr<struct UImage> EquimentKeyimgX; /* Ofs: 0x270 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.EquimentKeyimgX */
	ExternalPtr<struct UImage> GroundKeyImgX; /* Ofs: 0x278 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.GroundKeyImgX */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x280 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.Image_1 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x288 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.Image_3 */
	ExternalPtr<struct UImage> numberKeyimgB; /* Ofs: 0x290 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.numberKeyimgB */
	ExternalPtr<struct UImage> numberKeyimgX; /* Ofs: 0x298 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.numberKeyimgX */
	ExternalPtr<struct UImage> SelectWeaponKeyimgB; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.SelectWeaponKeyimgB */
	ExternalPtr<struct UImage> SelectWeaponKeyimgX; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.SelectWeaponKeyimgX */
	ExternalPtr<struct UImage> WeaponKeyimgB; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.WeaponKeyimgB */
	ExternalPtr<struct UImage> WeaponKeyimgX; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.WeaponKeyimgX */
	ExternalPtr<struct UWidgetSwitcher> WidgetSwitcher_9; /* Ofs: 0x2C0 Size: 0x8 - ObjectProperty ConsolGuideWidget.ConsolGuideWidget_C.WidgetSwitcher_9 */


	inline bool SetAttachmentKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x248, value); }
	inline bool SetAttachmentKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x250, value); }
	inline bool SetBackpackKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBackpackKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetEquimentKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x268, value); }
	inline bool SetEquimentKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetGroundKeyImgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x278, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x280, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x288, value); }
	inline bool SetnumberKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x290, value); }
	inline bool SetnumberKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x298, value); }
	inline bool SetSelectWeaponKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetSelectWeaponKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetWeaponKeyimgB(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetWeaponKeyimgX(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetWidgetSwitcher_9(t_structHelper inst, ExternalPtr<struct UWidgetSwitcher> value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConsolGuideWidget_C = sizeof(UConsolGuideWidget_C); // 712
    static_assert(sizeof(UConsolGuideWidget_C) == 0x2C8, "Size of UConsolGuideWidget_C is not correct.");
	auto constexpr UConsolGuideWidget_C_AttachmentKeyimgB_Offset = offsetof(UConsolGuideWidget_C, AttachmentKeyimgB);
	static_assert(UConsolGuideWidget_C_AttachmentKeyimgB_Offset == 0x248, "UConsolGuideWidget_C::AttachmentKeyimgB offset is not 248");
	auto constexpr UConsolGuideWidget_C_AttachmentKeyimgX_Offset = offsetof(UConsolGuideWidget_C, AttachmentKeyimgX);
	static_assert(UConsolGuideWidget_C_AttachmentKeyimgX_Offset == 0x250, "UConsolGuideWidget_C::AttachmentKeyimgX offset is not 250");
	auto constexpr UConsolGuideWidget_C_BackpackKeyimgB_Offset = offsetof(UConsolGuideWidget_C, BackpackKeyimgB);
	static_assert(UConsolGuideWidget_C_BackpackKeyimgB_Offset == 0x258, "UConsolGuideWidget_C::BackpackKeyimgB offset is not 258");
	auto constexpr UConsolGuideWidget_C_BackpackKeyimgX_Offset = offsetof(UConsolGuideWidget_C, BackpackKeyimgX);
	static_assert(UConsolGuideWidget_C_BackpackKeyimgX_Offset == 0x260, "UConsolGuideWidget_C::BackpackKeyimgX offset is not 260");
	auto constexpr UConsolGuideWidget_C_EquimentKeyimgB_Offset = offsetof(UConsolGuideWidget_C, EquimentKeyimgB);
	static_assert(UConsolGuideWidget_C_EquimentKeyimgB_Offset == 0x268, "UConsolGuideWidget_C::EquimentKeyimgB offset is not 268");
	auto constexpr UConsolGuideWidget_C_EquimentKeyimgX_Offset = offsetof(UConsolGuideWidget_C, EquimentKeyimgX);
	static_assert(UConsolGuideWidget_C_EquimentKeyimgX_Offset == 0x270, "UConsolGuideWidget_C::EquimentKeyimgX offset is not 270");
	auto constexpr UConsolGuideWidget_C_GroundKeyImgX_Offset = offsetof(UConsolGuideWidget_C, GroundKeyImgX);
	static_assert(UConsolGuideWidget_C_GroundKeyImgX_Offset == 0x278, "UConsolGuideWidget_C::GroundKeyImgX offset is not 278");
	auto constexpr UConsolGuideWidget_C_Image_1_Offset = offsetof(UConsolGuideWidget_C, Image_1);
	static_assert(UConsolGuideWidget_C_Image_1_Offset == 0x280, "UConsolGuideWidget_C::Image_1 offset is not 280");
	auto constexpr UConsolGuideWidget_C_Image_3_Offset = offsetof(UConsolGuideWidget_C, Image_3);
	static_assert(UConsolGuideWidget_C_Image_3_Offset == 0x288, "UConsolGuideWidget_C::Image_3 offset is not 288");
	auto constexpr UConsolGuideWidget_C_numberKeyimgB_Offset = offsetof(UConsolGuideWidget_C, numberKeyimgB);
	static_assert(UConsolGuideWidget_C_numberKeyimgB_Offset == 0x290, "UConsolGuideWidget_C::numberKeyimgB offset is not 290");
	auto constexpr UConsolGuideWidget_C_numberKeyimgX_Offset = offsetof(UConsolGuideWidget_C, numberKeyimgX);
	static_assert(UConsolGuideWidget_C_numberKeyimgX_Offset == 0x298, "UConsolGuideWidget_C::numberKeyimgX offset is not 298");
	auto constexpr UConsolGuideWidget_C_SelectWeaponKeyimgB_Offset = offsetof(UConsolGuideWidget_C, SelectWeaponKeyimgB);
	static_assert(UConsolGuideWidget_C_SelectWeaponKeyimgB_Offset == 0x2a0, "UConsolGuideWidget_C::SelectWeaponKeyimgB offset is not 2a0");
	auto constexpr UConsolGuideWidget_C_SelectWeaponKeyimgX_Offset = offsetof(UConsolGuideWidget_C, SelectWeaponKeyimgX);
	static_assert(UConsolGuideWidget_C_SelectWeaponKeyimgX_Offset == 0x2a8, "UConsolGuideWidget_C::SelectWeaponKeyimgX offset is not 2a8");
	auto constexpr UConsolGuideWidget_C_WeaponKeyimgB_Offset = offsetof(UConsolGuideWidget_C, WeaponKeyimgB);
	static_assert(UConsolGuideWidget_C_WeaponKeyimgB_Offset == 0x2b0, "UConsolGuideWidget_C::WeaponKeyimgB offset is not 2b0");
	auto constexpr UConsolGuideWidget_C_WeaponKeyimgX_Offset = offsetof(UConsolGuideWidget_C, WeaponKeyimgX);
	static_assert(UConsolGuideWidget_C_WeaponKeyimgX_Offset == 0x2b8, "UConsolGuideWidget_C::WeaponKeyimgX offset is not 2b8");
	auto constexpr UConsolGuideWidget_C_WidgetSwitcher_9_Offset = offsetof(UConsolGuideWidget_C, WidgetSwitcher_9);
	static_assert(UConsolGuideWidget_C_WidgetSwitcher_9_Offset == 0x2c0, "UConsolGuideWidget_C::WidgetSwitcher_9 offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
