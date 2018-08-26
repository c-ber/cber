#pragma once
#include "FGeneralSpotGroupProperty.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPackageSpotGroupProperty // Size: 0x38
 : public FGeneralSpotGroupProperty // Size: 0x20
{
public:
    ExternalPtr<struct UClass> ItemPackageClass; /* Ofs: 0x20 Size: 0x8 ClassProperty TslGame.PackageSpotGroupProperty.ItemPackageClass */
    TArray<struct FPackageSpawnProb> PackageSpawnProbArray; /* Ofs: 0x28 Size: 0x10 ArrayProperty TslGame.PackageSpotGroupProperty.PackageSpawnProbArray */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPackageSpotGroupProperty = sizeof(FPackageSpotGroupProperty); // 56
    static_assert(sizeof(FPackageSpotGroupProperty) == 0x38, "Size of FPackageSpotGroupProperty is not correct.");
	auto constexpr FPackageSpotGroupProperty_ItemPackageClass_Offset = offsetof(FPackageSpotGroupProperty, ItemPackageClass);
	static_assert(FPackageSpotGroupProperty_ItemPackageClass_Offset == 0x20, "FPackageSpotGroupProperty::ItemPackageClass offset is not 20");
	auto constexpr FPackageSpotGroupProperty_PackageSpawnProbArray_Offset = offsetof(FPackageSpotGroupProperty, PackageSpawnProbArray);
	static_assert(FPackageSpotGroupProperty_PackageSpawnProbArray_Offset == 0x28, "FPackageSpotGroupProperty::PackageSpawnProbArray offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
