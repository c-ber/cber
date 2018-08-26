#pragma once
#include "FKShapeElem.hpp"
#include "FMatrix.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#include "FRotator.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKSphylElem // Size: 0x90
 : public FKShapeElem // Size: 0x20
{
public:
    FMatrix TM; /* Ofs: 0x20 Size: 0x40 StructProperty Engine.KSphylElem.TM */
    FQuat Orientation; /* Ofs: 0x60 Size: 0x10 StructProperty Engine.KSphylElem.Orientation */
    FVector Center; /* Ofs: 0x70 Size: 0xC StructProperty Engine.KSphylElem.Center */
    FRotator Rotation; /* Ofs: 0x7C Size: 0xC StructProperty Engine.KSphylElem.Rotation */
    float Radius; /* Ofs: 0x88 Size: 0x4 FloatProperty Engine.KSphylElem.Radius */
    float Length; /* Ofs: 0x8C Size: 0x4 FloatProperty Engine.KSphylElem.Length */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKSphylElem = sizeof(FKSphylElem); // 144
    static_assert(sizeof(FKSphylElem) == 0x90, "Size of FKSphylElem is not correct.");
	auto constexpr FKSphylElem_TM_Offset = offsetof(FKSphylElem, TM);
	static_assert(FKSphylElem_TM_Offset == 0x20, "FKSphylElem::TM offset is not 20");
	auto constexpr FKSphylElem_Orientation_Offset = offsetof(FKSphylElem, Orientation);
	static_assert(FKSphylElem_Orientation_Offset == 0x60, "FKSphylElem::Orientation offset is not 60");
	auto constexpr FKSphylElem_Center_Offset = offsetof(FKSphylElem, Center);
	static_assert(FKSphylElem_Center_Offset == 0x70, "FKSphylElem::Center offset is not 70");
	auto constexpr FKSphylElem_Rotation_Offset = offsetof(FKSphylElem, Rotation);
	static_assert(FKSphylElem_Rotation_Offset == 0x7c, "FKSphylElem::Rotation offset is not 7c");
	auto constexpr FKSphylElem_Radius_Offset = offsetof(FKSphylElem, Radius);
	static_assert(FKSphylElem_Radius_Offset == 0x88, "FKSphylElem::Radius offset is not 88");
	auto constexpr FKSphylElem_Length_Offset = offsetof(FKSphylElem, Length);
	static_assert(FKSphylElem_Length_Offset == 0x8c, "FKSphylElem::Length offset is not 8c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
