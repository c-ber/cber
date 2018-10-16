#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponSkinGuideWidget_C // Size: 0x2C0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UWeaponSkinGuideWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(59572); // id32("WidgetBlueprintGeneratedClass WeaponSkinGuideWidget.WeaponSkinGuideWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> SkinGuideFadeIn; /* Ofs: 0x250 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SkinGuideFadeIn */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Delete; /* Ofs: 0x258 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Delete_Key_Alt; /* Ofs: 0x260 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete_Key_Alt */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Delete_Key_Ctrl; /* Ofs: 0x268 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete_Key_Ctrl */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Delete_Key_Custom; /* Ofs: 0x270 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete_Key_Custom */
	ExternalPtr<struct UTextBlock> WeaponSkinOn_Delete_Key_Custom_Bind; /* Ofs: 0x278 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete_Key_Custom_Bind */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Delete_Key_Shift; /* Ofs: 0x280 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Delete_Key_Shift */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Override; /* Ofs: 0x288 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Override_Key_Alt; /* Ofs: 0x290 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override_Key_Alt */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Override_Key_Ctrl; /* Ofs: 0x298 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override_Key_Ctrl */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Override_Key_Custom; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override_Key_Custom */
	ExternalPtr<struct UTextBlock> WeaponSkinOn_Override_Key_Custom_Bind; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override_Key_Custom_Bind */
	ExternalPtr<struct UHorizontalBox> WeaponSkinOn_Override_Key_Shift; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.WeaponSkinOn_Override_Key_Shift */
	ExternalPtr<struct UWeaponItem> CachedWeaponItem; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.CachedWeaponItem */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetSkinGuideFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetWeaponSkinOn_Delete(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetWeaponSkinOn_Delete_Key_Alt(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetWeaponSkinOn_Delete_Key_Ctrl(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x268, value); }
	inline bool SetWeaponSkinOn_Delete_Key_Custom(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x270, value); }
	inline bool SetWeaponSkinOn_Delete_Key_Custom_Bind(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetWeaponSkinOn_Delete_Key_Shift(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetWeaponSkinOn_Override(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x288, value); }
	inline bool SetWeaponSkinOn_Override_Key_Alt(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x290, value); }
	inline bool SetWeaponSkinOn_Override_Key_Ctrl(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x298, value); }
	inline bool SetWeaponSkinOn_Override_Key_Custom(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetWeaponSkinOn_Override_Key_Custom_Bind(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetWeaponSkinOn_Override_Key_Shift(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetCachedWeaponItem(t_structHelper inst, ExternalPtr<struct UWeaponItem> value) { inst.WriteOffset(0x2B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponSkinGuideWidget_C = sizeof(UWeaponSkinGuideWidget_C); // 704
    static_assert(sizeof(UWeaponSkinGuideWidget_C) == 0x2C0, "Size of UWeaponSkinGuideWidget_C is not correct.");
	auto constexpr UWeaponSkinGuideWidget_C_UberGraphFrame_Offset = offsetof(UWeaponSkinGuideWidget_C, UberGraphFrame);
	static_assert(UWeaponSkinGuideWidget_C_UberGraphFrame_Offset == 0x248, "UWeaponSkinGuideWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UWeaponSkinGuideWidget_C_SkinGuideFadeIn_Offset = offsetof(UWeaponSkinGuideWidget_C, SkinGuideFadeIn);
	static_assert(UWeaponSkinGuideWidget_C_SkinGuideFadeIn_Offset == 0x250, "UWeaponSkinGuideWidget_C::SkinGuideFadeIn offset is not 250");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Offset == 0x258, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete offset is not 258");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Alt_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete_Key_Alt);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Alt_Offset == 0x260, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete_Key_Alt offset is not 260");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Ctrl_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete_Key_Ctrl);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Ctrl_Offset == 0x268, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete_Key_Ctrl offset is not 268");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Custom_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete_Key_Custom);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Custom_Offset == 0x270, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete_Key_Custom offset is not 270");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Custom_Bind_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete_Key_Custom_Bind);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Custom_Bind_Offset == 0x278, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete_Key_Custom_Bind offset is not 278");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Shift_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Delete_Key_Shift);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Delete_Key_Shift_Offset == 0x280, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Delete_Key_Shift offset is not 280");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Offset == 0x288, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override offset is not 288");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Alt_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override_Key_Alt);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Alt_Offset == 0x290, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override_Key_Alt offset is not 290");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Ctrl_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override_Key_Ctrl);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Ctrl_Offset == 0x298, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override_Key_Ctrl offset is not 298");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Custom_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override_Key_Custom);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Custom_Offset == 0x2a0, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override_Key_Custom offset is not 2a0");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Custom_Bind_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override_Key_Custom_Bind);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Custom_Bind_Offset == 0x2a8, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override_Key_Custom_Bind offset is not 2a8");
	auto constexpr UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Shift_Offset = offsetof(UWeaponSkinGuideWidget_C, WeaponSkinOn_Override_Key_Shift);
	static_assert(UWeaponSkinGuideWidget_C_WeaponSkinOn_Override_Key_Shift_Offset == 0x2b0, "UWeaponSkinGuideWidget_C::WeaponSkinOn_Override_Key_Shift offset is not 2b0");
	auto constexpr UWeaponSkinGuideWidget_C_CachedWeaponItem_Offset = offsetof(UWeaponSkinGuideWidget_C, CachedWeaponItem);
	static_assert(UWeaponSkinGuideWidget_C_CachedWeaponItem_Offset == 0x2b8, "UWeaponSkinGuideWidget_C::CachedWeaponItem offset is not 2b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
