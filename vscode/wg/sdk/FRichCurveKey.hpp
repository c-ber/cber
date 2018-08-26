#pragma once
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#include "ERichCurveTangentWeightMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRichCurveKey // Size: 0x1C
{
public:
    TEnumAsByte<enum ERichCurveInterpMode> InterpMode; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.RichCurveKey.InterpMode */
    TEnumAsByte<enum ERichCurveTangentMode> TangentMode; /* Ofs: 0x1 Size: 0x1 ByteProperty Engine.RichCurveKey.TangentMode */
    TEnumAsByte<enum ERichCurveTangentWeightMode> TangentWeightMode; /* Ofs: 0x2 Size: 0x1 ByteProperty Engine.RichCurveKey.TangentWeightMode */
    uint8_t UnknownData3[0x1];
    float Time; /* Ofs: 0x4 Size: 0x4 FloatProperty Engine.RichCurveKey.Time */
    float Value; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.RichCurveKey.Value */
    float ArriveTangent; /* Ofs: 0xC Size: 0x4 FloatProperty Engine.RichCurveKey.ArriveTangent */
    float ArriveTangentWeight; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.RichCurveKey.ArriveTangentWeight */
    float LeaveTangent; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.RichCurveKey.LeaveTangent */
    float LeaveTangentWeight; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.RichCurveKey.LeaveTangentWeight */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRichCurveKey = sizeof(FRichCurveKey); // 28
    static_assert(sizeof(FRichCurveKey) == 0x1C, "Size of FRichCurveKey is not correct.");
	auto constexpr FRichCurveKey_InterpMode_Offset = offsetof(FRichCurveKey, InterpMode);
	static_assert(FRichCurveKey_InterpMode_Offset == 0x0, "FRichCurveKey::InterpMode offset is not 0");
	auto constexpr FRichCurveKey_TangentMode_Offset = offsetof(FRichCurveKey, TangentMode);
	static_assert(FRichCurveKey_TangentMode_Offset == 0x1, "FRichCurveKey::TangentMode offset is not 1");
	auto constexpr FRichCurveKey_TangentWeightMode_Offset = offsetof(FRichCurveKey, TangentWeightMode);
	static_assert(FRichCurveKey_TangentWeightMode_Offset == 0x2, "FRichCurveKey::TangentWeightMode offset is not 2");
	auto constexpr FRichCurveKey_Time_Offset = offsetof(FRichCurveKey, Time);
	static_assert(FRichCurveKey_Time_Offset == 0x4, "FRichCurveKey::Time offset is not 4");
	auto constexpr FRichCurveKey_Value_Offset = offsetof(FRichCurveKey, Value);
	static_assert(FRichCurveKey_Value_Offset == 0x8, "FRichCurveKey::Value offset is not 8");
	auto constexpr FRichCurveKey_ArriveTangent_Offset = offsetof(FRichCurveKey, ArriveTangent);
	static_assert(FRichCurveKey_ArriveTangent_Offset == 0xc, "FRichCurveKey::ArriveTangent offset is not c");
	auto constexpr FRichCurveKey_ArriveTangentWeight_Offset = offsetof(FRichCurveKey, ArriveTangentWeight);
	static_assert(FRichCurveKey_ArriveTangentWeight_Offset == 0x10, "FRichCurveKey::ArriveTangentWeight offset is not 10");
	auto constexpr FRichCurveKey_LeaveTangent_Offset = offsetof(FRichCurveKey, LeaveTangent);
	static_assert(FRichCurveKey_LeaveTangent_Offset == 0x14, "FRichCurveKey::LeaveTangent offset is not 14");
	auto constexpr FRichCurveKey_LeaveTangentWeight_Offset = offsetof(FRichCurveKey, LeaveTangentWeight);
	static_assert(FRichCurveKey_LeaveTangentWeight_Offset == 0x18, "FRichCurveKey::LeaveTangentWeight offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
