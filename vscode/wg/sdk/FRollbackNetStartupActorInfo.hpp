#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FRollbackNetStartupActorInfo // Size: 0x30
{
public:
    uint8_t UnknownData0[0x8];
    ExternalPtr<struct UObject> Archetype; /* Ofs: 0x8 Size: 0x8 ObjectProperty Engine.RollbackNetStartupActorInfo.Archetype */
    uint8_t UnknownData10[0x18];
    ExternalPtr<struct ULevel> Level; /* Ofs: 0x28 Size: 0x8 ObjectProperty Engine.RollbackNetStartupActorInfo.Level */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFRollbackNetStartupActorInfo = sizeof(FRollbackNetStartupActorInfo); // 48
    static_assert(sizeof(FRollbackNetStartupActorInfo) == 0x30, "Size of FRollbackNetStartupActorInfo is not correct.");
	auto constexpr FRollbackNetStartupActorInfo_Archetype_Offset = offsetof(FRollbackNetStartupActorInfo, Archetype);
	static_assert(FRollbackNetStartupActorInfo_Archetype_Offset == 0x8, "FRollbackNetStartupActorInfo::Archetype offset is not 8");
	auto constexpr FRollbackNetStartupActorInfo_Level_Offset = offsetof(FRollbackNetStartupActorInfo, Level);
	static_assert(FRollbackNetStartupActorInfo_Level_Offset == 0x28, "FRollbackNetStartupActorInfo::Level offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
