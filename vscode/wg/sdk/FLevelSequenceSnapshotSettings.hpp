#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequenceSnapshotSettings // Size: 0x8
{
public:
    uint8_t ZeroPadAmount; /* Ofs: 0x0 Size: 0x1 ByteProperty LevelSequence.LevelSequenceSnapshotSettings.ZeroPadAmount */
    uint8_t UnknownData1[0x3];
    float FrameRate; /* Ofs: 0x4 Size: 0x4 FloatProperty LevelSequence.LevelSequenceSnapshotSettings.FrameRate */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequenceSnapshotSettings = sizeof(FLevelSequenceSnapshotSettings); // 8
    static_assert(sizeof(FLevelSequenceSnapshotSettings) == 0x8, "Size of FLevelSequenceSnapshotSettings is not correct.");
	auto constexpr FLevelSequenceSnapshotSettings_ZeroPadAmount_Offset = offsetof(FLevelSequenceSnapshotSettings, ZeroPadAmount);
	static_assert(FLevelSequenceSnapshotSettings_ZeroPadAmount_Offset == 0x0, "FLevelSequenceSnapshotSettings::ZeroPadAmount offset is not 0");
	auto constexpr FLevelSequenceSnapshotSettings_FrameRate_Offset = offsetof(FLevelSequenceSnapshotSettings, FrameRate);
	static_assert(FLevelSequenceSnapshotSettings_FrameRate_Offset == 0x4, "FLevelSequenceSnapshotSettings::FrameRate offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
