#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSessionServicePong // Size: 0x98
{
public:
    bool Authorized; /* Ofs: 0x0 Size: 0x1 BitMask: 01 BoolProperty SessionMessages.SessionServicePong.Authorized */
    uint8_t UnknownData1[0x7];
    FString BuildDate; /* Ofs: 0x8 Size: 0x10 StrProperty SessionMessages.SessionServicePong.BuildDate */
    FString DeviceName; /* Ofs: 0x18 Size: 0x10 StrProperty SessionMessages.SessionServicePong.DeviceName */
    FGuid InstanceId; /* Ofs: 0x28 Size: 0x10 StructProperty SessionMessages.SessionServicePong.InstanceId */
    FString InstanceName; /* Ofs: 0x38 Size: 0x10 StrProperty SessionMessages.SessionServicePong.InstanceName */
    bool IsConsoleBuild; /* Ofs: 0x48 Size: 0x1 BitMask: 01 BoolProperty SessionMessages.SessionServicePong.IsConsoleBuild */
    uint8_t UnknownData49[0x7];
    FString PlatformName; /* Ofs: 0x50 Size: 0x10 StrProperty SessionMessages.SessionServicePong.PlatformName */
    FGuid SessionId; /* Ofs: 0x60 Size: 0x10 StructProperty SessionMessages.SessionServicePong.SessionId */
    FString SessionName; /* Ofs: 0x70 Size: 0x10 StrProperty SessionMessages.SessionServicePong.SessionName */
    FString SessionOwner; /* Ofs: 0x80 Size: 0x10 StrProperty SessionMessages.SessionServicePong.SessionOwner */
    bool Standalone; /* Ofs: 0x90 Size: 0x1 BitMask: 01 BoolProperty SessionMessages.SessionServicePong.Standalone */
    uint8_t UnknownData91[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSessionServicePong = sizeof(FSessionServicePong); // 152
    static_assert(sizeof(FSessionServicePong) == 0x98, "Size of FSessionServicePong is not correct.");
	auto constexpr FSessionServicePong_BuildDate_Offset = offsetof(FSessionServicePong, BuildDate);
	static_assert(FSessionServicePong_BuildDate_Offset == 0x8, "FSessionServicePong::BuildDate offset is not 8");
	auto constexpr FSessionServicePong_DeviceName_Offset = offsetof(FSessionServicePong, DeviceName);
	static_assert(FSessionServicePong_DeviceName_Offset == 0x18, "FSessionServicePong::DeviceName offset is not 18");
	auto constexpr FSessionServicePong_InstanceId_Offset = offsetof(FSessionServicePong, InstanceId);
	static_assert(FSessionServicePong_InstanceId_Offset == 0x28, "FSessionServicePong::InstanceId offset is not 28");
	auto constexpr FSessionServicePong_InstanceName_Offset = offsetof(FSessionServicePong, InstanceName);
	static_assert(FSessionServicePong_InstanceName_Offset == 0x38, "FSessionServicePong::InstanceName offset is not 38");
	auto constexpr FSessionServicePong_PlatformName_Offset = offsetof(FSessionServicePong, PlatformName);
	static_assert(FSessionServicePong_PlatformName_Offset == 0x50, "FSessionServicePong::PlatformName offset is not 50");
	auto constexpr FSessionServicePong_SessionId_Offset = offsetof(FSessionServicePong, SessionId);
	static_assert(FSessionServicePong_SessionId_Offset == 0x60, "FSessionServicePong::SessionId offset is not 60");
	auto constexpr FSessionServicePong_SessionName_Offset = offsetof(FSessionServicePong, SessionName);
	static_assert(FSessionServicePong_SessionName_Offset == 0x70, "FSessionServicePong::SessionName offset is not 70");
	auto constexpr FSessionServicePong_SessionOwner_Offset = offsetof(FSessionServicePong, SessionOwner);
	static_assert(FSessionServicePong_SessionOwner_Offset == 0x80, "FSessionServicePong::SessionOwner offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
