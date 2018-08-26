#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothCollisionPrim_Sphere // Size: 0x14
{
public:
    int32_t BoneIndex; /* Ofs: 0x0 Size: 0x4 IntProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere.BoneIndex */
    float Radius; /* Ofs: 0x4 Size: 0x4 FloatProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere.Radius */
    FVector LocalPosition; /* Ofs: 0x8 Size: 0xC StructProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere.LocalPosition */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothCollisionPrim_Sphere = sizeof(FClothCollisionPrim_Sphere); // 20
    static_assert(sizeof(FClothCollisionPrim_Sphere) == 0x14, "Size of FClothCollisionPrim_Sphere is not correct.");
	auto constexpr FClothCollisionPrim_Sphere_BoneIndex_Offset = offsetof(FClothCollisionPrim_Sphere, BoneIndex);
	static_assert(FClothCollisionPrim_Sphere_BoneIndex_Offset == 0x0, "FClothCollisionPrim_Sphere::BoneIndex offset is not 0");
	auto constexpr FClothCollisionPrim_Sphere_Radius_Offset = offsetof(FClothCollisionPrim_Sphere, Radius);
	static_assert(FClothCollisionPrim_Sphere_Radius_Offset == 0x4, "FClothCollisionPrim_Sphere::Radius offset is not 4");
	auto constexpr FClothCollisionPrim_Sphere_LocalPosition_Offset = offsetof(FClothCollisionPrim_Sphere, LocalPosition);
	static_assert(FClothCollisionPrim_Sphere_LocalPosition_Offset == 0x8, "FClothCollisionPrim_Sphere::LocalPosition offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
