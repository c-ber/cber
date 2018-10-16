#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLimitCustomStringParameter // Size: 0x18
{
public:
    FString CustomStringParameter; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.LimitCustomStringParameter.CustomStringParameter */
    float MinLimit; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.LimitCustomStringParameter.MinLimit */
    float MaxLimit; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.LimitCustomStringParameter.MaxLimit */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLimitCustomStringParameter = sizeof(FLimitCustomStringParameter); // 24
    static_assert(sizeof(FLimitCustomStringParameter) == 0x18, "Size of FLimitCustomStringParameter is not correct.");
	auto constexpr FLimitCustomStringParameter_CustomStringParameter_Offset = offsetof(FLimitCustomStringParameter, CustomStringParameter);
	static_assert(FLimitCustomStringParameter_CustomStringParameter_Offset == 0x0, "FLimitCustomStringParameter::CustomStringParameter offset is not 0");
	auto constexpr FLimitCustomStringParameter_MinLimit_Offset = offsetof(FLimitCustomStringParameter, MinLimit);
	static_assert(FLimitCustomStringParameter_MinLimit_Offset == 0x10, "FLimitCustomStringParameter::MinLimit offset is not 10");
	auto constexpr FLimitCustomStringParameter_MaxLimit_Offset = offsetof(FLimitCustomStringParameter, MaxLimit);
	static_assert(FLimitCustomStringParameter_MaxLimit_Offset == 0x14, "FLimitCustomStringParameter::MaxLimit offset is not 14");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
