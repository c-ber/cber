#pragma once
#include "EValueType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FOverrideScalabilityValue // Size: 0x28
{
public:
    FString ConsoleName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.OverrideScalabilityValue.ConsoleName */
    TEnumAsByte<enum EValueType> ValueType; /* Ofs: 0x10 Size: 0x1 EnumProperty TslGame.OverrideScalabilityValue.ValueType */
    uint8_t UnknownData11[0x7];
    TArray<struct FString> Values; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.OverrideScalabilityValue.Values */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFOverrideScalabilityValue = sizeof(FOverrideScalabilityValue); // 40
    static_assert(sizeof(FOverrideScalabilityValue) == 0x28, "Size of FOverrideScalabilityValue is not correct.");
	auto constexpr FOverrideScalabilityValue_ConsoleName_Offset = offsetof(FOverrideScalabilityValue, ConsoleName);
	static_assert(FOverrideScalabilityValue_ConsoleName_Offset == 0x0, "FOverrideScalabilityValue::ConsoleName offset is not 0");
	auto constexpr FOverrideScalabilityValue_ValueType_Offset = offsetof(FOverrideScalabilityValue, ValueType);
	static_assert(FOverrideScalabilityValue_ValueType_Offset == 0x10, "FOverrideScalabilityValue::ValueType offset is not 10");
	auto constexpr FOverrideScalabilityValue_Values_Offset = offsetof(FOverrideScalabilityValue, Values);
	static_assert(FOverrideScalabilityValue_Values_Offset == 0x18, "FOverrideScalabilityValue::Values offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
