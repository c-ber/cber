#pragma once
#include "EDamageReason.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FDeathMessage // Size: 0xA0
{
public:
    FText KillerName; /* Ofs: 0x0 Size: 0x18 TextProperty TslGame.DeathMessage.KillerName */
    FText VictimName; /* Ofs: 0x18 Size: 0x18 TextProperty TslGame.DeathMessage.VictimName */
    bool bKillerIsOwner : 1; /* Ofs: 0x30 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bKillerIsOwner */
    bool bVictimIsOwner : 1; /* Ofs: 0x30 Size: 0x1 BitMask: 02 BoolProperty TslGame.DeathMessage.bVictimIsOwner */
    uint8_t UnknownData31[0x3];
    int32_t KillerTeamNum; /* Ofs: 0x34 Size: 0x4 IntProperty TslGame.DeathMessage.KillerTeamNum */
    int32_t VictimTeamNum; /* Ofs: 0x38 Size: 0x4 IntProperty TslGame.DeathMessage.VictimTeamNum */
    uint8_t UnknownData3C[0x4];
    ExternalPtr<struct UTslDamageType> DamageType; /* Ofs: 0x40 Size: 0x8 ObjectProperty TslGame.DeathMessage.DamageType */
    FText InsertMessage; /* Ofs: 0x48 Size: 0x18 TextProperty TslGame.DeathMessage.InsertMessage */
    TEnumAsByte<enum EDamageReason> DamageReason; /* Ofs: 0x60 Size: 0x1 EnumProperty TslGame.DeathMessage.DamageReason */
    bool bGroggy; /* Ofs: 0x61 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bGroggy */
    uint8_t UnknownData62[0x2];
    int32_t AlivePlayerNum; /* Ofs: 0x64 Size: 0x4 IntProperty TslGame.DeathMessage.AlivePlayerNum */
    int32_t AliveTeamNum; /* Ofs: 0x68 Size: 0x4 IntProperty TslGame.DeathMessage.AliveTeamNum */
    uint8_t UnknownData6C[0x4];
    FText DamageCauserName; /* Ofs: 0x70 Size: 0x18 TextProperty TslGame.DeathMessage.DamageCauserName */
    ExternalPtr<struct UTexture> DamageCauserIcon; /* Ofs: 0x88 Size: 0x8 ObjectProperty TslGame.DeathMessage.DamageCauserIcon */
    float DamageCauserIconRatio; /* Ofs: 0x90 Size: 0x4 FloatProperty TslGame.DeathMessage.DamageCauserIconRatio */
    bool bIsKillerExist; /* Ofs: 0x94 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bIsKillerExist */
    bool bIsStealKilled; /* Ofs: 0x95 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bIsStealKilled */
    bool bIsObserver; /* Ofs: 0x96 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bIsObserver */
    bool bIsObserverAndKillerIsSpectated; /* Ofs: 0x97 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bIsObserverAndKillerIsSpectated */
    bool bIsObserverAndVictimIsSpectated; /* Ofs: 0x98 Size: 0x1 BitMask: 01 BoolProperty TslGame.DeathMessage.bIsObserverAndVictimIsSpectated */
    uint8_t UnknownData99[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFDeathMessage = sizeof(FDeathMessage); // 160
    static_assert(sizeof(FDeathMessage) == 0xA0, "Size of FDeathMessage is not correct.");
	auto constexpr FDeathMessage_KillerName_Offset = offsetof(FDeathMessage, KillerName);
	static_assert(FDeathMessage_KillerName_Offset == 0x0, "FDeathMessage::KillerName offset is not 0");
	auto constexpr FDeathMessage_VictimName_Offset = offsetof(FDeathMessage, VictimName);
	static_assert(FDeathMessage_VictimName_Offset == 0x18, "FDeathMessage::VictimName offset is not 18");
	auto constexpr FDeathMessage_KillerTeamNum_Offset = offsetof(FDeathMessage, KillerTeamNum);
	static_assert(FDeathMessage_KillerTeamNum_Offset == 0x34, "FDeathMessage::KillerTeamNum offset is not 34");
	auto constexpr FDeathMessage_VictimTeamNum_Offset = offsetof(FDeathMessage, VictimTeamNum);
	static_assert(FDeathMessage_VictimTeamNum_Offset == 0x38, "FDeathMessage::VictimTeamNum offset is not 38");
	auto constexpr FDeathMessage_DamageType_Offset = offsetof(FDeathMessage, DamageType);
	static_assert(FDeathMessage_DamageType_Offset == 0x40, "FDeathMessage::DamageType offset is not 40");
	auto constexpr FDeathMessage_InsertMessage_Offset = offsetof(FDeathMessage, InsertMessage);
	static_assert(FDeathMessage_InsertMessage_Offset == 0x48, "FDeathMessage::InsertMessage offset is not 48");
	auto constexpr FDeathMessage_DamageReason_Offset = offsetof(FDeathMessage, DamageReason);
	static_assert(FDeathMessage_DamageReason_Offset == 0x60, "FDeathMessage::DamageReason offset is not 60");
	auto constexpr FDeathMessage_AlivePlayerNum_Offset = offsetof(FDeathMessage, AlivePlayerNum);
	static_assert(FDeathMessage_AlivePlayerNum_Offset == 0x64, "FDeathMessage::AlivePlayerNum offset is not 64");
	auto constexpr FDeathMessage_AliveTeamNum_Offset = offsetof(FDeathMessage, AliveTeamNum);
	static_assert(FDeathMessage_AliveTeamNum_Offset == 0x68, "FDeathMessage::AliveTeamNum offset is not 68");
	auto constexpr FDeathMessage_DamageCauserName_Offset = offsetof(FDeathMessage, DamageCauserName);
	static_assert(FDeathMessage_DamageCauserName_Offset == 0x70, "FDeathMessage::DamageCauserName offset is not 70");
	auto constexpr FDeathMessage_DamageCauserIcon_Offset = offsetof(FDeathMessage, DamageCauserIcon);
	static_assert(FDeathMessage_DamageCauserIcon_Offset == 0x88, "FDeathMessage::DamageCauserIcon offset is not 88");
	auto constexpr FDeathMessage_DamageCauserIconRatio_Offset = offsetof(FDeathMessage, DamageCauserIconRatio);
	static_assert(FDeathMessage_DamageCauserIconRatio_Offset == 0x90, "FDeathMessage::DamageCauserIconRatio offset is not 90");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
