#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FReplayGroggyEvent // Size: 0x40
{
public:
    FString InstigatorNetId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.ReplayGroggyEvent.InstigatorNetId */
    FString InstigatorName; /* Ofs: 0x10 Size: 0x10 StrProperty TslGame.ReplayGroggyEvent.InstigatorName */
    FString VictimNetId; /* Ofs: 0x20 Size: 0x10 StrProperty TslGame.ReplayGroggyEvent.VictimNetId */
    FString VictimName; /* Ofs: 0x30 Size: 0x10 StrProperty TslGame.ReplayGroggyEvent.VictimName */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFReplayGroggyEvent = sizeof(FReplayGroggyEvent); // 64
    static_assert(sizeof(FReplayGroggyEvent) == 0x40, "Size of FReplayGroggyEvent is not correct.");
	auto constexpr FReplayGroggyEvent_InstigatorNetId_Offset = offsetof(FReplayGroggyEvent, InstigatorNetId);
	static_assert(FReplayGroggyEvent_InstigatorNetId_Offset == 0x0, "FReplayGroggyEvent::InstigatorNetId offset is not 0");
	auto constexpr FReplayGroggyEvent_InstigatorName_Offset = offsetof(FReplayGroggyEvent, InstigatorName);
	static_assert(FReplayGroggyEvent_InstigatorName_Offset == 0x10, "FReplayGroggyEvent::InstigatorName offset is not 10");
	auto constexpr FReplayGroggyEvent_VictimNetId_Offset = offsetof(FReplayGroggyEvent, VictimNetId);
	static_assert(FReplayGroggyEvent_VictimNetId_Offset == 0x20, "FReplayGroggyEvent::VictimNetId offset is not 20");
	auto constexpr FReplayGroggyEvent_VictimName_Offset = offsetof(FReplayGroggyEvent, VictimName);
	static_assert(FReplayGroggyEvent_VictimName_Offset == 0x30, "FReplayGroggyEvent::VictimName offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
