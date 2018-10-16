#pragma once
#include "FKShapeElem.hpp"
#include "FBox.hpp"
#include "FTransform.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKConvexElem // Size: 0x90
 : public FKShapeElem // Size: 0x20
{
public:
    TArray<struct FVector> VertexData; /* Ofs: 0x20 Size: 0x10 ArrayProperty Engine.KConvexElem.VertexData */
    FBox ElemBox; /* Ofs: 0x30 Size: 0x1C StructProperty Engine.KConvexElem.ElemBox */
    uint8_t UnknownData4C[0x4];
    FTransform Transform; /* Ofs: 0x50 Size: 0x30 StructProperty Engine.KConvexElem.Transform */
    uint8_t UnknownData80[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKConvexElem = sizeof(FKConvexElem); // 144
    static_assert(sizeof(FKConvexElem) == 0x90, "Size of FKConvexElem is not correct.");
	auto constexpr FKConvexElem_VertexData_Offset = offsetof(FKConvexElem, VertexData);
	static_assert(FKConvexElem_VertexData_Offset == 0x20, "FKConvexElem::VertexData offset is not 20");
	auto constexpr FKConvexElem_ElemBox_Offset = offsetof(FKConvexElem, ElemBox);
	static_assert(FKConvexElem_ElemBox_Offset == 0x30, "FKConvexElem::ElemBox offset is not 30");
	auto constexpr FKConvexElem_Transform_Offset = offsetof(FKConvexElem, Transform);
	static_assert(FKConvexElem_Transform_Offset == 0x50, "FKConvexElem::Transform offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
