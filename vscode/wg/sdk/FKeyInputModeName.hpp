#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FKeyInputModeName // Size: 0x20
{
public:
    FName ModeName; /* Ofs: 0x0 Size: 0x8 NameProperty TslGame.KeyInputModeName.ModeName */
    FText DisplayName; /* Ofs: 0x8 Size: 0x18 TextProperty TslGame.KeyInputModeName.DisplayName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFKeyInputModeName = sizeof(FKeyInputModeName); // 32
    static_assert(sizeof(FKeyInputModeName) == 0x20, "Size of FKeyInputModeName is not correct.");
	auto constexpr FKeyInputModeName_ModeName_Offset = offsetof(FKeyInputModeName, ModeName);
	static_assert(FKeyInputModeName_ModeName_Offset == 0x0, "FKeyInputModeName::ModeName offset is not 0");
	auto constexpr FKeyInputModeName_DisplayName_Offset = offsetof(FKeyInputModeName, DisplayName);
	static_assert(FKeyInputModeName_DisplayName_Offset == 0x8, "FKeyInputModeName::DisplayName offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
