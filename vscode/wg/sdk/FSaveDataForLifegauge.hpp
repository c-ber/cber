#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FSaveDataForLifegauge // Size: 0x18
{
public:
    ExternalPtr<struct UTslCharacter> ViewTargetTslCharacter; /* Ofs: 0x0 Size: 0x8 ObjectProperty TslGame.SaveDataForLifegauge.ViewTargetTslCharacter */
    float HealthOrGroggyHealth; /* Ofs: 0x8 Size: 0x4 FloatProperty TslGame.SaveDataForLifegauge.HealthOrGroggyHealth */
    float HealthMaxOrGroggyHealthMax; /* Ofs: 0xC Size: 0x4 FloatProperty TslGame.SaveDataForLifegauge.HealthMaxOrGroggyHealthMax */
    float HealAmount; /* Ofs: 0x10 Size: 0x4 FloatProperty TslGame.SaveDataForLifegauge.HealAmount */
    bool bIsGroggy; /* Ofs: 0x14 Size: 0x1 BitMask: 01 BoolProperty TslGame.SaveDataForLifegauge.bIsGroggy */
    bool bHasEffect; /* Ofs: 0x15 Size: 0x1 BitMask: 01 BoolProperty TslGame.SaveDataForLifegauge.bHasEffect */
    uint8_t UnknownData16[0x2];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFSaveDataForLifegauge = sizeof(FSaveDataForLifegauge); // 24
    static_assert(sizeof(FSaveDataForLifegauge) == 0x18, "Size of FSaveDataForLifegauge is not correct.");
	auto constexpr FSaveDataForLifegauge_ViewTargetTslCharacter_Offset = offsetof(FSaveDataForLifegauge, ViewTargetTslCharacter);
	static_assert(FSaveDataForLifegauge_ViewTargetTslCharacter_Offset == 0x0, "FSaveDataForLifegauge::ViewTargetTslCharacter offset is not 0");
	auto constexpr FSaveDataForLifegauge_HealthOrGroggyHealth_Offset = offsetof(FSaveDataForLifegauge, HealthOrGroggyHealth);
	static_assert(FSaveDataForLifegauge_HealthOrGroggyHealth_Offset == 0x8, "FSaveDataForLifegauge::HealthOrGroggyHealth offset is not 8");
	auto constexpr FSaveDataForLifegauge_HealthMaxOrGroggyHealthMax_Offset = offsetof(FSaveDataForLifegauge, HealthMaxOrGroggyHealthMax);
	static_assert(FSaveDataForLifegauge_HealthMaxOrGroggyHealthMax_Offset == 0xc, "FSaveDataForLifegauge::HealthMaxOrGroggyHealthMax offset is not c");
	auto constexpr FSaveDataForLifegauge_HealAmount_Offset = offsetof(FSaveDataForLifegauge, HealAmount);
	static_assert(FSaveDataForLifegauge_HealAmount_Offset == 0x10, "FSaveDataForLifegauge::HealAmount offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
