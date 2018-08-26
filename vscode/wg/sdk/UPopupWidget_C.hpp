#pragma once
#include "UBlockInputUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EPopupStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPopupWidget_C // Size: 0x3A9
	: public UBlockInputUserWidget // Size: 0x330
{
private:
	typedef UPopupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(176477); // id32("WidgetBlueprintGeneratedClass PopupWidget.PopupWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x330 Size: 0x8 - StructProperty PopupWidget.PopupWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> PopupEmerging; /* Ofs: 0x338 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.PopupEmerging */
	ExternalPtr<struct UButton> ButtonCancel; /* Ofs: 0x340 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.ButtonCancel */
	ExternalPtr<struct UButton> ButtonOK; /* Ofs: 0x348 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.ButtonOK */
	ExternalPtr<struct UCircularThrobber> CircularThrobber_1; /* Ofs: 0x350 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.CircularThrobber_1 */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x358 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.Image_1 */
	ExternalPtr<struct UTextBlock> TextBlock_172; /* Ofs: 0x360 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.TextBlock_172 */
	ExternalPtr<struct UTextBlock> TextCancel; /* Ofs: 0x368 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.TextCancel */
	ExternalPtr<struct UTextBlock> TextOK; /* Ofs: 0x370 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.TextOK */
	ExternalPtr<struct UBorder> Waiting; /* Ofs: 0x378 Size: 0x8 - ObjectProperty PopupWidget.PopupWidget_C.Waiting */
	FText Message; /* Ofs: 0x380 Size: 0x18 - TextProperty PopupWidget.PopupWidget_C.Message */
	FScriptMulticastDelegate ButtonClickDispatcher; /* Ofs: 0x398 Size: 0x10 - MulticastDelegateProperty PopupWidget.PopupWidget_C.ButtonClickDispatcher */
	TEnumAsByte<enum EPopupStyle> SavePopupStyle; /* Ofs: 0x3A8 Size: 0x1 - EnumProperty PopupWidget.PopupWidget_C.SavePopupStyle */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x330, value); }
	inline bool SetPopupEmerging(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x338, value); }
	inline bool SetButtonCancel(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x340, value); }
	inline bool SetButtonOK(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x348, value); }
	inline bool SetCircularThrobber_1(t_structHelper inst, ExternalPtr<struct UCircularThrobber> value) { inst.WriteOffset(0x350, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x358, value); }
	inline bool SetTextBlock_172(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x360, value); }
	inline bool SetTextCancel(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x368, value); }
	inline bool SetTextOK(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x370, value); }
	inline bool SetWaiting(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x378, value); }
	inline bool SetMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x380, value); }
	inline bool SetButtonClickDispatcher(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x398, value); }
	inline bool SetSavePopupStyle(t_structHelper inst, TEnumAsByte<enum EPopupStyle> value) { inst.WriteOffset(0x3A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPopupWidget_C = sizeof(UPopupWidget_C); // 937
    static_assert(sizeof(UPopupWidget_C) == 0x3A9, "Size of UPopupWidget_C is not correct.");
	auto constexpr UPopupWidget_C_UberGraphFrame_Offset = offsetof(UPopupWidget_C, UberGraphFrame);
	static_assert(UPopupWidget_C_UberGraphFrame_Offset == 0x330, "UPopupWidget_C::UberGraphFrame offset is not 330");
	auto constexpr UPopupWidget_C_PopupEmerging_Offset = offsetof(UPopupWidget_C, PopupEmerging);
	static_assert(UPopupWidget_C_PopupEmerging_Offset == 0x338, "UPopupWidget_C::PopupEmerging offset is not 338");
	auto constexpr UPopupWidget_C_ButtonCancel_Offset = offsetof(UPopupWidget_C, ButtonCancel);
	static_assert(UPopupWidget_C_ButtonCancel_Offset == 0x340, "UPopupWidget_C::ButtonCancel offset is not 340");
	auto constexpr UPopupWidget_C_ButtonOK_Offset = offsetof(UPopupWidget_C, ButtonOK);
	static_assert(UPopupWidget_C_ButtonOK_Offset == 0x348, "UPopupWidget_C::ButtonOK offset is not 348");
	auto constexpr UPopupWidget_C_CircularThrobber_1_Offset = offsetof(UPopupWidget_C, CircularThrobber_1);
	static_assert(UPopupWidget_C_CircularThrobber_1_Offset == 0x350, "UPopupWidget_C::CircularThrobber_1 offset is not 350");
	auto constexpr UPopupWidget_C_Image_1_Offset = offsetof(UPopupWidget_C, Image_1);
	static_assert(UPopupWidget_C_Image_1_Offset == 0x358, "UPopupWidget_C::Image_1 offset is not 358");
	auto constexpr UPopupWidget_C_TextBlock_172_Offset = offsetof(UPopupWidget_C, TextBlock_172);
	static_assert(UPopupWidget_C_TextBlock_172_Offset == 0x360, "UPopupWidget_C::TextBlock_172 offset is not 360");
	auto constexpr UPopupWidget_C_TextCancel_Offset = offsetof(UPopupWidget_C, TextCancel);
	static_assert(UPopupWidget_C_TextCancel_Offset == 0x368, "UPopupWidget_C::TextCancel offset is not 368");
	auto constexpr UPopupWidget_C_TextOK_Offset = offsetof(UPopupWidget_C, TextOK);
	static_assert(UPopupWidget_C_TextOK_Offset == 0x370, "UPopupWidget_C::TextOK offset is not 370");
	auto constexpr UPopupWidget_C_Waiting_Offset = offsetof(UPopupWidget_C, Waiting);
	static_assert(UPopupWidget_C_Waiting_Offset == 0x378, "UPopupWidget_C::Waiting offset is not 378");
	auto constexpr UPopupWidget_C_Message_Offset = offsetof(UPopupWidget_C, Message);
	static_assert(UPopupWidget_C_Message_Offset == 0x380, "UPopupWidget_C::Message offset is not 380");
	auto constexpr UPopupWidget_C_ButtonClickDispatcher_Offset = offsetof(UPopupWidget_C, ButtonClickDispatcher);
	static_assert(UPopupWidget_C_ButtonClickDispatcher_Offset == 0x398, "UPopupWidget_C::ButtonClickDispatcher offset is not 398");
	auto constexpr UPopupWidget_C_SavePopupStyle_Offset = offsetof(UPopupWidget_C, SavePopupStyle);
	static_assert(UPopupWidget_C_SavePopupStyle_Offset == 0x3a8, "UPopupWidget_C::SavePopupStyle offset is not 3a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
