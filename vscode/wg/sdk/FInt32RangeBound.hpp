#pragma once
#include "ERangeBoundTypes.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FInt32RangeBound // Size: 0x8
{
public:
    TEnumAsByte<enum ERangeBoundTypes> Type; /* Ofs: 0x0 Size: 0x1 ByteProperty CoreUObject.Int32RangeBound.Type */
    uint8_t UnknownData1[0x3];
    int32_t Value; /* Ofs: 0x4 Size: 0x4 IntProperty CoreUObject.Int32RangeBound.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFInt32RangeBound = sizeof(FInt32RangeBound); // 8
    static_assert(sizeof(FInt32RangeBound) == 0x8, "Size of FInt32RangeBound is not correct.");
	auto constexpr FInt32RangeBound_Type_Offset = offsetof(FInt32RangeBound, Type);
	static_assert(FInt32RangeBound_Type_Offset == 0x0, "FInt32RangeBound::Type offset is not 0");
	auto constexpr FInt32RangeBound_Value_Offset = offsetof(FInt32RangeBound, Value);
	static_assert(FInt32RangeBound_Value_Offset == 0x4, "FInt32RangeBound::Value offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
