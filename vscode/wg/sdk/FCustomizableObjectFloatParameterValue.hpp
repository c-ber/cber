#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectFloatParameterValue // Size: 0x18
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectFloatParameterValue.ParameterName */
    float ParameterValue; /* Ofs: 0x10 Size: 0x4 FloatProperty CustomizableObject.CustomizableObjectFloatParameterValue.ParameterValue */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectFloatParameterValue = sizeof(FCustomizableObjectFloatParameterValue); // 24
    static_assert(sizeof(FCustomizableObjectFloatParameterValue) == 0x18, "Size of FCustomizableObjectFloatParameterValue is not correct.");
	auto constexpr FCustomizableObjectFloatParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectFloatParameterValue, ParameterName);
	static_assert(FCustomizableObjectFloatParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectFloatParameterValue::ParameterName offset is not 0");
	auto constexpr FCustomizableObjectFloatParameterValue_ParameterValue_Offset = offsetof(FCustomizableObjectFloatParameterValue, ParameterValue);
	static_assert(FCustomizableObjectFloatParameterValue_ParameterValue_Offset == 0x10, "FCustomizableObjectFloatParameterValue::ParameterValue offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
