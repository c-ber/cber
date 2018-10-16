#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectIntParameterValue // Size: 0x28
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIntParameterValue.ParameterName */
    int32_t ParameterValue; /* Ofs: 0x10 Size: 0x4 IntProperty CustomizableObject.CustomizableObjectIntParameterValue.ParameterValue */
    uint8_t UnknownData14[0x4];
    FString ParameterValueName; /* Ofs: 0x18 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectIntParameterValue.ParameterValueName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectIntParameterValue = sizeof(FCustomizableObjectIntParameterValue); // 40
    static_assert(sizeof(FCustomizableObjectIntParameterValue) == 0x28, "Size of FCustomizableObjectIntParameterValue is not correct.");
	auto constexpr FCustomizableObjectIntParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectIntParameterValue, ParameterName);
	static_assert(FCustomizableObjectIntParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectIntParameterValue::ParameterName offset is not 0");
	auto constexpr FCustomizableObjectIntParameterValue_ParameterValue_Offset = offsetof(FCustomizableObjectIntParameterValue, ParameterValue);
	static_assert(FCustomizableObjectIntParameterValue_ParameterValue_Offset == 0x10, "FCustomizableObjectIntParameterValue::ParameterValue offset is not 10");
	auto constexpr FCustomizableObjectIntParameterValue_ParameterValueName_Offset = offsetof(FCustomizableObjectIntParameterValue, ParameterValueName);
	static_assert(FCustomizableObjectIntParameterValue_ParameterValueName_Offset == 0x18, "FCustomizableObjectIntParameterValue::ParameterValueName offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
