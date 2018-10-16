#pragma once
#include "FVector.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBatchedLine // Size: 0x34
{
public:
    FVector Start; /* Ofs: 0x0 Size: 0xC StructProperty Engine.BatchedLine.Start */
    FVector End; /* Ofs: 0xC Size: 0xC StructProperty Engine.BatchedLine.End */
    FLinearColor Color; /* Ofs: 0x18 Size: 0x10 StructProperty Engine.BatchedLine.Color */
    float Thickness; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.BatchedLine.Thickness */
    float RemainingLifeTime; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.BatchedLine.RemainingLifeTime */
    uint8_t DepthPriority; /* Ofs: 0x30 Size: 0x1 ByteProperty Engine.BatchedLine.DepthPriority */
    uint8_t UnknownData31[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBatchedLine = sizeof(FBatchedLine); // 52
    static_assert(sizeof(FBatchedLine) == 0x34, "Size of FBatchedLine is not correct.");
	auto constexpr FBatchedLine_Start_Offset = offsetof(FBatchedLine, Start);
	static_assert(FBatchedLine_Start_Offset == 0x0, "FBatchedLine::Start offset is not 0");
	auto constexpr FBatchedLine_End_Offset = offsetof(FBatchedLine, End);
	static_assert(FBatchedLine_End_Offset == 0xc, "FBatchedLine::End offset is not c");
	auto constexpr FBatchedLine_Color_Offset = offsetof(FBatchedLine, Color);
	static_assert(FBatchedLine_Color_Offset == 0x18, "FBatchedLine::Color offset is not 18");
	auto constexpr FBatchedLine_Thickness_Offset = offsetof(FBatchedLine, Thickness);
	static_assert(FBatchedLine_Thickness_Offset == 0x28, "FBatchedLine::Thickness offset is not 28");
	auto constexpr FBatchedLine_RemainingLifeTime_Offset = offsetof(FBatchedLine, RemainingLifeTime);
	static_assert(FBatchedLine_RemainingLifeTime_Offset == 0x2c, "FBatchedLine::RemainingLifeTime offset is not 2c");
	auto constexpr FBatchedLine_DepthPriority_Offset = offsetof(FBatchedLine, DepthPriority);
	static_assert(FBatchedLine_DepthPriority_Offset == 0x30, "FBatchedLine::DepthPriority offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
