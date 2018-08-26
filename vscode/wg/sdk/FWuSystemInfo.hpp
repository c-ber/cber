#pragma once
#include "FLogBase.hpp"
#include "FWuLogCharacter.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuSystemInfo // Size: 0x1A0
 : public FLogBase // Size: 0x58
{
public:
    FWuLogCharacter Character; /* Ofs: 0x58 Size: 0x48 StructProperty TslGame.WuSystemInfo.Character */
    FString OsLanguage; /* Ofs: 0xA0 Size: 0x10 StrProperty TslGame.WuSystemInfo.OsLanguage */
    FString GameLanguage; /* Ofs: 0xB0 Size: 0x10 StrProperty TslGame.WuSystemInfo.GameLanguage */
    FString OsVersion; /* Ofs: 0xC0 Size: 0x10 StrProperty TslGame.WuSystemInfo.OsVersion */
    FString CpuName; /* Ofs: 0xD0 Size: 0x10 StrProperty TslGame.WuSystemInfo.CpuName */
    FString GpuName; /* Ofs: 0xE0 Size: 0x10 StrProperty TslGame.WuSystemInfo.GpuName */
    int32_t RamInGB; /* Ofs: 0xF0 Size: 0x4 IntProperty TslGame.WuSystemInfo.RamInGB */
    uint8_t UnknownDataF4[0x4];
    FString BaseBoardSerial; /* Ofs: 0xF8 Size: 0x10 StrProperty TslGame.WuSystemInfo.BaseBoardSerial */
    TArray<struct FString> MemorySerials; /* Ofs: 0x108 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.MemorySerials */
    int32_t ArpIpCount; /* Ofs: 0x118 Size: 0x4 IntProperty TslGame.WuSystemInfo.ArpIpCount */
    uint8_t UnknownData11C[0x4];
    FString OsUserAccount; /* Ofs: 0x120 Size: 0x10 StrProperty TslGame.WuSystemInfo.OsUserAccount */
    TArray<struct FString> DiskModelNames; /* Ofs: 0x130 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.DiskModelNames */
    TArray<struct FString> DiskSerials; /* Ofs: 0x140 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.DiskSerials */
    TArray<struct FString> MonitorModelNames; /* Ofs: 0x150 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.MonitorModelNames */
    TArray<struct FString> MonitorSerials; /* Ofs: 0x160 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.MonitorSerials */
    TArray<struct FString> MemoryModelNames; /* Ofs: 0x170 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.MemoryModelNames */
    FString BaseBoardModelName; /* Ofs: 0x180 Size: 0x10 StrProperty TslGame.WuSystemInfo.BaseBoardModelName */
    TArray<struct FString> GatewayMacAddress; /* Ofs: 0x190 Size: 0x10 ArrayProperty TslGame.WuSystemInfo.GatewayMacAddress */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuSystemInfo = sizeof(FWuSystemInfo); // 416
    static_assert(sizeof(FWuSystemInfo) == 0x1A0, "Size of FWuSystemInfo is not correct.");
	auto constexpr FWuSystemInfo_Character_Offset = offsetof(FWuSystemInfo, Character);
	static_assert(FWuSystemInfo_Character_Offset == 0x58, "FWuSystemInfo::Character offset is not 58");
	auto constexpr FWuSystemInfo_OsLanguage_Offset = offsetof(FWuSystemInfo, OsLanguage);
	static_assert(FWuSystemInfo_OsLanguage_Offset == 0xa0, "FWuSystemInfo::OsLanguage offset is not a0");
	auto constexpr FWuSystemInfo_GameLanguage_Offset = offsetof(FWuSystemInfo, GameLanguage);
	static_assert(FWuSystemInfo_GameLanguage_Offset == 0xb0, "FWuSystemInfo::GameLanguage offset is not b0");
	auto constexpr FWuSystemInfo_OsVersion_Offset = offsetof(FWuSystemInfo, OsVersion);
	static_assert(FWuSystemInfo_OsVersion_Offset == 0xc0, "FWuSystemInfo::OsVersion offset is not c0");
	auto constexpr FWuSystemInfo_CpuName_Offset = offsetof(FWuSystemInfo, CpuName);
	static_assert(FWuSystemInfo_CpuName_Offset == 0xd0, "FWuSystemInfo::CpuName offset is not d0");
	auto constexpr FWuSystemInfo_GpuName_Offset = offsetof(FWuSystemInfo, GpuName);
	static_assert(FWuSystemInfo_GpuName_Offset == 0xe0, "FWuSystemInfo::GpuName offset is not e0");
	auto constexpr FWuSystemInfo_RamInGB_Offset = offsetof(FWuSystemInfo, RamInGB);
	static_assert(FWuSystemInfo_RamInGB_Offset == 0xf0, "FWuSystemInfo::RamInGB offset is not f0");
	auto constexpr FWuSystemInfo_BaseBoardSerial_Offset = offsetof(FWuSystemInfo, BaseBoardSerial);
	static_assert(FWuSystemInfo_BaseBoardSerial_Offset == 0xf8, "FWuSystemInfo::BaseBoardSerial offset is not f8");
	auto constexpr FWuSystemInfo_MemorySerials_Offset = offsetof(FWuSystemInfo, MemorySerials);
	static_assert(FWuSystemInfo_MemorySerials_Offset == 0x108, "FWuSystemInfo::MemorySerials offset is not 108");
	auto constexpr FWuSystemInfo_ArpIpCount_Offset = offsetof(FWuSystemInfo, ArpIpCount);
	static_assert(FWuSystemInfo_ArpIpCount_Offset == 0x118, "FWuSystemInfo::ArpIpCount offset is not 118");
	auto constexpr FWuSystemInfo_OsUserAccount_Offset = offsetof(FWuSystemInfo, OsUserAccount);
	static_assert(FWuSystemInfo_OsUserAccount_Offset == 0x120, "FWuSystemInfo::OsUserAccount offset is not 120");
	auto constexpr FWuSystemInfo_DiskModelNames_Offset = offsetof(FWuSystemInfo, DiskModelNames);
	static_assert(FWuSystemInfo_DiskModelNames_Offset == 0x130, "FWuSystemInfo::DiskModelNames offset is not 130");
	auto constexpr FWuSystemInfo_DiskSerials_Offset = offsetof(FWuSystemInfo, DiskSerials);
	static_assert(FWuSystemInfo_DiskSerials_Offset == 0x140, "FWuSystemInfo::DiskSerials offset is not 140");
	auto constexpr FWuSystemInfo_MonitorModelNames_Offset = offsetof(FWuSystemInfo, MonitorModelNames);
	static_assert(FWuSystemInfo_MonitorModelNames_Offset == 0x150, "FWuSystemInfo::MonitorModelNames offset is not 150");
	auto constexpr FWuSystemInfo_MonitorSerials_Offset = offsetof(FWuSystemInfo, MonitorSerials);
	static_assert(FWuSystemInfo_MonitorSerials_Offset == 0x160, "FWuSystemInfo::MonitorSerials offset is not 160");
	auto constexpr FWuSystemInfo_MemoryModelNames_Offset = offsetof(FWuSystemInfo, MemoryModelNames);
	static_assert(FWuSystemInfo_MemoryModelNames_Offset == 0x170, "FWuSystemInfo::MemoryModelNames offset is not 170");
	auto constexpr FWuSystemInfo_BaseBoardModelName_Offset = offsetof(FWuSystemInfo, BaseBoardModelName);
	static_assert(FWuSystemInfo_BaseBoardModelName_Offset == 0x180, "FWuSystemInfo::BaseBoardModelName offset is not 180");
	auto constexpr FWuSystemInfo_GatewayMacAddress_Offset = offsetof(FWuSystemInfo, GatewayMacAddress);
	static_assert(FWuSystemInfo_GatewayMacAddress_Offset == 0x190, "FWuSystemInfo::GatewayMacAddress offset is not 190");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
