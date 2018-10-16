#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogItemPackage // Size: 0x30
{
public:
    FString ItemPackageId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuLogItemPackage.ItemPackageId */
    FVector Location; /* Ofs: 0x10 Size: 0xC StructProperty TslGame.WuLogItemPackage.Location */
    uint8_t UnknownData1C[0x4];
    TArray<struct FWuLogItem> Items; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.WuLogItemPackage.Items */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogItemPackage = sizeof(FWuLogItemPackage); // 48
    static_assert(sizeof(FWuLogItemPackage) == 0x30, "Size of FWuLogItemPackage is not correct.");
	auto constexpr FWuLogItemPackage_ItemPackageId_Offset = offsetof(FWuLogItemPackage, ItemPackageId);
	static_assert(FWuLogItemPackage_ItemPackageId_Offset == 0x0, "FWuLogItemPackage::ItemPackageId offset is not 0");
	auto constexpr FWuLogItemPackage_Location_Offset = offsetof(FWuLogItemPackage, Location);
	static_assert(FWuLogItemPackage_Location_Offset == 0x10, "FWuLogItemPackage::Location offset is not 10");
	auto constexpr FWuLogItemPackage_Items_Offset = offsetof(FWuLogItemPackage, Items);
	static_assert(FWuLogItemPackage_Items_Offset == 0x20, "FWuLogItemPackage::Items offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
