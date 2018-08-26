#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UKillMessageHudWidget_C // Size: 0x29C
	: public UUserWidget // Size: 0x248
{
private:
	typedef UKillMessageHudWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(194963); // id32("WidgetBlueprintGeneratedClass KillMessageHudWidget.KillMessageHudWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty KillMessageHudWidget.KillMessageHudWidget_C.UberGraphFrame */
	ExternalPtr<struct UBP_KillMessageListWidget_C> IconOtherKillMessage; /* Ofs: 0x250 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.IconOtherKillMessage */
	ExternalPtr<struct URetainerBox> IconOtherKillMessage_RetainerBox; /* Ofs: 0x258 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.IconOtherKillMessage_RetainerBox */
	ExternalPtr<struct UCanvasPanel> MainCanvas; /* Ofs: 0x260 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.MainCanvas */
	ExternalPtr<struct UNewMessageBorderWidget_C> MyKillMessageBox; /* Ofs: 0x268 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.MyKillMessageBox */
	ExternalPtr<struct URetainerBox> MyKillMessageBox_RetainerBox; /* Ofs: 0x270 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.MyKillMessageBox_RetainerBox */
	ExternalPtr<struct UNewMessageBorderWidget_C> OtherKillMessage; /* Ofs: 0x278 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.OtherKillMessage */
	ExternalPtr<struct URetainerBox> OtherKillMessage_RetainerBox; /* Ofs: 0x280 Size: 0x8 - ObjectProperty KillMessageHudWidget.KillMessageHudWidget_C.OtherKillMessage_RetainerBox */
	TArray<ExternalPtr<struct UKillMessageWidget_C>> KillMessagePool; /* Ofs: 0x288 Size: 0x10 - ArrayProperty KillMessageHudWidget.KillMessageHudWidget_C.KillMessagePool */
	int32_t MessageIndex; /* Ofs: 0x298 Size: 0x4 - IntProperty KillMessageHudWidget.KillMessageHudWidget_C.MessageIndex */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetIconOtherKillMessage(t_structHelper inst, ExternalPtr<struct UBP_KillMessageListWidget_C> value) { inst.WriteOffset(0x250, value); }
	inline bool SetIconOtherKillMessage_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMainCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x260, value); }
	inline bool SetMyKillMessageBox(t_structHelper inst, ExternalPtr<struct UNewMessageBorderWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetMyKillMessageBox_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x270, value); }
	inline bool SetOtherKillMessage(t_structHelper inst, ExternalPtr<struct UNewMessageBorderWidget_C> value) { inst.WriteOffset(0x278, value); }
	inline bool SetOtherKillMessage_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x280, value); }
	inline bool SetKillMessagePool(t_structHelper inst, TArray<ExternalPtr<struct UKillMessageWidget_C>> value) { inst.WriteOffset(0x288, value); }
	inline bool SetMessageIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x298, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUKillMessageHudWidget_C = sizeof(UKillMessageHudWidget_C); // 668
    static_assert(sizeof(UKillMessageHudWidget_C) == 0x29C, "Size of UKillMessageHudWidget_C is not correct.");
	auto constexpr UKillMessageHudWidget_C_UberGraphFrame_Offset = offsetof(UKillMessageHudWidget_C, UberGraphFrame);
	static_assert(UKillMessageHudWidget_C_UberGraphFrame_Offset == 0x248, "UKillMessageHudWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UKillMessageHudWidget_C_IconOtherKillMessage_Offset = offsetof(UKillMessageHudWidget_C, IconOtherKillMessage);
	static_assert(UKillMessageHudWidget_C_IconOtherKillMessage_Offset == 0x250, "UKillMessageHudWidget_C::IconOtherKillMessage offset is not 250");
	auto constexpr UKillMessageHudWidget_C_IconOtherKillMessage_RetainerBox_Offset = offsetof(UKillMessageHudWidget_C, IconOtherKillMessage_RetainerBox);
	static_assert(UKillMessageHudWidget_C_IconOtherKillMessage_RetainerBox_Offset == 0x258, "UKillMessageHudWidget_C::IconOtherKillMessage_RetainerBox offset is not 258");
	auto constexpr UKillMessageHudWidget_C_MainCanvas_Offset = offsetof(UKillMessageHudWidget_C, MainCanvas);
	static_assert(UKillMessageHudWidget_C_MainCanvas_Offset == 0x260, "UKillMessageHudWidget_C::MainCanvas offset is not 260");
	auto constexpr UKillMessageHudWidget_C_MyKillMessageBox_Offset = offsetof(UKillMessageHudWidget_C, MyKillMessageBox);
	static_assert(UKillMessageHudWidget_C_MyKillMessageBox_Offset == 0x268, "UKillMessageHudWidget_C::MyKillMessageBox offset is not 268");
	auto constexpr UKillMessageHudWidget_C_MyKillMessageBox_RetainerBox_Offset = offsetof(UKillMessageHudWidget_C, MyKillMessageBox_RetainerBox);
	static_assert(UKillMessageHudWidget_C_MyKillMessageBox_RetainerBox_Offset == 0x270, "UKillMessageHudWidget_C::MyKillMessageBox_RetainerBox offset is not 270");
	auto constexpr UKillMessageHudWidget_C_OtherKillMessage_Offset = offsetof(UKillMessageHudWidget_C, OtherKillMessage);
	static_assert(UKillMessageHudWidget_C_OtherKillMessage_Offset == 0x278, "UKillMessageHudWidget_C::OtherKillMessage offset is not 278");
	auto constexpr UKillMessageHudWidget_C_OtherKillMessage_RetainerBox_Offset = offsetof(UKillMessageHudWidget_C, OtherKillMessage_RetainerBox);
	static_assert(UKillMessageHudWidget_C_OtherKillMessage_RetainerBox_Offset == 0x280, "UKillMessageHudWidget_C::OtherKillMessage_RetainerBox offset is not 280");
	auto constexpr UKillMessageHudWidget_C_KillMessagePool_Offset = offsetof(UKillMessageHudWidget_C, KillMessagePool);
	static_assert(UKillMessageHudWidget_C_KillMessagePool_Offset == 0x288, "UKillMessageHudWidget_C::KillMessagePool offset is not 288");
	auto constexpr UKillMessageHudWidget_C_MessageIndex_Offset = offsetof(UKillMessageHudWidget_C, MessageIndex);
	static_assert(UKillMessageHudWidget_C_MessageIndex_Offset == 0x298, "UKillMessageHudWidget_C::MessageIndex offset is not 298");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
