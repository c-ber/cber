#pragma once
#include "FUniqueNetIdRepl.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPlayerReservation // Size: 0x30
{
public:
    FUniqueNetIdRepl UniqueId; /* Ofs: 0x0 Size: 0x18 StructProperty OnlineSubsystemUtils.PlayerReservation.UniqueId */
    FString ValidationStr; /* Ofs: 0x18 Size: 0x10 StrProperty OnlineSubsystemUtils.PlayerReservation.ValidationStr */
    float ElapsedTime; /* Ofs: 0x28 Size: 0x4 FloatProperty OnlineSubsystemUtils.PlayerReservation.ElapsedTime */
    uint8_t UnknownData2C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPlayerReservation = sizeof(FPlayerReservation); // 48
    static_assert(sizeof(FPlayerReservation) == 0x30, "Size of FPlayerReservation is not correct.");
	auto constexpr FPlayerReservation_UniqueId_Offset = offsetof(FPlayerReservation, UniqueId);
	static_assert(FPlayerReservation_UniqueId_Offset == 0x0, "FPlayerReservation::UniqueId offset is not 0");
	auto constexpr FPlayerReservation_ValidationStr_Offset = offsetof(FPlayerReservation, ValidationStr);
	static_assert(FPlayerReservation_ValidationStr_Offset == 0x18, "FPlayerReservation::ValidationStr offset is not 18");
	auto constexpr FPlayerReservation_ElapsedTime_Offset = offsetof(FPlayerReservation, ElapsedTime);
	static_assert(FPlayerReservation_ElapsedTime_Offset == 0x28, "FPlayerReservation::ElapsedTime offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
