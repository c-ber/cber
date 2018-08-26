#pragma once
#include "ERangeBoundTypes.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FFloatRangeBound // Size: 0x8
{
public:
    TEnumAsByte<enum ERangeBoundTypes> Type; /* Ofs: 0x0 Size: 0x1 ByteProperty CoreUObject.FloatRangeBound.Type */
    uint8_t UnknownData1[0x3];
    float Value; /* Ofs: 0x4 Size: 0x4 FloatProperty CoreUObject.FloatRangeBound.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFFloatRangeBound = sizeof(FFloatRangeBound); // 8
    static_assert(sizeof(FFloatRangeBound) == 0x8, "Size of FFloatRangeBound is not correct.");
	auto constexpr FFloatRangeBound_Type_Offset = offsetof(FFloatRangeBound, Type);
	static_assert(FFloatRangeBound_Type_Offset == 0x0, "FFloatRangeBound::Type offset is not 0");
	auto constexpr FFloatRangeBound_Value_Offset = offsetof(FFloatRangeBound, Value);
	static_assert(FFloatRangeBound_Value_Offset == 0x4, "FFloatRangeBound::Value offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
