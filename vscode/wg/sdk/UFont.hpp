#pragma once
#include "EFontCacheType.hpp"
#include "FFontImportOptionsData.hpp"
#include "FCompositeFont.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFont // Size: 0x1C8
	: public UObject // Size: 0x30
{
private:
	typedef UFont t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(775); // id32("Class Engine.Font")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	TEnumAsByte<enum EFontCacheType> FontCacheType; /* Ofs: 0x38 Size: 0x1 - EnumProperty Engine.Font.FontCacheType */
	uint8_t UnknownData39[0x7];
	TArray<struct FFontCharacter> Characters; /* Ofs: 0x40 Size: 0x10 - ArrayProperty Engine.Font.Characters */
	TArray<ExternalPtr<struct UTexture2D>> Textures; /* Ofs: 0x50 Size: 0x10 - ArrayProperty Engine.Font.Textures */
	int32_t IsRemapped; /* Ofs: 0x60 Size: 0x4 - IntProperty Engine.Font.IsRemapped */
	float EmScale; /* Ofs: 0x64 Size: 0x4 - FloatProperty Engine.Font.EmScale */
	float Ascent; /* Ofs: 0x68 Size: 0x4 - FloatProperty Engine.Font.Ascent */
	float Descent; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.Font.Descent */
	float Leading; /* Ofs: 0x70 Size: 0x4 - FloatProperty Engine.Font.Leading */
	int32_t Kerning; /* Ofs: 0x74 Size: 0x4 - IntProperty Engine.Font.Kerning */
	FFontImportOptionsData ImportOptions; /* Ofs: 0x78 Size: 0xB0 - StructProperty Engine.Font.ImportOptions */
	int32_t NumCharacters; /* Ofs: 0x128 Size: 0x4 - IntProperty Engine.Font.NumCharacters */
	uint8_t UnknownData12C[0x4];
	TArray<int32_t> MaxCharHeight; /* Ofs: 0x130 Size: 0x10 - ArrayProperty Engine.Font.MaxCharHeight */
	float ScalingFactor; /* Ofs: 0x140 Size: 0x4 - FloatProperty Engine.Font.ScalingFactor */
	int32_t LegacyFontSize; /* Ofs: 0x144 Size: 0x4 - IntProperty Engine.Font.LegacyFontSize */
	FName LegacyFontName; /* Ofs: 0x148 Size: 0x8 - NameProperty Engine.Font.LegacyFontName */
	FCompositeFont CompositeFont; /* Ofs: 0x150 Size: 0x28 - StructProperty Engine.Font.CompositeFont */
	uint8_t UnknownData178[0x50];


	inline bool SetFontCacheType(t_structHelper inst, TEnumAsByte<enum EFontCacheType> value) { inst.WriteOffset(0x38, value); }
	inline bool SetCharacters(t_structHelper inst, TArray<struct FFontCharacter> value) { inst.WriteOffset(0x40, value); }
	inline bool SetTextures(t_structHelper inst, TArray<ExternalPtr<struct UTexture2D>> value) { inst.WriteOffset(0x50, value); }
	inline bool SetIsRemapped(t_structHelper inst, int32_t value) { inst.WriteOffset(0x60, value); }
	inline bool SetEmScale(t_structHelper inst, float value) { inst.WriteOffset(0x64, value); }
	inline bool SetAscent(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetDescent(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool SetLeading(t_structHelper inst, float value) { inst.WriteOffset(0x70, value); }
	inline bool SetKerning(t_structHelper inst, int32_t value) { inst.WriteOffset(0x74, value); }
	inline bool SetImportOptions(t_structHelper inst, FFontImportOptionsData value) { inst.WriteOffset(0x78, value); }
	inline bool SetNumCharacters(t_structHelper inst, int32_t value) { inst.WriteOffset(0x128, value); }
	inline bool SetMaxCharHeight(t_structHelper inst, TArray<int32_t> value) { inst.WriteOffset(0x130, value); }
	inline bool SetScalingFactor(t_structHelper inst, float value) { inst.WriteOffset(0x140, value); }
	inline bool SetLegacyFontSize(t_structHelper inst, int32_t value) { inst.WriteOffset(0x144, value); }
	inline bool SetLegacyFontName(t_structHelper inst, FName value) { inst.WriteOffset(0x148, value); }
	inline bool SetCompositeFont(t_structHelper inst, FCompositeFont value) { inst.WriteOffset(0x150, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFont = sizeof(UFont); // 456
    static_assert(sizeof(UFont) == 0x1C8, "Size of UFont is not correct.");
	auto constexpr UFont_FontCacheType_Offset = offsetof(UFont, FontCacheType);
	static_assert(UFont_FontCacheType_Offset == 0x38, "UFont::FontCacheType offset is not 38");
	auto constexpr UFont_Characters_Offset = offsetof(UFont, Characters);
	static_assert(UFont_Characters_Offset == 0x40, "UFont::Characters offset is not 40");
	auto constexpr UFont_Textures_Offset = offsetof(UFont, Textures);
	static_assert(UFont_Textures_Offset == 0x50, "UFont::Textures offset is not 50");
	auto constexpr UFont_IsRemapped_Offset = offsetof(UFont, IsRemapped);
	static_assert(UFont_IsRemapped_Offset == 0x60, "UFont::IsRemapped offset is not 60");
	auto constexpr UFont_EmScale_Offset = offsetof(UFont, EmScale);
	static_assert(UFont_EmScale_Offset == 0x64, "UFont::EmScale offset is not 64");
	auto constexpr UFont_Ascent_Offset = offsetof(UFont, Ascent);
	static_assert(UFont_Ascent_Offset == 0x68, "UFont::Ascent offset is not 68");
	auto constexpr UFont_Descent_Offset = offsetof(UFont, Descent);
	static_assert(UFont_Descent_Offset == 0x6c, "UFont::Descent offset is not 6c");
	auto constexpr UFont_Leading_Offset = offsetof(UFont, Leading);
	static_assert(UFont_Leading_Offset == 0x70, "UFont::Leading offset is not 70");
	auto constexpr UFont_Kerning_Offset = offsetof(UFont, Kerning);
	static_assert(UFont_Kerning_Offset == 0x74, "UFont::Kerning offset is not 74");
	auto constexpr UFont_ImportOptions_Offset = offsetof(UFont, ImportOptions);
	static_assert(UFont_ImportOptions_Offset == 0x78, "UFont::ImportOptions offset is not 78");
	auto constexpr UFont_NumCharacters_Offset = offsetof(UFont, NumCharacters);
	static_assert(UFont_NumCharacters_Offset == 0x128, "UFont::NumCharacters offset is not 128");
	auto constexpr UFont_MaxCharHeight_Offset = offsetof(UFont, MaxCharHeight);
	static_assert(UFont_MaxCharHeight_Offset == 0x130, "UFont::MaxCharHeight offset is not 130");
	auto constexpr UFont_ScalingFactor_Offset = offsetof(UFont, ScalingFactor);
	static_assert(UFont_ScalingFactor_Offset == 0x140, "UFont::ScalingFactor offset is not 140");
	auto constexpr UFont_LegacyFontSize_Offset = offsetof(UFont, LegacyFontSize);
	static_assert(UFont_LegacyFontSize_Offset == 0x144, "UFont::LegacyFontSize offset is not 144");
	auto constexpr UFont_LegacyFontName_Offset = offsetof(UFont, LegacyFontName);
	static_assert(UFont_LegacyFontName_Offset == 0x148, "UFont::LegacyFontName offset is not 148");
	auto constexpr UFont_CompositeFont_Offset = offsetof(UFont, CompositeFont);
	static_assert(UFont_CompositeFont_Offset == 0x150, "UFont::CompositeFont offset is not 150");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
