#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETextJustify.hpp"
#include "FSlateColor.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNewSystemMessageWidget_C // Size: 0x300
	: public UUserWidget // Size: 0x248
{
private:
	typedef UNewSystemMessageWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(163711); // id32("WidgetBlueprintGeneratedClass NewSystemMessageWidget.NewSystemMessageWidget_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty NewSystemMessageWidget.NewSystemMessageWidget_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> SystemMessageFadeOut; /* Ofs: 0x250 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.SystemMessageFadeOut */
	ExternalPtr<struct UWidgetAnimation> SystemMessageFadeIn; /* Ofs: 0x258 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.SystemMessageFadeIn */
	ExternalPtr<struct UWidgetAnimation> FadeOut2; /* Ofs: 0x260 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.FadeOut2 */
	ExternalPtr<struct UWidgetAnimation> FadeIn; /* Ofs: 0x268 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.FadeIn */
	ExternalPtr<struct UWidgetAnimation> FadeOut; /* Ofs: 0x270 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.FadeOut */
	ExternalPtr<struct UTextBlock> TextBlock_145; /* Ofs: 0x278 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.TextBlock_145 */
	FText Message; /* Ofs: 0x280 Size: 0x18 - TextProperty NewSystemMessageWidget.NewSystemMessageWidget_C.Message */
	TEnumAsByte<enum ETextJustify> TextAlignment; /* Ofs: 0x298 Size: 0x1 - ByteProperty NewSystemMessageWidget.NewSystemMessageWidget_C.TextAlignment */
	uint8_t UnknownData299[0x7];
	FSlateColor TextColor; /* Ofs: 0x2A0 Size: 0x28 - StructProperty NewSystemMessageWidget.NewSystemMessageWidget_C.TextColor */
	int32_t TextSize; /* Ofs: 0x2C8 Size: 0x4 - IntProperty NewSystemMessageWidget.NewSystemMessageWidget_C.TextSize */
	float Duration; /* Ofs: 0x2CC Size: 0x4 - FloatProperty NewSystemMessageWidget.NewSystemMessageWidget_C.Duration */
	uint8_t boolField2D0;
	uint8_t UnknownData2D1[0x7];
	FScriptMulticastDelegate EndMessage; /* Ofs: 0x2D8 Size: 0x10 - MulticastDelegateProperty NewSystemMessageWidget.NewSystemMessageWidget_C.EndMessage */
	ExternalPtr<struct UAkAudioEvent> Sound; /* Ofs: 0x2E8 Size: 0x8 - ObjectProperty NewSystemMessageWidget.NewSystemMessageWidget_C.Sound */
	uint8_t boolField2F0;
	uint8_t UnknownData2F1[0x7];
	FTimerHandle SaveTimer; /* Ofs: 0x2F8 Size: 0x8 - StructProperty NewSystemMessageWidget.NewSystemMessageWidget_C.SaveTimer */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetSystemMessageFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetSystemMessageFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x258, value); }
	inline bool SetFadeOut2(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x260, value); }
	inline bool SetFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x268, value); }
	inline bool SetFadeOut(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x270, value); }
	inline bool SetTextBlock_145(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x278, value); }
	inline bool SetMessage(t_structHelper inst, FText value) { inst.WriteOffset(0x280, value); }
	inline bool SetTextAlignment(t_structHelper inst, TEnumAsByte<enum ETextJustify> value) { inst.WriteOffset(0x298, value); }
	inline bool SetTextColor(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x2A0, value); }
	inline bool SetTextSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x2C8, value); }
	inline bool SetDuration(t_structHelper inst, float value) { inst.WriteOffset(0x2CC, value); }
	inline bool bUseFadeIn()
	{
		return boolField2D0& 0x1;
	}
	inline bool SetbUseFadeIn(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2D0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEndMessage(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2D8, value); }
	inline bool SetSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x2E8, value); }
	inline bool bUsed()
	{
		return boolField2F0& 0x1;
	}
	inline bool SetbUsed(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x2F0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetSaveTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0x2F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNewSystemMessageWidget_C = sizeof(UNewSystemMessageWidget_C); // 768
    static_assert(sizeof(UNewSystemMessageWidget_C) == 0x300, "Size of UNewSystemMessageWidget_C is not correct.");
	auto constexpr UNewSystemMessageWidget_C_UberGraphFrame_Offset = offsetof(UNewSystemMessageWidget_C, UberGraphFrame);
	static_assert(UNewSystemMessageWidget_C_UberGraphFrame_Offset == 0x248, "UNewSystemMessageWidget_C::UberGraphFrame offset is not 248");
	auto constexpr UNewSystemMessageWidget_C_SystemMessageFadeOut_Offset = offsetof(UNewSystemMessageWidget_C, SystemMessageFadeOut);
	static_assert(UNewSystemMessageWidget_C_SystemMessageFadeOut_Offset == 0x250, "UNewSystemMessageWidget_C::SystemMessageFadeOut offset is not 250");
	auto constexpr UNewSystemMessageWidget_C_SystemMessageFadeIn_Offset = offsetof(UNewSystemMessageWidget_C, SystemMessageFadeIn);
	static_assert(UNewSystemMessageWidget_C_SystemMessageFadeIn_Offset == 0x258, "UNewSystemMessageWidget_C::SystemMessageFadeIn offset is not 258");
	auto constexpr UNewSystemMessageWidget_C_FadeOut2_Offset = offsetof(UNewSystemMessageWidget_C, FadeOut2);
	static_assert(UNewSystemMessageWidget_C_FadeOut2_Offset == 0x260, "UNewSystemMessageWidget_C::FadeOut2 offset is not 260");
	auto constexpr UNewSystemMessageWidget_C_FadeIn_Offset = offsetof(UNewSystemMessageWidget_C, FadeIn);
	static_assert(UNewSystemMessageWidget_C_FadeIn_Offset == 0x268, "UNewSystemMessageWidget_C::FadeIn offset is not 268");
	auto constexpr UNewSystemMessageWidget_C_FadeOut_Offset = offsetof(UNewSystemMessageWidget_C, FadeOut);
	static_assert(UNewSystemMessageWidget_C_FadeOut_Offset == 0x270, "UNewSystemMessageWidget_C::FadeOut offset is not 270");
	auto constexpr UNewSystemMessageWidget_C_TextBlock_145_Offset = offsetof(UNewSystemMessageWidget_C, TextBlock_145);
	static_assert(UNewSystemMessageWidget_C_TextBlock_145_Offset == 0x278, "UNewSystemMessageWidget_C::TextBlock_145 offset is not 278");
	auto constexpr UNewSystemMessageWidget_C_Message_Offset = offsetof(UNewSystemMessageWidget_C, Message);
	static_assert(UNewSystemMessageWidget_C_Message_Offset == 0x280, "UNewSystemMessageWidget_C::Message offset is not 280");
	auto constexpr UNewSystemMessageWidget_C_TextAlignment_Offset = offsetof(UNewSystemMessageWidget_C, TextAlignment);
	static_assert(UNewSystemMessageWidget_C_TextAlignment_Offset == 0x298, "UNewSystemMessageWidget_C::TextAlignment offset is not 298");
	auto constexpr UNewSystemMessageWidget_C_TextColor_Offset = offsetof(UNewSystemMessageWidget_C, TextColor);
	static_assert(UNewSystemMessageWidget_C_TextColor_Offset == 0x2a0, "UNewSystemMessageWidget_C::TextColor offset is not 2a0");
	auto constexpr UNewSystemMessageWidget_C_TextSize_Offset = offsetof(UNewSystemMessageWidget_C, TextSize);
	static_assert(UNewSystemMessageWidget_C_TextSize_Offset == 0x2c8, "UNewSystemMessageWidget_C::TextSize offset is not 2c8");
	auto constexpr UNewSystemMessageWidget_C_Duration_Offset = offsetof(UNewSystemMessageWidget_C, Duration);
	static_assert(UNewSystemMessageWidget_C_Duration_Offset == 0x2cc, "UNewSystemMessageWidget_C::Duration offset is not 2cc");
	auto constexpr UNewSystemMessageWidget_C_boolField2D0_Offset = offsetof(UNewSystemMessageWidget_C, boolField2D0);
	static_assert(UNewSystemMessageWidget_C_boolField2D0_Offset == 0x2d0, "UNewSystemMessageWidget_C::boolField2D0 offset is not 2d0");
	auto constexpr UNewSystemMessageWidget_C_EndMessage_Offset = offsetof(UNewSystemMessageWidget_C, EndMessage);
	static_assert(UNewSystemMessageWidget_C_EndMessage_Offset == 0x2d8, "UNewSystemMessageWidget_C::EndMessage offset is not 2d8");
	auto constexpr UNewSystemMessageWidget_C_Sound_Offset = offsetof(UNewSystemMessageWidget_C, Sound);
	static_assert(UNewSystemMessageWidget_C_Sound_Offset == 0x2e8, "UNewSystemMessageWidget_C::Sound offset is not 2e8");
	auto constexpr UNewSystemMessageWidget_C_boolField2F0_Offset = offsetof(UNewSystemMessageWidget_C, boolField2F0);
	static_assert(UNewSystemMessageWidget_C_boolField2F0_Offset == 0x2f0, "UNewSystemMessageWidget_C::boolField2F0 offset is not 2f0");
	auto constexpr UNewSystemMessageWidget_C_SaveTimer_Offset = offsetof(UNewSystemMessageWidget_C, SaveTimer);
	static_assert(UNewSystemMessageWidget_C_SaveTimer_Offset == 0x2f8, "UNewSystemMessageWidget_C::SaveTimer offset is not 2f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
