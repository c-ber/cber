#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPingPongSummary // Size: 0xC
{
public:
    float UnreliableAverageDelayMsec; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.PingPongSummary.UnreliableAverageDelayMsec */
    float ReliableAverageDelayMsec; /* Ofs: 0x4 Size: 0x4 FloatProperty TslGame.PingPongSummary.ReliableAverageDelayMsec */
    int8_t UnreliableSentCount; /* Ofs: 0x8 Size: 0x1 Int8Property TslGame.PingPongSummary.UnreliableSentCount */
    int8_t UnreliableMissCount; /* Ofs: 0x9 Size: 0x1 Int8Property TslGame.PingPongSummary.UnreliableMissCount */
    int8_t ReliableCount; /* Ofs: 0xA Size: 0x1 Int8Property TslGame.PingPongSummary.ReliableCount */
    uint8_t UnknownDataB[0x1];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPingPongSummary = sizeof(FPingPongSummary); // 12
    static_assert(sizeof(FPingPongSummary) == 0xC, "Size of FPingPongSummary is not correct.");
	auto constexpr FPingPongSummary_UnreliableAverageDelayMsec_Offset = offsetof(FPingPongSummary, UnreliableAverageDelayMsec);
	static_assert(FPingPongSummary_UnreliableAverageDelayMsec_Offset == 0x0, "FPingPongSummary::UnreliableAverageDelayMsec offset is not 0");
	auto constexpr FPingPongSummary_ReliableAverageDelayMsec_Offset = offsetof(FPingPongSummary, ReliableAverageDelayMsec);
	static_assert(FPingPongSummary_ReliableAverageDelayMsec_Offset == 0x4, "FPingPongSummary::ReliableAverageDelayMsec offset is not 4");
	auto constexpr FPingPongSummary_UnreliableSentCount_Offset = offsetof(FPingPongSummary, UnreliableSentCount);
	static_assert(FPingPongSummary_UnreliableSentCount_Offset == 0x8, "FPingPongSummary::UnreliableSentCount offset is not 8");
	auto constexpr FPingPongSummary_UnreliableMissCount_Offset = offsetof(FPingPongSummary, UnreliableMissCount);
	static_assert(FPingPongSummary_UnreliableMissCount_Offset == 0x9, "FPingPongSummary::UnreliableMissCount offset is not 9");
	auto constexpr FPingPongSummary_ReliableCount_Offset = offsetof(FPingPongSummary, ReliableCount);
	static_assert(FPingPongSummary_ReliableCount_Offset == 0xa, "FPingPongSummary::ReliableCount offset is not a");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
