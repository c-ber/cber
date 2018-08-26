#pragma once
#include "FStanceTransition.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FStanceTransitionData // Size: 0x60
{
public:
    FStanceTransition StandToCrouch; /* Ofs: 0x0 Size: 0x10 StructProperty TslGame.StanceTransitionData.StandToCrouch */
    FStanceTransition CrouchToStand; /* Ofs: 0x10 Size: 0x10 StructProperty TslGame.StanceTransitionData.CrouchToStand */
    FStanceTransition StandToProne; /* Ofs: 0x20 Size: 0x10 StructProperty TslGame.StanceTransitionData.StandToProne */
    FStanceTransition ProneToStand; /* Ofs: 0x30 Size: 0x10 StructProperty TslGame.StanceTransitionData.ProneToStand */
    FStanceTransition CrouchToProne; /* Ofs: 0x40 Size: 0x10 StructProperty TslGame.StanceTransitionData.CrouchToProne */
    FStanceTransition ProneToCrouch; /* Ofs: 0x50 Size: 0x10 StructProperty TslGame.StanceTransitionData.ProneToCrouch */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFStanceTransitionData = sizeof(FStanceTransitionData); // 96
    static_assert(sizeof(FStanceTransitionData) == 0x60, "Size of FStanceTransitionData is not correct.");
	auto constexpr FStanceTransitionData_StandToCrouch_Offset = offsetof(FStanceTransitionData, StandToCrouch);
	static_assert(FStanceTransitionData_StandToCrouch_Offset == 0x0, "FStanceTransitionData::StandToCrouch offset is not 0");
	auto constexpr FStanceTransitionData_CrouchToStand_Offset = offsetof(FStanceTransitionData, CrouchToStand);
	static_assert(FStanceTransitionData_CrouchToStand_Offset == 0x10, "FStanceTransitionData::CrouchToStand offset is not 10");
	auto constexpr FStanceTransitionData_StandToProne_Offset = offsetof(FStanceTransitionData, StandToProne);
	static_assert(FStanceTransitionData_StandToProne_Offset == 0x20, "FStanceTransitionData::StandToProne offset is not 20");
	auto constexpr FStanceTransitionData_ProneToStand_Offset = offsetof(FStanceTransitionData, ProneToStand);
	static_assert(FStanceTransitionData_ProneToStand_Offset == 0x30, "FStanceTransitionData::ProneToStand offset is not 30");
	auto constexpr FStanceTransitionData_CrouchToProne_Offset = offsetof(FStanceTransitionData, CrouchToProne);
	static_assert(FStanceTransitionData_CrouchToProne_Offset == 0x40, "FStanceTransitionData::CrouchToProne offset is not 40");
	auto constexpr FStanceTransitionData_ProneToCrouch_Offset = offsetof(FStanceTransitionData, ProneToCrouch);
	static_assert(FStanceTransitionData_ProneToCrouch_Offset == 0x50, "FStanceTransitionData::ProneToCrouch offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
