#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionFontSample // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionFontSample t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(916); // id32("Class Engine.MaterialExpressionFontSample")
		return ptr;
	}
	ExternalPtr<struct UFont> Font; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.MaterialExpressionFontSample.Font */
	int32_t FontTexturePage; /* Ofs: 0x70 Size: 0x4 - IntProperty Engine.MaterialExpressionFontSample.FontTexturePage */
	uint8_t UnknownData74[0x4];


	inline bool SetFont(t_structHelper inst, ExternalPtr<struct UFont> value) { inst.WriteOffset(0x68, value); }
	inline bool SetFontTexturePage(t_structHelper inst, int32_t value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionFontSample = sizeof(UMaterialExpressionFontSample); // 120
    static_assert(sizeof(UMaterialExpressionFontSample) == 0x78, "Size of UMaterialExpressionFontSample is not correct.");
	auto constexpr UMaterialExpressionFontSample_Font_Offset = offsetof(UMaterialExpressionFontSample, Font);
	static_assert(UMaterialExpressionFontSample_Font_Offset == 0x68, "UMaterialExpressionFontSample::Font offset is not 68");
	auto constexpr UMaterialExpressionFontSample_FontTexturePage_Offset = offsetof(UMaterialExpressionFontSample, FontTexturePage);
	static_assert(UMaterialExpressionFontSample_FontTexturePage_Offset == 0x70, "UMaterialExpressionFontSample::FontTexturePage offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
