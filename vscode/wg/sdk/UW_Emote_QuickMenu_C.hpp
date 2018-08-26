#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_Emote_QuickMenu_C // Size: 0x300
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_Emote_QuickMenu_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91326); // id32("WidgetBlueprintGeneratedClass W_Emote_QuickMenu.W_Emote_QuickMenu_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.UberGraphFrame */
	ExternalPtr<struct UButton> B_DOWN_Category; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.B_DOWN_Category */
	ExternalPtr<struct UButton> B_Right_Category; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.B_Right_Category */
	ExternalPtr<struct UButton> B_UP_Category; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.B_UP_Category */
	ExternalPtr<struct UCanvasPanel> CP_Down; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_Down */
	ExternalPtr<struct UBorder> CP_Down_Border; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_Down_Border */
	ExternalPtr<struct UCanvasPanel> CP_DownContainer; /* Ofs: 0x278 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_DownContainer */
	ExternalPtr<struct UCanvasPanel> CP_Right; /* Ofs: 0x280 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_Right */
	ExternalPtr<struct UBorder> CP_Right_Border; /* Ofs: 0x288 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_Right_Border */
	ExternalPtr<struct UCanvasPanel> CP_RightContainer; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_RightContainer */
	ExternalPtr<struct UCanvasPanel> CP_Up; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_Up */
	ExternalPtr<struct UBorder> CP_UP_Border; /* Ofs: 0x2A0 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_UP_Border */
	ExternalPtr<struct UCanvasPanel> CP_UpContainer; /* Ofs: 0x2A8 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.CP_UpContainer */
	ExternalPtr<struct UBorder> EmoteToolTip; /* Ofs: 0x2B0 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.EmoteToolTip */
	ExternalPtr<struct UTextBlock> EmoteTooltipText; /* Ofs: 0x2B8 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.EmoteTooltipText */
	TArray<ExternalPtr<struct UW_EmoteButton2_C>> EmoteWidgetArray; /* Ofs: 0x2C0 Size: 0x10 - ArrayProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.EmoteWidgetArray */
	TArray<struct FName> EmoteNameArray; /* Ofs: 0x2D0 Size: 0x10 - ArrayProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.EmoteNameArray */
	TArray<int32_t> Row; /* Ofs: 0x2E0 Size: 0x10 - ArrayProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.Row */
	float RowOffsetGlobal; /* Ofs: 0x2F0 Size: 0x4 - FloatProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.RowOffsetGlobal */
	float ColumOffsetGlobal; /* Ofs: 0x2F4 Size: 0x4 - FloatProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.ColumOffsetGlobal */
	ExternalPtr<struct UW_WeaponMenu_C> ParentWeaponMenu; /* Ofs: 0x2F8 Size: 0x8 - ObjectProperty W_Emote_QuickMenu.W_Emote_QuickMenu_C.ParentWeaponMenu */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetB_DOWN_Category(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetB_Right_Category(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetB_UP_Category(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x260, value); }
	inline bool SetCP_Down(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x268, value); }
	inline bool SetCP_Down_Border(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x270, value); }
	inline bool SetCP_DownContainer(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x278, value); }
	inline bool SetCP_Right(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x280, value); }
	inline bool SetCP_Right_Border(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x288, value); }
	inline bool SetCP_RightContainer(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x290, value); }
	inline bool SetCP_Up(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x298, value); }
	inline bool SetCP_UP_Border(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetCP_UpContainer(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x2A8, value); }
	inline bool SetEmoteToolTip(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetEmoteTooltipText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x2B8, value); }
	inline bool SetEmoteWidgetArray(t_structHelper inst, TArray<ExternalPtr<struct UW_EmoteButton2_C>> value) { inst.WriteOffset(0x2C0, value); }
	inline bool SetEmoteNameArray(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0x2D0, value); }
	inline bool SetRow(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x2E0, value); }
	inline bool SetRowOffsetGlobal(t_structHelper inst, float value) { inst.WriteOffset(0x2F0, value); }
	inline bool SetColumOffsetGlobal(t_structHelper inst, float value) { inst.WriteOffset(0x2F4, value); }
	inline bool SetParentWeaponMenu(t_structHelper inst, ExternalPtr<struct UW_WeaponMenu_C> value) { inst.WriteOffset(0x2F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_Emote_QuickMenu_C = sizeof(UW_Emote_QuickMenu_C); // 768
    static_assert(sizeof(UW_Emote_QuickMenu_C) == 0x300, "Size of UW_Emote_QuickMenu_C is not correct.");
	auto constexpr UW_Emote_QuickMenu_C_UberGraphFrame_Offset = offsetof(UW_Emote_QuickMenu_C, UberGraphFrame);
	static_assert(UW_Emote_QuickMenu_C_UberGraphFrame_Offset == 0x248, "UW_Emote_QuickMenu_C::UberGraphFrame offset is not 248");
	auto constexpr UW_Emote_QuickMenu_C_B_DOWN_Category_Offset = offsetof(UW_Emote_QuickMenu_C, B_DOWN_Category);
	static_assert(UW_Emote_QuickMenu_C_B_DOWN_Category_Offset == 0x250, "UW_Emote_QuickMenu_C::B_DOWN_Category offset is not 250");
	auto constexpr UW_Emote_QuickMenu_C_B_Right_Category_Offset = offsetof(UW_Emote_QuickMenu_C, B_Right_Category);
	static_assert(UW_Emote_QuickMenu_C_B_Right_Category_Offset == 0x258, "UW_Emote_QuickMenu_C::B_Right_Category offset is not 258");
	auto constexpr UW_Emote_QuickMenu_C_B_UP_Category_Offset = offsetof(UW_Emote_QuickMenu_C, B_UP_Category);
	static_assert(UW_Emote_QuickMenu_C_B_UP_Category_Offset == 0x260, "UW_Emote_QuickMenu_C::B_UP_Category offset is not 260");
	auto constexpr UW_Emote_QuickMenu_C_CP_Down_Offset = offsetof(UW_Emote_QuickMenu_C, CP_Down);
	static_assert(UW_Emote_QuickMenu_C_CP_Down_Offset == 0x268, "UW_Emote_QuickMenu_C::CP_Down offset is not 268");
	auto constexpr UW_Emote_QuickMenu_C_CP_Down_Border_Offset = offsetof(UW_Emote_QuickMenu_C, CP_Down_Border);
	static_assert(UW_Emote_QuickMenu_C_CP_Down_Border_Offset == 0x270, "UW_Emote_QuickMenu_C::CP_Down_Border offset is not 270");
	auto constexpr UW_Emote_QuickMenu_C_CP_DownContainer_Offset = offsetof(UW_Emote_QuickMenu_C, CP_DownContainer);
	static_assert(UW_Emote_QuickMenu_C_CP_DownContainer_Offset == 0x278, "UW_Emote_QuickMenu_C::CP_DownContainer offset is not 278");
	auto constexpr UW_Emote_QuickMenu_C_CP_Right_Offset = offsetof(UW_Emote_QuickMenu_C, CP_Right);
	static_assert(UW_Emote_QuickMenu_C_CP_Right_Offset == 0x280, "UW_Emote_QuickMenu_C::CP_Right offset is not 280");
	auto constexpr UW_Emote_QuickMenu_C_CP_Right_Border_Offset = offsetof(UW_Emote_QuickMenu_C, CP_Right_Border);
	static_assert(UW_Emote_QuickMenu_C_CP_Right_Border_Offset == 0x288, "UW_Emote_QuickMenu_C::CP_Right_Border offset is not 288");
	auto constexpr UW_Emote_QuickMenu_C_CP_RightContainer_Offset = offsetof(UW_Emote_QuickMenu_C, CP_RightContainer);
	static_assert(UW_Emote_QuickMenu_C_CP_RightContainer_Offset == 0x290, "UW_Emote_QuickMenu_C::CP_RightContainer offset is not 290");
	auto constexpr UW_Emote_QuickMenu_C_CP_Up_Offset = offsetof(UW_Emote_QuickMenu_C, CP_Up);
	static_assert(UW_Emote_QuickMenu_C_CP_Up_Offset == 0x298, "UW_Emote_QuickMenu_C::CP_Up offset is not 298");
	auto constexpr UW_Emote_QuickMenu_C_CP_UP_Border_Offset = offsetof(UW_Emote_QuickMenu_C, CP_UP_Border);
	static_assert(UW_Emote_QuickMenu_C_CP_UP_Border_Offset == 0x2a0, "UW_Emote_QuickMenu_C::CP_UP_Border offset is not 2a0");
	auto constexpr UW_Emote_QuickMenu_C_CP_UpContainer_Offset = offsetof(UW_Emote_QuickMenu_C, CP_UpContainer);
	static_assert(UW_Emote_QuickMenu_C_CP_UpContainer_Offset == 0x2a8, "UW_Emote_QuickMenu_C::CP_UpContainer offset is not 2a8");
	auto constexpr UW_Emote_QuickMenu_C_EmoteToolTip_Offset = offsetof(UW_Emote_QuickMenu_C, EmoteToolTip);
	static_assert(UW_Emote_QuickMenu_C_EmoteToolTip_Offset == 0x2b0, "UW_Emote_QuickMenu_C::EmoteToolTip offset is not 2b0");
	auto constexpr UW_Emote_QuickMenu_C_EmoteTooltipText_Offset = offsetof(UW_Emote_QuickMenu_C, EmoteTooltipText);
	static_assert(UW_Emote_QuickMenu_C_EmoteTooltipText_Offset == 0x2b8, "UW_Emote_QuickMenu_C::EmoteTooltipText offset is not 2b8");
	auto constexpr UW_Emote_QuickMenu_C_EmoteWidgetArray_Offset = offsetof(UW_Emote_QuickMenu_C, EmoteWidgetArray);
	static_assert(UW_Emote_QuickMenu_C_EmoteWidgetArray_Offset == 0x2c0, "UW_Emote_QuickMenu_C::EmoteWidgetArray offset is not 2c0");
	auto constexpr UW_Emote_QuickMenu_C_EmoteNameArray_Offset = offsetof(UW_Emote_QuickMenu_C, EmoteNameArray);
	static_assert(UW_Emote_QuickMenu_C_EmoteNameArray_Offset == 0x2d0, "UW_Emote_QuickMenu_C::EmoteNameArray offset is not 2d0");
	auto constexpr UW_Emote_QuickMenu_C_Row_Offset = offsetof(UW_Emote_QuickMenu_C, Row);
	static_assert(UW_Emote_QuickMenu_C_Row_Offset == 0x2e0, "UW_Emote_QuickMenu_C::Row offset is not 2e0");
	auto constexpr UW_Emote_QuickMenu_C_RowOffsetGlobal_Offset = offsetof(UW_Emote_QuickMenu_C, RowOffsetGlobal);
	static_assert(UW_Emote_QuickMenu_C_RowOffsetGlobal_Offset == 0x2f0, "UW_Emote_QuickMenu_C::RowOffsetGlobal offset is not 2f0");
	auto constexpr UW_Emote_QuickMenu_C_ColumOffsetGlobal_Offset = offsetof(UW_Emote_QuickMenu_C, ColumOffsetGlobal);
	static_assert(UW_Emote_QuickMenu_C_ColumOffsetGlobal_Offset == 0x2f4, "UW_Emote_QuickMenu_C::ColumOffsetGlobal offset is not 2f4");
	auto constexpr UW_Emote_QuickMenu_C_ParentWeaponMenu_Offset = offsetof(UW_Emote_QuickMenu_C, ParentWeaponMenu);
	static_assert(UW_Emote_QuickMenu_C_ParentWeaponMenu_Offset == 0x2f8, "UW_Emote_QuickMenu_C::ParentWeaponMenu offset is not 2f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
