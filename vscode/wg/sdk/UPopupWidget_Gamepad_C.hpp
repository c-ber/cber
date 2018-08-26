#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPopupWidget_Gamepad_C // Size: 0x2B0
	: public UUserWidget // Size: 0x248
{
private:
	typedef UPopupWidget_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(184285); // id32("WidgetBlueprintGeneratedClass PopupWidget_Gamepad.PopupWidget_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> PopupEmerging; /* Ofs: 0x250 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.PopupEmerging */
	ExternalPtr<struct UCircularThrobber> CircularThrobber_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.CircularThrobber_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x260 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.Image_1 */
	ExternalPtr<struct UImage> Image_3; /* Ofs: 0x268 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.Image_3 */
	ExternalPtr<struct UImage> Image_5; /* Ofs: 0x270 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.Image_5 */
	ExternalPtr<struct UTextBlock> TextBlock_172; /* Ofs: 0x278 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.TextBlock_172 */
	ExternalPtr<struct UBorder> Waiting; /* Ofs: 0x280 Size: 0x8 - ObjectProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.Waiting */
	FText Message; /* Ofs: 0x288 Size: 0x18 - TextProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.Message */
	FScriptMulticastDelegate ButtonClickDispatcher; /* Ofs: 0x2A0 Size: 0x10 - MulticastDelegateProperty PopupWidget_Gamepad.PopupWidget_Gamepad_C.ButtonClickDispatcher */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetPopupEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCircularThrobber_1(t_structHelper inst, ExternalPtr<struct UCircularThrobber> value) { inst.WriteOffset(0x258, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x260, value); }
	inline bool SetImage_3(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x268, value); }
	inline bool SetImage_5(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x270, value); }
	inline bool SetTextBlock_172(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetWaiting(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x280, value); }
	inline bool SetMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x288, value); }
	inline bool SetButtonClickDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPopupWidget_Gamepad_C = sizeof(UPopupWidget_Gamepad_C); // 688
    static_assert(sizeof(UPopupWidget_Gamepad_C) == 0x2B0, "Size of UPopupWidget_Gamepad_C is not correct.");
	auto constexpr UPopupWidget_Gamepad_C_UberGraphFrame_Offset = offsetof(UPopupWidget_Gamepad_C, UberGraphFrame);
	static_assert(UPopupWidget_Gamepad_C_UberGraphFrame_Offset == 0x248, "UPopupWidget_Gamepad_C::UberGraphFrame offset is not 248");
	auto constexpr UPopupWidget_Gamepad_C_PopupEmerging_Offset = offsetof(UPopupWidget_Gamepad_C, PopupEmerging);
	static_assert(UPopupWidget_Gamepad_C_PopupEmerging_Offset == 0x250, "UPopupWidget_Gamepad_C::PopupEmerging offset is not 250");
	auto constexpr UPopupWidget_Gamepad_C_CircularThrobber_1_Offset = offsetof(UPopupWidget_Gamepad_C, CircularThrobber_1);
	static_assert(UPopupWidget_Gamepad_C_CircularThrobber_1_Offset == 0x258, "UPopupWidget_Gamepad_C::CircularThrobber_1 offset is not 258");
	auto constexpr UPopupWidget_Gamepad_C_Image_1_Offset = offsetof(UPopupWidget_Gamepad_C, Image_1);
	static_assert(UPopupWidget_Gamepad_C_Image_1_Offset == 0x260, "UPopupWidget_Gamepad_C::Image_1 offset is not 260");
	auto constexpr UPopupWidget_Gamepad_C_Image_3_Offset = offsetof(UPopupWidget_Gamepad_C, Image_3);
	static_assert(UPopupWidget_Gamepad_C_Image_3_Offset == 0x268, "UPopupWidget_Gamepad_C::Image_3 offset is not 268");
	auto constexpr UPopupWidget_Gamepad_C_Image_5_Offset = offsetof(UPopupWidget_Gamepad_C, Image_5);
	static_assert(UPopupWidget_Gamepad_C_Image_5_Offset == 0x270, "UPopupWidget_Gamepad_C::Image_5 offset is not 270");
	auto constexpr UPopupWidget_Gamepad_C_TextBlock_172_Offset = offsetof(UPopupWidget_Gamepad_C, TextBlock_172);
	static_assert(UPopupWidget_Gamepad_C_TextBlock_172_Offset == 0x278, "UPopupWidget_Gamepad_C::TextBlock_172 offset is not 278");
	auto constexpr UPopupWidget_Gamepad_C_Waiting_Offset = offsetof(UPopupWidget_Gamepad_C, Waiting);
	static_assert(UPopupWidget_Gamepad_C_Waiting_Offset == 0x280, "UPopupWidget_Gamepad_C::Waiting offset is not 280");
	auto constexpr UPopupWidget_Gamepad_C_Message_Offset = offsetof(UPopupWidget_Gamepad_C, Message);
	static_assert(UPopupWidget_Gamepad_C_Message_Offset == 0x288, "UPopupWidget_Gamepad_C::Message offset is not 288");
	auto constexpr UPopupWidget_Gamepad_C_ButtonClickDispatcher_Offset = offsetof(UPopupWidget_Gamepad_C, ButtonClickDispatcher);
	static_assert(UPopupWidget_Gamepad_C_ButtonClickDispatcher_Offset == 0x2a0, "UPopupWidget_Gamepad_C::ButtonClickDispatcher offset is not 2a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
