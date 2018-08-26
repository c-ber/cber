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

struct alignas(1) FKBoxElem // Size: 0xA0
 : public FKShapeElem // Size: 0x20
{
public:
    FMatrix TM; /* Ofs: 0x20 Size: 0x40 StructProperty Engine.KBoxElem.TM */
    FQuat Orientation; /* Ofs: 0x60 Size: 0x10 StructProperty Engine.KBoxElem.Orientation */
    FVector Center; /* Ofs: 0x70 Size: 0xC StructProperty Engine.KBoxElem.Center */
    FRotator Rotation; /* Ofs: 0x7C Size: 0xC StructProperty Engine.KBoxElem.Rotation */
    float X; /* Ofs: 0x88 Size: 0x4 FloatProperty Engine.KBoxElem.X */
    float Y; /* Ofs: 0x8C Size: 0x4 FloatProperty Engine.KBoxElem.Y */
    float Z; /* Ofs: 0x90 Size: 0x4 FloatProperty Engine.KBoxElem.Z */
    uint8_t UnknownData94[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKBoxElem = sizeof(FKBoxElem); // 160
    static_assert(sizeof(FKBoxElem) == 0xA0, "Size of FKBoxElem is not correct.");
	auto constexpr FKBoxElem_TM_Offset = offsetof(FKBoxElem, TM);
	static_assert(FKBoxElem_TM_Offset == 0x20, "FKBoxElem::TM offset is not 20");
	auto constexpr FKBoxElem_Orientation_Offset = offsetof(FKBoxElem, Orientation);
	static_assert(FKBoxElem_Orientation_Offset == 0x60, "FKBoxElem::Orientation offset is not 60");
	auto constexpr FKBoxElem_Center_Offset = offsetof(FKBoxElem, Center);
	static_assert(FKBoxElem_Center_Offset == 0x70, "FKBoxElem::Center offset is not 70");
	auto constexpr FKBoxElem_Rotation_Offset = offsetof(FKBoxElem, Rotation);
	static_assert(FKBoxElem_Rotation_Offset == 0x7c, "FKBoxElem::Rotation offset is not 7c");
	auto constexpr FKBoxElem_X_Offset = offsetof(FKBoxElem, X);
	static_assert(FKBoxElem_X_Offset == 0x88, "FKBoxElem::X offset is not 88");
	auto constexpr FKBoxElem_Y_Offset = offsetof(FKBoxElem, Y);
	static_assert(FKBoxElem_Y_Offset == 0x8c, "FKBoxElem::Y offset is not 8c");
	auto constexpr FKBoxElem_Z_Offset = offsetof(FKBoxElem, Z);
	static_assert(FKBoxElem_Z_Offset == 0x90, "FKBoxElem::Z offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
