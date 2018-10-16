#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStringCurveKey // Size: 0x18
{
public:
    float Time; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.StringCurveKey.Time */
    uint8_t UnknownData4[0x4];
    FString Value; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.StringCurveKey.Value */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStringCurveKey = sizeof(FStringCurveKey); // 24
    static_assert(sizeof(FStringCurveKey) == 0x18, "Size of FStringCurveKey is not correct.");
	auto constexpr FStringCurveKey_Time_Offset = offsetof(FStringCurveKey, Time);
	static_assert(FStringCurveKey_Time_Offset == 0x0, "FStringCurveKey::Time offset is not 0");
	auto constexpr FStringCurveKey_Value_Offset = offsetof(FStringCurveKey, Value);
	static_assert(FStringCurveKey_Value_Offset == 0x8, "FStringCurveKey::Value offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
