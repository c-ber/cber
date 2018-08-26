#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelNameAndTime // Size: 0x18
{
public:
    FString LevelName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.LevelNameAndTime.LevelName */
    uint32_t LevelChangeTimeInMS; /* Ofs: 0x10 Size: 0x4 UInt32Property Engine.LevelNameAndTime.LevelChangeTimeInMS */
    uint8_t UnknownData14[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelNameAndTime = sizeof(FLevelNameAndTime); // 24
    static_assert(sizeof(FLevelNameAndTime) == 0x18, "Size of FLevelNameAndTime is not correct.");
	auto constexpr FLevelNameAndTime_LevelName_Offset = offsetof(FLevelNameAndTime, LevelName);
	static_assert(FLevelNameAndTime_LevelName_Offset == 0x0, "FLevelNameAndTime::LevelName offset is not 0");
	auto constexpr FLevelNameAndTime_LevelChangeTimeInMS_Offset = offsetof(FLevelNameAndTime, LevelChangeTimeInMS);
	static_assert(FLevelNameAndTime_LevelChangeTimeInMS_Offset == 0x10, "FLevelNameAndTime::LevelChangeTimeInMS offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
