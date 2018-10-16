#pragma once
#include "EFormatArgumentType.hpp"
#include "ETextGender.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFormatArgumentData // Size: 0x40
{
public:
    FString ArgumentName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.FormatArgumentData.ArgumentName */
    TEnumAsByte<enum EFormatArgumentType> ArgumentValueType; /* Ofs: 0x10 Size: 0x1 ByteProperty Engine.FormatArgumentData.ArgumentValueType */
    uint8_t UnknownData11[0x7];
    FText ArgumentValue; /* Ofs: 0x18 Size: 0x18 TextProperty Engine.FormatArgumentData.ArgumentValue */
    int32_t ArgumentValueInt; /* Ofs: 0x30 Size: 0x4 IntProperty Engine.FormatArgumentData.ArgumentValueInt */
    float ArgumentValueFloat; /* Ofs: 0x34 Size: 0x4 FloatProperty Engine.FormatArgumentData.ArgumentValueFloat */
    TEnumAsByte<enum ETextGender> ArgumentValueGender; /* Ofs: 0x38 Size: 0x1 EnumProperty Engine.FormatArgumentData.ArgumentValueGender */
    uint8_t UnknownData39[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFormatArgumentData = sizeof(FFormatArgumentData); // 64
    static_assert(sizeof(FFormatArgumentData) == 0x40, "Size of FFormatArgumentData is not correct.");
	auto constexpr FFormatArgumentData_ArgumentName_Offset = offsetof(FFormatArgumentData, ArgumentName);
	static_assert(FFormatArgumentData_ArgumentName_Offset == 0x0, "FFormatArgumentData::ArgumentName offset is not 0");
	auto constexpr FFormatArgumentData_ArgumentValueType_Offset = offsetof(FFormatArgumentData, ArgumentValueType);
	static_assert(FFormatArgumentData_ArgumentValueType_Offset == 0x10, "FFormatArgumentData::ArgumentValueType offset is not 10");
	auto constexpr FFormatArgumentData_ArgumentValue_Offset = offsetof(FFormatArgumentData, ArgumentValue);
	static_assert(FFormatArgumentData_ArgumentValue_Offset == 0x18, "FFormatArgumentData::ArgumentValue offset is not 18");
	auto constexpr FFormatArgumentData_ArgumentValueInt_Offset = offsetof(FFormatArgumentData, ArgumentValueInt);
	static_assert(FFormatArgumentData_ArgumentValueInt_Offset == 0x30, "FFormatArgumentData::ArgumentValueInt offset is not 30");
	auto constexpr FFormatArgumentData_ArgumentValueFloat_Offset = offsetof(FFormatArgumentData, ArgumentValueFloat);
	static_assert(FFormatArgumentData_ArgumentValueFloat_Offset == 0x34, "FFormatArgumentData::ArgumentValueFloat offset is not 34");
	auto constexpr FFormatArgumentData_ArgumentValueGender_Offset = offsetof(FFormatArgumentData, ArgumentValueGender);
	static_assert(FFormatArgumentData_ArgumentValueGender_Offset == 0x38, "FFormatArgumentData::ArgumentValueGender offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
