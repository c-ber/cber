#pragma once
#include "FGuid.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEngineServicePong // Size: 0x50
{
public:
    FString CurrentLevel; /* Ofs: 0x0 Size: 0x10 StrProperty EngineMessages.EngineServicePong.CurrentLevel */
    int32_t EngineVersion; /* Ofs: 0x10 Size: 0x4 IntProperty EngineMessages.EngineServicePong.EngineVersion */
    bool HasBegunPlay; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty EngineMessages.EngineServicePong.HasBegunPlay */
    uint8_t UnknownData15[0x3];
    FGuid InstanceId; /* Ofs: 0x18 Size: 0x10 StructProperty EngineMessages.EngineServicePong.InstanceId */
    FString InstanceType; /* Ofs: 0x28 Size: 0x10 StrProperty EngineMessages.EngineServicePong.InstanceType */
    FGuid SessionId; /* Ofs: 0x38 Size: 0x10 StructProperty EngineMessages.EngineServicePong.SessionId */
    float WorldTimeSeconds; /* Ofs: 0x48 Size: 0x4 FloatProperty EngineMessages.EngineServicePong.WorldTimeSeconds */
    uint8_t UnknownData4C[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEngineServicePong = sizeof(FEngineServicePong); // 80
    static_assert(sizeof(FEngineServicePong) == 0x50, "Size of FEngineServicePong is not correct.");
	auto constexpr FEngineServicePong_CurrentLevel_Offset = offsetof(FEngineServicePong, CurrentLevel);
	static_assert(FEngineServicePong_CurrentLevel_Offset == 0x0, "FEngineServicePong::CurrentLevel offset is not 0");
	auto constexpr FEngineServicePong_EngineVersion_Offset = offsetof(FEngineServicePong, EngineVersion);
	static_assert(FEngineServicePong_EngineVersion_Offset == 0x10, "FEngineServicePong::EngineVersion offset is not 10");
	auto constexpr FEngineServicePong_InstanceId_Offset = offsetof(FEngineServicePong, InstanceId);
	static_assert(FEngineServicePong_InstanceId_Offset == 0x18, "FEngineServicePong::InstanceId offset is not 18");
	auto constexpr FEngineServicePong_InstanceType_Offset = offsetof(FEngineServicePong, InstanceType);
	static_assert(FEngineServicePong_InstanceType_Offset == 0x28, "FEngineServicePong::InstanceType offset is not 28");
	auto constexpr FEngineServicePong_SessionId_Offset = offsetof(FEngineServicePong, SessionId);
	static_assert(FEngineServicePong_SessionId_Offset == 0x38, "FEngineServicePong::SessionId offset is not 38");
	auto constexpr FEngineServicePong_WorldTimeSeconds_Offset = offsetof(FEngineServicePong, WorldTimeSeconds);
	static_assert(FEngineServicePong_WorldTimeSeconds_Offset == 0x48, "FEngineServicePong::WorldTimeSeconds offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
