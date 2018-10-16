#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuCharacterCustomizationOptions // Size: 0x40
{
public:
    TArray<struct FWuStringBoolPair> BoolOptions; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WuCharacterCustomizationOptions.BoolOptions */
    TArray<struct FWuStringFloatPair> FloatOptions; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.WuCharacterCustomizationOptions.FloatOptions */
    TArray<struct FWuStringStringPair> StringOptions; /* Ofs: 0x20 Size: 0x10 ArrayProperty TslGame.WuCharacterCustomizationOptions.StringOptions */
    TArray<struct FString> ItemIds; /* Ofs: 0x30 Size: 0x10 ArrayProperty TslGame.WuCharacterCustomizationOptions.ItemIds */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuCharacterCustomizationOptions = sizeof(FWuCharacterCustomizationOptions); // 64
    static_assert(sizeof(FWuCharacterCustomizationOptions) == 0x40, "Size of FWuCharacterCustomizationOptions is not correct.");
	auto constexpr FWuCharacterCustomizationOptions_BoolOptions_Offset = offsetof(FWuCharacterCustomizationOptions, BoolOptions);
	static_assert(FWuCharacterCustomizationOptions_BoolOptions_Offset == 0x0, "FWuCharacterCustomizationOptions::BoolOptions offset is not 0");
	auto constexpr FWuCharacterCustomizationOptions_FloatOptions_Offset = offsetof(FWuCharacterCustomizationOptions, FloatOptions);
	static_assert(FWuCharacterCustomizationOptions_FloatOptions_Offset == 0x10, "FWuCharacterCustomizationOptions::FloatOptions offset is not 10");
	auto constexpr FWuCharacterCustomizationOptions_StringOptions_Offset = offsetof(FWuCharacterCustomizationOptions, StringOptions);
	static_assert(FWuCharacterCustomizationOptions_StringOptions_Offset == 0x20, "FWuCharacterCustomizationOptions::StringOptions offset is not 20");
	auto constexpr FWuCharacterCustomizationOptions_ItemIds_Offset = offsetof(FWuCharacterCustomizationOptions, ItemIds);
	static_assert(FWuCharacterCustomizationOptions_ItemIds_Offset == 0x30, "FWuCharacterCustomizationOptions::ItemIds offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
