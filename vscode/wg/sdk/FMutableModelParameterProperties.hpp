#pragma once
#include "EMutableParameterType.hpp"
#include "FMutableParamUIMetadata.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMutableModelParameterProperties // Size: 0x110
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.MutableModelParameterProperties.Name */
    TEnumAsByte<enum EMutableParameterType> Type; /* Ofs: 0x10 Size: 0x1 EnumProperty CustomizableObject.MutableModelParameterProperties.Type */
    uint8_t UnknownData11[0x3];
    int32_t ImageDescriptionCount; /* Ofs: 0x14 Size: 0x4 IntProperty CustomizableObject.MutableModelParameterProperties.ImageDescriptionCount */
    TArray<struct FMutableModelParameterValue> PossibleValues; /* Ofs: 0x18 Size: 0x10 ArrayProperty CustomizableObject.MutableModelParameterProperties.PossibleValues */
    FMutableParamUIMetadata ParamUIMetadata; /* Ofs: 0x28 Size: 0xE8 StructProperty CustomizableObject.MutableModelParameterProperties.ParamUIMetadata */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMutableModelParameterProperties = sizeof(FMutableModelParameterProperties); // 272
    static_assert(sizeof(FMutableModelParameterProperties) == 0x110, "Size of FMutableModelParameterProperties is not correct.");
	auto constexpr FMutableModelParameterProperties_Name_Offset = offsetof(FMutableModelParameterProperties, Name);
	static_assert(FMutableModelParameterProperties_Name_Offset == 0x0, "FMutableModelParameterProperties::Name offset is not 0");
	auto constexpr FMutableModelParameterProperties_Type_Offset = offsetof(FMutableModelParameterProperties, Type);
	static_assert(FMutableModelParameterProperties_Type_Offset == 0x10, "FMutableModelParameterProperties::Type offset is not 10");
	auto constexpr FMutableModelParameterProperties_ImageDescriptionCount_Offset = offsetof(FMutableModelParameterProperties, ImageDescriptionCount);
	static_assert(FMutableModelParameterProperties_ImageDescriptionCount_Offset == 0x14, "FMutableModelParameterProperties::ImageDescriptionCount offset is not 14");
	auto constexpr FMutableModelParameterProperties_PossibleValues_Offset = offsetof(FMutableModelParameterProperties, PossibleValues);
	static_assert(FMutableModelParameterProperties_PossibleValues_Offset == 0x18, "FMutableModelParameterProperties::PossibleValues offset is not 18");
	auto constexpr FMutableModelParameterProperties_ParamUIMetadata_Offset = offsetof(FMutableModelParameterProperties, ParamUIMetadata);
	static_assert(FMutableModelParameterProperties_ParamUIMetadata_Offset == 0x28, "FMutableModelParameterProperties::ParamUIMetadata offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
