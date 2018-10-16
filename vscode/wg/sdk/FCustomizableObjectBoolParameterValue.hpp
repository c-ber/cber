#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectBoolParameterValue // Size: 0x18
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectBoolParameterValue.ParameterName */
    bool ParameterValue; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty CustomizableObject.CustomizableObjectBoolParameterValue.ParameterValue */
    uint8_t UnknownData11[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectBoolParameterValue = sizeof(FCustomizableObjectBoolParameterValue); // 24
    static_assert(sizeof(FCustomizableObjectBoolParameterValue) == 0x18, "Size of FCustomizableObjectBoolParameterValue is not correct.");
	auto constexpr FCustomizableObjectBoolParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectBoolParameterValue, ParameterName);
	static_assert(FCustomizableObjectBoolParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectBoolParameterValue::ParameterName offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
