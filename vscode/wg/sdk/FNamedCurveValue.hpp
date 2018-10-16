#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNamedCurveValue // Size: 0x10
{
public:
    FName Name; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.NamedCurveValue.Name */
    float Value; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.NamedCurveValue.Value */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNamedCurveValue = sizeof(FNamedCurveValue); // 16
    static_assert(sizeof(FNamedCurveValue) == 0x10, "Size of FNamedCurveValue is not correct.");
	auto constexpr FNamedCurveValue_Name_Offset = offsetof(FNamedCurveValue, Name);
	static_assert(FNamedCurveValue_Name_Offset == 0x0, "FNamedCurveValue::Name offset is not 0");
	auto constexpr FNamedCurveValue_Value_Offset = offsetof(FNamedCurveValue, Value);
	static_assert(FNamedCurveValue_Value_Offset == 0x8, "FNamedCurveValue::Value offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
