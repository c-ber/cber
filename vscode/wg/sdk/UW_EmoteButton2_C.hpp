#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_EmoteButton2_C // Size: 0x2B8
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_EmoteButton2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91440); // id32("WidgetBlueprintGeneratedClass W_EmoteButton2.W_EmoteButton2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_EmoteButton2.W_EmoteButton2_C.UberGraphFrame */
	ExternalPtr<struct UBorder> Border_4; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.Border_4 */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.Button_1 */
	ExternalPtr<struct UImage> EmoteImage; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.EmoteImage */
	ExternalPtr<struct UTextBlock> EmoteName; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.EmoteName */
	ExternalPtr<struct UTexture2D> ImageRef; /* Ofs: 0x270 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.ImageRef */
	FText LocalizedName; /* Ofs: 0x278 Size: 0x18 - TextProperty W_EmoteButton2.W_EmoteButton2_C.LocalizedName */
	FName EmoteNameRef; /* Ofs: 0x290 Size: 0x8 - NameProperty W_EmoteButton2.W_EmoteButton2_C.EmoteNameRef */
	ExternalPtr<struct UW_Emote_QuickMenu_C> Parent; /* Ofs: 0x298 Size: 0x8 - ObjectProperty W_EmoteButton2.W_EmoteButton2_C.Parent */
	int32_t RowIndex; /* Ofs: 0x2A0 Size: 0x4 - IntProperty W_EmoteButton2.W_EmoteButton2_C.RowIndex */
	int32_t ColIndex; /* Ofs: 0x2A4 Size: 0x4 - IntProperty W_EmoteButton2.W_EmoteButton2_C.ColIndex */
	FLinearColor ButtonLinearColor; /* Ofs: 0x2A8 Size: 0x10 - StructProperty W_EmoteButton2.W_EmoteButton2_C.ButtonLinearColor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBorder_4(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetEmoteImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetEmoteName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetImageRef(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x270, value); }
	inline bool SetLocalizedName(t_structHelper inst, FText value) { inst.WriteOffset(0x278, value); }
	inline bool SetEmoteNameRef(t_structHelper inst, FName value) { inst.WriteOffset(0x290, value); }
	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UW_Emote_QuickMenu_C> value) { inst.WriteOffset(0x298, value); }
	inline bool SetRowIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetColIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2A4, value); }
	inline bool SetButtonLinearColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x2A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_EmoteButton2_C = sizeof(UW_EmoteButton2_C); // 696
    static_assert(sizeof(UW_EmoteButton2_C) == 0x2B8, "Size of UW_EmoteButton2_C is not correct.");
	auto constexpr UW_EmoteButton2_C_UberGraphFrame_Offset = offsetof(UW_EmoteButton2_C, UberGraphFrame);
	static_assert(UW_EmoteButton2_C_UberGraphFrame_Offset == 0x248, "UW_EmoteButton2_C::UberGraphFrame offset is not 248");
	auto constexpr UW_EmoteButton2_C_Border_4_Offset = offsetof(UW_EmoteButton2_C, Border_4);
	static_assert(UW_EmoteButton2_C_Border_4_Offset == 0x250, "UW_EmoteButton2_C::Border_4 offset is not 250");
	auto constexpr UW_EmoteButton2_C_Button_1_Offset = offsetof(UW_EmoteButton2_C, Button_1);
	static_assert(UW_EmoteButton2_C_Button_1_Offset == 0x258, "UW_EmoteButton2_C::Button_1 offset is not 258");
	auto constexpr UW_EmoteButton2_C_EmoteImage_Offset = offsetof(UW_EmoteButton2_C, EmoteImage);
	static_assert(UW_EmoteButton2_C_EmoteImage_Offset == 0x260, "UW_EmoteButton2_C::EmoteImage offset is not 260");
	auto constexpr UW_EmoteButton2_C_EmoteName_Offset = offsetof(UW_EmoteButton2_C, EmoteName);
	static_assert(UW_EmoteButton2_C_EmoteName_Offset == 0x268, "UW_EmoteButton2_C::EmoteName offset is not 268");
	auto constexpr UW_EmoteButton2_C_ImageRef_Offset = offsetof(UW_EmoteButton2_C, ImageRef);
	static_assert(UW_EmoteButton2_C_ImageRef_Offset == 0x270, "UW_EmoteButton2_C::ImageRef offset is not 270");
	auto constexpr UW_EmoteButton2_C_LocalizedName_Offset = offsetof(UW_EmoteButton2_C, LocalizedName);
	static_assert(UW_EmoteButton2_C_LocalizedName_Offset == 0x278, "UW_EmoteButton2_C::LocalizedName offset is not 278");
	auto constexpr UW_EmoteButton2_C_EmoteNameRef_Offset = offsetof(UW_EmoteButton2_C, EmoteNameRef);
	static_assert(UW_EmoteButton2_C_EmoteNameRef_Offset == 0x290, "UW_EmoteButton2_C::EmoteNameRef offset is not 290");
	auto constexpr UW_EmoteButton2_C_Parent_Offset = offsetof(UW_EmoteButton2_C, Parent);
	static_assert(UW_EmoteButton2_C_Parent_Offset == 0x298, "UW_EmoteButton2_C::Parent offset is not 298");
	auto constexpr UW_EmoteButton2_C_RowIndex_Offset = offsetof(UW_EmoteButton2_C, RowIndex);
	static_assert(UW_EmoteButton2_C_RowIndex_Offset == 0x2a0, "UW_EmoteButton2_C::RowIndex offset is not 2a0");
	auto constexpr UW_EmoteButton2_C_ColIndex_Offset = offsetof(UW_EmoteButton2_C, ColIndex);
	static_assert(UW_EmoteButton2_C_ColIndex_Offset == 0x2a4, "UW_EmoteButton2_C::ColIndex offset is not 2a4");
	auto constexpr UW_EmoteButton2_C_ButtonLinearColor_Offset = offsetof(UW_EmoteButton2_C, ButtonLinearColor);
	static_assert(UW_EmoteButton2_C_ButtonLinearColor_Offset == 0x2a8, "UW_EmoteButton2_C::ButtonLinearColor offset is not 2a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
