#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogLanguage // Size: 0xC0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuLogLanguage.Character */
    FString WindowsLanguage; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.WuLogLanguage.WindowsLanguage */
    FString GameLanguage; /* Ofs: 0xB0 Size: 0x10 StrProperty TslGame.WuLogLanguage.GameLanguage */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogLanguage = sizeof(FWuLogLanguage); // 192
    static_assert(sizeof(FWuLogLanguage) == 0xC0, "Size of FWuLogLanguage is not correct.");
	auto constexpr FWuLogLanguage_Character_Offset = offsetof(FWuLogLanguage, Character);
	static_assert(FWuLogLanguage_Character_Offset == 0x58, "FWuLogLanguage::Character offset is not 58");
	auto constexpr FWuLogLanguage_WindowsLanguage_Offset = offsetof(FWuLogLanguage, WindowsLanguage);
	static_assert(FWuLogLanguage_WindowsLanguage_Offset == 0xa0, "FWuLogLanguage::WindowsLanguage offset is not a0");
	auto constexpr FWuLogLanguage_GameLanguage_Offset = offsetof(FWuLogLanguage, GameLanguage);
	static_assert(FWuLogLanguage_GameLanguage_Offset == 0xb0, "FWuLogLanguage::GameLanguage offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
