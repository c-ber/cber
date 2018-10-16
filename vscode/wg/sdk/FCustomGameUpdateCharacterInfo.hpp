#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCustomGameUpdateCharacterInfo // Size: 0x28
{
public:
    bool bIsZombie; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomGameUpdateCharacterInfo.bIsZombie */
    bool bIsGroggyMode; /* Ofs: 0x1 Size: 0x1 BitMask: 01 BoolProperty TslGame.CustomGameUpdateCharacterInfo.bIsGroggyMode */
    uint8_t UnknownData2[0x2];
    float ReviveCastingTime; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.CustomGameUpdateCharacterInfo.ReviveCastingTime */
    float MultiplierGroggyDamagePerSecond; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.CustomGameUpdateCharacterInfo.MultiplierGroggyDamagePerSecond */
    float MultiplierPunchDamage; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.CustomGameUpdateCharacterInfo.MultiplierPunchDamage */
    float MultiplierZombieToZombieDamage; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.CustomGameUpdateCharacterInfo.MultiplierZombieToZombieDamage */
    uint8_t UnknownData14[0x4];
    FString ReportToken; /* Ofs: 0x18 Size: 0x10 StrProperty TslGame.CustomGameUpdateCharacterInfo.ReportToken */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCustomGameUpdateCharacterInfo = sizeof(FCustomGameUpdateCharacterInfo); // 40
    static_assert(sizeof(FCustomGameUpdateCharacterInfo) == 0x28, "Size of FCustomGameUpdateCharacterInfo is not correct.");
	auto constexpr FCustomGameUpdateCharacterInfo_ReviveCastingTime_Offset = offsetof(FCustomGameUpdateCharacterInfo, ReviveCastingTime);
	static_assert(FCustomGameUpdateCharacterInfo_ReviveCastingTime_Offset == 0x4, "FCustomGameUpdateCharacterInfo::ReviveCastingTime offset is not 4");
	auto constexpr FCustomGameUpdateCharacterInfo_MultiplierGroggyDamagePerSecond_Offset = offsetof(FCustomGameUpdateCharacterInfo, MultiplierGroggyDamagePerSecond);
	static_assert(FCustomGameUpdateCharacterInfo_MultiplierGroggyDamagePerSecond_Offset == 0x8, "FCustomGameUpdateCharacterInfo::MultiplierGroggyDamagePerSecond offset is not 8");
	auto constexpr FCustomGameUpdateCharacterInfo_MultiplierPunchDamage_Offset = offsetof(FCustomGameUpdateCharacterInfo, MultiplierPunchDamage);
	static_assert(FCustomGameUpdateCharacterInfo_MultiplierPunchDamage_Offset == 0xc, "FCustomGameUpdateCharacterInfo::MultiplierPunchDamage offset is not c");
	auto constexpr FCustomGameUpdateCharacterInfo_MultiplierZombieToZombieDamage_Offset = offsetof(FCustomGameUpdateCharacterInfo, MultiplierZombieToZombieDamage);
	static_assert(FCustomGameUpdateCharacterInfo_MultiplierZombieToZombieDamage_Offset == 0x10, "FCustomGameUpdateCharacterInfo::MultiplierZombieToZombieDamage offset is not 10");
	auto constexpr FCustomGameUpdateCharacterInfo_ReportToken_Offset = offsetof(FCustomGameUpdateCharacterInfo, ReportToken);
	static_assert(FCustomGameUpdateCharacterInfo_ReportToken_Offset == 0x18, "FCustomGameUpdateCharacterInfo::ReportToken offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
