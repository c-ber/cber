#pragma once
#include "UUserWidget.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UUIBlurBackground_C // Size: 0x274
	: public UUserWidget // Size: 0x248
{
private:
	typedef UUIBlurBackground_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67927); // id32("WidgetBlueprintGeneratedClass UIBlurBackground.UIBlurBackground_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x248 Size: 0x8 - StructProperty UIBlurBackground.UIBlurBackground_C.UberGraphFrame */
	ExternalPtr<struct UBackgroundBlur> Blurring; /* Ofs: 0x250 Size: 0x8 - ObjectProperty UIBlurBackground.UIBlurBackground_C.Blurring */
	ExternalPtr<struct UBorder> Tinting; /* Ofs: 0x258 Size: 0x8 - ObjectProperty UIBlurBackground.UIBlurBackground_C.Tinting */
	FLinearColor BackgroundTintingColor; /* Ofs: 0x260 Size: 0x10 - StructProperty UIBlurBackground.UIBlurBackground_C.BackgroundTintingColor */
	float BackgroundBlurStrength; /* Ofs: 0x270 Size: 0x4 - FloatProperty UIBlurBackground.UIBlurBackground_C.BackgroundBlurStrength */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x248, value); }
	inline bool SetBlurring(t_structHelper inst, ExternalPtr<struct UBackgroundBlur> value) { inst.WriteOffset(0x250, value); }
	inline bool SetTinting(t_structHelper inst, ExternalPtr<struct UBorder> value) { inst.WriteOffset(0x258, value); }
	inline bool SetBackgroundTintingColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x260, value); }
	inline bool SetBackgroundBlurStrength(t_structHelper inst, float value) { inst.WriteOffset(0x270, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUUIBlurBackground_C = sizeof(UUIBlurBackground_C); // 628
    static_assert(sizeof(UUIBlurBackground_C) == 0x274, "Size of UUIBlurBackground_C is not correct.");
	auto constexpr UUIBlurBackground_C_UberGraphFrame_Offset = offsetof(UUIBlurBackground_C, UberGraphFrame);
	static_assert(UUIBlurBackground_C_UberGraphFrame_Offset == 0x248, "UUIBlurBackground_C::UberGraphFrame offset is not 248");
	auto constexpr UUIBlurBackground_C_Blurring_Offset = offsetof(UUIBlurBackground_C, Blurring);
	static_assert(UUIBlurBackground_C_Blurring_Offset == 0x250, "UUIBlurBackground_C::Blurring offset is not 250");
	auto constexpr UUIBlurBackground_C_Tinting_Offset = offsetof(UUIBlurBackground_C, Tinting);
	static_assert(UUIBlurBackground_C_Tinting_Offset == 0x258, "UUIBlurBackground_C::Tinting offset is not 258");
	auto constexpr UUIBlurBackground_C_BackgroundTintingColor_Offset = offsetof(UUIBlurBackground_C, BackgroundTintingColor);
	static_assert(UUIBlurBackground_C_BackgroundTintingColor_Offset == 0x260, "UUIBlurBackground_C::BackgroundTintingColor offset is not 260");
	auto constexpr UUIBlurBackground_C_BackgroundBlurStrength_Offset = offsetof(UUIBlurBackground_C, BackgroundBlurStrength);
	static_assert(UUIBlurBackground_C_BackgroundBlurStrength_Offset == 0x270, "UUIBlurBackground_C::BackgroundBlurStrength offset is not 270");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
