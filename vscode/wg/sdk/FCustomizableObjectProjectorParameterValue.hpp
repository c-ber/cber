#pragma once
#include "FCustomizableObjectProjector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableObjectProjectorParameterValue // Size: 0x48
{
public:
    FString ParameterName; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.CustomizableObjectProjectorParameterValue.ParameterName */
    FCustomizableObjectProjector Value; /* Ofs: 0x10 Size: 0x30 StructProperty CustomizableObject.CustomizableObjectProjectorParameterValue.Value */
    uint8_t UnknownData40[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableObjectProjectorParameterValue = sizeof(FCustomizableObjectProjectorParameterValue); // 72
    static_assert(sizeof(FCustomizableObjectProjectorParameterValue) == 0x48, "Size of FCustomizableObjectProjectorParameterValue is not correct.");
	auto constexpr FCustomizableObjectProjectorParameterValue_ParameterName_Offset = offsetof(FCustomizableObjectProjectorParameterValue, ParameterName);
	static_assert(FCustomizableObjectProjectorParameterValue_ParameterName_Offset == 0x0, "FCustomizableObjectProjectorParameterValue::ParameterName offset is not 0");
	auto constexpr FCustomizableObjectProjectorParameterValue_Value_Offset = offsetof(FCustomizableObjectProjectorParameterValue, Value);
	static_assert(FCustomizableObjectProjectorParameterValue_Value_Offset == 0x10, "FCustomizableObjectProjectorParameterValue::Value offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
