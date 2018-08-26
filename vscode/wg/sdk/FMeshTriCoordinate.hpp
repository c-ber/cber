#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FMeshTriCoordinate // Size: 0x10
{
public:
    int32_t Tri; /* Ofs: 0x0 Size: 0x4 IntProperty Niagara.MeshTriCoordinate.Tri */
    FVector BaryCoord; /* Ofs: 0x4 Size: 0xC StructProperty Niagara.MeshTriCoordinate.BaryCoord */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFMeshTriCoordinate = sizeof(FMeshTriCoordinate); // 16
    static_assert(sizeof(FMeshTriCoordinate) == 0x10, "Size of FMeshTriCoordinate is not correct.");
	auto constexpr FMeshTriCoordinate_Tri_Offset = offsetof(FMeshTriCoordinate, Tri);
	static_assert(FMeshTriCoordinate_Tri_Offset == 0x0, "FMeshTriCoordinate::Tri offset is not 0");
	auto constexpr FMeshTriCoordinate_BaryCoord_Offset = offsetof(FMeshTriCoordinate, BaryCoord);
	static_assert(FMeshTriCoordinate_BaryCoord_Offset == 0x4, "FMeshTriCoordinate::BaryCoord offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
