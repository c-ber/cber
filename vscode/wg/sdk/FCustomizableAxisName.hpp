#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomizableAxisName // Size: 0x30
{
public:
    FName Category; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.CustomizableAxisName.Category */
    FName AxisName; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.CustomizableAxisName.AxisName */
    FText DisplayName; /* Ofs: 0x10 Size: 0x18 TextProperty TslGame.CustomizableAxisName.DisplayName */
    float Scale; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.CustomizableAxisName.Scale */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomizableAxisName = sizeof(FCustomizableAxisName); // 48
    static_assert(sizeof(FCustomizableAxisName) == 0x30, "Size of FCustomizableAxisName is not correct.");
	auto constexpr FCustomizableAxisName_Category_Offset = offsetof(FCustomizableAxisName, Category);
	static_assert(FCustomizableAxisName_Category_Offset == 0x0, "FCustomizableAxisName::Category offset is not 0");
	auto constexpr FCustomizableAxisName_AxisName_Offset = offsetof(FCustomizableAxisName, AxisName);
	static_assert(FCustomizableAxisName_AxisName_Offset == 0x8, "FCustomizableAxisName::AxisName offset is not 8");
	auto constexpr FCustomizableAxisName_DisplayName_Offset = offsetof(FCustomizableAxisName, DisplayName);
	static_assert(FCustomizableAxisName_DisplayName_Offset == 0x10, "FCustomizableAxisName::DisplayName offset is not 10");
	auto constexpr FCustomizableAxisName_Scale_Offset = offsetof(FCustomizableAxisName, Scale);
	static_assert(FCustomizableAxisName_Scale_Offset == 0x28, "FCustomizableAxisName::Scale offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
