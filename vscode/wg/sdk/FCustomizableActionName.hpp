#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableActionName // Size: 0x28
{
public:
    FName Category; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomizableActionName.Category */
    FName ActionName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.CustomizableActionName.ActionName */
    FText DisplayName; /* Ofs: 0x10 Size: 0x18 TextProperty TslGame.CustomizableActionName.DisplayName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableActionName = sizeof(FCustomizableActionName); // 40
    static_assert(sizeof(FCustomizableActionName) == 0x28, "Size of FCustomizableActionName is not correct.");
	auto constexpr FCustomizableActionName_Category_Offset = offsetof(FCustomizableActionName, Category);
	static_assert(FCustomizableActionName_Category_Offset == 0x0, "FCustomizableActionName::Category offset is not 0");
	auto constexpr FCustomizableActionName_ActionName_Offset = offsetof(FCustomizableActionName, ActionName);
	static_assert(FCustomizableActionName_ActionName_Offset == 0x8, "FCustomizableActionName::ActionName offset is not 8");
	auto constexpr FCustomizableActionName_DisplayName_Offset = offsetof(FCustomizableActionName, DisplayName);
	static_assert(FCustomizableActionName_DisplayName_Offset == 0x10, "FCustomizableActionName::DisplayName offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
