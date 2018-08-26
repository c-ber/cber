#pragma once
#include "ENearClippingLevel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNearClippingValue // Size: 0x8
{
public:
    TEnumAsByte<enum ENearClippingLevel> Level; /* Ofs: 0x0 Size: 0x1 EnumProperty TslGame.NearClippingValue.Level */
    uint8_t UnknownData1[0x3];
    float Value; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.NearClippingValue.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNearClippingValue = sizeof(FNearClippingValue); // 8
    static_assert(sizeof(FNearClippingValue) == 0x8, "Size of FNearClippingValue is not correct.");
	auto constexpr FNearClippingValue_Level_Offset = offsetof(FNearClippingValue, Level);
	static_assert(FNearClippingValue_Level_Offset == 0x0, "FNearClippingValue::Level offset is not 0");
	auto constexpr FNearClippingValue_Value_Offset = offsetof(FNearClippingValue, Value);
	static_assert(FNearClippingValue_Value_Offset == 0x4, "FNearClippingValue::Value offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
