#pragma once
#include "FLogBase.hpp"
#include "FWuLogGameState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuLogGameStatePeriodic // Size: 0xA0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogGameState GameState; /* Ofs: 0x58 Size: 0x44 StructProperty TslGame.WuLogGameStatePeriodic.GameState */
    uint8_t UnknownData9C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuLogGameStatePeriodic = sizeof(FWuLogGameStatePeriodic); // 160
    static_assert(sizeof(FWuLogGameStatePeriodic) == 0xA0, "Size of FWuLogGameStatePeriodic is not correct.");
	auto constexpr FWuLogGameStatePeriodic_GameState_Offset = offsetof(FWuLogGameStatePeriodic, GameState);
	static_assert(FWuLogGameStatePeriodic_GameState_Offset == 0x58, "FWuLogGameStatePeriodic::GameState offset is not 58");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
