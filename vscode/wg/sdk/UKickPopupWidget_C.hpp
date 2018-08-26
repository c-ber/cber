#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKickPopupWidget_C // Size: 0x290
	: public UUserWidget // Size: 0x248
{
private:
	typedef UKickPopupWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(177650); // id32("WidgetBlueprintGeneratedClass KickPopupWidget.KickPopupWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty KickPopupWidget.KickPopupWidget_C.UberGraphFrame */
	ExternalPtr<struct UButton> CloseButton; /* Ofs: 0x250 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.CloseButton */
	ExternalPtr<struct UImage> Image_1; /* Ofs: 0x258 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.Image_1 */
	ExternalPtr<struct UTextBlock> KickQuestion; /* Ofs: 0x260 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.KickQuestion */
	ExternalPtr<struct UButton> NoButton; /* Ofs: 0x268 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.NoButton */
	ExternalPtr<struct UButton> OuterPopup; /* Ofs: 0x270 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.OuterPopup */
	ExternalPtr<struct UButton> YesButton; /* Ofs: 0x278 Size: 0x8 - ObjectProperty KickPopupWidget.KickPopupWidget_C.YesButton */
	FScriptMulticastDelegate ButttonClick; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty KickPopupWidget.KickPopupWidget_C.ButttonClick */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetCloseButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImage_1(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetKickQuestion(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x260, value); }
	inline bool SetNoButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x268, value); }
	inline bool SetOuterPopup(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x270, value); }
	inline bool SetYesButton(t_structHelper inst, ExternalPtr<struct UButton> value) { inst.WriteOffset(0x278, value); }
	inline bool SetButttonClick(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKickPopupWidget_C = sizeof(UKickPopupWidget_C); // 656
    static_assert(sizeof(UKickPopupWidget_C) == 0x290, "Size of UKickPopupWidget_C is not correct.");
	auto constexpr UKickPopupWidget_C_UberGraphFrame_Offset = offsetof(UKickPopupWidget_C, UberGraphFrame);
	static_assert(UKickPopupWidget_C_UberGraphFrame_Offset == 0x248, "UKickPopupWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UKickPopupWidget_C_CloseButton_Offset = offsetof(UKickPopupWidget_C, CloseButton);
	static_assert(UKickPopupWidget_C_CloseButton_Offset == 0x250, "UKickPopupWidget_C::CloseButton offset is not 250");
	auto constexpr UKickPopupWidget_C_Image_1_Offset = offsetof(UKickPopupWidget_C, Image_1);
	static_assert(UKickPopupWidget_C_Image_1_Offset == 0x258, "UKickPopupWidget_C::Image_1 offset is not 258");
	auto constexpr UKickPopupWidget_C_KickQuestion_Offset = offsetof(UKickPopupWidget_C, KickQuestion);
	static_assert(UKickPopupWidget_C_KickQuestion_Offset == 0x260, "UKickPopupWidget_C::KickQuestion offset is not 260");
	auto constexpr UKickPopupWidget_C_NoButton_Offset = offsetof(UKickPopupWidget_C, NoButton);
	static_assert(UKickPopupWidget_C_NoButton_Offset == 0x268, "UKickPopupWidget_C::NoButton offset is not 268");
	auto constexpr UKickPopupWidget_C_OuterPopup_Offset = offsetof(UKickPopupWidget_C, OuterPopup);
	static_assert(UKickPopupWidget_C_OuterPopup_Offset == 0x270, "UKickPopupWidget_C::OuterPopup offset is not 270");
	auto constexpr UKickPopupWidget_C_YesButton_Offset = offsetof(UKickPopupWidget_C, YesButton);
	static_assert(UKickPopupWidget_C_YesButton_Offset == 0x278, "UKickPopupWidget_C::YesButton offset is not 278");
	auto constexpr UKickPopupWidget_C_ButttonClick_Offset = offsetof(UKickPopupWidget_C, ButttonClick);
	static_assert(UKickPopupWidget_C_ButttonClick_Offset == 0x280, "UKickPopupWidget_C::ButttonClick offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
