#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectTextureParameterValue // Size: 0x18
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectTextureParameterValue.ParameterName */
    uint64_t ParameterValue; /* Ofs: 0x10 Size: 0x8 UInt64Property CustomizableObject.CustomizableObjectTextureParameterValue.ParameterValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectTextureParameterValue = sizeof(FCustomizableObjectTextureParameterValue); // 24
    static_assert(sizeof(FCustomizableObjectTextureParameterValue) == 0x18, "Size of FCustomizableObjectTextureParameterValue is not correct.");
	auto constexpr FCustomizableObjectTextureParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectTextureParameterValue, ParameterName);
	static_assert(FCustomizableObjectTextureParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectTextureParameterValue::ParameterName offset is not 0");
	auto constexpr FCustomizableObjectTextureParameterValue_ParameterValue_Offset = offsetof(FCustomizableObjectTextureParameterValue, ParameterValue);
	static_assert(FCustomizableObjectTextureParameterValue_ParameterValue_Offset == 0x10, "FCustomizableObjectTextureParameterValue::ParameterValue offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
