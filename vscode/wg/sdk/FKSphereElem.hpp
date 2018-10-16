#pragma once
#include "FKShapeElem.hpp"
#include "FMatrix.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKSphereElem // Size: 0x70
 : public FKShapeElem // Size: 0x20
{
public:
    FMatrix TM; /* Ofs: 0x20 Size: 0x40 StructProperty Engine.KSphereElem.TM */
    FVector Center; /* Ofs: 0x60 Size: 0xC StructProperty Engine.KSphereElem.Center */
    float Radius; /* Ofs: 0x6C Size: 0x4 FloatProperty Engine.KSphereElem.Radius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKSphereElem = sizeof(FKSphereElem); // 112
    static_assert(sizeof(FKSphereElem) == 0x70, "Size of FKSphereElem is not correct.");
	auto constexpr FKSphereElem_TM_Offset = offsetof(FKSphereElem, TM);
	static_assert(FKSphereElem_TM_Offset == 0x20, "FKSphereElem::TM offset is not 20");
	auto constexpr FKSphereElem_Center_Offset = offsetof(FKSphereElem, Center);
	static_assert(FKSphereElem_Center_Offset == 0x60, "FKSphereElem::Center offset is not 60");
	auto constexpr FKSphereElem_Radius_Offset = offsetof(FKSphereElem, Radius);
	static_assert(FKSphereElem_Radius_Offset == 0x6c, "FKSphereElem::Radius offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
