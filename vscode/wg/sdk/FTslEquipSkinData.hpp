#pragma once
#include "FTslBaseSkinData.hpp"
#include "FCustomizableObjectIdentifier.hpp"
#include "FCustomizableObjectIdPair.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslEquipSkinData // Size: 0x148
 : public FTslBaseSkinData // Size: 0xC8
{
public:
    FCustomizableObjectIdentifier CustomizableObjectIdentifierForMale; /* Ofs: 0xC8 Size: 0x30 StructProperty TslGame.TslEquipSkinData.CustomizableObjectIdentifierForMale */
    FCustomizableObjectIdentifier CustomizableObjectIdentifierForFemale; /* Ofs: 0xF8 Size: 0x30 StructProperty TslGame.TslEquipSkinData.CustomizableObjectIdentifierForFemale */
    FCustomizableObjectIdPair CustomizableObjectSkin; /* Ofs: 0x128 Size: 0x20 StructProperty TslGame.TslEquipSkinData.CustomizableObjectSkin */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslEquipSkinData = sizeof(FTslEquipSkinData); // 328
    static_assert(sizeof(FTslEquipSkinData) == 0x148, "Size of FTslEquipSkinData is not correct.");
	auto constexpr FTslEquipSkinData_CustomizableObjectIdentifierForMale_Offset = offsetof(FTslEquipSkinData, CustomizableObjectIdentifierForMale);
	static_assert(FTslEquipSkinData_CustomizableObjectIdentifierForMale_Offset == 0xc8, "FTslEquipSkinData::CustomizableObjectIdentifierForMale offset is not c8");
	auto constexpr FTslEquipSkinData_CustomizableObjectIdentifierForFemale_Offset = offsetof(FTslEquipSkinData, CustomizableObjectIdentifierForFemale);
	static_assert(FTslEquipSkinData_CustomizableObjectIdentifierForFemale_Offset == 0xf8, "FTslEquipSkinData::CustomizableObjectIdentifierForFemale offset is not f8");
	auto constexpr FTslEquipSkinData_CustomizableObjectSkin_Offset = offsetof(FTslEquipSkinData, CustomizableObjectSkin);
	static_assert(FTslEquipSkinData_CustomizableObjectSkin_Offset == 0x128, "FTslEquipSkinData::CustomizableObjectSkin offset is not 128");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
