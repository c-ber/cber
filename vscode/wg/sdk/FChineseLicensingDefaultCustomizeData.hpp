#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FChineseLicensingDefaultCustomizeData // Size: 0x18
{
public:
    FString CustomizableObjectGroupName; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ChineseLicensingDefaultCustomizeData.CustomizableObjectGroupName */
    ExternalPtr<struct UClass> EquipableItem; /* Ofs: 0x10 Size: 0x8 ClassProperty TslGame.ChineseLicensingDefaultCustomizeData.EquipableItem */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFChineseLicensingDefaultCustomizeData = sizeof(FChineseLicensingDefaultCustomizeData); // 24
    static_assert(sizeof(FChineseLicensingDefaultCustomizeData) == 0x18, "Size of FChineseLicensingDefaultCustomizeData is not correct.");
	auto constexpr FChineseLicensingDefaultCustomizeData_CustomizableObjectGroupName_Offset = offsetof(FChineseLicensingDefaultCustomizeData, CustomizableObjectGroupName);
	static_assert(FChineseLicensingDefaultCustomizeData_CustomizableObjectGroupName_Offset == 0x0, "FChineseLicensingDefaultCustomizeData::CustomizableObjectGroupName offset is not 0");
	auto constexpr FChineseLicensingDefaultCustomizeData_EquipableItem_Offset = offsetof(FChineseLicensingDefaultCustomizeData, EquipableItem);
	static_assert(FChineseLicensingDefaultCustomizeData_EquipableItem_Offset == 0x10, "FChineseLicensingDefaultCustomizeData::EquipableItem offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
