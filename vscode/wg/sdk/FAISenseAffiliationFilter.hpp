#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAISenseAffiliationFilter // Size: 0x4
{
public:
    bool bDetectEnemies : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty AIModule.AISenseAffiliationFilter.bDetectEnemies */
    bool bDetectNeutrals : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 02 BoolProperty AIModule.AISenseAffiliationFilter.bDetectNeutrals */
    bool bDetectFriendlies : 1; /* Ofs: 0x0 Size: 0x1 BitMask: 04 BoolProperty AIModule.AISenseAffiliationFilter.bDetectFriendlies */
    uint8_t UnknownData1[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAISenseAffiliationFilter = sizeof(FAISenseAffiliationFilter); // 4
    static_assert(sizeof(FAISenseAffiliationFilter) == 0x4, "Size of FAISenseAffiliationFilter is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
