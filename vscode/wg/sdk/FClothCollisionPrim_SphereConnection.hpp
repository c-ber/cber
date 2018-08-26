#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothCollisionPrim_SphereConnection // Size: 0x8
{
public:
    int32_t SphereIndices[2]; /* Ofs: 0x0 Size: 0x4 IntProperty ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection.SphereIndices */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothCollisionPrim_SphereConnection = sizeof(FClothCollisionPrim_SphereConnection); // 8
    static_assert(sizeof(FClothCollisionPrim_SphereConnection) == 0x8, "Size of FClothCollisionPrim_SphereConnection is not correct.");
	auto constexpr FClothCollisionPrim_SphereConnection_SphereIndices_Offset = offsetof(FClothCollisionPrim_SphereConnection, SphereIndices);
	static_assert(FClothCollisionPrim_SphereConnection_SphereIndices_Offset == 0x0, "FClothCollisionPrim_SphereConnection::SphereIndices offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
