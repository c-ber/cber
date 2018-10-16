#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFontParameterValue // Size: 0x28
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.FontParameterValue.ParameterName */
    ExternalPtr<struct UFont> FontValue; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.FontParameterValue.FontValue */
    int32_t FontPage; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.FontParameterValue.FontPage */
    FGuid ExpressionGUID; /* Ofs: 0x14 Size: 0x10 StructProperty Engine.FontParameterValue.ExpressionGUID */
    uint8_t UnknownData24[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFontParameterValue = sizeof(FFontParameterValue); // 40
    static_assert(sizeof(FFontParameterValue) == 0x28, "Size of FFontParameterValue is not correct.");
	auto constexpr FFontParameterValue_ParameterName_Offset = offsetof(FFontParameterValue, ParameterName);
	static_assert(FFontParameterValue_ParameterName_Offset == 0x0, "FFontParameterValue::ParameterName offset is not 0");
	auto constexpr FFontParameterValue_FontValue_Offset = offsetof(FFontParameterValue, FontValue);
	static_assert(FFontParameterValue_FontValue_Offset == 0x8, "FFontParameterValue::FontValue offset is not 8");
	auto constexpr FFontParameterValue_FontPage_Offset = offsetof(FFontParameterValue, FontPage);
	static_assert(FFontParameterValue_FontPage_Offset == 0x10, "FFontParameterValue::FontPage offset is not 10");
	auto constexpr FFontParameterValue_ExpressionGUID_Offset = offsetof(FFontParameterValue, ExpressionGUID);
	static_assert(FFontParameterValue_ExpressionGUID_Offset == 0x14, "FFontParameterValue::ExpressionGUID offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
