#pragma once
#include "FSpriteGeometryCollection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperTileMetadata // Size: 0x40
{
public:
    FName UserDataName; /* Ofs: 0x0 Size: 0x8 NameProperty Paper2D.PaperTileMetadata.UserDataName */
    FSpriteGeometryCollection CollisionData; /* Ofs: 0x8 Size: 0x30 StructProperty Paper2D.PaperTileMetadata.CollisionData */
    uint8_t TerrainMembership[4]; /* Ofs: 0x38 Size: 0x1 ByteProperty Paper2D.PaperTileMetadata.TerrainMembership */
    uint8_t UnknownData3C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperTileMetadata = sizeof(FPaperTileMetadata); // 64
    static_assert(sizeof(FPaperTileMetadata) == 0x40, "Size of FPaperTileMetadata is not correct.");
	auto constexpr FPaperTileMetadata_UserDataName_Offset = offsetof(FPaperTileMetadata, UserDataName);
	static_assert(FPaperTileMetadata_UserDataName_Offset == 0x0, "FPaperTileMetadata::UserDataName offset is not 0");
	auto constexpr FPaperTileMetadata_CollisionData_Offset = offsetof(FPaperTileMetadata, CollisionData);
	static_assert(FPaperTileMetadata_CollisionData_Offset == 0x8, "FPaperTileMetadata::CollisionData offset is not 8");
	auto constexpr FPaperTileMetadata_TerrainMembership_Offset = offsetof(FPaperTileMetadata, TerrainMembership);
	static_assert(FPaperTileMetadata_TerrainMembership_Offset == 0x38, "FPaperTileMetadata::TerrainMembership offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
