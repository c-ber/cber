#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPacketSimulationSettings // Size: 0x14
{
public:
    int32_t PktLoss; /* Ofs: 0x0 Size: 0x4 IntProperty Engine.PacketSimulationSettings.PktLoss */
    int32_t PktOrder; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.PacketSimulationSettings.PktOrder */
    int32_t PktDup; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.PacketSimulationSettings.PktDup */
    int32_t PktLag; /* Ofs: 0xC Size: 0x4 IntProperty Engine.PacketSimulationSettings.PktLag */
    int32_t PktLagVariance; /* Ofs: 0x10 Size: 0x4 IntProperty Engine.PacketSimulationSettings.PktLagVariance */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPacketSimulationSettings = sizeof(FPacketSimulationSettings); // 20
    static_assert(sizeof(FPacketSimulationSettings) == 0x14, "Size of FPacketSimulationSettings is not correct.");
	auto constexpr FPacketSimulationSettings_PktLoss_Offset = offsetof(FPacketSimulationSettings, PktLoss);
	static_assert(FPacketSimulationSettings_PktLoss_Offset == 0x0, "FPacketSimulationSettings::PktLoss offset is not 0");
	auto constexpr FPacketSimulationSettings_PktOrder_Offset = offsetof(FPacketSimulationSettings, PktOrder);
	static_assert(FPacketSimulationSettings_PktOrder_Offset == 0x4, "FPacketSimulationSettings::PktOrder offset is not 4");
	auto constexpr FPacketSimulationSettings_PktDup_Offset = offsetof(FPacketSimulationSettings, PktDup);
	static_assert(FPacketSimulationSettings_PktDup_Offset == 0x8, "FPacketSimulationSettings::PktDup offset is not 8");
	auto constexpr FPacketSimulationSettings_PktLag_Offset = offsetof(FPacketSimulationSettings, PktLag);
	static_assert(FPacketSimulationSettings_PktLag_Offset == 0xc, "FPacketSimulationSettings::PktLag offset is not c");
	auto constexpr FPacketSimulationSettings_PktLagVariance_Offset = offsetof(FPacketSimulationSettings, PktLagVariance);
	static_assert(FPacketSimulationSettings_PktLagVariance_Offset == 0x10, "FPacketSimulationSettings::PktLagVariance offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
