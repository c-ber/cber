#pragma once
#include "FVector_NetQuantize.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FTakeHitInfo // Size: 0x58
{
public:
    float ActualDamage; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.TakeHitInfo.ActualDamage */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UClass> DamageType; /* Ofs: 0x8 Size: 0x8 ClassProperty TslGame.TakeHitInfo.DamageType */
    TWeakObjectPtr<ExternalPtr<struct UTslPlayerState>> PlayerInstigator; /* Ofs: 0x10 Size: 0x8 WeakObjectProperty TslGame.TakeHitInfo.PlayerInstigator */
    FVector_NetQuantize DamageOrigin; /* Ofs: 0x18 Size: 0xC StructProperty TslGame.TakeHitInfo.DamageOrigin */
    FVector_NetQuantize RelHitLocation; /* Ofs: 0x24 Size: 0xC StructProperty TslGame.TakeHitInfo.RelHitLocation */
    FName BoneName; /* Ofs: 0x30 Size: 0x8 NameProperty TslGame.TakeHitInfo.BoneName */
    float DamageMaxRadius; /* Ofs: 0x38 Size: 0x4 FloatProperty TslGame.TakeHitInfo.DamageMaxRadius */
    uint8_t ShotDirPitch; /* Ofs: 0x3C Size: 0x1 ByteProperty TslGame.TakeHitInfo.ShotDirPitch */
    uint8_t ShotDirYaw; /* Ofs: 0x3D Size: 0x1 ByteProperty TslGame.TakeHitInfo.ShotDirYaw */
    bool bPointDamage : 1; /* Ofs: 0x3E Size: 0x1 BitMask: 01 BoolProperty TslGame.TakeHitInfo.bPointDamage */
    bool bRadialDamage : 1; /* Ofs: 0x3E Size: 0x1 BitMask: 02 BoolProperty TslGame.TakeHitInfo.bRadialDamage */
    bool bKilled : 1; /* Ofs: 0x3E Size: 0x1 BitMask: 04 BoolProperty TslGame.TakeHitInfo.bKilled */
    uint8_t EnsureReplicationByte; /* Ofs: 0x3F Size: 0x1 ByteProperty TslGame.TakeHitInfo.EnsureReplicationByte */
    FName AttackerWeaponName; /* Ofs: 0x40 Size: 0x8 NameProperty TslGame.TakeHitInfo.AttackerWeaponName */
    FVector AttackerLocation; /* Ofs: 0x48 Size: 0xC StructProperty TslGame.TakeHitInfo.AttackerLocation */
    uint8_t UnknownData54[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFTakeHitInfo = sizeof(FTakeHitInfo); // 88
    static_assert(sizeof(FTakeHitInfo) == 0x58, "Size of FTakeHitInfo is not correct.");
	auto constexpr FTakeHitInfo_ActualDamage_Offset = offsetof(FTakeHitInfo, ActualDamage);
	static_assert(FTakeHitInfo_ActualDamage_Offset == 0x0, "FTakeHitInfo::ActualDamage offset is not 0");
	auto constexpr FTakeHitInfo_DamageType_Offset = offsetof(FTakeHitInfo, DamageType);
	static_assert(FTakeHitInfo_DamageType_Offset == 0x8, "FTakeHitInfo::DamageType offset is not 8");
	auto constexpr FTakeHitInfo_PlayerInstigator_Offset = offsetof(FTakeHitInfo, PlayerInstigator);
	static_assert(FTakeHitInfo_PlayerInstigator_Offset == 0x10, "FTakeHitInfo::PlayerInstigator offset is not 10");
	auto constexpr FTakeHitInfo_DamageOrigin_Offset = offsetof(FTakeHitInfo, DamageOrigin);
	static_assert(FTakeHitInfo_DamageOrigin_Offset == 0x18, "FTakeHitInfo::DamageOrigin offset is not 18");
	auto constexpr FTakeHitInfo_RelHitLocation_Offset = offsetof(FTakeHitInfo, RelHitLocation);
	static_assert(FTakeHitInfo_RelHitLocation_Offset == 0x24, "FTakeHitInfo::RelHitLocation offset is not 24");
	auto constexpr FTakeHitInfo_BoneName_Offset = offsetof(FTakeHitInfo, BoneName);
	static_assert(FTakeHitInfo_BoneName_Offset == 0x30, "FTakeHitInfo::BoneName offset is not 30");
	auto constexpr FTakeHitInfo_DamageMaxRadius_Offset = offsetof(FTakeHitInfo, DamageMaxRadius);
	static_assert(FTakeHitInfo_DamageMaxRadius_Offset == 0x38, "FTakeHitInfo::DamageMaxRadius offset is not 38");
	auto constexpr FTakeHitInfo_ShotDirPitch_Offset = offsetof(FTakeHitInfo, ShotDirPitch);
	static_assert(FTakeHitInfo_ShotDirPitch_Offset == 0x3c, "FTakeHitInfo::ShotDirPitch offset is not 3c");
	auto constexpr FTakeHitInfo_ShotDirYaw_Offset = offsetof(FTakeHitInfo, ShotDirYaw);
	static_assert(FTakeHitInfo_ShotDirYaw_Offset == 0x3d, "FTakeHitInfo::ShotDirYaw offset is not 3d");
	auto constexpr FTakeHitInfo_EnsureReplicationByte_Offset = offsetof(FTakeHitInfo, EnsureReplicationByte);
	static_assert(FTakeHitInfo_EnsureReplicationByte_Offset == 0x3f, "FTakeHitInfo::EnsureReplicationByte offset is not 3f");
	auto constexpr FTakeHitInfo_AttackerWeaponName_Offset = offsetof(FTakeHitInfo, AttackerWeaponName);
	static_assert(FTakeHitInfo_AttackerWeaponName_Offset == 0x40, "FTakeHitInfo::AttackerWeaponName offset is not 40");
	auto constexpr FTakeHitInfo_AttackerLocation_Offset = offsetof(FTakeHitInfo, AttackerLocation);
	static_assert(FTakeHitInfo_AttackerLocation_Offset == 0x48, "FTakeHitInfo::AttackerLocation offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
