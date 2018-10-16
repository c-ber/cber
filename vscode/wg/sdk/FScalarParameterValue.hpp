#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FScalarParameterValue // Size: 0x20
{
public:
    FName ParameterName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ScalarParameterValue.ParameterName */
    float ParameterValue; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.ScalarParameterValue.ParameterValue */
    FGuid ExpressionGUID; /* Ofs: 0xC Size: 0x10 StructProperty Engine.ScalarParameterValue.ExpressionGUID */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFScalarParameterValue = sizeof(FScalarParameterValue); // 32
    static_assert(sizeof(FScalarParameterValue) == 0x20, "Size of FScalarParameterValue is not correct.");
	auto constexpr FScalarParameterValue_ParameterName_Offset = offsetof(FScalarParameterValue, ParameterName);
	static_assert(FScalarParameterValue_ParameterName_Offset == 0x0, "FScalarParameterValue::ParameterName offset is not 0");
	auto constexpr FScalarParameterValue_ParameterValue_Offset = offsetof(FScalarParameterValue, ParameterValue);
	static_assert(FScalarParameterValue_ParameterValue_Offset == 0x8, "FScalarParameterValue::ParameterValue offset is not 8");
	auto constexpr FScalarParameterValue_ExpressionGUID_Offset = offsetof(FScalarParameterValue, ExpressionGUID);
	static_assert(FScalarParameterValue_ExpressionGUID_Offset == 0xc, "FScalarParameterValue::ExpressionGUID offset is not c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
