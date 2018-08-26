#pragma once
#include "FVector.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBatchedPoint // Size: 0x28
{
public:
    FVector Position; /* Ofs: 0x0 Size: 0xC StructProperty Engine.BatchedPoint.Position */
    FLinearColor Color; /* Ofs: 0xC Size: 0x10 StructProperty Engine.BatchedPoint.Color */
    float PointSize; /* Ofs: 0x1C Size: 0x4 FloatProperty Engine.BatchedPoint.PointSize */
    float RemainingLifeTime; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.BatchedPoint.RemainingLifeTime */
    uint8_t DepthPriority; /* Ofs: 0x24 Size: 0x1 ByteProperty Engine.BatchedPoint.DepthPriority */
    uint8_t UnknownData25[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBatchedPoint = sizeof(FBatchedPoint); // 40
    static_assert(sizeof(FBatchedPoint) == 0x28, "Size of FBatchedPoint is not correct.");
	auto constexpr FBatchedPoint_Position_Offset = offsetof(FBatchedPoint, Position);
	static_assert(FBatchedPoint_Position_Offset == 0x0, "FBatchedPoint::Position offset is not 0");
	auto constexpr FBatchedPoint_Color_Offset = offsetof(FBatchedPoint, Color);
	static_assert(FBatchedPoint_Color_Offset == 0xc, "FBatchedPoint::Color offset is not c");
	auto constexpr FBatchedPoint_PointSize_Offset = offsetof(FBatchedPoint, PointSize);
	static_assert(FBatchedPoint_PointSize_Offset == 0x1c, "FBatchedPoint::PointSize offset is not 1c");
	auto constexpr FBatchedPoint_RemainingLifeTime_Offset = offsetof(FBatchedPoint, RemainingLifeTime);
	static_assert(FBatchedPoint_RemainingLifeTime_Offset == 0x20, "FBatchedPoint::RemainingLifeTime offset is not 20");
	auto constexpr FBatchedPoint_DepthPriority_Offset = offsetof(FBatchedPoint, DepthPriority);
	static_assert(FBatchedPoint_DepthPriority_Offset == 0x24, "FBatchedPoint::DepthPriority offset is not 24");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
