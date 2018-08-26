#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCharacterCapture_Gamepad_C // Size: 0x268
	: public UUserWidget // Size: 0x248
{
private:
	typedef UCharacterCapture_Gamepad_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(64238); // id32("WidgetBlueprintGeneratedClass CharacterCapture_Gamepad.CharacterCapture_Gamepad_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.UberGraphFrame */
	ExternalPtr<struct UWidgetAnimation> FadeIn; /* Ofs: 0x250 Size: 0x8 - ObjectProperty CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.FadeIn */
	ExternalPtr<struct UImage> CaptureImage; /* Ofs: 0x258 Size: 0x8 - ObjectProperty CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.CaptureImage */
	ExternalPtr<struct UCharacterStudio> CharacterStudio; /* Ofs: 0x260 Size: 0x8 - ObjectProperty CharacterCapture_Gamepad.CharacterCapture_Gamepad_C.CharacterStudio */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetFadeIn(t_structHelper inst, ExternalPtr<struct UWidgetAnimation> value) { inst.WriteOffset(0x250, value); }
	inline bool SetCaptureImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x258, value); }
	inline bool SetCharacterStudio(t_structHelper inst, ExternalPtr<struct UCharacterStudio> value) { inst.WriteOffset(0x260, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCharacterCapture_Gamepad_C = sizeof(UCharacterCapture_Gamepad_C); // 616
    static_assert(sizeof(UCharacterCapture_Gamepad_C) == 0x268, "Size of UCharacterCapture_Gamepad_C is not correct.");
	auto constexpr UCharacterCapture_Gamepad_C_UberGraphFrame_Offset = offsetof(UCharacterCapture_Gamepad_C, UberGraphFrame);
	static_assert(UCharacterCapture_Gamepad_C_UberGraphFrame_Offset == 0x248, "UCharacterCapture_Gamepad_C::UberGraphFrame offset is not 248");
	auto constexpr UCharacterCapture_Gamepad_C_FadeIn_Offset = offsetof(UCharacterCapture_Gamepad_C, FadeIn);
	static_assert(UCharacterCapture_Gamepad_C_FadeIn_Offset == 0x250, "UCharacterCapture_Gamepad_C::FadeIn offset is not 250");
	auto constexpr UCharacterCapture_Gamepad_C_CaptureImage_Offset = offsetof(UCharacterCapture_Gamepad_C, CaptureImage);
	static_assert(UCharacterCapture_Gamepad_C_CaptureImage_Offset == 0x258, "UCharacterCapture_Gamepad_C::CaptureImage offset is not 258");
	auto constexpr UCharacterCapture_Gamepad_C_CharacterStudio_Offset = offsetof(UCharacterCapture_Gamepad_C, CharacterStudio);
	static_assert(UCharacterCapture_Gamepad_C_CharacterStudio_Offset == 0x260, "UCharacterCapture_Gamepad_C::CharacterStudio offset is not 260");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
