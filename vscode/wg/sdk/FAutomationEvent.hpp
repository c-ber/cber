#pragma once
#include "EAutomationEventType.hpp"
#include "FDateTime.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAutomationEvent // Size: 0x48
{
public:
    TEnumAsByte<enum EAutomationEventType> Type; /* Ofs: 0x0 Size: 0x1 EnumProperty CoreUObject.AutomationEvent.Type */
    uint8_t UnknownData1[0x7];
    FString Message; /* Ofs: 0x8 Size: 0x10 StrProperty CoreUObject.AutomationEvent.Message */
    FString Context; /* Ofs: 0x18 Size: 0x10 StrProperty CoreUObject.AutomationEvent.Context */
    FString Filename; /* Ofs: 0x28 Size: 0x10 StrProperty CoreUObject.AutomationEvent.Filename */
    int32_t LineNumber; /* Ofs: 0x38 Size: 0x4 IntProperty CoreUObject.AutomationEvent.LineNumber */
    uint8_t UnknownData3C[0x4];
    FDateTime Timestamp; /* Ofs: 0x40 Size: 0x8 StructProperty CoreUObject.AutomationEvent.Timestamp */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAutomationEvent = sizeof(FAutomationEvent); // 72
    static_assert(sizeof(FAutomationEvent) == 0x48, "Size of FAutomationEvent is not correct.");
	auto constexpr FAutomationEvent_Type_Offset = offsetof(FAutomationEvent, Type);
	static_assert(FAutomationEvent_Type_Offset == 0x0, "FAutomationEvent::Type offset is not 0");
	auto constexpr FAutomationEvent_Message_Offset = offsetof(FAutomationEvent, Message);
	static_assert(FAutomationEvent_Message_Offset == 0x8, "FAutomationEvent::Message offset is not 8");
	auto constexpr FAutomationEvent_Context_Offset = offsetof(FAutomationEvent, Context);
	static_assert(FAutomationEvent_Context_Offset == 0x18, "FAutomationEvent::Context offset is not 18");
	auto constexpr FAutomationEvent_Filename_Offset = offsetof(FAutomationEvent, Filename);
	static_assert(FAutomationEvent_Filename_Offset == 0x28, "FAutomationEvent::Filename offset is not 28");
	auto constexpr FAutomationEvent_LineNumber_Offset = offsetof(FAutomationEvent, LineNumber);
	static_assert(FAutomationEvent_LineNumber_Offset == 0x38, "FAutomationEvent::LineNumber offset is not 38");
	auto constexpr FAutomationEvent_Timestamp_Offset = offsetof(FAutomationEvent, Timestamp);
	static_assert(FAutomationEvent_Timestamp_Offset == 0x40, "FAutomationEvent::Timestamp offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
