#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlendParameter // Size: 0x20
{
public:
    FString DisplayName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.BlendParameter.DisplayName */
    float Min; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.BlendParameter.Min */
    float Max; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.BlendParameter.Max */
    int32_t GridNum; /* Ofs: 0x18 Size: 0x4 IntProperty Engine.BlendParameter.GridNum */
    uint8_t UnknownData1C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlendParameter = sizeof(FBlendParameter); // 32
    static_assert(sizeof(FBlendParameter) == 0x20, "Size of FBlendParameter is not correct.");
	auto constexpr FBlendParameter_DisplayName_Offset = offsetof(FBlendParameter, DisplayName);
	static_assert(FBlendParameter_DisplayName_Offset == 0x0, "FBlendParameter::DisplayName offset is not 0");
	auto constexpr FBlendParameter_Min_Offset = offsetof(FBlendParameter, Min);
	static_assert(FBlendParameter_Min_Offset == 0x10, "FBlendParameter::Min offset is not 10");
	auto constexpr FBlendParameter_Max_Offset = offsetof(FBlendParameter, Max);
	static_assert(FBlendParameter_Max_Offset == 0x14, "FBlendParameter::Max offset is not 14");
	auto constexpr FBlendParameter_GridNum_Offset = offsetof(FBlendParameter, GridNum);
	static_assert(FBlendParameter_GridNum_Offset == 0x18, "FBlendParameter::GridNum offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
