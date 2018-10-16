#pragma once
#include "FClothPhysicsProperties_Legacy.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FClothingAssetData_Legacy // Size: 0x78
{
public:
    FName AssetName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.ClothingAssetData_Legacy.AssetName */
    FString ApexFileName; /* Ofs: 0x8 Size: 0x10 StrProperty Engine.ClothingAssetData_Legacy.ApexFileName */
    bool bClothPropertiesChanged; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty Engine.ClothingAssetData_Legacy.bClothPropertiesChanged */
    uint8_t UnknownData19[0x3];
    FClothPhysicsProperties_Legacy PhysicsProperties; /* Ofs: 0x1C Size: 0x50 StructProperty Engine.ClothingAssetData_Legacy.PhysicsProperties */
    uint8_t UnknownData6C[0xC];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFClothingAssetData_Legacy = sizeof(FClothingAssetData_Legacy); // 120
    static_assert(sizeof(FClothingAssetData_Legacy) == 0x78, "Size of FClothingAssetData_Legacy is not correct.");
	auto constexpr FClothingAssetData_Legacy_AssetName_Offset = offsetof(FClothingAssetData_Legacy, AssetName);
	static_assert(FClothingAssetData_Legacy_AssetName_Offset == 0x0, "FClothingAssetData_Legacy::AssetName offset is not 0");
	auto constexpr FClothingAssetData_Legacy_ApexFileName_Offset = offsetof(FClothingAssetData_Legacy, ApexFileName);
	static_assert(FClothingAssetData_Legacy_ApexFileName_Offset == 0x8, "FClothingAssetData_Legacy::ApexFileName offset is not 8");
	auto constexpr FClothingAssetData_Legacy_PhysicsProperties_Offset = offsetof(FClothingAssetData_Legacy, PhysicsProperties);
	static_assert(FClothingAssetData_Legacy_PhysicsProperties_Offset == 0x1c, "FClothingAssetData_Legacy::PhysicsProperties offset is not 1c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
