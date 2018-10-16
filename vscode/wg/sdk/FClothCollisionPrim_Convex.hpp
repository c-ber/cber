#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothCollisionPrim_Convex // Size: 0x18
{
public:
    TArray<struct FPlane> Planes; /* Ofs: 0x0 Size: 0x10 ArrayProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex.Planes */
    int32_t BoneIndex; /* Ofs: 0x10 Size: 0x4 IntProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex.BoneIndex */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothCollisionPrim_Convex = sizeof(FClothCollisionPrim_Convex); // 24
    static_assert(sizeof(FClothCollisionPrim_Convex) == 0x18, "Size of FClothCollisionPrim_Convex is not correct.");
	auto constexpr FClothCollisionPrim_Convex_Planes_Offset = offsetof(FClothCollisionPrim_Convex, Planes);
	static_assert(FClothCollisionPrim_Convex_Planes_Offset == 0x0, "FClothCollisionPrim_Convex::Planes offset is not 0");
	auto constexpr FClothCollisionPrim_Convex_BoneIndex_Offset = offsetof(FClothCollisionPrim_Convex, BoneIndex);
	static_assert(FClothCollisionPrim_Convex_BoneIndex_Offset == 0x10, "FClothCollisionPrim_Convex::BoneIndex offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
