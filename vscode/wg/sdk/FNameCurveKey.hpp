#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNameCurveKey // Size: 0x10
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.NameCurveKey.Time */
    uint8_t UnknownData4[0x4];
    FName Value; /* Ofs: 0x8 Size: 0x8 NameProperty Engine.NameCurveKey.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNameCurveKey = sizeof(FNameCurveKey); // 16
    static_assert(sizeof(FNameCurveKey) == 0x10, "Size of FNameCurveKey is not correct.");
	auto constexpr FNameCurveKey_Time_Offset = offsetof(FNameCurveKey, Time);
	static_assert(FNameCurveKey_Time_Offset == 0x0, "FNameCurveKey::Time offset is not 0");
	auto constexpr FNameCurveKey_Value_Offset = offsetof(FNameCurveKey, Value);
	static_assert(FNameCurveKey_Value_Offset == 0x8, "FNameCurveKey::Value offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
