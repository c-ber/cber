#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UW_EmoteButton_C // Size: 0x298
	: public UUserWidget // Size: 0x248
{
private:
	typedef UW_EmoteButton_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91354); // id32("WidgetBlueprintGeneratedClass W_EmoteButton.W_EmoteButton_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty W_EmoteButton.W_EmoteButton_C.UberGraphFrame */
	ExternalPtr<struct UButton> Button_1; /* Ofs: 0x250 Size: 0x8 - ObjectProperty W_EmoteButton.W_EmoteButton_C.Button_1 */
	ExternalPtr<struct UImage> EmoteImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty W_EmoteButton.W_EmoteButton_C.EmoteImage */
	ExternalPtr<struct UTextBlock> EmoteName; /* Ofs: 0x260 Size: 0x8 - ObjectProperty W_EmoteButton.W_EmoteButton_C.EmoteName */
	ExternalPtr<struct UTexture2D> ImageRef; /* Ofs: 0x268 Size: 0x8 - ObjectProperty W_EmoteButton.W_EmoteButton_C.ImageRef */
	FText LocalizedName; /* Ofs: 0x270 Size: 0x18 - TextProperty W_EmoteButton.W_EmoteButton_C.LocalizedName */
	FName EmoteNameRef; /* Ofs: 0x288 Size: 0x8 - NameProperty W_EmoteButton.W_EmoteButton_C.EmoteNameRef */
	ExternalPtr<struct UW_WeaponMenu_C> Parent; /* Ofs: 0x290 Size: 0x8 - ObjectProperty W_EmoteButton.W_EmoteButton_C.Parent */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetButton_1(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetEmoteImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetEmoteName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetImageRef(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x268, value); }
	inline bool SetLocalizedName(t_structHelper inst, FText value) { inst.WriteOffset(0x270, value); }
	inline bool SetEmoteNameRef(t_structHelper inst, FName value) { inst.WriteOffset(0x288, value); }
	inline bool SetParent(t_structHelper inst, ExternalPtr<struct UW_WeaponMenu_C> value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUW_EmoteButton_C = sizeof(UW_EmoteButton_C); // 664
    static_assert(sizeof(UW_EmoteButton_C) == 0x298, "Size of UW_EmoteButton_C is not correct.");
	auto constexpr UW_EmoteButton_C_UberGraphFrame_Offset = offsetof(UW_EmoteButton_C, UberGraphFrame);
	static_assert(UW_EmoteButton_C_UberGraphFrame_Offset == 0x248, "UW_EmoteButton_C::UberGraphFrame offset is not 248");
	auto constexpr UW_EmoteButton_C_Button_1_Offset = offsetof(UW_EmoteButton_C, Button_1);
	static_assert(UW_EmoteButton_C_Button_1_Offset == 0x250, "UW_EmoteButton_C::Button_1 offset is not 250");
	auto constexpr UW_EmoteButton_C_EmoteImage_Offset = offsetof(UW_EmoteButton_C, EmoteImage);
	static_assert(UW_EmoteButton_C_EmoteImage_Offset == 0x258, "UW_EmoteButton_C::EmoteImage offset is not 258");
	auto constexpr UW_EmoteButton_C_EmoteName_Offset = offsetof(UW_EmoteButton_C, EmoteName);
	static_assert(UW_EmoteButton_C_EmoteName_Offset == 0x260, "UW_EmoteButton_C::EmoteName offset is not 260");
	auto constexpr UW_EmoteButton_C_ImageRef_Offset = offsetof(UW_EmoteButton_C, ImageRef);
	static_assert(UW_EmoteButton_C_ImageRef_Offset == 0x268, "UW_EmoteButton_C::ImageRef offset is not 268");
	auto constexpr UW_EmoteButton_C_LocalizedName_Offset = offsetof(UW_EmoteButton_C, LocalizedName);
	static_assert(UW_EmoteButton_C_LocalizedName_Offset == 0x270, "UW_EmoteButton_C::LocalizedName offset is not 270");
	auto constexpr UW_EmoteButton_C_EmoteNameRef_Offset = offsetof(UW_EmoteButton_C, EmoteNameRef);
	static_assert(UW_EmoteButton_C_EmoteNameRef_Offset == 0x288, "UW_EmoteButton_C::EmoteNameRef offset is not 288");
	auto constexpr UW_EmoteButton_C_Parent_Offset = offsetof(UW_EmoteButton_C, Parent);
	static_assert(UW_EmoteButton_C_Parent_Offset == 0x290, "UW_EmoteButton_C::Parent offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
