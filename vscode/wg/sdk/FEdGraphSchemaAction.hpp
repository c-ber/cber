#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEdGraphSchemaAction // Size: 0x100
{
public:
    uint8_t UnknownData0[0x8];
    FText MenuDescription; /* Ofs: 0x8 Size: 0x18 TextProperty Engine.EdGraphSchemaAction.MenuDescription */
    FText TooltipDescription; /* Ofs: 0x20 Size: 0x18 TextProperty Engine.EdGraphSchemaAction.TooltipDescription */
    FText Category; /* Ofs: 0x38 Size: 0x18 TextProperty Engine.EdGraphSchemaAction.Category */
    FText Keywords; /* Ofs: 0x50 Size: 0x18 TextProperty Engine.EdGraphSchemaAction.Keywords */
    int32_t Grouping; /* Ofs: 0x68 Size: 0x4 IntProperty Engine.EdGraphSchemaAction.Grouping */
    int32_t SectionID; /* Ofs: 0x6C Size: 0x4 IntProperty Engine.EdGraphSchemaAction.SectionID */
    TArray<struct FString> MenuDescriptionArray; /* Ofs: 0x70 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.MenuDescriptionArray */
    TArray<struct FString> FullSearchTitlesArray; /* Ofs: 0x80 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.FullSearchTitlesArray */
    TArray<struct FString> FullSearchKeywordsArray; /* Ofs: 0x90 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.FullSearchKeywordsArray */
    TArray<struct FString> FullSearchCategoryArray; /* Ofs: 0xA0 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.FullSearchCategoryArray */
    TArray<struct FString> LocalizedMenuDescriptionArray; /* Ofs: 0xB0 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.LocalizedMenuDescriptionArray */
    TArray<struct FString> LocalizedFullSearchTitlesArray; /* Ofs: 0xC0 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.LocalizedFullSearchTitlesArray */
    TArray<struct FString> LocalizedFullSearchKeywordsArray; /* Ofs: 0xD0 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.LocalizedFullSearchKeywordsArray */
    TArray<struct FString> LocalizedFullSearchCategoryArray; /* Ofs: 0xE0 Size: 0x10 ArrayProperty Engine.EdGraphSchemaAction.LocalizedFullSearchCategoryArray */
    FString SearchText; /* Ofs: 0xF0 Size: 0x10 StrProperty Engine.EdGraphSchemaAction.SearchText */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEdGraphSchemaAction = sizeof(FEdGraphSchemaAction); // 256
    static_assert(sizeof(FEdGraphSchemaAction) == 0x100, "Size of FEdGraphSchemaAction is not correct.");
	auto constexpr FEdGraphSchemaAction_MenuDescription_Offset = offsetof(FEdGraphSchemaAction, MenuDescription);
	static_assert(FEdGraphSchemaAction_MenuDescription_Offset == 0x8, "FEdGraphSchemaAction::MenuDescription offset is not 8");
	auto constexpr FEdGraphSchemaAction_TooltipDescription_Offset = offsetof(FEdGraphSchemaAction, TooltipDescription);
	static_assert(FEdGraphSchemaAction_TooltipDescription_Offset == 0x20, "FEdGraphSchemaAction::TooltipDescription offset is not 20");
	auto constexpr FEdGraphSchemaAction_Category_Offset = offsetof(FEdGraphSchemaAction, Category);
	static_assert(FEdGraphSchemaAction_Category_Offset == 0x38, "FEdGraphSchemaAction::Category offset is not 38");
	auto constexpr FEdGraphSchemaAction_Keywords_Offset = offsetof(FEdGraphSchemaAction, Keywords);
	static_assert(FEdGraphSchemaAction_Keywords_Offset == 0x50, "FEdGraphSchemaAction::Keywords offset is not 50");
	auto constexpr FEdGraphSchemaAction_Grouping_Offset = offsetof(FEdGraphSchemaAction, Grouping);
	static_assert(FEdGraphSchemaAction_Grouping_Offset == 0x68, "FEdGraphSchemaAction::Grouping offset is not 68");
	auto constexpr FEdGraphSchemaAction_SectionID_Offset = offsetof(FEdGraphSchemaAction, SectionID);
	static_assert(FEdGraphSchemaAction_SectionID_Offset == 0x6c, "FEdGraphSchemaAction::SectionID offset is not 6c");
	auto constexpr FEdGraphSchemaAction_MenuDescriptionArray_Offset = offsetof(FEdGraphSchemaAction, MenuDescriptionArray);
	static_assert(FEdGraphSchemaAction_MenuDescriptionArray_Offset == 0x70, "FEdGraphSchemaAction::MenuDescriptionArray offset is not 70");
	auto constexpr FEdGraphSchemaAction_FullSearchTitlesArray_Offset = offsetof(FEdGraphSchemaAction, FullSearchTitlesArray);
	static_assert(FEdGraphSchemaAction_FullSearchTitlesArray_Offset == 0x80, "FEdGraphSchemaAction::FullSearchTitlesArray offset is not 80");
	auto constexpr FEdGraphSchemaAction_FullSearchKeywordsArray_Offset = offsetof(FEdGraphSchemaAction, FullSearchKeywordsArray);
	static_assert(FEdGraphSchemaAction_FullSearchKeywordsArray_Offset == 0x90, "FEdGraphSchemaAction::FullSearchKeywordsArray offset is not 90");
	auto constexpr FEdGraphSchemaAction_FullSearchCategoryArray_Offset = offsetof(FEdGraphSchemaAction, FullSearchCategoryArray);
	static_assert(FEdGraphSchemaAction_FullSearchCategoryArray_Offset == 0xa0, "FEdGraphSchemaAction::FullSearchCategoryArray offset is not a0");
	auto constexpr FEdGraphSchemaAction_LocalizedMenuDescriptionArray_Offset = offsetof(FEdGraphSchemaAction, LocalizedMenuDescriptionArray);
	static_assert(FEdGraphSchemaAction_LocalizedMenuDescriptionArray_Offset == 0xb0, "FEdGraphSchemaAction::LocalizedMenuDescriptionArray offset is not b0");
	auto constexpr FEdGraphSchemaAction_LocalizedFullSearchTitlesArray_Offset = offsetof(FEdGraphSchemaAction, LocalizedFullSearchTitlesArray);
	static_assert(FEdGraphSchemaAction_LocalizedFullSearchTitlesArray_Offset == 0xc0, "FEdGraphSchemaAction::LocalizedFullSearchTitlesArray offset is not c0");
	auto constexpr FEdGraphSchemaAction_LocalizedFullSearchKeywordsArray_Offset = offsetof(FEdGraphSchemaAction, LocalizedFullSearchKeywordsArray);
	static_assert(FEdGraphSchemaAction_LocalizedFullSearchKeywordsArray_Offset == 0xd0, "FEdGraphSchemaAction::LocalizedFullSearchKeywordsArray offset is not d0");
	auto constexpr FEdGraphSchemaAction_LocalizedFullSearchCategoryArray_Offset = offsetof(FEdGraphSchemaAction, LocalizedFullSearchCategoryArray);
	static_assert(FEdGraphSchemaAction_LocalizedFullSearchCategoryArray_Offset == 0xe0, "FEdGraphSchemaAction::LocalizedFullSearchCategoryArray offset is not e0");
	auto constexpr FEdGraphSchemaAction_SearchText_Offset = offsetof(FEdGraphSchemaAction, SearchText);
	static_assert(FEdGraphSchemaAction_SearchText_Offset == 0xf0, "FEdGraphSchemaAction::SearchText offset is not f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
