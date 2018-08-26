#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWeaponDeviationData // Size: 0x44
{
public:
    float DeviationBaseAim; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationBaseAim */
    float DeviationRecoilGainAim; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationRecoilGainAim */
    float DeviationBaseADS; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationBaseADS */
    float DeviationMax; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMax */
    float DeviationRecoilGainADS; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationRecoilGainADS */
    float DeviationRecoilGain; /* Ofs: 0x14 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationRecoilGain */
    float DeviationStanceStand; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationStanceStand */
    float DeviationMinMove; /* Ofs: 0x1C Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMinMove */
    float DeviationMaxMove; /* Ofs: 0x20 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMaxMove */
    float DeviationStanceJump; /* Ofs: 0x24 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationStanceJump */
    float DeviationStanceCrouch; /* Ofs: 0x28 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationStanceCrouch */
    float DeviationMoveMultiplier; /* Ofs: 0x2C Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMoveMultiplier */
    float DeviationMoveMaxReferenceVelocity; /* Ofs: 0x30 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMoveMaxReferenceVelocity */
    float DeviationStanceProne; /* Ofs: 0x34 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationStanceProne */
    float DeviationMoveMinReferenceVelocity; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationMoveMinReferenceVelocity */
    float DeviationBase; /* Ofs: 0x3C Size: 0x4 FloatProperty TslGame.WeaponDeviationData.DeviationBase */
    float MOA; /* Ofs: 0x40 Size: 0x4 FloatProperty TslGame.WeaponDeviationData.MOA */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWeaponDeviationData = sizeof(FWeaponDeviationData); // 68
    static_assert(sizeof(FWeaponDeviationData) == 0x44, "Size of FWeaponDeviationData is not correct.");
	auto constexpr FWeaponDeviationData_DeviationBaseAim_Offset = offsetof(FWeaponDeviationData, DeviationBaseAim);
	static_assert(FWeaponDeviationData_DeviationBaseAim_Offset == 0x0, "FWeaponDeviationData::DeviationBaseAim offset is not 0");
	auto constexpr FWeaponDeviationData_DeviationRecoilGainAim_Offset = offsetof(FWeaponDeviationData, DeviationRecoilGainAim);
	static_assert(FWeaponDeviationData_DeviationRecoilGainAim_Offset == 0x4, "FWeaponDeviationData::DeviationRecoilGainAim offset is not 4");
	auto constexpr FWeaponDeviationData_DeviationBaseADS_Offset = offsetof(FWeaponDeviationData, DeviationBaseADS);
	static_assert(FWeaponDeviationData_DeviationBaseADS_Offset == 0x8, "FWeaponDeviationData::DeviationBaseADS offset is not 8");
	auto constexpr FWeaponDeviationData_DeviationMax_Offset = offsetof(FWeaponDeviationData, DeviationMax);
	static_assert(FWeaponDeviationData_DeviationMax_Offset == 0xc, "FWeaponDeviationData::DeviationMax offset is not c");
	auto constexpr FWeaponDeviationData_DeviationRecoilGainADS_Offset = offsetof(FWeaponDeviationData, DeviationRecoilGainADS);
	static_assert(FWeaponDeviationData_DeviationRecoilGainADS_Offset == 0x10, "FWeaponDeviationData::DeviationRecoilGainADS offset is not 10");
	auto constexpr FWeaponDeviationData_DeviationRecoilGain_Offset = offsetof(FWeaponDeviationData, DeviationRecoilGain);
	static_assert(FWeaponDeviationData_DeviationRecoilGain_Offset == 0x14, "FWeaponDeviationData::DeviationRecoilGain offset is not 14");
	auto constexpr FWeaponDeviationData_DeviationStanceStand_Offset = offsetof(FWeaponDeviationData, DeviationStanceStand);
	static_assert(FWeaponDeviationData_DeviationStanceStand_Offset == 0x18, "FWeaponDeviationData::DeviationStanceStand offset is not 18");
	auto constexpr FWeaponDeviationData_DeviationMinMove_Offset = offsetof(FWeaponDeviationData, DeviationMinMove);
	static_assert(FWeaponDeviationData_DeviationMinMove_Offset == 0x1c, "FWeaponDeviationData::DeviationMinMove offset is not 1c");
	auto constexpr FWeaponDeviationData_DeviationMaxMove_Offset = offsetof(FWeaponDeviationData, DeviationMaxMove);
	static_assert(FWeaponDeviationData_DeviationMaxMove_Offset == 0x20, "FWeaponDeviationData::DeviationMaxMove offset is not 20");
	auto constexpr FWeaponDeviationData_DeviationStanceJump_Offset = offsetof(FWeaponDeviationData, DeviationStanceJump);
	static_assert(FWeaponDeviationData_DeviationStanceJump_Offset == 0x24, "FWeaponDeviationData::DeviationStanceJump offset is not 24");
	auto constexpr FWeaponDeviationData_DeviationStanceCrouch_Offset = offsetof(FWeaponDeviationData, DeviationStanceCrouch);
	static_assert(FWeaponDeviationData_DeviationStanceCrouch_Offset == 0x28, "FWeaponDeviationData::DeviationStanceCrouch offset is not 28");
	auto constexpr FWeaponDeviationData_DeviationMoveMultiplier_Offset = offsetof(FWeaponDeviationData, DeviationMoveMultiplier);
	static_assert(FWeaponDeviationData_DeviationMoveMultiplier_Offset == 0x2c, "FWeaponDeviationData::DeviationMoveMultiplier offset is not 2c");
	auto constexpr FWeaponDeviationData_DeviationMoveMaxReferenceVelocity_Offset = offsetof(FWeaponDeviationData, DeviationMoveMaxReferenceVelocity);
	static_assert(FWeaponDeviationData_DeviationMoveMaxReferenceVelocity_Offset == 0x30, "FWeaponDeviationData::DeviationMoveMaxReferenceVelocity offset is not 30");
	auto constexpr FWeaponDeviationData_DeviationStanceProne_Offset = offsetof(FWeaponDeviationData, DeviationStanceProne);
	static_assert(FWeaponDeviationData_DeviationStanceProne_Offset == 0x34, "FWeaponDeviationData::DeviationStanceProne offset is not 34");
	auto constexpr FWeaponDeviationData_DeviationMoveMinReferenceVelocity_Offset = offsetof(FWeaponDeviationData, DeviationMoveMinReferenceVelocity);
	static_assert(FWeaponDeviationData_DeviationMoveMinReferenceVelocity_Offset == 0x38, "FWeaponDeviationData::DeviationMoveMinReferenceVelocity offset is not 38");
	auto constexpr FWeaponDeviationData_DeviationBase_Offset = offsetof(FWeaponDeviationData, DeviationBase);
	static_assert(FWeaponDeviationData_DeviationBase_Offset == 0x3c, "FWeaponDeviationData::DeviationBase offset is not 3c");
	auto constexpr FWeaponDeviationData_MOA_Offset = offsetof(FWeaponDeviationData, MOA);
	static_assert(FWeaponDeviationData_MOA_Offset == 0x40, "FWeaponDeviationData::MOA offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
