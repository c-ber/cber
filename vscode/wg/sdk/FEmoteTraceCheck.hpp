#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEmoteTraceCheck // Size: 0x1C
{
public:
    FVector InitialActorOffset; /* Ofs: 0x0 Size: 0xC StructProperty TslGame.EmoteTraceCheck.InitialActorOffset */
    FVector TraceVector; /* Ofs: 0xC Size: 0xC StructProperty TslGame.EmoteTraceCheck.TraceVector */
    float SphereRadius; /* Ofs: 0x18 Size: 0x4 FloatProperty TslGame.EmoteTraceCheck.SphereRadius */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEmoteTraceCheck = sizeof(FEmoteTraceCheck); // 28
    static_assert(sizeof(FEmoteTraceCheck) == 0x1C, "Size of FEmoteTraceCheck is not correct.");
	auto constexpr FEmoteTraceCheck_InitialActorOffset_Offset = offsetof(FEmoteTraceCheck, InitialActorOffset);
	static_assert(FEmoteTraceCheck_InitialActorOffset_Offset == 0x0, "FEmoteTraceCheck::InitialActorOffset offset is not 0");
	auto constexpr FEmoteTraceCheck_TraceVector_Offset = offsetof(FEmoteTraceCheck, TraceVector);
	static_assert(FEmoteTraceCheck_TraceVector_Offset == 0xc, "FEmoteTraceCheck::TraceVector offset is not c");
	auto constexpr FEmoteTraceCheck_SphereRadius_Offset = offsetof(FEmoteTraceCheck, SphereRadius);
	static_assert(FEmoteTraceCheck_SphereRadius_Offset == 0x18, "FEmoteTraceCheck::SphereRadius offset is not 18");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
