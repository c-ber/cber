#pragma once
#include "FTslBaseSkinData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslWeaponSkinData // Size: 0xC8
 : public FTslBaseSkinData // Size: 0xC8
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslWeaponSkinData = sizeof(FTslWeaponSkinData); // 200
    static_assert(sizeof(FTslWeaponSkinData) == 0xC8, "Size of FTslWeaponSkinData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
