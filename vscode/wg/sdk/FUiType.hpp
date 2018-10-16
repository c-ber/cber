#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FUiType // Size: 0x28
{
public:
    FText DisplayUiName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.UiType.DisplayUiName */
    FString UiKey; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.UiType.UiKey */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFUiType = sizeof(FUiType); // 40
    static_assert(sizeof(FUiType) == 0x28, "Size of FUiType is not correct.");
	auto constexpr FUiType_DisplayUiName_Offset = offsetof(FUiType, DisplayUiName);
	static_assert(FUiType_DisplayUiName_Offset == 0x0, "FUiType::DisplayUiName offset is not 0");
	auto constexpr FUiType_UiKey_Offset = offsetof(FUiType, UiKey);
	static_assert(FUiType_UiKey_Offset == 0x18, "FUiType::UiKey offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
