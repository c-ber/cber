#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplayKillEvent // Size: 0x40
{
public:
    FString KillerNetId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ReplayKillEvent.KillerNetId */
    FString KillerName; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.ReplayKillEvent.KillerName */
    FString VictimNetId; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.ReplayKillEvent.VictimNetId */
    FString VictimName; /* Ofs: 0x30 Size: 0x10 StrProperty TslGame.ReplayKillEvent.VictimName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplayKillEvent = sizeof(FReplayKillEvent); // 64
    static_assert(sizeof(FReplayKillEvent) == 0x40, "Size of FReplayKillEvent is not correct.");
	auto constexpr FReplayKillEvent_KillerNetId_Offset = offsetof(FReplayKillEvent, KillerNetId);
	static_assert(FReplayKillEvent_KillerNetId_Offset == 0x0, "FReplayKillEvent::KillerNetId offset is not 0");
	auto constexpr FReplayKillEvent_KillerName_Offset = offsetof(FReplayKillEvent, KillerName);
	static_assert(FReplayKillEvent_KillerName_Offset == 0x10, "FReplayKillEvent::KillerName offset is not 10");
	auto constexpr FReplayKillEvent_VictimNetId_Offset = offsetof(FReplayKillEvent, VictimNetId);
	static_assert(FReplayKillEvent_VictimNetId_Offset == 0x20, "FReplayKillEvent::VictimNetId offset is not 20");
	auto constexpr FReplayKillEvent_VictimName_Offset = offsetof(FReplayKillEvent, VictimName);
	static_assert(FReplayKillEvent_VictimName_Offset == 0x30, "FReplayKillEvent::VictimName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
