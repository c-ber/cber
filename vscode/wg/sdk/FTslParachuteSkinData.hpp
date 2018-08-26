#pragma once
#include "FTslEquipSkinData.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTslParachuteSkinData // Size: 0x148
 : public FTslEquipSkinData // Size: 0x148
{
public:
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTslParachuteSkinData = sizeof(FTslParachuteSkinData); // 328
    static_assert(sizeof(FTslParachuteSkinData) == 0x148, "Size of FTslParachuteSkinData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
