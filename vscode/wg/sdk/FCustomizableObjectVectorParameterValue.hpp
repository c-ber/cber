#pragma once
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectVectorParameterValue // Size: 0x20
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectVectorParameterValue.ParameterName */
    FLinearColor ParameterValue; /* Ofs: 0x10 Size: 0x10 StructProperty CustomizableObject.CustomizableObjectVectorParameterValue.ParameterValue */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectVectorParameterValue = sizeof(FCustomizableObjectVectorParameterValue); // 32
    static_assert(sizeof(FCustomizableObjectVectorParameterValue) == 0x20, "Size of FCustomizableObjectVectorParameterValue is not correct.");
	auto constexpr FCustomizableObjectVectorParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectVectorParameterValue, ParameterName);
	static_assert(FCustomizableObjectVectorParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectVectorParameterValue::ParameterName offset is not 0");
	auto constexpr FCustomizableObjectVectorParameterValue_ParameterValue_Offset = offsetof(FCustomizableObjectVectorParameterValue, ParameterValue);
	static_assert(FCustomizableObjectVectorParameterValue_ParameterValue_Offset == 0x10, "FCustomizableObjectVectorParameterValue::ParameterValue offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
