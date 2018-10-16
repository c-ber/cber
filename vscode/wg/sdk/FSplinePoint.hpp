#pragma once
#include "FVector.hpp"
#include "FRotator.hpp"
#include "ESplinePointType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSplinePoint // Size: 0x44
{
public:
    float InputKey; /* Ofs: 0x0 Size: 0x4 FloatProperty Engine.SplinePoint.InputKey */
    FVector Position; /* Ofs: 0x4 Size: 0xC StructProperty Engine.SplinePoint.Position */
    FVector ArriveTangent; /* Ofs: 0x10 Size: 0xC StructProperty Engine.SplinePoint.ArriveTangent */
    FVector LeaveTangent; /* Ofs: 0x1C Size: 0xC StructProperty Engine.SplinePoint.LeaveTangent */
    FRotator Rotation; /* Ofs: 0x28 Size: 0xC StructProperty Engine.SplinePoint.Rotation */
    FVector Scale; /* Ofs: 0x34 Size: 0xC StructProperty Engine.SplinePoint.Scale */
    TEnumAsByte<enum ESplinePointType> Type; /* Ofs: 0x40 Size: 0x1 ByteProperty Engine.SplinePoint.Type */
    uint8_t UnknownData41[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSplinePoint = sizeof(FSplinePoint); // 68
    static_assert(sizeof(FSplinePoint) == 0x44, "Size of FSplinePoint is not correct.");
	auto constexpr FSplinePoint_InputKey_Offset = offsetof(FSplinePoint, InputKey);
	static_assert(FSplinePoint_InputKey_Offset == 0x0, "FSplinePoint::InputKey offset is not 0");
	auto constexpr FSplinePoint_Position_Offset = offsetof(FSplinePoint, Position);
	static_assert(FSplinePoint_Position_Offset == 0x4, "FSplinePoint::Position offset is not 4");
	auto constexpr FSplinePoint_ArriveTangent_Offset = offsetof(FSplinePoint, ArriveTangent);
	static_assert(FSplinePoint_ArriveTangent_Offset == 0x10, "FSplinePoint::ArriveTangent offset is not 10");
	auto constexpr FSplinePoint_LeaveTangent_Offset = offsetof(FSplinePoint, LeaveTangent);
	static_assert(FSplinePoint_LeaveTangent_Offset == 0x1c, "FSplinePoint::LeaveTangent offset is not 1c");
	auto constexpr FSplinePoint_Rotation_Offset = offsetof(FSplinePoint, Rotation);
	static_assert(FSplinePoint_Rotation_Offset == 0x28, "FSplinePoint::Rotation offset is not 28");
	auto constexpr FSplinePoint_Scale_Offset = offsetof(FSplinePoint, Scale);
	static_assert(FSplinePoint_Scale_Offset == 0x34, "FSplinePoint::Scale offset is not 34");
	auto constexpr FSplinePoint_Type_Offset = offsetof(FSplinePoint, Type);
	static_assert(FSplinePoint_Type_Offset == 0x40, "FSplinePoint::Type offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
