#pragma once
#include "FLevelSequenceSnapshotSettings.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLevelSequencePlayerSnapshot // Size: 0x50
{
public:
    FText MasterName; /* Ofs: 0x0 Size: 0x18 TextProperty LevelSequence.LevelSequencePlayerSnapshot.MasterName */
    float MasterTime; /* Ofs: 0x18 Size: 0x4 FloatProperty LevelSequence.LevelSequencePlayerSnapshot.MasterTime */
    uint8_t UnknownData1C[0x4];
    FText CurrentShotName; /* Ofs: 0x20 Size: 0x18 TextProperty LevelSequence.LevelSequencePlayerSnapshot.CurrentShotName */
    float CurrentShotLocalTime; /* Ofs: 0x38 Size: 0x4 FloatProperty LevelSequence.LevelSequencePlayerSnapshot.CurrentShotLocalTime */
    uint8_t UnknownData3C[0x4];
    ExternalPtr<struct UCameraComponent> CameraComponent; /* Ofs: 0x40 Size: 0x8 ObjectProperty LevelSequence.LevelSequencePlayerSnapshot.CameraComponent */
    FLevelSequenceSnapshotSettings Settings; /* Ofs: 0x48 Size: 0x8 StructProperty LevelSequence.LevelSequencePlayerSnapshot.Settings */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLevelSequencePlayerSnapshot = sizeof(FLevelSequencePlayerSnapshot); // 80
    static_assert(sizeof(FLevelSequencePlayerSnapshot) == 0x50, "Size of FLevelSequencePlayerSnapshot is not correct.");
	auto constexpr FLevelSequencePlayerSnapshot_MasterName_Offset = offsetof(FLevelSequencePlayerSnapshot, MasterName);
	static_assert(FLevelSequencePlayerSnapshot_MasterName_Offset == 0x0, "FLevelSequencePlayerSnapshot::MasterName offset is not 0");
	auto constexpr FLevelSequencePlayerSnapshot_MasterTime_Offset = offsetof(FLevelSequencePlayerSnapshot, MasterTime);
	static_assert(FLevelSequencePlayerSnapshot_MasterTime_Offset == 0x18, "FLevelSequencePlayerSnapshot::MasterTime offset is not 18");
	auto constexpr FLevelSequencePlayerSnapshot_CurrentShotName_Offset = offsetof(FLevelSequencePlayerSnapshot, CurrentShotName);
	static_assert(FLevelSequencePlayerSnapshot_CurrentShotName_Offset == 0x20, "FLevelSequencePlayerSnapshot::CurrentShotName offset is not 20");
	auto constexpr FLevelSequencePlayerSnapshot_CurrentShotLocalTime_Offset = offsetof(FLevelSequencePlayerSnapshot, CurrentShotLocalTime);
	static_assert(FLevelSequencePlayerSnapshot_CurrentShotLocalTime_Offset == 0x38, "FLevelSequencePlayerSnapshot::CurrentShotLocalTime offset is not 38");
	auto constexpr FLevelSequencePlayerSnapshot_CameraComponent_Offset = offsetof(FLevelSequencePlayerSnapshot, CameraComponent);
	static_assert(FLevelSequencePlayerSnapshot_CameraComponent_Offset == 0x40, "FLevelSequencePlayerSnapshot::CameraComponent offset is not 40");
	auto constexpr FLevelSequencePlayerSnapshot_Settings_Offset = offsetof(FLevelSequencePlayerSnapshot, Settings);
	static_assert(FLevelSequencePlayerSnapshot_Settings_Offset == 0x48, "FLevelSequencePlayerSnapshot::Settings offset is not 48");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
