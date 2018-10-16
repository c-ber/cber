#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMessageHudWidget_C // Size: 0x294
	: public UUserWidget // Size: 0x248
{
private:
	typedef UMessageHudWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163973); // id32("WidgetBlueprintGeneratedClass MessageHudWidget.MessageHudWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty MessageHudWidget.MessageHudWidget_C.UberGraphFrame */
	ExternalPtr<struct UNewMessageBorderWidget_C> ImportantMessageBox; /* Ofs: 0x250 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.ImportantMessageBox */
	ExternalPtr<struct URetainerBox> ImportantMessageBox_RetainerBox; /* Ofs: 0x258 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.ImportantMessageBox_RetainerBox */
	ExternalPtr<struct UCanvasPanel> MainCanvas; /* Ofs: 0x260 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.MainCanvas */
	ExternalPtr<struct UNewMessageBorderWidget_C> SystemMessageBox; /* Ofs: 0x268 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.SystemMessageBox */
	ExternalPtr<struct URetainerBox> SystemMessageBox_RetainerBox; /* Ofs: 0x270 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.SystemMessageBox_RetainerBox */
	ExternalPtr<struct UCanvasPanel> SystemMessageCanvas; /* Ofs: 0x278 Size: 0x8 - ObjectProperty MessageHudWidget.MessageHudWidget_C.SystemMessageCanvas */
	TArray<ExternalPtr<struct UKillMessageWidget_C>> KillMessagePool; /* Ofs: 0x280 Size: 0x10 - ArrayProperty MessageHudWidget.MessageHudWidget_C.KillMessagePool */
	int32_t MessageIndex; /* Ofs: 0x290 Size: 0x4 - IntProperty MessageHudWidget.MessageHudWidget_C.MessageIndex */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetImportantMessageBox(t_structHelper inst, ExternalPtr<struct UNewMessageBorderWidget_C> value) { inst.WriteOffset(0x250, value); }
	inline bool SetImportantMessageBox_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x258, value); }
	inline bool SetMainCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSystemMessageBox(t_structHelper inst, ExternalPtr<struct UNewMessageBorderWidget_C> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSystemMessageBox_RetainerBox(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSystemMessageCanvas(t_structHelper inst, ExternalPtr<struct UCanvasPanel> value) { inst.WriteOffset(0x278, value); }
	inline bool SetKillMessagePool(t_structHelper inst, TArray<ExternalPtr<struct UKillMessageWidget_C>> value) { inst.WriteOffset(0x280, value); }
	inline bool SetMessageIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x290, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMessageHudWidget_C = sizeof(UMessageHudWidget_C); // 660
    static_assert(sizeof(UMessageHudWidget_C) == 0x294, "Size of UMessageHudWidget_C is not correct.");
	auto constexpr UMessageHudWidget_C_UberGraphFrame_Offset = offsetof(UMessageHudWidget_C, UberGraphFrame);
	static_assert(UMessageHudWidget_C_UberGraphFrame_Offset == 0x248, "UMessageHudWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UMessageHudWidget_C_ImportantMessageBox_Offset = offsetof(UMessageHudWidget_C, ImportantMessageBox);
	static_assert(UMessageHudWidget_C_ImportantMessageBox_Offset == 0x250, "UMessageHudWidget_C::ImportantMessageBox offset is not 250");
	auto constexpr UMessageHudWidget_C_ImportantMessageBox_RetainerBox_Offset = offsetof(UMessageHudWidget_C, ImportantMessageBox_RetainerBox);
	static_assert(UMessageHudWidget_C_ImportantMessageBox_RetainerBox_Offset == 0x258, "UMessageHudWidget_C::ImportantMessageBox_RetainerBox offset is not 258");
	auto constexpr UMessageHudWidget_C_MainCanvas_Offset = offsetof(UMessageHudWidget_C, MainCanvas);
	static_assert(UMessageHudWidget_C_MainCanvas_Offset == 0x260, "UMessageHudWidget_C::MainCanvas offset is not 260");
	auto constexpr UMessageHudWidget_C_SystemMessageBox_Offset = offsetof(UMessageHudWidget_C, SystemMessageBox);
	static_assert(UMessageHudWidget_C_SystemMessageBox_Offset == 0x268, "UMessageHudWidget_C::SystemMessageBox offset is not 268");
	auto constexpr UMessageHudWidget_C_SystemMessageBox_RetainerBox_Offset = offsetof(UMessageHudWidget_C, SystemMessageBox_RetainerBox);
	static_assert(UMessageHudWidget_C_SystemMessageBox_RetainerBox_Offset == 0x270, "UMessageHudWidget_C::SystemMessageBox_RetainerBox offset is not 270");
	auto constexpr UMessageHudWidget_C_SystemMessageCanvas_Offset = offsetof(UMessageHudWidget_C, SystemMessageCanvas);
	static_assert(UMessageHudWidget_C_SystemMessageCanvas_Offset == 0x278, "UMessageHudWidget_C::SystemMessageCanvas offset is not 278");
	auto constexpr UMessageHudWidget_C_KillMessagePool_Offset = offsetof(UMessageHudWidget_C, KillMessagePool);
	static_assert(UMessageHudWidget_C_KillMessagePool_Offset == 0x280, "UMessageHudWidget_C::KillMessagePool offset is not 280");
	auto constexpr UMessageHudWidget_C_MessageIndex_Offset = offsetof(UMessageHudWidget_C, MessageIndex);
	static_assert(UMessageHudWidget_C_MessageIndex_Offset == 0x290, "UMessageHudWidget_C::MessageIndex offset is not 290");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
