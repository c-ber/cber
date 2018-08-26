#pragma once
#include "FMutableParamUIMetadata.hpp"
#include "EMutableParameterType.hpp"
#include "ECustomizableObjectGroupType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParameterUIData // Size: 0x118
{
public:
    FString Name; /* Ofs: 0x0 Size: 0x10 StrProperty CustomizableObject.ParameterUIData.Name */
    FMutableParamUIMetadata ParamUIMetadata; /* Ofs: 0x10 Size: 0xE8 StructProperty CustomizableObject.ParameterUIData.ParamUIMetadata */
    TEnumAsByte<enum EMutableParameterType> Type; /* Ofs: 0xF8 Size: 0x1 EnumProperty CustomizableObject.ParameterUIData.Type */
    uint8_t UnknownDataF9[0x7];
    TArray<struct FIntegerParameterUIData> ArrayIntegerParameterOption; /* Ofs: 0x100 Size: 0x10 ArrayProperty CustomizableObject.ParameterUIData.ArrayIntegerParameterOption */
    TEnumAsByte<enum ECustomizableObjectGroupType> IntegerParameterGroupType; /* Ofs: 0x110 Size: 0x1 ByteProperty CustomizableObject.ParameterUIData.IntegerParameterGroupType */
    uint8_t UnknownData111[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParameterUIData = sizeof(FParameterUIData); // 280
    static_assert(sizeof(FParameterUIData) == 0x118, "Size of FParameterUIData is not correct.");
	auto constexpr FParameterUIData_Name_Offset = offsetof(FParameterUIData, Name);
	static_assert(FParameterUIData_Name_Offset == 0x0, "FParameterUIData::Name offset is not 0");
	auto constexpr FParameterUIData_ParamUIMetadata_Offset = offsetof(FParameterUIData, ParamUIMetadata);
	static_assert(FParameterUIData_ParamUIMetadata_Offset == 0x10, "FParameterUIData::ParamUIMetadata offset is not 10");
	auto constexpr FParameterUIData_Type_Offset = offsetof(FParameterUIData, Type);
	static_assert(FParameterUIData_Type_Offset == 0xf8, "FParameterUIData::Type offset is not f8");
	auto constexpr FParameterUIData_ArrayIntegerParameterOption_Offset = offsetof(FParameterUIData, ArrayIntegerParameterOption);
	static_assert(FParameterUIData_ArrayIntegerParameterOption_Offset == 0x100, "FParameterUIData::ArrayIntegerParameterOption offset is not 100");
	auto constexpr FParameterUIData_IntegerParameterGroupType_Offset = offsetof(FParameterUIData, IntegerParameterGroupType);
	static_assert(FParameterUIData_IntegerParameterGroupType_Offset == 0x110, "FParameterUIData::IntegerParameterGroupType offset is not 110");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
