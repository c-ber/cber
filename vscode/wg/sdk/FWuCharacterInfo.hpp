#pragma once
#include "FWuCharacterCustomizationOptions.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuCharacterInfo // Size: 0x58
{
public:
    FString Nickname; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuCharacterInfo.Nickname */
    bool Gender; /* Ofs: 0x10 Size: 0x1 BitMask: 01 BoolProperty TslGame.WuCharacterInfo.Gender */
    uint8_t UnknownData11[0x7];
    FWuCharacterCustomizationOptions CustomizationOptions; /* Ofs: 0x18 Size: 0x40 StructProperty TslGame.WuCharacterInfo.CustomizationOptions */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuCharacterInfo = sizeof(FWuCharacterInfo); // 88
    static_assert(sizeof(FWuCharacterInfo) == 0x58, "Size of FWuCharacterInfo is not correct.");
	auto constexpr FWuCharacterInfo_Nickname_Offset = offsetof(FWuCharacterInfo, Nickname);
	static_assert(FWuCharacterInfo_Nickname_Offset == 0x0, "FWuCharacterInfo::Nickname offset is not 0");
	auto constexpr FWuCharacterInfo_CustomizationOptions_Offset = offsetof(FWuCharacterInfo, CustomizationOptions);
	static_assert(FWuCharacterInfo_CustomizationOptions_Offset == 0x18, "FWuCharacterInfo::CustomizationOptions offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
