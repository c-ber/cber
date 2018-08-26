#pragma once
#include "UPrimitiveComponent.hpp"
#include "EHorizTextAligment.hpp"
#include "EVerticalTextAligment.hpp"
#include "FColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTextRenderComponent // Size: 0x940
	: public UPrimitiveComponent // Size: 0x8F0
{
private:
	typedef UTextRenderComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(226); // id32("Class Engine.TextRenderComponent")
		return ptr;
	}
//	FText Text; /* Ofs: 0x8E8 Size: 0x18 - TextProperty Engine.TextRenderComponent.Text */
	uint8_t UnknownData8F0[0x10];
	ExternalPtr<struct UMaterialInterface> TextMaterial; /* Ofs: 0x900 Size: 0x8 - ObjectProperty Engine.TextRenderComponent.TextMaterial */
	ExternalPtr<struct UFont> Font; /* Ofs: 0x908 Size: 0x8 - ObjectProperty Engine.TextRenderComponent.Font */
	TEnumAsByte<enum EHorizTextAligment> HorizontalAlignment; /* Ofs: 0x910 Size: 0x1 - ByteProperty Engine.TextRenderComponent.HorizontalAlignment */
	TEnumAsByte<enum EVerticalTextAligment> VerticalAlignment; /* Ofs: 0x911 Size: 0x1 - ByteProperty Engine.TextRenderComponent.VerticalAlignment */
	uint8_t UnknownData912[0x2];
	FColor TextRenderColor; /* Ofs: 0x914 Size: 0x4 - StructProperty Engine.TextRenderComponent.TextRenderColor */
	float XScale; /* Ofs: 0x918 Size: 0x4 - FloatProperty Engine.TextRenderComponent.XScale */
	float YScale; /* Ofs: 0x91C Size: 0x4 - FloatProperty Engine.TextRenderComponent.YScale */
	float WorldSize; /* Ofs: 0x920 Size: 0x4 - FloatProperty Engine.TextRenderComponent.WorldSize */
	float InvDefaultSize; /* Ofs: 0x924 Size: 0x4 - FloatProperty Engine.TextRenderComponent.InvDefaultSize */
	float HorizSpacingAdjust; /* Ofs: 0x928 Size: 0x4 - FloatProperty Engine.TextRenderComponent.HorizSpacingAdjust */
	float VertSpacingAdjust; /* Ofs: 0x92C Size: 0x4 - FloatProperty Engine.TextRenderComponent.VertSpacingAdjust */
	uint8_t boolField930;
	uint8_t UnknownData931[0xF];


//	inline bool SetText(t_structHelper inst, FText value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetTextMaterial(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x900, value); }
	inline bool SetFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x908, value); }
	inline bool SetHorizontalAlignment(t_structHelper inst, TEnumAsByte<enum EHorizTextAligment> value) { inst.WriteOffset(0x910, value); }
	inline bool SetVerticalAlignment(t_structHelper inst, TEnumAsByte<enum EVerticalTextAligment> value) { inst.WriteOffset(0x911, value); }
	inline bool SetTextRenderColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x914, value); }
	inline bool SetXScale(t_structHelper inst, float value) { inst.WriteOffset(0x918, value); }
	inline bool SetYScale(t_structHelper inst, float value) { inst.WriteOffset(0x91C, value); }
	inline bool SetWorldSize(t_structHelper inst, float value) { inst.WriteOffset(0x920, value); }
	inline bool SetInvDefaultSize(t_structHelper inst, float value) { inst.WriteOffset(0x924, value); }
	inline bool SetHorizSpacingAdjust(t_structHelper inst, float value) { inst.WriteOffset(0x928, value); }
	inline bool SetVertSpacingAdjust(t_structHelper inst, float value) { inst.WriteOffset(0x92C, value); }
	inline bool bAlwaysRenderAsText()
	{
		return boolField930& 0x1;
	}
	inline bool SetbAlwaysRenderAsText(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x930, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTextRenderComponent = sizeof(UTextRenderComponent); // 2368
    static_assert(sizeof(UTextRenderComponent) == 0x940, "Size of UTextRenderComponent is not correct.");
//	auto constexpr UTextRenderComponent_Text_Offset = offsetof(UTextRenderComponent, Text);
//	static_assert(UTextRenderComponent_Text_Offset == 0x8e8, "UTextRenderComponent::Text offset is not 8e8");
	auto constexpr UTextRenderComponent_TextMaterial_Offset = offsetof(UTextRenderComponent, TextMaterial);
	static_assert(UTextRenderComponent_TextMaterial_Offset == 0x900, "UTextRenderComponent::TextMaterial offset is not 900");
	auto constexpr UTextRenderComponent_Font_Offset = offsetof(UTextRenderComponent, Font);
	static_assert(UTextRenderComponent_Font_Offset == 0x908, "UTextRenderComponent::Font offset is not 908");
	auto constexpr UTextRenderComponent_HorizontalAlignment_Offset = offsetof(UTextRenderComponent, HorizontalAlignment);
	static_assert(UTextRenderComponent_HorizontalAlignment_Offset == 0x910, "UTextRenderComponent::HorizontalAlignment offset is not 910");
	auto constexpr UTextRenderComponent_VerticalAlignment_Offset = offsetof(UTextRenderComponent, VerticalAlignment);
	static_assert(UTextRenderComponent_VerticalAlignment_Offset == 0x911, "UTextRenderComponent::VerticalAlignment offset is not 911");
	auto constexpr UTextRenderComponent_TextRenderColor_Offset = offsetof(UTextRenderComponent, TextRenderColor);
	static_assert(UTextRenderComponent_TextRenderColor_Offset == 0x914, "UTextRenderComponent::TextRenderColor offset is not 914");
	auto constexpr UTextRenderComponent_XScale_Offset = offsetof(UTextRenderComponent, XScale);
	static_assert(UTextRenderComponent_XScale_Offset == 0x918, "UTextRenderComponent::XScale offset is not 918");
	auto constexpr UTextRenderComponent_YScale_Offset = offsetof(UTextRenderComponent, YScale);
	static_assert(UTextRenderComponent_YScale_Offset == 0x91c, "UTextRenderComponent::YScale offset is not 91c");
	auto constexpr UTextRenderComponent_WorldSize_Offset = offsetof(UTextRenderComponent, WorldSize);
	static_assert(UTextRenderComponent_WorldSize_Offset == 0x920, "UTextRenderComponent::WorldSize offset is not 920");
	auto constexpr UTextRenderComponent_InvDefaultSize_Offset = offsetof(UTextRenderComponent, InvDefaultSize);
	static_assert(UTextRenderComponent_InvDefaultSize_Offset == 0x924, "UTextRenderComponent::InvDefaultSize offset is not 924");
	auto constexpr UTextRenderComponent_HorizSpacingAdjust_Offset = offsetof(UTextRenderComponent, HorizSpacingAdjust);
	static_assert(UTextRenderComponent_HorizSpacingAdjust_Offset == 0x928, "UTextRenderComponent::HorizSpacingAdjust offset is not 928");
	auto constexpr UTextRenderComponent_VertSpacingAdjust_Offset = offsetof(UTextRenderComponent, VertSpacingAdjust);
	static_assert(UTextRenderComponent_VertSpacingAdjust_Offset == 0x92c, "UTextRenderComponent::VertSpacingAdjust offset is not 92c");
	auto constexpr UTextRenderComponent_boolField930_Offset = offsetof(UTextRenderComponent, boolField930);
	static_assert(UTextRenderComponent_boolField930_Offset == 0x930, "UTextRenderComponent::boolField930 offset is not 930");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
