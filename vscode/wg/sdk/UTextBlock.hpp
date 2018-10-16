#pragma once
#include "UTextLayoutWidget.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextBlock // Size: 0x260
	: public UTextLayoutWidget // Size: 0x158
{
private:
	typedef UTextBlock t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(526); // id32("Class UMG.TextBlock")
		return ptr;
	}
	FText Text; /* Ofs: 0x158 Size: 0x18 - TextProperty UMG.TextBlock.Text */
	FScriptDelegate TextDelegate; /* Ofs: 0x170 Size: 0x10 - DelegateProperty UMG.TextBlock.TextDelegate */
	FSlateColor ColorAndOpacity; /* Ofs: 0x180 Size: 0x28 - StructProperty UMG.TextBlock.ColorAndOpacity */
	FScriptDelegate ColorAndOpacityDelegate; /* Ofs: 0x1A8 Size: 0x10 - DelegateProperty UMG.TextBlock.ColorAndOpacityDelegate */
	FSlateFontInfo Font; /* Ofs: 0x1B8 Size: 0x68 - StructProperty UMG.TextBlock.Font */
	FVector2D ShadowOffset; /* Ofs: 0x220 Size: 0x8 - StructProperty UMG.TextBlock.ShadowOffset */
	FLinearColor ShadowColorAndOpacity; /* Ofs: 0x228 Size: 0x10 - StructProperty UMG.TextBlock.ShadowColorAndOpacity */
	FScriptDelegate ShadowColorAndOpacityDelegate; /* Ofs: 0x238 Size: 0x10 - DelegateProperty UMG.TextBlock.ShadowColorAndOpacityDelegate */
	float MinDesiredWidth; /* Ofs: 0x248 Size: 0x4 - FloatProperty UMG.TextBlock.MinDesiredWidth */
	uint8_t boolField24C;
	uint8_t UnknownData24D[0x13];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x158, value); }
	inline bool SetTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x170, value); }
	inline bool SetColorAndOpacity(t_structHelper inst, FSlateColor value) { inst.WriteOffset(0x180, value); }
	inline bool SetColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x1A8, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x1B8, value); }
	inline bool SetShadowOffset(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x220, value); }
	inline bool SetShadowColorAndOpacity(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x228, value); }
	inline bool SetShadowColorAndOpacityDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x238, value); }
	inline bool SetMinDesiredWidth(t_structHelper inst, float value) { inst.WriteOffset(0x248, value); }
	inline bool bWrapWithInvalidationPanel()
	{
		return boolField24C& 0x1;
	}
	inline bool SetbWrapWithInvalidationPanel(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x24C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextBlock = sizeof(UTextBlock); // 608
    static_assert(sizeof(UTextBlock) == 0x260, "Size of UTextBlock is not correct.");
	auto constexpr UTextBlock_Text_Offset = offsetof(UTextBlock, Text);
	static_assert(UTextBlock_Text_Offset == 0x158, "UTextBlock::Text offset is not 158");
	auto constexpr UTextBlock_TextDelegate_Offset = offsetof(UTextBlock, TextDelegate);
	static_assert(UTextBlock_TextDelegate_Offset == 0x170, "UTextBlock::TextDelegate offset is not 170");
	auto constexpr UTextBlock_ColorAndOpacity_Offset = offsetof(UTextBlock, ColorAndOpacity);
	static_assert(UTextBlock_ColorAndOpacity_Offset == 0x180, "UTextBlock::ColorAndOpacity offset is not 180");
	auto constexpr UTextBlock_ColorAndOpacityDelegate_Offset = offsetof(UTextBlock, ColorAndOpacityDelegate);
	static_assert(UTextBlock_ColorAndOpacityDelegate_Offset == 0x1a8, "UTextBlock::ColorAndOpacityDelegate offset is not 1a8");
	auto constexpr UTextBlock_Font_Offset = offsetof(UTextBlock, Font);
	static_assert(UTextBlock_Font_Offset == 0x1b8, "UTextBlock::Font offset is not 1b8");
	auto constexpr UTextBlock_ShadowOffset_Offset = offsetof(UTextBlock, ShadowOffset);
	static_assert(UTextBlock_ShadowOffset_Offset == 0x220, "UTextBlock::ShadowOffset offset is not 220");
	auto constexpr UTextBlock_ShadowColorAndOpacity_Offset = offsetof(UTextBlock, ShadowColorAndOpacity);
	static_assert(UTextBlock_ShadowColorAndOpacity_Offset == 0x228, "UTextBlock::ShadowColorAndOpacity offset is not 228");
	auto constexpr UTextBlock_ShadowColorAndOpacityDelegate_Offset = offsetof(UTextBlock, ShadowColorAndOpacityDelegate);
	static_assert(UTextBlock_ShadowColorAndOpacityDelegate_Offset == 0x238, "UTextBlock::ShadowColorAndOpacityDelegate offset is not 238");
	auto constexpr UTextBlock_MinDesiredWidth_Offset = offsetof(UTextBlock, MinDesiredWidth);
	static_assert(UTextBlock_MinDesiredWidth_Offset == 0x248, "UTextBlock::MinDesiredWidth offset is not 248");
	auto constexpr UTextBlock_boolField24C_Offset = offsetof(UTextBlock, boolField24C);
	static_assert(UTextBlock_boolField24C_Offset == 0x24c, "UTextBlock::boolField24C offset is not 24c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
