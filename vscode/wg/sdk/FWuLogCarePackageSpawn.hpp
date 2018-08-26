#pragma once
#include "FLogBase.hpp"
#include "FWuLogItemPackage.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogCarePackageSpawn // Size: 0x88
 : public FLogBase // Size: 0x58
{
public:
    FWuLogItemPackage ItemPackage; /* Ofs: 0x58 Size: 0x30 StructProperty TslGame.WuLogCarePackageSpawn.ItemPackage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogCarePackageSpawn = sizeof(FWuLogCarePackageSpawn); // 136
    static_assert(sizeof(FWuLogCarePackageSpawn) == 0x88, "Size of FWuLogCarePackageSpawn is not correct.");
	auto constexpr FWuLogCarePackageSpawn_ItemPackage_Offset = offsetof(FWuLogCarePackageSpawn, ItemPackage);
	static_assert(FWuLogCarePackageSpawn_ItemPackage_Offset == 0x58, "FWuLogCarePackageSpawn::ItemPackage offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
