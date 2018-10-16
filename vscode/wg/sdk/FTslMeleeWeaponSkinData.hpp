#pragma once
#include "FTslWeaponSkinData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslMeleeWeaponSkinData // Size: 0xC8
 : public FTslWeaponSkinData // Size: 0xC8
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslMeleeWeaponSkinData = sizeof(FTslMeleeWeaponSkinData); // 200
    static_assert(sizeof(FTslMeleeWeaponSkinData) == 0xC8, "Size of FTslMeleeWeaponSkinData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
