#pragma once
#include "UTextLayoutWidget.hpp"
#include "FSlateFontInfo.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URichTextBlock // Size: 0x420
	: public UTextLayoutWidget // Size: 0x158
{
private:
	typedef URichTextBlock t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(525); // id32("Class UMG.RichTextBlock")
		return ptr;
	}
	FText Text; /* Ofs: 0x158 Size: 0x18 - TextProperty UMG.RichTextBlock.Text */
	FScriptDelegate TextDelegate; /* Ofs: 0x170 Size: 0x10 - DelegateProperty UMG.RichTextBlock.TextDelegate */
	FSlateFontInfo Font; /* Ofs: 0x180 Size: 0x68 - StructProperty UMG.RichTextBlock.Font */
	FLinearColor Color; /* Ofs: 0x1E8 Size: 0x10 - StructProperty UMG.RichTextBlock.Color */
	TArray<ExternalPtr<struct URichTextBlockDecorator>> Decorators; /* Ofs: 0x1F8 Size: 0x10 - ArrayProperty UMG.RichTextBlock.Decorators */
	uint8_t UnknownData208[0x218];


	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x158, value); }
	inline bool SetTextDelegate(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x170, value); }
	inline bool SetFont(t_structHelper inst, FSlateFontInfo value) { inst.WriteOffset(0x180, value); }
	inline bool SetColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetDecorators(t_structHelper inst, TArray<ExternalPtr<struct URichTextBlockDecorator>> value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURichTextBlock = sizeof(URichTextBlock); // 1056
    static_assert(sizeof(URichTextBlock) == 0x420, "Size of URichTextBlock is not correct.");
	auto constexpr URichTextBlock_Text_Offset = offsetof(URichTextBlock, Text);
	static_assert(URichTextBlock_Text_Offset == 0x158, "URichTextBlock::Text offset is not 158");
	auto constexpr URichTextBlock_TextDelegate_Offset = offsetof(URichTextBlock, TextDelegate);
	static_assert(URichTextBlock_TextDelegate_Offset == 0x170, "URichTextBlock::TextDelegate offset is not 170");
	auto constexpr URichTextBlock_Font_Offset = offsetof(URichTextBlock, Font);
	static_assert(URichTextBlock_Font_Offset == 0x180, "URichTextBlock::Font offset is not 180");
	auto constexpr URichTextBlock_Color_Offset = offsetof(URichTextBlock, Color);
	static_assert(URichTextBlock_Color_Offset == 0x1e8, "URichTextBlock::Color offset is not 1e8");
	auto constexpr URichTextBlock_Decorators_Offset = offsetof(URichTextBlock, Decorators);
	static_assert(URichTextBlock_Decorators_Offset == 0x1f8, "URichTextBlock::Decorators offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
