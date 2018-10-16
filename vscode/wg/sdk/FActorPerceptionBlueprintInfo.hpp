#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FActorPerceptionBlueprintInfo // Size: 0x20
{
public:
    ExternalPtr<struct UActor> Target; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.ActorPerceptionBlueprintInfo.Target */
    TArray<struct FAIStimulus> LastSensedStimuli; /* Ofs: 0x8 Size: 0x10 ArrayProperty AIModule.ActorPerceptionBlueprintInfo.LastSensedStimuli */
    bool bIsHostile; /* Ofs: 0x18 Size: 0x1 BitMask: 01 BoolProperty AIModule.ActorPerceptionBlueprintInfo.bIsHostile */
    uint8_t UnknownData19[0x7];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFActorPerceptionBlueprintInfo = sizeof(FActorPerceptionBlueprintInfo); // 32
    static_assert(sizeof(FActorPerceptionBlueprintInfo) == 0x20, "Size of FActorPerceptionBlueprintInfo is not correct.");
	auto constexpr FActorPerceptionBlueprintInfo_Target_Offset = offsetof(FActorPerceptionBlueprintInfo, Target);
	static_assert(FActorPerceptionBlueprintInfo_Target_Offset == 0x0, "FActorPerceptionBlueprintInfo::Target offset is not 0");
	auto constexpr FActorPerceptionBlueprintInfo_LastSensedStimuli_Offset = offsetof(FActorPerceptionBlueprintInfo, LastSensedStimuli);
	static_assert(FActorPerceptionBlueprintInfo_LastSensedStimuli_Offset == 0x8, "FActorPerceptionBlueprintInfo::LastSensedStimuli offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
