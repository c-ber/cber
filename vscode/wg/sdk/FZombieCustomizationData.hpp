#pragma once
#include "EGender.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FZombieCustomizationData // Size: 0x28
{
public:
    FString StringOptionKey; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ZombieCustomizationData.StringOptionKey */
    TEnumAsByte<enum EGender> Gender; /* Ofs: 0x10 Size: 0x1 EnumProperty TslGame.ZombieCustomizationData.Gender */
    uint8_t UnknownData11[0x7];
    TArray<struct FString> ZombieOptionValues; /* Ofs: 0x18 Size: 0x10 ArrayProperty TslGame.ZombieCustomizationData.ZombieOptionValues */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFZombieCustomizationData = sizeof(FZombieCustomizationData); // 40
    static_assert(sizeof(FZombieCustomizationData) == 0x28, "Size of FZombieCustomizationData is not correct.");
	auto constexpr FZombieCustomizationData_StringOptionKey_Offset = offsetof(FZombieCustomizationData, StringOptionKey);
	static_assert(FZombieCustomizationData_StringOptionKey_Offset == 0x0, "FZombieCustomizationData::StringOptionKey offset is not 0");
	auto constexpr FZombieCustomizationData_Gender_Offset = offsetof(FZombieCustomizationData, Gender);
	static_assert(FZombieCustomizationData_Gender_Offset == 0x10, "FZombieCustomizationData::Gender offset is not 10");
	auto constexpr FZombieCustomizationData_ZombieOptionValues_Offset = offsetof(FZombieCustomizationData, ZombieOptionValues);
	static_assert(FZombieCustomizationData_ZombieOptionValues_Offset == 0x18, "FZombieCustomizationData::ZombieOptionValues offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
