#pragma once
#include "FLinearColor.hpp"
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FVectorParameterValue // Size: 0x28
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.VectorParameterValue.ParameterName */
    FLinearColor ParameterValue; /* Ofs: 0x8 Size: 0x10 StructProperty Engine.VectorParameterValue.ParameterValue */
    FGuid ExpressionGUID; /* Ofs: 0x18 Size: 0x10 StructProperty Engine.VectorParameterValue.ExpressionGUID */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFVectorParameterValue = sizeof(FVectorParameterValue); // 40
    static_assert(sizeof(FVectorParameterValue) == 0x28, "Size of FVectorParameterValue is not correct.");
	auto constexpr FVectorParameterValue_ParameterName_Offset = offsetof(FVectorParameterValue, ParameterName);
	static_assert(FVectorParameterValue_ParameterName_Offset == 0x0, "FVectorParameterValue::ParameterName offset is not 0");
	auto constexpr FVectorParameterValue_ParameterValue_Offset = offsetof(FVectorParameterValue, ParameterValue);
	static_assert(FVectorParameterValue_ParameterValue_Offset == 0x8, "FVectorParameterValue::ParameterValue offset is not 8");
	auto constexpr FVectorParameterValue_ExpressionGUID_Offset = offsetof(FVectorParameterValue, ExpressionGUID);
	static_assert(FVectorParameterValue_ExpressionGUID_Offset == 0x18, "FVectorParameterValue::ExpressionGUID offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
