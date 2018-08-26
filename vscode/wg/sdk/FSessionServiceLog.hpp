#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSessionServiceLog // Size: 0x38
{
public:
    FName Category; /* Ofs: 0x0 Size: 0x8 NameProperty SessionMessages.SessionServiceLog.Category */
    FString Data; /* Ofs: 0x8 Size: 0x10 StrProperty SessionMessages.SessionServiceLog.Data */
    FGuid InstanceId; /* Ofs: 0x18 Size: 0x10 StructProperty SessionMessages.SessionServiceLog.InstanceId */
    double TimeSeconds; /* Ofs: 0x28 Size: 0x8 DoubleProperty SessionMessages.SessionServiceLog.TimeSeconds */
    uint8_t Verbosity; /* Ofs: 0x30 Size: 0x1 ByteProperty SessionMessages.SessionServiceLog.Verbosity */
    uint8_t UnknownData31[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSessionServiceLog = sizeof(FSessionServiceLog); // 56
    static_assert(sizeof(FSessionServiceLog) == 0x38, "Size of FSessionServiceLog is not correct.");
	auto constexpr FSessionServiceLog_Category_Offset = offsetof(FSessionServiceLog, Category);
	static_assert(FSessionServiceLog_Category_Offset == 0x0, "FSessionServiceLog::Category offset is not 0");
	auto constexpr FSessionServiceLog_Data_Offset = offsetof(FSessionServiceLog, Data);
	static_assert(FSessionServiceLog_Data_Offset == 0x8, "FSessionServiceLog::Data offset is not 8");
	auto constexpr FSessionServiceLog_InstanceId_Offset = offsetof(FSessionServiceLog, InstanceId);
	static_assert(FSessionServiceLog_InstanceId_Offset == 0x18, "FSessionServiceLog::InstanceId offset is not 18");
	auto constexpr FSessionServiceLog_TimeSeconds_Offset = offsetof(FSessionServiceLog, TimeSeconds);
	static_assert(FSessionServiceLog_TimeSeconds_Offset == 0x28, "FSessionServiceLog::TimeSeconds offset is not 28");
	auto constexpr FSessionServiceLog_Verbosity_Offset = offsetof(FSessionServiceLog, Verbosity);
	static_assert(FSessionServiceLog_Verbosity_Offset == 0x30, "FSessionServiceLog::Verbosity offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
