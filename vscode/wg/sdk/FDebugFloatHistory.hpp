#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDebugFloatHistory // Size: 0x20
{
public:
    TArray<float> Samples; /* Ofs: 0x0 Size: 0x10 ArrayProperty Engine.DebugFloatHistory.Samples */
    float MaxSamples; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.DebugFloatHistory.MaxSamples */
    float MinValue; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.DebugFloatHistory.MinValue */
    float MaxValue; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.DebugFloatHistory.MaxValue */
    bool bAutoAdjustMinMax; /* Ofs: 0x1C Size: 0x1 BitMask: 01 BoolProperty Engine.DebugFloatHistory.bAutoAdjustMinMax */
    uint8_t UnknownData1D[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDebugFloatHistory = sizeof(FDebugFloatHistory); // 32
    static_assert(sizeof(FDebugFloatHistory) == 0x20, "Size of FDebugFloatHistory is not correct.");
	auto constexpr FDebugFloatHistory_Samples_Offset = offsetof(FDebugFloatHistory, Samples);
	static_assert(FDebugFloatHistory_Samples_Offset == 0x0, "FDebugFloatHistory::Samples offset is not 0");
	auto constexpr FDebugFloatHistory_MaxSamples_Offset = offsetof(FDebugFloatHistory, MaxSamples);
	static_assert(FDebugFloatHistory_MaxSamples_Offset == 0x10, "FDebugFloatHistory::MaxSamples offset is not 10");
	auto constexpr FDebugFloatHistory_MinValue_Offset = offsetof(FDebugFloatHistory, MinValue);
	static_assert(FDebugFloatHistory_MinValue_Offset == 0x14, "FDebugFloatHistory::MinValue offset is not 14");
	auto constexpr FDebugFloatHistory_MaxValue_Offset = offsetof(FDebugFloatHistory, MaxValue);
	static_assert(FDebugFloatHistory_MaxValue_Offset == 0x18, "FDebugFloatHistory::MaxValue offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
