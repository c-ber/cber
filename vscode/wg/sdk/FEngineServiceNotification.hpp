#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServiceNotification // Size: 0x18
{
public:
    FString Text; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServiceNotification.Text */
    double TimeSeconds; /* Ofs: 0x10 Size: 0x8 DoubleProperty EngineMessages.EngineServiceNotification.TimeSeconds */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServiceNotification = sizeof(FEngineServiceNotification); // 24
    static_assert(sizeof(FEngineServiceNotification) == 0x18, "Size of FEngineServiceNotification is not correct.");
	auto constexpr FEngineServiceNotification_Text_Offset = offsetof(FEngineServiceNotification, Text);
	static_assert(FEngineServiceNotification_Text_Offset == 0x0, "FEngineServiceNotification::Text offset is not 0");
	auto constexpr FEngineServiceNotification_TimeSeconds_Offset = offsetof(FEngineServiceNotification, TimeSeconds);
	static_assert(FEngineServiceNotification_TimeSeconds_Offset == 0x10, "FEngineServiceNotification::TimeSeconds offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
