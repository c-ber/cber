#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableCategoryData // Size: 0x30
{
public:
    FText DisplayName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.CustomizableCategoryData.DisplayName */
    FName Category; /* Ofs: 0x18 Size: 0x8 NameProperty TslGame.CustomizableCategoryData.Category */
    TArray<struct FName> NotDuplicateCategoryNames; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.CustomizableCategoryData.NotDuplicateCategoryNames */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableCategoryData = sizeof(FCustomizableCategoryData); // 48
    static_assert(sizeof(FCustomizableCategoryData) == 0x30, "Size of FCustomizableCategoryData is not correct.");
	auto constexpr FCustomizableCategoryData_DisplayName_Offset = offsetof(FCustomizableCategoryData, DisplayName);
	static_assert(FCustomizableCategoryData_DisplayName_Offset == 0x0, "FCustomizableCategoryData::DisplayName offset is not 0");
	auto constexpr FCustomizableCategoryData_Category_Offset = offsetof(FCustomizableCategoryData, Category);
	static_assert(FCustomizableCategoryData_Category_Offset == 0x18, "FCustomizableCategoryData::Category offset is not 18");
	auto constexpr FCustomizableCategoryData_NotDuplicateCategoryNames_Offset = offsetof(FCustomizableCategoryData, NotDuplicateCategoryNames);
	static_assert(FCustomizableCategoryData_NotDuplicateCategoryNames_Offset == 0x20, "FCustomizableCategoryData::NotDuplicateCategoryNames offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
