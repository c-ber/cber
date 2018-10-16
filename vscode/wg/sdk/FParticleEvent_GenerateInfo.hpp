#pragma once
#include "EParticleEventType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FParticleEvent_GenerateInfo // Size: 0x28
{
public:
    TEnumAsByte<enum EParticleEventType> Type; /* Ofs: 0x0 Size: 0x1 ByteProperty Engine.ParticleEvent_GenerateInfo.Type */
    uint8_t UnknownData1[0x3];
    int32_t Frequency; /* Ofs: 0x4 Size: 0x4 IntProperty Engine.ParticleEvent_GenerateInfo.Frequency */
    int32_t ParticleFrequency; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.ParticleEvent_GenerateInfo.ParticleFrequency */
    bool FirstTimeOnly : 1; /* Ofs: 0xC Size: 0x1 BitMask: 01 BoolProperty Engine.ParticleEvent_GenerateInfo.FirstTimeOnly */
    bool LastTimeOnly : 1; /* Ofs: 0xC Size: 0x1 BitMask: 02 BoolProperty Engine.ParticleEvent_GenerateInfo.LastTimeOnly */
    bool UseReflectedImpactVector : 1; /* Ofs: 0xC Size: 0x1 BitMask: 04 BoolProperty Engine.ParticleEvent_GenerateInfo.UseReflectedImpactVector */
    bool bUseOrbitOffset : 1; /* Ofs: 0xC Size: 0x1 BitMask: 08 BoolProperty Engine.ParticleEvent_GenerateInfo.bUseOrbitOffset */
    uint8_t UnknownDataD[0x3];
    FName CustomName; /* Ofs: 0x10 Size: 0x8 NameProperty Engine.ParticleEvent_GenerateInfo.CustomName */
    TArray<ExternalPtr<struct UParticleModuleEventSendToGame>> ParticleModuleEventsToSendToGame; /* Ofs: 0x18 Size: 0x10 ArrayProperty Engine.ParticleEvent_GenerateInfo.ParticleModuleEventsToSendToGame */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFParticleEvent_GenerateInfo = sizeof(FParticleEvent_GenerateInfo); // 40
    static_assert(sizeof(FParticleEvent_GenerateInfo) == 0x28, "Size of FParticleEvent_GenerateInfo is not correct.");
	auto constexpr FParticleEvent_GenerateInfo_Type_Offset = offsetof(FParticleEvent_GenerateInfo, Type);
	static_assert(FParticleEvent_GenerateInfo_Type_Offset == 0x0, "FParticleEvent_GenerateInfo::Type offset is not 0");
	auto constexpr FParticleEvent_GenerateInfo_Frequency_Offset = offsetof(FParticleEvent_GenerateInfo, Frequency);
	static_assert(FParticleEvent_GenerateInfo_Frequency_Offset == 0x4, "FParticleEvent_GenerateInfo::Frequency offset is not 4");
	auto constexpr FParticleEvent_GenerateInfo_ParticleFrequency_Offset = offsetof(FParticleEvent_GenerateInfo, ParticleFrequency);
	static_assert(FParticleEvent_GenerateInfo_ParticleFrequency_Offset == 0x8, "FParticleEvent_GenerateInfo::ParticleFrequency offset is not 8");
	auto constexpr FParticleEvent_GenerateInfo_CustomName_Offset = offsetof(FParticleEvent_GenerateInfo, CustomName);
	static_assert(FParticleEvent_GenerateInfo_CustomName_Offset == 0x10, "FParticleEvent_GenerateInfo::CustomName offset is not 10");
	auto constexpr FParticleEvent_GenerateInfo_ParticleModuleEventsToSendToGame_Offset = offsetof(FParticleEvent_GenerateInfo, ParticleModuleEventsToSendToGame);
	static_assert(FParticleEvent_GenerateInfo_ParticleModuleEventsToSendToGame_Offset == 0x18, "FParticleEvent_GenerateInfo::ParticleModuleEventsToSendToGame offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
