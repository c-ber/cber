#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBlendSampleData // Size: 0x40
{
public:
    int32_t SampleDataIndex; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.BlendSampleData.SampleDataIndex */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UAnimSequence> Animation; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.BlendSampleData.Animation */
    float TotalWeight; /* Ofs: 0x10 Size: 0x4 FloatProperty Engine.BlendSampleData.TotalWeight */
    float Time; /* Ofs: 0x14 Size: 0x4 FloatProperty Engine.BlendSampleData.Time */
    float PreviousTime; /* Ofs: 0x18 Size: 0x4 FloatProperty Engine.BlendSampleData.PreviousTime */
    uint8_t UnknownData1C[0x24];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBlendSampleData = sizeof(FBlendSampleData); // 64
    static_assert(sizeof(FBlendSampleData) == 0x40, "Size of FBlendSampleData is not correct.");
	auto constexpr FBlendSampleData_SampleDataIndex_Offset = offsetof(FBlendSampleData, SampleDataIndex);
	static_assert(FBlendSampleData_SampleDataIndex_Offset == 0x0, "FBlendSampleData::SampleDataIndex offset is not 0");
	auto constexpr FBlendSampleData_Animation_Offset = offsetof(FBlendSampleData, Animation);
	static_assert(FBlendSampleData_Animation_Offset == 0x8, "FBlendSampleData::Animation offset is not 8");
	auto constexpr FBlendSampleData_TotalWeight_Offset = offsetof(FBlendSampleData, TotalWeight);
	static_assert(FBlendSampleData_TotalWeight_Offset == 0x10, "FBlendSampleData::TotalWeight offset is not 10");
	auto constexpr FBlendSampleData_Time_Offset = offsetof(FBlendSampleData, Time);
	static_assert(FBlendSampleData_Time_Offset == 0x14, "FBlendSampleData::Time offset is not 14");
	auto constexpr FBlendSampleData_PreviousTime_Offset = offsetof(FBlendSampleData, PreviousTime);
	static_assert(FBlendSampleData_PreviousTime_Offset == 0x18, "FBlendSampleData::PreviousTime offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
