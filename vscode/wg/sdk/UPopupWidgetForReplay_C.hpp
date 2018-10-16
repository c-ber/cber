#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPopupWidgetForReplay_C // Size: 0x2D0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPopupWidgetForReplay_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(68304); // id32("WidgetBlueprintGeneratedClass PopupWidgetForReplay.PopupWidgetForReplay_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty PopupWidgetForReplay.PopupWidgetForReplay_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> PopupEmerging; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.PopupEmerging */
	ExternalPtr<struct UButton> ButtonCancel; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonCancel */
	ExternalPtr<struct UButton> ButtonOK; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonOK */
	ExternalPtr<struct UCircularThrobber> CircularThrobber_1; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.CircularThrobber_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x270 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_172; /* Ofs: 0x278 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.TextBlock_172 */
	ExternalPtr<struct UTextBlock> TextCancel; /* Ofs: 0x280 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.TextCancel */
	ExternalPtr<struct UTextBlock> TextOK; /* Ofs: 0x288 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.TextOK */
	ExternalPtr<struct UBorder> Waiting; /* Ofs: 0x290 Size: 0x8 - ObjectProperty PopupWidgetForReplay.PopupWidgetForReplay_C.Waiting */
	FText Message; /* Ofs: 0x298 Size: 0x18 - TextProperty PopupWidgetForReplay.PopupWidgetForReplay_C.Message */
	FScriptMulticastDelegate ButtonClickDispatcher; /* Ofs: 0x2B0 Size: 0x10 - MulticastDelegateProperty PopupWidgetForReplay.PopupWidgetForReplay_C.ButtonClickDispatcher */
	FScriptMulticastDelegate HideMyself; /* Ofs: 0x2C0 Size: 0x10 - MulticastDelegateProperty PopupWidgetForReplay.PopupWidgetForReplay_C.HideMyself */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetPopupEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetButtonCancel(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x258, value); }
	inline bool SetButtonOK(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x260, value); }
	inline bool SetCircularThrobber_1(t_structHelper inst, ExternalPtr<struct UCircularThrobber> value) { inst.WriteOffset(0x268, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetTextBlock_172(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetTextCancel(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x280, value); }
	inline bool SetTextOK(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x288, value); }
	inline bool SetWaiting(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x290, value); }
	inline bool SetMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x298, value); }
	inline bool SetButtonClickDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2B0, value); }
	inline bool SetHideMyself(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPopupWidgetForReplay_C = sizeof(UPopupWidgetForReplay_C); // 720
    static_assert(sizeof(UPopupWidgetForReplay_C) == 0x2D0, "Size of UPopupWidgetForReplay_C is not correct.");
	auto constexpr UPopupWidgetForReplay_C_UberGraphFrame_Offset = offsetof(UPopupWidgetForReplay_C, UberGraphFrame);
	static_assert(UPopupWidgetForReplay_C_UberGraphFrame_Offset == 0x248, "UPopupWidgetForReplay_C::UberGraphFrame offset is not 248");
	auto constexpr UPopupWidgetForReplay_C_PopupEmerging_Offset = offsetof(UPopupWidgetForReplay_C, PopupEmerging);
	static_assert(UPopupWidgetForReplay_C_PopupEmerging_Offset == 0x250, "UPopupWidgetForReplay_C::PopupEmerging offset is not 250");
	auto constexpr UPopupWidgetForReplay_C_ButtonCancel_Offset = offsetof(UPopupWidgetForReplay_C, ButtonCancel);
	static_assert(UPopupWidgetForReplay_C_ButtonCancel_Offset == 0x258, "UPopupWidgetForReplay_C::ButtonCancel offset is not 258");
	auto constexpr UPopupWidgetForReplay_C_ButtonOK_Offset = offsetof(UPopupWidgetForReplay_C, ButtonOK);
	static_assert(UPopupWidgetForReplay_C_ButtonOK_Offset == 0x260, "UPopupWidgetForReplay_C::ButtonOK offset is not 260");
	auto constexpr UPopupWidgetForReplay_C_CircularThrobber_1_Offset = offsetof(UPopupWidgetForReplay_C, CircularThrobber_1);
	static_assert(UPopupWidgetForReplay_C_CircularThrobber_1_Offset == 0x268, "UPopupWidgetForReplay_C::CircularThrobber_1 offset is not 268");
	auto constexpr UPopupWidgetForReplay_C_Image_1_Offset = offsetof(UPopupWidgetForReplay_C, Image_1);
	static_assert(UPopupWidgetForReplay_C_Image_1_Offset == 0x270, "UPopupWidgetForReplay_C::Image_1 offset is not 270");
	auto constexpr UPopupWidgetForReplay_C_TextBlock_172_Offset = offsetof(UPopupWidgetForReplay_C, TextBlock_172);
	static_assert(UPopupWidgetForReplay_C_TextBlock_172_Offset == 0x278, "UPopupWidgetForReplay_C::TextBlock_172 offset is not 278");
	auto constexpr UPopupWidgetForReplay_C_TextCancel_Offset = offsetof(UPopupWidgetForReplay_C, TextCancel);
	static_assert(UPopupWidgetForReplay_C_TextCancel_Offset == 0x280, "UPopupWidgetForReplay_C::TextCancel offset is not 280");
	auto constexpr UPopupWidgetForReplay_C_TextOK_Offset = offsetof(UPopupWidgetForReplay_C, TextOK);
	static_assert(UPopupWidgetForReplay_C_TextOK_Offset == 0x288, "UPopupWidgetForReplay_C::TextOK offset is not 288");
	auto constexpr UPopupWidgetForReplay_C_Waiting_Offset = offsetof(UPopupWidgetForReplay_C, Waiting);
	static_assert(UPopupWidgetForReplay_C_Waiting_Offset == 0x290, "UPopupWidgetForReplay_C::Waiting offset is not 290");
	auto constexpr UPopupWidgetForReplay_C_Message_Offset = offsetof(UPopupWidgetForReplay_C, Message);
	static_assert(UPopupWidgetForReplay_C_Message_Offset == 0x298, "UPopupWidgetForReplay_C::Message offset is not 298");
	auto constexpr UPopupWidgetForReplay_C_ButtonClickDispatcher_Offset = offsetof(UPopupWidgetForReplay_C, ButtonClickDispatcher);
	static_assert(UPopupWidgetForReplay_C_ButtonClickDispatcher_Offset == 0x2b0, "UPopupWidgetForReplay_C::ButtonClickDispatcher offset is not 2b0");
	auto constexpr UPopupWidgetForReplay_C_HideMyself_Offset = offsetof(UPopupWidgetForReplay_C, HideMyself);
	static_assert(UPopupWidgetForReplay_C_HideMyself_Offset == 0x2c0, "UPopupWidgetForReplay_C::HideMyself offset is not 2c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
