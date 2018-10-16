#pragma once
#include "UNewSystemMessageWidget_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UImportantMessageWidget_C // Size: 0x320
	: public UNewSystemMessageWidget_C // Size: 0x300
{
private:
	typedef UImportantMessageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163949); // id32("WidgetBlueprintGeneratedClass ImportantMessageWidget.ImportantMessageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x300 Size: 0x8 - StructProperty ImportantMessageWidget.ImportantMessageWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> GamePlayMessageFadeOut; /* Ofs: 0x308 Size: 0x8 - ObjectProperty ImportantMessageWidget.ImportantMessageWidget_C.GamePlayMessageFadeOut */
	ExternalPtr<struct UWidgetAnimation> GamePlayMessageFadeIn; /* Ofs: 0x310 Size: 0x8 - ObjectProperty ImportantMessageWidget.ImportantMessageWidget_C.GamePlayMessageFadeIn */
	ExternalPtr<struct UTextBlock> TextBlock_1; /* Ofs: 0x318 Size: 0x8 - ObjectProperty ImportantMessageWidget.ImportantMessageWidget_C.TextBlock_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x300, value); }
	inline bool SetGamePlayMessageFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x308, value); }
	inline bool SetGamePlayMessageFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x310, value); }
	inline bool SetTextBlock_1(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x318, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUImportantMessageWidget_C = sizeof(UImportantMessageWidget_C); // 800
    static_assert(sizeof(UImportantMessageWidget_C) == 0x320, "Size of UImportantMessageWidget_C is not correct.");
	auto constexpr UImportantMessageWidget_C_UberGraphFrame_Offset = offsetof(UImportantMessageWidget_C, UberGraphFrame);
	static_assert(UImportantMessageWidget_C_UberGraphFrame_Offset == 0x300, "UImportantMessageWidget_C::UberGraphFrame offset is not 300");
	auto constexpr UImportantMessageWidget_C_GamePlayMessageFadeOut_Offset = offsetof(UImportantMessageWidget_C, GamePlayMessageFadeOut);
	static_assert(UImportantMessageWidget_C_GamePlayMessageFadeOut_Offset == 0x308, "UImportantMessageWidget_C::GamePlayMessageFadeOut offset is not 308");
	auto constexpr UImportantMessageWidget_C_GamePlayMessageFadeIn_Offset = offsetof(UImportantMessageWidget_C, GamePlayMessageFadeIn);
	static_assert(UImportantMessageWidget_C_GamePlayMessageFadeIn_Offset == 0x310, "UImportantMessageWidget_C::GamePlayMessageFadeIn offset is not 310");
	auto constexpr UImportantMessageWidget_C_TextBlock_1_Offset = offsetof(UImportantMessageWidget_C, TextBlock_1);
	static_assert(UImportantMessageWidget_C_TextBlock_1_Offset == 0x318, "UImportantMessageWidget_C::TextBlock_1 offset is not 318");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
